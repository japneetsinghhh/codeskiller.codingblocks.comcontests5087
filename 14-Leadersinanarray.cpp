#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void findLeaders(int arr[],int n){
    int maxfromright=arr[n-1];
    int leaders[n];
    int count=1;

    leaders[0]=maxfromright;


    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxfromright) {
            maxfromright = arr[i];
            leaders[count] = maxfromright;
            count++;
        }
    }

    bubbleSort(leaders, count);

    for (int i = 0; i < count; i++) {
        cout << leaders[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    findLeaders(a,n);
    return 0;
}
