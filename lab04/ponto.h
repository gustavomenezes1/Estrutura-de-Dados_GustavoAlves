typedef struct ponto ponto;


ponto *gera_pto();//aloca um ponto
int set_pto(ponto *p, int x, int y);//define valores do ponto
int get_pto(ponto *p, int *x,int *y);// informa valores do ponto
void libera_pto(ponto *p);//libera memoria do ponto
float distancia_pto(ponto *p,ponto *b);//calcula distancia de dois pontos e returna o resultado

