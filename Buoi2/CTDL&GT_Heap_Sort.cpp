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
void heapify(int a[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && a[l] > a[largest])
        largest = l;
    if (r < n && a[r] > a[largest])
        largest = r;
    if (largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}
void heap_sort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(a, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}
int main (){
    int a[MAX], n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    nhapmang(a, n);
    cout << "Mang vua nhap la: ";
    xuatmang(a, n);
    heap_sort(a, n);
    cout << "Mang sau khi sap xep la: ";
    xuatmang(a, n);
    return 0;
}