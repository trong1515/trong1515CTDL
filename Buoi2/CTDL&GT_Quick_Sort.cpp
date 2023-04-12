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
void quick_sort(int a[], int left, int right)
{
    int i = left, j = right;
    int pivot = a[(left + right) / 2];
    while (i <= j)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (left < j)
        quick_sort(a, left, j);
    if (i < right)
        quick_sort(a, i, right);
}
int main (){
    int a[MAX], n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapmang(a, n);
    cout << "Mang vua nhap la: ";
    xuatmang(a, n);
    quick_sort(a, 0, n - 1);
    cout << "Mang sau khi sap xep la: ";
    xuatmang(a, n);
    return 0;
}