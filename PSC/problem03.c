/*. A Fritacole has attributes: name, height,  integrity, interest, ability, discipline.
There were two teams of Fritacoles playing a freyball game.
A freyball game consists of points and fouls
Each point is scored by a fritacole.
Each foul is committed by a fritacole.
The team that scores more goals wins the game.
If the goals are the same, the team that commits less fouls wins the game.

a. Write a function to verify whether the better team won a game?
Note that taller the person, the more chance that the fritacole may score a point.

b, Write a function to convert a fritacole into a string.

c. Write a function to convert a string into a fritacole.
*/
#include<stdio.h>
#include<string.h>
typedef struct _fritacole {
    int id;
    char name[100];
    float height;
    int integrity;
    int ability;
    int discipline;
    int interest;
} fritacole;
typedef struct _foul {
    int id;
}foul;
typedef struct  _point 
{
    int id;
}point;
typedef struct Team {
    char teamname[100];
    int numplayers;
    fritacole players[100];
} team;

typedef struct Game {
    team teams[2];
    int num_points;
    point p[100];
    int num_fouls;
    foul f[100]
} game;


fritacole input_fritacole()
{
   fritacole f;
   printf("Enter the fritacole ID:");
   scanf("%d",&f.id);
   printf("Enter the name of  fritacole:");
   scanf("%s", &f.name);
   printf("Enter the height of  fritacole:");
   scanf("%f",&f.height);
   printf("Enter the integrity of fritacole:");
   scanf("%d",&f.integrity);
   printf("Enter the ability of fritacole:");
   scanf("%d",&f.ability);
   printf("Enter the discipline of fritacole:");
   scanf("%d",&f.discipline);
   printf("Enter the interest of fritacole:");
   scanf("%d",&f.interest);
   return f;
}

void input_n_fritacoles(int n, fritacole f[n])
{
   for (int i = 0; i < n; i++) {
    printf("Enter the details of fritacole for %d\n", i+1);
    f[i] = input_fritacole();
   }
}


team input_team()
{
    team t;
    printf("Enter the name of the team:");
    scanf("%s",&t.teamname);
    printf("Enter the number of players in a team:");
    scanf("%d",&t.numplayers);
    input_n_fritacoles(t.numplayers,t.players);
    return t;
}

game input_game()
{
   game g;
   printf("Enter details of Team 1:\n");
   g.teams[0] = input_team();
   printf("Enter details of Team 2:\n");
   g.teams[1] = input_team();
   printf("Enter the number of points:");
   scanf("%d",&g.num_points);
   printf("Enter the number of fouls:");
   scanf("%d",&g.num_fouls);
   return g;
}

point input_point()
{
  point p;
  printf("Enter the point scored by fritacole id:");
  scanf("%d",&p.id);
  return p;
}

foul input_foul()
{
    foul f;
    printf("Enter the foul scored by fritacole id:");
    scanf("%d",&f.id);
    return f;
}

void verify_game(game g) {
    int team_points=0;   
    int team_fouls= 0; 

    for (int i = 0; g.p[i].id <= g.teams->numplayers;i++) {
        team_points += g.teams[0]->height + g.teams[0]->ability;
    }
    for (int i = 0; g.p[i].id <= g.teams->numplayers;i++) {
        team_fouls++;
    }    

}
