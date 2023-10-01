#include <iostream>
#include <climits>
using namespace std;

int findMinimum(int a[], int n) {
    int left = 0, right = n - 1;
    int min = INT_MAX;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (a[mid] < min)
            min = a[mid];

        if (a[mid] < a[right])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return min;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = findMinimum(a, n);
    cout << min;

    return 0;
}
