//10_Habitantes e seus dados
//Autor:Bernardo Carlos
//14/10;2021
//Versão 1.0

#include <stdio.h>

int main()
{
    int idade[10] ,cont=1,fcont=0,cont2=0,maxi=0,mini=99999999,idade_menorsalario[10];
    char sex[10],sexo_menorsalario[10];
    float sal[11],salm,salf,soma,media,menor_salario[10] ;


    while (cont<10)
    {
        printf("---Habitante numero %d---\n",cont++);
        printf("Digite sua idade:\n ",cont);
        scanf("%d",&idade[cont]);
        printf("Digite o seu sexo:\n ",cont);
        scanf("%s",&sex[cont]);
        printf("Digite o valor do seu salario: \n",cont);
        scanf("%f",&sal[cont]);
        printf("\n");
        system("cls");
        //saber a soma de todos os salários
        soma+=sal[cont];
        //saber a quantidade de mulhares  // e calcular o sallário de homens e murlheres separadamente
        if (sex[cont]=='f' || sex[cont]=='F')
        {
            salf+=sal[cont];
            fcont++;
        }
        else
            salm=salm+sal[cont];

        // saber a maior e a menor idade
        if (idade[cont]>maxi)
            maxi=idade[cont];
        if(idade[cont]<mini)
            mini=idade[cont];




            if(menor_salario == 0)
                {
                    menor_salario[cont] = sal[cont];
                    idade_menorsalario[cont] = idade[cont];
                    sexo_menorsalario[cont] = sex[cont];
                }


            if(sal <= menor_salario)
                {
                    menor_salario[cont] = sal[cont];
                    idade_menorsalario[cont] = idade[cont];
                    sexo_menorsalario[cont] = sex[cont];
                }
    }
    cont++;
    media=soma/10;
    printf("----RESULTADOS---\n\n");
    printf("A media do salario das mulheres e: %.2f \n",salf/5);
    printf("A media do salario dos homens e: %.2f \n",salm/5);
    printf("A media dos salarios e de: %.2f\n",media);
    printf("A quantidade de mulheres e de %d .\n",fcont);
    printf("A maior idade e: %d.\nE a menor idade e de: %d\n",maxi,mini);
    printf("Os dados da pessoa com menor salario tem %d anos  de sexo %s ",idade_menorsalario,sexo_menorsalario);




}
