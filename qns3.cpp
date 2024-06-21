#include <iostream>
using namespace std;

int main() {
    int a; 
    cout << "Enter the number of elements in the array: ";
    cin >> a; 
    int list[a]; 
    cout << "Enter " << a << " elements of the array:" << endl;
    for (int i = 0; i < a; i++) {
        cin >> list[i]; // Input each element of the array
    }

    int great1 = list[0], great2 = list[0], great3 = list[0];

    for (int i = 1; i < a; i++) {
        if (list[i] > great1) {
            great3 = great2;
            great2 = great1;
            great1 = list[i];
        } else if (list[i] > great2) {
            great3 = great2;
            great2 = list[i];
        } else if (list[i] > great3) {
            great3 = list[i];
        }
    }

    cout << "The three greatest numbers in the array are: " << great1 << ", " << great2 << ", " << great3 << endl;

    return 0;
}
