#include "Array.h"

void main()
{
	Array mang;
	int chon, x, minle, maxsnt;
	do
	{
		cout << "---------------------------MENU--------------------------\n";
		cout << "1. Tao mang ngau nhien gom n so nguyen\n";
		cout << "2. Xuat cac phan tu cua mang\n";
		cout << "3. Dem so lan xuat hien cua gia tri x trong mang\n";
		cout << "4. Kiem tra cac phan tu trong mang co tang dan hay khong\n";
		cout << "5. Tim so le nho nhat trong mang\n";
		cout << "6. Tim so nguyen to lon nhat trong mang\n";
		cout << "7. Sap xep cac phan tu trong mang tang dan\n";
		cout << "8. Sap xep cac phan tu trong mang giam dan\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "---------------------------------------------------------\n";
		cout << "Ban chon: ";
		cin >> chon;
		switch (chon)
		{
		case 0: 
			cout << "Dang thoat chuong trinh\n";
			break;
		case 1:
			mang.TaoMangNgauNhien();
			cout << "Tao mang thanh cong\n";
			break;
		case 2:
			mang.Xuat();
			break;
		case 3:
			cout << "Nhap vao gia tri x can dem: ";
			cin >> x;
			cout << "So " << x << " xuat hien " << mang.Dem(x) << " lan\n";
			break;
		case 4:
			if (mang.KiemTraTangDan())
				cout << "Mang tang dan\n";
			else
				cout << "Mang khong tang dan\n";
			break;
		case 5:
			minle = mang.TimPhanLeNhoNhat();
			if (minle != -1)
				cout << "Phan tu le nho nhat: " << minle << endl;
			else
				cout << "Khong co phan tu le trong mang\n";
			break;
		case 6:
			maxsnt = mang.TimSoNguyenToLonNhat();
			if (maxsnt != -1)
				cout << "So nguyen to lon nhat: " << maxsnt << endl;
			else
				cout << "Khong co so nguyen to trong mang\n";
			break;
		case 7:
			mang.SapXepTangDan();
			cout << "Mang sau khi sap xep tang dan: \n";
			mang.Xuat();
			break;
		case 8:
			mang.SapXepGiamDan();
			cout << "Mang sau khi sap xep giam dan: \n";
			mang.Xuat();
			break;
		default:
			cout << "Ban chon sai. Vui long chon lai!\n";
			break;
		}
	} while (chon != 0);
}