#include <stdio.h>

int main()
{

    int numero[5], i = 0, min, max;
    float mean;

    printf("<< Five Values >>\n");

    while (i < 5)
    {
        printf("Input #%d: ", i + 1);
        scanf("%d", &numero[i]);
        i++;
    }

    if (numero[0] > numero[1] && numero[0] > numero[2] && numero[0] > numero[3] && numero[0] > numero[4])
    {
        max = numero[0];
    }
    else if (numero[1] > numero[0] && numero[1] > numero[2] && numero[1] > numero[3] && numero[1] > numero[4])
    {
        max = numero[1];
    }
    else if (numero[2] > numero[0] && numero[2] > numero[1] && numero[2] > numero[3] && numero[2] > numero[4])
    {
        max = numero[2];
    }
    else if (numero[3] > numero[0] && numero[3] > numero[1] && numero[3] > numero[2] && numero[3] > numero[4])
    {
        max = numero[3];
    }
    else if (numero[4] > numero[0] && numero[4] > numero[1] && numero[4] > numero[2] && numero[4] > numero[3])
    {
        max = numero[4];
    }
    if (numero[0] < numero[1] && numero[0] < numero[2] && numero[0] < numero[3] && numero[0] < numero[4])
    {
        min = numero[0];
    }
    else if (numero[1] < numero[0] && numero[1] < numero[2] && numero[1] < numero[3] && numero[1] < numero[4])
    {
        min = numero[1];
    }
    else if (numero[2] < numero[0] && numero[2] < numero[1] && numero[2] < numero[3] && numero[2] < numero[4])
    {
        min = numero[2];
    }
    else if (numero[3] < numero[0] && numero[3] < numero[1] && numero[3] < numero[2] && numero[3] < numero[4])
    {
        min = numero[3];
    }
    else if (numero[4] < numero[0] && numero[4] < numero[1] && numero[4] < numero[2] && numero[4] < numero[3])
    {
        min = numero[4];
    }

    mean = (numero[0] + numero[1] + numero[2] + numero[3] + numero[4]) / 5.0;

    printf("The numbers entered are: ");
    for (i = 0; i <= 4; i++)
    {

        printf("%d ", numero[i]);

    }
    printf("\nMax. Value: %d\n", max);
    printf("Min. Value: %d\n", min);
    printf("Mean: %.1f", mean);
}

/*
Fazer um programa para ler 5 valores, e, em seguida, mostrar todos os valores
lidos juntamente com o maior (Max), o menor (Min) e a média (Mean) dos valores

Exemplo de saída:
<< Five Values >>
Input #1: 5
Input #2: 6
Input #3: 4
Input #4: 0
Input #5: 3

The numbers entered are: 5 6 4 0 3
Max. Value: 6
Min. Value: 0
Mean: 3.6
*/