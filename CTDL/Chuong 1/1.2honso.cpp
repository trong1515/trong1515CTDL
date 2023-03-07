#include <bits/stdc++.h>
using namespace std;
struct HonSo{
    int nguyen;
    int tu;
    int mau;
};
typedef struct HonSo HONSO;
void NhapHonSo ( HONSO &);
void XuatHonSo ( HONSO );
void NhapHonSo ( HONSO &hs)
{
    cout << "Nhap phan nguyen: ";
    cin >> hs.nguyen;
    cout << "Nhap tu so: ";
    cin >> hs.tu;
    cout << "Nhap mau so: ";
    cin >> hs.mau;
    do 
    {
        if (hs.mau == 0)
        {
            cout << "Nhap lai mau so: ";
            cin >> hs.mau;
        }
    } while (hs.mau == 0);
}
void XuatHonSo ( HONSO hs)
{
    cout << hs.nguyen << " " << hs.tu << "/" << hs.mau;
}
int main(){
    HONSO hs;
    NhapHonSo(hs);
    XuatHonSo(hs);
    return 0;
}
