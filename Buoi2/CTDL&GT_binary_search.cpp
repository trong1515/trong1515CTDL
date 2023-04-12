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
int binary_search(int a[], int n, int x)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == x)
            return mid;
        if (a[mid] < x)
            left = mid + 1;
        else
            right = mid - 1;
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
    int kq = binary_search(a, n, x);
    if (kq == -1)
        cout << "Khong tim thay phan tu " << x << " trong mang";
    else
        cout << "Tim thay phan tu " << x << " tai vi tri " << kq;
    return 0;
}
