#include <iostream>//header untuk cin dan cout
#define phi 3.14//untuk konstanta/nilai tetap phi
#include<fstream>
#include <conio.h>

using namespace std;//wajib untuk iostream

int main()//fungsi utama
{
    int r,diameter,keliling,luas;/*deklarasi variable dengan tipe data
    integer, r untuk jari-jari*/
    char judul;//judul
    
	system("cls");
 	
 	ifstream file;
 	file.open("judul.txt");
 		while(!file.eof())
 	{
     file.get(judul);
     cout<<judul;
 	}
 		file.close();
 		
    cout << "Masukkan Jari-jari: ";//untuk ditampilkan
    cin>>r;//untuk input ke variable r
    diameter=2*r;//rumus diameter lingkaran
    keliling=2*phi*r;//rumus keliling lingkaran
    luas=phi*r*r;//rumus luas lingkaran
    cout << "Diameter= "<<diameter << endl;//menampilkan hasil diameter
    cout << "Keliling= "<<keliling << endl;//menampilkan hasil keliling
    cout << "Luas= "<<luas;//menampilkan hasil luas

    getch();
	return 0;//mengembalikan nilai variable
}
