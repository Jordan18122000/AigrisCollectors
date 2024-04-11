#ifndef CONSTANTS_H
#define CONSTANTS_H

#undef DEMO

// OS CONFIGURATION
#define OS_DELAY 1
#define OS_DELAY_FIRE 1000
#define NB_SHIPS 8
#define BUFFER_SIZE 30
#define MAIN_TASK_SIZE 128
#define TASKS_SIZES_COLLECTOR 1500
#define TASKS_SIZES_ATTACKER 1224
#define TASKS_SIZES_EXPLORER 2248
#define RX_COMMAND_BUFFER_SIZE 860

// GAME INFORMATIONS

#define ATTACKER_1 (uint8_t)0
#define ATTACKER_2 (uint8_t)1
#define ATTACKER_3 (uint8_t)2
#define ATTACKER_4 (uint8_t)3
#define ATTACKER_5 (uint8_t)4

#define EXPLORER_1 (uint8_t)5
#define EXPLORER_2 (uint8_t)6

#define COLLECTOR_1 (uint8_t)7
#define COLLECTOR_2 (uint8_t)8

#define COLLECTOR_ENEMY_1 (uint8_t)16
#define COLLECTOR_ENEMY_2 (uint8_t)17

#define MAX_PLANETS_NUMBER 8
#define SHIPS_NUMBER 9
#define NUMBER_OF_TEAM 4
#define BASE_NUMBER 1
#define NUMBER_OF_GAME_DATA 1
#define MAX_DISTANCE_BETWEEN_POINT 28286

// PARSING DELIMITER
#define SERVER_RESPONSE_DELIMITER ","
#define SERVER_RESPONSE_PLANET_DELIMITER 'P'
#define SERVER_RESPONSE_SHIP_DELIMITER 'S'
#define SERVER_RESPONSE_BASE_DELIMITER 'B'

#define SHIP_FOLLOWER_OFFSET_X 1000
#define SHIP_FOLLOWER_OFFSET_Y 500

#endif // CONSTANTS_H