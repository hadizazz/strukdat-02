/*
Nama		: Hadiza Cahya Firdaus
Npm			: 140810180042
Tanggal		: 06/03/2019	
Deskripsi	: Orang
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Orang{
	int umur;
	char nama[30];
	char jk[];
	char goldar[];
};

int main(){
	Orang orang;
	orang.umur=10;
	strcpy(orang.nama,"fahmi");
	cout<<"Jenis Kelamin  :";cin>>orang.jk;
	cout<<"Golongan Darah :";cin>>orang.goldar;
	
	cout<<"Umur	: "<<orang.umur<<endl;
	cout<<"Nama	: "<<orang.nama<<endl;
	cout<<"Golongan Darah	: "<<orang.goldar<<endl;
	cout<<"Jenis Kelamis	: "<<orang.jk<<endl;
}
