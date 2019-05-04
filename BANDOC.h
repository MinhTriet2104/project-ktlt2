#pragma once
#ifndef BANDOC_h
#define BANDOC_h

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <ctime>
#include <windows.h>

using namespace std;
class BANDOC
{
protected:
	string sHoTen;
	string	sKhoa;
	string	sMaBanDoc;
	time_t tNgayThamGia;
	HANDLE hConsoleColor;

public:
	BANDOC()
	{
		this->sHoTen = "";
		this->sKhoa = "";
		this->sMaBanDoc = "";
		this->tNgayThamGia = 0;
		this->hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
	}
	BANDOC(string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia)
	{
		this->sHoTen = sHoTen;
		this->sKhoa = sKhoa;
		this->sMaBanDoc = sMaBanDoc;
		this->tNgayThamGia = tNgayThamGia;
	}

	string getHoten();
	string getKhoa();
	string getMabandoc();
	time_t getNgaythamgia();

	void setHoten(string sHoTen);
	void setKhoa(string sKhoa);
	void setMabandoc(string sMaBanDoc);
	void setNgaythamgia(time_t tNgayThamGia);
	void setBandoc(string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia);

	//Dinh nghia toan tu nhap/xuat:
	friend istream& operator >> (istream&ifs, BANDOC xBd)
	{
		getline(ifs, xBd.sHoTen, '#');

		getline(ifs, xBd.sKhoa, '#');

		getline(ifs, xBd.sMaBanDoc, '#');
		ifs >> xBd.tNgayThamGia;
		ifs.ignore(1);
		return ifs;
	}
	friend ostream& operator << (ostream&ofs, BANDOC xBd)
	{
		ofs <<xBd.sHoTen << '#';
		ofs << xBd.sKhoa << '#';
		ofs << xBd.sMaBanDoc << '#';
		ofs << xBd.tNgayThamGia << '#';

		return ofs;
	}
	 ~BANDOC() {};
};
#endif // !BANDOC_h

