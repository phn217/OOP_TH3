#include "DaGiac.h"

DaGiac::DaGiac() 
{
    dinh.push_back(Diem(0, 0));
    dinh.push_back(Diem(0, 0));
    dinh.push_back(Diem(0, 0));
    dinh.push_back(Diem(0, 0));
}
DaGiac::DaGiac(const vector<Diem>& dsdinh) : dinh(dsdinh) {}
DaGiac::~DaGiac() {}
void DaGiac::Nhap() 
{
    int n;
    cout << "Nhap so luong dinh: ";
    cin >> n;
    dinh.resize(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhap dinh thu " << i + 1 << ":\n";
        dinh[i].Nhap();
    }
}
void DaGiac::Xuat() {
    cout << "Cac dinh cua da giac:\n";
    for (size_t i = 0; i < dinh.size(); i++) {
        dinh[i].Xuat();
    }
}
string DaGiac::PhanLoai() {
    int sodinh = dinh.size();
    if (sodinh < 3) {
        return "Khong phai da giac";
    }
    else if (sodinh == 3) {
        return "Da giac nay la tam giac"; 
    }
    else if (sodinh == 4) {
        return "Da giac nay la tu giac"; 
    }
    else {
        return "Da giac nay co " + to_string(sodinh) + " dinh"; 
    }
}
double DaGiac::TinhChuVi() 
{
    double cv = 0.0;
    for (size_t i = 0; i < dinh.size(); i++) {
        int next = (i + 1) % dinh.size(); // Đỉnh tiếp theo
        cv += dinh[i].TinhKhoangCach(dinh[next]);
    }
    return cv;
}
double DaGiac::TinhDienTich() 
{
    double dt = 0.0;
    for (size_t i = 0; i < dinh.size(); i++) {
        int next = (i + 1) % dinh.size();
        dt += (dinh[i].GetX() * dinh[next].GetY()) - (dinh[next].GetX() * dinh[i].GetY());
    }
    return abs(dt) / 2.0;
}
void DaGiac::TinhTien(double x, double y) {
    for (Diem& d : dinh) {
        d.TinhTien(x, y); 
    }
}
void DaGiac::Quay(double goc) {
    double rad = goc * pi / 180.0; 
    double cosgoc = cos(rad);
    double singoc = sin(rad);
    for (Diem& d : dinh) {
        double xMoi = d.GetX() * cosgoc - d.GetY() * singoc;
        double yMoi = d.GetX() * singoc + d.GetY() * cosgoc;
        d = Diem(xMoi, yMoi); 
    }
}
void DaGiac::PhongTo(double scale) {
    for (Diem& d : dinh) {
        double xmoi = d.GetX() * scale;
        double ymoi = d.GetY() * scale;
        d = Diem(xmoi, ymoi); 
    }
}
void DaGiac::ThuNho(double scale) {
    if (scale <= 0) {
        cout << "Ti le phai lon hon 0!" << endl;
        return;
    }
    for (Diem& d : dinh) {
        double xmoi = d.GetX() / scale;
        double ymoi = d.GetY() / scale;
        d = Diem(xmoi, ymoi); 
    }
}
