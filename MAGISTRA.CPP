#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>


void mostrarMenu()
 {
 int xcol, xfil;
 textbackground(0);  //Negro
 clrscr();
 //PRIMERA LIENA
 gotoxy(10,10);
 texcolor(14); //Amarillo
 gotoxy(1,1); cprintf("%c", 201);
 for(xcol=2; xcol<=79; xcol++)
  {
	gotoxy(xcol,1); cprintf("%c",205);
  }
	gotoxy("80,1"); cprintf("%c",187);
 }

void main()
{
  int vopcion =0;
  do
  {
   mostrarMenu();
   gotoxy(25,16); cprintf("%s","Opcion [ ]");
   gotoxy(33,16); scanf("%d",&vopcion);
  }
  while(vopcion !=3);



}