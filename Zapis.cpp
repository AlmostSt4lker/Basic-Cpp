#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tel;
string imie,nazwisko;
int main(int argc, char** argv) {
	cout<<"Podaj swoje imie: "; cin>>imie;
	cout<<"Podaj swoje nazwisko: "; cin>>nazwisko;
	cout<<"Podaj swoj nr telefonu: "; cin>>tel;
	
	fstream plik;
	
	plik.open("pliczek.txt",ios::out | ios::app);
	
	plik<<imie<<endl;
	plik<<nazwisko<<endl;
	plik<<tel<<endl;
	
	plik.close();
	
	return 0;
}
