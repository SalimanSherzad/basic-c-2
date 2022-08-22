//headers to enable inputs and outputs
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables for hours worked, pay rate, total pay
    //could have decimals so we use double type
    double hoursWorked, payRate, totalPay;

    //prompt user for hours worked and pay rate
    //store inputs in variables
    cout << "Enter the number of hours worked:" << endl;
    cin >> hoursWorked;

    cout << "Enter the hourly pay rate:" << endl;
    cin >> payRate;

    //calculate totalPay
    totalPay = hoursWorked*payRate;

    //output result to screen
    cout << fixed << setprecision(2) <<  "The total pay is: $" << totalPay << endl;

    return 0;
}
