#include <iostream>
using namespace std;
int BinarySearchRecursive(int arr[], int n, int key, int low, int high)
{

    if (low == high)
    {
        if (arr[low] == key)
            return low;

        else
            return -1;
    }
    else{

    // int mid = (low + high) / 2;
    // THis way of using int mid will avoid integer overflow in the statement
    int mid= high+ (low-high)/2;
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] < key)
      return  BinarySearchRecursive(arr, n, key, mid + 1, high);

    else
      return  BinarySearchRecursive(arr, n, key, low, mid - 1);

    }
    return -1;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int low = 0;
    int high = n - 1;
    cout << BinarySearchRecursive(arr, n, key, low, high);
}