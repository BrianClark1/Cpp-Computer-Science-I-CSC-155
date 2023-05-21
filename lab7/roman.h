//============================================================================
// Name        : pe10-6.cpp
// Author 	   : Brian Clark
// Version     : CSC155 - CS Dept. Oakton Community College
//
// Date        : 04/23/2023 [Sunday]
//
// Description: Write a program that converts a number entered in Roman numerals
// 				to a positive integer. Your program should consist of a class, say, romanType.
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <unordered_map>


class romanType {
  public:
    string romanNumeral;
    int computeRoman(string romanNumeral);

    romanType() {
        cout << "Enter a roman numeral.\n";
        cin >> romanNumeral;
        computeRoman(romanNumeral);
    }
};


int romanType::computeRoman(string romanNumeral) {
          int answer;
          int N = romanNumeral.length();
          unordered_map<char, int> umap;

          umap['M'] = 1000;
          umap['D'] = 500;
          umap['C'] = 100;
          umap['L'] = 50;
          umap['X'] = 10;
          umap['V'] = 5;
          umap['I'] = 1;

      answer = 0;

      for (int j = 0; j < N; j++) {

    	  if ((umap[romanNumeral[j]] < umap[romanNumeral[j+1]] ) && (j != N -1)) {
    			  answer += umap[romanNumeral[j+1]] - umap[romanNumeral[j]];
    			  j++;
    	  }
    	  else {
    		  answer += umap[romanNumeral[j]];
    	  }
      }
  cout << "The equivalent of the Roman numeral " << romanNumeral << " is " << answer;
  return answer;
    };
