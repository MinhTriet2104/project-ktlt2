//Khai bao thu vien
#include "Administrator.h"
#include"SINHVIEN.h"
#include "GIAOVIEN.h"
#include "SACH.h"
#include "PHIEUMUON.h"
#include <conio.h>
#include <windows.h>
#include <vector>

//Khai bao nguyen mau ham
void SetColor(int ForgC);
void docDsSach();
void xuatDsSach();
void ghiDsSach();
void ghiDsSV();
void ghiDsGV();
void ghiDsPM();
void ghiMoiPM();
void docDsAdmin();
void xuatDsAdmin();
void docDsSV();
void xuatDsSV();
void docDsGV();
void xuatDsGV();
void docDsPM();
void xuatDsPM();
void loading(int iTime);
void login();
int checkUsername(string sUser, string sPass);
void menu();
void QLPhieuMuon();
void QLSach();
void QLBanDoc();
void menuQL();
void menuTK();

//Khai bao bien tinh
int PHIEUMUON::iSoPhieuMuon = 0;

//Bien toan cuc
bool isAdmin = false;
vector<Administrator> dsAdmin;
vector<SACH> dsSach;
vector<SINHVIEN> dsSV;
vector<GIAOVIEN> dsGV;
vector<PHIEUMUON> dsPM;

//chuong trinh chinh
int main() 
{
	docDsAdmin();
	//xuatDsAdmin();

	docDsSach();
	//xuatDsSach();

	docDsSV();
	//xuatDsSV();
	

	docDsGV();
	//xuatDsGV();

	docDsPM();
	//xuatDsPM();

	login();

	system("pause");
	return 0;
}
//dinh nghi chuong trinh con
void menuQL() {
	int iOption;
	SetColor(10);
	cout << "\t\t*************************************************" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*                    ";
	SetColor(14);
	cout << "QUAN LY";
	SetColor(10);
	cout <<"                    *" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*************************************************" << endl;
	cout << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t1. Quan ly Phieu muon";SetColor(12); cout << "           =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t2. Quan ly Sach";SetColor(12); cout << "                 =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t3. Quan ly Ban doc";SetColor(12); cout << "              =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t4. Thong ke";SetColor(12); cout << "                     =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t5. Thoat";SetColor(12); cout << "                        =" << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	SetColor(11);
	cout << "\n\t\t-Choose service: ";
	SetColor(15);
	cin >> iOption;
	switch (iOption) {
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	default:
		break;
	}
}

void menuTK() {
	int iOption;
	SetColor(10);
	cout << "\t\t*************************************************" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*                   ";
	SetColor(14);
	cout << "TIM KIEM";
	SetColor(10);
	cout <<"                    *" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*************************************************" << endl;
	cout << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t1. Tim kiem Sach";SetColor(12); cout << "                =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t2. Tim kiem ban doc";SetColor(12); cout << "             =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t3. Thoat";SetColor(12); cout << "                        =" << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	SetColor(11);
	cout << "\n\t\t-Choose service: ";
	SetColor(15);
	cin >> iOption;
	string sTenSach;
	string sMaBD;
	bool exist = false;
	switch (iOption) {
	case 1:
		SetColor(11);
		cout << "\n\t\t- Nhap tua de sach: ";
		rewind(stdin);
		SetColor(15);
		getline(cin, sTenSach);
		for (int i = 0; i < dsSach.size(); i++) {
			if (dsSach[i].getTuaDe() == sTenSach) {
				cout << dsSach[i];
				exist = true;
				break;
			}
		}
		if (!exist) {
			SetColor(12);
			cout << "\n\t\tTua de sach khong ton tai!\n\n";
		}
		system("pause");
		system("cls");
		menuTK();
		break;
	case 2:
		SetColor(11);
		cout << "\n\t\t- Nhap Ma ban doc: ";
		rewind(stdin);
		SetColor(15);
		getline(cin, sMaBD);
		for (int i = 0; i < dsSV.size(); i++) {
			if (dsSV[i].getMabandoc() == sMaBD) {
				system("cls");
				cout << dsSV[i];
				exist = true;
				break;
			}
		}
		for (int i = 0; i < dsGV.size(); i++) {
			if (dsGV[i].getMabandoc() == sMaBD) {
				system("cls");
				cout << dsGV[i];
				exist = true;
				break;
			}
		}
		if (!exist) {
			SetColor(12);
			cout << "\n\t\tMa ban doc khong ton tai!\n\n";
		}
		system("pause");
		system("cls");
		menuTK();
		break;
	default:
		system("cls");
		menu();
		break;
	}
}

