#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc<2){ // caso onde não há argumentos;

        printf("Coloque algum argumento! \n");
        return 0;

    }else{
       /* switch (argv[2]){
        case ('i'):
            printf("Você selecionou a opção Invert! \n");

            break;

        case ('c') :
            printf("vocÊ selecionou a opção Cript! \n");

            break;
        case ('u'):
            printf("Voce selecionou a opção Unix-To-Dos! \n");

            break;

        case ('d'):
            printf("Voce selecionou a opção Dos-To-Unix");
            break;

        default:
            printf("Coloque um argumento para ontinuar a excução! \n");
            return 0;
            break;*/

            if (strcmp("i", argv[1]) == 0)
    {
        printf("Você optou por INvert!"); //or something
    }

    }

    return 0;
}

