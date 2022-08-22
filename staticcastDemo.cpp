#include <iostream>
using namespace std;

int main()
{
    double myNumber = 1/2;

    cout << "double myNumber = 1/2; outputs:" << endl;
    cout << myNumber << endl;

    myNumber = static_cast<double>(1)/2;

    cout << "myNumber = static_cast<double>(1)/2; outputs:" << endl;
    cout << myNumber << endl;

    myNumber = static_cast<double>(1/2);

    cout << "myNumber = static_cast<double>(1/2); outputs:" << endl;
    cout << myNumber << endl;

    return 0;
}