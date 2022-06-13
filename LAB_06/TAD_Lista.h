typedef struct lista lista;



lista *criar_lista();
int lista_vazia(lista *l);
int lista_cheia(lista *l);
int insere_elem(lista *l,int x);
int remove_elem(lista *l,int x);
int obtem_valor_elem(lista *l, int x);

