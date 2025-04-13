#pragma once
#include "Diem.h"
#include <vector>
#include <string>
#define pi 3.14159265358979323846


class DaGiac {
private:
    vector<Diem> dinh; 
public:
    DaGiac(); 
    DaGiac(const vector<Diem>&);
    ~DaGiac(); 
    void Nhap(); 
    void Xuat(); 
    string PhanLoai();
    double TinhChuVi(); 
    double TinhDienTich();
    void TinhTien(double, double); 
    void Quay(double); 
    void PhongTo(double); 
    void ThuNho(double);
};

