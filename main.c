#include <stdio.h>

int main(void) {
  int op1,ano,idade,fibo,n1=0,n2=1,c=0;
  printf("Data a sua idade?");
  scanf("%d",&idade);  
  printf("Escolha o que voce quer fazer (1)Ano(2)Sequencia\n");
  scanf("%d",&op1);

  switch (op1){
    case 1:
      printf("Qual o ano atual?");
        scanf("%d",&ano);
        ano=ano-idade;
      printf("Voce é do ano de %d ",ano);
    break;
    case 2:
      printf("%d-%d",n1,n2);
      do{
        c++;
        fibo=n1+n2;
        n1=n1+1;
        n2=n2+1;
        printf("-%d",fibo);
      }while(c<idade);
    
    break;
      }
  return 0;
}