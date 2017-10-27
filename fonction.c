#include <stdlib.h>
#include <stdio.h>

int entre1(int a){

printf("Entrer la valeur du numerateur\n");       //demande à entré le numerateur
scanf("%d",&a);
    return a;
       }

int entre2(int b) {

printf("\nEntrer la valeur du denominateur\n");     //demande à entré le dénominateur
scanf("%d",&b);
    return b;
}
int division(int a,int b,int resultat){

    resultat = a / b;                             //fait la division de a par b

    return resultat;
}
int modulo(int a,int b,int modul){

    modul = a%b;

    return modul;
}
