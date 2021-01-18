#include "iostream"
//char = ApeNom;
int Horas;
float Precio, Sueldo, Dscto, Neto;
using namespace std;
int main(int argc, char const *argv[])
{
	//cout <<"Apellidos y Nombres: "<<endl;
	//cin >>ApeNom;
	cout <<"Numero de horas laboradas: "<<endl;
	cin >>Horas;
	cout <<"Precio de horas laboradas: "<<endl;
	cin >>Precio;
	//Realizar calculos
	Sueldo=Horas*Precio;
	Dscto=Sueldo*0.12;
	Neto=Sueldo-Dscto;
	cout <<"El sueldo basico es: "<< Sueldo << endl;
	cout <<"El descuento de ley es: "<< Dscto<<endl;
	cout <<"El neto a pagar es: "<<Neto<<endl;



	return 0;
}