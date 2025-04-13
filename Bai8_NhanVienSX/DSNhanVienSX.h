#pragma once
#include "NhanVienSX.h"
#include <vector>
#include <algorithm>

class DSNhanVienSX {
private:
    vector<NhanVienSX> ds;
public:
    void NhapDanhSach(int);
    void XuatDanhSach() const;
    void TimLuongThapNhat() const;
    void TinhTongLuong() const;
    void TimTuoiCaoNhat() const;
    void SapXepTheoLuong();
};
