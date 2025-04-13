#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

class NhanVienVP {
protected:
    string ma;
    string hoten;
    string ngaysinh;
    double luong;
    void ChuanHoaTen();
public:
    NhanVienVP();
    NhanVienVP(string, string, string, double);
    string GetMaNV() const;
    string GetHoTen() const;
    string GetNgaySinh() const;
    double GetLuong() const;
    int GetTuoi() const;
    void SetMaNV(string);
    void SetHoTen(string);
    void SetNgaySinh(string);
    void SetLuong(double);
    void Nhap();
    void Xuat() const;
};

