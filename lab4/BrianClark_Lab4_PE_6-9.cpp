//============================================================================
// Name        : PE_6-9.cpp
//
// Author      : Brian S Clark
// Date		   : 03/07/2023
//
//             : This is Lab 4 of
//             : CSC-155-OC2 C++ Computer Science 1
//             : Oakton Community College
//
// Description : A function, reverseDigit, that takes an integer as a parameter
//				 and returns the number with its digits reversed.
//				 For Example:
//					the value of reverseDigit(12345) is 54321:
//============================================================================

#include <iostream>

using namespace std;

int reverseDigit(int n)
{
	cout<< n;
int reverse=0, rem;
  while(n!=0)
  {
     rem=n%10;
     reverse=reverse*10+rem;
     n/=10;
  }
 cout<< n << " with digits reversed =  "<<reverse<<", leading zeros if any are not shown"<<endl;
 return reverse;
}

int main()
{
    int n ;
    cout<<"Enter a number: ";
    cin>>n;
    reverseDigit(n);

    return 0;
}
