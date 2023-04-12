#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int linear_search(int a[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int a[MAX], n, x;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapmang(a, n);
    cout << "Mang vua nhap la: ";
    xuatmang(a, n);
    cout << "Nhap phan tu can tim: ";
    cin >> x;
    int kq = linear_search(a, n, x);
    if (kq == -1)
        cout << "Khong tim thay phan tu " << x << " trong mang";
    else
        cout << "Tim thay phan tu " << x << " tai vi tri " << kq;
    return 0;
}