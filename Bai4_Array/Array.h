#pragma once
#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime>  
#include <algorithm> 
using namespace std;

class Array {
private:
    vector<int> arr; 
public:
    Array();
    void TaoMangNgauNhien();
    void Xuat();
    int Dem(int);
    bool KiemTraTangDan();
    int TimPhanLeNhoNhat();
    bool LaSoNguyenTo(int);
    int TimSoNguyenToLonNhat();
    void SapXepTangDan();
    void SapXepGiamDan();
};

