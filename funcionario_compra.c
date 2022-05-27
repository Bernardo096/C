//Funcionários_VIPS_comum
//data 01/09/2021
//versão 1.0
//Autor

#include <stdio.h>
#include <string.h>

int main (void)
{ int codigo;
  float compra,desconto,venda;
    printf("digite o valor do produto\n");
    scanf("%f",& venda);
    printf("Digite so valor de sua compra\n");
    scanf("%f",& compra);
    printf("Digite o seu codigo\n");
    scanf("%d",& codigo);

    switch(codigo)
        {case 1:
            printf("Valor da compra é %.2f",compra);
            break;
          case 2:
            desconto=compra-venda*0.1;
            printf("Valor da compra e %.2f",desconto);
            break;
          case 3:
            desconto=compra-venda*0.05;
            printf("Valor da compra e %.2f",desconto);
            break;

        }
return(0);
}
