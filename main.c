#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"




int main(int a,int b,int resultat,int modul)
{
    entre1(a);                                   //appel la fonction entre qui demande la saisie de a
    entre2(b);                                   //appel la fonction entre qui demande la saisie de b
    division(a,b,resultat);                       //appel la fonction division qui demande la division de a par b
    modulo(a,b,modul);                            //appel la fonction modul qui demande le modulo de a par b
    printf("\nla division de %d par %d a pour quotient %d et en reste %d",a,b,resultat,modul);
    return 0;
}
