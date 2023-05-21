//============================================================================
// Name        : PE_8-13.cpp
//
// Author      : Brian S Clark
// Date		   : 03/26/2023
//
//             : This is Lab 6 of
//             : CSC-155-OC2 C++ Computer Science 1
//             : Oakton Community College
//
// Description : Write a program to calculate students’ average test scores and their grades.
//============================================================================

#include <iostream>
#include <fstream> //reads from a file and outputs data to a file
#include <string>  //since we are reading firstName and lastName
#include<array>
#include <iomanip> //We are using setprecision

using namespace std;

void readNStore(double testScores[10][5], string names[]) {
  ifstream infile;
  string a;
  int b,c,d,e,f, strArrCount, testRowArrCount;
  testRowArrCount = 0;
  strArrCount = 0;

//Open File
infile.open("ch8_Ex13Data.txt");

  //Build our Name Array & Test Score Array
  while (infile >> a >> b>> c >> d >> e >> f) {
	  cout << fixed << setprecision(2);
    names[strArrCount] = a;
    testScores[testRowArrCount][0] = b;
    testScores[testRowArrCount][0] = b;
    testScores[testRowArrCount][1] = c;
    testScores[testRowArrCount][2] = d;
    testScores[testRowArrCount][3] = e;
    testScores[testRowArrCount][4] =f;
    testRowArrCount++;
    strArrCount++;
  }

  //Close the File
  infile.close();
}

void avgData(double testScores[10][5], string grades[], double avgTestScores[]) {
 cout << fixed << setprecision(2);
  double sum,avg;
  char letterGrade;


  for (int j = 9; j>= 0; j--){
    sum = 0;
    for ( int i = 4; i >= 0; i--) {
      sum += testScores[j][i];
    }
    avg = sum / 5;
    avgTestScores[j] = avg;
    if ( (avg<=100) && (avg >=90)){
      letterGrade = 'A';
    }
    else if ( (avg<=89.99) && (avg >=80)){
      letterGrade = 'B';
    }
    else if ( (avg<=79.99) && (avg >=70)){
      letterGrade = 'C';
    }
    else if ( (avg<=69.99) && (avg >=60)){
      letterGrade = 'D';
    }
    else if ( (avg<=59.99) && (avg >=0)){
      letterGrade = 'F';
    }
    grades[j] = letterGrade;
  }
}

int main() {
  cout << fixed << setprecision(2);
  string names[10], grades[10];
  double testScores[10][5];
  double avgTestScores[10], classAvg, classAvgSum;

  readNStore(testScores, names);
  avgData(testScores, grades, avgTestScores);

  cout << "Name" << setw(5) << "\t"  << "Test 1" << "\t" << "Test 2 " << "\t" << "Test 3"  << "\t" << "Test 4"  << "\t" << "Test 5" << "\t" << "Average"<< "\t" << "Grade" << endl;

  for (int p = 0; p <= 9; p++){
	  cout << names[p] <<  setw(5) << " " << "\t";
    for ( int i = 0; i <= 4; i++) {
      cout << testScores[p][i] <<"\t";
    }
    cout << avgTestScores[p] <<  setw(5) << " ";
    cout << grades[p] ;
    cout << endl;
  }
  cout << endl << endl;

  //Calculate Class Avg
	for ( int m = 9; m >= 0; m--) {
	  classAvgSum += avgTestScores[m];
	}

	classAvg = classAvgSum /10;
	cout << "Class Average: " << classAvg << endl;



    return 0;
}

