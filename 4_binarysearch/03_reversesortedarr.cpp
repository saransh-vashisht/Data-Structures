#include <iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key, int start, int end)
{

    if (start == end)
    {
        if (arr[start] == key)
            return start;
        else
            return -1;
    }

    int mid = start + (end - start) / 2;
    if (arr[mid] == key)
        return mid;

    else if (arr[mid] < key)
        return BinarySearch(arr, n, key, start, mid - 1);

    else
        return BinarySearch(arr, n, key, mid + 1, end);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int key;
    cin >> key;
    int start = 0, end = n - 1;
    cout << BinarySearch(arr, n, key, start, end);
}