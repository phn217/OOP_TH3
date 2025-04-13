#include "DaThuc.h"

void main() 
{
    DaThuc A, B, tong, hieu;
    int chon, x;
    do
    {
        cout << "---------------------MENU---------------------\n";
        cout << "1. Nhap da thuc\n";
        cout << "2. Xuat da thuc\n";
        cout << "3. Tinh gia tri cua da thuc khi co gia tri x\n";
        cout << "4. Cong hai da thuc\n";
        cout << "5. Tru hai da thuc\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "----------------------------------------------\n";
        cout << "Ban chon: ";
        cin >> chon;
        switch (chon)
        {
        case 0:
            cout << "Dang thoat chuong trinh...\n";
            break;
        case 1:
            cout << "Nhap da thuc A:\n";
            A.Nhap();
            break;
        case 2:
            cout << "Da thuc A: ";
            A.Xuat();
            break;
        case 3:
            cout << "Nhap gia tri x: ";
            cin >> x;
            cout << "Gia tri A(" << x << ") = " << A.TinhGiaTri(x) << endl;
            break;
        case 4:
            cout << "Nhap da thuc A:\n";
            A.Nhap();
            cout << "Nhap da thuc B:\n";
            B.Nhap();
            tong = A.Cong(B);
            cout << "\nDa thuc A: ";
            A.Xuat();
            cout << "Da thuc B: ";
            B.Xuat();
            cout << "\nTong A + B: ";
            tong.Xuat();
            break;
        case 5:
            cout << "Nhap da thuc A:\n";
            A.Nhap();
            cout << "Nhap da thuc B:\n";
            B.Nhap();
            hieu = A.Tru(B);
            cout << "\nDa thuc A: ";
            A.Xuat();
            cout << "Da thuc B: ";
            B.Xuat();
            cout << "\nHieu A - B: ";
            hieu.Xuat();
            break;
        default:
            cout << "Ban chon sai. Vui long chon lai!\n";
            break;
        }
    } while (chon != 0);
}
