#include <iostream>

using namespace std;

void Player1Turn();
void Player2Turn();
void Score();
void StartGame();
void CheckPlayer1();
void CheckPlayer2();
string positions[9]={" "," "," "," "," "," "," "," "," "};

int main()
{
    string answer;
    cout << "Would you like to play " << endl;
    getline(cin, answer);
    if (answer == "Y" || answer == "y" || answer == "yes" || answer == "Yes"){
        StartGame();
    }
    return 0;
}

void StartGame(){
    cout <<"Starting... " << endl;
    cout << "0|1|2"<< endl << "-----" << endl << "3|4|5" << endl << "-----" << endl << "6|7|8" << endl;
    Score();
    Player1Turn();
}

void Score(){
    string output;
    output=(positions[0]=="1")?"1":positions[0];
    cout << positions[0] << "|" << positions[1] << "|" << positions[2] << endl << "-----" << endl <<positions[3] << "|"<< positions[4]<< "|" << positions[5] << endl << "-----" << endl << positions[6] << "|" <<positions[7]<<"|" <<positions[8] << endl;
}
void Player1Turn(){
    int Player1Answer;
    cout <<"Player 1 turn"<< endl;
    cout << "Where would you like to go with 0 being top left and 8 being bottom right" << endl;
    cin >> Player1Answer;
    if (positions[Player1Answer]==" "){
        cout << "Yey!" << endl;
        positions[Player1Answer] = "X";
    }
    else{
        cout << "sorry this has been taken or does not exist" << endl;
        Player1Turn();
    }
    Score();
    CheckPlayer1();
}
void Player2Turn(){
    int Player1Answer;
    cout <<"Player 2 turn"<< endl;
    cout << "Where would you like to go with 0 being top left and 8 being bottom right" << endl;
    cin >> Player1Answer;
    if (positions[Player1Answer]==" "){
        cout << "Yey!" << endl;
        positions[Player1Answer] = "O";
    }
    else{
        cout << "sorry this has been taken or does not exist" << endl;
        Player2Turn();
    }
    Score();
    CheckPlayer2();
}
void CheckPlayer1(){
    //Vertical
    if(positions[0]=="X"&&positions[3]=="X"&&positions[6]=="X"||positions[1]=="X"&&positions[4]=="X"&&positions[7]=="X"||positions[2]=="X"&&positions[5]=="X"&&positions[8]=="X"||positions[0]=="X"&&positions[1]=="X"&&positions[2]=="X"||positions[3]=="X"&&positions[4]=="X"&&positions[5]=="X"||positions[6]=="X"&&positions[7]=="X"&&positions[8]=="X"||positions[2]=="X"&&positions[4]=="X"&&positions[6]=="X"){
        cout << "Player 1 won" << endl;
    }
    else{
        Player2Turn();
    }
}

void CheckPlayer2(){
    //Vertical
    if(positions[0]=="O"&&positions[3]=="O"&&positions[6]=="O"||positions[1]=="O"&&positions[4]=="O"&&positions[7]=="O"||positions[2]=="O"&&positions[5]=="O"&&positions[8]=="O"||positions[0]=="O"&&positions[1]=="O"&&positions[2]=="O"||positions[3]=="O"&&positions[4]=="O"&&positions[5]=="O"||positions[6]=="O"&&positions[7]=="O"&&positions[8]=="O"||positions[2]=="O"&&positions[4]=="O"&&positions[6]=="O"){
        cout << "Player 2 won" << endl;
    }
    else{
        Player1Turn();
    }
}
