#include <iostream>
#include <conio.h>
#include <ctime>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <time.h>
#include <cstdlib>
using namespace std;
using namespace sf;
char board[3][3]={{'7','8','9'},{'4','5','6'},{'1','2','3'}}; //using a character array because we need to input X and O;
char choice;
int turn;
Music msc;
int playermark;
bool gameover=false;
RenderWindow window;
Event evt;
Sprite smainscreen,smode,sinst,sendscreen,ssong;
int mchoice,lchoice,rdraw,csong;
void level();
void checklchoice();
void checkmchoice();
void printboard();
void chooseplayer();
void initializeboard();
void lselector();
void easymode();
void hardmode();
void mainscreen();
void gobackinst();
void gobackmsc();
void songs();
void songplay();
void redraw();
void HASSANULHAQmode();

void level()
{
initializeboard();
    if (evt.type ==Event::MouseButtonPressed)
      {if (evt.mouseButton.button == Mouse::Left)
        {if (Mouse::getPosition(window).x >= 288 && Mouse::getPosition(window).x <= 500 && Mouse::getPosition(window).y >= 165 && Mouse::getPosition(window).y <= 216)
         {mchoice=1;}
        else if (Mouse::getPosition(window).x >= 288 && Mouse::getPosition(window).x <= 500 && Mouse::getPosition(window).y >= 265 && Mouse::getPosition(window).y <= 305)
            {mchoice=2;}
        else if (Mouse::getPosition(window).x >= 288 && Mouse::getPosition(window).x <= 500 && Mouse::getPosition(window).y >= 350 && Mouse::getPosition(window).y <= 390)
            {mchoice=3;}
        else if (Mouse::getPosition(window).x >= 288 && Mouse::getPosition(window).x <= 500 && Mouse::getPosition(window).y >= 487 && Mouse::getPosition(window).y <= 527)
            {mchoice=4;}
}
      }
}
void checkmchoice()
{
                   if (mchoice==1)
                   {window.draw(smode);
                    window.display();
                    choice='S' ;
                    system("CLS");
                    cout<<"Please choose a difficulty level:"<<endl;
                    cout<<"\n1)Easy\n2)Hard\n3)Hassan Ul Haq"<<endl;
                    checklchoice();}


                    else if (mchoice==2)
                    {window.draw(sinst);
                    window.display();
                    choice='I';
                    system("CLS");
                    cout<<"Tic Tac toe is a two player game, consisting of X's and O's."<<endl<<"In this program your opponent shall be the computer,"
                    <<" and you shall\nhave the option of choosing between three difficulty modes."<<endl;
                    cout<<"\n1)Easy"<<endl;
                    cout<<"2)Hard"<<endl;
                    cout<<"3)Hassan ul Haq"<<endl;
                    cout<<"\n\tThe user will always be X.";
                    cout<<"\n\tThe computer will always be O.";
                    cout<<"\n\nThe first player to get three in a row wins!"<<endl;
                    cout<<"\n\n\tPress any key to continue..."<<endl;
                    gobackinst();


}
                    else if (mchoice==3)
                    {window.draw(ssong);
                     window.display();
                     system("CLS");
                     cout<<"The music options are : \n1:Bohemian Rhapsody by Queen \n2:Mario Music \n3:Pokemon Battle \n4:American Idiot by GreenDay \n5:Halal Mode";
                     songs();
                     gobackmsc();}
                     else if (mchoice==4)
                     {window.draw(sendscreen);
                      window.display();
                      choice='Q' ;
                      system("CLS");
                      cout<<"\tWhy quit so soon?"<<endl;
                      sleep(seconds(2));
                      window.close();
                      }
                 }
                 ;
