#include <iostream>

using namespace std;



/*__________________________________________________________
Swap Function that swaps two index positions
@param int& A, first array index position
@param int& B, second array index position
@return the new arrays element positions
*/
void swap (int& A, int& B)
{
	int temp = A;
	A = B;
	B = temp;
	return;
}

/*__________________________________________________________
Sorting Function that sorts an array
@param int a[] is the array to be sorted
@param size is the size of the array being sorted
@return the array sorted
*/
int sorting(int a[], int size)
{
	for (int j = size - 1; j > 0; j--){
		bool swapped = false;
		for (int i = 0; i < j; i++){
			if (a[i] > a[i + 1]){
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}

		if (!swapped){
			return 0;
		}
	}
	return 0;
}

/*______________________________________________________________________________
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
	int tempA[5];
	int tempB[5];
	int matches = 0;

	sorting(a, size);	
	sorting(b, size);

	for (int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if (a[i] == b[j]) {
				matches++;
				break;
			}
		}
	}
	if (matches == size) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	const int Max_inputs = 9;
	int elementsA[Max_inputs];
	int elementsB[Max_inputs];

	for (int i = 0; i < Max_inputs; i++){
		cout << "Enter numbers for array A: ";
		cin >> elementsA[i];
	}

	for (int i = 0; i < Max_inputs; i++){
		cout << "Enter numbers for array B: ";
		cin >> elementsB[i];
	}

	bool truth = same_elements(elementsA, elementsB, Max_inputs);
	if (!truth) {
		cout << "Arrays do not Match" << endl;

		for (int i = 0; i < Max_inputs; i++) {
			cout << elementsA[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < Max_inputs; i++) {
			cout << elementsB[i] << " ";
		}
	}
	else {
		cout << "There a Match!" << endl;
		for (int i = 0; i < Max_inputs; i++) {
			cout << elementsA[i] << " ";
		}
		cout << endl;
		
		for (int i = 0; i < Max_inputs; i++) {
			cout << elementsB[i] << " ";
		}

	}
	return 0;
}
