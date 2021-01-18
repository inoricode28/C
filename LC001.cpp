#include "iostream"
int a, Suma, Resta, Multi;
float Divicion ,b;//Area Global
using namespace std;
int main(int argc, char const *argv[])
{
	//Area Local
	cout << "Ingrese el primer valor" <<endl;
	cin>>a;
	cout<< "Ingrese segundo valor"<<endl;
	cin >>b;
	Suma=a+b;
	Resta=a-b;
	Multi=a*b;
	Divicion=a/b;
	cout << "La suma es: "<<Suma<<endl;
	cout << "La resta es; "<<Resta<<endl;
	cout << "La Multiplicacion es; "<<Multi<<endl;
	cout << "La Divicion es; "<<Divicion<<endl;


	return 0;
}
