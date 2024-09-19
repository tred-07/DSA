#include<bits/stdc++.h>
using namespace std;
int interpolation_searcch(int a[],int n,int key){
    int l=0,r=n-1,mid;
    while(l<=r){
        mid=l+((double)(r-l))/((a[r]-a[l]))*(key-a[l]);
        if(a[mid]==key)return mid;
        else if(a[mid]>key)r=mid-1;
        else l=mid+1;
    }
    return -1;
}
int main(){
    int a[10];
    for(int i=0;i<10;i++)a[i]=i;
    cout<<(int)interpolation_searcch(a,10,20)<<endl;
}