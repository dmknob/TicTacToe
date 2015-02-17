#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define borda " ----------- \n"
#define divisoria "|---|---|---|\n"

void desenha(char* linha1, char* linha2, char* linha3)
{
    system("cls");
    printf("Jogo da Velha\n");
    printf(borda);
    printf(linha1);
    printf(divisoria);
    printf(linha2);
    printf(divisoria);
    printf(linha3);
    printf(borda);
}

int main()
{
    int jogada;
    int matriz[3][3]={0,0,0,0,0,0,0,0,0};
    int i=0, j=0;
    //int posicao;
    char* linha1="|   |   |   |\n";
    char* linha2="|   |   |   |\n";
    char* linha3="|   |   |   |\n";

    desenha(linha1, linha2, linha3);

    printf("Player 1\n");
    printf("Digite o numero [1-9] onde deseja jogar: ");
    scanf("%d", &jogada);
    if(jogada >= 1 && jogada <= 9) //Posicao valida
    {
        i=(jogada % 3)-1; //Calcula linha
        j=(jogada / 3); //Calcula coluna

        if(matriz[i][j] != 1 && matriz[i][j] != 2) //Se posicao esta vazia
        {
            matriz[i][j]=1;
        }
        printf("%d",matriz[0][0]);
        printf("%c", linha1[2]);
        strcpy(linha1[2],matriz[0][0]);
        //linha1[2]=matriz[0][0];
        strcpy(linha1[6],matriz[1][0]);
        //linha1[6]=matriz[1][0];
        strcpy(linha1[10],matriz[2][0]);
        //linha1[10]=matriz[2][0];

        linha2[2]=matriz[0][1];
        linha2[6]=matriz[1][1];
        linha2[10]=matriz[2][1];

        linha3[2]=matriz[0][2];
        linha3[6]=matriz[1][2];
        linha3[10]=matriz[2][2];

/*        linha1=strcat("| " , matriz[0][0];
        linha1=strcat(linha1, " | ");
        linha1=strcat(linha1, matriz[1][0]);
        linha1=strcat(linha1, " | ");
        linha1=strcat(linha1, matriz[2][0]);
        linha1=strcat(linha1, " |");

        linha2=strcat("| " , matriz[0][1]);
        linha2=strcat(linha1, " | ");
        linha2=strcat(linha1, matriz[1][1]);
        linha2=strcat(linha1, " | ");
        linha2=strcat(linha1, matriz[2][1]);
        linha2=strcat(linha1, " |");

        linha3=strcat("| " , matriz[0][2]);
        linha3=strcat(linha1, " | ");
        linha3=strcat(linha1, matriz[1][2]);
        linha3=strcat(linha1, " | ");
        linha3=strcat(linha1, matriz[2][2]);
        linha3=strcat(linha1, " |");
*/
        desenha(linha1, linha2, linha3);
        printf("Jogada P1: %d\n", jogada);
    }
    else
    {
        printf("Posicao invalida");
    }

    //system("pause");
    return 0;
}




/*    switch (jogada)
    {
    case 1:
        linha1="| X |   |   |\n";
        break;
    case 2:
        linha1="|   | X |   |\n";
        break;
    case 3:
        linha1="|   |   | X |\n";
        break;
    case 4:
        linha2="| X |   |   |\n";
        break;
    case 5:
        linha2="|   | X |   |\n";
        break;
    case 6:
        linha2="|   |   | X |\n";
        break;
    case 7:
        linha3="| X |   |   |\n";
        break;
    case 8:
        linha3="|   | X |   |\n";
        break;
    case 9:
        linha3="|   |   | X |\n";
        break;
    default:
        break;
*/
