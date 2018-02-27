#include <stdio.h>
#include <stdlib.h>

int main()
{
    int q, p;
    printf("Insira p:\n");
    scanf("%d", &p);
    printf("Insira q:\n");
    scanf("%d", &q);
    printf("%d", integer_division(p,q));
    getch();
    return 0;
}

int integer_division(int p, int q){
    int counter = 0;
    int ref = q;
    while(q <= p){
        q += ref;
        counter+=1;
    }
    return counter;
}
