#include <stdio.h>
#include "../../include/colors.h"
#include "../../include/res.h"
#include "RHETIC_pt.h"

/* Função para imprimir o texto introdutório em Português(BR) */
void print_greet_pt() {
    printf("Bem-vindo ao %sRHETIC%s, o Indicador de Tipo do Eneagrama de Riso-Hudson\n"
           "(RHETI) em C!\n"
           "Entre com [1] para seguir com as instruções, ou [2] para ir direto ao teste\n"
           "(sem os colchetes entre os números).\n", CYAN, RESET_C);
}

/* Função para imprimir as instruções do teste em Português(BR) */
void print_instructions_pt() {
    printf("Esse teste possui %s144%s pares de frases, onde você tem que escolher a frase em\n"
    "cada par que lhe descreve melhor. Até se você sentir que em certos pares,\n"
    "nenhum te descreve muito bem, ou que ambas as frases são quase igualmente\n"
    "verdadeiras, você deve tentar escolher a frase que lhe descreve melhor.\n", RED, RESET_C);

    printf("\nA abordagem mais precisa para o teste é tomá-lo pelo ponto de vista do\n"
    "passado, como você tem sido pela maior parte de sua vida.\n"
    "Você deve entrar com a letra correspondente à frase que você deseja selecionar,\n"
    "sem os colchetes. Se você estiver inseguro do que escolher, você pode pular o\n"
    "par atual se entrar com [>].\n");

    printf("\nO perfil que você receberá do RHETI irá refletir as principais funções\n"
    "psicológicas da sua personalidade, a qual o equilíbrio muda com o tempo.\n"
    "O seu tipo básico de personalidade deve continuar o mesmo, mas outras funções\n"
    "da personalidade mudam com o tempo. Você pode querer também fazer o teste\n"
    "pensando em como você é no presente, depois de já tê-lo feito. Esse teste\n"
    "leva aproximadamente 40 minutos.\n");

    printf("\nApós ter feito o teste, é recomendado que você leia sobre o tipo do eneagrama\n"
    "que você teve como resultado. Recomendações pessoais são:\n"
    "%shttps://www.enneagraminstitute.com/%s (inglês)\n"
    "%shttps://os16mistypes.wixsite.com/16mistypes%s (português)\n", BLUE, RESET_C, BLUE, RESET_C);

    printf("\n%sATENÇÃO!%s A precisão desse teste será aumentada se você entender que possuímos\n"
    "quatro \"eus\": o nosso eu do passado, o nosso eu do presente, o nosso eu ideal,\n"
    "e o eu como os outros nos veem. O RHETI está tentando discernir apenas o seu\n"
    "eu do passado. Portanto, é essencial que você mantenha o foco em responder\n"
    "apenas no seu eu do pasasdo, e não misturar o seu eu do passado, presente,\n"
    "ideal, ou social.\n", RED, RESET_C);
}

/* Função para imprimir os resultados do teste em Português(BR) */
void print_result_pt(int a, int b, int c,
                     int d, int e, int f,
                     int g, int h, int i) {
    short unsigned int type_res, wing_res;
    type_res = wing_res = 0;
    printf("\nRESULTADOS:\n");

    type_res = res_type(a, b, c, 
                        d, e, f, 
                        g, h, i);

    wing_res = res_wing(a, b, c, 
                        d, e, f, 
                        g, h, i);

    if (wing_res > 0)
        printf("\nSeu tipo é provavelmente: %sTipo %huw%hu do Eneagrama%s\n", RED, type_res, wing_res, RESET_C);

    else if (type_res == 0 && wing_res == 0)
        printf("\nSeu tipo é provavelmente: %sum malandro sorrateiro%s\n", RED, RESET_C);
    
    else if (wing_res == 0)
        printf("\nSeu tipo é provavelmente: %sTipo %hu do Eneagrama%s (asa não pôde ser calculada)\n", RED, type_res, RESET_C);

    printf("\nPontuação:\n"
           "Tipo 1: %hu\tTipo 2: %hu\tTipo 3: %hu\n"
           "Tipo 4: %hu\tTipo 5: %hu\tTipo 6: %hu\n"
           "Tipo 7: %hu\tTipo 8: %hu\tTipo 9: %hu\n",
           d, f, c, 
           e, h, b,
           i, g, a);

    printf("\nObrigado por testar o RHETIC! :)\n");
}
