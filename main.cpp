#include <iostream>
#include <iomanip>

//using namespace std;
int main() {
    const int weight_goal =100;
    enum MONTH {kJan=0, kFeb} start_month;
    MONTH end_month = kFeb;
    int i = 0;
    if (end_month == kFeb){
        std::cout << sizeof(int) << std::endl;
    }
    std::cout << i << "\n";
    std::cout.flush();
    std::cout << "Ints" << std::setw(10) "Floats" << std::endl;
    return 0;
}
