#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int tel;
string imie,nazwisko;
int main(int argc, char** argv) {
	fstream plik;
	
	plik.open("pliczek.txt",ios::in);
	
	if(plik.good()==false)
	{
		cout<<"Coœ posz³o nie tak";
		exit(0);
	}
	string linia;
	int nr_linii=1;
	while(getline(plik,linia))
	{
		switch(nr_linii)
		{
			case 1: imie= linia; break;
			case 2: nazwisko= linia; break;
			case 3: tel=atoi(linia.c_str()); break;
		}
		nr_linii++;
	}
	
	cout<<imie<<endl;
	cout<<nazwisko<<endl;
	cout<<tel<<endl;
	
	plik.close();
	
	return 0;
}
