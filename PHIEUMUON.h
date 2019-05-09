#pragma once
#include "Date.h"
#include "BANDOC.h"
#include "SACH.h"

class PHIEUMUON
{
private:
	static int iSoPhieuMuon;
	int iSoPhieu;
	BANDOC xBD;
	SACH xSach;
	string sMaBD;
	string sMaSach;
	Date xNgayMuon;
	Date xNgayTra;
	int iTinhTrangPhieuMuon;
public:
	PHIEUMUON() {
		iSoPhieuMuon++;
		this->iSoPhieu = iSoPhieuMuon;
		this->iTinhTrangPhieuMuon = 1;

	}

	PHIEUMUON(string sMaBD, string sMaSach) : xBD(sMaBD), xSach(sMaSach)  {
		iSoPhieuMuon++;
		this->iSoPhieu = iSoPhieuMuon;
		this->sMaBD = sMaBD;
		this->sMaSach = sMaSach;
		//this->xNgayMuon.iNgay = 25;
		//this->xNgayMuon.iThang = 5;
		//this->xNgayMuon.iNam = 2019;
		this->xNgayTra = this->tinhNgayTra();
		this->iTinhTrangPhieuMuon = 1;
	}
	
	void setMaSV(string sMaSV);
	void setMaGV(string sMaGV);
	int	getSoPhieuMuon();
	Date getNgayMuon();
	Date tinhNgayTra();
	int getTinhTrangPhieuMuon();
	void setSoPhieuMuon(int iSoPhieu);
	void setTinhTrangPhieuMuon(int iTinhTrangPhieuMuon);
	//Dinh nghia toan tu nhap/xuat:
	friend istream& operator >> (istream&is, PHIEUMUON &xPM) {	
		cout << "Ma Ban doc: ";
		rewind(stdin);
		getline(cin, xPM.sMaBD);

		cout << "Ma Sach: ";
		rewind(stdin);
		getline(cin, xPM.sMaSach);

		return is;
	}
	friend ostream& operator << (ostream&os, PHIEUMUON &xPM) {
		os << "So phieu muon : " << xPM.iSoPhieu << endl;
		os << "Ma Ban doc: " << xPM.sMaBD << endl;
		os << "Ma Sach: " << xPM.sMaSach << endl;
		os << "Ngay muon : " << xPM.xNgayMuon;
		os << "Ngay tra : " << xPM.xNgayTra;
		os << "Tinh trang phieu muon : " << xPM.iTinhTrangPhieuMuon << endl;
		return os;
	}
	//Doc va ghi file
	friend ifstream& operator >> (ifstream &ifs, PHIEUMUON &xPM) {
		ifs >> xPM.iSoPhieu;
		ifs.ignore(1);
		getline(ifs, xPM.sMaBD, '#');
		getline(ifs, xPM.sMaSach, '#');

		ifs >> xPM.xNgayMuon;
		ifs.ignore(1);

		ifs >> xPM.xNgayTra;
		ifs.ignore(1);

		ifs >> xPM.iTinhTrangPhieuMuon;

		return ifs;
	}

	friend ofstream& operator << (ofstream &ofs, PHIEUMUON &xPM) {
		ofs << xPM.xNgayMuon << '#';
		ofs << xPM.xNgayTra << '#';
		ofs << xPM.iSoPhieuMuon << '#';
		ofs << xPM.iTinhTrangPhieuMuon;
		return ofs;
	}
	~PHIEUMUON() {};
};

