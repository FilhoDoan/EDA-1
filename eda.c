#include <stdio.h>

int main()
{
    // Convertor de horas para minutos

    int tempoH;
    int tempoM;

    printf("Digite seu tempo:\n ");
    scanf("%d", &tempoH);
    tempoM = tempoH * 60;

    printf("%d horas sao %d minutos", tempoH, tempoM);
}