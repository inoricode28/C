#include "iostream"
#include "fstream"
#include "cstdlib"

int main()
{
 std::string nombre, pass, correo, web;
 int edad;
 std::cout << "Ingrese su nombre de usuario" << std::endl;
 std::cin >> nombre;
 std::cout << "Ingrese la contrasena que desea para su cuenta" << std::endl;
 std::cin >> pass;
 std::cout << "Ingrese su correo electronico" << std::endl;
 std::cin >> correo;
 std::cout << "Ingrese su edad" << std::endl;
 std::cin >> edad;
 std::cout << "Ingrese su direccion web" << std::endl;
 std::cin >> web;
 std::ofstream archivo;
 archivo.open("Registro.txt");
 archivo << "Nombre de usuario: " <<  nombre << std::endl;
 archivo << "Contrasena: " << pass << std::endl;
 archivo << "Correo electronico: " << correo << std::endl;
 archivo << "Edad: " << edad << std::endl;
 archivo << "Direccion web: " << web << std::endl;
 std::cout << "El registro de usuario se ha realizado satisfactoriamente,"
    "debe abrir el archivo Registro.txt en la carpeta del programa para ver los datos almacenados." << std::endl;
 return 0;

}
