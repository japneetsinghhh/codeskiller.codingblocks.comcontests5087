#include <iostream>
using namespace std;
int main() {
    int n; 
    cin>>n;
	int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int ele=a[i],c=0;
        for(int j=0;j<n;j++){
            // if(i==j){
            //     continue;
            // }
            if(ele>a[j]){
                c++;
            }
        }
        cout<<c<<" ";
    }
}
