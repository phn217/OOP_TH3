#include "DSNhanVien.h"

void DSNhanVien::NhapDanhSach(int n) {
    for (int i = 0; i < n; i++) 
    {
        cout << "\nNhap nhan vien thu " << i + 1 << ":\n";
        NhanVienVP nv;
        nv.Nhap();
        danhsach.push_back(nv);
    }
}

void DSNhanVien::XuatDanhSach() const {
    cout << "\n========== DANH SACH NHAN VIEN ==========\n";
    cout << fixed << setprecision(0);
    for (const auto& nv : danhsach) {
        nv.Xuat();
    }
}

void DSNhanVien::TimLuongCaoNhat() const {
    double maxLuong = danhsach[0].GetLuong();
    for (const auto& nv : danhsach) {
        if (nv.GetLuong() > maxLuong)
            maxLuong = nv.GetLuong();
    }
    cout << fixed << setprecision(0);
    cout << "\nNhan vien co luong cao nhat:\n";
    for (const auto& nv : danhsach) {
        if (nv.GetLuong() == maxLuong)
            nv.Xuat();
    }
}

void DSNhanVien::TimTuoiCaoNhat() const {
    int maxTuoi = danhsach[0].GetTuoi();
    for (const auto& nv : danhsach) {
        if (nv.GetTuoi() > maxTuoi)
            maxTuoi = nv.GetTuoi();
    }
    cout << "\nNhan vien co tuoi cao nhat:\n";
    for (const auto& nv : danhsach) {
        if (nv.GetTuoi() == maxTuoi)
            nv.Xuat();
    }
}

void DSNhanVien::TinhTongLuong() const {
    float tong = 0;
    for (const auto& nv : danhsach) {
        tong += nv.GetLuong();
    }
    cout << fixed << setprecision(0);
    cout << "\nTong luong phai tra: " << tong << " vnd\n";
}

void DSNhanVien::SapXepTheoLuong() {
    sort(danhsach.begin(), danhsach.end(), [](const NhanVienVP& a, const NhanVienVP& b) {
        return a.GetLuong() < b.GetLuong();
        });
    cout << "\nDanh sach sau khi sap xep theo luong tang dan:\n";
    XuatDanhSach();
}
