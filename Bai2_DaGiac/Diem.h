#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	double dx, dy;
public:
	Diem();
	Diem(double, double);
	~Diem();
	void Nhap();
	void Xuat();
	double GetX();
	double GetY();
	double TinhKhoangCach(Diem&);
	void TinhTien(double x, double y);
};

