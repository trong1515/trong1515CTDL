#include <bits/stdc++.h>
using namespace std;
#define Max 100
// Exponential Recursion
void ExponentialRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    ExponentialRecursion(n - 1);
    ExponentialRecursion(n - 1);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    ExponentialRecursion(n);
    return 0;
}