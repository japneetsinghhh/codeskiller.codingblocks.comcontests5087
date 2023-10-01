#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m,amt,c;
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>amt>>c;
        int count=0;
        for(int i=0;i<n;i++){
            if(amt%a[i]==0){
                count++;
            }
        }
        if(count>=c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
