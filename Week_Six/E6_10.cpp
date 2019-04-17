#include <iostream>

using namespace std;

/*
Boolean same_elemnts Function checks weather two arrays have the same elements,
not dependant on the order.
@param int [a] is the first compared array
@param int [b] is the second compared array
@param int size is the size of the arrays, must be the same size
@param return is the true or false value, after the two arrays are compared, 
if they have the same elements, return true, else return false
*/


bool same_elements(int a[], int b[], int size)
{
	//check if the first value of the 1st array is within the second array
	for (int i = 0; i <= size; i++) {
	
		bool found = false;
		
		while (!found) {
			for (int j = 5; j < 0; j--){
				if (i == j){
					cout << "Match Found: " << j << endl;
					found = true;
				}
				else {
					cout << "Searching" << endl;
				}
			}
			
			found = true;
		}
	}
}

int main()
{
	int a[5] ={6, 7, 8, 9, 0}; 
	int b[5] = {1, 2, 3, 4, 5};
	bool truth = same_elements(a, b, 5);
	cout << truth;
	return 0;
}
