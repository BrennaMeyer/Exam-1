// Exam 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer:Brenna Meyer
// Date: March, 12, 2025
// Requirements(Some): Sales This Month Commission Rate
//Less than $10, 000                                     5 %
//$10, 000–$14, 999                                 10 %
//$15, 000–$17, 999                                12 %
//$18, 000–$21, 999                                14 %
//$22, 000 or more                                   16 %

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double sales,
        rate,
        commission,
        advance,
        pay;

    //Entrys
    cout << "Please enter the sale person's monthly amount of sales";
    cin >> sales;
    cout << "Please enter the advnace amount for this";
    cin >> advance;

    //If else 
    if (sales < 10000)
        rate = 0.05;
    else if (sales < 14999)
        rate = 0.1;
    else if (sales < 17999)
        rate = 0.12;
    else if (sales < 21999)
        rate = 0.14;
    else
        rate = 0.16;

    // Equations
    commission = sales * rate;
    pay = commission - advance;

    //output
    cout << fixed << showpoint << setprecision(2);
    cout << "n\Pay Results\n";
    cout << "-----------\n";
    cout << "Sales: $" << sales << endl;
    cout << "Commission Rate:" << rate << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Advanced Pay: $" << advance << endl;
    cout << "Remaining Pay: $" << pay << endl;
    return 0;
}


