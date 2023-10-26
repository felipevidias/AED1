/*
 Exemplos - v0.0. - 4/ 09 / 2023
 Author: 817294_Felipe_Vilhena_Dias
*/
// dependencias
#include "io.h"     // para definicoes proprias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // cadeia de caracteres

/**
 Method_00 - nao faz nada.
*/
void method_00(void) {
  // nao faz nada
} // end method_00 ( )

/**
 Method_11
*/
void method_11(void) {
  // definir dado
  char palavra[80];
  int tamanho;

  // identificar
  IO_id("Method_11 - v0.0");

  // ler a palavra
  printf("Digite uma palavra: ");
  scanf("%s", palavra);
  getchar();

  // repetir para cada palavra
  tamanho = strlen(palavra);

  // teste para determiinar se e maiuscula
  for (int x = 0; x < tamanho;x++) {
    if (palavra[x] >= 'A' && palavra[x] <= 'Z') {
      printf("%d: [%c]\n", x, palavra[x]);
    } // end if
  }   // end for

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_11

/**
 Method_12
*/
void method_12(void) {
  // definir dados
  char palavra[80];
  int y = 0;
  int tamanho;

  // identificar
  IO_id("Method_12- v0.0");

  // ler a palavra
  printf("Digite uma palavra: ");
  fgets(palavra, 80, stdin);
  if (strlen(palavra) < 80 - 1) {
    palavra[strlen(palavra) - 1] = '\0';
  } // end if
  tamanho = strlen(palavra);

  // teste para determiinar se é maiuscula e mostrar quantas tem
  for (int x = 0; x < tamanho; x++) {
    if (palavra[x] >= 'A' && palavra[x] <= 'Z') {
      printf("%d: [%c]\n", x, palavra[x]);
      y = y + 1;
    }
  } // end for
  printf("\nO numero de maiusculas são: %d\n", y);

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_12

/**
 Method_13
*/
void method_13(void) {
  // definir dados
  char palavra[80];
  int tamanho;

  // identificar
  IO_id("Method_13 - v0.0");

  // ler a palavra
  printf("Digite uma palavra: ");
  fgets(palavra, 80, stdin);
  if (strlen(palavra) < 80 - 1) {
    palavra[strlen(palavra) - 1] = '\0';
  } // end if
  tamanho = strlen(palavra);

  // contar e mostrar letras maisculas do fim ao inicio da palavra
  for (int x = tamanho - 1; x >= 0; x = x - 1) {
    if (palavra[x] >= 'A' && palavra[x] <= 'Z') {
      printf("%d: [%c]\n", x, palavra[x]);
    } // end if
  }   // end for

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_13

/**
 Method_14
*/
void method_14(void) {
  // definir dado
  char palavra[80];
  int tamanho;

  // identificar
  IO_id("Method_14 - v0.0");

  // ler a palavra
  printf("Digite uma palavra: ");
  fgets(palavra, 80, stdin);
  if (strlen(palavra) < 80 - 1) {
    palavra[strlen(palavra) - 1] = '\0';
  } // end if
  tamanho = strlen(palavra);

  // mostrar todas as palavras, caracteres, maisculos e minusculos
   for (int x = 0; x < tamanho; x++)
   {
    printf("%d: [%c]\n", x, palavra[x]);
   }// end for 

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_14

/**
 Method_15
*/
void method_15(void)
{
  // definir dado 
   char palavra[80];
  int tamanho;

  // identificar
  IO_id("Method_15 - v0.0");

  // ler cadeia de caracteres 
  printf("Digite uma cadeia de caracters: ");
  fgets(palavra, 80, stdin);
  if(strlen(palavra) < 80 - 1)
  {
    palavra[strlen(palavra) - 1] = '\0';
  } // end if 
  tamanho = strlen(palavra);

  // mostrar todas as palavras, caracteres, maisculos e minusculos do fim ao inicio
  for(int x = tamanho - 1; x >= 0; x--)
  {
    printf("%d: [%c]\n", x, palavra[x]);
  }// end for 

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_15

/**
 Method_16
*/
void method_16(void)
{
    // definir dado 
   char palavra[80];
    int tamanho;
    int y = 0;

    // identificar
  IO_id("Method_16 - v0.0");

  // ler cadeia de caracteres 
  printf("Digite uma cadeia de caracters: ");
  fgets(palavra, 80, stdin);
  if(strlen(palavra) < 80 - 1)
  {
    palavra[strlen(palavra) - 1] = '\0';
  } // end if 
  tamanho = strlen(palavra);

  // mostrar caracteres e contar 
    for(int x = 0; x < tamanho; x = x + 1)
    {
      printf("%d: [%c]\n", x, palavra[x]);
      y = y + 1;
    }

    printf("O numero de caracteres sao: %d", y);

     // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_16
  
/**
 Method_17
*/
void method_17(void)
{
  // definir dados 
  int a = 0; 
  int b = 0;
  int x = 0;
  int cont = 0;
  int n = 0;

  // identificar
  IO_id("Method_17 - v0.0");

  // definir intervalo 
  printf("Digite o primeiro numero do intervalo : ");
  scanf("%d", &a); getchar();
  printf("Digite o segundo numero do intervalo : ");
  scanf("%d", &b); getchar();

  // ler uma quantidade de valores (n) a serem testados
  printf("Quantos valores serao testados? ");
  scanf("%d", &n);getchar();

  // contar e mostrar quantos valores forem multiplos de 5 para entrar no intervalo 
  for (int i = 0; i < n; i++)
  {

    printf("Digite um numero: ");
    scanf("%d", &x);

      if(x >= a && x <= b || x <= a && x >= b  )
      {
        if(x % 5 == 0)
        {
          cont = cont + 1;
        }
      }
        else
      {
        printf("ERROR: Numero esta fora do intervalo\n");
        i = n;
      } // end if 
  } // end while
   
    printf("Quantidade de valores multiplos de 5 no intervalo [%d:%d]: %d\n", a, b, cont);

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_17

  /**
 Method_18
*/
void method_18(void)
{
  // definir dado 
  int a = 0; int b = 0;int cont = 0;int n = 0; int x = 0; 

  // identificar
  IO_id("Method_18 - v0.0");

  // definir intervalo 
  printf("Digite o primeiro numero do intervalo : ");
  scanf("%d", &a); getchar();
  printf("Digite o segundo numero do intervalo : ");
  scanf("%d", &b); getchar();

  // ler quantos valores serao lidos 
  printf("Quantos valores serao testados? ");
  scanf("%d", &n);getchar();

  // contar e mostrar quantos pertencem ao intervalo e sao multiplos de 3 e nao sao multiplos de 5
  for(int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &x);

    // restrigir o intervalo 
    if(x >= a && x <= b || x <= a && x >= b )
    {
      if(x % 3 == 0 && x % 5 != 0)
      {
        cont = cont + 1; // guardar quantos numeros atendem ao intervalo 
      } // end if 
    }  
    else
    {
      printf("ERROR : Numero nao pertence ao intervalo\n");
      i = n;
    } // end if 
  } // end for
    
 printf("Quantidade de valores multiplos de 3 e nao de 5 no intervalo [%d:%d]: %d\n", a, b, cont);

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_18

 /**
 Method_19
*/
void method_19(void)
{
  // definir dados 
  double a = 0; double b = 0; int n = 0; double x = 0; int cont = 0;

  // identificar
  IO_id("Method_19 - v0.0");
  
  // definir intervalo 
  printf("Digite o primeiro numero do intervalo : ");
  scanf("%lf", &a); getchar();
  printf("Digite o segundo numero do intervalo : ");
  scanf("%lf", &b); getchar();

  // ler quantos valores serao lidos 
  printf("Quantos valores serao testados? ");
  scanf("%d", &n);getchar();

  // contar e mostrar todos os valores lidos, pertencentes ao do intervalo, cujas partes inteiras forem impares 
  for (int i = 0; i < n; i++)
  {
    printf("Digite um numero: ");
    scanf("%lf", &x);

    if(x >= a && x <= b || x <= a && x >= b )
    {
      printf("\n%lf\n", x);
      if((int)x % 2 == 0)
      {
        cont = cont + 1;
      } // end if
    } 
     else
    {
      printf("ERROR : Numero nao pertence ao intervalo\n");
      i = n;
    } // end if 
  } // end for 

  printf("Quantidade de valores no intervalo definido [%.2lf:%.2lf]: %d\n", a, b, cont);

  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_19


/**
 Method_20
*/
void method_20(void)
{
  // definir dado 
  double a = 0.0; double b = 0.0; int n = 0; double x  = 0.0; int cont = 0;

  // identificar
  IO_id("Method_20 - v0.0");

   // definir intervalo 
  printf("Digite o primeiro numero do intervalo : ");
  scanf("%lf", &a); getchar();
  printf("Digite o segundo numero do intervalo : ");
  scanf("%lf", &b); getchar();

  // ler quantos valores serao lidos 
  printf("Quantos valores serao testados? ");
  scanf("%d", &n);getchar();

  // contar e mostrar todos os valores lidos que tenham suas partes fracionarias fora do intervalo 
  for(int i = 0; i < n; i++)
  {
     printf("Digite um numero real que esta entre 0 e 1: ");
     scanf("%lf", &x);

      x = x - (int)x;
      if(x != a && x != b)
      {
        printf("\n%.2lf\n", x);
        cont = cont + 1;
      } 
      else
      {
      printf("ERROR : Numero nao pertence ao intervalo\n");
      i = n;
      } // end if
  } // end for 

  printf("Quantidade de valores no intervalo definido [%.2lf:%.2lf]: %d\n", a, b, cont);


  // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_20


/**
 Method_E1
*/
void method_E1(void)
{
  // definir dados
  char palavra[100];
  int tamanho;


  // identificar
  IO_id("Method_E1 - v0.0");

  // ler a palavra
  printf("Digite uma palavra: ");
  fgets(palavra, 100, stdin);
  if (strlen(palavra) < 100 - 1) {
    palavra[strlen(palavra) - 1] = '\0';
  } // end if
  tamanho = strlen(palavra);

  // separar em outra cadeia e mostrar todos os simbolos nao alfanumericos
  for(int i = 0; i < tamanho; i++)
  {
    if(!(palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= '0' && palavra[i] <= '9'))
    {
      printf("\n%c", palavra[i]);
    }
  } // end for 

   // encerrar
  IO_pause("Apertar ENTER para continuar");
} // end method_E1

/**
 Method_E2
*/
void method_E2(void)
{
  // definir dados 
  char palavra[100];
  int tamanho; 

  // identificar
  IO_id("Method_E2- v0.0");

  // ler palavra 
  printf("\nDigite uma cadeia de caracteres apenas com simbolos: ");
  fgets(palavra, 100, stdin);
  if(strlen(palavra) < 100 -1)
  {
    palavra[strlen(palavra) - 1] = '\0';
  }  // end if
  tamanho = strlen(palavra);

  // dizer se a sequencia contem apenas simbolos que nao sao letras
  for(int i = 0; i < tamanho; i++)
  {    
    if(!(palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= '0' && palavra[i] <= '9'))
    {
      printf("\nA sequencia contem simbolos que nao sao letras\n");
      tamanho = i;
    }
    else
    {
      printf("\nERROR: Nao satisfaz a condicao");
      tamanho = i;
    } // end if
  } // end for


  // encerrar
  IO_pause("\nApertar ENTER para continuar");
} // end method_E2

/*
Funcao principal.
@return codigo de encerramento
*/
int main() {
  // definir dado
  int x = 0;
  // repetir ate desejar parar
  do {
    // identificar
    IO_id("EXEMPLO0300 - Programa - v0.0");
    // ler do teclado
    IO_println("Opcoes");
    IO_println("0   - parar");
    IO_println("1   -  Method_11");
    IO_println("2   -  Method_12");
    IO_println("3   -  Method_13");
    IO_println("4   -  Method_14");
    IO_println("5   -  Method_15");
    IO_println("6   -  Method_16");
    IO_println("7   -  Method_17");
    IO_println("8   -  Method_18");
    IO_println("9   -  Method_19");
    IO_println("10  -  Method_20");
    IO_println("11  -  Method_E1");
    IO_println("12  -  Method_E2\n");
    x = IO_readint("Entrar com uma opcao: ");
    // testar valor
    switch (x) {
    case 0:
      method_00();
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
    default:
      IO_pause(IO_concat("Valor diferente das opcoes [0,1] (",
                         IO_concat(IO_toString_d(x), ")")));
    } // end switch
  } while (x != 0);
  // emethod_11
  IO_pause("Apertar ENTER para terminar");
  return (0);
} // end main ( )