#include <bits/stdc++.h>
using namespace std;
#define Max 100
// Mutual Recursion
void Even(int n)
{
    if (n == 0)
    {
        return;
    }
    Odd(n - 1);
    cout << n << " ";
}
void Odd(int n)
{
    if (n == 0)
    {
        return;
    }
    Even(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    Even(n);
    return 0;
}
