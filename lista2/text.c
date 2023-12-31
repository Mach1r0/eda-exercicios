#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void imprime(celula *le) {
    celula *pl = le;
    pl = pl->prox;
    while (pl != NULL) {
        printf("%d -> ", pl->dado);
        pl = pl->prox;
    }
    printf("NULL\n");
    return 0;
}

void imprime_rec(celula *le) {
    celula *pl = le;
    if (pl== NULL) {
        printf("NULL\n");
        return 0;
    } else if(pl->dado != 0) {
        printf("%d -> ", pl->dado);
        imprime_rec(pl->prox);
    }
    return 0;
}