#include "DSNhanVien.h"

void main() {
    DSNhanVien ds;
    int n, chon;
    cout << "Nhap so luong nhan vien: ";
    cin >> n;
    cin.ignore();
    ds.NhapDanhSach(n);
    do {
        cout << "\n------------------MENU------------------\n";
        cout << "1. Xuat danh sach nhan vien van phong\n";
        cout << "2. Tim nhan vien co luong cao nhat\n";
        cout << "3. Tim nhan vien co tuoi cao nhat\n";
        cout << "4. Tinh tong luong phai tra\n";
        cout << "5. Sap xep danh sach tang dan theo luong\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "----------------------------------------\n";
        cout << "Ban chon: ";
        cin >> chon;
        switch (chon) 
        {
        case 0:
            cout << "Dang thoat chuong trinh...\n";
            break;
        case 1:
            ds.XuatDanhSach();
            break;
        case 2:
            ds.TimLuongCaoNhat();
            break;
        case 3:
            ds.TimTuoiCaoNhat();
            break;
        case 4:
            ds.TinhTongLuong();
            break;
        case 5:
            ds.SapXepTheoLuongTangDan();
            break;
        default:
            cout << "Ban chon sai. Vui long chon lai!\n";
            break;
        }
    } while (chon != 0);
}
