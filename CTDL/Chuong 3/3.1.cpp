#include<bits/stdc++.h>
using namespace std;
#define MAX 100

void nhapmang ( int a [], int n ){
    do {
        if ( n <= 0 || n > MAX )
        {
            cout << "Nhap lai n: ";
            cin >> n;
        }
    } while ( n <= 0 || n > MAX );
    for ( int i = 0; i < n; i++ )
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
        if ( a[i]== 0 )
            exit(0);}

}
void xuatmang ( int a [], int n )
{
    for ( int i = 0; i < n; i++ )
    {
        cout << a[i] << " ";
    }
}
void InterchangeSort ( int a [], int n )
{
    for ( int i = 0; i < n - 1; i++ )
    {
        for ( int j = i + 1; j < n; j++ )
        {
            if ( a[i] > a[j] )
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void BubbleSort ( int a [], int n )
{
    for ( int i = 0; i < n - 1; i++ )
    {
        for ( int j = n - 1; j > i; j-- )
        {
            if ( a[j] < a[j - 1] )
            {
                int temp = a[j];
                a[j] = a[j - 1];
                a[j - 1] = temp;
            }
        }
    }
}
void InsertionSort ( int a [], int n )
{
    for ( int i = 1; i < n; i++ )
    {
        int x = a[i];
        int j = i - 1;
        while ( j >= 0 && a[j] > x )
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}
void SelectionSort ( int a [], int n )
{
    for ( int i = 0; i < n - 1; i++ )
    {
        int min = i;
        for ( int j = i + 1; j < n; j++ )
        {
            if ( a[j] < a[min] )
            {
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main ()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;
    int *a = ( int * ) malloc ( n * sizeof ( int ) );
    nhapmang ( a, n );
    cout << "Mang vua nhap la: ";
    xuatmang ( a, n );
    cout << endl;
    cout << "Mang sau khi sap xep bang InterchangeSort la: ";
    InterchangeSort ( a, n );
    xuatmang ( a, n );
    cout << endl;
    cout << "Mang sau khi sap xep bang BubbleSortSort la: ";
    BubbleSort ( a, n );
    xuatmang ( a, n );
    cout << endl;
    cout << "Mang sau khi sap xep bang InsertionSort la: ";
    InsertionSort ( a, n );
    xuatmang ( a, n );
    cout << endl;
    cout << "Mang sau khi sap xep bang SelectionSort la: ";
    SelectionSort ( a, n );
    xuatmang ( a, n );
    cout << endl;

    return 0;
}




