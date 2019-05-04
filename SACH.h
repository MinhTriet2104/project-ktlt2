#pragma once
#include "Date.h"
#include <string>
using namespace std;

class SACH
{
private:
	string sMaSach;
	string sTuaDe;
	string sTacGia;
	string sNhaXuatBan;
	Date xNgayNhapKho;
	int	iTriGia;
	int	iNamPhatHanh;
	int	iSoTrang;
	int iTinhTrangSach;

public:
	SACH()
	{
		sMaSach = "";
		sTuaDe = "";
		sTacGia = "";
		sNhaXuatBan = "";
		iTriGia = 0;
		iNamPhatHanh = 0;
		iSoTrang = 0;
		iTinhTrangSach = 0;

	}

	SACH(string sMaSach) {
		this->sMaSach = sMaSach;
	}

	SACH(string sMaSach, string sTuaDe, string sTacGia, string sNhaXuatBan,
	int iNgay, int iThang, int iNam, int iTriGia, int iNamPhatHanh, int iSoTrang,
	int iTinhTrangSach) : xNgayNhapKho(iNgay, iThang, iNam) {
		sMaSach = sMaSach;
		sTuaDe = sTuaDe;
		sTacGia = sTacGia;
		sNhaXuatBan = sNhaXuatBan;
		iTriGia = iTriGia;
		iNamPhatHanh = iNamPhatHanh;
		iSoTrang = iSoTrang;
		iTinhTrangSach = 0;
	}

	//SACH(string sMaSach, string sTuaDe, string sTacGia, string sNhaXuatBan,
	//	string sNgayNhapKho, int iTriGia, int iNamPhatHanh, int iSoTrang,
	//	int iTinhTrangSach, int iSoPhieuMuon, string sMaBanDoc,
	//	string sNgayMuon, string sNgayTra, int iTinhTrangPhieuMuon) :
	//	xPM(iSoPhieuMuon, sMaBanDoc, sNgayMuon, sNgayTra, iTinhTrangPhieuMuon)
	//{
	//	this->sMaSach = sMaSach;
	//	this->sTuaDe = sTuaDe;
	//	this->sTacGia = sTacGia;
	//	this->sNhaXuatBan = sNhaXuatBan;
	//	this->sNgayNhapKho = sNgayNhapKho;
	//	this->iTriGia = iTriGia;
	//	this->iNamPhatHanh = iNamPhatHanh;
	//	this->iSoTrang = iSoTrang;
	//	this->iTinhTrangSach = iTinhTrangSach;
	//}

	string getMasach();
	string getTuaDe();
	string getTacGia();
	string getNhaXuatBan();
	int getTriGia();
	int getNamPhatHanh();
	int getSoTrang();
	int getTinhTrangSach();

	void setMasach(string sMaSach);
	void setTuaDe(string sTuaDe);
	void setTacGia(string sTacGia);
	void setNhaXuatBan(string sNhaXuatBan);
	void setTriGia(int iTriGia);
	void setNamPhatHanh(int iNamPhatHanh);
	void setSoTrang(int iSoTrang);
	void setTinhTrangSach(int iTinhTrangSach);
	void setSach(string sMaSach, string sTuaDe, string sTacGia, string sNhaXuatBan,
		string sNgayNhapKho, int iTriGia, int iNamPhatHanh, int iSoTrang, int iTinhTrangSach);

	//Dinh nghia toan tu nhap/xuat:
	friend istream& operator >> (istream &is, SACH &xS)
	{
		cout << "Nhap ma sach: ";
		rewind(stdin);
		getline(cin, xS.sMaSach);

		cout << "Nhap Tua de: ";
		rewind(stdin);
		getline(cin, xS.sTuaDe);

		cout << "Nhap Tac gia : ";
		rewind(stdin);
		getline(cin, xS.sTacGia);

		cout << "Nhap nha xuat ban : ";
		rewind(stdin);
		getline(cin, xS.sNhaXuatBan);

		cout << "Nhap ngay nhap kho\n";
		cin >> xS.xNgayNhapKho;

		cout << "Nhap tri gia : ";
		cin >> xS.iTriGia;

		cout << "Nhap nam phat hanh  : ";
		cin >> xS.iNamPhatHanh;

		cout << "Nhap so trang : ";
		cin >> xS.iSoTrang;

		return is;
	}

	friend ostream& operator << (ostream &os, SACH &xS)
	{
		os << "Ma sach : " << xS.sMaSach << endl;
		os << "Tua de : " << xS.sTuaDe << endl;
		os << "Tac gia : " << xS.sTacGia << endl;
		os << "Nha xuat ban : " << xS.sNhaXuatBan << endl;
		os << "Ngay nhap kho : " << xS.xNgayNhapKho;
		os << "Tri gia : " << xS.iTriGia << endl;
		os << "Nam phat hanh : " << xS.iNamPhatHanh << endl;
		os << "So trang : " << xS.iSoTrang << endl;
		os << "Tinh trang sach : " << xS.iTinhTrangSach << endl;

		return os;
	}

	//Doc va ghi file
	friend ifstream& operator >> (ifstream &ifs, SACH &xS) {
		getline(ifs, xS.sMaSach, '#');

		getline(ifs, xS.sTuaDe, '#');

		getline(ifs, xS.sTacGia, '#');

		getline(ifs, xS.sNhaXuatBan, '#');

		ifs >> xS.xNgayNhapKho;
		ifs.ignore(1);

		ifs >> xS.iTriGia;
		ifs.ignore(1);

		ifs >> xS.iNamPhatHanh;
		ifs.ignore(1);

		ifs >> xS.iSoTrang;
		ifs.ignore(1);

		ifs >> xS.iTinhTrangSach;

		return ifs;
	}

	friend ofstream& operator << (ofstream &ofs, SACH &xS) {
		ofs << xS.sMaSach << '#';
		ofs << xS.sTuaDe << '#';
		ofs << xS.sTacGia << '#';
		ofs << xS.sNhaXuatBan << '#';
		ofs << xS.xNgayNhapKho << '#';
		ofs << xS.iTriGia << '#';
		ofs << xS.iNamPhatHanh << '#';
		ofs << xS.iSoTrang << '#';
		ofs << xS.iTinhTrangSach;

		return ofs;
	}

	~SACH() {};

};

