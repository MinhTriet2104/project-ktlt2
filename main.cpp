//Khai bao thu vien
#include "Administrator.h"
#include"SINHVIEN.h"
#include "GIAOVIEN.h"
#include <vector>


//Khai bao nguyen mau ham
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
	vector<SINHVIEN> dsSV;
	vector<GIAOVIEN> dsGV;
	ifstream docFile;

	docFile.open("Administrator.dat");
	docDsAdmin(dsAdmin, docFile);
	xuatDsAdmin(dsAdmin);
	docFile.open("User_Data.txt");
	docDsSV(dsSV, docFile);
	xuatDsSV(dsSV);
	docFile.open("User_Data_GV.txt");
	docDsGV(dsGV, docFile);
	xuatDsGV(dsGV);
	system("pause");
	return 0;
}
//dinh nghi chuong trinh con
void docDsSV(vector<SINHVIEN> &dsSV, ifstream &docFile)
{
	while (docFile.eof() != 1)
	{
		SINHVIEN xSV;
		docFile >> xSV;
		dsSV.push_back(xSV);
	}
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
	while (docFile.eof() != 1)
	{
		GIAOVIEN xGV;
		docFile >> xGV;
		dsGV.push_back(xGV);
	}
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
	while (docFile.eof() != 1) {
		Administrator xAdmin;
		docFile >> xAdmin;
		dsAdmin.push_back(xAdmin);
	}
}