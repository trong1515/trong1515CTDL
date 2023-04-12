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
void insertion_sort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int x = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}
int main (){
    int a[MAX], n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapmang(a, n);
    cout << "Mang vua nhap la: ";
    xuatmang(a, n);
    insertion_sort(a, n);
    cout << "Mang sau khi sap xep la: ";
    xuatmang(a, n);
    return 0;
}