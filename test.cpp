#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int op, f = -1, r = -1;
    while (1)
    {
        cout << "1 for enqueue, 2 for dequeue, 0 for exit.\nOption:";
        cin >> op;
        if (op == 1)
        {
            int x;
            cin >> x;
            if (f == -1 && r == -1)
            {
                f = 0, r = 0;
                a[r] = x;
                int i = f;
                while (i != r)
                {
                    cout << a[i] << " ";
                    i = (i + 1) % 5;
                }
                cout << a[r] << endl;
            }
            else if ((f+1)%5 == (r + 1) % 5)
                cout << "Queue overflow" << endl;
            else
            {
                r = (r + 1) % 5;
                a[r] = x;
                int i = f;
                while (i != r)
                {
                    cout << a[i] << " ";
                    i = (i + 1) % 5;
                }
                cout << a[r] << endl;
            }
        }
        else if (op == 2)
        {
            if ((r+1)%5 == (f + 1) % 5)
                cout << "Underflow" << endl;
            else if (f == -1 && r == -1)
                cout << "Queue is empty" << endl;
            else
            {
                f = (f + 1) % 5;
                cout << "Dequeue successful." << endl;
            }
        }
        else if (op == 3)
        {
            int i = f;
            while (i != r)
            {
                cout << a[i] << " ";
                i = (i + 1) % 5;
            }
            cout << a[r] << endl;
        }
        else if (op == 0)
            break;
        else
            cout << "Invalid input";
    }
}