#include <iostream>
using namespace std;

int main() {
	int matrix[5] = {6,4,1,5,2};
	int i, j;

	for(i=0; i<5; ++i) 
		for(j=0; j<5-1; ++j) {
			if(matrix[i] < matrix[j]) {
				int temp;
				temp = matrix[j];
				matrix[j] = matrix[i];
				matrix[i] = temp;
			}
		}
	for(i=0; i<5; ++i)  {
		cout << matrix[i] << endl;
	}

	return 0;
}
