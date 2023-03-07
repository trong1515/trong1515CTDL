#include <bits/stdc++.h>
using namespace std;
struct Oxyz
{
    int x;
    int y;
    int z;
};
typedef struct Oxyz OXYZ;
void NhapOxyz(OXYZ &);
void XuatOxyz(OXYZ);
void NhapOxyz(OXYZ &oxyz)
{
    cout << "Nhap x: ";
    cin >> oxyz.x;
    cout << "Nhap y: ";
    cin >> oxyz.y;
    cout << "Nhap z: ";
    cin >> oxyz.z;
}
void XuatOxyz(OXYZ oxyz)
{
    cout << "(" << oxyz.x << "," << oxyz.y << "," << oxyz.z << ")";
}
int main()
{
    OXYZ oxyz;
    NhapOxyz(oxyz);
    XuatOxyz(oxyz);
    return 0;
}