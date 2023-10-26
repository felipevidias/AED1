/*
 Exemplo0204 - v0.0. - 26 / 08 / 2023
 Author: 817294_Felipe_Vilhena_Dias

 Para compilar em terminal (janela de comandos):
 Linux : gcc -o exemplo0204 exemplo0204.c
 Windows: gcc -o exemplo0204 exemplo0204.c
 Para executar em terminal (janela de comandos):
 Linux : ./exemplo0204
 Windows: exemplo0204
*/
// dependencias
#include "io.h"     // para definicoes proprias
#include <stdio.h>  // para as entradas e saidas
#include <stdlib.h> // para outras funcoes de uso geral

/**
 Method_01.
*/
void method_01(void) {
  // definir dados 
  int x = 0;   // definir variavel com valor inicial 
  
  // identificar
  IO_id ( "Method_01 - Programa - v0.0" );
  
  // ler do teclado
  x = IO_readint ( "Entrar com um valor inteiro: " );

  // testar valor 
  if(x==0)
  {
    IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
  }
  if(x!=0)
  {
    IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x );
  } // end if 
  
  // encerrar
  printf("\nApertar ENTER para continuar.\n");
  getchar();
} // end method_01

/**
 Method_02.
*/
void method_02(void)
{
  // definir dado 
  int x = 0;    // definir variavel com valor inicial 
  
  // identificar 
  IO_id ( "Method_02 - Programa - v0.0" );

  // ler do teclado 
  x = IO_readint ( "Entrar com um valor inteiro: " );

  // testar valor 
  if(x == 0)
  {
    IO_printf ( "%s (%d)\n", "Valor igual a zero", x );

  }
  else // equivalente a "caso diferente do já testado"
  {
    IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x );

  } // end if 

  // encerrar
  IO_pause ( "Apertar ENTER para continuar" );
} // end method_02

/**
 Method_03.
*/
void method_03(void)
{
  // definir dado 
  int x = 0;        // definir variavel com valor inicial 

  // identificar 
  IO_id ( "Method_03 - Programa - v0.0" );

  // ler do teclado 
  x = IO_readint ( "Entrar com um valor inteiro: " );

  // testar valor 
  if(x == 0)
  {
    IO_printf ( "%s (%d)\n", "Valor igual a zero", x );
  }
   else
 {
 IO_printf ( "%s (%d)\n", "Valor diferente de zero ", x );
 if ( x > 0 )
 {
 IO_printf ( "%s (%d)\n", "Valor maior que zero", x );
 }
 else
 {
 IO_printf ( "%s (%d)\n", "Valor menor que zero", x );
 } // end if
 } // end if
  
  // encerrar
 IO_pause ( "Apertar ENTER para continuar" );
} // end method_03

/*
 Method_04.
*/
void method_04(void)
{
  // definir dado 
  double x = 0.0;    // definir variavel com valor inicial 

  // identificar 
  IO_id ( "EXEMPLO0204 - Programa - v0.0" );

  // ler do teclado
  x = IO_readdouble ( "Entrar com um valor real: " );

  // testar valor 
  if(1.0 <= x && x <= 10.0)
  {
    IO_printf ( "%s (%lf)\n", "Valor dentro do intervalo [1:10] ", x );
  }
  else
  {
    IO_printf ( "%s (%lf)\n", "Valor fora do intervalo [1:10] ", x );
 if ( x < 1.0 )
 {
 IO_printf ( "%s (%lf)\n", "Valor abaixo do intervalo [1:10] ", x );
 }
 else
 {
 IO_printf ( "%s (%lf)\n", "Valor acima do intervalo [1:10]", x );
 } // end if
 } // end if
} // end method_04



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
---------------------------------------------- notas / observacoes / comentarios
---------------------------------------------- previsao de testes
---------------------------------------------- historico
Versao                 Data                    Modificacao
0.1                   26/08                    esboco
---------------------------------------------- testes
Versao                                          Teste
0.0                    00.                     (OK) identificacao de programa
0.1                    00.                     (OK) condicional 0 ou diferente de 0 
0.2                    00.                     (OK) condicional 0 ou diferente de 0 usando else
0.3                    00.                     (OK) condicional  maior ,menor ou igual a 0 
0.4                    00.                     (OK) intervalo [1:10] 
*/
