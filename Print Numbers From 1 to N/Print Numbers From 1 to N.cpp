#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// #Course_4_Solution_26
// Print Numbers From 1 to N.

int ReadNumber()
{
    int Number;
    cout << "Please Eneter a Number ?" << endl;
    cin >> Number;
    
    return Number;
}

void PrintRangeFrom1toN_UsingWhile(int N)
{
    int Counter = 0;

    cout << "Range Printed using while statement \n";

    while (Counter < N)
    {
        Counter++;
        cout << Counter << endl;
    }

}

void PrintRangeFrom1toN_UsingDoWhile(int N)
{
    int Counter = 0;

    cout << "Range Printed Using Do..While statement\n";
    do
    {
        Counter++;
        cout << Counter << endl;
    } while (Counter < N);

}

void PrintRangeFrom1toN_UsingFor(int N)
{
    cout << "Range printed using fo statement\n";

    for (int Counter = 1; Counter <= N; Counter++)
    {
        cout << Counter << endl;
    }
}


int main()
{
    int N = ReadNumber();
    PrintRangeFrom1toN_UsingWhile(N);
    PrintRangeFrom1toN_UsingDoWhile(N);
    PrintRangeFrom1toN_UsingFor(N);
}
