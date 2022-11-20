# colorful-cout
cout with colored output by overloading &lt;&lt;

## supported foreground-colors
```cpp
std::cout << clr::red     << " red "
          << clr::yellow  << " yellow "
          << clr::green   << " green "
          << clr::cyan    << " cyan "
          << clr::blue    << " blue "
          << clr::magenta << " magenta "
          << clr::grey    << " grey "
          << clr::white   << " white "
          << clr::reset   << " reset\n";
```
![image](https://user-images.githubusercontent.com/98309632/202897381-083aa68d-6207-459b-b278-797e99e2558d.png)

## supported background-colors
```cpp
std::cout   << clr::on_red      << " red "
            << clr::on_yellow   << " yellow "
            << clr::on_green    << " green "
            << clr::on_cyan     << " cyan "
            << clr::on_blue     << " blue "
            << clr::on_magenta  << " magenta "
            << clr::on_grey     << " grey "
            << clr::on_white    << " white "
            << clr::reset       << " reset\n";
```
![image](https://user-images.githubusercontent.com/98309632/202897702-e45da53e-e301-4eb4-8695-59e9d1d5a4db.png)

## Thanks
Partly learned from: [colored-cout](https://github.com/yurablok/colored-cout)
Thanks very much
