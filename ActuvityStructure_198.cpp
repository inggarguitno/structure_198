// ActuvityStructure_198.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
}; 

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140198";
	mhs1.nama = "Inggar";
	mhs1.alamat = "Balecatur";
	mhs1.umur = 20;

	cout << "Masukkan nim: ";
	cin >> mhs2.nim;
	cout << "Masukkan nama: ";
	cin >> mhs2.nama;
	cout << "Masukkan alamat: ";
	cin >> mhs2.alamat;
	cout << "Masukkan umur: ";
	cin >> mhs2.umur;

	cout << "\nNim : " << mhs1.nim;
	cout << "\nNama : " << mhs1.nama;
	cout << "\nalamat : " << mhs1.alamat;
	cout << "\numur : " << mhs1.umur;

	cout << "\nnim : " << mhs2.nim;
	cout << "\nnama : " << mhs2.nama;
	cout << "\nalamat : " << mhs2.alamat;
	cout << "\numur : " << mhs2.umur;
	
