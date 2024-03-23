#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the number of elements in the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Element " << i << ":  ";
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}