#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Descartando caracteres durante a leitura de uma string.
    int dia, mes, ano;

    printf("Digite um dado no farmato dd/mm/aa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("\nDia: %d \n", dia);
    printf("\nMes: %d \n", mes);
    printf("\nAno: %d \n", ano);

    return 0;
}
