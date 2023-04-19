#include <bits/stdc++.h>
using namespace std;
#define Max 100
// Binary Recursion
void BinaryRecursion(int n)
{
    if (n == 0)
    {
        return;
    }
    BinaryRecursion(n / 2);
    cout << n % 2 << " ";
}
int main()
{
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    BinaryRecursion(n);
    return 0;
}