#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define borda " ----------- \n"
#define divisoria "|---|---|---|\n"

int jogada=0;
int jogador=1;
int matriz[9]= {0,0,0,0,0,0,0,0,0};


void desenha(int *matriz)
{
    system("cls");
    printf("Jogo da Velha\n");
    printf(borda);
    printf("| ");
    if(matriz[0]==0) printf(" ");
    else printf("%d", matriz[0]);
    printf(" | ");
    if(matriz[1]==0) printf(" ");
    else printf("%d", matriz[1]);
    printf(" | ");
    if(matriz[2]==0) printf(" ");
    else printf("%d", matriz[2]);
    printf(" |\n");

    printf(divisoria);

    printf("| ");
    if(matriz[3]==0) printf(" ");
    else printf("%d", matriz[3]);
    printf(" | ");
    if(matriz[4]==0) printf(" ");
    else printf("%d", matriz[4]);
    printf(" | ");
    if(matriz[5]==0) printf(" ");
    else printf("%d", matriz[5]);
    printf(" |\n");

    printf(divisoria);

    printf("| ");
    if(matriz[6]==0) printf(" ");
    else printf("%d", matriz[6]);
    printf(" | ");
    if(matriz[7]==0) printf(" ");
    else printf("%d", matriz[7]);
    printf(" | ");
    if(matriz[8]==0) printf(" ");
    else printf("%d", matriz[8]);
    printf(" |\n");

    printf(borda);
}

int lerjogada(int *jogador) //Faz a leitura e validacao da jogada
{
    printf("Player %d\n", jogador);
    printf("Digite o numero [1-9] onde deseja jogar: ");
    scanf("%d", &jogada);
    switch (jogada)
    {
    case 1:
        if(matriz[0]==0) matriz[0]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 2:
        if(matriz[1]==0) matriz[1]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 3:
        if(matriz[2]==0) matriz[2]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 4:
        if(matriz[3]==0) matriz[3]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 5:
        if(matriz[4]==0) matriz[4]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 6:
        if(matriz[5]==0) matriz[5]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 7:
        if(matriz[6]==0) matriz[6]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 8:
        if(matriz[7]==0) matriz[7]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    case 9:
        if(matriz[8]==0) matriz[8]=jogador;
        else
        {
            printf("Posicao ja ocupada.\n");
            lerjogada(jogador);
        }
        break;
    default:
        printf("Posicao invalida.\n");
        lerjogada(jogador);
        break;
    }

}

int jogando(int *jogador)
{
    printf("Processando..\n");

    if(matriz[0]==matriz[1] && matriz[0]==matriz[2] && matriz[0] !=0) //Linha 1
    {
        return jogador;
    }
    if(matriz[3]==matriz[4] && matriz[3]==matriz[5] && matriz[3] !=0) //Linha 2
    {
        return jogador;
    }
    if(matriz[6]==matriz[7] && matriz[6]==matriz[8] && matriz[6] !=0) //Linha 3
    {
        return jogador;
    }
    if(matriz[0]==matriz[3] && matriz[0]==matriz[6] && matriz[0] !=0) //Coluna 1
    {
        return jogador;
    }
    if(matriz[1]==matriz[4] && matriz[1]==matriz[7] && matriz[1] !=0) //Coluna 2
    {
        return jogador;
    }
    if(matriz[2]==matriz[5] && matriz[8]==matriz[2] && matriz[2] !=0) //Coluna 3
    {
        return jogador;
    }
    if(matriz[0]==matriz[4] && matriz[4]==matriz[8] && matriz[4] !=0) //Diagonal 1
    {
        return jogador;
    }
    if(matriz[2]==matriz[4] && matriz[4]==matriz[6] && matriz[4] !=0) //Diagonal 2
    {
        return jogador;
    }

    return 0;
}


int main()
{
    desenha(matriz);

    jogador=1;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=2;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=1;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=2;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=1;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=2;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=1;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=2;
    lerjogada(jogador);
    desenha(matriz);
    if (jogando(jogador) !=0)
    {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0;
    }
    jogador=1;
    lerjogada(jogador);
    desenha(matriz);


//system("pause");
    return 0;

}

//Cemiterio de codigo:

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


/*
        i=(jogada / 3); //Calcula coluna
        j=(jogada % 3); //Calcula linha

        if(matriz[i][j] != 1 && matriz[i][j] != 2) //Se posicao esta vazia
        {
            matriz[1][2]=1;
            printf("%d",matriz[0][0]);
            printf("%d",matriz[1][0]);
            printf("%d",matriz[2][0]);
            printf("\n");
            printf("%d",matriz[0][1]);
            printf("%d",matriz[1][1]);
            printf("%d",matriz[2][1]);
            printf("\n");
            printf("%d",matriz[0][2]);
            printf("%d",matriz[1][2]);
            printf("%d",matriz[2][2]);
            printf("\n");
        }
        else
        {
            printf("Posicao  ja ocupada");
        }
*/
/*        printf("%d",matriz[0][0]);
        printf("%c", linha1[2]);
        char letra[2];
        itoa(matriz[0][0], letra, 10);
        printf("%s", letra);
        strcpy(linha1[2],letra[1]);
        //linha1[2]=letra;
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
//        desenha(linha1, linha2, linha3);
