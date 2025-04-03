//practica 8, Daniela Quiroz//

#include <stdio.h>

void main()
{
    int par = 0, impar = 0,n,cont=1;
    printf("dame el numero de cifras a buscar:");
    scanf("%d", &n);
    printf("\nuso del while\n");
    
    while (cont<=n)
    {
        if(cont%2==0)
        {
            par=cont;
        }
        else
        {
            impar=cont;
        }
        cont++;
    }
printf("el ultimo numero par es: %d\n",par);
printf("el ultimo numero impar es:%d\n",impar);

printf("\nuso del do-while\n");
}
