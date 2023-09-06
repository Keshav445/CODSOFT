// Tic Tac Toe game

#include<iostream>
using namespace std;
char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char turn = 'x';
int row;
int column;
bool draw =false;
void display_space(){
    system("cls");
    cout<<"TIC TAC TOE GAME"<<endl; 
    cout<<"    Player1 [x] \n    Player2 [o] \n\n";

    cout<<"\t\t     |     |     \n";
    cout<<"\t\t " << space[0][0] <<"   | "<< space[0][1]<<"   |  "<<space[0][2] <<" \n";
    cout<<"\t\t ____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t " << space[1][0] <<"   | "<< space[1][1]<<"   |  "<<space[1][2] <<" \n";
    cout<<"\t\t ____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t " << space[2][0] <<"   | "<< space[2][1]<< "   |  "<<space[2][2] <<" \n";
    cout<<"\t\t     |     |     \n";

}
void player_turn(){
    int digit;
    if(turn== 'x')
    cout<<"Player [x] turn : ";
    if(turn== 'o')
    cout<<"Player [o] turn : ";
    cin>>digit;
    switch(digit){
        case 1: row=0;column =0; break;
        case 2: row=0;column =1; break;
        case 3: row=0;column =2; break;
        case 4: row=1;column =0; break;
        case 5: row=1;column =1; break;
        case 6: row=1;column =2; break;
        case 7: row=2;column =0; break;
        case 8: row=2;column =1; break;
        case 9: row=2;column =2; break;
        default: 
        cout<<"INVALID DIGIT   OR    \n  .....Please Try Again    \n ";
        break;
    }
    if(turn=='x' && space[row][column]!= 'x'&& space[row][column]!= 'o'){
        space[row][column]= 'x';
        turn = 'o';
    }
    else if(turn=='o'&& space[row][column]!= 'x'&& space[row][column]!= 'o'){
        space[row][column]= 'o';
        turn = 'x';
    }
    else{
        cout<<"CELL is already filled.\n Please Try Again!!\n\n";
        player_turn();
    }
    display_space();
}
   
bool gameend(){
 
    for(int i=0;i<3;i++)
    if(space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
    return false;

    if(space[0][0] == space[1][1] && space[0][0]==space[2][2] || space[0][2] == space[1][1] && space[0][2]==space[2][0])
    return false;
    
    for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    if(space[i][j] != 'x' && space[i][j]!='o')
    return true;
    
 draw=true;
    return false;
}
 int main(){
 while(gameend()){
    display_space();
    player_turn ();
    gameend();
 }

 if(turn == 'x' && draw==false )
 cout<<"Player 2 wins!! \n"; 
 else if(turn == 'o' && draw==false )
 cout<<"Player 1 wins!! \n"; 
 else if(draw == true)
    cout<<"Game Draw!! "<<endl<<"Play Again"<<endl;
 return 0;
 }