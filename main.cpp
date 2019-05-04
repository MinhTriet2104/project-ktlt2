//Khai bao thu vien
#include "Administrator.h"
#include"SINHVIEN.h"
#include "GIAOVIEN.h"
#include "SACH.h"
#include <vector>


//Khai bao nguyen mau ham
void docDsSach(vector<SACH> &dsSach, ifstream &docFile);
void xuatDsSach(vector<SACH> dsSach);
void ghiDsSach(vector<SACH> dsSach, ofstream &ghiFile);
void docDsAdmin(vector<Administrator> &dsAdmin, ifstream &docFile);
void xuatDsAdmin(vector<Administrator> dsAdmin);
void docDsSV(vector<SINHVIEN> &dsSV, ifstream &docFile);
void xuatDsSV(vector<SINHVIEN> dsSV);
void docDsGV(vector<GIAOVIEN> &dsGV, ifstream &docFile);
void xuatDsGV(vector<GIAOVIEN> dsGV);
//chuong trinh chinh
int main() 
{
	vector<Administrator> dsAdmin;
	vector<SACH> dsSach;
	vector<SINHVIEN> dsSV;
	vector<GIAOVIEN> dsGV;
	ifstream docFile;

	//docDsAdmin(dsAdmin, docFile);
	//xuatDsAdmin(dsAdmin);

	//docDsSach(dsSach, docFile);
	//xuatDsSach(dsSach);

	//docDsSV(dsSV, docFile);
	//xuatDsSV(dsSV);

	docDsGV(dsGV, docFile);
	xuatDsGV(dsGV);

	system("pause");
	return 0;
}
//dinh nghi chuong trinh con
void docDsSV(vector<SINHVIEN> &dsSV, ifstream &docFile)
{
	docFile.open("User_Data_SV.dat");
	while (docFile.eof() != 1)
	{
		SINHVIEN xSV;
		docFile >> xSV;
		dsSV.push_back(xSV);
		docFile.ignore(1);
	}
	docFile.close();
}
void xuatDsSV(vector<SINHVIEN> dsSV)
{
	for (int i = 0; i < dsSV.size(); i++)
	{
		cout << "- Sinh vien " << i + 1 << " -\n";
		cout << dsSV[i];
	}
}
void docDsGV(vector<GIAOVIEN> &dsGV, ifstream &docFile)
{
	docFile.open("User_Data_GV.dat");
	while (docFile.eof() != 1)
	{
		GIAOVIEN xGV;
		docFile >> xGV;
		dsGV.push_back(xGV);
		docFile.ignore(1);
	}
	docFile.close();
}
void xuatDsGV(vector<GIAOVIEN> dsGV)
{
	for (int i = 0; i < dsGV.size(); i++)
	{
		cout << "- Giao vien " << i + 1 << " -\n";
		cout << dsGV[i];
	}
}
void xuatDsAdmin(vector<Administrator> dsAdmin)
{
	for (int i = 0; i < dsAdmin.size(); i++)
	{
		cout << "- Admin " << i + 1 << " -\n";
		cout << dsAdmin[i];
	}
}

void docDsAdmin(vector<Administrator> &dsAdmin, ifstream &docFile) {
	docFile.open("Administrator.dat");
	while (docFile.eof() != 1) {
		Administrator xAdmin;
		docFile >> xAdmin;
		dsAdmin.push_back(xAdmin);
	}
	docFile.close();
}

void ghiDsSach(vector<SACH> dsSach, ofstream &ghiFile) {
	ghiFile.open("Book_Data.dat");
	for (int i = 0; i < dsSach.size(); i++) {
		ghiFile << dsSach[i];
		if (i != dsSach.size() - 1) {
			ghiFile << endl;
		}
	}
	ghiFile.close();
}

void xuatDsSach(vector<SACH> dsSach) {
	for (int i = 0; i < dsSach.size(); i++) {
		cout << "\n- Thong tin sach " << i + 1 << " -\n";
		cout << dsSach[i];
	}
}

void docDsSach(vector<SACH> &dsSach, ifstream &docFile) {
	docFile.open("Book_Data.dat");
	while (docFile.eof() != 1) {
		SACH xS;
		docFile >> xS;
		dsSach.push_back(xS);
		docFile.ignore(1);
	}
	docFile.close();
}