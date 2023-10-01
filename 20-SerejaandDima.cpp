#include <iostream>
using namespace std;
void serdim(int a[],int n){
    int left =0;
    int right=n-1;
    int turn=0,d=0;
    int s=0;
    while(left<=right){
        if(turn==0){
            if(a[left]>a[right]){
                s+=a[left];
                left++;
            }
            else{
                s+=a[right];
                right--;
            }
        }
        else{
            if(a[left]>a[right]){
                d+=a[left];
                left++;
            }
            else{
                d+=a[right];
                right--;
            }
        }
        turn = 1-turn;
    }
    cout<<s<<" "<<d;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[100000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    serdim(a,n);
    return 0;
}
