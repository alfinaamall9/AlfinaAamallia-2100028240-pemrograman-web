#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	int pilihan, jumlah, total, prince, hasil = 0;
	string nama;
	bool loop = true;
	
	cout<<"1. Kasir Book Store\n";
	cout<<"2. Keluar\n";
	cout<<"===================================\n";
	cout<<"Pilih menu: ";
	cin>>pilihan;
	switch(pilihan) {
		case 1:
			{
				cout<<"==========Kasir Book Store========\n";
				cout<<"Masukkan Judul Buku : ";
				cin>>nama;
				cout<<"Masukkan Jumlah Buku : ";
				cin>>jumlah;
				cout<<"Masukkan harga Perbuku : ";
				cin>>prince;
				hasil = prince * jumlah;
				total += hasil;
				ofstream pFile;
				pFile.open("struk.txt");
				pFile<<"Judul Buku : "<<nama<<endl;
				pFile<<"Jumlah Buku : "<<jumlah<<endl;
				pFile<<"Total Harga Buku : "<<hasil<<endl;
				pFile.close();
				break;
			}
		case 2 :
	    	{
			ofstream ofs;
			ofs.open("struk.txt", ios::app);
			ofs<<"Total : "<<total<<endl;
			ofs.close();
			loop = false;
			break;
	    	}
	}
}