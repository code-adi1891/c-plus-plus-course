#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "enter the total number of elments in the list." << endl;
    cin >> a;
    int list[a];
    cout << "enter all the " << a << " elements of the list." << endl;
    for (int i = 0; i < a; i++)
    {
        cin >> list[i];
    }
    for (int i = 0; i < a - 1; i++)
    { 
        for (int j = 0; j < a - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    cout << "sorted list in ascending order: " << endl;
    for (int i = 0; i < a; i++)
    {
        cout << list[i] << endl;
    }
    cout << endl;
    

    return 0;
}