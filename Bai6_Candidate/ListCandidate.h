#pragma once
#include "Candidate.h"
#include <vector>
#include <algorithm>
class ListCandidate
{
private:
    std::vector<Candidate> ds;

public:
    void NhapDS();
    void XuatDSTongDiemLonHon15() const;
    void ThiSinhDiemCaoNhat() const;
    void SapXepGiamDanTheoTongDiem();
};

