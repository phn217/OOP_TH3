#include "DaThuc.h"

DaThuc::DaThuc() 
{
    bac = 0;
    for (int i = 0; i < 100; ++i)
        heso[i] = 0;
}
DaThuc::DaThuc(int b) 
{
    bac = b;
    for (int i = 0; i < 100; ++i)
        heso[i] = 0;
}
void DaThuc::Nhap() 
{
    cout << "Nhap bac cua da thuc: ";
    cin >> bac;
    while (bac < 0 || bac >= 100) {
        cout << "Bac khong hop le. Nhap lai (0 <= bac < 100): ";
        cin >> bac;
    }
    for (int i = 0; i <= bac; ++i) {
        cout << "Nhap he so bac " << (bac - i) << ": ";
        cin >> heso[i];
    }
}
void DaThuc::Xuat() 
{
    bool isEmpty = true;
    for (int i = 0; i <= bac; ++i) {
        double h = heso[i];
        int currentBac = bac - i;
        if (h == 0) continue;
        if (!isEmpty) {
            if (h > 0) cout << " + ";
            else cout << " - ";
        }
        else {
            if (h < 0) cout << "-";
            isEmpty = false;
        }
        if (abs(h) != 1 || currentBac == 0)
            cout << abs(h);
        if (currentBac > 0) cout << "x";
        if (currentBac > 1) cout << "^" << currentBac;
    }
    if (isEmpty) cout << "0"; 
    cout << endl;
}
double DaThuc::TinhGiaTri(double x) 
{
    double kq = 0;
    for (int i = 0; i <= bac; ++i)
        kq += heso[i] * pow(x, bac - i);
    return kq;
}
DaThuc DaThuc::Cong(const DaThuc& B) 
{
    int maxBac = max(bac, B.bac);
    DaThuc kq(maxBac);
    int deltaA = maxBac - bac;
    int deltaB = maxBac - B.bac;
    for (int i = 0; i <= bac; ++i)
        kq.heso[i + deltaA] += heso[i];
    for (int i = 0; i <= B.bac; ++i)
        kq.heso[i + deltaB] += B.heso[i];
    while (kq.bac > 0 && kq.heso[0] == 0) {
        for (int i = 0; i < kq.bac; ++i)
            kq.heso[i] = kq.heso[i + 1];
        kq.heso[kq.bac] = 0;
        kq.bac--;
    }
    return kq;
}
DaThuc DaThuc::Tru(const DaThuc& B) 
{
    int maxBac = max(bac, B.bac);
    DaThuc kq(maxBac);
    int deltaA = maxBac - bac;
    int deltaB = maxBac - B.bac;
    for (int i = 0; i <= bac; ++i)
        kq.heso[i + deltaA] += heso[i];
    for (int i = 0; i <= B.bac; ++i)
        kq.heso[i + deltaB] -= B.heso[i];
    while (kq.bac > 0 && kq.heso[0] == 0) {
        for (int i = 0; i < kq.bac; ++i)
            kq.heso[i] = kq.heso[i + 1];
        kq.heso[kq.bac] = 0;
        kq.bac--;
    }
    return kq;
}
