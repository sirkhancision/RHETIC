#include "../../include/stats_en.h" /* To include stats_form */
#include "../../include/stats_pt.h"
#include "../../include/type.h"
#include <stdio.h>

extern TYPE types_global;

/* Função para imprimir cada par de afirmações do teste em Português(BR) */
void stats_pt(void) {
	TYPE types;
	/* Par de Frases 1 */
	stats_form("1.Eu tenho sido romântico e imaginativo. [E]",
	"Eu tenho sido pragmático e realista. [B]", 
	'E', 'B', &types_global.e_4, &types_global.b_6);

	/* Par de Frases 2 */
	stats_form("2.Eu tendi a assumir confrontos. [G]",
	"Eu tendi a evitar confrontos. [A]", 
	'G', 'A', &types_global.g_8, &types_global.a_9);

	/* Par de Frases 3 */
	stats_form("3.Eu tipicamente fui diplomático, charmoso e ambicioso. [C]", "Eu tipicamente fui direto, formal e idealista. [D]", 
	'C', 'D', &types_global.c_3, &types_global.d_1);

	/* Par de Frases 4 */
	stats_form("4.Eu tendi a ser focado e intenso. [H]",
	"Eu tendi a ser espontâneo e divertido. [I]", 'H', 'I',
	&types_global.h_5, &types_global.i_7);

	/* Par de Frases 5 */
	stats_form("5.Eu tenho sido uma pessoa hospitaleira e tenho desfrutado de receber novos\n"
	"amigos na minha vida. [F]",
	"Eu tenho sido uma pessoa privada e não me misturado muito com os outros. [E]", 'F', 'E', &types_global.f_2, &types_global.e_4);

	/* Par de Frases 6 */
	stats_form("6.Tem sido difícil para mim relaxar e parar de me preocupar sobre\n"
	"potenciais problemas. [B]",
	"Tem sido difícil para mim me sentir perturbado por potenciais problemas. [A]", 'B', 'A', &types_global.b_6, &types_global.a_9);

	/* Par de Frases 7 */
	stats_form("7.Eu tenho sido mais um sobrevivente com \"malícia\". [G]",
	"Eu tenho sido mais um idealista \"elevado\". [D]", 'G', 'D',
	&types_global.g_8, &types_global.d_1);

	/* Par de Frases 8 */
	stats_form("8.Eu precisei mostrar afeto às pessoas. [F]",
	"Eu precisei manter uma certa distância das pessoas. [H]", 
	'F', 'H', &types_global.f_2, &types_global.h_5);

	/* Par de Frases 9 */
	stats_form("9.Quando apresentado a uma nova experiência, eu geralmente me pergunto se\n"
	"aquilo será útil para mim. [C]",
	"Quando apresentado a uma nova experiência, eu geralmente me pergunto se\n"
	"aquilo será divertido. [I]", 'C', 'I', &types_global.c_3, &types_global.i_7);

	/* Par de Frases 10 */
	stats_form("10.Eu tendi a focar de mais em mim. [E]",
	"Eu tendi a focar de mais nos outros. [A]", 'E', 'A',
	&types_global.e_4, &types_global.a_9);

	/* Par de Frases 11 */
	stats_form("11.Os outros têm dependido da minha percepção e conhecimento. [H]", "Os outros têm dependido da minha força e determinação. [G]", 'H', 'G', &types_global.h_5, &types_global.g_8);

	/* Par de Frases 12 */
	stats_form("12.Eu tenho dado um ar de ser muito inseguro. [B]",
	"Eu tenho dado um ar de ser muito seguro de si. [D]", 'B', 'D',
	&types_global.b_6, &types_global.d_1);

	/* Par de Frases 13 */
	stats_form("13.Eu tenho sido mais orientado a relações do que a objetivos. [F]", "Eu tenho sido mais orientado a objetivos do que a relações. [C]", 'F', 'C', &types_global.f_2, &types_global.c_3);

	/* Par de Frases 14 */
	stats_form("14.Eu não tenho sido capaz de me manifestar em prol de mim mesmo muito bem. [E]", "Eu tenho dito aquilo que os outros desejam ter a coragem de dizer. [I]", 'E', 'I', &types_global.e_4, &types_global.i_7);

	/* Par de Frases 15 */
	stats_form("15.Tem sido difícil para mim parar de considerar alternativas e fazer\n"
	"algo definitivo. [H]", "Tem sido difícil para mim relaxar e ser mais flexível. [D]", 'H', 'D', &types_global.h_5, &types_global.d_1);

	/* Par de Frases 16 */
	stats_form("16.Eu tendi a ser cuidadoso e hesitante. [B]",
	"Eu tendi a ser ousado e dominador. [G]", 'B', 'G',
	&types_global.b_6, &types_global.g_8);

	/* Par de Frases 17 */
	stats_form("17.Minha relutância em me envolver de mais já me trouxe problemas com\n"
	"as pessoas. [A]", "Minha vontade de ter as pessoas dependendo de mim já me trouxe problemas\n"
	"com elas. [F]", 'A', 'F', &types_global.a_9, &types_global.f_2);

	/* Par de Frases 18 */
	stats_form("18.Geralmente, eu tenho sido capaz de deixar minhas emoções de lado para\n"
	"cumprir o trabalho. [C]", "Geralmente, eu tenho precisado trabalhar nas minhas emoções antes de agir. [E]", 'C', 'E', &types_global.c_3, &types_global.e_4);

	/* Par de Frases 19 */
	stats_form("19.Geralmente, eu fui metódico e cauteloso. [B]",
	"Geralmente, eu fui aventureiro e tomei riscos. [I]", 'B', 'I', &types_global.b_6, &types_global.i_7);

	/* Par de Frases 20 */
	stats_form("20.Eu tendi a ser uma pessoa acolhedora e generosa, que\n" "busca intimidade com os outros. [F]", "Eu tendi a ser uma pessoa séria e reservada, que gosta de discutir\n"
	"sobre problemas. [D]", 'F', 'D', &types_global.f_2, &types_global.d_1);

	/* Par de Frases 21 */
	stats_form("21.Eu frequentemente sinto a necessidade de ser um \"pilar de força\". [G]", "Eu frequentemente sinto a necessidade de realizar algo perfeitamente. [C]", 'G', 'C', &types_global.g_8, &types_global.c_3);

	/* Par de Frases 22 */
	stats_form("22.Eu tipicamente fui interessado em fazer perguntas difíceis e em manter\n"
	"minha independência. [H]", "Eu tipicamente fui interessado em manter minha estabilidade e paz\n"
	"de espírito. [A]", 'H', 'A', &types_global.h_5, &types_global.a_9);

	/* Par de Frases 23 */
	stats_form("23.Eu tenho sido um pouco cínico e cético. [B]",
	"Eu tenho sido um pouco piegas e sentimental. [F]", 'B', 'F', &types_global.b_6, &types_global.f_2);

	/* Par de Frases 24 */
	stats_form("24.Eu frequentemente me preocupo que eu esteja por fora de algo melhor. [I]", "Eu frequentemente me preocupo que se eu abaixar minha guarda, alguém vai tomar\n"
	"vantagem de mim. [G]", 'I', 'G', &types_global.i_7, &types_global.g_8);

	/* Par de Frases 25 */
	stats_form("25.Meu hábito de me \"excluir\" já irritou as pessoas. [E]", "Meu hábito de dizer às pessoas o que fazerem já as irritou. [D]",
	'E', 'D', &types_global.e_4, &types_global.d_1);

	/* Par de Frases 26 */
	stats_form("26.Eu tendi a ficar ansioso se houver muita agitação e estímulo. [A]", "Eu tendi a ficar ansioso se não houver muita agitação e estímulo. [I]", 'A', 'I', &types_global.a_9, &types_global.i_7);

	/* Par de Frases 27 */
	stats_form("27.Eu tenho dependido dos meus amigos e eles sabem que podem\n"
	"depender de mim. [B]", "Eu não tenho dependido das pessoas, eu tenho feito as coisas por\n"
	"conta própria. [C]", 'B', 'C', &types_global.b_6, &types_global.c_3);

	/* Par de Frases 28 */
	stats_form("28.Eu tendi a ser desapegado e apreensivo. [H]",
	"Eu tendi a ser temperamental e absorto em mim mesmo. [E]",
	'H', 'E', &types_global.h_5, &types_global.e_4);

	/* Par de Frases 29 */
	stats_form("29.Eu tenho gostado de desafiar as pessoas e \"sacudi-las\". [G]", "Eu tenho gostado de confortar as pessoas e as acalmarem. [F]", 'G', 'F', &types_global.g_8, &types_global.f_2);

	/* Par de Frases 30 */
	stats_form("30.Eu geralmente tenho sido uma pessoa descontraída e sociável. [I]", "Eu geralmente tenho sido uma pessoa sincera e auto-disciplinada. [D]", 'I', 'D', &types_global.i_7, &types_global.d_1);

	/* Par de Frases 31 */
	stats_form("31.Eu tenho desejado \"me encaixar\" com os outros – eu fico desconfortável\n"
	"quando eu me sobressaio de mais. [A]", "Eu tenho desejado me sobressair dos demais – eu fico desconfortável se eu não\n"
	"me distingo. [C]", 'A', 'C', &types_global.a_9, &types_global.c_3);

	/* Par de Frases 32 */
	stats_form("32.Perseguir meus interesses pessoais tem sido mais importante para mim do que\n"
	"ter estabilidade e segurança. [H]", "Ter estabilidade e segurança tem sido mais importante para mim do que\n"
	"perseguir meus interesses pessoais. [B]", 
	'H', 'B', &types_global.h_5, &types_global.b_6);

	/* Par de Frases 33 */
	stats_form("33.Quando eu tive conflitos com os outros, eu tendi a retrair. [E]", "Quando eu tive conflitos com os outros, eu raramente voltei atrás. [G]", 'E', 'G', &types_global.e_4, &types_global.g_8);

	/* Par de Frases 34 */
	stats_form("34.Eu tenho cedido fácil de mais e deixado os outros me dominarem. [A]", "Eu tenho sido muito intransigente e exigente com os outros. [D]", 'A', 'D', &types_global.a_9, &types_global.d_1);

	/* Par de Frases 35 */
	stats_form("35.Eu tenho sido apreciado pelo meu meu espírito insubmersível e\n"
	"desenvoltura. [I]", "Eu tenho sido apreciado pelo zelo profundo e calidez pessoal. [F]", 'I', 'F', &types_global.i_7, &types_global.f_2);

	/* Par de Frases 36 */
	stats_form("36.Eu tenho desejado criar uma impressão favorável aos outros. [C]", "Eu pouco tenho me importado em criar uma impressão favorável aos outros. [H]", 'C', 'H', &types_global.c_3, &types_global.h_5);

	/* Par de Frases 37 */
	stats_form("37.Eu tenho dependido da minha perseverança e senso comum. [B]", "Eu tenho dependido da minha imaginação e momentos de inspiração. [E]", 'B', 'E', &types_global.b_6, &types_global.e_4);

	/* Par de Frases 38 */
	stats_form("38.Basicamente, eu fui descontraído e agradável. [A]", "Basicamente, eu fui motivado e assertivo. [G]", 'A', 'G',
	&types_global.a_9, &types_global.g_8);

	/* Par de Frases 39 */
	stats_form("39.Eu tenho trabalhado duro para ser aceito e querido. [C]",
	"Ser aceito e querido não tem sido uma grande prioridade para mim. [D]",
	'C', 'D', &types_global.c_3, &types_global.d_1);

	/* Par de Frases 40 */
	stats_form("40.Em reação à pressão dos outros, eu tenho me tornado mais retraído. [H]", "Em reação à pressão dos outros, eu tenho me tornado mais assertivo. [I]", 'H', 'I', &types_global.h_5, &types_global.i_7);

	/* Par de Frases 41 */
	stats_form("41.As pessoas têm se interessado em mim por ser descontraído, envolvente, e\n"
	"interessado nelas. [F]", "As pessoas têm se interessado em mim porque eu tenho sido quieto, incomum\n"
	"e profundo. [E]", 'F', 'E', &types_global.f_2, &types_global.e_4);

	/* Par de Frases 42 */
	stats_form("42.Dever e responsabilidade têm sido valores importantes para mim. [B]", "Harmonia e aceitação têm sido valores importantes para mim. [A]", 'B', 'A', &types_global.b_6, &types_global.a_9);

	/* Par de Frases 43 */
	stats_form("43.Eu tenho tentado motivar as pessoas fazendo grande planos e promessas. [G]", "Eu tenho tentado motivar as pessoas apontando as consequências de não\n"
	"seguir meus conselhos. [D]", 'G', 'D', &types_global.g_8, &types_global.d_1);

	/* Par de Frases 44 */
	stats_form("44.Eu raramente tenho sido emocionalmente demonstrativo. [H]", "Eu geralmente tenho sido emocionalmente demonstrativo. [F]", 'H', 'F', &types_global.h_5, &types_global.f_2);

	/* Par de Frases 45 */
	stats_form("45.Lidar com detalhes não tem sido uma das minhas qualidades mais fortes. [I]", "Eu tenho me sobressaído em lidar com detalhes. [C]", 'I', 'C', &types_global.i_7, &types_global.c_3);

	/* Par de Frases 46 */
	stats_form("46.Eu frequentemente tenho enfatizado o quão diferente eu sou das outras\n"
	"pessoas, especialmente da minha família. [E]", "Eu frequentemente tenho enfatizado o quanto eu tenho em comum com as outras\n"
	"pessoas, especialmente com a minha família. [A]", 
	'E', 'A', &types_global.e_4, &types_global.a_9);

	/* Par de Frases 47 */
	stats_form("47.Quando as coisas esquentam, eu tenho tendido a ficar nos bastidores. [H]", "Quando as coisas esquentam, eu tenho tendido a ficar bem no meio\n"
	"delas. [G]", 'H', 'G', &types_global.h_5, &types_global.g_8);

	/* Par de Frases 48 */
	stats_form("48.Eu tenho estado presente aos meus amigos, até quando eles\n"
	"estiveram errados. [B]", "Eu não desejei comprometer o que é certo, até pela amizade. [D]", 'B', 'D', &types_global.b_6, &types_global.d_1);

	/* Par de Frases 49 */
	stats_form("49.Eu tenho sido um incentivador bem-intencionado. [F]",
	"Eu tenho sido um batalhador altamente motivado. [C]", 'F', 'C',
	&types_global.f_2, &types_global.c_3);

	/* Par de Frases 50 */
	stats_form("50.Quando conturbado, eu tendi a cismar com meus problemas. [E]", "Quando conturbado, eu tendi a achar distrações para mim. [I]", 'E', 'I', &types_global.e_4, &types_global.i_7);

	/* Par de Frases 51 */
	stats_form("51.Geralmente, eu tive fortes convicções e um senso de como as coisas\n"
	"devem ser. [D]", "Geralmente, eu tive sérias dúvidas e questionei como as coisas\n"
	"parecem ser. [H]", 'D', 'H', &types_global.d_1, &types_global.h_5);

	/* Par de Frases 52 */
	stats_form("52.Eu já tive problemas com os outros por ser pessimista e queixoso. [B]", "Eu já tive problemas com os outros por ser mandão e controlador. [G]", 'B', 'G', &types_global.b_6, &types_global.g_8);

	/* Par de Frases 53 */
	stats_form("53.Eu tendo a agir sob minhas emoções e \"deixar as coisas acontecerem\". [F]", "Eu tendo a não agir sob minhas emoções para que elas não provoquem\n"
	"mais problemas. [A]", 'F', 'A', &types_global.f_2, &types_global.a_9);

	/* Par de Frases 54 */
	stats_form("54.Ser o centro das atenções geralmente é algo natural para mim. [C]", "Ser o centro das atenções geralmente é algo estranho para mim. [E]", 'C', 'E', &types_global.c_3, &types_global.e_4);

	/* Par de Frases 55 */
	stats_form("55.Eu tenho sido cuidadoso e tentado me preparar para problemas imprevistos. [B]", "Eu tenho sido espontâneo e preferido improvisar conforme problemas aparecem. [I]", 
	'B', 'I', &types_global.b_6, &types_global.i_7);

	/* Par de Frases 56 */
	stats_form("56.Eu já fiquei irritado quando os outros não demonstraram apreciação suficiente\n"
	"pelo o que fiz por eles. [F]", "Eu já fiquei irritado quando os outros não seguiram o que eu disse a eles. [D]", 
	'F', 'D', &types_global.f_2, &types_global.d_1);

	/* Par de Frases 57 */
	stats_form("57.Ser independente e auto-suficiente tem sido importante para mim. [G]", "Ser valorizado e admirado tem sido importante para mim. [C]", 'G', 'C', &types_global.g_8, &types_global.c_3);

	/* Par de Frases 58 */
	stats_form("58.Quando debati com amigos, eu tendi a pressionar meus argumentos\n"
	"vigorosamente. [H]", "Quando debati com amigos, eu tendi a deixar passar para prevenir\n"
	"ressentimentos. [A]", 'H', 'A', &types_global.h_5, &types_global.a_9);

	/* Par de Frases 59 */
	stats_form("59.Eu frequentemente fui possessivo daqueles que amo – eu tive dificuldade em\n"
	"deixá-los. [F]", "Eu frequentemente \"testei\" aqueles que amo para ver se eles realmente\n"
	"estavam ali para mim. [B]", 'F', 'B', &types_global.f_2, &types_global.b_6);

	/* Par de Frases 60 */
	stats_form("60.Organizar recursos e fazer as coisas acontecerem tem sido uma das minhas\n"
	"maiores qualidades. [G]", "Ter novas ideias e deixar as pessoas animadas sobre elas tem sido uma das\n"
	"minhas maiores qualidades. [I]", 'G', 'I', &types_global.g_8, &types_global.i_7);

	/* Par de Frases 61 */
	stats_form("61.Eu tendi a ser motivado e bem duro comigo mesmo. [D]",
	"Eu tendi a ser muito emotivo e um tanto indisciplinado. [E]", 'D',
	'E', &types_global.d_1, &types_global.e_4);

	/* Par de Frases 62 */
	stats_form("62.Eu tenho tentado manter minha vida acelerada, intensa e animada. [I]", "Eu tenho tentado manter minha vida normal, estável e tranquila. [A]", 'I', 'A', &types_global.i_7, &types_global.a_9);

	/* Par de Frases 63 */
	stats_form("63.Embora tenha tido conquistas, eu tendi a duvidar das minhas habilidades. [B]", "Embora tenha tido contratempos, eu tive bastante confiança nas minhas\n"
	"habilidades. [C]", 'B', 'C', &types_global.b_6, &types_global.c_3);

	/* Par de Frases 64 */
	stats_form("64.Eu geralmente tendi a morar nas minhas emoções e me agarrar nelas por um\n"
	"bom tempo. [E]", "Eu geralmente tendi a minimizar minhas emoções e não prestar muita atenção\n"
	"nelas. [H]", 'E', 'H', &types_global.e_4, &types_global.h_5);

	/* Par de Frases 65 */
	stats_form("65.Eu já providenciei atenção e cuidados a muitas pessoas. [F]", "Eu já providenciei direção e motivação a muitas pessoas. [G]",
	'F', 'G', &types_global.f_2, &types_global.g_8);

	/* Par de Frases 66 */
	stats_form("66.Eu tenho sido um tanto sério e rigoroso comigo mesmo. [D]", "Eu tenho sido um tanto livre e permissivo comigo mesmo. [I]", 'D',
	'I', &types_global.d_1, &types_global.i_7);

	/* Par de Frases 67 */
	stats_form("67.Eu tenho sido auto-assertivo e motivado a ser o melhor. [C]", "Eu tenho sido modesto e estado feliz em ir no meu próprio ritmo. [A]", 'C', 'A', &types_global.c_3, &types_global.a_9);

	/* Par de Frases 68 */
	stats_form("68.Eu tenho me orgulhado da minha clareza e objetividade. [H]", "Eu tenho me orgulhado da minha confiabilidade e empenho. [B]",
	'H', 'B', &types_global.h_5, &types_global.b_6);

	/* Par de Frases 69 */
	stats_form("69.Eu passei muito tempo olhando para dentro – entender minhas emoções\n"
	"tem sido importante para mim. [E]", "Eu não passei muito tempo olhando para dentro – fazer as coisas tem\n"
	"sido importante para mim. [G]", 'E', 'G', &types_global.e_4, &types_global.g_8);

	/* Par de Frases 70 */
	stats_form("70.Geralmente, eu pensei de mim como uma pessoa positiva e casual. [A]", "Geralmente, eu pensei de mim como uma pessoa séria e solene. [D]", 'A', 'D', &types_global.a_9, &types_global.d_1);

	/* Par de Frases 71 */
	stats_form("71.Eu tenho tido uma mente ágil e energia ilimitada. [I]",
	"Eu tenho tido um coração atencioso e uma profunda dedicação. [F]",
	'I', 'F', &types_global.i_7, &types_global.f_2);

	/* Par de Frases 72 */
	stats_form("72.Eu tenho perseguido atividades que tinham um potencial substancial para\n"
	"recompensas e reconhecimento pessoal. [C]", "Eu tenho estado disposto a abrir mão de recompensas e reconhecimento pessoal\n"
	"se isso significava fazer aquilo que eu realmente estava interessado. [H]", 'C', 'H', &types_global.c_3, &types_global.h_5);

	/* Par de Frases 73 */
	stats_form("73.Cumprir obrigações sociais raramente foi uma prioridade minha. [E]", "Eu geralmente levei minhas obrigações sociais de forma bem séria. [B]", 'E', 'B', &types_global.e_4, &types_global.b_6);

	/* Par de Frases 74 */
	stats_form("74.Na maioria das situações, eu preferi assumir o comando. [G]", "Na maioria das situações, eu preferi deixar outra pessoa assumir o comando. [A]", 'G', 'A', &types_global.g_8, &types_global.a_9);

	/* Par de Frases 75 */
	stats_form("75.Ao longo dos anos, meus valores e estilo de vida mudaram várias vezes. [C]", "Ao longo dos anos, meus valores e estilo de vida permaneceram relativamente\n"
	"consistentes. [D]", 'C', 'D', &types_global.c_3, &types_global.d_1);

	/* Par de Frases 76 */
	stats_form("76.Tipicamente, eu não tive muita disciplina. [I]",
	"Tipicamente, eu não tive muita conexão com as pessoas. [H]", 'I',
	'H', &types_global.i_7, &types_global.h_5);

	/* Par de Frases 77 */
	stats_form("77.Eu tendi a reter meu afeto e desejar que os outros venham ao meu mundo. [E]",
	"Eu tendi a dar meu afeto muito abertamente e desejar em me estender aos\n"
	"outros. [F]", 'E', 'F', &types_global.e_4, &types_global.f_2);

	/* Par de Frases 78 */
	stats_form("78.Eu tenho tido uma tendência de pensar no pior. [B]",
	"Eu tenho tido uma tendência de pensar que tudo vai dar certo. [A]", 'B', 'A', &types_global.b_6, &types_global.a_9);

	/* Par de Frases 79 */
	stats_form("79.As pessoas têm confiado em mim porque eu sou confiante e posso cuidar\n"
	"delas. [G]", "As pessoas têm confiado em mim porque eu sou justo e vou fazer o que é\n"
	"certo. [D]", 'G', 'D', &types_global.g_8, &types_global.d_1);

	/* Par de Frases 80 */
	stats_form("80.Frequentemente, eu estive tão envolvido nos meus projetos que eu me tornei\n"
	"isolado dos outros. [H]", "Frequentemente, eu estive tão envolvido com os outros que eu negligenciei\n"
	"meus projetos. [F]", 'H', 'F', &types_global.h_5, &types_global.f_2);

	/* Par de Frases 81 */
	stats_form("81.Quando conheci uma pessoa nova, eu geralmente fui elegante e contido. [C]",
	"Quando conheci uma pessoa nova, eu geralmente fui falante e divertido. [I]", 'C', 'I', &types_global.c_3, &types_global.i_7);

	/* Par de Frases 82 */
	stats_form("82.De forma geral, eu tendi a ser pessimista. [E]",
	"De forma geral, eu tendi a ser otimista. [A]", 'E', 'A', &types_global.e_4, &types_global.a_9);

	/* Par de Frases 83 */
	stats_form("83.Eu tenho preferido habitar meu próprio mundinho. [H]",
	"Eu tenho preferido deixar que o mundo saiba que eu estou aqui. [G]", 'H', 'G', &types_global.h_5, &types_global.g_8);

	/* Par de Frases 84 */
	stats_form("84.Eu frequentemente fui perturbado por ansiedade, insegurança e dúvidas. [B]", "Eu frequentemente fui perturbado por raiva, perfeccionismo e impaciência. [D]", 
	'B', 'D', &types_global.b_6, &types_global.d_1);

	/* Par de Frases 85 */
	stats_form("85.Eu reconheço que eu frequentemente fui pessoal e íntimo de mais. [F]", "Eu reconheço que eu frequentemente fui frio e indiferente de mais. [C]", 'F', 'C', &types_global.f_2, &types_global.c_3);

	/* Par de Frases 86 */
	stats_form("86.Eu já fui prejudicado por não sentir disposto a agarrar oportunidades. [E]", "Eu já fui prejudicado por perseguir possibilidades de mais. [I]", 'E', 'I', &types_global.e_4, &types_global.i_7);

	/* Par de Frases 87 */
	stats_form("87.Eu tendi a levar muito tempo para agir. [H]",
	"Eu tendi a agir rapidamente. [D]", 'H', 'D', &types_global.h_5,
	&types_global.d_1);

	/* Par de Frases 88 */
	stats_form("88. Eu geralmente tive dificuldade em tomar decisões. [B]",
	"Eu raramente tive dificuldade em tomar decisões. [G]", 'B', 'G',
	&types_global.b_6, &types_global.g_8);

	/* Par de Frases 89 */
	stats_form("89.Eu tenho tido uma tendência de parecer muito intenso às pessoas. [F]", "Eu tenho tido uma tendência de não me impor tanto com as pessoas. [A]", 'F', 'A', &types_global.f_2, &types_global.a_9);

	/* Par de Frases 90 */
	stats_form("90.Tipicamente, eu fui equilibrado. [C]",
	"Tipicamente, eu tive fortes mudanças de humor. [E]", 'C',
	'E', &types_global.c_3, &types_global.e_4);

	/* Par de Frases 91 */
	stats_form("91.Quando estive incerto do que fazer, eu frequentemente busquei conselhos\n"
	"dos outros. [B]", "Quando estive incerto do que fazer, eu tentei diferentes coisas para ver\n"
	"o que funcionava melhor para mim. [I]", 'B', 'I', &types_global.b_6, &types_global.i_7);

	/* Par de Frases 92 */
	stats_form("92.Eu tenho me preocupado em ser deixado de fora das atividades dos outros. [F]",
	"Eu tenho me preocupado que as atividades dos outros me distraiam do que eu\n"
	"tenho que fazer. [D]", 'F', 'D', &types_global.f_2, &types_global.d_1);

	/* Par de Frases 93 */
	stats_form("93.Tipicamente, quando eu fiquei nervoso, eu repreendi as pessoas. [G]", "Tipicamente, quando eu fiquei nervoso, eu me tornei distante. [C]", 'G', 'C', &types_global.g_8, &types_global.c_3);

	/* Par de Frases 94 */
	stats_form("94.Eu tendi a ter dificuldade em cair no sono. [H]",
	"Eu tendi a cair no sono facilmente. [A]", 'H', 'A',
	&types_global.h_5, &types_global.a_9);

	/* Par de Frases 95 */
	stats_form("95.Eu frequentemente tentei descobrir como ficar mais próximo dos outros. [F]", "Eu frequentemente tentei descobrir o que os outros queriam de mim. [B]", 'F', 'B', &types_global.f_2, &types_global.b_6);

	/* Par de Frases 96 */
	stats_form("96.Eu geralmente fui comedido, franco e deliberado. [G]",
	"Eu geralmente fui animado, espirituoso e falei rápido. [I]", 'G',
	'I', &types_global.g_8, &types_global.i_7);

	/* Par de Frases 97 */
	stats_form("97.Frequentemente, eu não me manifestei quando vi os outros cometendo um\n"
	"erro. [E]", "Frequentemente, eu ajudei os outros a verem que eles estavam cometendo um\n"
	"erro. [D]", 'E', 'D', &types_global.e_4, &types_global.d_1);

	/* Par de Frases 98 */
	stats_form("98.Durante a maior parte da minha vida, eu fui uma pessoa turbulenta\n"
	"que teve muitas emoções voláteis. [I]", "Durante a maior parte da minha vida, eu fui uma pessoa estável onde\n"
	"a \"água silenciosa é a mais perigosa\". [A]",
	'I', 'A', &types_global.i_7, &types_global.a_9);

	/* Par de Frases 99 */
	stats_form("99.Quando não gostei de alguém, eu geralmente tentei me manter cordial –\n"
	"apesar das minhas emoções. [C]", "Quando não gostei de alugém, eu geralmente os deixei saber disso – de uma\n"
	"forma ou de outra. [B]", 'C', 'B', &types_global.c_3, &types_global.b_6);

	/* Par de Frases 100 */
	stats_form("100.Muito da minha dificuldade com as pessoas vem da minha sensibilidade e levar\n"
	"tudo no lado pessoal. [E]", "Muito da minha dificuldade com as pessoas vem de eu não me importar com\n"
	"convenções sociais. [H]", 'E', 'H', &types_global.e_4, &types_global.h_5);

	/* Par de Frases 101 */
	stats_form("101.Minha abordagem tem sido de me meter e resgatar as pessoas. [F]", "Minha abordagem tem sido mostrar às pessoas como se ajudarem. [G]", 'F', 'G', &types_global.f_2, &types_global.g_8);

	/* Par de Frases 102 */
	stats_form("102.Geralmente, eu desfrutei de \"me deixar levar\" e levar as coisas a seus\n"
	"limites. [I]", "Geralmente, eu não gostei muito de perder controle sobre mim mesmo. [D]", 'I', 'D', &types_global.i_7, &types_global.d_1);

	/* Par de Frases 103 */
	stats_form("103.Eu estive preocupado de mais em fazer as coisas melhor que os outros. [C]", "Eu estive preocupado de mais em fazer das coisas agradáveis aos outros. [A]", 'C', 'A', &types_global.c_3, &types_global.a_9);

	/* Par de Frases 104 */
	stats_form("104.Meus pensamentos geralmente são especulativos, envolvendo minha imaginação\n"
	"e curiosidade. [H]", "Meus pensamentos geralmente são práticos – apenas tentando manter as coisas\n"
	"andando. [B]", 'H', 'B', &types_global.h_5, &types_global.b_6);

	/* Par de Frases 105 */
	stats_form("105.Um dos meus recursos tem sido minha habilidade de tomar controle das\n"
	"situações. [G]", "Um dos meus recursos tem sido minha habilidade de descrever estados\n"
	"internos. [E]", 'G', 'E', &types_global.g_8, &types_global.e_4);

	/* Par de Frases 106 */
	stats_form("106.Eu pressionei para que as coisas fossem feitas corretamente, até se isso\n"
	"deixasse as pessoas desconfortáveis. [D]", "Eu não gosto de me sentir pressionado, então eu não tenho gostado de\n"
	"pressionar os outros. [A]", 'D', 'A', &types_global.d_1, &types_global.a_9);

	/* Par de Frases 107 */
	stats_form("107.Eu frequentemente me orgulhei no quão importante eu sou na vida dos\n"
	"outros. [F]", "Eu frequentemente me orgulhei do meu gosto e receptividade a novas\n"
	"experiências. [I]", 'F', 'I', &types_global.f_2, &types_global.i_7);

	/* Par de Frases 108 */
	stats_form("108.Eu percebi que eu frequentemente pareço aos outros alguém\n"
	"apresentável, até admirável. [C]", "Eu percebi que eu frequentemente pareço aos outros alguém incomum,\n"
	"até estranho. [H]", 'C', 'H', &types_global.c_3, &types_global.h_5);

	/* Par de Frases 109 */
	stats_form("109.Eu geralmente fiz aquilo que eu tinha que fazer. [B]",
	"Eu geralmente fiz aquilo que eu quis fazer. [E]", 'B', 'E',
	&types_global.b_6, &types_global.e_4);

	/* Par de Frases 110 */
	stats_form("110.Eu geralmente gostei de situações de alta pressão, e até difíceis. [G]", "Eu geralmente não gostei de estar em situações de alta pressão, e até\n"
	"difíceis. [A]", 'G', 'A', &types_global.g_8, &types_global.a_9);

	/* Par de Frases 111 */
	stats_form("111.Eu tenho me orgulhado da minha habilidade de ser flexível – o que é\n"
	"apropriado ou importante frequentemente muda. [C]", "Eu tenho me orgulhado da minha habilidade de me posicionar sobre algo – eu\n"
	"tenho sido firme sobre o que acredito. [D]", 
	'C', 'D', &types_global.c_3, &types_global.d_1);

	/* Par de Frases 112 */
	stats_form("112.Meu estilo pende à economia e austeridade. [H]",
	"Meu estilo pende ao excesso e ao exagero. [I]", 'H',
	'I', &types_global.h_5, &types_global.i_7);

	/* Par de Frases 113 */
	stats_form("113.Minha própria saúde e bem-estar sofreram por causa do meu forte desejo de\n"
	"ajudar os outros. [F]", "Minhas relações sofreram por causa dos meus fortes desejos de atender às\n"
	"minhas necessidades pessoais. [E]", 'F', 'E', &types_global.f_2, &types_global.e_4);

	/* Par de Frases 114 */
	stats_form("114.De forma geral, eu fui muito aberto e ingênuo. [A]",
	"De forma geral, eu fui muito cauteloso e guardado. [B]", 'A', 'B',
	&types_global.a_9, &types_global.b_6);

	/* Par de Frases 115 */
	stats_form("115.Eu às vezes desconcertei as pessoas por ser muito agressivo. [G]", "Eu às vezes desconcertei as pessoas por ser muito \"rígido\". [D]", 'G', 'D', &types_global.g_8, &types_global.d_1);

	/* Par de Frases 116 */
	stats_form("116.Estar ao serviço dos outros e atender às suas necessidades tem sido uma\n"
	"prioridade minha. [F]", "Encontrar formas alternativas de ver e fazer as coisas tem sido uma\n"
	"prioridade minha. [H]", 'F', 'H', &types_global.f_2, &types_global.h_5);

	/* Par de Frases 117 */
	stats_form("117.Eu fui firme e persistente na minha busca pelos meus objetivos. [C]", "Eu preferi explorar diferentes caminhos para ver onde eles dariam. [I]", 'C', 'I', &types_global.c_3, &types_global.i_7);

	/* Par de Frases 118 */
	stats_form("118.Eu fui frequentemente atraído por situações que provocam emoções profundas\n"
	"e intensas. [E]", "Eu fui frequentemente atraído por situações que me fazem sentir calmo e\n"
	"em paz. [A]", 'E', 'A', &types_global.e_4, &types_global.a_9);

	/* Par de Frases 119 */
	stats_form("119.Eu tenho me importado menos sobre resultados práticos do que em perseguir\n"
	"meus interesses. [H]", "Eu tenho sido prático e esperado que meu trabalho tenha resultados\n"
	"concretos. [G]", 'H', 'G', &types_global.h_5, &types_global.g_8);

	/* Par de Frases 120 */
	stats_form("120.Eu tenho tido um desejo profundo de pertencer. [B]",
	"Eu tenho tido um desejo profundo de me sentir equilibrado. [D]",
	'B', 'D', &types_global.b_6, &types_global.d_1);

	/* Par de Frases 121 */
	stats_form("121.No passado, eu provavelmente insisti de mais em proximidade nas minhas\n"
	"amizades. [F]", "No passado, eu provavelmente manti muita distância nas minhas relações. [C]", 'F', 'C', &types_global.f_2, &types_global.c_3);

	/* Par de Frases 122 */
	stats_form("122.Eu tenho tido uma tendência de ficar pensando sobre as\n"
	"coisas do passado. [E]", "Eu tenho tido uma tendência de ficar antecipando as coisas que eu vou fazer. [I]", 
	'E', 'I', &types_global.e_4, &types_global.i_7);

	/* Par de Frases 123 */
	stats_form("123.Eu tendi a ver as pessoas como intrusivas e exigentes. [H]", "Eu tendi a ver as pessoas como desorganizadas e irresponsáveis. [D]", 'H', 'D', &types_global.h_5, &types_global.d_1);

	/* Par de Frases 124 */
	stats_form("124.Geralmente, eu não tive muita confiança em mim mesmo. [B]", "Geralmente, eu tive confiança apenas em mim mesmo. [G]", 'B', 'G', &types_global.b_6, &types_global.g_8);

	/* Par de Frases 125 */
	stats_form("125.Eu provavelmente fui muito passivo e de fora das coisas. [A]", "Eu provavelmente fui muito controlador e manipulativo. [F]", 'A', 'F', &types_global.a_9, &types_global.f_2);

	/* Par de Frases 126 */
	stats_form("126.Eu frequentemente fui parado no meu percurso pela minha insegurança. [E]", "Eu raramente deixei a insegurança ficar no caminho. [C]", 'E', 'C', &types_global.e_4, &types_global.c_3);

	/* Par de Frases 127 */
	stats_form("127.Podendo escolher entre algo familiar e algo novo, eu geralmente escolheria\n"
	"algo novo. [I]", "Eu geralmente escolhi aquilo que eu sabia que eu já gostava: por que me\n"
	"desapontar com algo que eu posso não gostar? [B]", 'I', 'B', &types_global.i_7, &types_global.b_6);

	/* Par de Frases 128 */
	stats_form("128.Eu dei muito contato físico para assegurar os outros de como eu me sinto\n"
	"sobre eles. [F]", "Eu geralmente senti que amor verdadeiro não depende de contato físico. [D]", 'F', 'D', &types_global.f_2, &types_global.d_1);

	/* Par de Frases 129 */
	stats_form("129.Quando eu precisei confrontar alguém, eu frequentemente fui muito ríspido\n"
	"e direto. [G]", "Quando eu precisei confrontar alguém, eu frequentemente enrolei de mais. [C]", 'G', 'C', &types_global.g_8, &types_global.c_3);

	/* Par de Frases 130 */
	stats_form("130.Eu tenho sido atraído por assuntos que os outros provavelmente achariam\n"
	"perturbadores, até assustadores. [H]", "Eu tenho preferido não passar meu tempo focando em assuntos perturbadores\n"
	"e assustadores. [A]", 'H', 'A', &types_global.h_5, &types_global.a_9);

	/* Par de Frases 131 */
	stats_form("131.Eu já tive problemas com as pessoas por ser muito intrusivo e\n"
	"interferente. [F]", "Eu já tive problemas com as pessoas por ser muito evasivo e taciturno. [B]", 'F', 'B', &types_global.f_2, &types_global.b_6);

	/* Par de Frases 132 */
	stats_form("132.Eu tenho me preocupado que eu não tenha os recursos para cumprir as\n"
	"responsabilidades que eu tomei para mim. [G]", "Eu tenho me preocupado que eu não tenha a disciplina para focar no que\n"
	"realmente vai me satisfazer. [I]", 'G', 'I', &types_global.g_8, &types_global.i_7);

	/* Par de Frases 133 */
	stats_form("133.Geralmente, eu fui uma pessoa altamente intuitiva e\n"
	"individualista. [E]", "Geralmente, eu fui uma pessoa altamente organizada e responsável. [D]", 'E', 'D', &types_global.e_4, &types_global.d_1);

	/* Par de Frases 134 */
	stats_form("134.Superar a inércia tem sido um dos meus principais problemas. [A]", "Ser incapaz de desacelerar tem sido um dos meus principais problemas. [I]", 'A', 'I', &types_global.a_9, &types_global.i_7);

	/* Par de Frases 135 */
	stats_form("135.Quando eu me senti inseguro, eu reagi me tornando arrogante e\n"
	"depreciativo. [C]", "Quando eu me senti inseguro, eu reagi me tornando defensivo e argumentativo. [B]", 'C', 'B', &types_global.c_3, &types_global.b_6);

	/* Par de Frases 136 */
	stats_form("136.Eu geralmente tenho sido mente-aberta e disposto a tentar novas\n"
	"abordagens. [H]", "Eu geralmente tenho sido auto-revelador e disposto a compartilhar meus\n"
	"sentimentos com os outros. [E]", 'H', 'E', &types_global.h_5, &types_global.e_4);

	/* Par de Frases 137 */
	stats_form("137.Eu me apresento como sendo mais durão do que realmente sou. [G]", "Eu me apresento como me importando mais do que realmente faço. [F]", 'G', 'F', &types_global.g_8, &types_global.f_2);

	/* Par de Frases 138 */
	stats_form("138.Eu geralmente segui minha consciência e razão. [D]",
	"Eu geralmente segui meus sentimentos e impulsos. [I]", 'D', 'I',
	&types_global.d_1, &types_global.i_7);

	/* Par de Frases 139 */
	stats_form("139.Adversidades sérias fizeram-me sentir calejado e resoluto. [C]", "Adversidades sérias fizeram-me sentir desencorajado e resignado. [A]", 'C', 'A', &types_global.c_3, &types_global.a_9);

	/* Par de Frases 140 */
	stats_form("140.Eu geralmente me certifiquei de que eu tinha algo ou alguém para me ajudar. [B]", "Eu geralmente escolhi viver no limite e depender dos outros o mínimo\n"
	"possível. [H]", 'B', 'H', &types_global.b_6, &types_global.h_5);

	/* Par de Frases 141 */
	stats_form("141.Eu tive que ser forte pelos outros, então eu não tenho tido tempo para\n"
	"lidar com minhas emoções e medos. [G]", "Eu tenho tido dificuldade em lidar com minhas emoções e medos, então tem\n"
	"sido difícil para mim de ser forte pelos outros. [E]",
	'G', 'E', &types_global.g_8, &types_global.e_4);

	/* Par de Frases 142 */
	stats_form("142.Eu frequentemente ponderei sobre o porquê das pessoas focarem no negativo\n"
	"quando há tanta coisa maravilhosa sobre a vida. [A]", "Eu frequentemente ponderei sobre o porquê das pessoas serem tão felizes\n"
	"quando tanta coisa na vida é falha. [D]",
	'A', 'D', &types_global.a_9, &types_global.d_1);

	/* Par de Frases 143 */
	stats_form("143.Eu tenho tentado bastante não parecer uma pessoa egoísta. [F]", "Eu tenho tentado bastante não parecer uma pessoa entediante. [I]", 'F', 'I', &types_global.f_2, &types_global.i_7);

	/* Par de Frases 144 */
	stats_form("144.Eu evitei intimidade quando eu temi que eu fosse ser sobrecarregado\n"
	"pelas necessidades e exigências das pessoas. [H]", "Eu evitei intimidade quando eu temi que eu não fosse ser capaz de atender\n"
	"às expectativas das pessoas sobre mim. [C]", 
	'H', 'C', &types_global.h_5, &types_global.c_3);
}
