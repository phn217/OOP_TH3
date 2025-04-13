#include "DaGiac.h"

void main()
{
	Diem;
	DaGiac dg;
	int chon;
	do
	{
		cout << "----------------MENU----------------\n";
		cout << "1. Nhap da giac\n";
		cout << "2. Xuat da giac\n";
		cout << "3. Kiem tra da giac\n";
		cout << "4. Tinh chu vi da giac\n";
		cout << "5. Tinh dien tich da giac\n";
		cout << "6. Tinh tien da giac\n";
		cout << "7. Quay da giac\n";
		cout << "8. Phong to da giac\n";
		cout << "9. Thu nho da giac\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "------------------------------------\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			cout << "Dang thoat chuong trinh...\n";
			break;
		case 1:
			dg.Nhap();
			break;
		case 2: 
			dg.Xuat();
			break;
		case 3:
			dg.Xuat();
			cout << "Phan loai: " << dg.PhanLoai() << endl;
			break;
		case 4:
			cout << "Chu vi: " << dg.TinhChuVi() << endl;
			break;
		case 5:
			cout << "Dien tich: " << dg.TinhDienTich() << endl;
			break;
		case 6:
			double x, y;
			cout << "Tinh tien tren truc Ox mot doan dx = ";
			cin >> x;
			cout << "Tinh tien tren truc Oy mot doan dy = ";
			cin >> y;
			dg.TinhTien(x, y);
			cout << "Da giac sau khi tinh tien: " << endl;
			dg.Xuat();
			break;
		case 7:
			double goc;
			cout << "Quay da giac mot goc = ";
			cin >> goc;
			dg.Quay(goc);
			cout << "Da giac sau khi quay " << goc << " do: \n";
			dg.Xuat();
			break;
		case 8:
			double scale1;
			cout << "Phong to da giac theo ti le: ";
			cin >> scale1;
			dg.PhongTo(scale1);
			cout << "Da giac sau khi da phong to: \n";
			dg.Xuat();
			break;
		case 9: 
			double scale2;
			cout << "Thu nho da giac theo ti le: ";
			cin >> scale2;
			dg.ThuNho(scale2);
			cout << "Da giac sau khi thu nho: \n";
			dg.Xuat();
			break;
		default:
			cout << "Ban chon sai. Moi chon lai\n";
			break;
		}
	} while (chon != 0);
}