void menu() {
	int iOption;
	SetColor(10);
	cout << "\t\t*************************************************" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*                   ";
	SetColor(14);
	cout << "BOOK MENU";
	SetColor(10);
	cout <<"                   *" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*************************************************" << endl;
	cout << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t1. Hien thi thong tin sach";SetColor(12); cout << "      =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t2. Tim kiem thong tin";SetColor(12); cout << "           =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t3. Quan ly";SetColor(12); cout << "                      =" << endl;
	cout << "\t\t= "; SetColor(13); cout << "\t\t4. Thoat";SetColor(12); cout << "                        =" << endl;
	SetColor(12);
	cout << "\t\t=================================================" << endl;
	SetColor(11);
	cout << "\n\t\t-Choose service: ";
	SetColor(15);
	cin >> iOption;
	switch (iOption) {
	case 1:
		system("cls");
		xuatDsSach();
		cout << endl;
		system("pause");
		system("cls");
		menu();
		break;
	case 2:
		system("cls");
		menuTK();
		break;
	case 3:
		if (isAdmin == 1) {
			system("cls");
			menuQL();
			break;
		}
		else {
			SetColor(12);
			cout << "\n\t\t\tBan khong co quyen truy cap vao day!\n\n";
			system("pause");
			system("cls");
			menu();
			break;
		}
	default:
		system("cls");
		login();
		break;
	}
}

void login() {
	SetColor(10);
	cout << "\t\t*************************************************" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*                    ";
	SetColor(14);
	cout << "SIGN IN";
	SetColor(10);
	cout <<"                    *" << endl;
	cout << "\t\t*                                               *" << endl;
	cout << "\t\t*************************************************" << endl;
	cout << endl;

	SetColor(13);
	cout << "\t\t\t 1. Administrator\n";
	cout << "\t\t\t 2. Ban doc\n\n";
	SetColor(11);
	cout << "\t\t\t\t - Ban la: ";
	int iOption;
	SetColor(15);
	cin >> iOption;

	if (iOption == 2) {
		system("cls");
		menu();
	} else system("cls");

	int limit = 0;	

	while(limit < 3) {
		SetColor(10);
		cout << "\t\t*************************************************" << endl;
		cout << "\t\t*                                               *" << endl;
		cout << "\t\t*                    ";
		SetColor(14);
		cout << "SIGN IN";
		SetColor(10);
		cout <<"                    *" << endl;
		cout << "\t\t*                                               *" << endl;
		cout << "\t\t*************************************************" << endl;
		cout << endl;
		SetColor(13);
		string sUsername = "";
		cout << "\t\t\t-  Username:   ";
		SetColor(15);
		rewind(stdin);
		getline(cin, sUsername);

		SetColor(13);
		string sPass = "";
		char ch;
		cout << "\t\t\t-  Password:   ";
		SetColor(15);
		ch = _getch();
		while(ch != 13){
			sPass.push_back(ch);
			cout << '*';
			ch = _getch();
		}
		if (checkUsername(sUsername, sPass) == 1){
			isAdmin = true;
			SetColor(10);
			cout << "\n\n\t\t\t      Dang nhap thong cong!!!\n";
			cout << "\n\t\t\t\t\t\t";
			loading(3);
			system("cls");
			menu();
		}
		else {
			SetColor(12);
			cout << "\n\t\t\t      Sai ten hoac mat khau!\n";
			limit++;
			if (limit == 1) {
				cout << "\n\t\t\t      *Chu y: con 2 lan thu!\n" << endl;
			}
			if (limit == 2) {
				cout << "\n\t\t\t      *Chu y: con 1 lan thu!\n" << endl;
			}
			if (limit == 3) {
				cout << "\n\t\t\t      Qua so lan dang nhap!!!\n" << endl;
				break;
			}
			system("pause");
			system("cls");
		}
	}
}
void loading(int iTime) {
	for (int i = 0; i < iTime; i++) {
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLOading   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoAding   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoaDing   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadIng   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadiNg   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoadinG   " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.  " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading.. " << std::flush;
        Sleep(200);
        std::cout << "\b\b\b\b\b\b\b\b\b\bLoading..." << std::flush;
        Sleep(200);
    }
	cout << endl;
}

