#include "iostream"
#include "fstream"
#include "cstdlib"

using namespace std;
string nombre, pass, correo, web;
float placa,procesador,ram,hdd,video,chasis,monitor,dvd,teclamouse,estabilizador,precio,igv=0.18,resultado,cambio;


void escribir()
{
 ofstream archivo;
 archivo.open("Deltron.txt",ios::out);
 archivo << "Tipo de cambio: " <<  cambio << endl;
 archivo << "Placa Madre :" << placa << endl;
 archivo << "Procesador 'CPU' :" << procesador << endl;
 archivo << "Memoria 'RAM' :" << ram << endl;
 archivo << "Disco Duro :" << hdd << endl;
 archivo.close();
}

int main()
{
 
 cout << "\t\t\tPrograma de Ventas"<<endl;
 cout << "\t\t\t------------------\n"<<endl;
 cout << "Tipo de cambio de la pagina:\t\t"; cin >> cambio;
 cout << "\n";
 cout << "* Por el momento TODOS los precios a ingresas son sin IGV\n puede ponerse otro producto diferente a los que dice\n la idea es que se van a comprar juntos todos los items\n la factura tiene ocho espacios, se puede llenar con ceros\n\n";
 cout << "Placa Madre:\t\t"; cin >> placa; 
 cout << "Procesador 'CPU':\t"; cin >> procesador; 
 cout << "Memoria 'RAM':\t\t"; cin >> ram; 
 cout << "Disco Duro:\t\t";  cin >> hdd;
 cout << "Tarjeta de video:\t";  cin >> video;
 cout << "Case:\t\t\t";  cin >> chasis;
 cout << "Monitor:\t\t";  cin >> monitor;
 cout << "Otros";
 cout << "\n";
 cout << ">>> Unidad Optica:\t";  cin >> dvd;
 cout << ">>> Teclado / Mouse:\t";  cin >> teclamouse;
 cout << ">>> Estabilizador:\t";  cin >> estabilizador;
 cout << "\n";
 precio = ((placa+procesador+ram+hdd+video+chasis+monitor+dvd+teclamouse+estabilizador)*cambio);
 resultado=(precio*igv)+precio;
 cout << "Precio Neto en soles inc. IGV:\t"<<resultado<<endl;
 cout << "\n";
 cout << "El registro de usuario se ha realizado satisfactoriamente,"
    "debe abrir el archivo Registro.txt en la carpeta del programa para ver los datos almacenados." << endl;
 
	escribir();
 
 return 0;

}

