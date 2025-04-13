#include "ListCandidate.h"

void ListCandidate::NhapDS() {
    int n;
    cout << "Nhap so luong thi sinh: ";
    cin >> n;
    cin.ignore();
    ds.resize(n);
    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin thi sinh thu " << i + 1 << ":\n";
        ds[i].Nhap();
    }
}

void ListCandidate::XuatDSTongDiemLonHon15() const {
    cout << "\nDanh sach thi sinh co tong diem > 15:\n";
    cout << left << setw(10) << "Ma"
        << setw(25) << "Ten"
        << setw(15) << "Ngay sinh"
        << setw(8) << "Toan"
        << setw(8) << "Van"
        << setw(8) << "Anh"
        << setw(10) << "Tong" << endl;
    cout << string(84, '-') << endl;

    for (const auto& ts : ds) {
        if (ts.TongDiem() > 15)
            ts.Xuat();
    }
}

void ListCandidate::ThiSinhDiemCaoNhat() const {
    if (ds.empty()) return;

    float maxDiem = ds[0].TongDiem();
    for (size_t i = 1; i < ds.size(); ++i) {
        if (ds[i].TongDiem() > maxDiem)
            maxDiem = ds[i].TongDiem();
    }

    cout << "\nThi sinh co tong diem cao nhat:\n";
    cout << left << setw(10) << "Ma"
        << setw(25) << "Ten"
        << setw(15) << "Ngay sinh"
        << setw(8) << "Toan"
        << setw(8) << "Van"
        << setw(8) << "Anh"
        << setw(10) << "Tong" << endl;
    cout << string(84, '-') << endl;

    for (const auto& ts : ds) {
        if (ts.TongDiem() == maxDiem)
            ts.Xuat();
    }
}

void ListCandidate::SapXepGiamDanTheoTongDiem() {
    sort(ds.begin(), ds.end(), [](const Candidate& a, const Candidate& b) {
        return a.TongDiem() > b.TongDiem();
        });

    cout << "\nDanh sach sau khi sap xep giam dan theo tong diem:\n";
    cout << left << setw(10) << "Ma"
        << setw(25) << "Ten"
        << setw(15) << "Ngay sinh"
        << setw(8) << "Toan"
        << setw(8) << "Van"
        << setw(8) << "Anh"
        << setw(10) << "Tong" << endl;
    cout << string(84, '-') << endl;

    for (const auto& ts : ds) {
        ts.Xuat();
    }
}
