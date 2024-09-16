#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int mid, int r)
{
    // First Spilt The Array In Two Part.Then Join The Two Array
    int L[mid - l + 1], R[r - mid-1];
    int leftSizeArray = mid - l + 1, rightSizeArray = r - leftSizeArray, current = 0;
    for (int i = 0; i < leftSizeArray; i++)
    {
        L[i] = a[current];
        current++;
        cout << L[i] << " ";
    }
    cout << endl<<"Spilted In Two Array" << endl;
    for (int i = 0; i < rightSizeArray; i++)
    {
        R[i] = a[current];
        current++;
        cout<<R[i]<<" ";
    }
    current=0;
    int i=0,j=0;
    while(i<leftSizeArray && j<rightSizeArray){
        if(L[i]<=R[j]){
            a[current]=L[i];
            i++;
        }
        else {
            a[current]=R[j];
            j++;
        }
        current++;
    }
    while(i<leftSizeArray){
        a[current]=L[i];
        current++;
        i++;
    }
    while(j<rightSizeArray){
        a[current]=R[j];
        current++;
        j++;
    }
    cout<<endl;
    for(int i=0;i<r;i++)cout<<a[i]<<" ";
    cout<<endl;
}
int main()
{
    freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    merge(a, 0, (n / 2), n);
}