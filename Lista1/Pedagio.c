#include <stdio.h>

int main()
{

    /* L = comprimento da pista
       D = Distancia entre os pedagios
       K = custo por km
       P = valor de cada pedagio
     */
    int L, D;
    int K, P;
    int precoTotal;
    int numPedagio;
    scanf("%d", &L);
    scanf("%d\n", &D);
    scanf("%d", &K);
    scanf("%d", &P);

    if (L >= 1 && D <= 100000)
    {   
        numPedagio = L/D;    
        precoTotal = (L*K) + numPedagio*P;

        printf("%d", precoTotal);
    }
}