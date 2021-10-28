#include<math.h>
#include<iostream>
using namespace std;
long A(int m,int n);
int main()
{
    int a, b;
    int res,t;
    cout << "m = "; cin >> a;
    cout << "n = "; cin >> b;
    res = A(a, b);
    cout << res;
}
long A(int m,int n) {
    int q = 0;
    if (m == 0)
    {
        q = n + 1;
    }
    if (m > 0 && n == 0)
    {
        q = A(m - 1, 1);
    }
    if (m > 0 && n > 0)
    {
        q = A(m - 1, A(m, n - 1));
    }
    return q;
    //r++;
    //cout << "r = " << r << "\n";
}