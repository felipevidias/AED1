/*
 Exemplos - v0.0. - 11/ 09 / 2023
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
 Method_01 - Repeticao para ler certa quantidade de valores.
*/
void method_01(void)
{
    // definir dado 
    int quantidade = 0; 
    int valor = 0; 
    int controle = 0; 

    // identificar 
    IO_id ( "Method 01 - v0.0" );

    // ler do teclado 
    quantidade = IO_readint ( "Entrar com uma quantidade: " );

    // repetir para a quantidade de vezes informada 
    controle = 1;
    while(controle <= quantidade)
    {
        // ler valor do teclado 
        valor = IO_readint(IO_concat(IO_concat("",IO_toString_d(controle)),":"));
        
        // passar ao proximo valor 
        controle = controle + 1;
    } // end while 

    // encerrar 
    IO_pause("Apertar ENTER para continuar");
} // end method_01

 //Funcao para determinar se valor inteiro e' positivo.
bool positive(int x)
{
  // definir dado local 
  bool result = false;
  // testar a condicao 
  if(x > 0)
  {
    result = true;
  } // end if 
  return (result);
}  // end positive()

  /**
 Method_02 - Ler valores e contar positivos.
*/
 void method_02(void)
  {
    // definir dado 
    int quantidade = 0;
    int valor = 0;
    int controle = 0; 
    int contador = 0;

   // identificar
   IO_id ( "Method02 - v0.0" );

   // ler valor do teclado 
    valor = IO_readint ( IO_concat (
            IO_concat ( "", IO_toString_d ( controle ) ),
                                                 ": " ) );
    // testar e contar se o valor for positivo 
    if(positive(valor))
    {
      contador = contador + 1;
    } // end if

    // passar ao proximo valor
    while (contador <= controle)
    {
      controle = controle + 1;
    } // end while

    // mostrar a quantidade de valores positivos
    IO_printf ( "%s%d\n", "Positivos = ", contador );     
  
    // encerrar
    IO_pause ( "Apertar ENTER para continuar" );
  } // end method_02

  
  // Funcao para determinar se valor inteiro pertence a intervalo aberto.
  bool belongsTo(int x, int inferior, int superior)
  {
    // definir dado local
    bool result = false;

    // testar a condicao
    if(inferior < x && x < superior)
    {
      result = true; 
    } // end if

    return (result);
  } // end belongsTo ( )


  /**
 Method_03 - Ler valores e contar positivos menores que 100.
*/
void method_03(void)
{
  // definir dado
  int quantidade = 0;
  int valor = 0;
  int controle = 0;
  int contador = 0; 

  // identificar
 IO_id ( "Method_03 - v0.0" );

  // ler do teclado 
  quantidade = IO_readint ( "Entrar com uma quantidade: " );

  // repetir para a quantidade de vezes informada 
  controle = 1;
  while(controle <= quantidade)
  {
    // ler valor do teclado 
    valor = IO_readint ( IO_concat (
            IO_concat ( "", IO_toString_d ( controle ) ),
                                                 ": " ) );

  // testar se o valor e positivo
  if(belongsTo(valor, 0,100))
  {
    contador = contador + 1;
  } // end if
  // passar ao proximo valor
  controle = controle + 1;
  } // end while

  // mostrar a quantidade de valores positivos
 IO_printf ( "%s%d\n", "Positivos menores que 100 = ", contador );

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_03

  //  Funcao para determinar se valor inteiro e' par.
  bool even(int x)
  {
    // definir dado local 
    bool result = false;
    // testar condicao ( resto inteiro (%) da divisao por 2 igual a zero )
    if( x % 2 == 0)
    {
      result = true;
    } // end if 
    return(result);
  } // end even ( )

  /**
 Method_04 - Ler valores e contar positivos menores que 100 e pares.
*/
void method_04(void)
{
  // definir dado 
  int quantidade = 0; 
  int valor = 0; 
  int controle = 0;
  int contador = 0;

  // identificar
  IO_id ( "Method_04 - v0.0" );

  // ler do teclado 
  quantidade = IO_readint ("Entrar com uma quantidade : ");

  // repetir para a quantidade de vezes informada 
  controle = 1;
  while(controle <= quantidade)
  {
    // ler valor do teclado 
    valor = IO_readint ( IO_concat (IO_concat ( "", IO_toString_d ( controle ) ),": " ) );

    // testar e contar se valor for positivo menor que 100 e par 
    if(belongsTo(valor, 0, 100) && even(valor))
    {
      contador = contador + 1;
    } // end if

    // passar ao proximo valor 
    controle = controle + 1;
  } // end while 

  // mostrar a quantidade de valores positivos
  IO_printf ( "%s%d\n", "Positivos menores que 100 e pares = ", contador );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method_04


/**
 Method05 - Ler valores e contar positivos menores que 100 e pares (alternativo).
*/
void method_05(void)
{
 // definir dado 
 int quantidade = 0;
 int valor = 0;
 int controle = 0;
 int contador = 0;
 bool ok = false;

 // identificar
 IO_id ( "EXEMPLO0405 - Method05 - v0.0" );

 // ler do teclado 
 quantidade = IO_readint ( "Entrar com uma quantidade: " );

 // repetir para a quantidade de vezes informada
 controle = 1;
 while(controle <= quantidade)
 {
  // ler valor do teclado 
  valor = IO_readint ( IO_concat ( IO_concat ( "", IO_toString_d ( controle ) ), ": " ) );

  // testar e contar se o valor for positivo e menor que 100 
  ok = belongsTo(valor, 0, 100);
  ok = ok && even (valor);
  if(ok)
  {
    contador = contador + 1;
  } // end if

  // passar ao proximo valor 
  controle = controle + 1;
 } // end while

 // mostrar a quantidade de valores positivos
 IO_printf ( "%s%d\n", "Positivos menores que 100 e pares = ", contador );

 // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_05

//  Funcao para determinar se caractere e' letra minuscula.
bool isLowerCase (char x)
{
  // definir dado local 
  bool result = false;

  // testar a condicao
  if('a' <= x && x <= 'z')
  {
    result = true;
  } // end if 
  return (result);
} // end isLowerCase ( )

/**
 Method_06 - Ler palavra e contar letras minusculas.
*/
void method_06 (void)
{
  // definir dado
  chars palavra = IO_new_chars (STR_SIZE);
  int tamanho = 0; 
  int posicao = 0;
  char simbolo = '_';
  int contador = 0;

  // identificar 
  IO_id ( "Method06 - v0.0" );

  // ler do teclado 
  palavra = IO_readstring ( "Entrar com uma palavra: " );

  // deteriminar a quantidade de simbolos na palavra 
  tamanho = strlen(palavra);

  // repetir para a quantidade de vezes informada 
  for(posicao = 0; posicao < tamanho; posicao = posicao + 1)
  {
    // isolar um simbolo por vez 
    simbolo = palavra[posicao];
    
    // testar e contar se caractere e letra minuscula 
    if(isLowerCase(simbolo))
    {
      contador = contador + 1;
    } // end if
  } // end for 

  // mostrar a quantidade de minusculas
  IO_printf ( "%s%d\n", "Minusculas = ", contador );
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method_06

/**
 Method_07 - Ler palavra, contar e mostrar letras minusculas.
*/
void method_07 (void)
{
  // definir dado 
  chars palavra = IO_new_chars(STR_SIZE);
  int tamanho = 0;
  int posicao = 0;
  char simbolo = '_';
  int contador = 0;

  // identificar 
  IO_id ( "Method07 - v0.0" );
  
  // ler do teclado 
  palavra = IO_readstring ( "Entrar com uma palavra: " );

  // determinar a quantidade de simbolos na palavra 
  tamanho = strlen(palavra);

  // repetir para a quantidade de vezes informada 
  for(posicao = 0; posicao < tamanho; posicao = posicao + 1)
  {
    // isolar um simbolo por vez 
    simbolo = palavra [posicao];

    // testar e contar se caractere e letra minusculas 
    if(isLowerCase(simbolo))
    {
      // mostrar 
      IO_printf ( "%c ", simbolo );
      
      // contar 
      contador =  contador + 1;
    } // end if 
  } // end for 

  // mostrar a quantidade de minusculas
  IO_printf ( "\n%s%d\n", "Minusculas = ", contador );

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method_07

  /**
 Method_08 - Ler palavra, contar e mostrar letras minusculas (alternativo).
*/
void method_08(void)
{
  // definir dado
   chars palavra = IO_new_chars ( STR_SIZE );
   int tamanho = 0;
   int posicao = 0;
   char simbolo = '_';
   int contador = 0;
   chars minusculas = IO_new_chars ( STR_SIZE );
   strcpy ( minusculas, STR_EMPTY ); // vazio

  // identificar
  IO_id ( "Method08 - v0.0" );

  // ler do teclado
  palavra = IO_readstring ( "Entrar com uma palavra: " );

  // determinar a quantidade de simbolos na palavra
  tamanho = strlen(palavra);

  // repetir para a quantidade de vezes informada 
  for(posicao = 0; posicao < tamanho; posicao = posicao + 1 )
  {
    // isolar um simbolo por vez
    simbolo = palavra [ posicao ];
   // testar e contar as letras minusculas de uma palavra
    if ( isLowerCase ( simbolo ) )
    {
    // concatenar simbolo encontrado
    minusculas = IO_concat ( minusculas, IO_toString_c ( simbolo ) );
    // contar
    contador = contador + 1;
    } // end if
  } // end for 

  // mostrar a quantidade de minusculas
 IO_printf ( "\n%s%d [%s]\n", "Minusculas = ", contador, minusculas );

 // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_08

// Funcao para determinar se caractere e' digito
  bool isDigit (char x)
  {
    // definir dado local
    bool result = false;

    // testar a condicao
    if ('0' <= x && x <= '9')
    {
      result = true; 
    } // end if
    return (result);
  } // end isDigit ( )

  /**
 Method_09 - Ler palavra e contar os algarismos.
*/
void method_09(void)
{
  // definir dado 
  chars palavra = IO_new_chars (STR_SIZE);
  int tamanho = 0;
  int posicao = 0;
  char simbolo = '_'; 
  int contador = 0;

  // identificar 
  IO_id ( "Method09 - v0.0" );

  // ler do teclado
  palavra = IO_readstring ( "Entrar com caracteres: " );

  // determinar quantidade de simbolos
  tamanho = strlen(palavra);

  // repetir para a quantidade de vezes  informada 
  for (posicao = 0; posicao < tamanho; posicao++)
  {
    // isolar um simbolo por vez
    simbolo = palavra[posicao];
    // testar e contar os algarismos em uma cadeia de caracteres 
    if(isDigit(simbolo))
    {
      // mostrar
      IO_printf ( "%c ", simbolo );
      // contar
      contador = contador + 1;
    } // end if
  } // end for 

  // mostrar a quantidade de digitos
  IO_printf ( "\n%s%d\n", "Algarismos = ", contador );
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );

} // end method_09


// Funcao para determinar se caractere e digito (alt)
bool isADigit(char x)
{
  return ('0' <= x && x <= '9');
} // end isADigit( )

// Funcao para concatenar a cadeia de caracteres mais um digito 
chars concatADigit(chars string, char digit)
{
  return (IO_concat(string, IO_toString_c(digit)));
} // end concatADigit( )

/**
 Method_10.
*/
void method_10(void)
{
  // definir dado 
  chars palavra = IO_new_chars(STR_SIZE);
  int tamanho = 0;
  int posicao = 0;
  int simbolo = 0;
  chars digitos = IO_new_chars(STR_SIZE);

  strcpy(digitos,STR_EMPTY); // vazio

  // identificar
  IO_id ( "Method_10 - v0.0" );

  // ler do teclado 
  palavra = IO_readstring ( "Entrar com uma palavra: " );

  // determinar quantidade de simbolos na palavra 
  tamanho = strlen(palavra);

  // repetir para a quantidade de vezes informada 
   for ( posicao = 0; posicao < tamanho; posicao = posicao + 1 )
 {
 // isolar um simbolo por vez
 simbolo = palavra [ posicao ];
 // testar e contar os algarismos em uma cadeia de caracteres
 if ( isADigit ( simbolo ) )
 {
 // concatenar simbolo encontrado
 digitos = concatADigit ( digitos, simbolo );
 } // end if
 } // end for 

 // mostrar a quantidade de digitos
 IO_printf ( "\n%s%d [%s]\n", "Algarismos = ", strlen( digitos ), digitos );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_10


  // Funcao para verificar se esta dentro de um intervalo de numeros reais
  bool DoubleisIn(double a, double b, double x)
  {
    // definir dado local 
    bool result = false;

    // testar para ver se estar dentro do intervalo 
    if(x >= a && x <= b || x <= a && x >= b)
    {
      result = true;
    }

    return(result);
  } // end isIn()

  /**
 Method_11.
*/
void method_11(void)
{
  // definir dados 
  double a = 0.0; double b = 0.0; double x = 0.0; int n = 0;
  int in = 0;
  int out = 0;

  // identificar
  IO_id ( "Method_11 - v0.0" );

  //ler do teclado 
  a = IO_readdouble ( "Definir intervalo : " );
  b = IO_readdouble ( "Definir intervalo : " );

  // quantos numeros serao lidos 
  n = IO_readint ("Quantos numeros serao lidos?  ");

  // repetir a quantidade de numeros e definir quantos estao dentro e fora do intervalo 
  for(int i = 0; i < n; i++)
  {
    x = IO_readdouble ( "Escreva um numero : " );

    // verificar se estar dentro ou fora do intervalo 
    if(DoubleisIn(a, b, x))
    {
      in = in + 1;
    }  
    else 
    {
      out = out + 1;
    } // end if 
  } // end for 

   // mostrar quantos estao fora e quantos estao dentros
  printf("\nDentro do intervalo: [%d]\n", in);
  printf("Fora do intervalo: [%d]\n", out);

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method_11


// funcao para determinar se caractere e maisculo 
bool isUpperCase(char x)
{
  // definir dado local
  bool result = false;

  // verificar se  e maisucula
  if(x >= 'A' && x <= 'Z')
  {
    result = true;
  } // end if 

  return (result);
} // end isUpperCase( )

 /**
 Method_12.
*/
void method_12(void)
{
  // definir dados 
  chars palavra;
  int tamanho;
  int cont = 0;

  // identificar
  IO_id ( "Method_12 - v0.0" );

  // ler palavra
  palavra = IO_readln("Digite uma palavra: ");
  tamanho = strlen(palavra);

  for (int i = 0; i < tamanho; i++)
  {
    if(palavra[i] < 'K' && isUpperCase(palavra[i]))
    {
      cont = cont + 1;
    } // end if 
  } // end for 

  // mostrar quantas forem maiusculas e menores que 'K'
  printf("Quantidade de letras maiusculas e menores que 'K': [%d]", cont);

   // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method_12

// funcao para saber se e maiusculo e menor que 'K'
int isMoreK(chars palavra)
{
  // definir dado local
  int result = 0;
  int tamanho = 0; 
  tamanho = strlen(palavra);

// verificar se e maior que K e maiuscula 
  for (int i = 0; i < tamanho; i++)
  {
    if(palavra[i] >= 'A' && palavra[i] <= 'Z' && palavra[i] > 'K')
    {
      result = result + 1;
    }// end if
  }
  return (result);
} // end isMoreK( )

/**
 Method_13.
*/
void method_13(void)
{
  // definir dados
  chars palavra;
  int x = 0;
  // identificar 
  IO_id ( "Method_13 - v0.0" );

  // verificar se e maior que K e maiuscula 
    palavra = IO_readln("Digite uma palavra: ");
    x = isMoreK(palavra);

    if(x > 0)
    {
      // mostrar valores
      printf("Quantidade de letrar maiusculas e maiores que 'K' : [%d]", x);
    }
  
  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method_13


  // Funcao para verificar que e maior que 'K' e mostrar quais sao 
  void showMoreK(chars palavra)
  {
    // definir dados locais 
    chars result;
    int tamanho = 0; 
    tamanho = strlen(palavra);

    // verificar e mostrar quais sao as palavras maiores que 'K'
    for(int i = 0; i < tamanho; i++)
    {
      if (palavra[i] >= 'A' && palavra[i] <= 'Z' && palavra[i] > 'K')
      {
       printf("[%c]\n", palavra[i]);
      } // end if
    } // end for 
  } // end showMoreK( )

  /**
 Method_14.
*/
  void method_14(void)
  {
    // definir dados 
    chars palavra; 
    // pegar palavra
   palavra = IO_readln("Digite uma palavra: ");

  // funcao para pegar uma palavra e definir se e maior que 'K' e maiuscula
    printf("Letras maiores que 'K' e maiusculas : \n");
    showMoreK(palavra);
    
   // encerrar
  IO_pause ( "\nApertar ENTER para continuar" );
  } // end method_14

  // função para contar e mostrar a quantidade de letras maiores que 'k' e 'K'
  int countkAndK (chars palavra)
  {
    // definir dados locais 
    int cont = 0;
    int tamanho = 0; 
    tamanho = strlen(palavra);

    // verificar se e maior que 'k' e 'K'
    for(int i = 0; i < tamanho; i++)
    {
      if(palavra[i] > 'K' || palavra[i] > 'k')
      {
        cont = cont + 1;
      } // end if
    } // end for 

    return (cont);
  } // end countkAndK ( )

 /**
 Method_15.
*/
  void  method_15(void)
  {
    // definir dados 
    chars palavra;

    // pegar palavra 
    palavra = IO_readln("Digite uma palavra: ");

    printf("Quantidade de letras maiores que 'k' e 'K' : [%d]", countkAndK(palavra));

    // encerrar
  IO_pause ( "\nApertar ENTER para continuar" );
  } // end method_15

    // funcao para mostrar letras maiores que 'k' e 'K'
    void showkAndK (chars palavra)
    {
      // definir dados locais  
      int tamanho = 0; 
      tamanho = strlen(palavra);

      // verificar se e maior que 'k' e 'K' e mostrar 
      for (int i = 0; i < tamanho; i++)
      {
        if(palavra[i] > 'k' || palavra [i] > 'K')
        {
          printf("[%c] ", palavra[i]);
        } // end if 
      } // end for 
    } // end showkAndK( )

    /**
 Method_16.
*/
void method_16(void)
{
  // definr dados 
  chars palavra;

  // pegar a palavra
  palavra = IO_readln("Digite uma palavra: ");

  // mostrar quantos sao maiores que 'k' e 'K'
  printf("Letras maiores que 'k' e 'K' : ");
  showkAndK(palavra);

  // encerrar
  IO_pause ( "\nApertar ENTER para continuar" );
} // end method_16

// Funcao para mostrar impares numa funcao de caracteres 
int showOdd(chars palavra)
{
  // definir dados locais 
    int tamanho = 0; 
    tamanho = strlen(palavra);
    int aux = 0;
    for(int i = 0; i < tamanho; i++)
    {
      if(palavra[i] >= '0' && palavra[i] <= '9' && (int)palavra[i] % 2 != 0)
      {
        aux = aux + 1;
      } // end if 
    } // end for
    return (aux);
} // end showOdd( )

  /**
 Method_17.
*/
void method_17(void)
{
  // definir dados 
  chars palavra; 
  int aux = 0;
  aux = showOdd(palavra);
  // pegar a palavra
  palavra = IO_readln("Digite uma palavra: ");
  printf("Quantidade de impares na cadeia : [%d]", aux);


// encerrar
IO_pause ( "\nApertar ENTER para continuar" );
} // end method_17( )

// funco para mostrar nao alfanumericos (letras e digitos)
void nonAlpha(chars palavra)
{
  // definir dados locais
    int tamanho = 0;
    tamanho = strlen(palavra);

   // verificar se e nao alfanumerico
   for(int i = 0; i < tamanho; i++)
   {
    if(!(palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z') && !(palavra[i] >= '0' && palavra[i] <= '9'))
    {
      printf("%d. [%c]\n", i, palavra[i]);
    } // end if 
   } // end for 
   
} // end nonAlpha( )

 /**
 Method_18.
*/
void method_18(void)
{
  // definir dados 
  chars palavra;

  // pegar a palavra
  palavra = IO_readln("\nDigite uma palavra: ");
  
  // aplicar e mostrar resultados da funcao 
    printf("\nNao alfanumericos na palavra: \n");
    nonAlpha(palavra);

  // encerrar
IO_pause ( "\nApertar ENTER para continuar" );
} // end method_18

// funcao para mostrar alfanumericos 
void showAlpha(chars palavra)
{
  // definir dados locais 
   int tamanho = 0;
   tamanho = strlen(palavra);

  // verificar e mostrar alfanumericos
  for(int i = 0; i < tamanho; i++)
  {
    if((palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z') || (palavra[i] >= '0' && palavra[i] <= '9'))
    {
      printf("%d. [%c]\n", i, palavra[i]);
    } // end if
  } // end for 

} // end showAlpha( )

/**
 Method_19.
*/
void method_19(void)
{
  // definir dados 
  chars palavra;

  // pegar a palavra
  palavra = IO_readln("\nDigite uma palavra: ");

  // aplicar a funcao 
  printf("\nOs Alfanumericos sao: \n");
  showAlpha(palavra);

  // encerrar
 IO_pause ( "\nApertar ENTER para continuar" );
} // end method_19

// funcao para ler, calcular e somar o total de todas as palavras alfanumericas lidas 
int addAlpha(int n)
{
  // definir dados locais 
    chars palavra;
    int tamanho = 0;
    int result = 0;
    int aux = 0;

     // ler (n) cadeias de caracteres 
     while(n > 0)
     {
        // pegar a palavra
        palavra = IO_readln("\nDigite uma palavra: ");
        tamanho = strlen(palavra);
       // percorrer a palavra e adicionar quantidade de alfanumericos 
        for(int i = 0; i < tamanho; i++)
        {
          if(palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= '0' && palavra[i] <= '9')
          {
            aux = aux + 1;
            printf("%d\n" , aux);
          }
        } // end for 
        
        // somar tudo 
        result += aux;
        printf("[%d]\n", result);
        n--; 
     } // end while 
    
    return (result);
} // end addAlpha( )

/**
 Method_20.
*/
void method_20(void)
{
  // definir dados 
  chars palavra;
  int aux = 0;
  int n = 0;
  
  //definir quantas palavras serao lidas
  n = IO_readint("Quantas a palavras serao lidas? ");

  aux = addAlpha(n);
  
   // encerrar
 IO_pause ( "\nApertar ENTER para continuar" );
} // end method_20

  // funcao calcular todos os simbolos alfanumericos, incluindo o espaco
    int addAlphaSpc(int n)
    {
        // definir dados locais 
    chars palavra;
    int tamanho = 0;
    int result = 0;
    int aux = 0;

     // ler (n) cadeias de caracteres 
     while(n > 0)
     {
        // pegar a palavra
        palavra = IO_readln("\nDigite uma palavra: ");
        tamanho = strlen(palavra);
       // percorrer a palavra e adicionar quantidade de alfanumericos 
        for(int i = 0; i < tamanho; i++)
        {
          if(palavra[i] >= 'a' && palavra[i] <= 'z' || palavra[i] >= 'A' && palavra[i] <= 'Z' || palavra[i] >= '0' && palavra[i] <= '9')
          {
            aux = aux + 1;
          }
        } // end for 
        
        // somar tudo 
        result += aux;
        n--; 
     } // end while 
    
    return (result);
    } // end addAlphaSpc ( )


/**
 Method_E1.
*/
void method_E1(void)
{
  // definir dados 
  chars palavra;
  int aux = 0;
  int n = 0;
  
  //definir quantas palavras serao lidas
  n = IO_readint("Quantas a palavras serao lidas? ");

  aux = addAlphaSpc(n);
  printf("Total de caracteres (incluindo espacos): [%d]",aux);
  
   // encerrar
 IO_pause ( "\nApertar ENTER para continuar" );
} // end method_E1


// funcao para ler duas cadeias de caracteres e comparar qual e maior 
void cmprString(chars palavra1, chars palavra2)
{
  // definir dados locais
  int tamanho1 = strlen(palavra1);
  int tamanho2 = strlen(palavra2);

  if(tamanho1 > tamanho2)
  {
    printf("\n%s e maior que %s", palavra1, palavra2);
  } 
  else
  {
    printf("\n%s e maior que %s", palavra2, palavra1);
  } // end if
  
} // end cmprString( )

/**
 Method_E2.
*/
void method_E2(void)
{
  // definir dados 
  chars palavra1;
  chars palavra2;

  // pegar palavra
  palavra1 = IO_readln("\nDigite uma palavra: ");
  palavra2 = IO_readln("\nDigite outra palavra: ");

  // aplicar a funcao
  cmprString(palavra1, palavra2);

  IO_pause ( "\nApertar ENTER para continuar" );
} // end method_E2

/*
Funcao principal.
@return codigo de encerramento
*/
int main() {
  // definir dado
  int x = 0;
  // repetir até desejar parar
  do {
    // identificar
    IO_id("2023-2_AED1_E04 - Programa - v0.0");
    // ler do teclado
    IO_println("Opcoes");
    IO_println("0  - parar");
    IO_println("1  - Method_01    11 - Method_11   21 - Method_E1");
    IO_println("2  - Method_02    12 - Method_12   22 - Method_E2");
    IO_println("3  - Method_03    13 - Method_13");
    IO_println("4  - Method_04    14 - Method_14");
    IO_println("5  - Method_05    15 - Method_15");
    IO_println("6  - Method_06    16 - Method_16");
    IO_println("7  - Method_07    17 - Method_17");
    IO_println("8  - Method_08    18 - Method_18");
    IO_println("9  - Method_09    19 - Method_19");
    IO_println("10 - Method_10    20 - Method_20");
    IO_println("");
    x = IO_readint("Entrar com uma opcao: ");
    // testar valor
    switch (x) {
    case 0:
      method_00();
      break;
    case 1:
      method_01();
      break;
    case 2:
      method_02();
      break;
    case 3:
      method_03();
      break;
    case 4:
      method_04();
      break;
    case 5:
      method_05 ();
      break;
    case 6:
      method_06 ();
      break;
    case 7:
      method_07 ();
      break;
    case 8:
      method_08 ();
      break;
    case 9:
      method_09 ();
      break;
    case 10:
      method_10 ();
      break;
    case 11:
      method_11 ();
      break;
    case 12:
      method_12 ();
      break;
    case 13:
      method_13 ();
      break;
    case 14:
      method_14 ();
      break;
    case 15:
      method_15 ();
      break;
    case 16:
      method_16 ();
      break;
    case 17:
      method_17 ();
      break;
    case 18:
      method_18 ();
      break;
    case 19:
      method_19 ();
      break;
    case 20:
      method_20 ();
      break;
    case 21:
      method_E1 ();
      break;
    case 22:
      method_E2 ();
      break;
    default:
      IO_pause(IO_concat("Valor diferente das opcoes [0,1] (",
                         IO_concat(IO_toString_d(x), ")")));
    } // end switch
  } while (x != 0);
  // encerrar
  IO_pause("Apertar ENTER para terminar");
  return (0);
} // end main ( )
