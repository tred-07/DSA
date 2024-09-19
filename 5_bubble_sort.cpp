#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int a[],int n){
    bool ok;
    for(int i=0;i<n-1;i++){
        ok=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int tmp=a[j]^a[j+1];
                a[j]=tmp^a[j];
                a[j+1]=tmp^a[j+1];
                ok=1;
            }
        }
        if(!ok)break;
    }
}
int main(){
    int a[10];
    for(int i=0;i<10;i++)a[i]=10-i;
    bubble_sort(a,10);
    for(int i=0;i<10;i++)cout<<a[i]<<" ";
}