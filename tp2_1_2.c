#include <stdio.h>
#include <time.h>
#define N 20
int main()
{
    int i;
    int vt[N], *pENT;
    pENT = vt;
    for ( i = 0; i<N; i++)
    {
        pENT = 1+rand()%100;
        printf ("Elemento %d del vector:  ",i);
        printf("  %d \n", pENT++);
    }
    
return 0;
}