#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

class NhanVienSX {
private:
    string ma, hoten, ngaysinh;
    int sosanpham;
    double dongia;
public:
    NhanVienSX();
    NhanVienSX(string, string, string, int, double);
    string GetMa() const;
    string GetHoTen() const;
    string GetNgaySinh() const;
    int GetTuoi() const;
    int GetSoSanPham() const;
    double GetDonGia() const;
    double TinhLuong() const;
    void SetMa(string);
    void SetHoTen(string);
    void SetNgaySinh(string);
    void SetSoSP(int);
    void SetDonGia(double);
    void ChuanHoaTen();
    void Nhap();
    void Xuat() const;
};
