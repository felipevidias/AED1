/*
 Exemplo0107 - v0.0. - 20 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0107 exemplo0107.c
 Windows: gcc -o exemplo0107 exemplo0107.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0107
 Windows: exemplo0107
*/
// dependencias
#include <stdbool.h> // para valores logicos (O ou 1 || TRUE ou FALSE)
#include <stdio.h>   // para as entradas e saidas
#include <stdlib.h>  // para outras funcoes de uso geral
#include <string.h>  // para cadeias de caracteres
                     // Nota: Em alguns compiladores pode haver problemas
                     // com relacao a essa biblioteca, caso acontecer
                     // considerar o uso de definicoes alternativas.

/**
 Method_01.
*/
void method_01(void) {
  // definir dado
  int x = 0; // definir variavel com valor inicial

  // identificar
  printf("%s\n", "Method_01");

  // mostrar valor inicial
  printf("\n%s%d\n", "x =", x);
  // OBS.: O formato para int -> %d (ou %i)
  printf("&%s%p\n", "x =", &x);
  // OBS.: O formato para endereco -> %p)
  // ler do teclado
  printf("Entrar com um valor inteiro: ");
  scanf("%d", &x);
  // OBS.: Necessario indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados

  // mostrar o valor lido
  printf("%s%i\n", "x=", x);

  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar(); // obtem o proximo char do buffer de entrada
} // end method_01

/**
 Method_02.
*/

void method_02(void) {
  // definir dado
  double x = 0.0; // definir variavel com valor inicial
                  // OBS.: Definir a parte fracionaria e' util
  // identificar
  printf("\n%s\n", "Method_02 - Programa - v0.0");

  // mostrar valor inicial
  printf("\n%s%lf\n", "x = ", x);
  // OBS.: O formato para double -> %lf
  // ler do teclado
  printf("Entrar com um valor real: ");
  scanf("%lf", &x);
  // OBS.: Necessario indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados
  // mostrar valor lido
  printf("%s%lf\n", "x = ", x);
  // encerrar
  printf("\n\nApertar ENTER para continuar.\n");
  getchar(); // aguardar por ENTER
} // end method_02 ( )

/**
 Method_03.
*/

void method_03(void) {
  // definir dado
  char x = 'A'; // definir variavel com valor inicial
                // OBS.: Indispensavel usar apostrofos
                // identificar
  printf("\n%s\n", "Method_03 - Programa - v0.0");

  // mostrar valor inicial
  printf("\n%s%c\n", "x = ", x);
  // OBS.: O formato para char -> %c
  // ler do teclado
  printf("Entrar com um caractere: ");
  scanf("%c", &x);
  // OBS.: Necessario indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados
  // mostrar valor lido
  printf("%s%c\n", "x = ", x);
  // encerrar
  printf("\n\nApertar ENTER para continuar.\n");
  getchar(); // aguardar por ENTER
} // end method_03

/**
 Method_04.
*/
void method_04(void) {
  // definir dado
  bool x = false; // definir variavel com valor inicial
                  // OBS.: Indispensavel usar minusculas
  int y = 0;      // definir variavel auxiliar

  // identificar
  printf("\n%s\n", "EXEMPLO0104 - Programa - v0.0");

  // mostrar valor inicial
  printf("\n%s%d\n", "x = ", x);
  // OBS.: O formato para equivalente inteiro -> %d

  // ler do teclado
  printf("Entrar com um valor logico: ");
  scanf("%d", &y);
  // OBS.: Usar equivalente inteiro -> 0 = false
  getchar(); // OBS.: Limpar a entrada de dados

  // garantir valor logico no intervalo [0:1]
  x = (y != 0);

  // mostrar valor lido
  printf("%s%d\n", "x = ", x);

  // encerrar
  printf("\n\nApertar ENTER para continuar.\n");
  getchar(); // aguardar por ENTER
} // end method_04 ( )

/**
 Method_05.
*/
void method_05(void) {
  // definir dado
  char x[80] = "abc"; // definir variavel com tamanho e valor inicial
  char *px = &x[0];   // definir alternativa para acesso via endereço

  // identificar
  printf("\n%s\n", "Method_05 - Programa - v0.0");
  // OBS.: O formato para caracteres -> %s

  // ler do teclado
  printf("Entrar com uma cadeia de caracteres: ");
  scanf("%s", x);
  // OBS.: Nao devera' ser usado o endereco dessa vez !
  // O tamanho do valor NAO devera' ultrapassar 80 símbolos.
  getchar(); // OBS.: Limpar a entrada de dados

  // mostrar valor lido
  printf("%s%s\n", "x = ", x);

  // ler do teclado (forma alternativa para acesso via endereco)
  printf("Entrar com outra cadeia de caracteres: ");
  scanf("%s", px);
  getchar(); // OBS.: Limpar a entrada de dados
  // mostrar valor lido (forma alternativa para acesso via endereco)
  printf("%s%s\n", "x = ", px);
  // encerrar
  printf("\n\nApertar ENTER para continuar.\n");
  getchar(); // aguardar por ENTER
} // end method_05 ( )

