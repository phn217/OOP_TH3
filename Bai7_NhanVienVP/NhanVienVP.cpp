#include "NhanVienVP.h"

void NhanVienVP::ChuanHoaTen() {
    bool viethoa = true;
    for (char& x : hoten) {
        if (viethoa && isalpha(x)) {
            x = toupper(x);
            viethoa = false;
        }
        else {
            x = tolower(x);
        }
        if (x == ' ') viethoa = true;
    }
}
NhanVienVP::NhanVienVP() 
{
    ma = "";
    hoten = "";
    ngaysinh = "";
    luong = 0;
}
NhanVienVP::NhanVienVP(string manv, string ten, string ns, double l) 
{
    ma = manv;
    hoten = ten;
    ngaysinh = ns;
    luong = l;
}
string NhanVienVP::GetMaNV() const
{ 
    return ma; 
}
string NhanVienVP::GetHoTen() const
{ 
    return hoten; 
}
string NhanVienVP::GetNgaySinh() const
{ 
    return ngaysinh; 
}
double NhanVienVP::GetLuong() const
{ 
    return luong; 
}
int NhanVienVP::GetTuoi() const 
{
    int namsinh;
    istringstream iss(ngaysinh.substr(6)); 
    iss >> namsinh;
    return 2025 - namsinh;
}

void NhanVienVP::SetMaNV(string manv) 
{ 
    ma = manv; 
}
void NhanVienVP::SetHoTen(string ten) 
{ 
    hoten = ten; 
}
void NhanVienVP::SetNgaySinh(string ns) 
{ 
    ngaysinh = ns; 
}
void NhanVienVP::SetLuong(double l) 
{ 
    luong = l; 
}
void NhanVienVP::Nhap() 
{
    cout << "Nhap ma nhan vien: ";
    getline(cin, ma);
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    ChuanHoaTen();
    cout << "Nhap ngay sinh (dd/mm/yyyy): ";
    getline(cin, ngaysinh);
    do {
        cout << "Nhap luong: ";
        cin >> luong;
    } while (luong < 0);
    cin.ignore();
}
void NhanVienVP::Xuat() const
{
    cout << fixed << setprecision(0); 
    cout << "\nMa NV: " << ma << "\n";
    cout << "Ho ten: " << hoten << "\n";
    cout << "Ngay sinh: " << ngaysinh << "\n";
    cout << "Luong: " << luong << " vnd\n";
    cout << "Tuoi: " << GetTuoi() << "\n";
}

