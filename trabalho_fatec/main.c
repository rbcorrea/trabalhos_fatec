#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc<2){ // caso onde não há argumentos;

        printf("Coloque algum argumento! \n");
        return 0;

    }else{
        switch argc[2]{
        case ('i' || 'I'):
            printf("Você selecionou a opção Invert! \n");

            break;

        case ('c' || 'C') :
            printf("vocÊ selecionou a opção Cript! \n");

            break;
        case ('u' || 'U'):
            printf("Voce selecionou a opção Unix-To-Dos! \n");

            break;

        case ('d' || 'D'):
            printf("Voce selecionou a opção Dos-To-Unix");
            break;

        default:
            printf("Coloque um argumento para ontinuar a excução! \n")
            return 0;
            break;
    }

    return 0;
}
