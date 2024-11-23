#include <iostream>
using namespace std;

struct stInfo
{
    short Age;
    bool HasDrivingLicense;
};


stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please enter your age? ";
    cin >> Info.Age;


    cout << "Do you have a driving license? ";
    cin >> Info.HasDrivingLicense;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return (Info.Age > 18 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "Your application is accepted!\n";
    else
        cout << "Your application was not accepted!\n";
}



int main()
{
    cout << "Hello World!\n\n";

    PrintResult(ReadInfo());














    system("pause>0");
    return 0;
}

