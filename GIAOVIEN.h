#pragma once
#include "BANDOC.h"
class GIAOVIEN :
	public BANDOC
{
private:
	string sDiaChi;
	string sSDT;
public:
	GIAOVIEN()
	{
		this->sDiaChi = "";
		this->sSDT = "";
	}
	GIAOVIEN(string sDiaChi, string sSDT, string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia)
		:BANDOC(sHoTen,sKhoa, sMaBanDoc,tNgayThamGia)
	{
		this->sDiaChi = sDiaChi;
		this->sSDT = sSDT;
	}
	string getDiachi();
	string getSDT();
	void setDiachi(string sDiaChi);
	void setSDT(string sSDT);
	void setGIAOVIEN(string sDiaChi, string sSDT, string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia);

	friend istream& operator >> (istream&is, GIAOVIEN xGV)
	{
		cout << " nhap Ho ten: ";
		rewind(stdin);
		getline(cin, xGV.sHoTen);
		cout << "Khoa: ";
		rewind(stdin);
		getline(cin, xGV.sKhoa);
		cout << "Dia Chi: ";
		rewind(stdin);
		getline(cin, xGV.sDiaChi);
		cout << "SDT: ";
		rewind(stdin);
		getline(cin, xGV.sSDT);
		cout << "Nhap ngay tham gia: ";
		cin >> xGV.tNgayThamGia;
		cout << "Ma ban doc : ";
		rewind(stdin);
		getline(cin, xGV.sMaBanDoc);

		return is;
	}
	friend ostream& operator << (ostream&os, GIAOVIEN xGV)
	{
		os << "Ho va ten : " << xGV.sHoTen << endl;
		os << "Khoa : " << xGV.sKhoa << endl;
		os << "DiaChi : " << xGV.sDiaChi << endl;
		os << "SDT : " << xGV.sSDT << endl;
		os << "Ngay tham gia : " << xGV.tNgayThamGia << endl;
		os << "Ma ban doc : " << xGV.sMaBanDoc << endl;
		return os;
	}
	friend ifstream& operator >> (ifstream &ifs, GIAOVIEN &xGV)
	{
		getline(ifs, xGV.sHoTen, '#');
		getline(ifs, xGV.sKhoa, '#');
		getline(ifs, xGV.sDiaChi, '#');
		getline(ifs, xGV.sSDT, '#');
		ifs >> xGV.tNgayThamGia;
		ifs.ignore(1);
		getline(ifs, xGV.sMaBanDoc, '#');
		return ifs;
	}
	friend ofstream& operator << (ofstream &ofs, GIAOVIEN &xGV)
	{
		ofs << xGV.sHoTen << '#';
		ofs << xGV.sDiaChi << '#';
		ofs << xGV.sSDT << '#';
		ofs << xGV.tNgayThamGia << '#';
		ofs << xGV.sMaBanDoc << '#';
		return ofs;
	}
	~GIAOVIEN() {};
};

