#include "iostream"
float VC, RBO, VB, BETA, IC, IB, RB, VRB;
using namespace std;

int main(int argc, char const *argv[])
{
  while (true)//Mientras sea verdad //Bucle repetitivo
    {  
        cout<<"Voltaje del microcontrolador"<<endl;
          cin>>VC;
        cout<<"Resistencia de la bobina del rele"<<endl;
          cin>>RBO;
        cout<<"Voltaje Base"<<endl;
          cin>>VB;
        cout<<"Watts del foco"<<endl;
          cin>>BETA;
          //INTENSIDAD DE LA CORRIENTE
          IC=VB/RBO;
          //Voltage de resitencia de base del transistor
          VRB=VC-0.7;
          //CALCULAR CORRIENTE DE LA BETA
          IB=IC/BETA;
          //Resitencia de la base del transistor
          RB=VRB/IB;
            
            
           cout <<"El sueldo basico es: "<< Sueldo << endl;
          
          char StrRp;//Caracter
          cout<<"Continua S/N:";
            cin>>StrRp;  
      
          if (StrRp=='n' || StrRp=='N')//Si//condicional
            {
                break;//ruptura
            }            
  
      }
        return 0;//Retorna al vacio
}