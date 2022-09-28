#include <stdio.h>

int main(void) {
  int op1,ano,idade;
  printf("Escolha o que voce quer fazer (1)Ano(2)Sequencia\n");
  scanf("%d",&op1);
  switch (op1){
    case 1:
      printf("Qual o ano atual?");
        scanf("%d",ano);
      printf("Data a sua idade?");
        scanf("%d",idade);
        ano=ano-idade;
      printf("Voce é do ano de %d ",ano);
    break;
    case 2:
      printf("dois :DDDD");
    
    break;
      }
  return 0;
}