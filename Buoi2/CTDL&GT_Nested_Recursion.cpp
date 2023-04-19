#include <bits/stdc++.h>
using namespace std;
#define Max 100
// Nested Recursion
void NestedRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    NestedRecursion(n - 1);
    cout << n << " ";
    NestedRecursion(n - 1);
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    NestedRecursion(n);
    return 0;
}