void checklchoice()
{if (evt.type ==Event::MouseButtonPressed)
 {if (evt.mouseButton.button == Mouse::Left)
   {if (Mouse::getPosition(window).x >= 60 && Mouse::getPosition(window).x <= 377 && Mouse::getPosition(window).y >= 205 && Mouse::getPosition(window).y <= 250)
         { mchoice=0;
          lchoice=1;
          lselector();
            }
         else if (Mouse::getPosition(window).x >= 60 && Mouse::getPosition(window).x <= 377 && Mouse::getPosition(window).y >= 319 && Mouse::getPosition(window).y <= 370)
         {mchoice=0;
         lchoice=2;
         lselector();
        }
         else if (Mouse::getPosition(window).x >= 60 && Mouse::getPosition(window).x <=377 && Mouse::getPosition(window).y >= 440 && Mouse::getPosition(window).y <= 488)
         {mchoice=0;
         lchoice=3;
         lselector();}
}
}
};
 void lselector()
 { if (lchoice==1)
           {mchoice=0;
            window.clear();
            system("CLS");
            printboard();
            cout<<"Toss in progress...."<<endl;
            chooseplayer();
            cout<<"Press any key to continue....\n\n"<<endl;
            getch();
            gameover=false;
            easymode();
            cout<<"Press any key to continue...."<<endl;
            getch();
            system("CLS");
            mainscreen();
            rdraw=1;
            }
else if (lchoice==2)
            {mchoice=0;
            window.clear();
            system("CLS");
            printboard();
            cout<<"Toss in progress...."<<endl;
            chooseplayer();
            cout<<"Press any key to continue....\n\n"<<endl;
            getch();
            gameover=false;
            hardmode();
            cout<<"Press any key to continue...."<<endl;
            getch();
            system("CLS");
            mainscreen();
            rdraw=1;
            }
else if (lchoice==3)
           {mchoice=0;
            window.clear();
            system("CLS");
            printboard();
            cout<<"Toss in progress...."<<endl;
            chooseplayer();
            cout<<"Press any key to continue....\n\n"<<endl;
            getch();
            gameover=false;
            HASSANULHAQmode();
            cout<<"Press any key to continue...."<<endl;
            getch();
            system("CLS");
            mainscreen();
            rdraw=1;
            }
 };
 void redraw()
 {if (rdraw==1)
 {lchoice=0;
 mchoice=0;
window.draw(smainscreen);
window.display();
rdraw=0;
}
};

void gobackinst()
{if (evt.type ==Event::MouseButtonPressed)
      {if (evt.mouseButton.button == Mouse::Left)
        {if (Mouse::getPosition(window).x >= 670 && Mouse::getPosition(window).x <= 800 && Mouse::getPosition(window).y >= 470 && Mouse::getPosition(window).y <= 600)
         {rdraw=1;
         system("CLS");
        mainscreen();}

}
}
};
void gobackmsc()
{if (evt.type ==Event::MouseButtonPressed)
      {if (evt.mouseButton.button == Mouse::Left)
        {if (Mouse::getPosition(window).x >= 1 && Mouse::getPosition(window).x <= 120 && Mouse::getPosition(window).y >= 1 && Mouse::getPosition(window).y <= 120)
         {rdraw=1;
         system("CLS");
        mainscreen();}

}
}
};

void songs()
{
if (evt.type ==Event::MouseButtonPressed)
      {if (evt.mouseButton.button == Mouse::Left)
         if (Mouse::getPosition(window).x >= 355 && Mouse::getPosition(window).x <= 800 && Mouse::getPosition(window).y >= 120 && Mouse::getPosition(window).y <= 165)
         {csong=1;
         songplay();}
         else if (Mouse::getPosition(window).x >=355 && Mouse::getPosition(window).x <=800 && Mouse::getPosition(window).y >=200 && Mouse::getPosition(window).y <= 250)
         {csong=2;
         songplay();}
         else if (Mouse::getPosition(window).x >=355 && Mouse::getPosition(window).x <=800 && Mouse::getPosition(window).y >=290 && Mouse::getPosition(window).y <= 330)
         {csong=3;
         songplay();}
         else if (Mouse::getPosition(window).x >=355 && Mouse::getPosition(window).x <=800 && Mouse::getPosition(window).y >=370 && Mouse::getPosition(window).y <= 420)
         {csong=4;
         songplay();}
         else if (Mouse::getPosition(window).x >=355 && Mouse::getPosition(window).x <=800 && Mouse::getPosition(window).y >=460 && Mouse::getPosition(window).y <= 500)
         {csong=5;
         songplay();}



}
};
void songplay()
{if (csong==1)
{msc.openFromFile("qbr.ogg");
msc.play();
msc.setLoop(true);}
else if (csong==2)
{msc.openFromFile("mm.ogg");
msc.play();
msc.setLoop(true);}
else if (csong==3)
{msc.openFromFile("pm.ogg");
msc.play();
msc.setLoop(true);}
else if (csong==4)
{msc.openFromFile("gd.ogg");
msc.play();
msc.setLoop(true);}
else if (csong==5)
{msc.openFromFile("mm.ogg");
msc.stop();}
};


