/*
Exemplo0112 - v0.0. - 22 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0112 exemplo0112.c
 Windows: gcc -o exemplo0112 exemplo0112.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0110
 Windows: exemplo0110
*/
// dependencias
#include "io.h"   // para definicoes proprias ( na mesma pasta )
#include <math.h> // para funcoes matematicas: pow( ), sqrt( ), sin( ), cos( ) ..
#include <stdbool.h> // para valores logicos (O ou 1 || TRUE ou FALSE)
#include <stdio.h>   // para as entradas e saidas
#include <stdlib.h>  // para outras funcoes de uso geral
#include <string.h>  // para cadeias de caracteres
                     // Nota: Em alguns compiladores pode haver problemas
                     // com relacao a essa biblioteca, caso acontecer
                     // considerar o uso de definicoes alternativas.

/**
 Method_11.
*/
void method_11(void) {
  // definir dado
  int lado;
  int sqr;

  // identificar
  printf("%s\n", "\nMethod_11\n");

  // pegar valor inicial
  printf("\nEscreva lado de um quadrado: ");
  scanf("%d", &lado);
  getchar();

  // mostrar valor do lado de um quadrado
  printf("O lado e : %d\n", lado);
  // mostrar area de quadrado seis vezes maior
  sqr = (lado * lado) * 6;
  printf("\nA area de um quadrado 6 vezes maior e: %d\n", sqr);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_11()

/**
 Method_12.
*/
void method_12(void) {
  // definir dado
  int lado;
  double perim;
  double area;

  // identificar
  printf("%s\n", "\nMethod_11\n");

  // pegar valor inicial
  printf("Digite o lado: ");
  scanf("%d", &lado);
  getchar(); // limpar o buffer

  // mostrar base e altura
  printf("\nA base e: %d ", lado);

  // mostrar a area e o perimetro de um quadrado com  um terço do tamanho todo
  area = (lado * lado) * 1.0 / 3.0;
  perim = (lado * 4.0) * 1.0 / 3.0;
  printf("A area de um quadrado com 1/3 do tamanho e : %.2lf \n O perimetro "
         "de quadrado com 1/3 e : %.2lf ",
         area, perim);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_012

/*
 Funcao principal.
 @return codigo de encerramento
 @param argc - quantidade de parametros na linha de comandos
 @param argv - arranjo com o grupo de parametros na linha de comandos
*/
int main(int argc, char *argv[]) {
  // definir dado
  int opcao = 0;

  // identificar
  printf("%s\n", "Exemplo0111 - Programa = v0.0");
  printf("%s\n", "Autor: 817294_Felipe_Dias");
  printf("\n"); // mudar de linha

  // acoes

  // repetir
  do {
    // para mostrar as opcoes
    printf("\n%s\n", "Opcoes:");
    printf("\n%s", "0 - Terminar");
    printf("\n%s", "1 - Method_11");
    printf("\n%s", "2 - Method_12");
    printf("\n");

    // ler a opcao do teclado
    printf("\n%s", "Opcao = ");
    scanf("%d", &opcao);
    getchar(); // para limpar a entrada de dado

    // para mostrar a opcao lida
    printf("\n%s%d", "Opcao =", opcao);

    // escolher acao dependente da opcao lida
    switch (opcao) {
    case 0: // nao fazer nada
      break;
    case 1: // method_11
      method_11();
      break;
    case 2: // method_11
      method_12();
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

/*
    ---------------------------------------------- documentacao complementar
    ---------------------------------------------- notas / observacoes /
   comentarios
    ---------------------------------------------- previsao de testes
    ---------------------------------------------- historico
    Versao              Data                      Modificacao
    0.1                22/08                       esboco
    ---------------------------------------------- testes
    Versao             Teste
    1.1                  00.              (OK)  quadrado seis vezes maior
    1.2                  00.              (OK)  area e perimetro com 1/3

*/