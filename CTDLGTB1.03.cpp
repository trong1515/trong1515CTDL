#include<bits/stdc++.h>
using namespace std;
long tinhXn ( int n );
long tinhYn ( int n );

long tinhXn ( int n ){
    if (n == 0){
        return 1;
    }
    return tinhXn(n-1) + tinhYn(n-1);
}
long tinhYn ( int n ){
    if (n == 0){
        return 0;
    }
    return 3*tinhXn(n-1) + 2*tinhYn(n-1);
}
int main(){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Xn = " << tinhXn(n) << endl;
    cout << "Yn = " << tinhYn(n) << endl;
    return 0;
}