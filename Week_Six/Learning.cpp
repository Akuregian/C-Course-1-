#include <iostream>

using namespace std;

int main() 
{
	const int size = 10;
	int a[size]; //= {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};


	int current = 10;

	for (int i = 5; i < current; i++) { 
		a[i - 1] = a[i];
		//cout << a[i];
	}
	a[current - 1];

	for(int i = 0; i < 10; i++){
		cout << a[i];
	}

	return 0;
}
