#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

void main()
{
    printf("Numero de elementos a incluir na pilha:");
    int op;
    scanf("%d",&op);
    TipoPilha p1,*p1aux;
    p1aux=&p1;
    for(int i=1;i<=op;i++)
    {
        int num;
        system("cls");
        printf("Numero: ");
        scanf("%d",&num);
        empilha(p1aux,num);
    }
    mostrapilha(p1aux);
    free(p1aux);
}