int checkUsername(string sUser, string sPass) {
	for (int i = 0; i < dsAdmin.size(); i++) {
		if (dsAdmin[i].getUsername() == sUser && dsAdmin[i].getPassword() == sPass) {
			return 1;
		}
	}
	return 0;
}
void docDsPM() {
	ifstream docFile;
	docFile.open("Phieu_Muon.dat");
	while (docFile.eof() != 1) {
		PHIEUMUON xPM;
		docFile >> xPM;
		dsPM.push_back(xPM);
		docFile.ignore(1);
	}
	docFile.close();
}
void docDsSV() {
	ifstream docFile;
	docFile.open("User_Data_SV.dat");
	while (docFile.eof() != 1) {
		SINHVIEN xSV;
		docFile >> xSV;
		dsSV.push_back(xSV);
	}
	docFile.close();
}
void xuatDsSV() {
	for (int i = 0; i < dsSV.size(); i++) {
		cout << "\n- Sinh vien " << i + 1 << " -\n";
		cout << dsSV[i];
	}
}
void docDsGV() {
	ifstream docFile;
	docFile.open("User_Data_GV.dat");
	while (docFile.eof() != 1) {
		GIAOVIEN xGV;
		docFile >> xGV;
		dsGV.push_back(xGV);
	}
	docFile.close();
}
void xuatDsPM() {
	for (int i = 0; i < dsPM.size(); i++) {
		cout << "\n- Phieu muon " << i + 1 << " -\n";
		cout << dsPM[i];
	}
}
void xuatDsGV() {
	for (int i = 0; i < dsGV.size(); i++) {
		cout << "\n- Giao vien " << i + 1 << " -\n";
		cout << dsGV[i];
	}
}
void xuatDsAdmin() {
	for (int i = 0; i < dsAdmin.size(); i++) {
		cout << "\n- Admin " << i + 1 << " -\n";
		cout << dsAdmin[i];
	}
}

void docDsAdmin() {
	ifstream docFile;
	docFile.open("Administrator.dat");
	while (docFile.eof() != 1) {
		Administrator xAdmin;
		docFile >> xAdmin;
		dsAdmin.push_back(xAdmin);
	}
	docFile.close();
}
void ghiMoiPM() {
	ofstream ghiFile;
	ghiFile.open("Phieu_Muon.dat", ios_base::app);

	string sMaBD;
	string sMaSach;
	cout << "Ma Ban doc: ";
	rewind(stdin);
	getline(cin, sMaBD);

	cout << "Ma Sach: ";
	rewind(stdin);
	getline(cin, sMaSach);

	PHIEUMUON xPM(sMaBD, sMaSach);
	ghiFile << endl;
	ghiFile << xPM;

	ghiFile.close();
}
void ghiDsPM() {
	ofstream ghiFile;
	ghiFile.open("Phieu_Muon.dat");
	for (int i = 0; i < dsPM.size(); i++) {
		ghiFile << dsPM[i];
		if (i != dsPM.size() - 1) {
			ghiFile << endl;
		}
	}
	ghiFile.close();
}
void ghiDsSV() {
	ofstream ghiFile;
	ghiFile.open("User_Data_SV.dat");
	for (int i = 0; i < dsSV.size(); i++) {
		ghiFile << dsSV[i];
		if (i != dsSV.size() - 1) {
			ghiFile << endl;
		}
	}
	ghiFile.close();
}

void ghiDsGV() {
	ofstream ghiFile;
	ghiFile.open("User_Data_GV.dat");
	for (int i = 0; i < dsGV.size(); i++) {
		ghiFile << dsGV[i];
		if (i != dsGV.size() - 1) {
			ghiFile << endl;
		}
	}
	ghiFile.close();
}

void ghiDsSach() {
	ofstream ghiFile;
	ghiFile.open("Book_Data.dat");
	for (int i = 0; i < dsSach.size(); i++) {
		ghiFile << dsSach[i];
		if (i != dsSach.size() - 1) {
			ghiFile << endl;
		}
	}
	ghiFile.close();
}

void xuatDsSach() {
	for (int i = 0; i < dsSach.size(); i++) {
		cout << "\n- Thong tin sach " << i + 1 << " -\n";
		cout << dsSach[i];
	}
}

void docDsSach() {
	ifstream docFile;
	docFile.open("Book_Data.dat");
	while (docFile.eof() != 1) {
		SACH xS;
		docFile >> xS;
		dsSach.push_back(xS);
		docFile.ignore(1);
	}
	docFile.close();
}

void SetColor(int ForgC) 
{ 
    WORD wColor; 

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); 
     CONSOLE_SCREEN_BUFFER_INFO csbi; 

         //We use csbi for the wAttributes word. 
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi)) 
    { 
       //Mask out all but the background attribute, and add in the forgournd  color 
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F); 
      SetConsoleTextAttribute(hStdOut, wColor); 
    } 
    return; 
} 