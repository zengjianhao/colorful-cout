//
// Created by maelstorms on 2022/11/17.
//
#if defined(TERMCOLOR_TARGET_WINDOWS)

uint16_t getColorCode(clr color){
    switch (color){
    case clr::grey:         return FOREGROUND_BLUE  | FOREGROUND_GREEN | FOREGROUND_RED;
    case clr::blue:         return FOREGROUND_BLUE  | FOREGROUND_INTENSITY;
    case clr::green:        return FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    case clr::cyan:         return FOREGROUND_BLUE  | FOREGROUND_GREEN | FOREGROUND_INTENSITY;
    case clr::red:          return FOREGROUND_RED   | FOREGROUND_INTENSITY;
    case clr::magenta:      return FOREGROUND_BLUE  | FOREGROUND_RED   | FOREGROUND_INTENSITY;
    case clr::yellow:       return FOREGROUND_GREEN | FOREGROUND_RED   | FOREGROUND_INTENSITY;
    case clr::white:        return FOREGROUND_BLUE  | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY;
    case clr::on_blue:      return BACKGROUND_BLUE;
    case clr::on_red:       return BACKGROUND_RED;
    case clr::on_magenta:   return BACKGROUND_BLUE  | BACKGROUND_RED;
    case clr::on_grey:      return BACKGROUND_BLUE  | BACKGROUND_GREEN | BACKGROUND_RED;
    case clr::on_green:     return BACKGROUND_GREEN | BACKGROUND_INTENSITY;
    case clr::on_cyan:      return BACKGROUND_BLUE  | BACKGROUND_GREEN | BACKGROUND_INTENSITY;
    case clr::on_yellow:    return BACKGROUND_GREEN | BACKGROUND_RED   | BACKGROUND_INTENSITY;
    case clr::on_white:     return BACKGROUND_BLUE  | BACKGROUND_GREEN | BACKGROUND_RED | BACKGROUND_INTENSITY;
    case clr::reset:        return static_cast<uint16_t>(0xFF);
    }
}
void setConsoleTextAttr(uint16_t set) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), set);
}

#endif