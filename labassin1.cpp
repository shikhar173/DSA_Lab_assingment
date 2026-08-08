#include <iostream>
using namespace std;

int main() {

int arr[100];
int n = 0;
int choice;

while(true) {
    cout << "\n--------Menu--------\n";
    cout << "1. CREATE\n";
    cout << "2. DISPLAY\n";
    cout << "3. INSERT\n";
    cout << "4. DELETE\n";
    cout << "5. LINEAR SEARCH\n";
    cout << "6. EXIT\n";

    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
    case 1:
        {
            cout << "Enter number of Elements: ";
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> arr[i];
            }
            cout << "Array created successfully." << endl;
            break;
        }
    case 2:
        {
            for(int i = 0; i < n; i++)
            {
                cout << arr[i] << " " <<endl;
            }
            cout << "Array displayed successfully." << endl;
            break;
        }
    case 3:
        {
            int position;
            int value;

            cout << "\nEnter position: ";
            cin >> position;

            cout << "\nEnter value you want to insert: ";
            cin >> value;

            for(int i = n; i > position; i--)
            {
                arr[i] = arr[i-1];
            }
            arr[position] = value;
            n++;
            cout << "Array inserted successfully." << endl;
            break;
        }
    case 4:
        {
            int position;
            cout << "Enter position of Element u want to delete: ";
            cin >> position;
            for(int i = position; i < n-1; i++)
            {
                arr[i] = arr[i+1];
            }
            n--;
            cout << "Array deleted successfully." << endl;
            break;
        }
    case 5:
        {
            int value;
            bool found = false;
            cout << "Enter value u want to search: ";
            cin >> value;
            for(int i = 0; i <= n-1; i++)
            {
                if(arr[i] == value)
                {
                    cout << "Array fount at index: " << i <<endl;
                }

            }
            break;
        }
    case 6:
        {
            cout << "Program exited!" << endl;
            return 0;
        }
    default :
        {
            cout << "Invalid choice!" <<endl;
        }
    }
}


return 0;
}
