#include "Array.h"

Array::Array() {}
void Array::TaoMangNgauNhien() 
{
    int n;
    cout << "Nhap so luong phan tu trong mang: ";
    cin >> n;
    arr.resize(n);
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < arr.size(); i++) {
        arr[i] = rand() % 100;
    }
}
void Array::Xuat() 
{
    if (arr.empty())
        cout << "Mang rong\n";
    else
        cout << "Cac phan tu trong mang: ";
        for (int num : arr) {
            cout << num << " ";
        }
    cout << endl;
}
int Array::Dem(int x) 
{
    int count = 0;
    for (int num : arr) {
        if (num == x) {
            count++;
        }
    }
    return count;
}
bool Array::KiemTraTangDan() 
{
    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
int Array::TimPhanLeNhoNhat() 
{
    int minOdd = INT_MAX;
    for (int num : arr) {
        if (num % 2 != 0 && num < minOdd) {
            minOdd = num;
        }
    }
    return minOdd == INT_MAX ? -1 : minOdd;
}
bool Array::LaSoNguyenTo(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int Array::TimSoNguyenToLonNhat() 
{
    int maxPrime = -1;
    for (int num : arr) {
        if (LaSoNguyenTo(num) && num > maxPrime) {
            maxPrime = num;
        }
    }
    return maxPrime;
}
void Array::SapXepTangDan() 
{
    sort(arr.begin(), arr.end());
}
void Array::SapXepGiamDan() 
{
    sort(arr.rbegin(), arr.rend());
}
