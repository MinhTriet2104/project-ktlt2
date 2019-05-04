#pragma once
#include"BANDOC.h"

class PHIEUMUON
{
private:
	int	iSoPhieuMuon;
	string sMaSach;
	string sNgayMuon;
	string sNgayTra;
	int iTinhTrangPhieuMuon;
	BANDOC xBD;
public:
	PHIEUMUON()
	{
		
		sNgayMuon = "";
		sNgayTra = "";
		iSoPhieuMuon = 0;
		iTinhTrangPhieuMuon = 0;

	}

	PHIEUMUON(int iSoPhieuMuon, string sNgayMuon, string sNgayTra, int iTinhTrangPhieuMuon,
		string sHoTen, string sKhoa, string sMaBanDoc, time_t tNgayThamGia)
	{
		
		this->sNgayMuon = sNgayMuon;
		this->sNgayTra = sNgayTra;
		this->iSoPhieuMuon = iSoPhieuMuon;
		this->iTinhTrangPhieuMuon = iTinhTrangPhieuMuon;
	}
	
	void setMaSV(string sMaSV);
	void setMaGV(string sMaGV);
	int	getSoPhieuMuon();
	string getNgayMuon();
	string getNgayTra();
	int getTinhTrangPhieuMuon();
	void setSoPhieuMuon(int iSoPhieuMuon);
	void setNgayMuon(string sNgayMuon);
	void setNgayTra(string sNgayTra);
	void setTinhTrangPhieuMuon(int iTinhTrangPhieuMuon);
	void setPhieumuon(int iSoPhieuMuon, string sMaBanDoc,
		string sNgayMuon, string sNgayTra, int iTinhTrangPhieuMuon);
	//Dinh nghia toan tu nhap/xuat:
	friend istream& operator >> (istream&is, PHIEUMUON xPM)
	{	
		cout << "Ngay muon : ";
		rewind(stdin);
		getline(cin, xPM.sNgayMuon);
		cout << "Ngay tra: ";
		rewind(stdin);
		getline(cin, xPM.sNgayTra);
		cout << "So phieu muon : ";
		cin >> xPM.iSoPhieuMuon;
		cout << "Tinh trang phieu muon: ";
		cin >> xPM.iTinhTrangPhieuMuon;
		return is;
	}
	friend ostream& operator << (ostream&os, PHIEUMUON xPM)
	{
		os << "Ngay muon : " << xPM.sNgayMuon << endl;
		os << "Ngay tra : " << xPM.sNgayTra << endl;
		os << "So phieu muon : " << xPM.iSoPhieuMuon << endl;
		os << "Tinh trang phieu muon : " << xPM.iTinhTrangPhieuMuon << endl;
		return os;
	}
	//Doc va ghi file
	friend ifstream& operator >> (ifstream &ifs, PHIEUMUON &xPM) {
		getline(ifs, xPM.sNgayMuon, '#');

		getline(ifs, xPM.sNgayTra, '#');

		ifs >> xPM.iSoPhieuMuon;
			ifs.ignore(1);
			ifs >> xPM.iTinhTrangPhieuMuon;
			ifs.ignore(1);
		return ifs;
	}

	friend ofstream& operator << (ofstream &ofs, PHIEUMUON &xPM) {
		ofs << xPM.sNgayMuon << '#';
		ofs << xPM.sNgayTra << '#';
		ofs << xPM.iSoPhieuMuon << '#';
		ofs << xPM.iTinhTrangPhieuMuon << '#';
		return ofs;
	}
	~PHIEUMUON() {};
};

