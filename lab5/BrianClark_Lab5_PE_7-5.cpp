//============================================================================
// Name        : PE_7-5.cpp
//
// Author      : Brian S Clark
// Date		   : 03/26/2023
//
//             : This is Lab 5 of
//             : CSC-155-OC2 C++ Computer Science 1
//             : Oakton Community College
//
// Description : Write a program that can be used to calculate the federal tax.
//				The tax is calculated as follows: For single people, the standard exemption is $4,000; for married people,
//				the standard exemption is $7,000. A person can also put up to 6% of his or her gross income in a pension plan.
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
#include <string> // for string class


  void getData(string &marryStatus, int &referenceKids, double &referenceSalary, double &howMuchIntoPension) {

    cout << "Enter marital status: 'm' (married) or 's' (single):";
    cin >> marryStatus;

    if (marryStatus == "m") {
    cout << "How many children do you have under the age of 14? ";
    cin >> referenceKids;
    cout << "\n";

    cout << "What is your combined gross salary?  ";
    cin >> referenceSalary;
    }

    else {
    referenceKids = 0;
    cout << "What is your gross salary?  ";
    cin >> referenceSalary;
    } //end if/else

    cout << "Enter the Percentage of gross income contributed to a pension fund, up to 6%:   ";
    cin >> howMuchIntoPension;

  }

  double taxAmount(string marriageStatus, int anyKids, double grossIncome, double pension) {
    double taxRate, tax, standardExemption, personalExemption, pensionInput, taxableIncome;

    pensionInput = grossIncome * (pension / 100);

    if (marriageStatus == "s"){
      standardExemption = 4000;
      personalExemption = 1500;

      grossIncome = grossIncome - personalExemption - standardExemption - pensionInput;

    }
    else if (marriageStatus == "m") {
      standardExemption = 7000;
      personalExemption = 3000;


      if (anyKids > 0) {
        personalExemption += 1500 * anyKids;
      }
      grossIncome = grossIncome - personalExemption - standardExemption - pensionInput;

    }

    if(grossIncome <= 15000) {
      taxRate = .15;
      tax = grossIncome * taxRate;
    }
    else if (grossIncome >= 15001 && grossIncome <= 40000) {
      taxRate = .25; //of the taxable income over $15,000
      // tax = 2250;
      taxableIncome = grossIncome - 15000;
      tax = taxableIncome * taxRate + 2250;
    }
    else if (grossIncome >= 40000) {
      taxRate = .35;// of the taxable income over $40,000
      // tax = 8460;
      taxableIncome = grossIncome - 40000;
      tax = taxableIncome * taxRate + 8460;
    }

//    cout << "TAX: " << tax;
//    cout << "\n";
    // cout << "pensionInput: "<<pensionInput;
    // cout << "\n";
    // cout>> tax
    // cout << "\n";
    // cout>> tax

    return tax;

  }


int main() {
cout << fixed << setprecision(2);

    string areTheyMarried;
    int numberOfChildren;
    double grossSalary, pensionFund, federalTax;

    getData(areTheyMarried, numberOfChildren, grossSalary, pensionFund);
//    cout << "areTheyMarried: " << areTheyMarried;
//    cout << "\n";
//    cout << "numberOfChildren: " << numberOfChildren;
//    cout << "\n";
//    cout << "grossSalary: " << grossSalary;
//    cout << "\n";
//    cout << "pensionFund: " << pensionFund;
//    cout << "\n";

  federalTax = taxAmount(areTheyMarried, numberOfChildren, grossSalary, pensionFund);
  cout << "Your tax for the year is: " << federalTax;


    return 0;
}
