#include <iostream>
using namespace std;
int firstElement(int a[],int n,int ele){
    int s=0,e=n-1;
    int ans = -1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(a[mid]==ele){
            ans = mid;
            e = mid-1;
        }
        if(a[mid]<ele){
            s=mid+1;
        }
        else if(a[mid]>ele){
            e=mid-1;
        }
    }
    return ans;
}
int lastElement(int a[],int n,int ele){
    int s=n-1,e=0;
    int ans=-1;
    while(s>=e){
        int mid=s+(e-s)/2;
        if(a[mid]==ele){
            ans=mid;
            e=mid+1;
        }
        if(a[mid]>ele){
            s=mid-1;
        }
        else{
            e=mid+1;
        }
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ele;
    cin>>ele;
    int f_ele=firstElement(a,n,ele);
    int l_ele=lastElement(a,n,ele);
    cout<<f_ele<<" "<<l_ele;
    return 0;
}
