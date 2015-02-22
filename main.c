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
    printf("Player %d.\n", jogador);
    printf("Digite o numero [1-9] onde deseja jogar: ");
    scanf("%d", &jogada);
    if(jogada>=1 && jogada <=9) //Verifica se � uma posi��o v�lida
    {
      if(matriz[jogada-1]==0) //Verifica se a posi��o est� vazia
      {
        matriz[jogada-1]=jogador; //Preenche a posi��o com o simbolo do jogador
        return jogador; //Retorna
      }
      else
      {
        printf("Posicao ja ocupada.\n");
      }
    }
    else
    {
      printf("Posicao invalida.\n");
    }
    lerjogada(jogador); //Jogada inv�lida, manda jogar novamente
}

int jogando(int *jogador)
{
    //printf("Processando..\n");

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
    int i;

    desenha(matriz);

    for(i=0; i<=8; i++)
    {
      jogador = (i % 2)+1; //Cria o padrao 1-2-1-2-1-2-1-2-1 para alternar os jogadores
      printf("%d.\n", jogador);
      lerjogada(jogador);
      desenha(matriz);
      if (jogando(jogador) !=0)
      {
        printf("Ganhou Jogador %d.\n", jogador);
        return 0; //Encerra o programa
      }
    }
//system("pause");
    return 0;

}
