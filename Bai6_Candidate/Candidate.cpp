#include "Candidate.h"

Candidate::Candidate()
{
    ma = "";
    ten = "";
    ngaysinh = "";
    toan = 0;
    van = 0;
    anh = 0;
}
Candidate::Candidate(string mats, string tents, string ngaysinhts, float diemtoan, float diemvan, float diemanh)
{
    ma = mats;
    ten = tents;
    ngaysinh = ngaysinhts;
    toan = diemtoan;
    van = diemvan;
    anh = diemanh;
}
Candidate::~Candidate() {}
string Candidate::GetMa() const
{
    return ma;
}
string Candidate::GetTen() const
{
    return ten;
}
string Candidate::GetNgaySinh() const
{
    return ngaysinh;
}
float Candidate::GetDiemToan() const
{
    return toan;
}
float Candidate::GetDiemVan() const
{
    return van;
}
float Candidate::GetDiemAnh() const
{
    return anh;
}
void Candidate::SetMa(string mats)
{
    ma = mats;
}
void Candidate::SetTen(string tents)
{
    ten = tents;
}
void Candidate::SetNgaySinh(string ngaysinhts)
{
    ngaysinh = ngaysinhts;
}
void Candidate::SetDiemToan(float diemtoan)
{
    toan = diemtoan;
}
void Candidate::SetDiemVan(float diemvan)
{
    van = diemvan;
}
void Candidate::SetDiemAnh(float diemanh)
{
    anh = diemanh;
}
void Candidate::ChuanHoaTen() 
{
    bool viethoa = true;
    for (char& c : ten) {
        if (viethoa && isalpha(c)) {
            c = toupper(c);
            viethoa = false;
        }
        else {
            c = tolower(c);
        }
        if (c == ' ') viethoa = true;
    }
}
void Candidate::Nhap() 
{
    cout << "Ma thi sinh: ";
    getline(cin, ma);
    cout << "Ho ten: ";
    getline(cin, ten);
    ChuanHoaTen(); 
    cout << "Ngay sinh (dd/mm/yyyy): ";
    getline(cin, ngaysinh);
    cout << "Diem Toan: ";
    cin >> toan;
    cout << "Diem Van: ";
    cin >> van;
    cout << "Diem Anh: ";
    cin >> anh;
    cin.ignore(); 
}
void Candidate::Xuat() const 
{
    cout << left << setw(10) << ma
        << setw(25) << ten
        << setw(15) << ngaysinh
        << setw(8) << fixed << setprecision(2) << toan
        << setw(8) << van
        << setw(8) << anh
        << setw(10) << TongDiem() << endl;
}
float Candidate::TongDiem() const 
{
    return toan + van + anh;
}
string Candidate::GetTen() const 
{
    return ten;
}
