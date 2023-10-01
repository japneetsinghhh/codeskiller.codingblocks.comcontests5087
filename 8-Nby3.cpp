#include<iostream>
using namespace std;
int check(int a[],int n){
    bool flag=false;
    int num;
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>n/3){
            flag=true;
            num=a[i];
            break;
        }
    }
    if(flag){
        return num;
    }
    else{
        return -1;
    }
}
int main(int argc, char const *argv[])
{
    int n;
    int a[1000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ch=check(a,n);
    cout<<ch;
    return 0;
}
