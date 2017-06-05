#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	float oceny[5], suma=0, srednia;
	int i;
int main(int argc, char** argv) {
	for ( i=0; i<5; i++)
		{
			
			cout<<endl<<"Podaj "<<i+1<<" ocene: ";
			cin>>oceny[i];
			suma+=oceny[i];
		}
	
	cout<<"Srednia z twoich ocen to :";
	srednia=suma/5;
	cout<<srednia;
	return 0;
}
