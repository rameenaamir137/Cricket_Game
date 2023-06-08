#include <iostream>
#include <time.h>
#include <Windows.h>
#include "main.h"
using namespace std;


int teamplay::gen_rand_num(){
    num = 1 + rand()%7;
    return num;
}
int teamplay::select_team(){
    num = 1 + rand()%2;
    return num;
}

void teamplay::player_score(){
    if (out ==0){
        player = 1;
        if (num == 7){
            p1score += 0;
        }
        else{
            p1score += num;
        }
        b1 +=1;
    }
    else if (out ==1){
        player = 2;
        if (num == 7){
            p2score += 0;
        }
        else{
            p2score += num;
        }
        b2 += 1;
    }
    else if (out ==2){
        player = 3;
        if (num == 7){
            p3score += 0;
        }
        else{
            p3score += num;
        }
        b3 += 1;
    }
}

void teamplay::control(){
    if (num == 7){
        out += 1;
        balls += 1;
        cout<<"The player "<<player<<" is out."<<endl;

    }
    else {
        score += num;
        balls += 1;
        cout<<"The player "<<player<<" has scored "<<num<<" runs."<<endl;

    }
}

void teamplay::ball(){
    cout<<"This is ball no "<<balls<<endl;
    gen_rand_num();
    control();
    player_score();
    cout<<"The total score is "<<score<<endl;
    cout<<"The total outs are : "<<out<<endl;
    if (inning == 2){
        cout << score_team1 - score << " are required in " << 7 - balls << " balls to win the match." << endl;
    }
    Sleep(2000);
    cout<<endl<<endl;

}

void teamplay::loop(){
    while (check()){
        ball();
        if (score_team1 - score < 0){
            break;
        }
    }
}

bool teamplay::check() const{
    if (inning == 1){
        if (balls <= 6 and out <= 2){
            return true;
        }
        else{
            return false;
        }
    }
    else if (inning == 2){
        if (balls <= 6 and out <= 2 and score_team1 - score >= 0){
            return true;
        }
        else{
            return false;
        }
    }
}

teamplay::teamplay(){
    srand(time(NULL));
    out_team1 = out = score  = num = p1score = p2score= p3score =0 ;
    player = balls= b1 = b2 = b3 = 1;
    score_team1 = 100;
    inning = 1;
    clc = select_team();
    if (clc == 1) {
        name = "Computer";
    } else {
        name = "You";

    }
    cout << name << " have won the toss and will bat first." << endl;
    cout << "This is inning number " << inning << " ." << endl << endl;
    loop();
    cout << "The inning " << inning << " has come to an end." << endl;
    cout << "The total score of  " << name << " is " << score << " with the total outs of " << out << endl;
    cout << "The overall run rate is " << score / balls - 1 << endl;
    cout << "summary : Team " <<inning <<endl;
    cout << "player  \t      score  \t   runrate" << endl;
    cout << "player1" << "  \t\t" << p1score << "  \t\t" << p1score / b1 << endl;
    cout << "player2" << "  \t\t" << p2score << "  \t\t" << p2score / b2 << endl;
    cout << "player3" << "  \t\t" << p3score << "  \t\t" << p3score / b3<< endl;
    cout << "Total  " << "  \t\t" << score << "  \t\t" << score / (balls-1) << endl;
    Sleep(10000);
    cout<<endl<<endl<<endl;
};

teamplay::teamplay(int sco, string n, int ou){
    srand(time(NULL));
    score_team1 = sco +1;
    out_team1 = ou;
    out = score  = num = p1score = p2score= p3score =0 ;
    player = balls= b1 = b2= b3=1;
    inning = 2;
    if (n == "Computer"){
        name = "You";
    }
    else {
        name = "Computer";
    }
    cout << "This is inning number " << inning << " ." << endl << endl;
    cout << name << " have to score " << score_team1 << " runs  in 6 balls to win the match." << endl;
    loop();
    if (score_team1 - score > 0){
        cout << name << " have lost the match with required runs " << score_team1 - score << endl;
    }
    else if (score_team1 - score < 0){
        cout<<name<<" have won the match with "<<3-out<<" wickets and "<<7- balls<<" balls left."<<endl;
    }
    else{
        cout<<"Both the teams have scored the same."<<endl;
        if (ou < out){
            cout << name << " have lost the match due due to loss of more wickets. " << score_team1 - score << endl;
        }
        else if (ou > out){
            cout<<name<<" have won the match with "<<3-out<<" wickets and"<<7- balls<<" balls left."<<endl;
        }
        else{
            cout<<"Both the teams lost same number of wickets."<<endl;
            cout<<"Hence this match has resulted in a draw."<<endl;
        }
    }
    cout << "summary : Team " <<inning << endl;
    cout << "player  \t      score  \t   runrate" << endl;
    cout << "player1" << "  \t\t" << p1score << "  \t\t" << p1score / b1  << endl;
    cout << "player2" << "  \t\t" << p2score << "  \t\t" << p2score / b2 << endl;
    cout << "player3" << "  \t\t" << p3score << "  \t\t" << p3score / b3  << endl;
    cout << "Total  " << "  \t\t" << score << "  \t\t" << score / (balls-1) << endl;
    Sleep(10000);
    cout<<endl<<endl<<endl;
};


int teamplay::inning = 0;

