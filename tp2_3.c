#include <stdio.h>
#include <time.h>
#define N 5
#define M 7 
int main()
{
    int i, j;
    int mt[N][M], *pENT;
    pENT = mt;
    for ( i = 0; i < N; i++)
    {
        
        for ( j = 0; j < M; j++)
        {
            pENT = 1 + rand()%100;
            printf(" %d ", pENT++);
        }
        printf("\n");
    }

return 0;    
}