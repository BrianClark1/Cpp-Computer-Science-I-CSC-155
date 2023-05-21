//============================================================================
// Name        : Lab1
// 			   : CSC-155 C++ Computer Science 1
//			   : Dept. of CS - Oatkton Community College
//
// Author      : Brian Clark
// Date		   : 2/6/2023
//
// Description : Solution to Programming Exercise 3-5 of
// 			     C++ Programming: From Problem Analysis to Program Design 8e.
// 			   	 by D.S. Malik, Cengage Learning 2018
// 			   : CSC-155 C++ Computer Science 1
//============================================================================

#include <iostream>
#include <fstream> //reads from a file and outputs data to a file
#include <iomanip> //We are using setprecision
#include <string>  //since we are reading firstName and lastName
using namespace std;

int main() {
     ifstream inFile;
    ofstream outFile;

    double currentSalary, percentagePay;
    string lastname, firstname, fileName;

    cout << "Enter the name of your input file: ";
    cin >> fileName;

    inFile.open(fileName);
    outFile.open("Ch3_Ex5Output.dat");

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    inFile >> lastname >> firstname >> currentSalary >> percentagePay;
    outFile << firstname << " " << lastname << " " << currentSalary + (currentSalary * (percentagePay / 100)) << endl;

    inFile >> lastname >> firstname >> currentSalary >> percentagePay;
    outFile << firstname << " " << lastname << " " << currentSalary + (currentSalary * (percentagePay / 100)) << endl;

    inFile >> lastname >> firstname >> currentSalary >> percentagePay;
    outFile << firstname << " " << lastname << " " << currentSalary + (currentSalary * (percentagePay / 100)) << endl;

    inFile.close();
    outFile.close();
}
