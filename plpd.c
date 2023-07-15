/*
 * __     __
 * ,`\.^./`,
 *    (U)
 *     Y
 *     |
 *
 * plpd - terminal primitive submarine simulator game.
 * author:
 *	Jerzy Pavka
 *	mail jerzypavka@gmail.com
 *	site https://irrumator228.github.io/
 */

#define VERSION "plpd-0.0.1-egg"

#include <stdio.h>
#include <stdlib.h>

/* uncomment the desired language and comment out the unused one */

//en
#define TXT_START    "start"
#define TXT_NEW_GAME "new game"
#define TXT_
//end en

/*
//ru
#define TXT_START    "старт"
#define TXT_NEW_GAME "новая игра"
#define TXT_
//end ru
*/

#define MIN_STR  10
#define BUF_SIZE 100

/* terminal colors */

#define KNRM  "\x1B[0m"
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define KYEL  "\x1B[33m"
#define KBLU  "\x1B[34m"
#define KMAG  "\x1B[35m"
#define KCYN  "\x1B[36m"
#define KWHT  "\x1B[37m"

/* constans */

#define SBMRN_LENGTH     77
#define SBMRN_WIDHT       8
#define SBMRN_HEIGHT     12
#define MAX_NUM_TRPD     23
#define SBMRN_MAX_SPEED  30 
#define TRPD_MAX_SPEED  111

/* commands */

#define LEFT           1
#define RIGHT          2
#define UP             3
#define DOWN           4
#define TANGAGE_UP     5
#define TANGAGE_DOWN   6
#define SONAR_SIGNAL   7
#define TRPD_LAUNCH    8
#define OPEN_SONAR     9
#define OPEN_RADAR    10
#define SOUND_PLUS    11
#define SOUND_minus   12
#define OPEN_MAP      13
#define OPEN_COMPAS   14
#define HELP          15

/* instrument status */

#define ON  100
#define OFF 101

typedef struct coordinates {
	float x;
	float y;
	float z;
} coordinates;

main() {
	char day [MIN_STR];
	unsigned short int month_num;
	char month_name [MIN_STR];
	unsigned short int hours;
	unsigned short int minutes;
	unsigned short int sound_state;
	unsigned short int noise_alert;
	unsigned int immersion_depth;
	unsigned int lst_bottom_distance;
	unsigned short int engine_condition;
	unsigned short int num_of_torpedoes;
	unsigned short int speed;
	
	char buf[BUF_SIZE];

	/*
	for (;;) {
		scanf("%s",buf);
		switch() {
			
		}
		//sleep(1);
	}
	*/

}

/*
самонаводящиеся пассивные торпеды
по звуку
по магниту  
*/
