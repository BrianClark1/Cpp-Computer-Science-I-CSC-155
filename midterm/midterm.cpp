//============================================================================
// Name        : Brian Clark
// Date        : April 15 2023
//============================================================================

#include <iostream>
using namespace std;
#include <cstdlib> //  rand()  srand()
#include <ctime> //  time()

//Global Declaration of SIZE so we can use it throughout
const int SIZE = 20;

//Declaring average so we can use it in later functions
double average(int v[]) {

	double sum = 0;
	double avg = 0;

	//Calculating sum of entire array
    for (int z = 0; z < SIZE; z++) {
    	sum += v[z];
    }

    //Computing Average
    avg = sum / 20;
    cout << avg << endl;

    return avg;

}



void fancyPrint() {
	//Initializing the variables we will need
	int arr[SIZE];
	int evenSum = 0;
	int oddOtherSum = 0;


	//init random number generator with ever changing time
    srand(time(0));

    // initialize the array with random integers between 1 and 100
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1; // Modulo to set bounds along with the 0 check
    }

    // output all elements with space delimiting
    for (int m = 0; m < 20; m++) {
        cout << arr[m] << " ";
    }

    cout << endl;

    // Compute sum of all evens
    for (int j = 0; j < SIZE; j += 2) {
    	evenSum += arr[j];
    }

    //Print out even sum
    cout << evenSum << endl;

    // Compute sum of every other odd
    for (int k = 1; k < SIZE; k += 4) {
    	oddOtherSum += arr[k];
    }

    //Print out value of every other odd
    cout << oddOtherSum << endl;

    //C
    average(arr);

}


int main() {
	fancyPrint();
	return 0;
}
