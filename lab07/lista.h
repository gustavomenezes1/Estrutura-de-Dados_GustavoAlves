typedef struct no *Lista;


Lista cria_lista();
int lista_vazia(Lista lst);
int insere_elem(Lista lst,int elem);
int remove_elem(Lista lst,int elem);
int tamanho_lista(Lista lst,int tam);
int obtem_valor_posicao(Lista lst,int pos, int elem);
