#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;
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
    // File IO
    string line;
    ofstream myfileI (input.txt, ios::app);
    if (myfileI.ispoen())
    {
        myfileI << "\nAdding line.\n";
        myfileI << "Adding another line.\n";
        myfileI.close()
    }
    else std::cout << "unable to open file for writing";
    ifstream myfileO (input.txt);
    if(myfileO.is_open())
    {
        while (getline(myfileO,line))
        {
            count << line << "\n";
        }
        myfileO.close()
    }
    else std::cout << "Unable to open file for reading";
    
    return 0;
}
