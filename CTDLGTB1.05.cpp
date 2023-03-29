#include <bits/stdc++.h>
using namespace std;
void nhapMang( float a[], int n )
{
    do{
        if (n <= 0)
        {
            cout << "Nhap lai n: ";
            cin >> n;
        }
    } while (n <= 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuatMang( float a[], int n )
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int demDuong( float a[], int n )
{
    if (n == 0)
        return 0;
    if (a[n - 1] > 0)
        return 1 + demDuong(a, n - 1);
    else
        return demDuong(a, n - 1);
}
int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    float a[n];
    nhapMang(a, n);
    cout << "Mang vua nhap la: ";
    xuatMang(a, n);
    cout << endl;
    cout << "So luong cac so duong trong mang la: " << demDuong(a, n);
    return 0;
}