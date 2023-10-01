#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<a[i][j]<<", ";
            }
        }
        else{
            for(int j=m-1;j>=0;j--){
                cout<<a[i][j]<<", ";
            }
        }
    }
    cout<<"END";
    return 0;
}
