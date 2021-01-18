#include "iostream"
int Valor, Num, Resu;

using namespace std;

int main(int argc, char const *argv[])
{
	while (true)
        {
                cout<<"Tabla del: ";
                cin>>Num;
                for (int Valor = 1; Valor<=12; ++Valor)
                {
                        Resu=Valor*Num;
                        cout<<Num<<" x "<<Valor<<" = "<<Resu<<endl;
                }

                char StrRp;
                cout << "Continua S/N:";
                cin >> StrRp;

                if (StrRp == 's' || StrRp == 'S')
                        {;}
                else if (StrRp == 'n' || StrRp == 'N')
                        {break;}
                else{
                        cout << "Elegiste otra letra. \nContinuamos."<<endl;
                    }
        }
        return 0;
	
  }
