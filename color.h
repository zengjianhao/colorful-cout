//
// Created by maelstorms on 2022/11/17.
//

#ifndef COLOR_COUT_COLOR_H
#define COLOR_COUT_COLOR_H

#include <iostream>
#include <cstdint>

// 确定所在的平台，并导入头文件
#if defined(__unix__) || defined(__unix) || (defined(__APPLE__) && defined(__MACH__))
#   define TERMCOLOR_TARGET_POSIX
#   include <unistd.h>
#elif defined(_WIN32) || defined(_WIN64)
#   define TERMCOLOR_TARGET_WINDOWS
#   include <windows.h>
#endif


// 可选颜色的枚举
#if defined(TERMCOLOR_TARGET_POSIX)
enum class clr : uint8_t {
    grey=30, red=31, green=32, yellow=33, blue=34, magenta=35, cyan=36, white=37,
    on_grey=40, on_red=41, on_green=42, on_yellow=43, on_blue=44, on_magenta=45, on_cyan=46, on_white=47,
    reset=0
};
#elif defined(TERMCOLOR_TARGET_WINDOWS)
enum class clr : uint16_t {
    grey, red, green, yellow, blue, magenta, cyan, white,
    on_grey, on_red, on_green, on_yellow, on_blue, on_magenta, on_cyan, on_white,
    reset
};
#endif

// 设置windows平台下的相关函数
#if defined(TERMCOLOR_TARGET_WINDOWS)
    uint16_t getColorCode(clr color);                   // 返回颜色代码
    void setConsoleTextAttr(uint16_t set);              // 加载颜色代码
#endif



// 重载输出运算符
std::ostream& operator<<(std::ostream &os, clr color) {
// 如果是Windows平台
#if defined(TERMCOLOR_TARGET_WINDOWS)
    unit16_t colorCode = getColorCode(color);           // 获取颜色代码
    unit16_t background = colorCode & 0x00F0;           // 将颜色代码和11110000做与运算，得到前四位作为背景色
    unit16_t foreground = colorCode & 0x000F;           // 将颜色代码和00001111做与运算，得到后四位作为字体色
    os.flush();                                         // 刷新流
    set = background | foreground                       // 将背景色和字体色组合
    setConsoleTextAttr(set);                            // 加载颜色代码
    return os;
// 如果是POSIX标准
#elif defined(TERMCOLOR_TARGET_POSIX)
    if(color==clr::reset)
        os << "\033[m";
    else
        os << "\033[" << static_cast<uint32_t>(color) << "m";
    return os;

#endif
}

#endif //COLOR_COUT_COLOR_H
