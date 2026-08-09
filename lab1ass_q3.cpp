#include <iostream>
using namespace std;

    int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 2;

    int left[5];
    int right[5];

    //LEFT ROTATION
    for(int i = 0; i <= n-1; i++)
    {
        left[i] = arr[(i + k) % n];
    }
    for(int i = 0; i <= n-1; i++)
    {
        cout << left[i] << " ";
    }

    cout << endl;

    //RIGHT ROTATION
    for(int i = 0; i <= n-1; i++)
    {
        right[i] = arr[(i - k + n) % n];
    }
    for(int i = 0; i <= n-1; i++)
    {
        cout << right[i] << " ";
    }

    return 0;
    }
