/*
Nama		: Hadiza Cahya Firdaus
Npm			: 140810180042
Tanggal		: 06/03/2019	
Deskripsi	: Theater
*/

#include<iostream>
#include<string.h>
using namespace std;x

struct Theater{
	int studio ;
	char seat[3];
	char movieTitle[30];
};

int main(){
	Theater teater;
	cout<<"Studio	: ";cin>>teater.studio;
	cout<<"Seat	: ";cin>>teater.seat;
	cout<<"Judul FIlm	: ";cin.ignore();cin.getline(teater.movieTitle,30);
	cout<<endl;
	cout<<"TIKET : "<<endl;
	cout<<"Studio	: "<<teater.studio<<endl;
	cout<<"Seat	: "<<teater.seat<<endl;
	cout<<"Judul FIlm : "<<teater.movieTitle<<endl;
}
