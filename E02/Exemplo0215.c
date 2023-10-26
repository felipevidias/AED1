/*
 Exemplo0215 - v0.0. - 28 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0215 exemplo0215.c
 Windows: gcc -o exemplo0215 exemplo0215.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0215
 Windows: exemplo0215
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
  int x = 0;   // definir variavel com valor inicial 

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
    IO_pause("Apertar ENTER para continuar");
  }
} // end method_11

/**
 Method_12.
*/
void method_12(void) {
  // definir dados
  int x = 0;  // definir variavel com valor inicial 

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores
  if (x % 2 != 0 && x < -15 || x % 2 == 0 && x > 15) {
    IO_printf("%s (%d)\n", "Atende ao intervalo", x);
  } else {
    IO_printf("%s (%d)\n", "Nao atende ao intervalo ", x);
  }

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_12

/**
 Method_13.
*/
void method_13(void)
{
  // definir dados 
  int x = 0;   // definir variavel com valor inicial 

   // identificar
  IO_id("Method_01 - Programa - v0.0");

   // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores 
  if(x > 25 && x < 65)
  {
    IO_printf("%s (%d)\n", "Esta no intervalo aberto (25:65)", x);
  }
  else
  {
    IO_printf("%s (%d)\n", "Nao esta no intervalo ", x);
  }
 
  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_13

/**
 Method_14.
*/
void method_14(void)
{
  // definir dados 
  int x = 0;         // definir variavel com valor inicial 

  // identificar 
   IO_id("Method_01 - Programa - v0.0");

   // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores 
  if (x >= 20 && x <= 60)
  {
     IO_printf("%s (%d)\n", "Esta no intervalo fechado [20:60]", x);
  }
  else
  {
    IO_printf("%s (%d)\n", "Nao esta no intervalo", x);

    // encerrar
  IO_pause("Apertar ENTER para continuar");
  } // end if
} // end method_14


/**
 Method_15.
*/
void method_15(void)
{
  // definir valor 
  int x = 0;  // definir variavel com valor inicial 

   // identificar 
   IO_id("Method_01 - Programa - v0.0");

   // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores 
  if(x > 25 && x <= 30)
  {
     IO_printf("%s (%d)\n", "Esta na intersecao de [15:30] e (25:50)", x);
  }
  else if(x >= 15 && x<= 24)
  {
    IO_printf("%s (%d)\n", "Esta no intervalo de [15:30]", x);
  }
  else if (x > 30 && x < 50)
  {
    IO_printf("%s (%d)\n", "Esta no intervalo de (25:50)", x);
  }
  else
  {
    IO_printf("%s (%d)\n", "Nao esta nos intervalos", x);
  } // end if 

    // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_15
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
    printf("\n%s", "2 - Method_02");
    printf("\n%s", "3 - Method_03");
    printf("\n%s", "4 - Method_04");
    printf("\n%s", "5 - Method_05");

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
    case 2:
      method_12();
      break;
       case 3:
      method_13();
      break;
       case 4:
      method_14();
      break;
       case 5:
      method_15();
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