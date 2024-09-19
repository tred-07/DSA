#include<bits/stdc++.h>
using namespace std;
void insertion_sort(int a[],int n){
    int j,tmp;
    for(int i=1;i<n;i++){
        tmp=a[i],j=i;
        while(j>0 && a[j-1]>tmp){
            a[j]=a[j-1];
            j--;
        }
        a[j]=tmp;
    }
}
int main(){
    int a[10];
    for(int i=0;i<10;i++)a[i]=10-i;
    insertion_sort(a,10);
    for(int i=0;i<10;i++)cout<<a[i]<<" ";
}