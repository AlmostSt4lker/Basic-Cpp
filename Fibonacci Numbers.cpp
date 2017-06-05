#include <iostream>
#include <iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long double fib[100000];
int n,i;

int main(int argc, char** argv) 
{
	cout<<"Ile liczb fibonacziego mam wyznaczyc: ";
	cin>>n;
	
	fib[0]=1;
	fib[1]=1;
	
	for (i=2;i<n;i++)
	{
		fib[i]= fib[i-1] + fib[i-2];	
	}
	cout<<setprecision(10000);
		for (i=0;i<n;i++)
	{
		cout<<endl<<"wyraz nr"<<i+1<<" : "<<fib[i]<<endl;	
	}
	cout<<endl<<"Wyraz nr "<<n<<": "<<fib[n-1]<<endl;
	system("PAUSE");
	return 0;
}
