#include <iostream>
using namespace std;

int main() {
	// ARRAY REVERSE
	int arr[] = {1,2,3,4,5};
	int n = 5;
	int t;
	int i = 0;
	int j = n-1;
	cout << "Array :";
	for(int i = 0; i <= n-1; i++){
	cout << arr[i];
	}
	
	while(i < j){
		int t = arr[i];
		arr[i] = arr[j];
		arr[j] = t;
		
		i++;
		j--;
	}
	cout << "\nReversed array: ";
	
	for(int i = 0; i <= n-1; i++){
		cout << arr[i];
	}
	
	// MATRIX MULTIPLICATION
	int A[2][2] = {
	{1,2},
	{3,4}
	};
	int B[2][2] = {
	{5,6}, 
	{7,8}
	};
	
	int C[2][2];
	
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			C[i][j] = 0;
			for(int k = 0; k < 2; k++){
				C[i][j] = C[i][j] + A[i][k] * B[k][j];
			}
		}
	}
	cout << "\nMatrix Multiplication: ";
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			cout << C[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
}
