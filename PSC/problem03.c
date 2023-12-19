#include<stdio.h>
typedef struct fritacole {
char name[100];
float height;
int integrity, ability,discipline,interest;
} Fritacole;

typedef struct Game {
char teamname[100];
int team;
} game;

typedef struct Team {
char playername[100]
int players;
} team;

typedef struct point {
int ability;
int height;
int interest;
} Point;
typedef struct Foul{
int discipline;
int integrity;
}foul;
 
Fritacole input() {
    Fritacole team;
    printf("Enter the no. of teams:");
    scanf("%d",&team);
    return team;
}
