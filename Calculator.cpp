#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float x,y;
char wybor;
int main(int argc, char** argv) {
	while (true)
	{
	
		cout<<"Podaj 1 liczbe: ";
		cin>>x;
		cout<<"Podaj 2 liczbe: ";
		cin>>y;
	cout<<endl;
	cout<<"-MENU-"<<endl;
	cout<<"==================="<<endl;
	cout<<"1. Dodawanie"<<endl;
	cout<<"2. Odejmowanie"<<endl;
	cout<<"3. Mnozenie"<<endl;
	cout<<"4. Dzielenie"<<endl;
	cout<<"5. Zamknij Program"<<endl;

	wybor=getch();
		switch(wybor)
		{
			case '1':
				{
					cout<<"Wynik dodawania to : ";
					cout<<x+y<<endl;
				}
				
			break;
			case '2':
			{
					cout<<"Wynik odejmowania to : ";
					cout<<x-y<<endl;
				}
				
			break;
			case '3':
				{
					cout<<"Wynik mnozenia to : ";
					cout<<x*y<<endl;
				}
			break;
			case '4':
				{
					if (y==0) cout<<"Nie dzielimy przez 0"<<endl;
					else cout<<"Wynik dzielenia to : "<<x/y<<endl;
					
				}
			break;
			case '5':
				{
					exit(0);	
				}
			
			default: cout<<"Nie ma takiej opcji w menu !"<<endl;
	
		}
			getchar();
	}
	

	return 0;
}
