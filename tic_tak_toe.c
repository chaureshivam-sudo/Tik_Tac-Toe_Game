#include<stdio.h>
#include<unistd.h>

void loading();
void show_game();
void play_board(char board[]);
void play_game(char p1[],char p2[]);

int main()
{
    printf("-----------------------------------------------\n");
    printf("..................TIC TAK TOE..................\n");
    printf("-----------------------------------------------\n");

    loading();

    char choice;
    printf("Want You to Play !! (Y/N) : ");
    scanf("%c",&choice);

    if(choice=='n' || choice=='N') 
    {
        printf("Thank Youu..\nClosing....\n");
        return 0;
    }

    char p1[40];
    char p2[40];
    printf("Enter player1 Name : ");
    scanf(" %[^\n]",p1);

    printf("Enter player2 Name : ");
    scanf(" %[^\n]",p2);

    show_game();

    char choice2;
    printf("Continue (Y/N) ? : ");
    scanf(" %c",&choice2);

    if(choice2=='n' || choice2=='N')
    {
        printf("Thank Youu..\nClosing....\n");
        return 0;
    }
    printf("\n");

    loading();

    play_game(p1,p2);

}

void loading()
{
    for(int i=1; i<=8; i++)
    {
        printf("loading.  \r");
        fflush(stdout);
        usleep(250000);

        printf("loading.. \r");
        fflush(stdout);
        usleep(250000);

        printf("loading...\r");
        fflush(stdout);
        usleep(250000);
    }
    printf("\n\n");
}

void show_game()
{
    printf("*NOTE : Enter 1-9 to select box..\n");
    printf("        _________________________\n");
    printf("        |       |       |       |\n");
    printf("        |   1   |   2   |   3   |\n");
    printf("        |_______|_______|_______|\n");
    printf("        |       |       |       |\n");
    printf("        |   4   |   5   |   6   |\n");
    printf("        |_______|_______|_______|\n");
    printf("        |       |       |       |\n");
    printf("        |   7   |   8   |   9   |\n");
    printf("        |_______|_______|_______|\n");

    printf("\n");    
}

void play_board(char board[])
{
    printf("\033[H\033[2J\033[3J");

    printf("        _________________________\n");
    printf("        |       |       |       |\n");
    printf("        |   %c   |   %c   |   %c   |\n",board[0],board[1],board[2]);
    printf("        |_______|_______|_______|\n");
    printf("        |       |       |       |\n");
    printf("        |   %c   |   %c   |   %c   |\n",board[3],board[4],board[5]);
    printf("        |_______|_______|_______|\n");
    printf("        |       |       |       |\n");
    printf("        |   %c   |   %c   |   %c   |\n",board[6],board[7],board[8]);
    printf("        |_______|_______|_______|\n");

    printf("\n");    
}

void play_game(char p1[],char p2[])
{
    char board[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '}; 
    int pos;
    char mark='x';
    int count=0;

    while(count<9)
    {
        printf("%s [%c] : ",mark=='x' ? p1 : p2, mark);
        scanf("%d",&pos);

        if(pos<1 || pos>9)
        {
            printf("Invalid position.!!!\nEnter Valid..\n");
            continue;
        }
        if(board[pos-1]=='x' || board[pos-1]=='o')
        {
            printf("Position Already Taken.!!!\nTry Again.\n");
            continue;
        }
        board[pos-1]=mark;
        count++;

        play_board(board);

        if ((board[0]==mark && board[1]==mark && board[2]==mark) ||
            (board[3]==mark && board[4]==mark && board[5]==mark) ||
            (board[6]==mark && board[7]==mark && board[8]==mark) ||
            (board[0]==mark && board[3]==mark && board[6]==mark) ||
            (board[1]==mark && board[4]==mark && board[7]==mark) ||
            (board[2]==mark && board[5]==mark && board[8]==mark) ||
            (board[0]==mark && board[4]==mark && board[8]==mark) ||
            (board[2]==mark && board[4]==mark && board[6]==mark))
        {
            printf("%s [%c] WINSSSSS.🩷!!!\n",mark=='x' ? p1: p2, mark);
            return ;
        }

        if(mark=='x')
        {
            mark='o';
        }
        else
        {
            mark='x';
        }
    }
    if(count==9)
    {
        printf("Game Tiedd.!!!\n"); 
    }

}