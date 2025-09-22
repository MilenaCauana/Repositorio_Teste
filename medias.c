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

//Função que vê se foi aprovada e manda uma mensagem
void mensagemAprovacao(float media)
{
    if (aprovado(media))
    {
        printf("\nAprovado!");
        printf("\nAgora eh soh curtir as férias!");
        return;
    } else
    {
        printf("\nReprovado!");
        printf("\nAs ferias virao com um peso na consciencia ne?");
        printf("\nFique de aprendizado para a próxima.");
    }
}

int main (){

    int num_alunos;
    float pesoP1, pesoP2;

    printf("\nDigite o número de Alunos: ");
    scanf("%d", &num_alunos);

    printf("\nDigite o peso da p1:");
    scanf("\n%2f", &pesoP1);

    printf("\nDigite o peso da p2:");
    scanf("\n%2f", &pesoP2);

    if(pesoP1 == pesoP2){

        printf("\n------------------------------------");

        for(int i = 0; i < num_alunos; i++){

            float p1, p2;

            printf("\n\nAluno %d", i+1);
            printf("\nDigite a nota da p1:");
            scanf("%2f", &p1);
            printf("\nDigite a nota da p2:");
            scanf("%2f", &p2);

            float mediaS = mediaSimples(p1, p2);

            mensagemAprovacao(mediaS);

            printf("\n....................");

        }

    }else{

        printf("\n------------------------------------");

        for(int i = 0; i < num_alunos; i++){

            float p1, p2;

            printf("\n\nAluno %d", i+1);
            printf("\nDigite a nota da p1:");
            scanf("%2f", &p1);
            printf("\nDigite a nota da p2:");
            scanf("%2f", &p2);

            float mediaP = mediaPonderada(pesoP1, p1, pesoP2, p2);

            mensagemAprovacao(mediaP);

            printf("\n....................");

        }

    }

    printf("\n------------------------------------");
    return 0;
}

