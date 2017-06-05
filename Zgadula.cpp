#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int zycia,liczba,los,proby,start;
int main(int argc, char** argv) {
				sndPlaySound("vexento.wav",SND_ASYNC);
				cout<<"Hej, wylosowalem liczbe od 1 do 100, zgaduj co to za liczba"<<endl;
		
		srand(time(NULL));
		liczba=rand()%100;
		zycia=20;
		while (los!=liczba,zycia>0)
		{
		zycia--;
		proby++;
		cin>>los;
		if (los==liczba)
			cout<<" Trafiles ! Zajelo ci to "<<proby<<" strzalow"<<endl;
		else if(los>liczba)
			cout<<" Liczba jest za duza :/ Pozostalo zyc :"<<zycia<<endl;
		else if(los<liczba)
			cout<<" Ale co tak malo, wez dorzuc troche i moze trafisz. Pozostalo zyc :"<<zycia<<endl;
	}
			

	cout<<"Przykro mi, przegrales, sprobuj ponownie!"<<endl;
	
	return 0; 
}
