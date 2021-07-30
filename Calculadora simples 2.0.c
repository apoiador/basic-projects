#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, ""); // <== Português
  int n1, n2 = 0; char ops; int op = 0; // <== Variáveis

do{ //Fazer:
  n1 = n2 = ops = op = 0;
  system("color F");
  system("pause");
  printf("=====================");
  printf("\n Digite o primeiro número: ");
  scanf("%i", &n1);
  printf(" Digite o segundo número: ");
  scanf("%i", &n2);
  printf("\n (1) - Soma\n (2) - Subtração\n (3) - Multiplicação\n (4) - Divisão\n--> ");
  ops = getche();

  if(ops=='1'){ //Se
   printf("\n O resultado da soma é: %i", n1+n2);
  }
  else if(ops=='2'){ //Senão, se
   printf("\n O resultado da subtração é: %i", n1-n2);
  }
  else if(ops=='3'){ //Senão, se
   printf("\n O resultado da multiplicação é: %i", n1*n2);
  }
  else if(ops=='4'){ //Senão, se
   printf("\n O resultado da divisão é: %i", n1/n2);
  }

  printf("\n=====================");
  printf("\n (0) - Deseja reiniciar?: ");
  scanf("%i", &op);
  system("cls");
}while(op==0); //Enquanto
  return 0;
}
