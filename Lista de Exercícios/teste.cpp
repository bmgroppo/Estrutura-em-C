#include<stdio.h>
#include <string.h>
#include <iostream>
#include <locale.h>
#include <math.h>

int main (void)
{

 

  setlocale(LC_ALL, "Portuguese");           // habilita a acentuação para o português

 

  char palavra [50];
  char letra;
  int tamanho,cont,i;


  /* Entrada de Dados */

 

  printf ("Informe uma PALAVRA: ");
  scanf ("%s", palavra);

 

  /* Processamento de Dados */

 

  tamanho = strlen (palavra);

  if (tamanho % 2 != 0)
  {
      for (i=0 ; i < 50 ; i++)
      {
        
          if (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u')
          {
              cont = cont + 1;
              printf ("\nConsoantes da palavra: %c\n", letra);
          }
      }
  }


  /* Saída de Dados */

 

  printf ("\nA palavra %s possui %d consoantes", palavra, cont);

   return (0);
}


 
