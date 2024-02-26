#include<stdio.h>
typedef struct fritacole {
char name[100];
float height;
} Fritacole;
typedef struct foul {
    char name [100];
    int ability;
}fouls;
typedef struct  point 
{
    char name[100];
    float height;
}points;
typedef struct Team {
char playername[100];
int numplayers;
Fritacole players[100];
fouls foul[100];
points point[100];
int num_fouls;
int num_points;
} team;

typedef struct Game {
    team teams[2];
}game;

void frita_name(Fritacole *a) {
    printf("Enter the name of the fritacole:");
    scanf("%s",a->name);
    printf("Enter the height:");
    scanf("%f",a->height);
}




