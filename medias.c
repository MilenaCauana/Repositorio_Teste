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

//Fun��o que v� se foi aprovada e manda uma mensagem
void mensagemAprovacao(float media)
{
    if (aprovado(media))
    {
        printf("\nAprovado!");
        printf("\nAgora eh soh curtir as f�rias!");
        return;
    } else
    {
        printf("\nReprovado!");
        printf("\nAs ferias virao com um peso na consciencia ne?");
        printf("\nFique de aprendizado para a pr�xima.");
    }
}

