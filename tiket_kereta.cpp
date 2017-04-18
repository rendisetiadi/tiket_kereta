
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

typedef struct{ string noKA; string nmKA;} kereta;

typedef struct{ string nm; string noktp;} penumpang;

typedef struct{ int i; int m; int s;} jam;

typedef struct{ int hari; int bulan; int tahun;} tgl;

typedef struct{ string kotaAsal; string kotaTujuan; string harga; jam wkt_brkt; jam wkt_tiba; tgl tgl_bkt; tgl tgl_tiba;} jadwalKA;

int main(){
	penumpang reni;
	kereta KA;
	jadwalKA jd;
	int harga_awal, harga_akhir, total;

	KA.noKA = "KA-91";
	KA.nmKA = "Malabar";
	jd.wkt_brkt.i= 01; jd.wkt_tiba.i= 07;
	jd.wkt_brkt.m= 10; jd.wkt_tiba.m= 10;
	jd.wkt_brkt.s= 11; jd.wkt_tiba.s= 11;
	jd.tgl_bkt.tahun= 2017;

	system("CLS");
	cout<<"DATA PERJALANAN KERETA API\n";
	cout<<"Masukan Nama depan:\n";
		cin>> reni.nm ;
	cout<<"Masukan No KTP:\n";
		cin>> reni.noktp;
	cout<<"Pilih Kota Asal:\n";
		cin>> jd.kotaAsal;
	cout<<"Pilih Kota Tujuan:\n";
		cin>> jd.kotaTujuan;

	cout<<"Tanggal Keberangkatan:\n";
	cout<<" > Tgl:";cin>> jd.tgl_bkt.hari;cout<<" > Bulan:";cin>> jd.tgl_bkt.bulan;

				//ASAL
				 if(jd.kotaAsal == "bandung")harga_awal = 100000;
			else if(jd.kotaAsal == "malang")harga_awal = 150000;
			else if(jd.kotaAsal == "jogjakarta")harga_awal = 150000;

				//TUJUAN
				 if(jd.kotaTujuan == "bandung")harga_akhir = 100000;
			else if(jd.kotaTujuan == "malang")harga_akhir = 150000;
			else if(jd.kotaTujuan == "jogjakarta")harga_akhir = 200000;
    		if(jd.kotaTujuan == jd.kotaAsal)harga_awal=0, harga_akhir=0;


	system("CLS");

	cout<<"DATA PERJALANAN KERETA API\n";
	cout<<"==============================\n\n";
	cout<<"No Kereta     : "<<KA.noKA<<"\n";
	cout<<"Nama Kereta   : "<<KA.nmKA<<"\n\n";
	cout<<"==============================\n\n";
	cout<<"Nama Penumpang: "<<reni.nm<<"\n";
	cout<<"No KTP        : "<<reni.noktp<<"\n\n";
	cout<<"==============================\n\n";
	cout<<"Station Asal  : "<<jd.kotaAsal<<"\n";
	cout<<"Kota Tujuan   : "<<jd.kotaTujuan<<"\n\n";
	cout<<"==============================\n\n";
	cout<<"Berangkat     : "<<jd.kotaAsal<<", "<<jd.tgl_bkt.hari<<"/"<<jd.tgl_bkt.bulan<<"/"<<jd.tgl_bkt.tahun<<", Jam: ";
	cout<<jd.wkt_brkt.i<<":"<<jd.wkt_brkt.m<<":"<<jd.wkt_brkt.s<<"\n";
	cout<<"Tiba          : "<<jd.kotaTujuan<<", "<<jd.tgl_bkt.hari<<"/"<<jd.tgl_bkt.bulan<<"/"<<jd.tgl_bkt.tahun<<", Jam: ";
	cout<<jd.wkt_tiba.i<<":"<<jd.wkt_tiba.m<<":"<<jd.wkt_tiba.s<<"\n\n";
	cout<<"==============================\n\n";
	cout<<"Rp. "<<harga_awal+harga_akhir;

}