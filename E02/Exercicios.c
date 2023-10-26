/*
 Exercicios- v0.0. - 28 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exercicios exercicios.c
 Windows: gcc -o exercicios exercicios.c
 Para executar em terminal (janela de comandos):
 Linux : ./exercicios
 Windows: exercicios
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
  int x = 0; // definir variavel com valor inicial

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
  int x = 0; // definir variavel com valor inicial

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
void method_13(void) {
  // definir dados
  int x = 0; // definir variavel com valor inicial

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores
  if (x > 25 && x < 65) {
    IO_printf("%s (%d)\n", "Esta no intervalo aberto (25:65)", x);
  } else {
    IO_printf("%s (%d)\n", "Nao esta no intervalo ", x);
  }

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_13

/**
 Method_14.
*/
void method_14(void) {
  // definir dados
  int x = 0; // definir variavel com valor inicial

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores
  if (x >= 20 && x <= 60) {
    IO_printf("%s (%d)\n", "Esta no intervalo fechado [20:60]", x);
  } else {
    IO_printf("%s (%d)\n", "Nao esta no intervalo", x);

    // encerrar
    IO_pause("Apertar ENTER para continuar");
  } // end if
} // end method_14

/**
 Method_15.
*/
void method_15(void) {
  // definir valor
  int x = 0; // definir variavel com valor inicial

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");

  // testar valores
  if (x > 25 && x <= 30) {
    IO_printf("%s (%d)\n", "Esta na intersecao de [15:30] e (25:50)", x);
  } else if (x >= 15 && x <= 24) {
    IO_printf("%s (%d)\n", "Esta no intervalo de [15:30]", x);
  } else if (x > 30 && x < 50) {
    IO_printf("%s (%d)\n", "Esta no intervalo de (25:50)", x);
  } else {
    IO_printf("%s (%d)\n", "Nao esta nos intervalos", x);
  } // end if

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_15

/**
 Method_16.
*/
void method_16(void) {
  // definir dados
  int x = 0; // definir variavel com valor inicial
  int y = 0; // definir variavel com valor inicial

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor inteiro: ");
  y = IO_readint("Entrar com outro valor inteiro: ");

  // testar valores
  if (x % 2 == 0 && y % 2 != 0) {
    IO_printf("%s (%d)(%d)\n", "O primeiro e par e o segundo e impar", x, y);
  } else {
    IO_printf("%s (%d)(%d)\n", "Nao satisfaz as condicoes. ", x, y);
  } // end if

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_16

/**
 Method_17.
*/
void method_17(void) {
  // defir dados
  int x = 0;
  int y = 0;

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readint("Entrar com um valor real: ");
  y = IO_readint("Entrar com outro valor real: ");

  // testar valores
  if (x % 2 != 0 && x < 0 && y % 2 == 0 && y > 0) {
    IO_printf("%s (%d)(%d)\n",
              "O primeiro e impar e negativo e o segundo e par e positivo", x,
              y);
  } else {
    IO_printf("%s (%d)(%d)\n", "Nao satisfaz as condicoes", x, y);
  } // end if

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_17

/**
 Method_18.
*/
void method_18(void) {
  // definir dados
  double x = 0.0;
  double y = 0.0;

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readdouble("Entrar com um valor inteiro: ");
  y = IO_readdouble("Entrar com outro valor inteiro: ");

  // testar valores
  if (y < x * 2) {
    IO_printf("%s (%.2lf)\n", "E menor que o dobro do primeiro numero", y);
  } else if (y == x * 2) {
    IO_printf("%s (%.2lf)\n", "E igual que o dobro do primeiro numero", y);
  } else if (y > x * 2) {
    IO_printf("%s (%.2lf)\n", "E maior que o dobro do primeiro numero", y);
  } else {
    IO_printf("%s (%.2lf)\n", "Nao satisfaz as condicoes.", y);
  } // end if

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_18

/**
 Method_19.
*/
void method_19(void) {
  // definir dados
  double x = 0.0;
  double y = 0.0;
  double z = 0.0;

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readdouble("Entrar com um valor real: ");
  y = IO_readdouble("Entrar com outro valor real: ");
  z = IO_readdouble("Entrar com outro valor real: ");

  // testar valores
  if (z >= x && z <= y || z >= y && z <= x) {
    IO_printf("%s (%.2lf)\n", "Esta entre os dois primeiros ", z);
  } else {
    IO_printf("%s (%.2lf)\n", "Nao satisfaz as condicoes", z);
  } // end if

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_19

/**
 Method_20.
*/
void method_20(void) {
  // definir dados
  double x = 0;
  double y = 0;
  double z = 0;

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // ler do teclado
  x = IO_readdouble("Entrar com um valor real: ");
  y = IO_readdouble("Entrar com outro valor real: ");
  z = IO_readdouble("Entrar com outro valor real: ");

  // testar valores
  if (x != y && x != z && z != y) {
    if (z >= x && z <= y || z <= x && z >= y) {
      IO_printf("%s (%.2lf)\n", "Esta entre os dois primeiros ", z);
    } else {
      IO_printf("%s (%.2lf)\n", "Nao esta entre os dois primeiros ", z);
    } // end if
  } else {
    IO_printf("%s (%.2lf)(%.2lf)(%.2lf)\n", "Nao sao diferentes de si ", x, y,
              z);
  } // end if

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_20

/**
 Method_E1.
*/
void method_E1(void) {
  // definir dados
  char x;
  char y;
  char z;

  // ler do teclado
  x = IO_readchar("Entrar com um char: ");
  y = IO_readchar("Entrar com outro char: ");
  z = IO_readchar("Entrar com outro char: ");

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // testar valores
  if (x > y && x < z || x < y && x > z) {
    IO_printf("%s (%c)(%c)(%c)\n", "Esta entre os dois ultimos ", x, y, z);
  } else if (x == y || x == z) {
    IO_printf("%s (%c)(%c)(%c)\n", "Igual a um dos valores ", x, y, z);
  } else {
    printf("Nao satisfaz nenhuma das condicoes.");
  } // end if
  
  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_E1

/**
 Method_E2.
*/
void method_E2(void)
{
  // definir dados 
  char x;
  char y;
  char z;

   // ler do teclado
  x = IO_readchar("Entrar com um char: ");
  y = IO_readchar("Entrar com outro char: ");
  z = IO_readchar("Entrar com outro char: ");

  // identificar
  IO_id("Method_01 - Programa - v0.0");

  // testar valores 
  if(x != y && x != z && y != z)
  {
    if(x >= y && x <= z || x <= y && x >= z )
    {
      IO_printf("%s (%c)(%c)(%c)\n", "Esta entre o intervalo ", x, y, z);
    }
    else
    {
      IO_printf("%s (%c)(%c)(%c)\n", "Esta fora do intervalo ", x, y, z);
    } // end if
  } 
  else
  {
    IO_printf("%s (%c)(%c)(%c)\n", "Nao satisfaz as condicoes ", x, y, z);
  } // end if 

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_E2
/*
 Funcao principal.
 @return codigo de encerramento
*/
int main(void) // sem parametros
{
  // definir dado
  int opcao = 0;
  // identificar
  printf("%s\n", "Exercicios - Programa = v0.0");
  printf("%s\n", "Autor: 817294_Felipe_Vilhena");
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
    printf("\n%s", "6 - Method_06");
    printf("\n%s", "7 - Method_07");
    printf("\n%s", "8 - Method_08");
    printf("\n%s", "9 - Method_09");
    printf("\n%s", "10 - Method_10");
    printf("\n%s", "11 - Method_E1");
    printf("\n%s", "12 - Method_E2");
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
    case 6:
      method_16();
      break;
    case 7:
      method_17();
      break;
    case 8:
      method_18();
      break;
    case 9:
      method_19();
      break;
    case 10:
      method_20();
      break;
    case 11:
      method_E1();
      break;
       case 12:
      method_E2();
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