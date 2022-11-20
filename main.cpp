#include "color.h"

int main(){
    std::cout   << clr::red         << " red "
                << clr::yellow      << " yellow "
                << clr::green       << " green "
                << clr::cyan        << " cyan "
                << clr::blue        << " blue "
                << clr::magenta     << " magenta "
                << clr::grey        << " grey "
                << clr::white       << " white "
                << clr::reset       << " reset\n";
    std::cout   << clr::on_red      << " red "
                << clr::on_yellow   << " yellow "
                << clr::on_green    << " green "
                << clr::on_cyan     << " cyan "
                << clr::on_blue     << " blue "
                << clr::on_magenta  << " magenta "
                << clr::on_grey     << " grey "
                << clr::on_white    << " white "
                << clr::reset       << " reset\n";
}