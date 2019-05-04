#include "SINHVIEN.h"

string SINHVIEN::getKhoahoc()
{
	return sKhoaHoc;
}
void SINHVIEN::setKhoahoc(string sKhoaHoc)
{
	this->sKhoaHoc = sKhoaHoc;
}
void SINHVIEN::setSINHVIEN(string sKhoaHoc,string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia)
{
	this->sKhoaHoc = sKhoaHoc;
	this->sHoTen = sHoTen;
	this->sKhoa = sKhoa;
	this->sMaBanDoc = sMaBanDoc;
	this->tNgayThamGia = tNgayThamGia;
}