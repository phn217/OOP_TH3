#include "NhanVienSX.h"

NhanVienSX::NhanVienSX() 
{
    ma = "";
    hoten = "";
    ngaysinh = "";
    sosanpham = 0;
    dongia = 0;
}
NhanVienSX::NhanVienSX(string m, string ht, string ns, int sp, double dg) 
{
    ma = m;
    hoten = ht;
    ngaysinh = ns;
    sosanpham = sp;
    dongia = dg;
}
NhanVienSX::~NhanVienSX() {}
string NhanVienSX::GetMa() const 
{ 
    return ma; 
}
string NhanVienSX::GetHoTen() const 
{ 
    return hoten; 
}
string NhanVienSX::GetNgaySinh() const 
{ 
    return ngaysinh; 
}
int NhanVienSX::GetSoSanPham() const 
{ 
    return sosanpham; 
}
double NhanVienSX::GetDonGia() const 
{ 
    return dongia; 
}
double NhanVienSX::TinhLuong() const 
{ 
    return sosanpham * dongia; 
}
int NhanVienSX::GetTuoi() const {
    int nam;
    istringstream(ngaysinh.substr(6)) >> nam;
    return 2025 - nam;
}
void NhanVienSX::SetMa(string m) 
{ 
    ma = m; 
}
void NhanVienSX::SetHoTen(string h) 
{ 
    hoten = h; 
}
void NhanVienSX::SetNgaySinh(string ns) 
{ 
    ngaysinh = ns; 
}
void NhanVienSX::SetSoSP(int sp) 
{ 
    sosanpham = sp; 
}
void NhanVienSX::SetDonGia(double dg) 
{ 
    dongia = dg; 
}
void NhanVienSX::ChuanHoaTen() 
{
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
void NhanVienSX::Nhap() 
{
    cout << "Nhap ma: "; 
    getline(cin, ma);
    cout << "Nhap ho ten: "; 
    getline(cin, hoten);
    ChuanHoaTen();
    cout << "Nhap ngay sinh (dd/mm/yyyy): "; 
    getline(cin, ngaysinh);
    cout << "Nhap so san pham: "; 
    cin >> sosanpham;
    cout << "Nhap don gia: "; 
    cin >> dongia;
    cin.ignore();
}
void NhanVienSX::Xuat() const 
{
    cout << "\nMa NV: " << ma << "\n";
    cout << "Ho ten: " << hoten << "\n";
    cout << "Ngay sinh: " << ngaysinh << "\n";
    cout << fixed << setprecision(0);
    cout << "So san pham: " << sosanpham << "\n";
    cout << "Don gia: " << dongia << "\n";
    cout << "Luong: " << TinhLuong() << " vnd\n";
    cout << "Tuoi: " << GetTuoi() << "\n";
}
