/*Q2.Given an already sorted array of positive integers, design an algorithm and implement it using a 
program to find whether given key element is present in the array or not. Also, find total number 
of comparisons for each input case. (Time Complexity = O(nlogn), where n is the size of input). */
#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x, int &comp) {
    while (l <= r) {
        int m = l + (r - l) / 2;
        comp++;
        if (arr[m] == x)
            return m+1;

        if (arr[m] < x)
            l = m + 1;
             
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int n,x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter the elements of the sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter the key to search: ";
    cin >> x;

    int comp = 0;
    int result = binarySearch(arr, 0, n - 1, x, comp);

    if (result == -1)
        cout << "Element is not present in array";
    else
     cout << "Element is present at index " << result;
     cout << "\nTotal comparisons: " << comp << endl;
    return 0;
}
