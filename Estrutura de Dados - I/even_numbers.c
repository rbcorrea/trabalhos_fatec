#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d;
    scanf("%d", &d);
    printf("%d", even(d));
    getch();
    return 0;
}

int even(int number){

    if(number%2 == 1 && number >= 1){
        return 1;
    }else{
        return 0;
    }
}
