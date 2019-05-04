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
	GIAOVIEN(string sMaBanDoc, string sHoTen, string sKhoa, string sDiaChi, string sSDT, int iNgay, int iThang, int iNam)
		:BANDOC(sHoTen, sKhoa, sMaBanDoc, iNgay, iThang, iNam)
	{
		this->sDiaChi = sDiaChi;
		this->sSDT = sSDT;
	}
	string getDiachi();
	string getSDT();
	void setDiachi(string sDiaChi);
	void setSDT(string sSDT);
	void setGIAOVIEN(string sDiaChi, string sSDT);

	friend istream& operator >> (istream&is, GIAOVIEN &xGV)
	{
		cout << "Ma ban doc : ";
		rewind(stdin);
		getline(is, xGV.sMaBanDoc);
		cout << "nhap Ho ten: ";
		rewind(stdin);
		getline(is, xGV.sHoTen);
		cout << "Khoa: ";
		rewind(stdin);
		getline(is, xGV.sKhoa);
		cout << "Dia Chi: ";
		rewind(stdin);
		getline(is, xGV.sDiaChi);
		cout << "SDT: ";
		rewind(stdin);
		getline(is, xGV.sSDT);
		cout << "Nhap ngay tham gia: \n";
		is >> xGV.xNgayThamGia;

		return is;
	}
	friend ostream& operator << (ostream&os, GIAOVIEN &xGV)
	{
		os << "Ma ban doc : " << xGV.sMaBanDoc << endl;
		os << "Ho va ten : " << xGV.sHoTen << endl;
		os << "Khoa : " << xGV.sKhoa << endl;
		os << "Ngay tham gia : " << xGV.xNgayThamGia;
		os << "DiaChi : " << xGV.sDiaChi << endl;
		os << "SDT : " << xGV.sSDT << endl;
		return os;
	}
	friend ifstream& operator >> (ifstream &ifs, GIAOVIEN &xGV)
	{
		getline(ifs, xGV.sMaBanDoc, '#');
		getline(ifs, xGV.sHoTen, '#');
		getline(ifs, xGV.sKhoa, '#');
		ifs >> xGV.xNgayThamGia;
		ifs.ignore(1);
		getline(ifs, xGV.sDiaChi, '#');
		getline(ifs, xGV.sSDT);
		return ifs;
	}
	friend ofstream& operator << (ofstream &ofs, GIAOVIEN &xGV)
	{
		ofs << xGV.sMaBanDoc << '#';
		ofs << xGV.sHoTen << '#';
		ofs << xGV.sKhoa << '#';
		ofs << xGV.xNgayThamGia << '#';
		ofs << xGV.sDiaChi << '#';
		ofs << xGV.sSDT;
		return ofs;
	}
	~GIAOVIEN() {};
};

