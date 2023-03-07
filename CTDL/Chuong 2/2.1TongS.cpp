#include <bits/stdc++.h>
using namespace std;
int TongS(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + TongS(n - 1);
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong S = " << TongS(n);
    return 0;
}