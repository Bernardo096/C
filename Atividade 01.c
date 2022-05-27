//Gasolinda Gasolina e Etanol
//Bernardo Carlos
//14/09/2021
//versão 1.0

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
  float litros,valor1,valor2,valor3,valor4,desc1,desc2,desc3,desc4;
  char combustivel;

  printf("Digite o comustivel que deseja\n ");
  printf("[G-Gasolina|E-Etanol]\n");
  scanf("%c",&combustivel);
  printf("Digite o quantos litros deseja abastecer \n");
  scanf("%f",&litros);

if (combustivel==103|| combustivel==71) {
if (litros <=10){
    printf("Voce escolheu gasolina\n");
    valor1=7.10*litros;
    printf("\n\n O valor de sua compra é de %.2f e a quantidade  de abastecida foi de %.2f \n",valor1,litros);
}else
    if (litros >10 && litros<=20)
        {
        printf("Voce recebeu um desconto de 4%\n");
        valor1=7.10*litros;
        valor2=(valor1*0.04);
        desc1=valor1-valor2;
        printf("\n\n O valor de sua compra é de %.2f e a quantidade  de abastecida foi de %.2f \n",desc1,litros);

        }
        else
            if (litros>20)
            {
            printf("Voce recebeu um desconto de 6%\n");
            valor1=7.10*litros;
            valor2=(valor1*0.06);
            desc2=valor1-valor2;
            printf("\n\n O valor de sua compra é de %.2f e a quantidade  de abastecida foi de %.2f \n",desc2,litros);

            }
}
    if (combustivel==101|| combustivel==69){
if(litros<=10){
    printf("Voce escolheu etanol\n");
    valor3=5.20*litros;
    printf("\n\n O valor de sua compra é de %.2f e a quantidade  de abastecida foi de %.2f \n",valor3,litros);
}else
        if (litros >10&&litros<=20)
            {
            printf("Voce recebeu um desconto de 3%\n");
            valor3=5.20*litros;
            valor4=(valor3*0.03);
            desc3=valor3-valor4;
            printf("\n\n O valor de sua compra é de %.2f e a quantidade  de abastecida foi de %.2f \n",desc3,litros);

            }
        else
            if (litros>20)
                {
                printf("Voce recebeu um desconto de 5%\n");
                valor3=5.20*litros;
                valor4=(valor3*0.05);
                desc4=valor3-valor4;
                printf("\n\n O valor de sua compra é de %.2f e a quantidade  de abastecida foi de %.2f \n",desc4,litros);
                }
    }
return(0);
}


