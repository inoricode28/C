#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int x, buscar, numeros[10];
	int sw=0;

	cout<<"Ingrese numero a buscar: ";
	cin >>buscar;
	//Realizar calculos
	cout <<"\n"<<endl;
	for (int x=0; x<10; x++)
	{
		cout<<"Ingrese numero entero: "<<(x+1)<<":";
		cin>>numeros[x];
	}
	for (int x=0; x<10; x++)
	{
		if (numeros[x]==buscar)
		{
			sw=1;
		}
	}
	cout<<"\nRESULTADO DE LA BUSQUEDA: "<<endl;
	if (sw==1)
	{
		cout<<"SI SE ENCUENTRA"<<endl;		
	}
	else
	{
		cout<<"NO SE ENCUENTRA"<<endl;
	}

	return 0;
	}