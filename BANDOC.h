#pragma once
#ifndef BANDOC_h
#define BANDOC_h

#include <string>
#include "Date.h"

class BANDOC
{
protected:
	string sHoTen;
	string	sKhoa;
	string	sMaBanDoc;
	Date xNgayThamGia;
public:
	BANDOC()
	{
		this->sHoTen = "";
		this->sKhoa = "";
		this->sMaBanDoc = "";
	}
	BANDOC(string sMaBanDoc, string sHoTen, string sKhoa, int iNgay, int iThang, int iNam) : xNgayThamGia(iNgay, iThang, iNam)
	{
		this->sHoTen = sHoTen;
		this->sKhoa = sKhoa;
		this->sMaBanDoc = sMaBanDoc;
	}

	string getHoten();
	string getKhoa();
	string getMabandoc();

	void setHoten(string sHoTen);
	void setKhoa(string sKhoa);
	void setMabandoc(string sMaBanDoc);
	void setBandoc(string sHoTen, string sKhoa, string sMaBanDoc);

	 ~BANDOC() {};
};
#endif // !BANDOC_h

