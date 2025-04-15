#pragma once
#include "NhanVienVP.h"
#include <vector>
#include <algorithm>
#include <iomanip>

class DSNhanVien 
{
private:
    vector<NhanVienVP> danhsach;
public:
    void NhapDanhSach(int);
    void XuatDanhSach() const;
    void TimLuongCaoNhat() const;
    void TimTuoiCaoNhat() const;
    void TinhTongLuong() const;
    void SapXepTheoLuongTangDan();
};


