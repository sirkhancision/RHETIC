#include "../../include/stats_en.h"
#include "../../include/type.h"
#include <ctype.h>
#include <stdio.h>

/* Function that contains the basic structure/form of each question in the test */
void stats_form(char stat1[], char stat2[], char resp1, char resp2,
	int *stat1_type, int *stat2_type) {
	char resp; /* character of user's answer */
	int i;

	if (putchar('\n') == EOF)
		printf("Error printing newline character.\n");

	if (puts(stat1) == EOF)
		printf("Error printing statement 1.\n");
	if (puts(stat2) == EOF)
		printf("Error printing statement 2.\n");

	for (i = 0; i == 0;) {
		if (scanf("%c", &resp) == EOF)
			printf("Error reading statement answer.\n");
		
		if (resp == resp1 || resp == tolower(resp1)) {
			++(*stat1_type);
			++i;
		}
		else if (resp == resp2 || resp == tolower(resp2)) {
			++(*stat2_type);
			++i;
		}
		else if (resp == '>')
			++i;
		else 
			continue;
	}
}

/* Function to print each pair of statements in English */
void stats_eng(TYPE *types) {
	/* Statement Pair 1 */
	stats_form("1.I've been romantic and imaginative. [E]",
	"I've been pragmatic and down-to-earth. [B]", 'E', 'B', &types->e_4, &types->b_6);

	/* Statement Pair 2 */
	stats_form("2.I have tended to take on confrontations. [G]",
	"I have tended to avoid confrontations. [A]", 'G', 'A', &types->g_8, &types->a_9);

	/* Statement Pair 3 */
	stats_form("3.I have typically been diplomatic, charming and ambitious. [C]", "I have typically been direct, formal and idealistic. [D]", 'C',
	'D', &types->c_3, &types->d_1);

	/* Statement Pair 4 */
	stats_form("4.I have tended to be focused and intense. [H]",
	"I have tended to be spontaneous and fun-loving. [I]", 'H', 'I',
	&types->h_5, &types->i_7);

	/* Statement Pair 5 */
	stats_form("5.I have been a hospitable person and have enjoyed welcoming new friends into\n"
	"my life. [F]", "I have been a private person and have not mixed much with others. [E]", 'F', 'E', &types->f_2, &types->e_4);

	/* Statement Pair 6 */
	stats_form("6.It's been difficult for me to relax and stop worrying about potential\n"
	"problems. [B]", "It's been difficult for me to get myself worked up about potential problems. [A]", 'B', 'A', &types->b_6, &types->a_9);

	/* Statement Pair 7 */
	stats_form("7.I've been more of a \"street-smart\" survivor. [G]",
	"I've been more of a \"high-minded\" idealist. [D]", 'G', 'D',
	&types->g_8, &types->d_1);

	/* Statement Pair 8 */
	stats_form("8.I have needed to show affection to people. [F]",
	"I have preferred to maintain some distance with people. [H]", 'F',
	'H', &types->f_2, &types->h_5);

	/* Statement Pair 9 */
	stats_form("9.When presented with a new experience, I've usually asked myself if it would\n"
	"be useful to me. [C]", "When presented with a new experience, I've usually asked myself if it would\n"
	"be enjoyable. [I]", 'C', 'I', &types->c_3, &types->i_7);

	/* Statement Pair 10 */
	stats_form("10.I have tended to focus too much on myself. [E]",
	"I have tended to focus too much on others. [A]", 'E', 'A',
	&types->e_4, &types->a_9);

	/* Statement Pair 11 */
	stats_form("11.Others have depended on my insight and knowledge. [H]",
	"Others have depended on my strength and decisiveness. [G]", 'H',
	'G', &types->h_5, &types->g_8);

	/* Statement Pair 12 */
	stats_form("12.I have come across as being too unsure of myself. [B]",
	"I have come across as being too sure of myself. [D]", 'B', 'D',
	&types->b_6, &types->d_1);

	/* Statement Pair 13 */
	stats_form("13.I have been more relationship-oriented than goal-oriented. [F]", "I have been more goal-oriented than relationship-oriented. [C]", 'F', 'C', &types->f_2, &types->c_3);

	/* Statement Pair 14 */
	stats_form("14.I have not been able to speak up for myself very well. [E]", "I have been outspoken – I've said what others wished they had the nerve to\n"
	"say. [I]", 'E', 'I', &types->e_4, &types->i_7);

	/* Statement Pair 15 */
	stats_form("15.It's been difficult for me to stop considering alternatives and do something\n"
	"definite. [H]", "It's been difficult for me to take it easy and be more flexible. [D]", 'H', 'D', &types->h_5, &types->d_1);

	/* Statement Pair 16 */
	stats_form("16.I have tended to be careful and hesitant. [B]",
	"I have tended to be bold and domineering. [G]", 'B', 'G',
	&types->b_6, &types->g_8);

	/* Statement Pair 17 */
	stats_form("17.My reluctance to get too involved has gotten me into trouble with people. [A]", "My eagerness to have people depend on me has gotten me into trouble with\n"
	"them. [F]", 'A', 'F', &types->a_9, &types->f_2);

	/* Statement Pair 18 */
	stats_form("18.Usually, I have been able to put my feelings aside to get the job done. [C]",
	"Usually, I have needed to work through my feelings before I could act. [E]", 'C', 'E', &types->c_3, &types->e_4);

	/* Statement Pair 19 */
	stats_form("19.Generally, I've been methodical and cautious. [B]",
	"Generally, I've been adventurous and taken risks. [I]", 'B', 'I',
	&types->b_6, &types->i_7);

	/* Statement Pair 20 */
	stats_form("20.I have tended to be a supportive, giving person who seeks intimacy with\n"
	"others. [F]", "I have tended to be a serious, reserved person who likes discussing issues. [D]", 'F', 'D', &types->f_2, &types->d_1);

	/* Statement Pair 21 */
	stats_form("21.I've often felt the need to be a \"pillar of strength\". [G]", "I've often felt the need to perform perfectly. [C]", 'G', 'C',
	&types->g_8, &types->c_3);

	/* Statement Pair 22 */
	stats_form("22.I've typically been interested in asking tough questions and maintaining my\n"
	"independence. [H]", "I've typically been interested in maintaining my stability and peace of\n"
	"mind. [A]", 'H', 'A', &types->h_5, &types->a_9);

	/* Statement Pair 23 */
	stats_form("23.I've been a bit cynical and skeptical. [B]",
	"I've been a bit mushy and sentimental. [F]", 'B', 'F', &types->b_6, &types->f_2);

	/* Statement Pair 24 */
	stats_form("24.I've often worried that I'm missing out on something better. [I]", "I've often worried that if I let down my guard, someone will take advantage\n"
	"of me. [G]", 'I', 'G', &types->i_7, &types->g_8);

	/* Statement Pair 25 */
	stats_form("25.My habit of being \"stand-offish\" has annoyed people. [E]", "My habit of telling people what to do has annoyed people. [D]",
	'E', 'D', &types->e_4, &types->d_1);

	/* Statement Pair 26 */
	stats_form("26.I have tended to get anxious if there was too much excitement and\n"
	"stimulation. [A]", "I have tended to get anxious if there wasn't enough excitement and\n"
	"stimulation. [I]", 'A', 'I', &types->a_9, &types->i_7);

	/* Statement Pair 27 */
	stats_form("27.I have depended on my friends and they have known that they can depend\n"
	"on me. [B]", "I have not depended on people, I have done things on my own. [C]", 'B', 'C', &types->b_6, &types->c_3);

	/* Statement Pair 28 */
	stats_form("28.I have tended to be detached and preoccupied. [H]",
	"I have tended to be moody and self-absorbed. [E]", 'H', 'E',
	&types->h_5, &types->e_4);

	/* Statement Pair 29 */
	stats_form("29.I have liked to challenge people and \"shake them up\". [G]", "I have like to comfort people and calm them down. [F]", 'G', 'F',
	&types->g_8, &types->f_2);

	/* Statement Pair 30 */
	stats_form("30.I have generally been an outgoing, sociable person. [I]",
	"I have generally been an earnest, self-disciplined person. [D]",
	'I', 'D', &types->i_7, &types->d_1);

	/* Statement Pair 31 */
	stats_form("31.I've wanted to \"fit in\" with others – I get uncomfortable when I stand out\n"
	"too much. [A]", "I've wanted to stand out from others – I get uncomfortable when I don't distinguish myself. [C]",
	'A', 'C', &types->a_9, &types->c_3);

	/* Statement Pair 32 */
	stats_form("32.Pursuing my personal interests has been more important to me than having\n"
	"stability and security. [H]", "Having stability and security has been more important to me than pursuing my\n"
	"personal interests. [B]", 'H', 'B', &types->h_5, &types->b_6);

	/* Statement Pair 33 */
	stats_form("33.When I've had conflicts with others, I've tended to withdraw. [E]", "When I've had conflicts with others, I've rarely backed down. [G]", 'E', 'G', &types->e_4, &types->g_8);

	/* Statement Pair 34 */
	stats_form("34.I have given in too easily and let others push me around. [A]", "I have been too uncompromising and demanding with others. [D]", 'A', 'D', &types->a_9, &types->d_1);

	/* Statement Pair 35 */
	stats_form("35.I've been appreciated for my unsinkable spirit and resourcefulness. [I]", "I've been appreciated for my deep caring and personal warmth. [F]", 'I', 'F', &types->i_7, &types->f_2);

	/* Statement Pair 36 */
	stats_form("36.I have wanted to make a favorable impression on others. [C]", "I have cared little about making a favorable impression on others. [H]", 'C', 'H', &types->c_3, &types->h_5);

	/* Statement Pair 37 */
	stats_form("37.I've depended on my perseverance and common sense. [B]",
	"I've depended on my imagination and moments of inspiration. [E]",
	'B', 'E', &types->b_6, &types->e_4);

	/* Statement Pair 38 */
	stats_form("38.Basically, I have been easy-going and agreeable. [A]",
	"Basically, I have been hard-driving and assertive. [G]", 'A', 'G',
	&types->a_9, &types->g_8);

	/* Statement Pair 39 */
	stats_form("39.I have worked hard to be accepted and well-liked. [C]",
	"Being accepted and well-liked has not been a high priority for me. [D]", 'C', 'D', &types->c_3, &types->d_1);

	/* Statement Pair 40 */
	stats_form("40.In reaction to pressure from others, I have become more withdrawn. [H]", "In reaction to pressure from others, I have become more assertive. [I]", 'H', 'I', &types->h_5, &types->i_7);

	/* Statement Pair 41 */
	stats_form("41.People have been interested in me because I've been outgoing, engaging, and\n"
	"interested in them. [F]", "People have been interested in me because I've been quiet, unusual and deep. [E]",
	'F', 'E', &types->f_2, &types->e_4);

	/* Statement Pair 42 */
	stats_form("42.Duty and responsibility have been important values for me. [B]", "Harmony and acceptance have been important values for me. [A]", 'B', 'A', &types->b_6, &types->a_9);

	/* Statement Pair 43 */
	stats_form("43.I've tried to motivate people by making big plans and big promises. [G]", "I've tried to motivate people by pointing out the consequences of not\n"
	"following my advice. [D]", 'G', 'D', &types->g_8, &types->d_1);

	/* Statement Pair 44 */
	stats_form("44.I have seldom been emotionally demonstrative. [H]",
	"I have often been emotionally demonstrative. [F]", 'H', 'F',
	&types->h_5, &types->f_2);

	/* Statement Pair 45 */
	stats_form("45.Dealing with details has not been one of my strong suits. [I]", "I have excelled at dealing with details. [C]", 
	'I', 'C', &types->i_7, &types->c_3);

	/* Statement Pair 46 */
	stats_form("46.I have often emphasized how different I am from other people, especially\n"
	"my family. [E]", "I have often emphasized how much I have in common with most people, especially\n"
	"my family. [A]", 'E', 'A', &types->e_4, &types->a_9);

	/* Statement Pair 47 */
	stats_form("47.When situations have gotten heated, I have tended to stay on the sidelines. [H]", "When situations have gotten heated, I have tended to get right into the middle\n"
	"of things. [G]", 'H', 'G', &types->h_5, &types->g_8);

	/* Statement Pair 48 */
	stats_form("48.I have stood by my friends, even when they have been wrong. [B]", "I have not wanted to compromised what is right, even for friendship. [D]", 'B', 'D', &types->b_6, &types->d_1);

	/* Statement Pair 49 */
	stats_form("49.I've been a well-meaning supporter. [F]",
	"I've been a highly-motivated go-getter. [C]", 'F', 'C', &types->f_2, &types->c_3);

	/* Statement Pair 50 */
	stats_form("50.When troubled, I have tended to brood about my problems. [E]", "When troubled, I have tended to find distractions for myself. [I]", 'E', 'I', &types->e_4, &types->i_7);

	/* Statement Pair 51 */
	stats_form("51.Generally, I've had strong convictions and a sense of how things\n"
	"should be. [D]", "Generally, I've had serious doubts and have questioned how things seemed\n"
	"to be. [H]", 'D', 'H', &types->d_1, &types->h_5);

	/* Statement Pair 52 */
	stats_form("52.I've created problems with others by being pessimistic and complaining. [B]", "I've created problems with others by being bossy and controlling. [G]", 'B', 'G', &types->b_6, &types->g_8);

	/* Statement Pair 53 */
	stats_form("53.I have tended to act on my feelings and let the \"chips fall where they may\". [F]", "I have tended not to act on my feelings lest they stir up more problems. [A]", 'F', 'A', &types->f_2, &types->a_9);

	/* Statement Pair 54 */
	stats_form("54.Being the center of attention has usually felt natural to me. [C]", "Being the center of attention has usually felt strange to me. [E]", 'C', 'E', &types->c_3, &types->e_4);

	/* Statement Pair 55 */
	stats_form("55.I've been careful and have tried to prepare for unforeseen problems. [B]", "I've been spontaneous and have preferred to improvise as problems come up. [I]", 'B', 'I', &types->b_6, &types->i_7);

	/* Statement Pair 56 */
	stats_form("56.I have gotten angry when others have not shown enough appreciation for what\n"
	"I have done for them. [F]", "I have gotten angry when others have not listened to what I have told them. [D]", 'F', 'D', &types->f_2, &types->d_1);

	/* Statement Pair 57 */
	stats_form("57.Being independent and self-reliant has been important to me. [G]", "Being valued and admired has been important to me. [C]", 'G', 'C', &types->g_8, &types->c_3);

	/* Statement Pair 58 */
	stats_form("58.When I've debated with friends, I've tended to press my arguments\n"
	"forcefully. [H]", "When I've debated with friends, I've tended to let things go to prevent hard\n"
	"feelings. [A]", 'H', 'A', &types->h_5, &types->a_9);

	/* Statement Pair 59 */
	stats_form("59.I have often been possessive of loved ones – I have had trouble letting\n"
	"them be. [F]", "I have often \"tested\" loved ones to see if they were really there for me. [B]", 'F', 'B', &types->f_2, &types->b_6);

	/* Statement Pair 60 */
	stats_form("60.Organizing resources and making things happen has been one of my major\n"
	"strengths. [G]", "Coming up with new ideas and getting people excited about them has been one of\n"
	"my major strengths. [I]", 'G', 'I', &types->g_8, &types->i_7);

	/* Statement Pair 61 */
	stats_form("61.I've tended to be driven and very hard on myself. [D]",
	"I've tended to be too emotional and rather undisciplined. [E]",
	'D', 'E', &types->d_1, &types->e_4);

	/* Statement Pair 62 */
	stats_form("62.I have tried to keep my life fast-paced, intense, and exciting. [I]", "I have tried to keep my life regular, stable, and peaceful. [A]", 'I', 'A', &types->i_7, &types->a_9);

	/* Statement Pair 63 */
	stats_form("63.Even though I've had successes, I've tended to doubt my abilities. [B]", "Even though I've had setbacks, I've had a lot of confidence in my abilities. [C]", 'B', 'C', &types->b_6, &types->c_3);

	/* Statement Pair 64 */
	stats_form("64.I generally have tended to dwell on my feelings and to hold onto them for a\n"
	"long time. [E]", "I generally have tended to minimize my feelings and not pay very much attention\n"
	"to them. [H]",	'E', 'H', &types->e_4, &types->h_5);

	/* Statement Pair 65 */
	stats_form("65.I have provided many people with attention and nurturance. [F]",	"I have provided many people with direction and motivation. [G]", 'F', 'G', &types->f_2, &types->g_8);

	/* Statement Pair 66 */
	stats_form("66.I've been a bit serious and strict with myself. [D]",
	"I've been a bit free-wheeling and permissive with myself. [I]",
	'D', 'I', &types->d_1, &types->i_7);

	/* Statement Pair 67 */
	stats_form("67.I've been self-assertive and driven to excel. [C]",
	"I've been modest and have been happy to go at my own pace. [A]",
	'C', 'A', &types->c_3, &types->a_9);

	/* Statement Pair 68 */
	stats_form("68.I have been proud of my clarity and objectivity. [H]",
	"I have been proud of my reability and commitment. [B]", 'H', 'B',
	&types->h_5, &types->b_6);

	/* Statement Pair 69 */
	stats_form("69.I have spent a lot of time looking inward – understanding my feelings has\n"
	"been important to me. [E]", "I have not spent much time looking inward – getting things done has been\n"
	"important to me. [G]", 'E', 'G', &types->e_4, &types->g_8);

	/* Statement Pair 70 */
	stats_form("70.Generally, I have thought of myself as a sunny, casual person. [A]", "Generally, I have thought of myself as a serious, dignified person. [D]", 'A', 'D', &types->a_9, &types->d_1);

	/* Statement Pair 71 */
	stats_form("71.I've had an agile mind and boundless energy. [I]",
	"I've had a caring heart and deep dedication. [F]", 'I', 'F',
	&types->i_7, &types->f_2);

	/* Statement Pair 72 */
	stats_form("72.I have pursued activities that had a substantial potential for reward and\n"
	"personal recognition. [C]", "I have been willing to give up reward and personal recognition if it meant doing\n"
	"work I was really interested in. [H]", 'C', 'H', &types->c_3, &types->h_5);

	/* Statement Pair 73 */
	stats_form("73.Fulfilling social obligations has seldom been high on my agenda. [E]", "I have usually taken my social obligations very seriously. [B]", 'E', 'B', &types->e_4, &types->b_6);

	/* Statement Pair 74 */
	stats_form("74.In most situations, I have preferred to take the lead. [G]", "In most situations, I have preferred to let someone else take the lead. [A]", 'G', 'A', &types->g_8, &types->a_9);

	/* Statement Pair 75 */
	stats_form("75.Over the years, my values and lifestyle have changed several times. [C]", "Over the years, my values and lifestyle have remained fairly consistent. [D]", 'C', 'D', &types->c_3, &types->d_1);

	/* Statement Pair 76 */
	stats_form("76.Typically, I have not had much self-discipline. [I]",
	"Typically, I have not had much connection with people. [H]", 'I',
	'H', &types->i_7, &types->h_5);

	/* Statement Pair 77 */
	stats_form("77.I have tended to withhold my affection and have wanted others to come into\n"
	"my world. [E]", "I have tended to give my affection too freely and have wanted to extend\n"
	"myself to others. [F]", 'E', 'F', &types->e_4, &types->f_2);

	/* Statement Pair 78 */
	stats_form("78.I have had a tendency to think of worst-case scenarios. [B]", "I have had a tendency to think that everything will work out for the best. [A]", 'B', 'A', &types->b_6, &types->a_9);

	/* Statement Pair 79 */
	stats_form("79.People have trusted me because I am confident and can look out for them. [G]",
	"People have trusted me because I am fair and will do what is right. [D]", 'G', 'D', &types->g_8, &types->d_1);

	/* Statement Pair 80 */
	stats_form("80.Often, I have been so involved in my own projects that I have become isolated\n"
	"from others. [H]", "Often, I have been so involved with others that I have neglected my own\n"
	"projects. [F]", 'H', 'F', &types->h_5, &types->f_2);

	/* Statement Pair 81 */
	stats_form("81.When meeting someone new, I have usually been poised and self-contained. [C]", "When meeting someone new, I have usually been chatty and entertaining. [I]", 'C', 'I', &types->c_3, &types->i_7);

	/* Statement Pair 82 */
	stats_form("82.Generally speaking, I have tended to be pessimistic. [E]", "Generally speaking, I have tended to be optimistic. [A]", 'E',
	'A', &types->e_4, &types->a_9);

	/* Statement Pair 83 */
	stats_form("83.I have preferred to inhabit my own little world. [H]",
	"I have preferred to let the world know I'm here. [G]", 'H', 'G',
	&types->h_5, &types->g_8);

	/* Statement Pair 84 */
	stats_form("84.I have often been troubled by nervousness, insecurity, and doubt. [B]", "I have often been troubled by anger, perfectionism, and impatience. [D]", 'B', 'D', &types->b_6, &types->d_1);

	/* Statement Pair 85 */
	stats_form("85.I realize that I have often been too personal and intimate. [F]", "I realize that I have often been too cool and aloof. [C]", 'F', 'C', &types->f_2, &types->c_3);

	/* Statement Pair 86 */
	stats_form("86.I have lost out because I have not felt up to taking opportunities. [E]", "I have lost out because I have pursued too many possibilities. [I]", 'E', 'I', &types->e_4, &types->i_7);

	/* Statement Pair 87 */
	stats_form("87.I have tended to take a long time to get into action. [H]", "I have tended to get into action quickly. [D]", 'H', 'D',
	&types->h_5, &types->d_1);

	/* Statement Pair 88 */
	stats_form("88.I usually have had difficulty making decisions. [B]",
	"I seldom have had difficulty making decisions. [G]", 'B', 'G',
	&types->b_6, &types->g_8);

	/* Statement Pair 89 */
	stats_form("89.I have had a tendency to come on a little too strong with people. [F]", "I have had a tendency not to assert myself enough with people. [A]", 'F', 'A', &types->f_2, &types->a_9);

	/* Statement Pair 90 */
	stats_form("90.Typically, I have been even-tempered. [C]",
	"Typically, I have had strong changes of mood. [E]", 'C', 'E',
	&types->c_3, &types->e_4);

	/* Statement Pair 91 */
	stats_form("91.When I've been unsure of what to do, I've often sought the advice of\n"
	"others. [B]", "When I've been unsure of what to do, I've tried different things to see what\n"
	"worked best for me. [I]", 'B', 'I', &types->b_6, &types->i_7);

	/* Statement Pair 92 */
	stats_form("92.I have worried that I would be left out of others' activities. [F]", "I have worried that others' activities would distract me from what I had\n"
	"to do. [D]", 'F', 'D', &types->f_2, &types->d_1);

	/* Statement Pair 93 */
	stats_form("93.Typically, when I have gotten angry, I have told people off. [G]", "Typically, when I have gotten angry, I have become distant. [C]", 'G', 'C', &types->g_8, &types->c_3);

	/* Statement Pair 94 */
	stats_form("94.I've tended to have trouble falling asleep. [H]",
	"I've tended to fall asleep easily. [A]", 'H', 'A', &types->h_5,
	&types->a_9);

	/* Statement Pair 95 */
	stats_form("95.I have often tried to figure out how I could get closer to others. [F]", "I have often tried to figure out what others want from me. [B]", 'F', 'B', &types->f_2, &types->b_6);

	/* Statement Pair 96 */
	stats_form("96.I have usually been measured, straight-talking, and deliberate. [G]", "I have usually been excitable, fast-talking, and witty. [I]", 'G', 'I', &types->g_8, &types->i_7);

	/* Statement Pair 97 */
	stats_form("97.Often, I have not spoken up when I've seen others making a mistake. [E]", "Often, I have helped others see that they are making a mistake. [D]", 'E', 'D', &types->e_4, &types->d_1);

	/* Statement Pair 98 */
	stats_form("98.During most of my life, I have been a stormy person who has had many volatile\n"
	"feelings. [I]", "During most of my life, I have been a steady person in whom \"still waters run\n"
	"deep\". [A]", 'I', 'A', &types->i_7, &types->a_9);

	/* Statement Pair 99 */
	stats_form("99.When I have disliked people, I have usually tried hard to stay\n"
	"cordial – despite my feelings. [C]", "When I have disliked people, I have usually let them know it – one way or\n"
	"another. [B]", 'C', 'B', &types->c_3, &types->b_6);

	/* Statement Pair 100 */
	stats_form("100.Much of my difficulty with people has come from my touchiness and taking\n"
	"everything too personally. [E]", "Much of my difficulty with people has come from my not caring about social\n"
	"conventions. [H]", 'E', 'H', &types->e_4, &types->h_5);

	/* Statement Pair 101 */
	stats_form("101.My approach has been to jump in and rescue people. [F]",
	"My approach has been to show people how to help themselves. [G]",
	'F', 'G', &types->f_2, &types->g_8);

	/* Statement Pair 102 */
	stats_form("102.Generally, I have enjoyed \"letting go\" and pushing the limits. [I]", "Generally, I have not enjoyed losing control of myself very much. [D]", 'I', 'D', &types->i_7, &types->d_1);

	/* Statement Pair 103 */
	stats_form("103.I've been overly concerned with doing better than others. [C]", "I've been overly concerned with making things okay for others. [A]", 'C', 'A', &types->c_3, &types->a_9);

	/* Statement Pair 104 */
	stats_form("104.My thoughts generally have been speculative involving my imagination and\n"
	"curiosity. [H]", "My thoughts generally have been practical – just trying to keep things\n"
	"going. [B]", 'H', 'B', &types->h_5, &types->b_6);

	/* Statement Pair 105 */
	stats_form("105.One of my main assets has been my ability to take charge of situations. [G]", "One of my main assets has been my ability to describe internal states. [E]", 'G', 'E', &types->g_8, &types->e_4);

	/* Statement Pair 106 */
	stats_form("106.I have pushed to get things done correctly, even if it made people\n"
	"uncomfortable. [D]", "I have not liked feeling pressured, so I have not liked pressuring anyone\n"
	"else. [A]", 'D', 'A', &types->d_1, &types->a_9);

	/* Statement Pair 107 */
	stats_form("107.I've often taken pride in how important I am in others's lives. [F]", "I've often taken pride in my gusto and openness to new experiences. [I]", 'F', 'I', &types->f_2, &types->i_7);

	/* Statement Pair 108 */
	stats_form("108.I have perceived that I've often come across to others as presentable,\n"
	"even admirable. [C]", "I have perceived that I've often come across to others as unusual, even odd. [H]", 'C', 'H', &types->c_3, &types->h_5);

	/* Statement Pair 109 */
	stats_form("109.I've mostly done what I had to do. [B]",
	"I've mostly done what I wanted to do. [E]", 'B', 'E', &types->b_6, &types->e_4);

	/* Statement Pair 110 */
	stats_form("110.I have usually enjoyed high-pressure, even difficult, situations. [G]", "I have usually disliked being in high-pressured, even difficult, situations. [A]", 'G', 'A', &types->g_8, &types->a_9);

	/* Statement Pair 111 */
	stats_form("111.I've been proud of my ability to be flexible – what's appropriate or\n"
	"important often changes. [C]", "I've been proud of my ability to take a stand – I've been firm about what I\n"
	"believe in. [D]", 'C', 'D', &types->c_3, &types->d_1);

	/* Statement Pair 112 */
	stats_form("112.My style has leaned towards spareness and austerity. [H]", "My style has leaned towards excess and overdoing things. [I]",
	'H', 'I', &types->h_5, &types->i_7);

	/* Statement Pair 113 */
	stats_form("113.My own health and well-being have suffered because of my strong desire to\n"
	"help others. [F]", "My relationships have suffered because of my strong desire to attend to my\n"
	"personal needs. [E]", 'F', 'E', &types->f_2, &types->e_4);

	/* Statement Pair 114 */
	stats_form("114.Generally speaking, I've been too open and naive. [A]",
	"Generally speaking, I've been too wary and guarded. [B]", 'A',
	'B', &types->a_9, &types->b_6);

	/* Statement Pair 115 */
	stats_form("115.I have sometimes put people off by being too agressive. [G]", "I have sometimes put people off by being too \"uptight\". [D]",
	'G', 'D', &types->g_8, &types->d_1);

	/* Statement Pair 116 */
	stats_form("116.Being of service and attending to the needs of others has been a high\n"
	"priority for me. [F]", "Finding alternative ways of seeing and doing things has been a high priority\n"
	"for me. [H]", 'F', 'H', &types->f_2, &types->h_5);

	/* Statement Pair 117 */
	stats_form("117.I've been single-minded and persistent in pursuing my goals. [C]", "I've preferred to explore various courses of action to see where they lead. [I]", 'C', 'I', &types->c_3, &types->i_7);

	/* Statement Pair 118 */
	stats_form("118.I have frequently been drawn to situations that stir up deep, intense\n"
	"emotions. [E]", "I have frequently been drawn to situations that make me feel calm and\n"
	"at ease. [A]", 'E', 'A', &types->e_4, &types->a_9);

	/* Statement Pair 119 */
	stats_form("119.I have cared less about practical results than about pursuing my\n"
	"interests. [H]", "I have been practical and have expected my work to have concrete results. [G]", 'H', 'G', &types->h_5, &types->g_8);

	/* Statement Pair 120 */
	stats_form("120.I have had a deep need to belong. [B]",
	"I have had a deep need to feel balanced. [D]", 'B', 'D', &types->b_6, &types->d_1);

	/* Statement Pair 121 */
	stats_form("121.In the past, I've probably insisted on too much closeness in my\n"
	"friendships. [F]", "In the past, I've probably kept too much distance in my relationships. [C]", 'F', 'C', &types->f_2, &types->c_3);

	/* Statement Pair 122 */
	stats_form("122.I've had a tendency to keep thinking about things from the past. [E]", "I've had a tendency to keep anticipating things I'm going to do. [I]", 'E', 'I', &types->e_4, &types->i_7);

	/* Statement Pair 123 */
	stats_form("123.I've tended to see people as intrusive and demanding. [H]", "I've tended to see people as disorganized and irresponsible. [D]", 'H', 'D', &types->h_5, &types->d_1);

	/* Statement Pair 124 */
	stats_form("124.Generally, I have not had much confidence in myself. [B]", "Generally, I have had confidence only in myself. [G]", 'B', 'G',
	&types->b_6, &types->g_8);

	/* Statement Pair 125 */
	stats_form("125.I've probably been too passive and uninvolved. [A]",
	"I've probably been too controlling and manipulative. [F]", 'A',
	'F', &types->a_9, &types->f_2);

	/* Statement Pair 126 */
	stats_form("126.I've frequently been stopped in my tracks by my self-doubt. [E]", "I've rarely let self-doubt stand in my way. [C]", 'E', 'C', &types->e_4, &types->c_3);

	/* Statement Pair 127 */
	stats_form("127.Given a choice between something familiar and something new, I've usually\n"
	"chosen something new. [I]", "I've generally chosen what I knew I already liked: why be disappointed with\n"
	"something I might not like? [B]", 'I', 'B', &types->i_7, &types->b_6);

	/* Statement Pair 128 */
	stats_form("128.I have given a lot of physical contact to reassure others about how I feel\n"
	"about them. [F]", "I have generally felt that real love does not depend on physical contact. [D]", 'F', 'D', &types->f_2, &types->d_1);

	/* Statement Pair 129 */
	stats_form("129.When I've needed to confront someone, I've often been too harsh and\n"
	"direct. [G]", "When I've needed to confront someone, I've often \"beaten around the bush\"\n"
	"too much. [C]", 'G', 'C', &types->g_8, &types->c_3);

	/* Statement Pair 130 */
	stats_form("130.I have been attracted to subjects that others would probably find\n"
	"disturbing, even frightening. [H]", "I have preffered not to spend my time dwelling on disturbing, frightening\n"
	"subjects. [A]", 'H', 'A', &types->h_5, &types->a_9);

	/* Statement Pair 131 */
	stats_form("131.I have gotten into trouble with people by being too intrusive and\n"
	"interfering. [F]", "I have gotten into trouble with people by being too evasive and\n"
	"uncommunicative. [B]", 'F', 'B', &types->f_2, &types->b_6);

	/* Statement Pair 132 */
	stats_form("132.I've worried that I don't have the resources to fulfill the responsibilites\n"
	"I've taken on. [G]", "I've worried that I don't have the self-discipline to focus on what will\n"
	"really fulfill me. [I]", 'G', 'I', &types->g_8, &types->i_7);

	/* Statement Pair 133 */
	stats_form("133.Generally, I've been a highly intuitive, individualistic person. [E]", "Generally, I've been a highly organized, responsible person. [D]", 'E', 'D', &types->e_4, &types->d_1);

	/* Statement Pair 134 */
	stats_form("134.Overcoming inertia has been one of my main problems. [A]", "Being unable to slow down has been one of my main problems. [I]",
	'A', 'I', &types->a_9, &types->i_7);

	/* Statement Pair 135 */
	stats_form("135.When I've felt insecure, I've reacted by becoming arrogant and\n"
	"dismissive. [C]", "When I've felt insecure, I've reacted by becoming defensive and\n"
	"argumentative. [B]", 'C', 'B', &types->c_3, &types->b_6);

	/* Statement Pair 136 */
	stats_form("136.I have generally been open-minded and willing to try new approaches. [H]", "I have generally been self-revealing and willing to share my feelings with\n"
	"others. [E]", 'H', 'E', &types->h_5, &types->e_4);

	/* Statement Pair 137 */
	stats_form("137.I've presented myself to others as tougher than I really am. [G]", "I've presented myself to others as caring more than I really do. [F]", 'G', 'F', &types->g_8, &types->f_2);

	/* Statement Pair 138 */
	stats_form("138.I usually have followed my conscience and reason. [D]",
	"I usually have followed my feelings and impulses. [I]", 'D', 'I',
	&types->d_1, &types->i_7);

	/* Statement Pair 139 */
	stats_form("139.Serious adversity has made me feel hardened and resolute. [C]", "Serious adversity has made me feel discouraged and resign. [A]", 'C', 'A', &types->c_3, &types->a_9);

	/* Statement Pair 140 */
	stats_form("140.I usually have made sure that I had some kind of \"safety net\" to fall\n"
	"back on. [B]", "I usually have chosen to live on the edge and to depend on others as little as\n"
	"possible. [H]", 'B', 'H', &types->b_6, &types->h_5);

	/* Statement Pair 141 */
	stats_form("141.I've had to be strong for others, so I haven't had time to deal with my\n"
	"feelings and fears. [G]", "I've had difficulty coping with my feelings and fears, so it's been hard for me\n"
	"to be strong for others. [E]", 'G', 'E', &types->g_8, &types->e_4);

	/* Statement Pair 142 */
	stats_form("142.I have often wondered why people focus on the negative when there is so\n"
	"much that's wonderful about life. [A]", "I have often wondered why people are so happy when so much in life is\n"
	"messed up. [D]", 'A', 'D', &types->a_9, &types->d_1);

	/* Statement Pair 143 */
	stats_form("143.I have tried hard not to be seen as a selfish person. [F]", "I have tried hard not to be seen as a boring person. [I]", 'F',
	'I', &types->f_2, &types->i_7);

	/* Statement Pair 144 */
	stats_form("144.I have avoided intimacy when I feared I would be overwhelmed by people's\n"
	"needs and demands. [H]", "I have avoided intimacy when I feared I would not be able to live up to\n"
	"people's expectations of me. [C]", 'H', 'C', &types->h_5, &types->c_3);
}
