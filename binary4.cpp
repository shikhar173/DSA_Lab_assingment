#include <iostream>
using namespace std;

int main() {
	// SORTING
	int arr[] = {5, 2, 3, 7, 8, 4, 6, 12};
	int n = 8;
	
	for(int i = 0; i <= n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1]){
				int t = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = t;
			}
		}
	}
	
	for(int i = 0; i <= n-1; i++){
		cout << arr[i] <<" ";
	}

\
	cout << endl;
	// BINARY SEARCH
	int target = 4;
	int min = 0;
	int max = n-1;
	
	while(min <= max){
		int mid = (min + max) / 2;
		if(arr[mid] == target){
			cout << "Array found at index: " << mid;
			break;
		}
		else if(arr[mid] < target){
			min = mid+1;
		}
		else {
			max = mid-1;
		}
		
	}
	
	
	return 0;
}
