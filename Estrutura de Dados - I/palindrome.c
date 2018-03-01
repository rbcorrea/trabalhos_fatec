#include <stdio.h>

main()
{
   int numero, reverso = 0, temp;

   printf("Insira um numero para saber se eh palindromo ou nao\n");
   scanf("%d",&n);

   temp = numero;

   while (temp != 0)
   {
      reverse = reverso * 10;
      reverse = reverso + temp%10;
      temp    = temp/10;
   }

   if (numero == reverse)
      printf("%d eh palindromo.\n", nnumero);
   else
      printf("%d nao eh.\n", numero);

    getch();

   return 0;
}
