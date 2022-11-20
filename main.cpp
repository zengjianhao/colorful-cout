#include "color.h"

int main(){
    std::cout << clr::red     << " red "
              << clr::yellow  << " yellow "
              << clr::green   << " green "
              << clr::cyan    << " cyan "
              << clr::blue    << " blue "
              << clr::magenta << " magenta "
              << clr::grey    << " grey "
              << clr::white   << " white "
              << clr::reset   << " reset\n";
    std::cout << clr::red     << clr::on_cyan    << " red "
              << clr::yellow  << clr::on_blue    << " yellow "
              << clr::green   << clr::on_magenta << " green "
              << clr::cyan    << clr::on_red     << " cyan "
              << clr::blue    << clr::on_yellow  << " blue "
              << clr::magenta << clr::on_green   << " magenta "
              << clr::grey    << clr::on_white   << " grey "
              << clr::white   << clr::on_grey    << " white "
              << clr::reset                      << " reset\n";
}