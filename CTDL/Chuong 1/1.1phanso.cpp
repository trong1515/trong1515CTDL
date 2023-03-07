#include <bits/stdc++.h>
using namespace std;
struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;

void NhapPhanSo(PHANSO &ps)
{
    cout << "Nhap tu so: ";
    cin >> ps.tu;
    cout << "Nhap mau so: ";
    cin >> ps.mau;
    do 
    {
        if (ps.mau == 0)
        {
            cout << "Nhap lai mau so: ";
            cin >> ps.mau;
        }
    } while (ps.mau == 0);

}
void XuatPhanSo(PHANSO ps)
{
    cout << ps.tu << "/" << ps.mau;
}
int main()
{
    PHANSO ps;
    NhapPhanSo(ps);
    XuatPhanSo(ps);
    return 0;
}