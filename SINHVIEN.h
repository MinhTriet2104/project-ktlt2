#pragma once
#include "BANDOC.h"
class SINHVIEN :
	public BANDOC
{
private:
	string sKhoaHoc;
public:
	SINHVIEN()
	{
		this->sKhoaHoc = "";
	}
	SINHVIEN(string sMaBanDoc, string sHoTen, string sKhoa, int iNgay, int iThang, int iNam, string sKhoaHoc) :
		BANDOC(sMaBanDoc, sHoTen, sKhoa, iNgay, iThang, iNam)
	{
		this->sKhoaHoc = sKhoaHoc;
	}

	string getKhoahoc();
	void setKhoahoc(string sKhoaHoc);

	friend istream& operator >> (istream&is, SINHVIEN &xSV)
	{
		cout << "Nhap ma ban doc: ";
		rewind(stdin);
		getline(is, xSV.sMaBanDoc);
		cout << "Nhap ho ten: ";
		rewind(stdin);
		getline(is, xSV.sHoTen);
		cout << "Nhap khoa: ";
		rewind(stdin);
		getline(is, xSV.sKhoa);
		cout << "Nhap ngay tham gia: \n";
		cin >> xSV.xNgayThamGia;
		cout << "Nhap Khoa hoc: ";
		rewind(stdin);
		getline(is,xSV.sKhoaHoc);

		return is;
	}
	friend ostream& operator << (ostream&os, SINHVIEN &xSV)
	{
		os << "Ma ban doc : " << xSV.sMaBanDoc << endl;
		os << "Ho va ten : " << xSV.sHoTen << endl;
		os << "Khoa : " << xSV.sKhoa << endl;
		os << "Ngay tham gia : " << xSV.xNgayThamGia;
		os << "Khoa hoc : " << xSV.sKhoaHoc << endl;
		return os;
	}
	//doc va ghi file
	friend ifstream& operator >> (ifstream &ifs, SINHVIEN &xSV)
	{
		getline(ifs, xSV.sMaBanDoc, '#');

		getline(ifs, xSV.sHoTen, '#');

		getline(ifs, xSV.sKhoa, '#');

		ifs >> xSV.xNgayThamGia;
		ifs.ignore(1);

		getline(ifs, xSV.sKhoaHoc);

		return ifs;
	}
	friend ofstream& operator << (ofstream &ofs, SINHVIEN &xSV)
	{
		ofs << xSV.sMaBanDoc << '#';
		ofs << xSV.sHoTen << '#';
		ofs << xSV.sKhoa << '#';
		ofs << xSV.xNgayThamGia << '#';
		ofs << xSV.sKhoaHoc;
		return ofs;
	}
	~SINHVIEN() {};
};

