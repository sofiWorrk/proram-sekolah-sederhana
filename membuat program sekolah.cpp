#include<iostream>
using namespace std;
int main(){
	
	system("color 9B");

	cout<<"\n\n";

	cout<<"\t==========================================\n";

	cout<<"\t|                                        |\n";

	cout<<"\t|        PROGRAM NILAI UJIAN SEKOLAH     |\n";

	cout<<"\t|                                        |\n";

	cout<<"\t==========================================";

	cout<<endl;
	char namasiswa[25],alamat[25],tetala[25];

	int nilaisiswa;




	ulang:
	cout <<" Masukkan Nama Siswa   : " ;

	cin >> namasiswa;
	 
	cout <<" Masukan Alamat Anda   : " ;
	
	cin>>alamat;
	
	cout <<" Masukan Tetala Anda   : " ;
	
	cin>>tetala;

	cout << " Masukkan Nilai Siswa : " ;

	cin >> nilaisiswa;

	
	cout<<"\n\t\t***********************************\n";
	cout<<"\t————————————————–\n";


	system ("cls");

 
	system("color 3E");

	cout<<"\n\n";

	cout<<"\t==========================================\n";

	cout<<"\t|                                        |\n";

	cout<<"\t|       PROGRAM NILAI UJIAN SEKOLAH      |\n";

	cout<<"\t|                                        |\n";

	cout<<"\t==========================================\n";

	cout<<endl;
	 cout << " Nama Siswa          :"             <<namasiswa<<endl;

	 cout << " Nilai siswa         :"             <<nilaisiswa<<endl;
	 
	 cout << " Alamat Siswa        :"             <<alamat<<endl;
	 
	 cout << " Tetala Siswa        :"             <<tetala<<endl;
	 
	 cout << " Nilai Bobot KKm     : 80% ";
	 cout<<"\n\n";
	if (nilaisiswa >=75){

	cout << " Selamat, Anda mendapatkan nilai yang baik karena mencapai KKM :-)";
	
	
	}else if(nilaisiswa  <= 75){

	char lagi;

	menulagi :
	
	cout <<" Maaf nilai anda tidak mencapai KKM dan harus mengulang lagi!.\n";
	cout <<" Apakah Anda Ingin MEngulanginya lagi (y/t) : " ;
	cin>>lagi;
	
	system ("cls");
	system("color 7C");
	cout<<"\t==========================================\n";

	cout<<"\t|                                        |\n";

	cout<<"\t|        PROGRAM NILAI UJIAN SEKOLAH     |\n";

	cout<<"\t|                                        |\n";

	cout<<"\t==========================================";
	cout<<"\n";

	
	if(lagi=='y' || lagi=='Y'){
		
	goto ulang;
	
	}else if (lagi=='t' || lagi=='T'){
		
	goto selesai;
	
	}else {
	cout<<" Inputkan Y/T !!!\n";
	goto menulagi;
}
	selesai:
	cout<<" Program Selesai";
}

}
