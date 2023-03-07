#include <bits/stdc++.h>
using namespace std;
#define MAX 100
void nhapMang(int a[], int n)
{
    do{
        if (n <= 0 || n  > MAX)
        {
            cout << "Nhap lai n: ";
            cin >> n;
        }
    } while (n <= 0 || n > MAX);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int tongChan(int a[], int n)
{
    if( n == 0)
        return 0;
    if (a[n - 1] % 2 == 0)
        return a[n - 1] + tongChan(a, n - 1);
    else 
        return tongChan(a, n - 1);
}    
int main(){

    int n;
    cout << "Nhap n: ";
    cin >> n;
    int a[n];
    nhapMang(a, n);
    cout << "Mang vua nhap la: ";
    xuatMang(a, n);
    cout << endl;
    cout << "Tong cac so chan trong mang la: " << tongChan(a, n);
    return 0;
}


