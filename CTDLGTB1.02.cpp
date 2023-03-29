#include<bits/stdc++.h>
using namespace std;

int tinhGiaiThua(int n){
    if( n == 0 || n == 1){
        return 1;
    }
    return n * tinhGiaiThua(n-1);
}
double tong(int x, int n, double s = 0){
    if (n == 0){
        return s;
    } else {
        s += pow(x, n) / tinhGiaiThua(n);
        return tong(x, n-1, s);
    }
}
int main(){
    int x, n;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Tong la: " << tong(x, n);
    return 0;
}