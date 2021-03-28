#include <iostream>

using namespace std;
char a[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int visit[9]= {0};
void draw()
{
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<<a[i][j]<<"|";
        }
        cout<<endl;
    }

}
void enter (char type)
{
    cout <<"please choose the number"<<endl;
    int number;
enter :
    cin>>number;
    switch (number)
    {
    case 1:
        if (visit[0]!=1)
        {
            a[0][0]=type;
            visit[0]=1;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 2:
        if (visit[1]!=1)
        {
            a[0][1]=type;
            visit[1]=1;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 3:
        if (visit[2]!=1)
        {
            a[0][2]=type;
            visit[2]=1;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 4:
        if (visit[3]!=1)
        {
            a[1][0]=type;
            visit[3]=1;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 5:
        if (visit[4]!=1)
        {
            visit[4]=1;
            a[1][1]=type;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 6:
        if (visit[5]!=1)
        {
            visit[5]=1;
            a[1][2]=type;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 7:
        if (visit[6]!=1)
        {
            visit[6]=1;
            a[2][0]=type;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 8:
        if (visit[7]!=1)
        {
            visit[7]=1;
            a[2][1]=type;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }
    case 9:
        if (visit[9]!=1)
        {
            visit[8]=1;
            a[2][2]=type;
            break;
        }
        else
        {
            cout<<"full !! please enter another number"<<endl;
            goto enter;
        }

    }
}
bool check ()
{
    for (int i=0; i<3; i++)
        for (int j=0; j<3; j++)
        {
            if (a[i][j]==a[i][j+1]&&a[i][j]==a[i][j+2]&&j+2<3)
                return true;
            if (a[i][j]==a[i+1][j]&&a[i][j]==a[i+2][j]&&i+2<3)
                return true;
            if (a[i][j]==a[i+1][j+1]&&a[i][j]==a[i+2][j+2]&&i+2<3&&j+2<3)
                return true;
            if (a[i][j]==a[i+1][j-1]&&a[i][j]==a[i+2][j-2]&&i+2<3&&j-2>=0)
                return true;

        }
    return false;
}
int main()
{
    enum {player1='x',player2='o'};
    int player=player1;
    draw();
    int index=0;
    bool winner=false;
    while (index<9)
    {
        switch(player)
        {
            if (winner==false)
            {
            case player1:
                index++;
                cout<<"player 1 :"<<endl;
                enter('X');
                if (check()==true)
                {
                    cout<<"the winner the first player :)"<<endl;
                    winner=true;
                }
                draw();
                player=player2;
                break;
            }
        case player2:
            index++;
            cout<<"player 2 :"<<endl;
            if (winner==false)
            {
                enter('O');
                if (check()==true)
                {
                    cout<<"the winner the second player :)"<<endl;

                    winner=true;
                }
                draw();
                player=player1;
                break;
            }

        }

        if (winner==true)
            break;
        if (index==9&&winner==false)
            cout<<" NO winner :( ";
    }

    return 0;
}
