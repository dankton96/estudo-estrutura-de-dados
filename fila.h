#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED
#include <stdlib.h>
//aqui usarei fila duplamente encadeada
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct TipoFila
{
    int item;
    TipoFila *next,*prev;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
TipoFila enfileira (TipoFila fila1, int num)
{
    TipoFila novoitem;
    novoitem.item=num;
    novoitem.next=NULL;
    fila1.next=&novoitem;
    novoitem.prev=&fila1;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
TipoFila desenfileira(TipoFila *fila1, int &itemrem)
{
    if(fila1->next->next==NULL)
        {
    fila1->next->prev=NULL;
    itemrem=fila1->next->item;
    fila1->next=NULL;
    return;
        }
        else
        {desenfileira(fila1->next,&itemrem);}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
bool procura(int num, TipoFila *fila1, bool &result)
{
    if(fila1->next==NULL && fila1->item!=num){printf("Item nao encontrado"); result=false; return;}
    if(fila1->item==num){printf("Item encontrado"); result=true; return;}
    else
    {procura(num,fila1->next);}
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#endif // FILA_H_INCLUDED
