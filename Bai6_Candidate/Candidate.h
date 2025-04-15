#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Candidate {
private:
    string ma, ten, ngaysinh;
    float toan, van, anh;
    void ChuanHoaTen();
public:
    Candidate();
    Candidate(string, string, string, float, float, float);
    ~Candidate();
    string GetMa() const;
    string GetTen() const;
    string GetNgaySinh() const;
    float GetDiemToan() const;
    float GetDiemVan() const;
    float GetDiemAnh() const;
    void SetMa(string);
    void SetTen(string);
    void SetNgaySinh(string);
    void SetDiemToan(float);
    void SetDiemVan(float);
    void SetDiemAnh(float);
    void Nhap();
    void Xuat() const;
    float TongDiem() const;
};


