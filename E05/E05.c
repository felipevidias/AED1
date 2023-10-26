/*
 Exemplos - v0.0. - 17''/ 09 / 2023
 Author: 817294_Felipe_Vilhena_Dias
*/
// dependencias
#include "io.h"     // para definicoes proprias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral
#include <string.h> // cadeia de caracteres
#include <math.h>   // para funcoes matematicas 

/**
 Method_00 - nao faz nada.
*/
void method_00(void) {
  // nao faz nada
} // end method_00 ( )

/**
 Method_01a - Mostrar certa quantidade de valores.
 @param x - quantidade de valores a serem mostrados
*/

void method_01a(int x)
{
    // definir dado local 
    int y = 1;   // controle 

    // repetir enquanto controle menor que a quantidade desejada 
    while (y <= x)
    {
    // mostrar valor
    IO_printf("%s%d\n", "Valor = ", y);

    // passar ao proximo 
    y = y + 1; 
    } // end while 
} // end method_01a( )

/**
 Method_01 - Mostrar certa quantidade de valores.
 OBS.: Preparacao e disparo de outro metodo.
*/
void method_01(void)
{
// identificar 
IO_id ( " Method_01 - v0.0" );

// executar o metodo auxiliar 
method_01a(5);

// encerrar
IO_pause ( "Apertar ENTER para continuar" );
} // end method_01

