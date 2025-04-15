#include "DSNhanVienSX.h"

void DSNhanVienSX::NhapDanhSach(int n) 
{
    for (int i = 0; i < n; i++) 
    {
        cout << "\nNhap nhan vien thu " << i + 1 << ":\n";
        NhanVienSX nv;
        nv.Nhap();
        ds.push_back(nv);
    }
}
void DSNhanVienSX::XuatDanhSach() const 
{
    cout << "\n========== DANH SACH NHAN VIEN ==========\n";
    for (const auto& nv : ds)
        nv.Xuat();
}
void DSNhanVienSX::TimLuongThapNhat() const 
{
    if (ds.empty()) return;
    double minLuong = ds[0].TinhLuong();
    for (const auto& nv : ds)
        if (nv.TinhLuong() < minLuong)
            minLuong = nv.TinhLuong();
    cout << "\nNhan vien co luong thap nhat:\n";
    for (const auto& nv : ds)
        if (nv.TinhLuong() == minLuong)
            nv.Xuat();
}
void DSNhanVienSX::TinhTongLuong() const 
{
    double tong = 0;
    for (const auto& nv : ds)
        tong += nv.TinhLuong();
    cout << fixed << setprecision(0);
    cout << "\nTong luong cong ty phai tra: " << tong << " vnd\n";
}
void DSNhanVienSX::TimTuoiCaoNhat() const 
{
    if (ds.empty()) return;
    int maxTuoi = ds[0].GetTuoi();
    for (const auto& nv : ds)
        if (nv.GetTuoi() > maxTuoi)
            maxTuoi = nv.GetTuoi();
    cout << "\nNhan vien co tuoi cao nhat:\n";
    for (const auto& nv : ds)
        if (nv.GetTuoi() == maxTuoi)
            nv.Xuat();
}
void DSNhanVienSX::SapXepTheoLuongTangDan() 
{
    sort(ds.begin(), ds.end(), [](const NhanVienSX& a, const NhanVienSX& b) {
        return a.TinhLuong() < b.TinhLuong();
        });
    cout << "\nDanh sach sau khi sap xep tang dan theo luong:\n";
    XuatDanhSach();
}
