//============================================================================
// Name        : Lab2
// 			   : CSC-155-OC2 C++ Computer Science 1
//			   : Dept. of CS - Oatkton Community College
//
// Author      : Brian Clark
// Date		   : 2/18/2023
//
// Description : Solution to Programming Exercise 4-17 of
// 			     C++ Programming: From Problem Analysis to Program Design 8e.
// 			   	 by D.S. Malik, Cengage Learning 2018
// 			   : CSC-155 C++ Computer Science 1
//============================================================================


#include <iostream>

using namespace std;
//Least Price / ft^2
int main() {
    // Write your main here
  double colonialPrPSqFt, splitPrPSqFt, singlePrPSqFt,
  colonialBasePrice, colonialArea, splitBasePrice, splitArea,
  singleBasePrice, singleArea;

  cout << "Enter the Price of the Colonial model: ";
  cin >> colonialBasePrice;
  cout << "\n";
  cout << "Enter the finished area in square feet of the colonial model: ";
  cin >> colonialArea;
  cout << "\n";
  colonialPrPSqFt = colonialBasePrice / colonialArea;

  cout << "Enter the Price of the split entry model: ";
  cin >> splitBasePrice;
  cout << "\n";
  cout << "Enter the finished area in square feet of split entry model: ";
  cin >> splitArea;
  cout << "\n";
  splitPrPSqFt = splitBasePrice / splitArea;

  cout << "Enter the Price of the single story model: ";
  cin >> singleBasePrice;
  cout << "\n";
  cout << "Enter the finished area in square feet of single story model: ";
  cin >> singleArea;
  cout << "\n";
  singlePrPSqFt = singleBasePrice / singleArea;


  if (colonialPrPSqFt < splitPrPSqFt && colonialPrPSqFt < singlePrPSqFt)
  cout << "The price per square foot of the colonial model is the least.";

  if (splitPrPSqFt < colonialPrPSqFt && splitPrPSqFt < singlePrPSqFt)
  cout << "The price per square foot of the split-entry model is the least.";

  if (singlePrPSqFt < colonialPrPSqFt && singlePrPSqFt < splitPrPSqFt)
  cout << "The price per square foot of the single-story model is the least.";

  if (colonialPrPSqFt == splitPrPSqFt && colonialPrPSqFt != singlePrPSqFt)
  cout << "The price per square foot of the colonial and split-entry models tie for the least.";

  if (colonialPrPSqFt == singlePrPSqFt && colonialPrPSqFt != splitPrPSqFt)
  cout << "The price per square foot of the colonial and single-story models tie for the least.";

  if (splitPrPSqFt == singlePrPSqFt && colonialPrPSqFt != splitPrPSqFt)
  cout << "The price per square foot of the single-story and split-entry models tie for the least.";

  if (splitPrPSqFt == singlePrPSqFt && colonialPrPSqFt == splitPrPSqFt)
  cout << "The price per square foot all three models are the same.";

    return 0;
}