/**
 Method_02a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_02a(int x)
{
// definir dado local 
int y = 1;   // controle 
int z = 2;

// repetir enquanto controle menor  que a quantidade desejada
while(y <= x)
{
// mostrar valor 
IO_printf ( "%d: %d\n", y, z );

// passar ao proximo par 
z = z + 2;

// passar ao proximo valor controlado 
y = y + 1;

} // end while 
} // end method_02a

/**
 Method_02.
*/
void method_02(void)
{
// identificar
IO_id ( "Method_02 - v0.0" );

// executar metodo auxiliar
method_02a(5);

// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_02

/**
 Method_03a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_03a(int x)
{
// definir dado local
int y = 1;   // controle 
int z = 0;

// repetir enquanto controle menor que a quantidade desejada 
while(y <= x)
{
// vincular valor a ser mostrado ao controle 
z = 2 * y;

// mostrar valor 
IO_printf ( "%d: %d\n", y, z );

// passar ao proximo valor controlado 
y = y + 1;
} // end while
} // end method_03a

/**
 Method_03.
*/
void method_03 ( )
{
// identificar
 IO_id ( " Method_03 - v0.0" );
// executar o metodo auxiliar
 method_03a ( 5 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_03 ( )

/**
 Method_04a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_04a(int x)
{
// definir dado local 
int y = x;      // controle 
int z = 0;

// repetir enquanto controle menor que valor desejado 
while(y > 0)
{
// vincular o valor a ser mostrado ao controle 
z = 2 * y;

// mostrar valor 
IO_printf ( "%d: %d\n", y, z );
// passar ao proximo valor controlado
y = y - 1;
} // end while
} // end method_04a

/**
 Method_04.
*/
void method_04 ( )
{
// identificar
 IO_id ( "Method_04 - v0.0" );
// executar o metodo auxiliar
 method_04a ( 5 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_04 ( )

/**
 Method_05a - Mostrar certa quantidade de valores pares.
 @param x - quantidade de valores a serem mostrados
*/
void method_05a(int x)
{
// definir dado local 
int y = 0;     // controle 

// repetir enquanto valor de controle ser menor que quantidade desejada
for (y = x; y > 0; y--)
{
// mostrar valor
 IO_printf ( "%d: %d\n", y, (2*y) );
} // end for 
} // end method_05a( )


/**
 Method_05.
*/
void method_05 ( )
{
// identificar
 IO_id ( "Method_05 - v0.0" );
// executar o metodo auxiliar
 method_05a ( 5 );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_05 ( )

/**
 somarValores - funcao para somar certa quantidade de pares.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
int somarValores(int x)
{
  // definir dados locais 
  int soma = 1;
  int y = 0;    // controle

  // repetir enquanto controle menor que a quantidade desejada 
  for( y = 1; y <= (x-1); y + 1)
  {
    // mostrar valor 
     IO_printf ( "%d: %d\n", y, (2*y) );
    // somar valor 
    soma = soma + (2*y);
  } // end for 
  // retornar resultado
  return(soma);
} // end somarValores( )

/**
 Method_06.
*/
void method_06(void)
{
// definir dado
int soma = 0;

// identificar
IO_id ( "Method_06 - v0.0" );

// chamar e receber resultado da funcao 
soma = somarValores(5);

// mostrar resultado
 IO_printf ( "soma de pares = %d\n", soma );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_06

/**
 somarFracao1 - funcao para somar certa quantidade de fracoes.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracao(int x )
{
  // definir dados locais
  double soma = 1.0;
  double numerador = 0.0;
  double denominador = 0.0;
  int y = 0;     // controle 

  // repetir enquanto controle menor que a quantidade desejada 
  for (y = 1; y <= (x - 1); y = y +1)
  {
    // calcular numerador 
    numerador = 1.0;
    
    // calcular denominador 
    denominador = 2.0*y;

    // mostrar 
    IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
    y, numerador, denominador, (numerador/denominador) );

    // somar valor 
    soma =  soma + (1.0)/(2.0*y);
  } // end for 
  // retornar resultado 
  return(soma);

} // end somarFracao( )


  /**
 Method_07.
*/
void method_07(void)
{
// definir dado 
 double soma = 0.0;

// identificar 
IO_id ( "Method_07 - v0.0" );

// chamar e receber resultado da funcao
 soma = somarFracao ( 5 );

 // mostrar resultado
 IO_printf ( "soma de fracoes = %lf\n", soma );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );    
} // end method_07

/**
 somarFracao2 - funcao para somar certa quantidade de fracoes.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracao2(int x)
{
// definir dados locais 
double soma = 1.0;
double numerador = 0.0;
double denominador = 0.0;
int y = 0;       // controle 

// mostrar primeiro valor
 IO_printf ( "%d: %7.4lf/%7.4lf\n", 1, 1.0, soma );

// repetir enquanto controle menor que a quantidade desejada
for(y = 1; y <= (x - 1); y = y + 1)
{
//  calcular numerador 
numerador = 2.0*y-1;
// calcular denominador 
denominador = 2.0*y;

// mostrar valor 
IO_printf ( "%d: %7.4lf/%7.4lf = %lf\n",
 y+1, numerador, denominador, (numerador/denominador) );

// somar valor 
soma = soma + numerador/denominador;
} // end for ( )
return(soma);
} // end somarFracao2( )

/**
 Method_08.
*/
void method_08(void)
{
// definir dado
double soma = 0.0;

// identificar
 IO_id( "Method_08 - v0.0" );

// chamar e receber resultado da funcao
soma = somarFracao2 ( 5 );

// mostrar resultado
 IO_printf ( "soma de fracoes = %lf\n", soma );

 // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_08

/**
 somarFracao3 - funcao para somar certa quantidade de fracoes.
 @return soma dos valores
 @param x - quantidade de valores a serem mostrados
*/
double somarFracao3(int x)
{
   // definir dados locais
 double soma = 1.0;
 int y = 0 ; // controle
// mostrar primeiro valor
 IO_printf ( "%d: %7.4lf/%7.4lf\n", 1, 1.0, soma );
// repetir enquanto controle menor que a quantidade desejada
 for ( y = 1; y < x; y = y+1 )
 {
 // mostrar valor
 IO_printf ( "%d: %7.4lf/%7.4lf = %7.4lf\n",
 y+1, (2.0*y), (2.0*y+1), ((2.0*y)/(2.0*y+1)) );
 // somar valor
 soma = soma + (2.0*y)/(2.0*y+1);
 } // end for
// retornar resultado
 return ( soma );
} // end somarFracao3

/**
 Method_09.
*/
void method_09 ( )
{
// definir dado
 double soma = 0.0;
// identificar
 IO_id ( "EXEMPLO0509 - Method_09 - v0.0" );
// chamar e receber resultado da funcao
 soma = somarFracao3 ( 5 );
// mostrar resultado
 IO_printf ( "soma de fracoes = %lf\n", soma );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_09 ( )

/**
 multiplicarValores - funcao para multiplicar certa quantidade de valores impares.
 @return produto de valores
 @param x - quantidade de valores
*/
int multiplicarValores(int x)
{
// definir dados locais 
int produto = 1;
int y = 0;  // controle 

// repetir enquanto controle menor que a quantidade desejada
for (y = 1; y <= x; y = y +1)
{
// mostrar valor
 IO_printf ( "%d: %d\n", y, (2*y-1) );
 // somar valor
 produto = produto * (2*y-1);
} // end for
return (produto);
} // end multiplicarValores( )

/**
 Method_10.
*/
void method_10 ( )
{
// identificar
 IO_id ( "Method_10 - v0.0" );
// mostrar produto de valores
 IO_printf ( "%s%d\n", "produto = ", multiplicarValores ( 5 ) );
// encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_10 ( )

// funcao par multiplos de 7
int mult7a (int x)
{
  // retornar multiplo de 7
  return(7*x);
} // end method mult7a( )
void mult7(int n)
{
  int y = 0;
  for(int y = 1; y <= n; y++)
  {
  IO_printf ( "%d: %d\n", y, mult7a(y) );
   
  } // end for 

} // end mult7( )


/**
 Method_11.
*/
void method_11(void)
{
  // definir dados 
  int n = 0;

  // identificar
  IO_id ( "Method_11 - v0.0" );

  // pegar valores
   n = IO_readint ("Digite uma quantidade de numeros a serem lidos: ");
  mult7(n); 

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_11( )

// funcao para mostrar multiplos de 3 e 4
void mult3e4(int n)
{
  // repetir ate chegar no valor desejado 
  for (int y = 0; y <= 5; y++)
  {
     IO_printf ( "%d: [%d] [%d]\n", y, (3*y), (4*y));
  } // end ofor
} // end mult3e4( )

/**
 Method_12.
*/
void method_12(void)
{
  // definir dados 
  int n = 0;

  // identificar 
  IO_id ( "Method_12 - v0.0" );

   // pegar valores
   n = IO_readint ("Digite uma quantidade de numeros a serem lidos: ");
  mult3e4(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_12

// funcao para mostrar numero em potencia de 5
void showPow5(int n)
{
  // definir dados locais 
  int y = 0;

  // repetir ate quantidade desejada (crescente e todos os numeros)
  for(y = 0; y <= n; y++)
  {
    printf("\n%d %.2lf", y, pow(5,y));
  } // end for 
  printf("\n");
// repetir ate quantidade desejada (descrescente e impar)
  for(y = n; y >= 1 ; y--)
  {
    printf("\n%d %.2lf", y, pow(5,y));
  } // end for   
} // end showPow5( )

/**
 Method_13.
*/
void method_13(void)
{
  // definir dados 
  int n = 0; 

  // identificar 
  IO_id ( "Method_13 - v0.0" );

  // pegar n 
  n = IO_readint("Digite uma quantidade de valores a serem lidos ");
  showPow5(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_13

// funcao para por o denominador e multiplos de 7
void div6(int n)
{
  int y = 0;

  for(y = 1; y < n; y++)
  {
      printf("\n%d 1/%d", y, (y*7));
  } // end for 
} // end div6( )

/**
 Method_14.
*/
void method_14(void)
{
  // definir dados locais 
  int n = 0;

  // identificar 
  IO_id ( "Method_14 - v0.0" );

  // pegar n 
   n = IO_readint("Digite uma quantidade de valores a serem lidos ");
   div6(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );

} // end method_14

// funcao para quantidade real em valores ímpares crescentes nos denominadores
void doubleOdd(int n,int x)
{
  // definir dados locais 
  int y = 0;
  if(x != 0)
  {
  for (y = 1; y <= n; y++)
    {
        printf("\n%d %.2lf", y, pow(x,(2*y-1)));
    } // end for 
  }
  else 
  {
    printf("Nao existe divisao por 0.\n");
  } // end if
} // end doubleOdd( )

/**
 Method_15.
*/
void method_15(void)
{
  // definir dados 
  double n = 0.0;
  double x = 0.0;

  // pegar valores 
  n = IO_readdouble("Digite quantas vezes sera repetido: ");
  x = IO_readdouble("Digite o valor de x, diferente de 0 :");

  // identificar 
  IO_id ( "Method_15 - v0.0" );

  // aplicar a funcao 
  doubleOdd(n, x);

  
  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_15


// funcao para somar os primeiros valores pares positivos começacando no valor 3
void addAll3(int n)
{
  // definir dados 
  int y = 3; 
  int soma = 0;

  while(n > 0)
  {
    if(y % 2 == 0 && !(y % 4 == 0))
    {
      printf("\n%d", y);
       n = n - 1;
      soma += y;
    } // end if
    y++;
  } // end while
  
  printf("\nA soma total e: %d", soma);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end addAll3( )

/**
 Method_16.
*/
void method_16(void)
{
  // definir dados 
  double n = 0.0;


  // pegar valores 
  n = IO_readdouble("Digite quantas vezes sera repetido: ");

    // identificar 
  IO_id ( "Method_16 - v0.0" );

  // aplicar a funcao 
  addAll3(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_16

// funcao para aplicar o reverso
double doRev(int n)
{
  // retornar inverso
  return(1.0/(double)n);
} // end doRev()
// funcao para calcular soma dos inversos
void addRev(int n)
{
  // definir dados locais 
  double y = 0.0; 
  int z = 7;
  double soma = 0.0;
  
  // repetir ate satisfazer a condicao e somar tudo
   while(n > 0)
  {
    if( z % 7 == 0 && !(z % 5 == 0))
    {
      y = doRev(z);
      printf("\n%d  [%.2lf]",z, y);
      n = n - 1;
      
      // somar inversos 
      soma += y;
    } // end if
    z++;
  } // end while

    printf("\nA soma total e: %.2lf", soma);
} // end addRev( )

/**
 Method_17.
*/
void method_17(void)
{
  // definir dados 
  int n = 0;


  // pegar valores 
  n = IO_readint("Digite quantas vezes sera repetido: ");

    // identificar 
  IO_id ( "Method_17 - v0.0" );

  // aplicar a funcao 
  addRev(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_17

// funcao para entregar os naturais 
int nat(int y , int n  )
{
  y = y + n;
  return (y);
} // end nat()


// funcao para somar todos os naturais 
void addAllNat(int n)
{
  // definir dados locais 
  int y = 7;
  int soma = 0;
  int z = 0;
  int result = 0;
  // repetir ate satisfazer a condicao e somar nturais 
  while (n > 0)
  {
    y = nat(y,z);
    result = y;
    printf("\n%d %d",z+1, result);
    z = z + 1;
    n = n - 1;
    soma += y;
  } // end while 

  printf("\nA soma total e: %d", soma);
} // end addAllNat( )

/**
 Method_18.
*/
void method_18(void)
{
  // definir dados 
  int n = 0;

  // pegar valores 
  n = IO_readint("Digite quantas vezes sera repetido: ");

    // identificar 
  IO_id ( "Method_18 - v0.0" );

  // aplicar funcao 
  addAllNat(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_18

//  funcao para pegar o quadrado dos naturais 
int natPow(int n)
{
  return(pow(n,2));
} // end natPow( )

// funcao para adicionar todos os naturais e por ao quadrado 
void allPowNat(int n )
{
   // definir dados locais 
  int y = 7;
  int a = 0;
  int soma = 0;
  int z = 0;
  int result = 0;
  // repetir ate satisfazer a condicao e somar nturais 
  while (n > 0)
  {
    y = nat(y,z);
    result = natPow(y);
    printf("\n%d) %d^2 = %d",z+1, y, result);
    z = z + 1;
    n = n - 1;
    soma += result;
  } // end while 

  printf("\nA soma total e: %d", soma);
} // end allPowNat( )

/**
 Method_19.
*/
void method_19(void)
{
  // definir dados 
  int n = 0;

   // pegar valores 
  n = IO_readint("Digite quantas vezes sera repetido: ");

  // identificar 
  IO_id ( "Method_19 - v0.0" );

  // aplicar a funcao 
  allPowNat(n);


  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_19

// funcao para somar o inverso de numeros naturais comecando de 6
void addRevNat(int n)
{
    // definir dados locais 
  int y = 7;
  double soma = 0;
  int z = 0;
  double result = 0;
  // repetir ate satisfazer a condicao e somar nturais 
  while (n > 0)
  {
    y = nat(y,z);
    result = doRev(y);
    printf("\n%d) 1/%d = %.2lf",z+1, y, result);
    z = z + 1;
    n = n - 1;
    soma += result;
  } // end while 

  printf("\nA soma total e: %.2lf", soma);
} // end addRevNat

/**
 Method_20.
*/
void method_20(void)
{
  // definir dados 
  int n = 0;

   // pegar valores 
  n = IO_readint("Digite quantas vezes sera repetido: ");

  // identificar 
  IO_id ( "Method_20 - v0.0" );

  // aplicar a funcao 
  addRevNat(n);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_20

// funcao para calcular o fatorial 
int fact(int n)
{
  int answer = 1; // resposta da fatorial 

  for(; n >= 1; --n)
  {
    answer *= n;
  } // end for

  return(answer);
} // end fact

/**
 Method_E1.
*/
void method_E1(void)
{
  // definir dados 
  int n;
  int aux = 0;
   // pegar valores 
  n = IO_readint("Digite quantas vezes sera repetido: ");

  // identificar 
  IO_id ( "Method_E1 - v0.0" );

  // aplicar a funcao 
  aux = fact(n);
  printf("\n%d! = %d", n, aux);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_E1

void funfact(int n)
{
  int answer;
  int y = 3;
  int a = 0;
  // repetir ate satisfazer condicao e retornar valor da funcao 
  while(n > 0)
  {
    a = fact(n+2);
    answer *= 1+(y+1)/a;
    printf("\n%d", y);
    printf("\n%d", a);
    n = n - 1;
  } // end while

  //return(answer);
} // end funfact

/**
 Method_E2.
*/
void method_E2(void)
{
  // definir dados 
  int n;
  int aux = 0;
   // pegar valores 
  n = IO_readint("Digite quantas vezes sera repetido: ");

  // identificar 
  IO_id ( "Method_E2 - v0.0" );

  // aplicar a funcao 
  //aux = funfact(n);
  funfact(n);
  //printf("\nf(%d) = %d", n, aux);

  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_E2


// funcao principal 
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
      method_05();
      break;
    case 6:
      method_06();
      break;
    case 7:
      method_07();
      break;
    case 8:
      method_08();
      break;
    case 9:
      method_09();
      break;
    case 10:
      method_10();
      break;
    case 11:
      method_11();
      break;
    case 12:
      method_12();
      break;
    case 13:
      method_13();
      break;
    case 14:
      method_14();
      break;
    case 15:
      method_15();
      break;
    case 16:
      method_16();
      break;
    case 17:
      method_17();
      break;
    case 18:
      method_18();
      break;
    case 19:
      method_19();
      break;
    case 20:
      method_20();
      break;
    case 21:
      method_E1();
      break;
    case 22:
      method_E2();
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
