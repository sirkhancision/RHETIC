#include "../../include/statements_pt.h"
#include "../../include/statements_en.h"
#include "../../include/types.h"
#include <stdio.h>

/* Imprimir cada par de frases do teste em Português(BR) */
void statements_portuguese(TYPE *types) {
  /* Par de Frases 1 */
  statement("Eu tenho sido romântico e imaginativo.",
            "Eu tenho sido pragmático e pé-no-chão.", 'E', 'B', &types->e_4,
            &types->b_6);

  /* Par de Frases 2 */
  statement("Eu tenho tendido a enfrentar confrontos.",
            "Eu tenho tendido a evitar confrontos.", 'G', 'A', &types->g_8,
            &types->a_9);

  /* Par de Frases 3 */
  statement("Eu normalmente tenho sido diplomático, encantador e ambicioso.",
            "Eu normalmente tenho sido direto, formal e idealista.", 'C', 'D',
            &types->c_3, &types->d_1);

  /* Par de Frases 4 */
  statement("Eu tenho tendido a ser focado e intenso.",
            "Eu tenho tendido a ser espontâneo e um amante da diversão.", 'H',
            'I', &types->h_5, &types->i_7);

  /* Par de Frases 5 */
  statement("Eu tenho sido uma pessoa hospitaleira e tenho gostado de "
            "receber novos "
            "amigos na minha vida.",
            "Eu tenho sido uma pessoa reservada e não tenho me misturado "
            "muito com os outros.",
            'F', 'E', &types->f_2, &types->e_4);

  /* Par de Frases 6 */
  statement("Tem sido difícil para mim relaxar e parar de me preocupar com "
            "possíveis problemas.",
            "Tem sido difícil para mim me agitar com possíveis problemas.", 'B',
            'A', &types->b_6, &types->a_9);

  /* Par de Frases 7 */
  statement("Eu tenho sido um sobrevivente com \"malícia\".",
            "Eu tenho sido um idealista \"elevado\".", 'G', 'D', &types->g_8,
            &types->d_1);

  /* Par de Frases 8 */
  statement("Eu precisei demonstrar afeto às pessoas.",
            "Eu precisei manter uma certa distância das pessoas.", 'F', 'H',
            &types->f_2, &types->h_5);

  /* Par de Frases 9 */
  statement("Quando apresentado a uma nova experiência, eu geralmente me "
            "perguntei se "
            "ela seria útil para mim.",
            "Quando apresentado a uma nova experiência, eu geralmente me "
            "perguntei se "
            "seria agradável.",
            'C', 'I', &types->c_3, &types->i_7);

  /* Par de Frases 10 */
  statement("Eu tenho tendido a focar muito em mim mesmo.",
            "Eu tenho tendido a focar muito nos outros.", 'E', 'A', &types->e_4,
            &types->a_9);

  /* Par de Frases 11 */
  statement("Os outros têm dependido da minha perspicácia e conhecimento.",
            "Os outros têm dependido da minha força e decisão.", 'H', 'G',
            &types->h_5, &types->g_8);

  /* Par de Frases 12 */
  statement("Eu tenho dado a impressão de ser muito inseguro.",
            "Eu tenho dado a impressão de ser muito seguro de si.", 'B', 'D',
            &types->b_6, &types->d_1);

  /* Par de Frases 13 */
  statement("Eu tenho sido mais orientado a relacionamentos do que a "
            "objetivos.",
            "Eu tenho sido mais orientado a objetivos do que a "
            "relacionamentos.",
            'F', 'C', &types->f_2, &types->c_3);

  /* Par de Frases 14 */
  statement("Eu não tenho conseguido me defender muito bem.",
            "Eu tenho sido franco – eu disse o que os outros desejavam ter a "
            "coragem de dizer.",
            'E', 'I', &types->e_4, &types->i_7);

  /* Par de Frases 15 */
  statement(
      "Tem sido difícil para mim parar de considerar alternativas e fazer "
      "algo definitivo.",
      "Tem sido difícil para mim relaxar e ser mais flexível.", 'H', 'D',
      &types->h_5, &types->d_1);

  /* Par de Frases 16 */
  statement("Eu tenho tendido a ser cuidadoso e hesitante.",
            "Eu tenho tendido a ser audacioso e dominador.", 'B', 'G',
            &types->b_6, &types->g_8);

  /* Par de Frases 17 */
  statement(
      "Minha relutância em me envolver demais tem me causado problemas com "
      "as pessoas.",
      "Minha vontade de ter as pessoas dependendo de mim tem me causado "
      "problemas "
      "com elas.",
      'A', 'F', &types->a_9, &types->f_2);

  /* Par de Frases 18 */
  statement("Normalmente, eu tenho sido capaz de deixar meus sentimentos "
            "de lado para "
            "cumprir o trabalho.",
            "Normalmente, eu precisei trabalhar nos meus sentimentos antes de "
            "agir.",
            'C', 'E', &types->c_3, &types->e_4);

  /* Par de Frases 19 */
  statement("Geralmente, eu tenho sido metódico e cauteloso.",
            "Geralmente, eu tenho sido aventureiro e arriscado.", 'B', 'I',
            &types->b_6, &types->i_7);

  /* Par de Frases 20 */
  statement("Eu tenho tendido a ser uma pessoa solidária e generosa, que "
            "busca intimidade com os outros.",
            "Eu tenho tendido a ser uma pessoa séria e reservada, que gosta "
            "de discutir "
            "questões.",
            'F', 'D', &types->f_2, &types->d_1);

  /* Par de Frases 21 */
  statement("Eu frequentemente senti a necessidade de ser um \"pilar de "
            "força\".",
            "Eu frequentemente senti a necessidade de realizar algo "
            "perfeitamente.",
            'G', 'C', &types->g_8, &types->c_3);

  /* Par de Frases 22 */
  statement(
      "Eu normlamente tenho interesse em fazer perguntas difíceis e manter "
      "minha independência.",
      "Eu normalmente tenho interesse em manter minha estabilidade e paz "
      "de espírito.",
      'H', 'A', &types->h_5, &types->a_9);

  /* Par de Frases 23 */
  statement("Eu tenho sido um pouco cínico e cético.",
            "Eu tenho sido um pouco sentimental e emotivo.", 'B', 'F',
            &types->b_6, &types->f_2);

  /* Par de Frases 24 */
  statement("Eu costumo me preocupar em estar perdendo algo melhor.",
            "Eu costumo me preocupar em ser explorado se abaixar minha guarda.",
            'I', 'G', &types->i_7, &types->g_8);

  /* Par de Frases 25 */
  statement("Meu hábito de me \"excluir\" tem irritado as pessoas.",
            "Meu hábito de dizer às pessoas o que fazer tem as irritado.", 'E',
            'D', &types->e_4, &types->d_1);

  /* Par de Frases 26 */
  statement("Eu tenho tendido a ficar ansioso se houver muita agitação e "
            "estímulo.",
            "Eu tenho tendido a ficar ansioso se não houver agitação e "
            "estímulo suficientes.",
            'A', 'I', &types->a_9, &types->i_7);

  /* Par de Frases 27 */
  statement("Eu tenho dependido dos meus amigos e eles sabem que podem "
            "depender de mim.",
            "Eu não tenho dependido das pessoas, tenho feito as coisas "
            "sozinho.",
            'B', 'C', &types->b_6, &types->c_3);

  /* Par de Frases 28 */
  statement("Eu tenho tendido a ser distante e preocupado.",
            "Eu tenho tendido a ser melancólico e absorto em mim mesmo.", 'H',
            'E', &types->h_5, &types->e_4);

  /* Par de Frases 29 */
  statement("Eu gostava de desafiar as pessoas e abalá-las.",
            "Eu gostava de confortar as pessoas e acalmá-las.", 'G', 'F',
            &types->g_8, &types->f_2);

  /* Par de Frases 30 */
  statement("Eu geralmente fui uma pessoa extrovertida e sociável.",
            "Eu geralmente fui uma pessoa séria e disciplinada.", 'I', 'D',
            &types->i_7, &types->d_1);

  /* Par de Frases 31 */
  statement("Eu tenho desejado \"me encaixar\" com os outros – eu fico "
            "desconfortável "
            "quando me destaco de mais.",
            "Eu tenho desejado me destacar dos demais – eu fico "
            "desconfortável quando não "
            "me distingo.",
            'A', 'C', &types->a_9, &types->c_3);

  /* Par de Frases 32 */
  statement(
      "Perseguir meus interesses pessoais tem sido mais importante para mim "
      "do que "
      "ter estabilidade e segurança.",
      "Ter estabilidade e segurança tem sido mais importante para mim do que "
      "perseguir meus interesses pessoais.",
      'H', 'B', &types->h_5, &types->b_6);

  /* Par de Frases 33 */
  statement("Quando eu tive conflitos com os outros, eu tendi a me afastar.",
            "Quando eu tive conflitos com os outros, raramente recuei.", 'E',
            'G', &types->e_4, &types->g_8);

  /* Par de Frases 34 */
  statement("Eu tenho cedido muito facilmente e deixado que os outros me "
            "dominem.",
            "Eu tenho sido muito inflexível e exigente com os outros.", 'A',
            'D', &types->a_9, &types->d_1);

  /* Par de Frases 35 */
  statement("Eu tenho sido apreciado pela minha determinação e "
            "desenvoltura.",
            "Eu tenho sido apreciado pela minha preocupação e calor humano "
            "pessoal.",
            'I', 'F', &types->i_7, &types->f_2);

  /* Par de Frases 36 */
  statement("Eu tenho desejado causar uma boa impressão aos outros.",
            "Eu não tenho me importado muito em causar uma boa impressão aos "
            "outros.",
            'C', 'H', &types->c_3, &types->h_5);

  /* Par de Frases 37 */
  statement("Eu tenho dependido da minha perseverança e bom senso.",
            "Eu tenho dependido da minha imaginação e momentos de inspiração.",
            'B', 'E', &types->b_6, &types->e_4);

  /* Par de Frases 38 */
  statement("Basicamente, tenho sido tranquilo e conciliador.",
            "Basicamente, tenho sido determinado e assertivo.", 'A', 'G',
            &types->a_9, &types->g_8);

  /* Par de Frases 39 */
  statement("Eu trabalhei duro para ser aceito e querido.",
            "Ser aceito e querido não tem sido uma alta prioridade para mim.",
            'C', 'D', &types->c_3, &types->d_1);

  /* Par de Frases 40 */
  statement("Em reação à pressão dos outros, eu me tornei mais reservado.",
            "Em reação à pressão dos outros, eu me tornei mais assertivo.", 'H',
            'I', &types->h_5, &types->i_7);

  /* Par de Frases 41 */
  statement("As pessoas se interessaram em mim porque fui extrovertido, "
            "envolvente, e "
            "interessado nelas.",
            "As pessoas se interessaram em mim porque fui quieto, incomum "
            "e profundo.",
            'F', 'E', &types->f_2, &types->e_4);

  /* Par de Frases 42 */
  statement("Dever e responsabilidade têm sido valores importantes para mim.",
            "Harmonia e aceitação têm sido valores importantes para mim.", 'B',
            'A', &types->b_6, &types->a_9);

  /* Par de Frases 43 */
  statement("Eu tentei motivar as pessoas fazendo grandes planos e promessas.",
            "Eu tentei motivar as pessoas apontando as consequências de não "
            "seguir meus conselhos.",
            'G', 'D', &types->g_8, &types->d_1);

  /* Par de Frases 44 */
  statement("Eu raramente fui emocionalmente demonstrativo.",
            "Eu frequentemente fui emocionalmente demonstrativo.", 'H', 'F',
            &types->h_5, &types->f_2);

  /* Par de Frases 45 */
  statement("Lidar com detalhes não tem sido um dos meus pontos fortes.",
            "Eu me destaquei em lidar com detalhes.", 'I', 'C', &types->i_7,
            &types->c_3);

  /* Par de Frases 46 */
  statement("Eu tenho enfatizado frequentemente o quão diferente eu sou "
            "das outras "
            "pessoas, especialmente da minha família.",
            "Eu tenho enfatizado frequentemente o quanto eu tenho em comum "
            "com a maioria das "
            "pessoas, especialmente a minha família.",
            'E', 'A', &types->e_4, &types->a_9);

  /* Par de Frases 47 */
  statement("Quando as coisas esquentaram, eu tendi a ficar nos bastidores.",
            "Quando as coisas esquentaram, eu tendi a ficar bem no meio "
            "delas.",
            'H', 'G', &types->h_5, &types->g_8);

  /* Par de Frases 48 */
  statement("Eu tenho ficado do lado dos meus amigos, até quando eles "
            "estiveram errados.",
            "Eu não quis comprometer o que é certo, nem mesmo por amizade.",
            'B', 'D', &types->b_6, &types->d_1);

  /* Par de Frases 49 */
  statement("Eu tenho sido um apoiador bem-intencionado.",
            "Eu tenho sido um batalhador altamente motivado.", 'F', 'C',
            &types->f_2, &types->c_3);

  /* Par de Frases 50 */
  statement("Quando conturbado, eu tendi a remoer meus problemas.",
            "Quando conturbado, eu tendi a encontrar distrações para mim.", 'E',
            'I', &types->e_4, &types->i_7);

  /* Par de Frases 51 */
  statement(
      "Geralmente, eu tive convicções fortes e uma noção de como as coisas "
      "deveriam ser.",
      "Geralmente, eu tive sérias dúvidas e questionei como as coisas "
      "pareciam ser.",
      'D', 'H', &types->d_1, &types->h_5);

  /* Par de Frases 52 */
  statement("Eu criei problemas com os outros sendo pessimista e reclamão.",
            "Eu criei problemas com os outros sendo mandão e controlador.", 'B',
            'G', &types->b_6, &types->g_8);

  /* Par de Frases 53 */
  statement("Eu tendi a agir sob minhas emoções e \"deixar as coisas "
            "acontecerem\".",
            "Eu tendi a não agir sob minhas emoções para evitar causar "
            "mais problemas.",
            'F', 'A', &types->f_2, &types->a_9);

  /* Par de Frases 54 */
  statement("Ser o centro das atenções geralmente me pareceu natural.",
            "Ser o centro das atenções geralmente me pareceu estranho.", 'C',
            'E', &types->c_3, &types->e_4);

  /* Par de Frases 55 */
  statement("Eu tenho sido cuidadoso e tenho tentado me preparar para "
            "problemas imprevistos.",
            "Eu tenho sido espontâneo e preferido improvisar conforme os "
            "problemas surgem.",
            'B', 'I', &types->b_6, &types->i_7);

  /* Par de Frases 56 */
  statement("Eu fiquei com raiva quando os outros não mostraram apreciação "
            "suficiente "
            "pelo o que fiz por eles.",
            "Eu fiquei com raiva quando os outros não ouviram o que eu disse "
            "a eles.",
            'F', 'D', &types->f_2, &types->d_1);

  /* Par de Frases 57 */
  statement("Ser independente e auto-suficiente tem sido importante para mim.",
            "Ser valorizado e admirado tem sido importante para mim.", 'G', 'C',
            &types->g_8, &types->c_3);

  /* Par de Frases 58 */
  statement("Quando debati com amigos, tendi a pressionar meus argumentos "
            "fortemente.",
            "Quando debati com amigos, tendi a deixar as coisas passarem para "
            "evitar "
            "ressentimentos.",
            'H', 'A', &types->h_5, &types->a_9);

  /* Par de Frases 59 */
  statement(
      "Eu muitas vezes fui possessivo em relação àqueles que amo – tive "
      "dificuldade em "
      "deixá-los em paz.",
      "Eu muitas vezes \"testei\" aqueles que amo para ver se eles realmente "
      "estavam lá para mim.",
      'F', 'B', &types->f_2, &types->b_6);

  /* Par de Frases 60 */
  statement("Organizar recursos e fazer as coisas acontecerem tem sido uma "
            "das minhas "
            "maiores qualidades.",
            "Ter novas ideias e animar as pessoas com elas tem sido uma das "
            "minhas maiores qualidades.",
            'G', 'I', &types->g_8, &types->i_7);

  /* Par de Frases 61 */
  statement("Eu tendi a ser motivado e bem exigente comigo mesmo.",
            "Eu tendi a ser muito emotivo e um tanto indisciplinado.", 'D', 'E',
            &types->d_1, &types->e_4);

  /* Par de Frases 62 */
  statement("Eu tentei manter minha vida acelerada, intensa e animada.",
            "Eu tentei manter minha vida normal, estável e tranquila.", 'I',
            'A', &types->i_7, &types->a_9);

  /* Par de Frases 63 */
  statement(
      "Mesmo tendo tido sucesso, tendi a duvidar das minhas habilidades.",
      "Mesmo tendo tido contratempos, sempre tive muita confiança nas minhas "
      "habilidades.",
      'B', 'C', &types->b_6, &types->c_3);

  /* Par de Frases 64 */
  statement("Eu geralmente tenho tendido a me apegar aos meus sentimentos "
            "e me agarrar neles por "
            "muito tempo.",
            "Eu geralmente tenho tendido a minimizar meus sentimentos e não "
            "prestar muita atenção "
            "neles.",
            'E', 'H', &types->e_4, &types->h_5);

  /* Par de Frases 65 */
  statement(
      "Eu tenho proporcionado muitas pessoas com atenção e apoio emocional.",
      "Eu tenho proporcionado muitas pessoas com direção e motivação.", 'F',
      'G', &types->f_2, &types->g_8);

  /* Par de Frases 66 */
  statement(
      "Eu tenho sido um pouco sério e rigoroso comigo mesmo.",
      "Eu tenho sido um pouco descompromissado e permissivo comigo mesmo.", 'D',
      'I', &types->d_1, &types->i_7);

  /* Par de Frases 67 */
  statement("Eu tenho sido auto-assertivo e motivado a ser o melhor.",
            "Eu tenho sido modesto e estado feliz em ir no meu próprio ritmo.",
            'C', 'A', &types->c_3, &types->a_9);

  /* Par de Frases 68 */
  statement("Eu tenho me orgulhado da minha clareza e objetividade.",
            "Eu tenho me orgulhado da minha confiabilidade e comprometimento.",
            'H', 'B', &types->h_5, &types->b_6);

  /* Par de Frases 69 */
  statement("Eu tenho dedicado muito tempo olhando para dentro de mim – "
            "entender minhas emoções "
            "tem sido importante para mim.",
            "Eu não não tenho dedicado muito tempo olhando para dentro de mim "
            "– fazer as coisas tem "
            "sido importante para mim.",
            'E', 'G', &types->e_4, &types->g_8);

  /* Par de Frases 70 */
  statement("Geralmente, eu me vi como uma pessoa alegre e descontraída.",
            "Geralmente, eu me vi como uma pessoa séria e digna.", 'A', 'D',
            &types->a_9, &types->d_1);

  /* Par de Frases 71 */
  statement("Eu tive uma mente ágil e energia ilimitada.",
            "Eu tive um coração acolhedor e uma profunda dedicação.", 'I', 'F',
            &types->i_7, &types->f_2);

  /* Par de Frases 72 */
  statement(
      "Eu tenho buscado atividades que tinham um potencial substancial de "
      "recompensa e reconhecimento pessoal.",
      "Eu tenho estado disposto a abrir mão de recompensas e reconhecimento "
      "pessoal "
      "se isso significasse fazer algo que realmente me interessasse.",
      'C', 'H', &types->c_3, &types->h_5);

  /* Par de Frases 73 */
  statement("Cumprir obrigações sociais raramente foi uma prioridade minha.",
            "Eu geralmente levo minhas obrigações sociais muito a sério.", 'E',
            'B', &types->e_4, &types->b_6);

  /* Par de Frases 74 */
  statement("Na maioria das situações, eu preferi assumir o comando.",
            "Na maioria das situações, eu preferi deixar outra pessoa assumir "
            "o comando.",
            'G', 'A', &types->g_8, &types->a_9);

  /* Par de Frases 75 */
  statement(
      "Ao longo dos anos, meus valores e estilo de vida mudaram várias "
      "vezes.",
      "Ao longo dos anos, meus valores e estilo de vida permaneceram um tanto "
      "consistentes.",
      'C', 'D', &types->c_3, &types->d_1);

  /* Par de Frases 76 */
  statement("Tipicamente, eu não tenho tido muita disciplina.",
            "Tipicamente, eu não tenho tido muita conexão com as pessoas.", 'I',
            'H', &types->i_7, &types->h_5);

  /* Par de Frases 77 */
  statement(
      "Eu tendi a reter meu afeto e querer que os outros entrem no meu "
      "mundo.",
      "Eu tendi a dar meu afeto com facilidade e querer me expandir para os "
      "outros.",
      'E', 'F', &types->e_4, &types->f_2);

  /* Par de Frases 78 */
  statement("Eu tenho tendência a pensar no pior.",
            "Eu tendência de pensar que tudo vai dar certo.", 'B', 'A',
            &types->b_6, &types->a_9);

  /* Par de Frases 79 */
  statement("As pessoas têm confiado em mim porque eu sou confiante e "
            "posso cuidar "
            "delas.",
            "As pessoas têm confiado em mim porque sou justo e farei o que é "
            "certo.",
            'G', 'D', &types->g_8, &types->d_1);

  /* Par de Frases 80 */
  statement("Frequentemente, eu tenho estado tão envolvido nos meus "
            "projetos que eu me "
            "isolei dos outros.",
            "Frequentemente, eu tenho estado tão envolvido com os outros que "
            "eu negligenciei "
            "meus projetos.",
            'H', 'F', &types->h_5, &types->f_2);

  /* Par de Frases 81 */
  statement("Ao conhecer alguém novo, geralmente sou calmo e contido.",
            "Ao conhecer alguém novo, geralmente sou falante e divertido.", 'C',
            'I', &types->c_3, &types->i_7);

  /* Par de Frases 82 */
  statement("Geralmente, eu tenho tendido a ser pessimista.",
            "Geralmente, eu tenho tendido a ser otimista.", 'E', 'A',
            &types->e_4, &types->a_9);

  /* Par de Frases 83 */
  statement("Eu prefiro habitar meu próprio mundo.",
            "Eu prefiro fazer o mundo saber que eu estou aqui.", 'H', 'G',
            &types->h_5, &types->g_8);

  /* Par de Frases 84 */
  statement("Eu frequentemente fui perturbado por ansiedade, insegurança e "
            "dúvida.",
            "Eu frequentemente fui perturbado por raiva, perfeccionismo e "
            "impaciência.",
            'B', 'D', &types->b_6, &types->d_1);

  /* Par de Frases 85 */
  statement("Percebo que muitas vezes fui pessoal e íntimo de mais.",
            "Percebo que muitas vezes fui frio e distante demais.", 'F', 'C',
            &types->f_2, &types->c_3);

  /* Par de Frases 86 */
  statement(
      "Eu perdi oportunidades porque não me senti capaz de aproveitá-las.",
      "Eu perdi oportunidades porque perseguia muitas possibilidades.", 'E',
      'I', &types->e_4, &types->i_7);

  /* Par de Frases 87 */
  statement("Eu tenho tendido a levar muito tempo para agir.",
            "Eu tenho tendido a agir rapidamente.", 'H', 'D', &types->h_5,
            &types->d_1);

  /* Par de Frases 88 */
  statement("Eu geralmente tenho dificuldade em tomar decisões.",
            "Eu raramente tenho dificuldade em tomar decisões.", 'B', 'G',
            &types->b_6, &types->g_8);

  /* Par de Frases 89 */
  statement(
      "Eu tenho tido uma tendência a ser um pouco intenso com as pessoas.",
      "Eu tenho tido uma tendência de não me impor o suficiente com as "
      "pessoas.",
      'F', 'A', &types->f_2, &types->a_9);

  /* Par de Frases 90 */
  statement("Tipicamente, eu tenho sido equilibrado.",
            "Tipicamente, eu tenho tido fortes mudanças de humor.", 'C', 'E',
            &types->c_3, &types->e_4);

  /* Par de Frases 91 */
  statement("Quando estive incerto do que fazer, muitas vezes busquei "
            "conselhos "
            "dos outros.",
            "Quando estive incerto do que fazer, tentei diferentes coisas "
            "para ver "
            "o que funcionava melhor para mim.",
            'B', 'I', &types->b_6, &types->i_7);

  /* Par de Frases 92 */
  statement("Eu tenho me preocupado em ser deixado de fora das atividades dos "
            "outros.",
            "Eu tenho me preocupado que as atividades dos outros possam me "
            "distrair do que eu "
            "tenho que fazer.",
            'F', 'D', &types->f_2, &types->d_1);

  /* Par de Frases 93 */
  statement("Tipicamente, quando fico com raiva, eu repreendo as pessoas.",
            "Tipicamente, quando fico com raiva, me torno distante.", 'G', 'C',
            &types->g_8, &types->c_3);

  /* Par de Frases 94 */
  statement("Eu tenho tendido a ter problemas para dormir.",
            "Eu tenho tendido a adormecer facilmente.", 'H', 'A', &types->h_5,
            &types->a_9);

  /* Par de Frases 95 */
  statement(
      "Eu frequentemente tentei descobrir como eu poderia me aproximar mais "
      "dos "
      "outros.",
      "Eu frequentemente tentei descobrir o que os outros queriam de mim.", 'F',
      'B', &types->f_2, &types->b_6);

  /* Par de Frases 96 */
  statement("Eu geralmente fui ponderado, franco e deliberado.",
            "Eu geralmente fui animado, espirituoso e falei rápido.", 'G', 'I',
            &types->g_8, &types->i_7);

  /* Par de Frases 97 */
  statement("Muitas vezes, eu não me manifestei quando vi os outros "
            "cometendo um "
            "erro.",
            "Muitas vezes, eu ajudei os outros a perceberem que estavam "
            "cometendo um "
            "erro.",
            'E', 'D', &types->e_4, &types->d_1);

  /* Par de Frases 98 */
  statement(
      "Durante a maior parte da minha vida, tenho sido uma pessoa turbulenta "
      "que teve muitas emoções voláteis.",
      "Durante a maior parte da minha vida, tenho sido uma pessoa estável e "
      "tranquila por fora, porém profunda por dentro.",
      'I', 'A', &types->i_7, &types->a_9);

  /* Par de Frases 99 */
  statement("Quando não gostei de alguém, geralmente tentei me manter "
            "cordial – "
            "apesar das minhas emoções.",
            "Quando não gostei de alugém, geralmente os deixei saber disso "
            "– de uma "
            "forma ou de outra.",
            'C', 'B', &types->c_3, &types->b_6);

  /* Par de Frases 100 */
  statement(
      "Grande parte das minhas dificuldades com as pessoas vem da minha "
      "sensibilidade e levar "
      "tudo para o lado pessoal.",
      "Grande parte das minhas dificuldades com as pessoas vem do meu desapego "
      "com as "
      "convenções sociais.",
      'E', 'H', &types->e_4, &types->h_5);

  /* Par de Frases 101 */
  statement("Minha abordagem tem sido me meter e resgatar as pessoas.",
            "Minha abordagem tem sido mostrar às pessoas como se ajudarem.",
            'F', 'G', &types->f_2, &types->g_8);

  /* Par de Frases 102 */
  statement(
      "Geralmente, eu tenho gostado de \"me deixar levar\" e levar as coisas a "
      "seus "
      "limites.",
      "Geralmente, eu não tenho gostado muito de perder o controle de mim "
      "mesmo.",
      'I', 'D', &types->i_7, &types->d_1);

  /* Par de Frases 103 */
  statement("Eu tenho me preocupado de mais em fazer as coisas melhor do que "
            "os outros.",
            "Eu estive preocupado de mais em fazer das coisas agradáveis aos "
            "outros.",
            'C', 'A', &types->c_3, &types->a_9);

  /* Par de Frases 104 */
  statement("Meus pensamentos geralmente têm sido especulativos, envolvendo "
            "minha imaginação "
            "e curiosidade.",
            "Meus pensamentos geralmente têm sido práticos – apenas tentando "
            "manter as coisas "
            "andando.",
            'H', 'B', &types->h_5, &types->b_6);

  /* Par de Frases 105 */
  statement("Um dos meus principais recursos tem sido a minha habilidade em "
            "assumir o controle "
            "das "
            "situações.",
            "Um dos meus principais recursos tem sido a minha habilidade em "
            "descrever estados "
            "internos.",
            'G', 'E', &types->g_8, &types->e_4);

  /* Par de Frases 106 */
  statement(
      "Eu pressionei as pessoas para que as coisas fossem feitas corretamente, "
      "até se isso "
      "as deixassem desconfortáveis.",
      "Eu não gosto de me sentir pressionado, então eu não gosto de "
      "pressionar os outros.",
      'D', 'A', &types->d_1, &types->a_9);

  /* Par de Frases 107 */
  statement("Eu frequentemente me orgulhei da minha importância na vida "
            "dos "
            "outros.",
            "Eu frequentemente me orgulhei do meu gosto e abertura a novas "
            "experiências.",
            'F', 'I', &types->f_2, &types->i_7);

  /* Par de Frases 108 */
  statement("Eu percebi que muitas vezes passei a impressão aos outros de ser "
            "apresentável, até admirável.",
            "Eu percebi que muitas vezes passei a impressão aos outros de ser "
            "incomum, "
            "até estranho.",
            'C', 'H', &types->c_3, &types->h_5);

  /* Par de Frases 109 */
  statement("Eu tenho feito o que eu tinha que fazer.",
            "Eu tenho feito o que eu quis fazer.", 'B', 'E', &types->b_6,
            &types->e_4);

  /* Par de Frases 110 */
  statement(
      "Eu geralmente gostei de situações de alta pressão, mesmo as difíceis.",
      "Eu geralmente não gostei de estar em situações de alta pressão ou "
      "difíceis.",
      'G', 'A', &types->g_8, &types->a_9);

  /* Par de Frases 111 */
  statement("Eu tenho orgulho da minha habilidade de ser flexível – "
            "o que é "
            "apropriado ou importante frequentemente muda.",
            "Eu tenho orgulho da minha habilidade de me posicionar sobre "
            "algo – eu "
            "tenho sido firme no que acredito.",
            'C', 'D', &types->c_3, &types->d_1);

  /* Par de Frases 112 */
  statement("Meu estilo pende à simplicidade e austeridade.",
            "Meu estilo pende ao excesso e ao exagero.", 'H', 'I', &types->h_5,
            &types->i_7);

  /* Par de Frases 113 */
  statement("Minha própria saúde e bem-estar sofreram por causa do meu "
            "forte desejo de "
            "ajudar os outros.",
            "Meus relacionamentos sofreram por causa do meu forte desejo de "
            "atender às "
            "minhas necessidades pessoais.",
            'F', 'E', &types->f_2, &types->e_4);

  /* Par de Frases 114 */
  statement("De maneira geral, eu tenho sido muito aberto e ingênuo.",
            "De maneira geral, eu tenho sido muito cauteloso e guardado.", 'A',
            'B', &types->a_9, &types->b_6);

  /* Par de Frases 115 */
  statement("Eu às vezes afasto as pessoas por ser muito agressivo.",
            "Eu às vezes afasto as pessoas por ser muito \"certinho\".", 'G',
            'D', &types->g_8, &types->d_1);

  /* Par de Frases 116 */
  statement(
      "Servir e atender às necessidades dos outros tem sido "
      "uma "
      "prioridade minha.",
      "Encontrar formas alternativas de ver e fazer as coisas tem sido uma "
      "prioridade minha.",
      'F', 'H', &types->f_2, &types->h_5);

  /* Par de Frases 117 */
  statement(
      "Eu tenho sido determinado e persistente na busca pelos meus objetivos.",
      "Eu prefiro explorar várias opções para ver onde elas levam.", 'C', 'I',
      &types->c_3, &types->i_7);

  /* Par de Frases 118 */
  statement(
      "Com frequência, tenho sido atraído por situações que despertam "
      "emoções profundas "
      "e intensas.",
      "Com frequência, tenho sido atraído por situações que me fazem sentir "
      "calmo e "
      "à vontade.",
      'E', 'A', &types->e_4, &types->a_9);

  /* Par de Frases 119 */
  statement(
      "Eu tenho me importado menos com resultados práticos do que em "
      "perseguir "
      "meus interesses.",
      "Eu tenho sido prático e esperado que meu trabalho tenha resultados "
      "concretos.",
      'H', 'G', &types->h_5, &types->g_8);

  /* Par de Frases 120 */
  statement("Eu tenho tido uma necessidade profunda de pertencer.",
            "Eu tenho tido uma necessidade profunda de me sentir equilibrado.",
            'B', 'D', &types->b_6, &types->d_1);

  /* Par de Frases 121 */
  statement("No passado, eu provavelmente insisti em ter muita proximidade "
            "nas minhas "
            "amizades.",
            "No passado, eu provavelmente mantive muita distância nos meus "
            "relacionamentos.",
            'F', 'C', &types->f_2, &types->c_3);

  /* Par de Frases 122 */
  statement("Eu tenho tido uma tendência a ficar pensando em "
            "coisas do passado.",
            "Eu tenho tido uma tendência a ficar antecipando as coisas que "
            "vou fazer.",
            'E', 'I', &types->e_4, &types->i_7);

  /* Par de Frases 123 */
  statement("Eu tendi a ver as pessoas como invasivas e exigentes.",
            "Eu tendi a ver as pessoas como desorganizadas e irresponsáveis.",
            'H', 'D', &types->h_5, &types->d_1);

  /* Par de Frases 124 */
  statement("Em geral, eu não tive muita confiança em mim mesmo.",
            "Em geral, eu tive confiança apenas em mim mesmo.", 'B', 'G',
            &types->b_6, &types->g_8);

  /* Par de Frases 125 */
  statement("Eu provavelmente fui muito passivo e pouco envolvido.",
            "Eu provavelmente fui muito controlador e manipulador.", 'A', 'F',
            &types->a_9, &types->f_2);

  /* Par de Frases 126 */
  statement("Com frequência, minha insegurança me impediu de avançar.",
            "Eu raramente deixei a insegurança ficar no meu caminho.", 'E', 'C',
            &types->e_4, &types->c_3);

  /* Par de Frases 127 */
  statement("Podendo escolher entre algo familiar e algo novo, eu geralmente "
            "escolhi "
            "algo novo.",
            "Eu geralmente escolhi o que eu sabia que gostava: por que me "
            "desapontar com algo que eu posso não gostar?",
            'I', 'B', &types->i_7, &types->b_6);

  /* Par de Frases 128 */
  statement(
      "Eu tenho dado muito contato físico para assegurar os outros de como "
      "eu me sinto "
      "em relação a eles.",
      "Eu geralmente senti que o amor verdadeiro não depende de contato "
      "físico.",
      'F', 'D', &types->f_2, &types->d_1);

  /* Par de Frases 129 */
  statement("Quando precisei confrontar alguém, muitas vezes fui "
            "muito duro "
            "e direto.",
            "Quando precisei confrontar alguém, eu frequentemente enrolei "
            "de mais.",
            'G', 'C', &types->g_8, &types->c_3);

  /* Par de Frases 130 */
  statement("Eu tenho me atraído por assuntos que os outros provavelmente "
            "achariam "
            "perturbadores, até assustadores.",
            "Eu tenho preferido não passar meu tempo refletindo sobre assuntos "
            "perturbadores "
            "e assustadores.",
            'H', 'A', &types->h_5, &types->a_9);

  /* Par de Frases 131 */
  statement(
      "Eu já me meti em problemas com as pessoas por ser muito intrusivo e "
      "interferente.",
      "Eu já me meti em problemas com as pessoas por ser muito evasivo e "
      "taciturno.",
      'F', 'B', &types->f_2, &types->b_6);

  /* Par de Frases 132 */
  statement("Eu me preocupo que eu não tenha os recursos para cumprir as "
            "responsabilidades que assumi.",
            "Eu me preocupo que eu não tenha a disciplina para focar no que "
            "realmente me satisfaz.",
            'G', 'I', &types->g_8, &types->i_7);

  /* Par de Frases 133 */
  statement(
      "Em geral, eu tenho sido uma pessoa altamente intuitiva e "
      "individualista.",
      "Em geral, eu tenho sido uma pessoa altamente organizada e responsável.",
      'E', 'D', &types->e_4, &types->d_1);

  /* Par de Frases 134 */
  statement(
      "Superar a inércia tem sido um dos meus principais problemas.",
      "Não conseguir desacelerar tem sido um dos meus principais problemas.",
      'A', 'I', &types->a_9, &types->i_7);

  /* Par de Frases 135 */
  statement("Quando eu me senti inseguro, eu reagi me tornando arrogante e "
            "desdenhoso.",
            "Quando eu me senti inseguro, eu reagi me tornando defensivo e "
            "argumentativo.",
            'C', 'B', &types->c_3, &types->b_6);

  /* Par de Frases 136 */
  statement(
      "Eu geralmente tenho sido mente aberta e disposto a tentar novas "
      "abordagens.",
      "Eu geralmente tenho sido auto-revelador e disposto a compartilhar meus "
      "sentimentos com os outros.",
      'H', 'E', &types->h_5, &types->e_4);

  /* Par de Frases 137 */
  statement(
      "Eu me apresento aos outros como sendo mais durão do que realmente sou.",
      "Eu me apresento aos outros como me importando mais do que realmente me "
      "importo.",
      'G', 'F', &types->g_8, &types->f_2);

  /* Par de Frases 138 */
  statement("Eu geralmente segui minha consciência e razão.",
            "Eu geralmente segui meus sentimentos e impulsos.", 'D', 'I',
            &types->d_1, &types->i_7);

  /* Par de Frases 139 */
  statement("Grandes adversidades me fizeram sentir firme e resoluto.",
            "Grandes adversidades me fizeram sentir desencorajado e resignado.",
            'C', 'A', &types->c_3, &types->a_9);

  /* Par de Frases 140 */
  statement(
      "Eu geralmente me certifiquei de ter algum plano B.",
      "Eu geralmente escolhi viver no limite e depender dos outros o mínimo "
      "possível.",
      'B', 'H', &types->b_6, &types->h_5);

  /* Par de Frases 141 */
  statement("Eu tive que ser forte pelos outros, então eu não tive "
            "tempo para "
            "lidar com minhas emoções e medos.",
            "Eu tenho tido dificuldade em lidar com minhas emoções e medos, "
            "então ser "
            "forte pelos outros tem sido difícil para mim.",
            'G', 'E', &types->g_8, &types->e_4);

  /* Par de Frases 142 */
  statement("Eu frequentemente me pergunto por que as pessoas "
            "se concentram no negativo "
            "quando há tantas coisas maravilhosas na vida.",
            "Eu frequentemente me pergunto por que as pessoas são tão "
            "felizes "
            "quando há tanta coisa falha na vida.",
            'A', 'D', &types->a_9, &types->d_1);

  /* Par de Frases 143 */
  statement("Eu tenho tentado bastante não parecer uma pessoa egoísta.",
            "Eu tenho tentado bastante não parecer uma pessoa chata.", 'F', 'I',
            &types->f_2, &types->i_7);

  /* Par de Frases 144 */
  statement(
      "Eu evitei intimidade quando eu temi que seria sobrecarregado "
      "pelas necessidades e exigências das pessoas.",
      "Eu evitei intimidade quando eu temi que não seria capaz de atender "
      "às expectativas das pessoas sobre mim.",
      'H', 'C', &types->h_5, &types->c_3);
}
