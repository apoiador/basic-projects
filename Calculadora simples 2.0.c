#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, ""); // <== Portugu�s
  int n1, n2 = 0; char ops; int op = 0; // <== Vari�veis

do{ //Fazer:
  n1 = n2 = ops = op = 0;
  system("color F");
  system("pause");
  printf("=====================");
  printf("\n Digite o primeiro n�mero: ");
  scanf("%i", &n1);
  printf(" Digite o segundo n�mero: ");
  scanf("%i", &n2);
  printf("\n (1) - Soma\n (2) - Subtra��o\n (3) - Multiplica��o\n (4) - Divis�o\n--> ");
  ops = getche();

  if(ops=='1'){ //Se
   printf("\n O resultado da soma �: %i", n1+n2);
  }
  else if(ops=='2'){ //Sen�o, se
   printf("\n O resultado da subtra��o �: %i", n1-n2);
  }
  else if(ops=='3'){ //Sen�o, se
   printf("\n O resultado da multiplica��o �: %i", n1*n2);
  }
  else if(ops=='4'){ //Sen�o, se
   printf("\n O resultado da divis�o �: %i", n1/n2);
  }

  printf("\n=====================");
  printf("\n (0) - Deseja reiniciar?: ");
  scanf("%i", &op);
  system("cls");
}while(op==0); //Enquanto
  return 0;
}
