#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void CetakJudul(char, string, char);

int main()
{
	CetakJudul('-', "CONTOH 1", '-');
	char Nama[17] = { 'R','i','z','k','y',' ','K','h','a','p','i','d','s','y','a','h' };
	cout << Nama << endl << endl;
	
	CetakJudul('-', "CONTOH 2", '-');
	string Nama_1("Rizky Khapidsyah");
	string Nama_2("Dessy Puspita Sari Harahap");
	cout << Nama_1 << endl;
	cout << Nama_2 << endl << endl;

	CetakJudul('-', "CONTOH 3", '-');
	string Data;
	cout << "Masukkan Sebuah Kata         : ";
	cin >> Data;
	cout << "Kata yang dimasukkan adalah  : " << Data << endl << endl;

	CetakJudul('-', "CONTOH 4", '-');
	string Data_1, Data_2;
	cout << "Masukkan Kata Pertama              : ";
	cin >> Data_1;
	cout << "Masukkan Kata Kedua                : ";
	cin >> Data_2;
	cout << "Kata Pertama                       : " << Data_1 << endl;
	cout << "Kata Kedua                         : " << Data_2 << endl;
	cout << "Inisial Pertama pada Kata Pertama  : " << Data_1[0] << endl; 
	cout << "Inisial Kedua pada Kata Pertama    : " << Data_1[1] << endl;
	cout << "Inisial Pertama pada Kata Kedua    : " << Data_2[0] << endl;
	cout << "Inisial Kedua pada Kata Kedua      : " << Data_2[1] << endl;

	_getch();
	return 0;
}

void CetakJudul(char A, string B, char C)
{
	for (int i = 0;  i <= 50;  i++)
	{
		cout << A;
	}
	
	cout << endl << B << endl;
	
	for (int i = 0; i <= 50; i++)
	{
		cout << C;
	}
	
	cout << endl;
}