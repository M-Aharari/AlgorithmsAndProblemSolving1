#include <iostream>
using namespace std;

enum enNumberType {Odd =1, Even = 2};

short ReadNumber()
{
    short Num;
    cout << "Please enter a number? ";
    cin >> Num;
    return Num;
}

enNumberType CheckNumberType(short Num)
{
    short Result = Num % 2;
    if (Result == 0)
       return enNumberType::Even;
    else
        return enNumberType::Odd;

}

void PrintNumberType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "Even!\n";
    else
        cout << "Odd!\n";
}


int main()
{
    cout << "Hello World!\n\n";

    PrintNumberType(CheckNumberType(ReadNumber()));














    system("pause>0");
    return 0;
}

