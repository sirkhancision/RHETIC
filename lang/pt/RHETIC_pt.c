#include "RHETIC_pt.h"
#include "../../include/colors.h"
#include "../../include/results.h"
#include "../../include/types.h"
#include <stdio.h>

/* Função para imprimir o texto introdutório em Português(BR) */
void print_greet_pt(void) {
  printf("Bem-vindo ao %sRHETIC%s, o Indicador de Tipo do Eneagrama de "
         "Riso-Hudson\n"
         "(RHETI) em C!\n"
         "Digite [1] para seguir com as instruções, ou [2] para ir direto ao "
         "teste\n"
         "(sem os colchetes).\n",
         CYAN, RESET_C);
}

/* Função para imprimir as instruções do teste em Português(BR) */
void print_instructions_pt(void) {
  printf("Esse teste possui %s144%s pares de frases, onde você tem que "
         "escolher a frase em\n"
         "cada par que lhe descreve melhor. Até se você sentir que em certos "
         "pares,\n"
         "nenhum te descreve muito bem, ou que ambas as frases são quase "
         "igualmente\n"
         "verdadeiras, você deve tentar escolher a frase que lhe descreve "
         "melhor.\n",
         RED, RESET_C);

  puts("\nA abordagem mais precisa para o teste é fazê-lo pelo ponto de vista "
       "do\n"
       "passado, como você tem sido na maior parte de sua vida.\n"
       "Você deve digitar a letra correspondente à frase que você deseja "
       "selecionar,\n"
       "sem os colchetes. Se você estiver incerto do que escolher, você pode "
       "pular o\n"
       "par atual se digitar [>].");

  puts("\nO perfil que você receberá do RHETIC irá refletir as principais "
       "funções\n"
       "psicológicas da sua personalidade, da qual o equilíbrio muda com o "
       "tempo.\n"
       "O seu tipo básico de personalidade deve continuar o mesmo, mas outras "
       "funções\n"
       "da personalidade mudam com o tempo. Você pode querer também fazer o "
       "teste\n"
       "pensando em como você é no presente, depois de já tê-lo feito. Esse "
       "teste\n"
       "leva aproximadamente 40 minutos para fazer.");

  printf("\nApós ter feito o teste, é recomendado que você leia sobre o tipo "
         "do Eneagrama\n"
         "que você obteve como resultado. Recomendações pessoais são:\n"
         "%shttps://www.enneagraminstitute.com/%s (Inglês)\n"
         "%shttps://os16mistypes.wixsite.com/16mistypes%s (Português)\n",
         BLUE, RESET_C, BLUE, RESET_C);

  printf("\n%sATENÇÃO!%s A precisão desse teste será aumentada se você "
         "entender que possuímos\n"
         "quatro \"eus\": o nosso eu do passado, o nosso eu do presente, o "
         "nosso eu ideal,\n"
         "e o eu como os outros nos veem. O RHETIC está tentando discernir "
         "apenas o seu\n"
         "eu do passado. Portanto, é essencial que você mantenha o foco em "
         "responder\n"
         "apenas no seu eu do passado, e não misturar o seu eu do passado, "
         "presente,\n"
         "ideal, ou social.\n\n",
         RED, RESET_C);
}

/* Função para imprimir os resultados do teste em Português(BR) */
void print_result_pt(TYPE *types) {
  struct RESULT {
    int type, wing;
  } RESULT;

  RESULT.type = result_type(types);
  RESULT.wing = result_wing(types);

  printf("\nRESULTADOS:\n");

  if (RESULT.wing > 0) {
    printf("\nSeu tipo é provavelmente: %sTipo %dw%d do Eneagrama%s\n", RED,
           RESULT.type, RESULT.wing, RESET_C);
  } else if (RESULT.type == 0 && RESULT.wing == 0) {
    printf("\nSeu tipo é provavelmente: %sum malandro sorrateiro%s\n", RED,
           RESET_C);
  } else if (RESULT.wing == 0) {
    printf("\nSeu tipo é provavelmente: %sTipo %d do Eneagrama%s (asa não pôde "
           "ser calculada)\n",
           RED, RESULT.type, RESET_C);
  }

  printf("\nPontuação:\n"
         "Tipo 1: %d\tTipo 2: %d\tTipo 3: %d\n"
         "Tipo 4: %d\tTipo 5: %d\tTipo 6: %d\n"
         "Tipo 7: %d\tTipo 8: %d\tTipo 9: %d\n",
         types->d_1, types->f_2, types->c_3, types->e_4, types->h_5, types->b_6,
         types->i_7, types->g_8, types->a_9);

  printf("\nObrigado por usar o RHETIC! :)\n");
}