void printboard()
{
    cout<<"|-----|-----|-----|"<<endl;
    cout<<"|  "<<board[0][0]<<"  |  "<<board[0][1]<<"  |  "<<board[0][2]<<"  |"<<endl;
    cout<<"|-----|-----|-----|"<<endl;
    cout<<"|  "<<board[1][0]<<"  |  "<<board[1][1]<<"  |  "<<board[1][2]<<"  |"<<endl;
    cout<<"|-----|-----|-----|"<<endl;
    cout<<"|  "<<board[2][0]<<"  |  "<<board[2][1]<<"  |  "<<board[2][2]<<"  |"<<endl;
    cout<<"|-----|-----|-----|"<<endl;
}

void chooseplayer()
{
    srand(time(0));
    int player=1+(rand()%2)-1+1;
    if(player == 1) //you go first
    {
        cout<<"You have the first turn!"<<endl;
        turn=1;
    }
    else
    {
        cout<<"The computer has the first turn!"<<endl;
        turn=2;
    }
}

void playerinput()
{
    bool terminator;


    cout<<"Please choose a location to place your mark"<<endl;

    do
    {
    terminator=true;
    cin>>playermark;
    if(playermark==7 && board[0][0]=='7'){
    board[0][0]='X';}

    else if(playermark==8 && board[0][1]=='8'){
    board[0][1]='X';}

    else if(playermark==9 && board[0][2]=='9'){
    board[0][2]='X';}

    else if(playermark==4 && board[1][0]=='4'){
    board[1][0]='X';}

    else if(playermark==5 && board[1][1]=='5'){
    board[1][1]='X';}

    else if(playermark==6 && board[1][2]=='6'){
    board[1][2]='X';}

    else if(playermark==1 && board[2][0]=='1'){
    board[2][0]='X';}

    else if(playermark==2 && board[2][1]=='2'){
    board[2][1]='X';}

    else if(playermark==3 && board[2][2]=='3'){
    board[2][2]='X';}

    else{
    cout<<"Invalid Output. Please try again!"<<endl;
    terminator=false;}

    }while(!terminator);
    system("CLS");
    printboard();

}

void randmoves()
{

    bool flag=false;
    while(!flag){
            int i=rand()%3;
    int j=rand()%3;
    if(board[i][j] != 'O' && board[i][j] != 'X'){
    board[i][j]='O';
    flag=true;}
    }

    system("CLS");
    printboard();
}

void checkwin()
{
    if(board[0][0] == board[0][1] && board[0][1]== board[0][2] && board[0][0]=='X'){
        cout<<"Congratulations! You win."<<endl;
        gameover=true;
    }
    else if(board[1][0]== board[1][1] && board[1][1] == board[1][2] && board[1][0]=='X'){
            cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[2][0]== board[2][1] && board[2][1] == board[2][2] && board[2][0]=='X'){
        cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[0][0]== board[1][0] && board[1][0] == board[2][0] && board[0][0]=='X'){
        cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[0][1]== board[1][1] && board[1][1] == board[2][1] && board[0][1]=='X'){
       cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[0][2]== board[1][2] && board[1][2] == board[2][2] && board[0][2]=='X'){
        cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[0][0]== board[1][1] && board[1][1] == board[2][2] && board[0][0]=='X'){
        cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[0][2]== board[1][1] && board[1][1] == board[2][0] && board[0][2]=='X'){ //USER'S WIN CONDITIONS END HERE
       cout<<"Congratulations! You win."<<endl;
            gameover=true;
    }
    else if(board[0][0] == board[0][1] && board[0][1]== board[0][2] && board[0][0]=='O'){
        cout<<"Tough luck! The computer wins."<<endl;
        gameover=true;
    }
    else if(board[1][0]== board[1][1] && board[1][1] == board[1][2] && board[1][0]=='O'){
            cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[2][0]== board[2][1] && board[2][1] == board[2][2] && board[2][0]=='O'){
        cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[0][0]== board[1][0] && board[1][0] == board[2][0] && board[0][0]=='O'){
        cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[0][1]== board[1][1] && board[1][1] == board[2][1] && board[0][1]=='O'){
       cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[0][2]== board[1][2] && board[1][2] == board[2][2] && board[0][2]=='O'){
        cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[0][0]== board[1][1] && board[1][1] == board[2][2] && board[0][0]=='O'){
       cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[0][2]== board[1][1] && board[1][1] == board[2][0] && board[0][2]=='O'){ //COMPUTER'S WIN CONDITIONS END HERE
      cout<<"Tough luck! The computer wins."<<endl;
            gameover=true;
    }
    else if(board[0][0]!='7' && board[0][1]!='8' && board[0][2]!='9' && board[1][0]!='4' && board[1][1]!='5' && board[1][2]!='6'
            && board[2][0]!='1' && board[2][1]!='2' && board[2][2]!='3')
    {
        cout<<"Oh my God! It's a tie. GG WP"<<endl;
        gameover=true;
    }


}

