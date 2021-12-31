#include<conio.h>
#include<string.h>
#include<stdio.h>

void mostrarMenu()
 {
 int xcol, xfil;
 textbackground(0);  //Negro
 clrscr();
 //PRIMERA LIENA
 gotoxy(10,10);
 textcolor(14); //Amarillo
 gotoxy(1,1); cprintf("%c", 201);
 for(xcol=2; xcol<=79; xcol++)
  {
	gotoxy(xcol,1); cprintf("%c",205);
  }
	gotoxy(80,1); cprintf("%c",187);

	//Segunda Linea
	gotoxy(1, 2); cprintf("%c",186);
	char vtitulo[]="M E N U   P R I N C I P A L";
	int vlongitud = strlen(vtitulo);
	gotoxy((80-vlongitud)/2,2); cprintf("%s",vtitulo);
	gotoxy(80,2); cprintf("%c",186);
	//Tercera linea
	gotoxy(1,3); cprintf("%c",200);
	for(xcol =2; xcol<= 79; xcol++)
	{
	 gotoxy(xcol,3); cprintf("%c",205);
	}
	gotoxy(80,3); cprintf("%c",188);
	//Nombre de Integrantes
	textcolor(10);
	gotoxy(29,4); cprintf("UNIVERSIDAD DE LA VIDA");
	textcolor(7);
	gotoxy(25,6); cprintf("ANGELION");
	gotoxy(25,7); cprintf("INORI");
	//Menu
	//Primera linea
	textcolor(3);
	gotoxy(20,10); cprintf("%c",218);
	for(xcol=21; xcol<=59; xcol++)
	{
	 gotoxy(xcol,10); cprintf("%c",196);
	}
	gotoxy(60,10); cprintf("%c", 191);
	//Bordes Laterales del Menu
	for(xfil= 11; xfil<= 17; xfil++)
	{
	gotoxy(20,xfil); cprintf("%c",179);
	gotoxy(60,xfil); cprintf("%c",179);
	}
	//Ultima liena del menu
	gotoxy(20,18);cprintf("%c",192);
	for(xcol=21; xcol<=59; xcol++)
	{
	gotoxy(xcol,18); cprintf("%c",196);

	}
	 gotoxy(60,18); cprintf("%c",217);

	//Textos del Menu
	gotoxy(25,12); cprintf("%s","1. Capturar Notas Estudiantes");
	gotoxy(25,13); cprintf("%s","2. Capturar Edades Estudiantes");
	gotoxy(25,14); cprintf("%s","3. Salir");
 }

void capturaNotas()
 {
   float vnota1, vnota2, vnota3;
   float vpromedio;
   clrscr();
   textcolor(12);
   gotoxy(5,5); cprintf("%s","CAPTURA DE LAS 3 NOTAS");
   textcolor(14);
   gotoxy(10,10); cprintf("%s","Nota 1: ");
   gotoxy(18,10); scanf("%f",&vnota1);
   gotoxy(10,11); cprintf("%s","Nota 2: ");
   gotoxy(18,11); scanf("%f", &vnota2);
   gotoxy(10,12); cprintf("%s","Nota 3: ");
   gotoxy(18,12); scanf("%f",&vnota3)
   ;
   vpromedio = (vnota1 + vnota2 + vnota3) / 3;
   textcolor(5);
   gotoxy(18,14);cprintf("%s","Promedio del Alumno:");
   gotoxy(40,14); cprintf("%.1f",vpromedio);
   gotoxy(18,16); cprintf("%s","Pulse ENTER");
   getch();
      //ctrl + ins = copiar
      //shitf + ins = pegar
 }
 
void capturaEdades()
 {
   int vedad;
   clrscr();
   textcolor(12);
   gotoxy(5,5); cprintf("%s","CAPTURA EDAD");
   textcolor(14);
   gotoxy(10,11); cprintf("%s","Edad: ");
   gotoxy(18,11); scanf("%d",&vedad);
   textcolor(14);
   gotoxy(10,14);
   if(vedad < 18)  cprintf("%s","Eres menor de edad");
   if(vedad >= 18) cprintf("%s", "Eres mayor de edad");
   gotoxy(18,16); cprintf("%s","Pulse ENTER");
   getch();
 }
 
void main()
{
  int vopcion =0;
  do
  {
   mostrarMenu();
   gotoxy(25,16); cprintf("%s","Opcion [ ]");
   gotoxy(33,16); scanf("%d",&vopcion);
   if(vopcion!=3)
   {
    switch(vopcion)
     {
	case 1: capturaNotas();
		break;
	case 2: capturaEdades();
		break;
     }
   }
  }
  while(vopcion !=3);

}
