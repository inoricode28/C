#include "iostream"
int Num,Suma;
using namespace std;
int main(int argc, char const *argv[])
{
	cout <<"Ingreso de numeros enteros: "<<endl;
	cin >>Num;
	//Realizar calculos
	Suma=(Num*(Num+1))/2;
	cout<<"La suma es: "<<Suma<<endl;
	
	return 0;
}
