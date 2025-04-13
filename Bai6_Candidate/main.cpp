#include "ListCandidate.h"

void main() 
{
    ListCandidate ds;
    int chon;
    do
    {
        cout << "\n-------------------------MENU-------------------------\n";
        cout << "1. Nhap danh sach thi sinh\n";
        cout << "2. Sap xep danh sach thi sinh theo tong diem giam dan\n";
        cout << "3. Xuat thong tin thi sinh co tong diem cao nhat\n";
        cout << "4. Xuat danh sach thi sinh co tong diem lon hon 15\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "------------------------------------------------------\n";
        cout << "Ban chon: ";
        cin >> chon;
        switch (chon)
        {
        case 0:
            cout << "Dang thoat chuong trinh...\n";
            break;
        case 1:
            ds.NhapDS();
            break;
        case 2:
            ds.SapXepGiamDanTheoTongDiem();
            break;
        case 3:
            ds.ThiSinhDiemCaoNhat();
            break;
        case 4:
            ds.XuatDSTongDiemLonHon15();
            break;
        default:
            cout << "Ban chon sai. Vui long chon lai!\n";
            break;
        }
    } while (chon != 0);
}
