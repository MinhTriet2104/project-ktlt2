#ifndef Sach_h
#define Sach_h

#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

class SACH;
class Date
{
private:
	int iNgay;
	int iThang;
	int iNam;
public:
	friend SACH;
	Date() {
		this->iNgay = 1;
		this->iThang = 1;
		this->iNam = 0;
	}

	Date(int iNgay, int iThang, int iNam) {
		this->iNgay = 1;
		this->iThang = 1;
		this->iNam = 0;
	}

	int getNgay();
	int getThang();
	int getNam();
	void setNgay(int iNgay);
	void setThang(int iThang);
	void setNam(int iNam);
	void setDate(int iNgay, int iThang, int iNam);

	friend istream& operator >> (istream &is, Date &xD) {
		cout << "Nhap ngay: ";
		is >> xD.iNgay;

		cout << "Nhap thang: ";
		is >> xD.iThang;

		cout << "Nhap nam: ";
		is >> xD.iNam;

		return is;
	}

	friend ostream& operator << (ostream &os, Date &xD) {
		//os << setfill(0) <<  setw(2);
		os << xD.iNgay << "/" << xD.iThang << "/" << xD.iNam << endl;

		return os;
	}

	friend ifstream& operator >> (ifstream &ifs, Date &xD) {
		ifs >> xD.iNgay;
		ifs.ignore(1);
		ifs >> xD.iThang;
		ifs.ignore(1);
		ifs >> xD.iNam;

		return ifs;
	}

	friend ofstream& operator << (ofstream &ofs, Date &xD) {
		ofs << xD.iNgay << "/" << xD.iThang << "/" << xD.iNam;

		return ofs;
	}

	virtual ~Date() {};
};

#endif // !Sach_h