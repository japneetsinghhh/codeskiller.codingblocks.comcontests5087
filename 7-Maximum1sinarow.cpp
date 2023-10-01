#include<iostream>
#include <climits>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[1000][1000];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int p;
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<m;j++){
            if(a[i][j]==1){
                c++;
            }
        }
        if(c>max){
            max=c;
            p=i;
        }
    }
    cout<<p;
    return 0;
}