/**
 Method_06.
*/
void method_06(void) {
  // definir dados
  int x = 0; // definir variavel com valor inicial
  int y = 0; // definir variavel com valor inicial
  int z = 0; // definir variavel com valor inicial

  int *py = &y; // definir acesso de y via endereco

  // identificar
  printf("\n%s\n", "Method_06 - Programa - v0.0");

  // mostrar valores iniciais
  printf("%s%d\n", "x = ", x);
  printf("%s%d\n", "y = ", y);
  // OBS.: O formato para int -> %d (ou %i)

  // ler do teclado
  printf("Entrar com um valor inteiro: ");
  scanf("%d", &x);
  // OBS.: Necessario indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados

  // outro metodo via endereco
  printf("Entrar com outro valor inteiro: ");
  scanf("%i", py);
  // OBS.: Não e' necessario indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados

  // operar valores
  z = x * y; // guardar em z o produto de x por y

  // mostrar valor resultante
  printf("%s(%i)*(%i) = (%d)\n", "z = ", x, y, z);

  // encerrar
  printf("\n\nApertar ENTER para continuar.\n");
  getchar(); // aguardar por ENTER
} // end method_06 ( )

/**
 Method_07.
*/
void method_07(void) {
  // definir dados
  char x[80] = "abc"; // definir variavel com tamanho e valor inicial
  char y[80] = "def"; // definir variavel com tamanho e valor inicial
  char z[80];         // definir variavel com valor inicial
  strcpy(z, "");      // copiar para z a reprensentacao de vazio

  // identificar
  printf("\n%s\n", "Method_07 - Programa - v0.0");

  // mostrar valores iniciais e comprimentos das cadeias
  printf("%s%s (%d)\n", "x = ", x, strlen(x));
  printf("%s%s (%d)\n", "y = ", y,
         strlen(y)); // strlen = ler o tamanho de uma string
                     // OBS.: O formato para int -> %d (ou %i)

  // ler do teclado
  printf("Entrar com caracteres: ");
  scanf("%s", x);
  // OBS.: Nao indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados
  printf("Entrar com outros caracteres: ");
  scanf("%s", y);
  // OBS.: Nao indicar o endereco -> &
  getchar(); // OBS.: Limpar a entrada de dados

  // operar valores 
  strcpy(z,x);          // copiar (x) para (z)
  strcat(z,y);          // concatenar (z) para (y)
                        // OBS.: Forma mais eficiente
  // mostrar valor resultante 
  printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );

  // forma alternativa de operar valores 
  strcpy(z,strcat(strdup(x), y)); // strdup = duplicar 
                          // copiar para (z)
                          // o resultado de concatenar
                          // a copia de (x) com (y)
                          // OBS.: Se nao duplicar, o valor (x) sera' alterado

  // mostrar valor resultante 
  printf ( "%s[%s]*[%s] = [%s]\n", "z = ", x, y, z );
  // encerrar
 printf ( "\n\nApertar ENTER para continuar.\n" );
 getchar( ); // aguardar por ENTER
} // end method_07

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
  printf("%s\n", "Exemplo0100 - Programa = v0.0");
  printf("%s\n", "Autor: 817294_Felipe_Dias");
  printf("\n"); // mudar de linha

  // acoes

  // repetir
  do {
    // para mostrar as opcoes
    printf("\n%s\n", "Opcoes:");
    printf("\n%s", "0 - Terminar");
    printf("\n%s", "1 - Method_01");
    printf("\n%s", "2 - Method_02");
    printf("\n%s", "3 - Method_03");
    printf("\n%s", "4 - Method_04");
    printf("\n%s", "5 - Method_05");
    printf("\n%s", "6 - Method_06");
    printf("\n%s", "7 - Method_07");
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
    case 1: // method_01
      method_01();
      break;
    case 2: // method_02
      method_02();
      break;
    case 3: // method_03
      method_03();
      break;
    case 4: // method_04
      method_04();
      break;
    case 5: // method_05
      method_05();
      break;
    case 6: // method_06
      method_06();
      break;
    case 7: // method_07
      method_07();
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
    0.1                19/08                       esboco
    ---------------------------------------------- testes
    Versao             Teste
    0.0                  00.              (OK) identificacao de programa
    0.1                  01.              (OK) identificacao de programa
                                               leitura e exibicao de inteiro
    0.2                  02.              (OK) identificacao de programa
    0.3                  03.              (OK) identificacao de programa
    0.4                  04.              (OK) identificacao de programa
    0.5                  05.              (OK) identificacao de programa
    0.6                  06.              (OK) identificacao de programa
    0.7                  07.              (OK) identificacao de programa

*/