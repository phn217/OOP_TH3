#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class DaThuc
{
private:
    int bac;
    double heso[100]; 
public:
    DaThuc();
    DaThuc(int);
    void Nhap();
    void Xuat();
    double TinhGiaTri(double);
    DaThuc Cong(const DaThuc&);
    DaThuc Tru(const DaThuc&);

};

