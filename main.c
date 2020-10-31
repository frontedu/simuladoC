#include <stdio.h>

int main(void) {

int produto, quant, opc100, opc101, opc102, opc103, opc104, opc105;
float total, totalp, valor;
produto = 1;
quant = 0;
valor = 0.00;
total = 0.00;
totalp = 0.00;
opc100 = 0; opc101 = 0; opc102 = 0; opc103 = 0;
opc104 = 0; opc105 = 0;


while(produto != 0){
  system("clear");
  printf("\n");
  printf("ITEM             CÓDIGO       PREÇO\n");
  printf("Cachorro quente  100          R$ 3,50\n");
  printf("Bauru simples    101          R$ 5,40\n");
  printf("Bauru com ovo    102          R$ 7,00\n");
  printf("Hambúrguer       103          R$ 9,50\n");
  printf("Cheeseburguer    104          R$ 12,20\n");
  printf("Refrigerante     105          R$ 4,00\n\n");
  printf("     [PARA FINALIZAR DIGITE: 0]\n\n");

  printf("Digite o código do produto .........: ");
  fflush(stdin);
  scanf("%d", &produto);

  if(produto == 0){
    break;
  }

  while(produto < 100 || produto > 105){
  printf("\n\nCODIGO INFORMADO INVALIDO!\n\n");
  printf("Digite o código do produto .........: ");
  fflush(stdin);
  scanf("%d", &produto);
  if(produto == 0){
    break;
  }
  }

  if(produto == 0){
    break;
  }

  printf("Digite a quantidade desse produto ..: ");
  fflush(stdin);
  scanf("%d", &quant);

    if(produto == 100){
    opc100 = opc100 + quant;
    valor = 3.50;
    totalp = valor * quant;
    }
    else
    if(produto == 101){
    opc101 = opc101 + quant;
    valor = 5.40;
    totalp = valor * quant;
    }
    else
    if(produto == 102){
    opc102 = opc102 + quant; 
    valor = 7.00;
    totalp = valor * quant;
    }
    else
    if(produto == 103){
    opc103 = opc103 + quant;
    valor = 9.50;
    totalp = valor * quant;
    }
    else
    if(produto == 104){
    opc104 = opc104 + quant;
    valor = 12.20;
    totalp = valor * quant;
    }
    else
    if(produto == 105){
    opc105 = opc105 + quant;
    valor = 4.00;
    totalp = valor * quant;
    }

    total = total + totalp;
    }

    printf("\n\n");
    printf("       RESULTADO\n");
    printf("       =========\n\n");
    if(total != 0)
    printf("ITEM             VENDIDOS\n");

    if(opc100 != 0)
    printf("Cachorro quente  %d\n", opc100);
    if(opc101 != 0)
    printf("Bauru simples    %d\n", opc101);
    if(opc102 != 0)
    printf("Bauru com ovo    %d\n", opc102);
    if(opc103 != 0)
    printf("Hambúrguer       %d\n", opc103);
    if(opc104 != 0)
    printf("Cheeseburguer    %d\n", opc104);
    if(opc105 != 0)
    printf("Refrigerante     %d\n", opc105);

    printf("\nTOTAL (R$) EM VENDAS: R$ %.2f\n\n", total);
}