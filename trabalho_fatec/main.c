#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc<2){ // caso onde n�o h� argumentos;

        printf("Coloque algum argumento! \n");
        return 0;

    }else{
       /* switch (argv[2]){
        case ('i'):
            printf("Voc� selecionou a op��o Invert! \n");

            break;

        case ('c') :
            printf("voc� selecionou a op��o Cript! \n");

            break;
        case ('u'):
            printf("Voce selecionou a op��o Unix-To-Dos! \n");

            break;

        case ('d'):
            printf("Voce selecionou a op��o Dos-To-Unix");
            break;

        default:
            printf("Coloque um argumento para ontinuar a excu��o! \n");
            return 0;
            break;*/

            if (strcmp("i", argv[1]) == 0)
    {
        printf("Voc� optou por INvert!"); //or something
    }

    }

    return 0;
}

