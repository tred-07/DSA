#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int l, int r)
{
    int mid = (l + r) / 2, leftArraySize = mid - l + 1, rightArraySize = r - mid;
    int L[leftArraySize], R[rightArraySize];
    int current = 0;
    for (int i = l; i < (mid + 1); i++)
    {
        L[current] = a[i];
        current++;
    }
    current = 0;
    for (int i = mid + 1; i <= (r); i++)
    {
        R[current] = a[i];
        current++;
    }
    int i = 0, j = 0;
    current = l;
    while (i < leftArraySize && j < rightArraySize)
    {
        if (L[i] <= R[j])
        {
            a[current] = L[i];
            i++;
        }
        else
        {
            a[current] = R[j];
            j++;
        }
        current++;
    }
    while (i < leftArraySize)
    {
        a[current] = L[i];
        i++;
        current++;
    }
    while (j < rightArraySize)
    {
        a[current] = R[j];
        j++;
        current++;
    }
}
void merge_sort(int a[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        merge_sort(a, l, mid);
        merge_sort(a, mid + 1, r);
        merge(a, l, r);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}