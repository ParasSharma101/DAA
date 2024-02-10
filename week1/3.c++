#include <iostream>
using namespace std;

int lesrch(int arr[], int key, int low, int high) {
    for (int i = low; i <= high; i++) {
        if (arr[i] == key) {
            return i+1;
        }
    }
    return 0;
}
int jump(int arr[], int key, int n) {
    int low = 0, high = 1;

    while (arr[high] < key && high < n) {
        low = high;
        high = high * 2;
    }
    
    if (high < n - 1)
    {
        return lesrch(arr, key, low, high);
    }
    else
    {
        return lesrch(arr, key, low, n - 1);
    }
}

int main() {
    int tno;

    cout << "Enter the number of test cases: ";
    cin >> tno;

    while (tno--) {
        int n;

        cout << "Enter size: ";
        cin >> n;

        int arr[n];

        cout << "Enter sorted elements:" << endl;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int key;

        cout << "Enter key: ";
        cin >> key;

        int result = jump(arr, key, n);

        if (result != 0) {
            cout << "Key " << key << " found at position " << result << endl;
        } else {
            cout << "Key " << key << " not found" << endl;
        }
    }

    return 0;
}
