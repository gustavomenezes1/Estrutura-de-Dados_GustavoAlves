typedef struct no *Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int insere_final(Fila *f, int elem);
int remove_inicio(Fila *f, int *elem);
int imprime_fila(Fila *f);