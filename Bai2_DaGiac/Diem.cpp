#include "Diem.h"

Diem::Diem()
{
	dx = 0;
	dy = 0;
}
Diem::Diem(double x, double y)
{
	dx = x;
	dy = y;
}
Diem::~Diem() {}
void Diem::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> dx;
	cout << "Nhap tung do: ";
	cin >> dy;
}
void Diem::Xuat()
{
	cout << "(" << dx << "," << dy << ")\n";
}
double Diem::GetX()
{
	return dx;
}
double Diem::GetY()
{
	return dy;
}
double Diem::TinhKhoangCach(Diem& d)
{
	return sqrt(pow(dx - d.dx, 2) + pow(dy - d.dy, 2));
}
void Diem::TinhTien(double x, double y)
{
	dx += x;
	dy += y;
}
