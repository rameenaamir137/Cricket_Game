#ifndef ASSIGNMENT_MAIN_H
#define ASSIGNMENT_MAIN_H

#include <iostream>
#include <time.h>
#include <Windows.h>
using namespace std;

class teamplay{
    static int inning;
    int num ,player, balls, p1score, p2score, p3score,b1, b2, b3, clc ;


public:
    string name;
    int out, score, score_team1, out_team1{};
    int gen_rand_num();
    int select_team();

    void player_score();


    void control();

    void ball();

    void loop();

    bool check() const;

    teamplay();

    teamplay(int sco, string n, int ou);

};



#endif //ASSIGNMENT_MAIN_H
