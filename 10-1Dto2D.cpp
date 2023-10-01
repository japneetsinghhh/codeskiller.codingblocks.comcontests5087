#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[100000];
    // int b[1000][1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<k;j++){
            cout<<a[c]<<" ";
            c++;
        }
        cout<<endl;
    }
    return 0;
}
