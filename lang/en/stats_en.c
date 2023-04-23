#include "../../include/stats_en.h"
#include "../../include/type.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int question_number = 1;

/* Function that contains the basic structure/form of each question in the test
 */
void stats_form(char stat1[], char stat2[], char resp1, char resp2,
                int *stat1_type, int *stat2_type) {
  char resp; /* character of user's answer */
  int i, *question_number_ptr = &question_number;

  printf("\n%d. %s [%c]\n", (*question_number_ptr)++, stat1, resp1);
  printf("%s [%c]\n", stat2, resp2);

  for (i = 0; i == 0;) {
    if (scanf("%c", &resp) == EOF) {
      puts("Error reading answer.");
    }

    if (resp == resp1 || resp == tolower(resp1)) {
      ++(*stat1_type);
      ++i;
    } else if (resp == resp2 || resp == tolower(resp2)) {
      ++(*stat2_type);
      ++i;
    } else if (resp == '>') {
      ++i;
    } else {
      continue;
    }
  }
}

/* Function to print each pair of statements in English */
void stats_eng(TYPE *types) {
  /* Statement Pair 1 */
  stats_form("I've been romantic and imaginative.",
             "I've been pragmatic and down-to-earth.", 'E', 'B', &types->e_4,
             &types->b_6);

  /* Statement Pair 2 */
  stats_form("I have tended to take on confrontations.",
             "I have tended to avoid confrontations.", 'G', 'A', &types->g_8,
             &types->a_9);

  /* Statement Pair 3 */
  stats_form("I have typically been diplomatic, charming and ambitious.",
             "I have typically been direct, formal and idealistic.", 'C', 'D',
             &types->c_3, &types->d_1);

  /* Statement Pair 4 */
  stats_form("I have tended to be focused and intense.",
             "I have tended to be spontaneous and fun-loving.", 'H', 'I',
             &types->h_5, &types->i_7);

  /* Statement Pair 5 */
  stats_form(
      "I have been a hospitable person and have enjoyed welcoming new "
      "friends into "
      "my life.",
      "I have been a private person and have not mixed much with others.", 'F',
      'E', &types->f_2, &types->e_4);

  /* Statement Pair 6 */
  stats_form("It's been difficult for me to relax and stop worrying about "
             "potential "
             "problems.",
             "It's been difficult for me to get myself worked up about "
             "potential problems.",
             'B', 'A', &types->b_6, &types->a_9);

  /* Statement Pair 7 */
  stats_form("I've been more of a \"street-smart\" survivor.",
             "I've been more of a \"high-minded\" idealist.", 'G', 'D',
             &types->g_8, &types->d_1);

  /* Statement Pair 8 */
  stats_form("I have needed to show affection to people.",
             "I have preferred to maintain some distance with people.", 'F',
             'H', &types->f_2, &types->h_5);

  /* Statement Pair 9 */
  stats_form("When presented with a new experience, I've usually asked "
             "myself if it would "
             "be useful to me.",
             "When presented with a new experience, I've usually asked myself "
             "if it would "
             "be enjoyable.",
             'C', 'I', &types->c_3, &types->i_7);

  /* Statement Pair 10 */
  stats_form("I have tended to focus too much on myself.",
             "I have tended to focus too much on others.", 'E', 'A',
             &types->e_4, &types->a_9);

  /* Statement Pair 11 */
  stats_form("Others have depended on my insight and knowledge.",
             "Others have depended on my strength and decisiveness.", 'H', 'G',
             &types->h_5, &types->g_8);

  /* Statement Pair 12 */
  stats_form("I have come across as being too unsure of myself.",
             "I have come across as being too sure of myself.", 'B', 'D',
             &types->b_6, &types->d_1);

  /* Statement Pair 13 */
  stats_form("I have been more relationship-oriented than goal-oriented.",
             "I have been more goal-oriented than relationship-oriented.", 'F',
             'C', &types->f_2, &types->c_3);

  /* Statement Pair 14 */
  stats_form("I have not been able to speak up for myself very well.",
             "I have been outspoken – I've said what others wished they had "
             "the nerve to "
             "say.",
             'E', 'I', &types->e_4, &types->i_7);

  /* Statement Pair 15 */
  stats_form(
      "It's been difficult for me to stop considering alternatives and do "
      "something "
      "definite.",
      "It's been difficult for me to take it easy and be more flexible.", 'H',
      'D', &types->h_5, &types->d_1);

  /* Statement Pair 16 */
  stats_form("I have tended to be careful and hesitant.",
             "I have tended to be bold and domineering.", 'B', 'G', &types->b_6,
             &types->g_8);

  /* Statement Pair 17 */
  stats_form("My reluctance to get too involved has gotten me into trouble "
             "with people.",
             "My eagerness to have people depend on me has gotten me into "
             "trouble with "
             "them.",
             'A', 'F', &types->a_9, &types->f_2);

  /* Statement Pair 18 */
  stats_form("Usually, I have been able to put my feelings aside to get the "
             "job done.",
             "Usually, I have needed to work through my feelings before I "
             "could act.",
             'C', 'E', &types->c_3, &types->e_4);

  /* Statement Pair 19 */
  stats_form("Generally, I've been methodical and cautious.",
             "Generally, I've been adventurous and taken risks.", 'B', 'I',
             &types->b_6, &types->i_7);

  /* Statement Pair 20 */
  stats_form("I have tended to be a supportive, giving person who seeks "
             "intimacy with "
             "others.",
             "I have tended to be a serious, reserved person who likes "
             "discussing issues.",
             'F', 'D', &types->f_2, &types->d_1);

  /* Statement Pair 21 */
  stats_form("I've often felt the need to be a \"pillar of strength\".",
             "I've often felt the need to perform perfectly.", 'G', 'C',
             &types->g_8, &types->c_3);

  /* Statement Pair 22 */
  stats_form("I've typically been interested in asking tough questions and "
             "maintaining my "
             "independence.",
             "I've typically been interested in maintaining my stability and "
             "peace of "
             "mind.",
             'H', 'A', &types->h_5, &types->a_9);

  /* Statement Pair 23 */
  stats_form("I've been a bit cynical and skeptical.",
             "I've been a bit mushy and sentimental.", 'B', 'F', &types->b_6,
             &types->f_2);

  /* Statement Pair 24 */
  stats_form(
      "I've often worried that I'm missing out on something better.",
      "I've often worried that if I let down my guard, someone will take "
      "advantage "
      "of me.",
      'I', 'G', &types->i_7, &types->g_8);

  /* Statement Pair 25 */
  stats_form("My habit of being \"stand-offish\" has annoyed people.",
             "My habit of telling people what to do has annoyed people.", 'E',
             'D', &types->e_4, &types->d_1);

  /* Statement Pair 26 */
  stats_form(
      "I have tended to get anxious if there was too much excitement and "
      "stimulation.",
      "I have tended to get anxious if there wasn't enough excitement and "
      "stimulation.",
      'A', 'I', &types->a_9, &types->i_7);

  /* Statement Pair 27 */
  stats_form("I have depended on my friends and they have known that they "
             "can depend "
             "on me.",
             "I have not depended on people, I have done things on my own.",
             'B', 'C', &types->b_6, &types->c_3);

  /* Statement Pair 28 */
  stats_form("I have tended to be detached and preoccupied.",
             "I have tended to be moody and self-absorbed.", 'H', 'E',
             &types->h_5, &types->e_4);

  /* Statement Pair 29 */
  stats_form("I have liked to challenge people and \"shake them up\".",
             "I have liked to comfort people and calm them down.", 'G', 'F',
             &types->g_8, &types->f_2);

  /* Statement Pair 30 */
  stats_form("I have generally been an outgoing, sociable person.",
             "I have generally been an earnest, self-disciplined person.", 'I',
             'D', &types->i_7, &types->d_1);

  /* Statement Pair 31 */
  stats_form("I've wanted to \"fit in\" with others – I get uncomfortable "
             "when I stand out "
             "too much.",
             "I've wanted to stand out from others – I get uncomfortable when "
             "I don't distinguish myself.",
             'A', 'C', &types->a_9, &types->c_3);

  /* Statement Pair 32 */
  stats_form("Pursuing my personal interests has been more important to me "
             "than having "
             "stability and security.",
             "Having stability and security has been more important to me than "
             "pursuing my "
             "personal interests.",
             'H', 'B', &types->h_5, &types->b_6);

  /* Statement Pair 33 */
  stats_form("When I've had conflicts with others, I've tended to withdraw.",
             "When I've had conflicts with others, I've rarely backed down.",
             'E', 'G', &types->e_4, &types->g_8);

  /* Statement Pair 34 */
  stats_form("I have given in too easily and let others push me around.",
             "I have been too uncompromising and demanding with others.", 'A',
             'D', &types->a_9, &types->d_1);

  /* Statement Pair 35 */
  stats_form(
      "I've been appreciated for my unsinkable spirit and resourcefulness.",
      "I've been appreciated for my deep caring and personal warmth.", 'I', 'F',
      &types->i_7, &types->f_2);

  /* Statement Pair 36 */
  stats_form(
      "I have wanted to make a favorable impression on others.",
      "I have cared little about making a favorable impression on others.", 'C',
      'H', &types->c_3, &types->h_5);

  /* Statement Pair 37 */
  stats_form("I've depended on my perseverance and common sense.",
             "I've depended on my imagination and moments of inspiration.", 'B',
             'E', &types->b_6, &types->e_4);

  /* Statement Pair 38 */
  stats_form("Basically, I have been easy-going and agreeable.",
             "Basically, I have been hard-driving and assertive.", 'A', 'G',
             &types->a_9, &types->g_8);

  /* Statement Pair 39 */
  stats_form(
      "I have worked hard to be accepted and well-liked.",
      "Being accepted and well-liked has not been a high priority for me.", 'C',
      'D', &types->c_3, &types->d_1);

  /* Statement Pair 40 */
  stats_form(
      "In reaction to pressure from others, I have become more withdrawn.",
      "In reaction to pressure from others, I have become more assertive.", 'H',
      'I', &types->h_5, &types->i_7);

  /* Statement Pair 41 */
  stats_form("People have been interested in me because I've been outgoing, "
             "engaging, and "
             "interested in them.",
             "People have been interested in me because I've been quiet, "
             "unusual and deep.",
             'F', 'E', &types->f_2, &types->e_4);

  /* Statement Pair 42 */
  stats_form("Duty and responsibility have been important values for me.",
             "Harmony and acceptance have been important values for me.", 'B',
             'A', &types->b_6, &types->a_9);

  /* Statement Pair 43 */
  stats_form(
      "I've tried to motivate people by making big plans and big promises.",
      "I've tried to motivate people by pointing out the consequences of not "
      "following my advice.",
      'G', 'D', &types->g_8, &types->d_1);

  /* Statement Pair 44 */
  stats_form("I have seldom been emotionally demonstrative.",
             "I have often been emotionally demonstrative.", 'H', 'F',
             &types->h_5, &types->f_2);

  /* Statement Pair 45 */
  stats_form("Dealing with details has not been one of my strong suits.",
             "I have excelled at dealing with details.", 'I', 'C', &types->i_7,
             &types->c_3);

  /* Statement Pair 46 */
  stats_form("I have often emphasized how different I am from other people, "
             "especially "
             "my family.",
             "I have often emphasized how much I have in common with most "
             "people, especially "
             "my family.",
             'E', 'A', &types->e_4, &types->a_9);

  /* Statement Pair 47 */
  stats_form("When situations have gotten heated, I have tended to stay on "
             "the sidelines.",
             "When situations have gotten heated, I have tended to get right "
             "into the middle "
             "of things.",
             'H', 'G', &types->h_5, &types->g_8);

  /* Statement Pair 48 */
  stats_form(
      "I have stood by my friends, even when they have been wrong.",
      "I have not wanted to compromise what is right, even for friendship.",
      'B', 'D', &types->b_6, &types->d_1);

  /* Statement Pair 49 */
  stats_form("I've been a well-meaning supporter.",
             "I've been a highly-motivated go-getter.", 'F', 'C', &types->f_2,
             &types->c_3);

  /* Statement Pair 50 */
  stats_form("When troubled, I have tended to brood about my problems.",
             "When troubled, I have tended to find distractions for myself.",
             'E', 'I', &types->e_4, &types->i_7);

  /* Statement Pair 51 */
  stats_form(
      "Generally, I've had strong convictions and a sense of how things "
      "should be.",
      "Generally, I've had serious doubts and have questioned how things "
      "seemed "
      "to be.",
      'D', 'H', &types->d_1, &types->h_5);

  /* Statement Pair 52 */
  stats_form(
      "I've created problems with others by being pessimistic and "
      "complaining.",
      "I've created problems with others by being bossy and controlling.", 'B',
      'G', &types->b_6, &types->g_8);

  /* Statement Pair 53 */
  stats_form("I have tended to act on my feelings and let the \"chips fall "
             "where they may\".",
             "I have tended not to act on my feelings lest they stir up more "
             "problems.",
             'F', 'A', &types->f_2, &types->a_9);

  /* Statement Pair 54 */
  stats_form("Being the center of attention has usually felt natural to me.",
             "Being the center of attention has usually felt strange to me.",
             'C', 'E', &types->c_3, &types->e_4);

  /* Statement Pair 55 */
  stats_form("I've been careful and have tried to prepare for unforeseen "
             "problems.",
             "I've been spontaneous and have preferred to improvise as "
             "problems come up.",
             'B', 'I', &types->b_6, &types->i_7);

  /* Statement Pair 56 */
  stats_form("I have gotten angry when others have not shown enough "
             "appreciation for what "
             "I have done for them.",
             "I have gotten angry when others have not listened to what I have "
             "told them.",
             'F', 'D', &types->f_2, &types->d_1);

  /* Statement Pair 57 */
  stats_form("Being independent and self-reliant has been important to me.",
             "Being valued and admired has been important to me.", 'G', 'C',
             &types->g_8, &types->c_3);

  /* Statement Pair 58 */
  stats_form(
      "When I've debated with friends, I've tended to press my arguments "
      "forcefully.",
      "When I've debated with friends, I've tended to let things go to prevent "
      "hard "
      "feelings.",
      'H', 'A', &types->h_5, &types->a_9);

  /* Statement Pair 59 */
  stats_form("I have often been possessive of loved ones – I have had "
             "trouble letting "
             "them be.",
             "I have often \"tested\" loved ones to see if they were really "
             "there for me.",
             'F', 'B', &types->f_2, &types->b_6);

  /* Statement Pair 60 */
  stats_form("Organizing resources and making things happen has been one of "
             "my major "
             "strengths.",
             "Coming up with new ideas and getting people excited about them "
             "has been one of "
             "my major strengths.",
             'G', 'I', &types->g_8, &types->i_7);

  /* Statement Pair 61 */
  stats_form("I've tended to be driven and very hard on myself.",
             "I've tended to be too emotional and rather undisciplined.", 'D',
             'E', &types->d_1, &types->e_4);

  /* Statement Pair 62 */
  stats_form("I have tried to keep my life fast-paced, intense, and exciting.",
             "I have tried to keep my life regular, stable, and peaceful.", 'I',
             'A', &types->i_7, &types->a_9);

  /* Statement Pair 63 */
  stats_form("Even though I've had successes, I've tended to doubt my "
             "abilities.",
             "Even though I've had setbacks, I've had a lot of confidence in "
             "my abilities.",
             'B', 'C', &types->b_6, &types->c_3);

  /* Statement Pair 64 */
  stats_form("I generally have tended to dwell on my feelings and to hold "
             "onto them for a "
             "long time.",
             "I generally have tended to minimize my feelings and not pay very "
             "much attention "
             "to them.",
             'E', 'H', &types->e_4, &types->h_5);

  /* Statement Pair 65 */
  stats_form("I have provided many people with attention and nurturance.",
             "I have provided many people with direction and motivation.", 'F',
             'G', &types->f_2, &types->g_8);

  /* Statement Pair 66 */
  stats_form("I've been a bit serious and strict with myself.",
             "I've been a bit free-wheeling and permissive with myself.", 'D',
             'I', &types->d_1, &types->i_7);

  /* Statement Pair 67 */
  stats_form("I've been self-assertive and driven to excel.",
             "I've been modest and have been happy to go at my own pace.", 'C',
             'A', &types->c_3, &types->a_9);

  /* Statement Pair 68 */
  stats_form("I have been proud of my clarity and objectivity.",
             "I have been proud of my reliability and commitment.", 'H', 'B',
             &types->h_5, &types->b_6);

  /* Statement Pair 69 */
  stats_form("I have spent a lot of time looking inward – understanding my "
             "feelings has "
             "been important to me.",
             "I have not spent much time looking inward – getting things done "
             "has been "
             "important to me.",
             'E', 'G', &types->e_4, &types->g_8);

  /* Statement Pair 70 */
  stats_form(
      "Generally, I have thought of myself as a sunny, casual person.",
      "Generally, I have thought of myself as a serious, dignified person.",
      'A', 'D', &types->a_9, &types->d_1);

  /* Statement Pair 71 */
  stats_form("I've had an agile mind and boundless energy.",
             "I've had a caring heart and deep dedication.", 'I', 'F',
             &types->i_7, &types->f_2);

  /* Statement Pair 72 */
  stats_form("I have pursued activities that had a substantial potential "
             "for reward and "
             "personal recognition.",
             "I have been willing to give up reward and personal recognition "
             "if it meant doing "
             "work I was really interested in.",
             'C', 'H', &types->c_3, &types->h_5);

  /* Statement Pair 73 */
  stats_form("Fulfilling social obligations has seldom been high on my agenda.",
             "I have usually taken my social obligations very seriously.", 'E',
             'B', &types->e_4, &types->b_6);

  /* Statement Pair 74 */
  stats_form("In most situations, I have preferred to take the lead.",
             "In most situations, I have preferred to let someone else take "
             "the lead.",
             'G', 'A', &types->g_8, &types->a_9);

  /* Statement Pair 75 */
  stats_form("Over the years, my values and lifestyle have changed several "
             "times.",
             "Over the years, my values and lifestyle have remained fairly "
             "consistent.",
             'C', 'D', &types->c_3, &types->d_1);

  /* Statement Pair 76 */
  stats_form("Typically, I have not had much self-discipline.",
             "Typically, I have not had much connection with people.", 'I', 'H',
             &types->i_7, &types->h_5);

  /* Statement Pair 77 */
  stats_form("I have tended to withhold my affection and have wanted others "
             "to come into "
             "my world.",
             "I have tended to give my affection too freely and have wanted to "
             "extend "
             "myself to others.",
             'E', 'F', &types->e_4, &types->f_2);

  /* Statement Pair 78 */
  stats_form("I have had a tendency to think of worst-case scenarios.",
             "I have had a tendency to think that everything will work out for "
             "the best.",
             'B', 'A', &types->b_6, &types->a_9);

  /* Statement Pair 79 */
  stats_form(
      "People have trusted me because I am confident and can look out for "
      "them.",
      "People have trusted me because I am fair and will do what is right.",
      'G', 'D', &types->g_8, &types->d_1);

  /* Statement Pair 80 */
  stats_form("Often, I have been so involved in my own projects that I have "
             "become isolated "
             "from others.",
             "Often, I have been so involved with others that I have neglected "
             "my own "
             "projects.",
             'H', 'F', &types->h_5, &types->f_2);

  /* Statement Pair 81 */
  stats_form("When meeting someone new, I have usually been poised and "
             "self-contained.",
             "When meeting someone new, I have usually been chatty and "
             "entertaining.",
             'C', 'I', &types->c_3, &types->i_7);

  /* Statement Pair 82 */
  stats_form("Generally speaking, I have tended to be pessimistic.",
             "Generally speaking, I have tended to be optimistic.", 'E', 'A',
             &types->e_4, &types->a_9);

  /* Statement Pair 83 */
  stats_form("I have preferred to inhabit my own little world.",
             "I have preferred to let the world know I'm here.", 'H', 'G',
             &types->h_5, &types->g_8);

  /* Statement Pair 84 */
  stats_form(
      "I have often been troubled by nervousness, insecurity, and doubt.",
      "I have often been troubled by anger, perfectionism, and impatience.",
      'B', 'D', &types->b_6, &types->d_1);

  /* Statement Pair 85 */
  stats_form("I realize that I have often been too personal and intimate.",
             "I realize that I have often been too cool and aloof.", 'F', 'C',
             &types->f_2, &types->c_3);

  /* Statement Pair 86 */
  stats_form(
      "I have lost out because I have not felt up to taking opportunities.",
      "I have lost out because I have pursued too many possibilities.", 'E',
      'I', &types->e_4, &types->i_7);

  /* Statement Pair 87 */
  stats_form("I have tended to take a long time to get into action.",
             "I have tended to get into action quickly.", 'H', 'D', &types->h_5,
             &types->d_1);

  /* Statement Pair 88 */
  stats_form("I usually have had difficulty making decisions.",
             "I seldom have had difficulty making decisions.", 'B', 'G',
             &types->b_6, &types->g_8);

  /* Statement Pair 89 */
  stats_form(
      "I have had a tendency to come on a little too strong with people.",
      "I have had a tendency not to assert myself enough with people.", 'F',
      'A', &types->f_2, &types->a_9);

  /* Statement Pair 90 */
  stats_form("Typically, I have been even-tempered.",
             "Typically, I have had strong changes of mood.", 'C', 'E',
             &types->c_3, &types->e_4);

  /* Statement Pair 91 */
  stats_form("When I've been unsure of what to do, I've often sought the "
             "advice of "
             "others.",
             "When I've been unsure of what to do, I've tried different things "
             "to see what "
             "worked best for me.",
             'B', 'I', &types->b_6, &types->i_7);

  /* Statement Pair 92 */
  stats_form(
      "I have worried that I would be left out of others' activities.",
      "I have worried that others' activities would distract me from what I "
      "had "
      "to do.",
      'F', 'D', &types->f_2, &types->d_1);

  /* Statement Pair 93 */
  stats_form("Typically, when I have gotten angry, I have told people off.",
             "Typically, when I have gotten angry, I have become distant.", 'G',
             'C', &types->g_8, &types->c_3);

  /* Statement Pair 94 */
  stats_form("I've tended to have trouble falling asleep.",
             "I've tended to fall asleep easily.", 'H', 'A', &types->h_5,
             &types->a_9);

  /* Statement Pair 95 */
  stats_form("I have often tried to figure out how I could get closer to "
             "others.",
             "I have often tried to figure out what others want from me.", 'F',
             'B', &types->f_2, &types->b_6);

  /* Statement Pair 96 */
  stats_form("I have usually been measured, straight-talking, and deliberate.",
             "I have usually been excitable, fast-talking, and witty.", 'G',
             'I', &types->g_8, &types->i_7);

  /* Statement Pair 97 */
  stats_form(
      "Often, I have not spoken up when I've seen others making a mistake.",
      "Often, I have helped others see that they are making a mistake.", 'E',
      'D', &types->e_4, &types->d_1);

  /* Statement Pair 98 */
  stats_form("During most of my life, I have been a stormy person who has "
             "had many volatile "
             "feelings.",
             "During most of my life, I have been a steady person in whom "
             "\"still waters run "
             "deep\".",
             'I', 'A', &types->i_7, &types->a_9);

  /* Statement Pair 99 */
  stats_form(
      "When I have disliked people, I have usually tried hard to stay "
      "cordial – despite my feelings.",
      "When I have disliked people, I have usually let them know it – one way "
      "or "
      "another.",
      'C', 'B', &types->c_3, &types->b_6);

  /* Statement Pair 100 */
  stats_form("Much of my difficulty with people has come from my "
             "touchiness and taking "
             "everything too personally.",
             "Much of my difficulty with people has come from me not caring "
             "about social "
             "conventions.",
             'E', 'H', &types->e_4, &types->h_5);

  /* Statement Pair 101 */
  stats_form("My approach has been to jump in and rescue people.",
             "My approach has been to show people how to help themselves.", 'F',
             'G', &types->f_2, &types->g_8);

  /* Statement Pair 102 */
  stats_form(
      "Generally, I have enjoyed \"letting go\" and pushing the limits.",
      "Generally, I have not enjoyed losing control of myself very much.", 'I',
      'D', &types->i_7, &types->d_1);

  /* Statement Pair 103 */
  stats_form("I've been overly concerned with doing better than others.",
             "I've been overly concerned with making things okay for others.",
             'C', 'A', &types->c_3, &types->a_9);

  /* Statement Pair 104 */
  stats_form(
      "My thoughts generally have been speculative involving my "
      "imagination and "
      "curiosity.",
      "My thoughts generally have been practical – just trying to keep things "
      "going.",
      'H', 'B', &types->h_5, &types->b_6);

  /* Statement Pair 105 */
  stats_form("One of my main assets has been my ability to take charge of "
             "situations.",
             "One of my main assets has been my ability to describe internal "
             "states.",
             'G', 'E', &types->g_8, &types->e_4);

  /* Statement Pair 106 */
  stats_form(
      "I have pushed to get things done correctly, even if it made people "
      "uncomfortable.",
      "I have not liked feeling pressured, so I have not liked pressuring "
      "anyone "
      "else.",
      'D', 'A', &types->d_1, &types->a_9);

  /* Statement Pair 107 */
  stats_form(
      "I've often taken pride in how important I am in others' lives.",
      "I've often taken pride in my gusto and openness to new experiences.",
      'F', 'I', &types->f_2, &types->i_7);

  /* Statement Pair 108 */
  stats_form("I have perceived that I've often come across to others as "
             "presentable, "
             "even admirable.",
             "I have perceived that I've often come across to others as "
             "unusual, even odd.",
             'C', 'H', &types->c_3, &types->h_5);

  /* Statement Pair 109 */
  stats_form("I've mostly done what I had to do.",
             "I've mostly done what I wanted to do.", 'B', 'E', &types->b_6,
             &types->e_4);

  /* Statement Pair 110 */
  stats_form("I have usually enjoyed high-pressure, even difficult, "
             "situations.",
             "I have usually disliked being in high-pressure, even difficult, "
             "situations.",
             'G', 'A', &types->g_8, &types->a_9);

  /* Statement Pair 111 */
  stats_form("I've been proud of my ability to be flexible – what's "
             "appropriate or "
             "important often changes.",
             "I've been proud of my ability to take a stand – I've been firm "
             "about what I "
             "believe in.",
             'C', 'D', &types->c_3, &types->d_1);

  /* Statement Pair 112 */
  stats_form("My style has leaned towards spareness and austerity.",
             "My style has leaned towards excess and overdoing things.", 'H',
             'I', &types->h_5, &types->i_7);

  /* Statement Pair 113 */
  stats_form("My own health and well-being have suffered because of my "
             "strong desire to "
             "help others.",
             "My relationships have suffered because of my strong desire to "
             "attend to my "
             "personal needs.",
             'F', 'E', &types->f_2, &types->e_4);

  /* Statement Pair 114 */
  stats_form("Generally speaking, I've been too open and naive.",
             "Generally speaking, I've been too wary and guarded.", 'A', 'B',
             &types->a_9, &types->b_6);

  /* Statement Pair 115 */
  stats_form("I have sometimes put people off by being too aggressive.",
             "I have sometimes put people off by being too \"uptight\".", 'G',
             'D', &types->g_8, &types->d_1);

  /* Statement Pair 116 */
  stats_form("Being of service and attending to the needs of others has "
             "been a high "
             "priority for me.",
             "Finding alternative ways of seeing and doing things has been a "
             "high priority "
             "for me.",
             'F', 'H', &types->f_2, &types->h_5);

  /* Statement Pair 117 */
  stats_form(
      "I've been single-minded and persistent in pursuing my goals.",
      "I've preferred to explore various courses of action to see where they "
      "lead.",
      'C', 'I', &types->c_3, &types->i_7);

  /* Statement Pair 118 */
  stats_form(
      "I have frequently been drawn to situations that stir up deep, "
      "intense "
      "emotions.",
      "I have frequently been drawn to situations that make me feel calm and "
      "at ease.",
      'E', 'A', &types->e_4, &types->a_9);

  /* Statement Pair 119 */
  stats_form("I have cared less about practical results than about pursuing my "
             "interests.",
             "I have been practical and have expected my work to have concrete "
             "results.",
             'H', 'G', &types->h_5, &types->g_8);

  /* Statement Pair 120 */
  stats_form("I have had a deep need to belong.",
             "I have had a deep need to feel balanced.", 'B', 'D', &types->b_6,
             &types->d_1);

  /* Statement Pair 121 */
  stats_form(
      "In the past, I've probably insisted on too much closeness in my "
      "friendships.",
      "In the past, I've probably kept too much distance in my relationships.",
      'F', 'C', &types->f_2, &types->c_3);

  /* Statement Pair 122 */
  stats_form("I've had a tendency to keep thinking about things from the past.",
             "I've had a tendency to keep anticipating things I'm going to do.",
             'E', 'I', &types->e_4, &types->i_7);

  /* Statement Pair 123 */
  stats_form("I've tended to see people as intrusive and demanding.",
             "I've tended to see people as disorganized and irresponsible.",
             'H', 'D', &types->h_5, &types->d_1);

  /* Statement Pair 124 */
  stats_form("Generally, I have not had much confidence in myself.",
             "Generally, I have had confidence only in myself.", 'B', 'G',
             &types->b_6, &types->g_8);

  /* Statement Pair 125 */
  stats_form("I've probably been too passive and uninvolved.",
             "I've probably been too controlling and manipulative.", 'A', 'F',
             &types->a_9, &types->f_2);

  /* Statement Pair 126 */
  stats_form("I've frequently been stopped in my tracks by my self-doubt.",
             "I've rarely let self-doubt stand in my way.", 'E', 'C',
             &types->e_4, &types->c_3);

  /* Statement Pair 127 */
  stats_form("Given a choice between something familiar and something new, "
             "I've usually "
             "chosen something new.",
             "I've generally chosen what I knew I already liked: why be "
             "disappointed with "
             "something I might not like?",
             'I', 'B', &types->i_7, &types->b_6);

  /* Statement Pair 128 */
  stats_form("I have given a lot of physical contact to reassure others "
             "about how I feel "
             "about them.",
             "I have generally felt that real love does not depend on physical "
             "contact.",
             'F', 'D', &types->f_2, &types->d_1);

  /* Statement Pair 129 */
  stats_form("When I've needed to confront someone, I've often been too "
             "harsh and "
             "direct.",
             "When I've needed to confront someone, I've often \"beaten around "
             "the bush\" "
             "too much.",
             'G', 'C', &types->g_8, &types->c_3);

  /* Statement Pair 130 */
  stats_form(
      "I have been attracted to subjects that others would probably find "
      "disturbing, even frightening.",
      "I have preferred not to spend my time dwelling on disturbing, "
      "frightening "
      "subjects.",
      'H', 'A', &types->h_5, &types->a_9);

  /* Statement Pair 131 */
  stats_form(
      "I have gotten into trouble with people by being too intrusive and "
      "interfering.",
      "I have gotten into trouble with people by being too evasive and "
      "uncommunicative.",
      'F', 'B', &types->f_2, &types->b_6);

  /* Statement Pair 132 */
  stats_form("I've worried that I don't have the resources to fulfill the "
             "responsibilities "
             "I've taken on.",
             "I've worried that I don't have the self-discipline to focus on "
             "what will "
             "really fulfill me.",
             'G', 'I', &types->g_8, &types->i_7);

  /* Statement Pair 133 */
  stats_form("Generally, I've been a highly intuitive, individualistic "
             "person.",
             "Generally, I've been a highly organized, responsible person.",
             'E', 'D', &types->e_4, &types->d_1);

  /* Statement Pair 134 */
  stats_form("Overcoming inertia has been one of my main problems.",
             "Being unable to slow down has been one of my main problems.", 'A',
             'I', &types->a_9, &types->i_7);

  /* Statement Pair 135 */
  stats_form("When I've felt insecure, I've reacted by becoming arrogant and "
             "dismissive.",
             "When I've felt insecure, I've reacted by becoming defensive and "
             "argumentative.",
             'C', 'B', &types->c_3, &types->b_6);

  /* Statement Pair 136 */
  stats_form("I have generally been open-minded and willing to try new "
             "approaches.",
             "I have generally been self-revealing and willing to share my "
             "feelings with "
             "others.",
             'H', 'E', &types->h_5, &types->e_4);

  /* Statement Pair 137 */
  stats_form("I've presented myself to others as tougher than I really am.",
             "I've presented myself to others as caring more than I really do.",
             'G', 'F', &types->g_8, &types->f_2);

  /* Statement Pair 138 */
  stats_form("I usually have followed my conscience and reason.",
             "I usually have followed my feelings and impulses.", 'D', 'I',
             &types->d_1, &types->i_7);

  /* Statement Pair 139 */
  stats_form("Serious adversity has made me feel hardened and resolute.",
             "Serious adversity has made me feel discouraged and resign.", 'C',
             'A', &types->c_3, &types->a_9);

  /* Statement Pair 140 */
  stats_form("I usually have made sure that I had some kind of \"safety "
             "net\" to fall "
             "back on.",
             "I usually have chosen to live on the edge and to depend on "
             "others as little as "
             "possible.",
             'B', 'H', &types->b_6, &types->h_5);

  /* Statement Pair 141 */
  stats_form("I've had to be strong for others, so I haven't had time to "
             "deal with my "
             "feelings and fears.",
             "I've had difficulty coping with my feelings and fears, so it's "
             "been hard for me "
             "to be strong for others.",
             'G', 'E', &types->g_8, &types->e_4);

  /* Statement Pair 142 */
  stats_form(
      "I have often wondered why people focus on the negative when there "
      "is so "
      "much that's wonderful about life.",
      "I have often wondered why people are so happy when so much in life is "
      "messed up.",
      'A', 'D', &types->a_9, &types->d_1);

  /* Statement Pair 143 */
  stats_form("I have tried hard not to be seen as a selfish person.",
             "I have tried hard not to be seen as a boring person.", 'F', 'I',
             &types->f_2, &types->i_7);

  /* Statement Pair 144 */
  stats_form("I have avoided intimacy when I feared I would be overwhelmed "
             "by people's "
             "needs and demands.",
             "I have avoided intimacy when I feared I would not be able to "
             "live up to "
             "people's expectations of me.",
             'H', 'C', &types->h_5, &types->c_3);
}
