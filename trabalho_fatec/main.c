#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc<2){ // caso onde n�o h� argumentos;

        printf("Coloque algum argumento! \n");
        return 0;

    }else{
        switch argc[2]{
        case ('i' || 'I'):
            printf("Voc� selecionou a op��o Invert! \n");

            break;

        case ('c' || 'C') :
            printf("voc� selecionou a op��o Cript! \n");

            break;
        case ('u' || 'U'):
            printf("Voce selecionou a op��o Unix-To-Dos! \n");

            break;

        case ('d' || 'D'):
            printf("Voce selecionou a op��o Dos-To-Unix");
            break;

        default:
            printf("Coloque um argumento para ontinuar a excu��o! \n")
            return 0;
            break;
    }

    return 0;
}
