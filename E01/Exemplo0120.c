/*
Exemplo0120- v0.0. - 24 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0120 exemplo0120.c
 Windows: gcc -o exemplo0120 exemplo0120.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0120
 Windows: exemplo0120
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

/**
 Method_13.
*/
void method_13(void) {
  // definir dados
  int base;
  int alt;
  int area;
  // identificar
  printf("%s\n", "\nMethod_13\n");

  // pegar base e altura
  printf("Digite a base: ");
  scanf("%d", &base);
  getchar();
  printf("Digite a altura: ");
  scanf("%d", &alt);
  getchar();

  // calcular e mostrar a area 4 vezes maior
  area = (base * alt) * 4;
  printf("A area do retangulo 4 vezes maior : %d", area);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_13

/**
 Method_14.
*/
void method_14(void) {
  // definir dado
  int base;
  int alt;
  double area;
  double perim;

  // identificar
  printf("%s\n", "\nMethod_14\n");

  // pegar valores
  printf("Digite o valor da base: ");
  scanf("%d", &base);
  getchar();
  printf("Digite o valor da altura: ");
  scanf("%d", &alt);
  getchar();

  // calcular e mostrar a área e o perímetro de um retângulo com um quinto dos
  // tamanhos dos lados.
  area = (base * alt) * 1.0 / 5.0;
  perim = ((2.0 * alt) + (2.0 * base)) * 1.0 / 5.0;
  printf("A area com 1/5 e: %.2lf \n O perimetro com 1/5 e: %.2lf", area,
         perim);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_14

/**
 Method_15.
*/
void method_15(void) {
  // definir dado
  double base;
  double alt;
  double area;

  // identificar
  printf("%s\n", "\nMethod_15\n");

  printf("Base triangulo: ");
  scanf("%lf", &base);
  getchar();
  printf("Altura triangulo: ");
  scanf("%lf", &alt);
  getchar();

  // calcular e mostrar a área de um triângulo com a metade da altura do mesmo.
  // DICA: Usar constantes reais em expressões que envolvam valores reais.
  area = (base * (alt / 2.0)) / 2.0;
  printf("A area do triangulo com metade da altura e : %.2lf", area);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_15

/**
 Method_16.
*/
void method_16(void) {
  // definir dados
  int lado;
  double area;
  double perim;

  // identificar
  printf("%s\n", "\nMethod_16\n");

  // pegar valores
  printf("Digite a base de um triangulo: ");
  scanf("%d", &lado);
  getchar();

  // calcular e mostrar a altura, área e o perímetro do triângulo com o dobro do
  // lado. DICA: Usar constantes reais em expressões que envolvam valores reais.
  double alt = (sqrt(3.0) * (lado * 2)) / 2;
  area = (lado * alt) / 2;
  perim = (lado * 2) * 3;

  printf("Altura: %.2lf\n Area: %.2lf \n Perimetro: %.2lf", alt, area, perim);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_16

/**
 Method_17.
*/
void method_17(void) {
  // definir dado
  double lado;
  double vol;

  // identificar
  printf("%s\n", "\nMethod_17\n");

  // pegar valores
  printf("Digite o lado de um cubo: ");
  scanf("%lf", &lado);
  getchar();

  // calcular e mostrar o volume do sólido com sete vezes a medida do lado
  vol = ((lado * lado) * lado) * (7 * lado);

  // mostrar valores
  printf("A area do cubo com 7 vezes a medida do lado e : %.2lf ", vol);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_17

/**
 Method_18.
*/
void method_18(void) {
  // definir dados
  double comp;
  double larg;
  double alt;
  double vol;

  // identificar
  printf("%s\n", "\nMethod_18\n");

  // pegar valores
  printf("Digite o comprimento : ");
  scanf("%lf", &comp);
  getchar();
  printf("Digite a largura : ");
  scanf("%lf", &larg);
  getchar();
  printf("Digite a altura : ");
  scanf("%lf", &alt);
  getchar();

  // calcular e mostrar o volume do sólido com um sexto desses valores.
  vol = (comp * larg * alt) * (1.0 / 6.0);

  // mostrar valores
  printf("O volume do sólido com um sexto desses valores e: %.2lf", vol);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_18

/**
 Method_19.
*/
void method_19(void) {
  // definir dados
  double raio;
  double area;

  // identificar
  printf("%s\n", "\nMethod_19\n");

  // pegar valor
  printf("Digite o valor do raio: ");
  scanf("%lf", &raio);
  getchar();

  // calcular e mostrar a área de um semicírculo com metade do raio
  area = (M_PI * pow((raio / 2.0), 2.0)) / 2.0;

  // mostrar valores
  printf("A área de um semicírculo com metade do raio e: %.2lf ", area);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_19

/**
 Method_20.
*/
void method_20(void)
{
  // definir dados 
  double raio;
  double vol;

   // identificar
  printf("%s\n", "\nMethod_20\n");

  // pegar valor
  printf("Digite o valor do raio : ");
  scanf("%lf", &raio);

  // calcular e mostrar o volume de uma esfera com três oitavos do raio.
  vol = 4/3 * M_PI * (raio*3/8);

  // mostrar valores 
  printf("O volume de uma esfera com três oitavos do raio: %.2lf", vol);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
  } // end method_20

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
    printf("\n%s", "3 - Method_13");
    printf("\n%s", "4 - Method_14");
    printf("\n%s", "5 - Method_15");
    printf("\n%s", "6 - Method_16");
    printf("\n%s", "7 - Method_17");
    printf("\n%s", "8 - Method_18");
    printf("\n%s", "9 - Method_19");
    printf("\n%s", "10 - Method_20");
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
    case 2: // method_12
      method_12();
      break;
    case 3: // method_13
      method_13();
      break;
    case 4: // method_14
      method_14();
      break;
    case 5: // method_15
      method_15();
      break;
    case 6: // method_16
      method_16();
      break;
    case 7: // method_17
      method_17();
      break;
    case 8: // method_18
      method_18();
      break;
    case 9: // method_19
      method_19();
      break;
      case 10: // method_20
      method_20();
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
    1.3                  00.              (OK)  area retangulo 4 vezes maior
    1.4                  00.              (OK)  area e perimetro retangulo com
   1/5 do tamanho                                  1.5                  00. (OK)
   area triangulo com metade da altura


*/