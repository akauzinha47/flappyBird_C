#ifndef STRUCTS
#define STRUCTS

#define BAT_X 9
#define BAT_Y 14
#define BAT_VALUE 9

#include <string.h>
#include <stdio.h>

typedef struct {
    int x;
    int y;

} Pipe;

typedef struct {
    char name[6];
    int score;

} Player;

typedef struct {
    int x;
    int y;
    int value;

} Bat;

void flap(int array[][WIDTH], Bat *bat)
{
    bat->y-=2;
    array[(bat->y) + 2][bat->x] = 0;
}

void gravity(int array[][WIDTH], Bat *bat)
{
    bat->y++;
    array[(bat->y) - 2][bat->x] = 0;
}

Pipe construct_pipe()
{
    Pipe newpipe;
    newpipe.x = 0;
    newpipe.y = 0;

    return newpipe;
}

Player construct_player(char name[6])
{
    Player newplayer;

    strcpy(newplayer.name, name);
    newplayer.score = 0;

    return newplayer;
}

Bat construct_bat()
{
    Bat newbat;
    newbat.x = BAT_X;
    newbat.y = BAT_Y;
    newbat.value = BAT_VALUE;

    return newbat;
}

#endif // !STRCTS