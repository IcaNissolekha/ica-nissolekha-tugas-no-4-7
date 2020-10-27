/*nama: ica nissolekha*/
/*nim: 20051397064*/
/*kelas: MI 2020B*/

#include<iostream>
#include<stdio.h>
#include<windows.h>
using namespace std;
int main()
{
    int a,b,c;
	cout<<"            PROGRAM TABLE OF MULTIPLICATION "<<endl;
	cout<<"====================================================="<<endl;
	printf("X/Y");
	for(a=1;a<=10;a++)
	printf("%5d" , a);
	for(b=1;b<=10;b++)
	{
		printf("\n   \n  %d",b);
		for(c=1;c<=10;c++)
		    printf("%5d",b*c);
	}
	return 0;
}
