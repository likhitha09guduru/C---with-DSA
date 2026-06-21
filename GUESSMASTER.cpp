#include <iostream>
using namespace std;
class Guesser{
    public:
    int secretnumber;
     Guesser(){
         secretnumber=0;
     }
    public:
    void inputsecretnumber(int secretnumber){
        this->secretnumber=secretnumber;
    }
    int returnsecretnumber(){
        return secretnumber;
    }
};
class player{
    public:
    int numofplayer;
    player(){
        numofplayer=0;
    }
    public:
    void inputnumofplayer(int numofplayer){
        if(numofplayer <1 || numofplayer>100){
            cout<<"Given numofplayer is out of bounds!"<<endl;
        }
         else this->numofplayer=numofplayer;
    }
    int returnnumofplayer(){
        return numofplayer;
    }
};
class umpire{
    public:
    int g;
    int nump1;
    int nump2;
    int nump3;
 void getsecretnumber(){
     Guesser g1;
      int x;
      cout<<"The secret number is "<<" ";
      cin>>x;
       while(x<1 || x>100) {
           cout<<"secretnumber is out of bounds.choose number between 1 to 100"<<endl;
           cout<<"The secret number is "<<" ";
            cin>>x; 
       }
        g1.inputsecretnumber(x);
       g=g1.returnsecretnumber();
 }
 void getnumsfromtheplayers(){
     player p1;
     player p2;
     player p3;
     int x;
      cout<<"The number of player 1 is "<<" ";
      cin>>x;
       while(x<1 || x>100) {
           cout<<"number choosed by player is out of bounds.choose number between 1 to 100"<<endl;
           cout<<"The number of player 1 is "<<" ";
            cin>>x; 
       }
       p1.inputnumofplayer(x);
       nump1=p1.returnnumofplayer();
      cout<<"The number of player 2 is "<<" ";
       cin>>x;
        while(x<1 || x>100) {
           cout<<"number choosed by player is out of bounds.choose number between 1 to 100"<<endl;
           cout<<"The number of player 2 is "<<" ";
            cin>>x; 
       }
      p2.inputnumofplayer(x);
      nump2=p2.returnnumofplayer();
      cout<<"The number of player 3 is "<<" ";
    cin>>x;
     while(x<1 || x>100) {
           cout<<"number choosed by player is out of bounds.choose number between 1 to 100"<<endl;
           cout<<"The number of player 3 is "<<" ";
            cin>>x; 
       }
      p3.inputnumofplayer(x);
     nump3=p3.returnnumofplayer();
}
void printtheresult(){
    if(g==nump1){//p1 has won,we should check for p2 and p3 
        if(g==nump2){//p1 has won and p2 has won,check for p3
            if(g==nump3){//p1,p2,p3 have won the game 
                cout<<"All the Players are GUESSMASTERS"<<endl;
            }
            else{//p1 ,p2 won the game and p3 lost
                cout<<"Players 1 and 2 are GUESSMASTERS "<<endl;
            }
        }
        else{//p1 has won the game and p2 lost ,check for p3
            if(g==nump3){//p1 and p3 won the game and p2 lost
                cout<<"Players 1 and 3 are GUESSMASTERS "<<endl;
            }
            else{//p1 won the game and p2,p3 lost the game
                cout<<"Player 1 is the GUESSMASTER "<<endl;
            }
        }
    }
    else if(g==nump2){//p1 lost,p2 won,check for p3
            if(g==nump3){//p1 lost,p2 won,p3 won
                cout<<"Players 2 and 3 are GUESSMASTERS "<<endl;
            }
            else{//p1 lost,p2 won,p3 lost
                cout<<"Player 2 is the GUESSMASTER "<<endl;
            }
    }
    else if(g==nump3){//p1 and p2 lost ,p3 won
         cout<<"Player 3 is the GUESSMASTER "<<endl;
    }
    else{//ALL lost the game
        cout<<"No PLayer is the GUESMASTER "<<endl;
    }
  }
};
int main()
{
    cout<<"LET'S PLAY !"<<endl;
    umpire u;
    u.getsecretnumber();
    u.getnumsfromtheplayers();
    u.printtheresult();
    cout<<"End Game !";
}