void easymode()
{

    while(!gameover){

        if(turn%2 != 0) //then it's the player's turn
        {
            playerinput();
            checkwin();
            turn++;
        }
        else if(turn%2==0) //then it's the computer's turn
        {
            randmoves();
            checkwin();
            turn++;
        }
    }

}

void computerAI() //HASSAN UL HAQ MODE
{
    //*********************OFFENSIVE MOVES*****************************************
    if(board[0][0]=='O' && board[0][1]=='O' && board[0][2] == '9'){
        board[0][2]='O';
    }
    else if(board[0][0]=='O' && board[0][2]=='O' && board[0][1] == '8'){
        board[0][1]='O';
    }
    else if(board[0][1]=='O' && board[0][2]=='O' && board[0][0] == '7'){
        board[0][0]='O';
    }
    else if(board[0][0]=='O' && board[1][0]=='O' && board[2][0] == '1'){
        board[2][0]='O';
    }
    else if(board[0][0]=='O' && board[2][0]=='O' && board[1][0] == '4'){
        board[1][0]='O';
    }
    else if(board[1][0]=='O' && board[2][0]=='O' && board[0][0] == '7'){
        board[0][0]='O';
    }
    else if(board[1][0]=='O' && board[1][1]=='O' && board[1][2] == '6'){
        board[1][2]='O';
    }
    else if(board[1][0]=='O' && board[1][2]=='O' && board[1][1] == '5'){
        board[1][1]='O';
    }
    else if(board[1][1]=='O' && board[1][2]=='O' && board[1][0] == '4'){
        board[1][0]='O';
    }
    else if(board[0][1]=='O' && board[1][1]=='O' && board[2][1] == '2'){
        board[2][1]='O';
    }
    else if(board[0][1]=='O' && board[2][1]=='O' && board[1][1] == '5'){
        board[1][1]='O';
    }
    else if(board[1][1]=='O' && board[2][1]=='O' && board[0][1] == '8'){
        board[0][1]='O';
    }
    else if(board[2][0]=='O' && board[2][1]=='O' && board[2][2] == '3'){
        board[2][2]='O';
    }
    else if(board[2][0]=='O' && board[2][2]=='O' && board[2][1] == '2'){
        board[2][1]='O';
    }
    else if(board[2][1]=='O' && board[2][2]=='O' && board[2][0] == '1'){
        board[2][0]='O';
    }
    else if(board[0][2]=='O' && board[1][2]=='O' && board[2][2] == '3'){
        board[2][2]='O';
    }
    else if(board[0][2]=='O' && board[2][2]=='O' && board[1][2] == '6'){
        board[1][2]='O';
    }
    else if(board[1][2]=='O' && board[2][2]=='O' && board[0][2] == '9'){
        board[0][2]='O';
    }
    else if(board[0][0]=='O' && board[1][1]=='O' && board[2][2] == '3'){
        board[2][2]='O';
    }
    else if(board[0][0]=='O' && board[2][2]=='O' && board[1][1] == '5'){
        board[1][1]='O';
    }
    else if(board[1][1]=='O' && board[2][2]=='O' && board[0][0] == '7'){
        board[0][0]='O';
    }
    else if(board[0][2]=='O' && board[1][1]=='O' && board[2][0] == '1'){
        board[2][0]='O';
    }
    else if(board[0][2]=='O' && board[2][0]=='O' && board[1][1] == '5'){
        board[1][1]='O';
    }
    else if(board[1][1]=='O' && board[2][0]=='O' && board[0][2] == '9'){
        board[0][2]='O';
    }







    //**********************DEFENSIVE MOVES****************************************
        else if(board[0][0]=='X' && board[0][1]=='X' && board[0][2] == '9'){            //first row
        board[0][2]='O';}
        else if(board[0][0]=='X' && board[0][2]=='X' && board[0][1] == '8'){    //first row
            board[0][1]='O';
        }
        else if(board[0][1]=='X' && board[0][2]=='X' && board[0][0] == '7'){    //first row
            board[0][0]='O';
        }
        else if(board[0][0]=='X' && board[1][0]=='X' && board[2][0] == '1'){    //first column
            board[2][0]='O';
        }
        else if(board[0][0]=='X' && board[2][0]=='X' && board[1][0] == '4'){    //first column
            board[1][0]='O';
        }
        else if(board[1][0]=='X' && board[2][0]=='X' && board[0][0] == '7'){    //first column
            board[0][0]='O';
        }
        else if(board[1][0]=='X' && board[1][1]=='X' && board[1][2] == '6'){   //second row
                board[1][2]='O';
        }
        else if(board[1][0]=='X' && board[1][2]=='X' && board[1][1] == '5'){   //second row
            board[1][1]='O';
        }
        else if(board[1][1]=='X' && board[1][2]=='X' && board[1][0] == '4'){    //second row
            board[1][0]='O';
        }
        else if(board[0][1]=='X' && board[1][1]=='X' && board[2][1] == '2'){    //second column
            board[2][1]='O';
        }
        else if(board[0][1]=='X' && board[2][1]=='X' && board[1][1] == '5'){        //second column
            board[1][1]='O';
        }
        else if(board[1][1]=='X' && board[2][1]=='X' && board[0][1] == '8'){        //second column
            board[0][1]='O';
        }
        else if(board[2][0]=='X' && board[2][1]=='X' && board[2][2] == '3'){        //third row
            board[2][2]='O';
        }
        else if(board[2][0]=='X' && board[2][2]=='X' && board[2][1] == '2'){        //third row
            board[2][1]='O';
        }
        else if(board[2][1]=='X' && board[2][2]=='X' && board[2][0] == '1'){        //third row
            board[2][0]='O';
        }
        else if(board[0][2]=='X' && board[1][2]=='X' && board[2][2] == '3'){        //third column
            board[2][2]='O';
        }
        else if(board[0][2]=='X' && board[2][2]=='X' && board[1][2] == '6'){        //third column
            board[1][2]='O';
        }
        else if(board[1][2]=='X' && board[2][2]=='X' && board[0][2] == '9'){        //third column
            board[0][2]='O';
        }
        else if(board[0][0]=='X' && board[1][1]=='X' && board[2][2] == '3'){        //diagonal 1
            board[2][2]='O';
        }
        else if(board[0][0]=='X' && board[2][2]=='X' && board[1][1] == '5'){        //diagonal 1
            board[1][1]='O';
        }
        else if(board[1][1]=='X' && board[2][2]=='X' && board[0][0] == '7'){        //diagonal 1
            board[0][0]='O';
        }
        else if(board[0][2]=='X' && board[1][1]=='X' && board[2][0] == '1'){        //diagonal 2
            board[2][0]='O';
        }
        else if(board[0][2]=='X' && board[2][0]=='X' && board[1][1] == '5'){        //diagonal 2
            board[1][1]='O';
        }
        else if(board[1][1]=='X' && board[2][0]=='X' && board[0][2] == '9'){        //diagonal 2
            board[0][2]='O';
        }

        //****************************OTHER MOVES!!!!!!!!!!!!!!*********************************************************************

        else if(board[0][0]=='X' && board[1][1]=='O' && board[2][2]=='X' && board[1][2] == '6')
        {
            board[1][2]='O';
        }
        else if(board[0][2]=='X' && board[1][1]=='O' && board[2][0]=='X' && board[1][0] == '4')
        {
            board[1][0]='O';
        }
        //****************************************************JUST FILL SOMETHING MAN******************************************
        else if(board[1][1] == '5')
        {
            board[1][1]='O';
        }
        else if(board[0][0] == '7')
        {
            board[0][0]='O';
        }
        else if(board[0][2] == '9')
        {
            board[0][2]='O';
        }
        else if(board[2][2] == '3')
        {
            board[2][2]='O';
        }
        else if(board[2][0] == '1')
        {
            board[2][0]='O';
        }
        else if(board[0][1] == '8')
        {
            board[0][1]='O';
        }
        else if(board[1][0] == '4')
        {
            board[1][0]='O';
        }
        else if(board[2][1] == '2')
        {
            board[2][1]='O';
        }
        else if(board[1][2] == '6')
        {
            board[1][2]='O';
        }
        system("CLS");
        printboard();

}
void computerAImedium() //weaknesses include the diagonals and the third row/column
{
    //**********************DEFENSIVE MOVES****************************************
        if(board[0][0]=='X' && board[0][1]=='X' && board[0][2] == '9'){            //first row
        board[0][2]='O';}
        else if(board[0][0]=='X' && board[0][2]=='X' && board[0][1] == '8'){    //first row
            board[0][1]='O';
        }
        else if(board[0][1]=='X' && board[0][2]=='X' && board[0][0] == '7'){    //first row
            board[0][0]='O';
        }
        else if(board[1][0]=='X' && board[1][1]=='X' && board[1][2] == '6'){   //second row
                board[1][2]='O';
        }
        else if(board[1][0]=='X' && board[1][2]=='X' && board[1][1] == '5'){   //second row
            board[1][1]='O';
        }
        else if(board[1][1]=='X' && board[1][2]=='X' && board[1][0] == '4'){    //second row
            board[1][0]='O';
        }
        else if(board[0][1]=='X' && board[1][1]=='X' && board[2][1] == '2'){    //second column
            board[2][1]='O';
        }
        else if(board[0][1]=='X' && board[2][1]=='X' && board[1][1] == '5'){        //second column
            board[1][1]='O';
        }
        else if(board[1][1]=='X' && board[2][1]=='X' && board[0][1] == '8'){        //second column
            board[0][1]='O';
        }


    //*************************************FILLING SOMETHING OMG*******************************************************************

        else if(board[2][2] == '3')
        {
            board[2][2]='O';
        }
        else if(board[2][0] == '1')
        {
            board[2][0]='O';
        }
        else if(board[0][1] == '8')
        {
            board[0][1]='O';
        }
        else if(board[1][0] == '4')
        {
            board[1][0]='O';
        }
        else if(board[0][0] == '7')
        {
            board[0][0]='O';
        }
        else if(board[0][2] == '9')
        {
            board[0][2]='O';
        }
        else if(board[1][1] == '5')
        {
            board[1][1]='O';
        }
        else if(board[2][1] == '2')
        {
            board[2][1]='O';
        }
        else if(board[1][2] == '6')
        {
            board[1][2]='O';
        }
        system("CLS");
        printboard();

}
void hardmode()
{
    while(!gameover){
        if(turn%2 != 0)
        {
            playerinput();
            checkwin();
            turn++;
        }
        else if(turn%2==0)
        {
            computerAImedium();
            checkwin();
            turn++;
        }
    }

}

