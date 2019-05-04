#include "PHIEUMUON.h"

int	PHIEUMUON::getSoPhieuMuon()
{
	return iSoPhieuMuon;
}
string PHIEUMUON::getNgayMuon()
{
	return sNgayMuon;
}
string PHIEUMUON::getNgayTra()
{
	return sNgayTra;
}
int PHIEUMUON::getTinhTrangPhieuMuon()
{
	return iTinhTrangPhieuMuon;
}
void PHIEUMUON::setSoPhieuMuon(int iSoPhieuMuon)
{
	this->iSoPhieuMuon = iSoPhieuMuon;
}
void PHIEUMUON::setNgayMuon(string sNgayMuon)
{
	this->sNgayMuon = sNgayMuon;
}
void PHIEUMUON::setNgayTra(string sNgayTra)
{
	this->sNgayTra = sNgayTra;
}
void PHIEUMUON::setTinhTrangPhieuMuon(int iTinhTrangPhieuMuon)
{
	this->iTinhTrangPhieuMuon = iTinhTrangPhieuMuon;
}
void PHIEUMUON::setPhieumuon(int iSoPhieuMuon, string sMaBanDoc,
	string sNgayMuon, string sNgayTra, int iTinhTrangPhieuMuon)
{

	this->sNgayMuon = sNgayMuon;
	this->sNgayTra = sNgayTra;
	this->iSoPhieuMuon = iSoPhieuMuon;
	this->iTinhTrangPhieuMuon = iTinhTrangPhieuMuon;
}