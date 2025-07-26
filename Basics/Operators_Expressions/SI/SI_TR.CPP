/*
Problem Statement: Simple Interest & Total Repayment
You are tasked with writing a C++ program that calculates the Simple Interest and the Total Amount to be Paid on a loan.
📋 Scenario:
A person borrows a certain amount of money (called the principal) from a bank at a fixed annual interest rate. The loan is to be repaid after a certain number of years. Your program should calculate:
- The Simple Interest using the formula:
\text{SI} = \frac{P \times R \times T}{100}- The Total Amount to be Paid, which is:
\text{Total} = P + \text{SI}

🔍 Requirements:
- Prompt the user to enter:
- Principal amount (₹)
- Rate of interest (% per annum)
- Time (in years)
- Calculate and display:
- Simple Interest (₹)
- Total Amount to be Paid (₹)


*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int principal_amount, rateOfInterest, time, SimpleInterest, TotalAmount;

    cout << "enter principal amount (inr) : ";
    cin >> principal_amount;

    cout << "enter rate of interest (per annum) : ";
    cin >> rateOfInterest;

    cout << "enter time (years) : ";
    cin >> time;

    SimpleInterest = (principal_amount * rateOfInterest * time) / 100;
    TotalAmount = principal_amount + SimpleInterest;

    cout << "the simple interest : " << SimpleInterest << " rs"<< endl;
    cout << "total amount to be paid : " << TotalAmount << " rs" << endl;

    return 0;
}