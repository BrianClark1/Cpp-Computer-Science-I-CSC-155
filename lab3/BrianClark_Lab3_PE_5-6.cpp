//============================================================================
//
// Lab3:		CSC-155-OC2 C++ Computer Science 1
//			    Department of Computer Science
//				Oatkton Community College
//
// Purpose : 	 Solve Programming Exercise 5-6 (p. 341)
// 			     C++ Programming 8e, by D.S. Malik,
// 			   	 CENGAGE  Learning, 2018
//
//
// Author      : Brian Clark
// Date		   : 2/26/2023 [Sunday]
//
// File Name: BrianClark_Lab3_PE_5-6.cpp
//============================================================================

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  int positiveInteger, sqrtPositiveInteger, i;


  cout << "Input a positive integer greater than or equal to 1: ";
  cin >> positiveInteger;
  cout << "\n";
  cout << "The number you entered is: ";
  cout << positiveInteger;
  cout << "\n";

  sqrtPositiveInteger = round(sqrt(positiveInteger));

  if (positiveInteger <= 2) {
    cout << "It is a prime number";
    return 0;
  }

   if (positiveInteger > 2){
    for (i = 3; i <= sqrtPositiveInteger; i += 2) {
      if ((positiveInteger % i == 0)){
          cout << "this number is not prime";
          return 0;
          break;
      };
    };
  }

  cout << "It is a prime number";

  return 0;

}
