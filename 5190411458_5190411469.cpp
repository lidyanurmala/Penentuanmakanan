//5190411458 LIDYA NURMALA EVA//
//5190411469 RIZQI RIDHA PUTRI//
#include<conio.h>
#include<stdio.h>
#include <iomanip>
#include <iostream>
using namespace std;

int main() {
	int baris,kolom;
	string prov[6][2];
	prov [0][0]= "Jawa Tengah" ;
	prov [0][1]= "		Nasi Gandul";
	prov [1][0]= "Jawa Barat";
	prov [1][1]= "		Batagor";
	prov [2][0]= "Jawa Timur";
	prov [2][1]= "		Rujak Cingur";
	prov [3][0]= "Banten";
	prov [3][1]= "	   		Pecak Bandeng";
	prov [4][0]= "DKI Jakarta";
	prov [4][1]= "		Kerak Telor";
	prov [5][0]= "DI Yogyakarta";
	prov [5][1]= "		Gudeg";
	
	cout<<"==========Makanan Khas Jawa=========="<<endl<<endl;
	cout<<"Nama Provinsi         | Makanan Khas		"<<endl;
	for(baris=0; baris<6; baris++)
    {
	cout<<endl;

        for(kolom =0; kolom<2; kolom++)
        {

            cout<<setw(5)<<prov[baris][kolom];

        }
        cout<<endl;
    }
    return 0;
}

	
	
	 
	
	
	
	
