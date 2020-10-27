/*nama: ica nissolekha*/
/*nim: 20051397064*/
/*kelas: MI 2020B*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
int a=0, b, c, jumlah=0, i, n;
cout<<"           Menghitung Jumlah deret Bilangan \n";
cout<<"======================================================\n";
cout<<"Masukkan Bilangan Awal 		: "; cin>>a;
cout<<"Masukkan Beda			: "; cin>>b;
cout<<"Masukkan Jumlah Deret Ke-n	: "; cin>>n;
cout<<"======================================================\n";
cout<<" \n";
cout<<"Deret Yang Ke-"<<n<<"			: ";
cout<<a<<",";
jumlah = jumlah+a;

for (i=0; i<n-1; i++)
{
c = a+b;
a=c;
cout<<c<<",";
jumlah = jumlah + c;
}
cout<<" \n";
cout<<"Jumlah Deret Ke-"<<n<<"		: ";
cout<<jumlah;
getch ();
return 0;
}
