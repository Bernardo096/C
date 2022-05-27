//Jogo de adivinhar numeros
//06/12/2021
//Bernardo Carlos
//Versão 1.0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int aux;
    int n, troca, min = 0, max = 100;

    srand(time(NULL));
    aux= rand() % 100;
    aux +=1;
    printf("Vamos jogar um jogo de adivinhacao? ");
    printf("\n Descubra o numero que estou pensando de %d a %d ", min, max);
    do
    {
        printf("\nDigite um numero: ");
        scanf("%d", &n);
        if (n > 100 || n < 0)
        {
            printf("\nValor invalido, Digite um numero de 0 a 100");
        }

        if (n > aux && n < max)
            max = n;
        else
            if (n < aux && n > min)
            min = n;

        printf("\nO numero e maior que %d e menor que %d", min, max);

    } while (aux != n);
    printf("\n Parabens, o numero era: %d", aux);
}
