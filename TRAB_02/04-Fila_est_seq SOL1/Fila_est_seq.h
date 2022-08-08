typedef struct fila *Fila;

Fila cria_fila();
int fila_vazia(Fila f);
int fila_cheia(Fila f);
int insere_final(Fila f, int elem);
int remove_inicio(Fila f, int *elem);
int le_final(Fila f, int *elem);
int imprime_fila(Fila f);

