typedef struct Lista TLista;

TLista* criar();
int tamanho(TLista *l);
void inserir(TLista *l, int v);
int remover(TLista *l, int v);
int buscar(TLista *l, int v);
void exibir(TLista *l);

/*EXTRAS*/

int removertodos(TLista *l, int v);
void inserirnoini(TLista *l, int v);
void removerdoini(TLista *l);
void inserirpos(TLista *l, int v, int p);
int removerpos(TLista *l, int v);
int comparar(TLista *l1, TLista *l2);
void inverter(TLista *l);
