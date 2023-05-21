//============================================================================
// Name        	: PE_16-15.cpp
// Author      	: Brian Clark
//
//CSC 155-001	: Lab 08 - CSC 155 - CS Dept. Oakton Community College
//
// Date	       	: May 6. 2023 [Saturday]
//
// Description : Write a version of the binary search algorithm that can be used to search a string vector object.
// Must use the selection sort algorithm you developed in Programming Exercise 16-12 to sort the vector.
// Also, write a program to test your algorithm.
//
//============================================================================

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int binarySearch(vector<string> list, string searchItem);
void selectionSort(vector<string>& list);

int main()
{
    vector<string> nameList;
    string name;
    int index;

    cout << "Enter first names (zzz to end the input):" << endl;

    cin >> name;

    while (name != "zzz")
    {
        nameList.push_back(name);
        cin >> name;
    }

    cout << endl;

    selectionSort(nameList);

    cout << "Enter the name to be searched: ";
    cin >> name;
    cout << endl;

    index = binarySearch(nameList, name);

    if (index != -1)
        cout << name << " is found in the list." << endl;
    else
        cout << name << " is not in the list." << endl;

    return 0;
}

int binarySearch(vector<string> list, string searchItem)
{

    int left = 0;
    int right = list.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (list[mid] == searchItem) {
        	//Found it!
            return mid;
        } else if (list[mid] < searchItem) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}//end binarySearch

void selectionSort(vector<string>& list)
{
    int n = list.size();
    string smallest, current;
    int smallestIndex;

    for (int i = 0; i < n - 1; i++) {
      smallest = list[i];
      smallestIndex = i;
      for (int j = i + 1; j < n; j++) {
      current = list[j];
      int m = smallest.compare(current);

         if ( m > 0){
          smallest = current;
          smallestIndex = j;
         }

      }
           swap(list[i], list[smallestIndex]);
    }
}




