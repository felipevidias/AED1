/*
 Exemplo0211 - v0.0. - 28 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0211 exemplo0211.c
 Windows: gcc -o exemplo0211 exemplo0211.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0211
 Windows: exemplo0211
*/
// dependencias
#include "io.h"     // para definicoes proprias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/**
 Method_11.
*/
void method_11(void) {
  // definir dados
  int x = 0;

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valor
  if (x % 2 == 0) {
    IO_printf("%s (%d)\n", "Valor eh par", x);
  } else {
    IO_printf("%s (%d)\n", "Valor nao eh par", x);
    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );
  }
} // end method_11

/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(void) // sem parametros
{
  // definir dado
  int opcao = 0;
  // identificar
  printf("%s\n", "Exemplo0200 - Programa = v0.0");
  printf("%s\n", "Autor: _____________________");
  printf("\n"); // mudar de linha
                // acoes
                // repetir
  do {
    // para mostrar opcoes
    printf("\n%s\n", "Opcoes:");
    printf("\n%s", "0 - Terminar");
    printf("\n%s", "1 - Method_01");
    printf("\n");
    // ler a opcao do teclado
    printf("\n%s", "Opcao = ");
    scanf("%d", &opcao);
    getchar(); // para limpar a entrada de dados
    // para mostrar a opcao lida
    printf("\n%s%d", "Opcao = ", opcao);
    // escolher acao dependente da opcao
    switch (opcao) {
    case 0: /* nao fazer nada */
      break;
    case 1:
      method_11();
      break;
    default: // comportamento padrao
      printf("\nERRO: Opcao invalida.\n");
      break;
    } // end switch
  } while (opcao != 0);
  // encerrar
  printf("\n\nApertar ENTER para terminar.");
  getchar();  // aguardar por ENTER
  return (0); // voltar ao SO (sem erros)
} // end main ( )