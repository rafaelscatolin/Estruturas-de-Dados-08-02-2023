#include <stdio.h>
#include <stdlib.h>

int pilha[10];
int topo = 0;

int push(int valor)
{
    pilha[topo] = valor;
    topo++;
    return 1;
}

void mostra(){
    for(int i=0; i< topo; i++)
    {
        printf("%d\n", pilha[i]);
    }
}

int main()
{
    /* Criação de uma pilha global */
    int sucesso = 0;
    sucesso = push(99);
    sucesso = push(24);
    sucesso = push(13);
    sucesso = push(56);
    mostra();


    return 0;
}