void HASSANULHAQmode()
{
        while(!gameover){
        if(turn%2 != 0)
        {
            playerinput();
            checkwin();
            turn++;
        }
        else if(turn%2==0)
        {
            computerAI();
            checkwin();
            turn++;
        }
    }

}

void mainscreen()
{
    cout<<"Welcome to Tic Tac Toe!"<<endl;
    cout<<"\nClick 'Play Game' to start the game."<<endl;
    cout<<"\nClick 'Instructions' for instructions."<<endl;
    cout<<"\nClick 'Music' for Music."<<endl;
    cout<<"\nClick 'Quit Game' to quit the game."<<endl;

}
void initializeboard()
{
    board[0][0]='7';
    board[0][1]='8';
    board[0][2]='9';
    board[1][0]='4';
    board[1][1]='5';
    board[1][2]='6';
    board[2][0]='1';
    board[2][1]='2';
    board[2][2]='3';
}

int main()
{
window.create(VideoMode(800,600),"TicTacToe",Style::Default);
Texture mainscreens,mode,inst,endscreen,song;
mainscreens.loadFromFile("background1.jpg");
mode.loadFromFile("background2.jpg");
song.loadFromFile("Music.jpg");
inst.loadFromFile("Instructions.jpg");
endscreen.loadFromFile("EndScreen.jpg");
smainscreen.setTexture(mainscreens);
smode.setTexture(mode);
sinst.setTexture(inst);
ssong.setTexture(song);
sendscreen.setTexture(endscreen);
int modechoice;
bool flag=false;
while(!flag){
system("CLS");
mainscreen();
window.draw(smainscreen);
window.display();
initializeboard();
msc.openFromFile("mm.ogg");
msc.play();
gameover=false;
while (window.isOpen())
{
 while (window.pollEvent(evt))
  {if (evt.type==Event::Closed)window.close();
      level();
      checkmchoice();
      redraw();
      level();

}
}

return 0;
    }
    }











