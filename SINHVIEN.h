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
	SINHVIEN(string sKhoaHoc, string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia) :
		BANDOC(sHoTen, sKhoa, sMaBanDoc, tNgayThamGia)
	{
		this->sKhoaHoc = sKhoaHoc;
	}
	string getKhoahoc();
	void setKhoahoc(string sKhoaHoc);
	void setSINHVIEN(string sKhoaHoc, string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia);
	friend istream& operator >> (istream&is, SINHVIEN xSV)
	{
		cout << " nhap Khoa hoc: ";
		rewind(stdin);
		getline(cin,xSV.sKhoaHoc);
		cout << "Nhap ho ten: ";
		rewind(stdin);
		getline(cin, xSV.sHoTen);
		cout << "Nhap khoa: ";
		rewind(stdin);
		getline(cin, xSV.sKhoa);
		cout << "Nhap ma ban doc: ";
		rewind(stdin);
		getline(cin, xSV.sMaBanDoc);
		cout << "Nhap ngay tham gia: ";
		cin >> xSV.tNgayThamGia;

		return is;
	}
	friend ostream& operator << (ostream&os, SINHVIEN xSV)
	{
		os << "Khoa hoc : " << xSV.sKhoaHoc << endl;
		os << "Ho va ten : " << xSV.sHoTen << endl;
		os << "Khoa : " << xSV.sKhoa << endl;
		os << "Ma ban doc : " << xSV.sMaBanDoc << endl;
		os << "Ngay tham gia : " << xSV.tNgayThamGia << endl;
		return os;
	}
	//doc va ghi file
	friend ifstream& operator >> (ifstream &ifs, SINHVIEN &xSV)
	{
		getline(ifs, xSV.sKhoaHoc, '#');

		getline(ifs, xSV.sHoTen, '#');

		getline(ifs, xSV.sKhoa, '#');

		getline(ifs, xSV.sMaBanDoc, '#');
		ifs >> xSV.tNgayThamGia;
		ifs.ignore(1);
		return ifs;
	}
	friend ofstream& operator << (ofstream &ofs, SINHVIEN &xSV)
	{
		ofs << xSV.sKhoaHoc << '#';
		ofs << xSV.sHoTen << '#';
		ofs << xSV.sKhoa << '#';
		ofs << xSV.sMaBanDoc << '#';
		ofs << xSV.tNgayThamGia << '#';
		return ofs;
	}
	~SINHVIEN() {};
};

