#include <stdbool.h>

//Teste de Branch e Merge - Milena e Caio

//parte do Caio
float mediaPonderada(float n1, int p1, float n2, int p2){

    return (((n1*p1)+(n2*p2))/(p1+p2));

}

//parte da Milena
float mediaSimples(float nota1, float nota2)
{
    return (nota1 + nota2) / 2;
}

//função que verifica se foi aprovado

bool aprovado(float media){
    if(media >= 5){
        return true;
    }
    else{
        return false;
    }
}
