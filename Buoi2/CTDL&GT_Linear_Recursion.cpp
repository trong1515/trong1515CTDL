#include <bits/stdc++.h>
using namespace std;
#define Max 100
// Linear Recursion
void LinearRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    LinearRecursion(n - 1);
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    LinearRecursion(n);
    return 0;
}
