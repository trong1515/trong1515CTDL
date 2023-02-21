#include "stdio.h"

struct ThanhPho
{
  int matp;
	char tentp[30];
	float dt;
};
void Nhap ( struct ThanhPho &a)
{
  printf("\nNhap ma thanh pho : ");
  scanf("%d", &a.matp);
  printf("\nNhap ten thanh pho : ");
  scanf("%s", &a.tentp);
  printf("\nNhap dien tich thanh pho : ");
  scanf("%f", &a.dt);
}
void Xuat ( struct ThanhPho a)
{
  printf("%d \n%s \n%.3f", a.matp, a.tentp, a.dt);
}
int main ()
{
  struct ThanhPho tp;
  Nhap(tp);
  printf ("\n-----\n");
  Xuat(tp);
}