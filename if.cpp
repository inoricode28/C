#include <iostream>

using namespace std;

int main() {

  int edad = 10;

  cout << "¿Cuál es tu edad? "<<endl;
  cin >> edad;

  if ( edad >= 12 )
    {
      cout << "Asiste a escuela secundaria."<<endl;
    }
  else{
    cout << "Asiste a escuela primaria"<<endl;
  }

  return 0;
}
