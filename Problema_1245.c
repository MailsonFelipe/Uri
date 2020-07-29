// minha solucao

#include <stdio.h>

typedef struct
{
    int direito, esquerdo;   
}bota;

int minimo (int a, int b)
{
    if (a < b)
    {
        return a;
    }else{
        return b;
    }
}

int main()
{
    int N, i, num, pares;
    char L;
    bota botas[31];

    while (scanf("%d", &N) != EOF)
    {
        pares = 0;
        
        for (i = 0; i < 31; ++i)
        {
            botas[i].direito = 0;
            botas[i].esquerdo = 0;   
        }
    
        for (i = 0; i < N; ++i)
        {
            scanf("%d %c", &num, &L);
            
            if(L == 'D')
            {
                botas[num - 30].direito++;   
            }else{
                botas[num - 30].esquerdo++;
            }
        }
        for(i=0; i<31; i++)
        {
            pares += minimo(botas[i].direito, botas[i].esquerdo);
        }
        printf("%d\n", pares);
    }

    return 0;
}