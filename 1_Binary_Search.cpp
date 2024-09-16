#include <bits/stdc++.h>
using namespace std;
bool binary_search(int a[], int n, int key)
{
    int l = 0, r = n;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == key)
            return 1;
        if (a[mid] > key)
            r = mid - 1;
        else
            l = mid + 1;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i + 1;
        cout << a[i] << " ";
    }
    cout << endl;
    if (binary_search(a, n, key))
        cout << "Find value" << endl;
    else
        cout << "Not find value" << endl;
}