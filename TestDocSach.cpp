#include "SACH.h"
#include <vector>

//Khai bao nguyen ham
void docDsSach(vector<SACH> &dsSach, ifstream &docFile);
void xuatDsSach(vector<SACH> dsSach);
void ghiDsSach(vector<SACH> dsSach, ofstream &ghiFile);

int main() {
	vector<SACH> dsSach;

	ifstream docFile;
	ofstream ghiFile;

	docDsSach(dsSach, docFile);
	xuatDsSach(dsSach);

	SACH s3;
	cout << "\n Nhap sach moi \n";
	cin >> s3;

	dsSach.push_back(s3);

	ghiDsSach(dsSach, ghiFile);

	docFile.close();
	ghiFile.close();

	system("pause");
	return 0;
}

void ghiDsSach(vector<SACH> dsSach, ofstream &ghiFile) {
	ghiFile.open("SACH.dat");
	for (int i = 0; i < dsSach.size(); i++) {
		ghiFile << dsSach[i];
		if (i != dsSach.size() - 1) {
			ghiFile << endl;
		}
	}
}

void xuatDsSach(vector<SACH> dsSach) {
	for (int i = 0; i < dsSach.size(); i++) {
		cout << "\n- Thong tin sach " << i + 1 << " -\n";
		cout << dsSach[i];
	}
}

void docDsSach(vector<SACH> &dsSach, ifstream &docFile) {
	docFile.open("SACH.dat");

	while (docFile.eof() != 1) {
		SACH xS;
		docFile >> xS;
		dsSach.push_back(xS);
		docFile.ignore(1);
	}
}