#include<stdio.h>
#include<stdlib.h>
int returnvalue;
int main()
{
      int num,x;
    int a[3][3]={ {1,2,3},
                  {4,5,6},
                  {7,8,9},
            };
printf("   TIC - TAC - TOE\n\n ");
printf("*Enter any number between 1-9\n *If you try to overwrite a value you will loose your turn\n" );
printf(" Symbol of player 1 : 10\n Symbol of player 1 : 20\n\n");

printf("\n");
printf("     %d   | %d   | %d\n",a[0][0],a[0][1],a[0][2]);
printf("    -----|-----|----\n");
printf("     %d   | %d   | %d\n",a[1][0],a[1][1],a[1][2]);
printf("    -----|-----|----\n");
printf("     %d   | %d   | %d\n",a[2][0],a[2][1],a[2][2]);
printf("    -----|-----|----\n");
printf("\n");

int i;
for(i=0;i<8;++i)
{
    if(i%2==0)
    {
         printf("Player 1: ");
        scanf("%d",&num);
    if(num==1&&a[0][0]==1)
        a[0][0]=10;
    if(num==2&&a[0][1]==2)
            a[0][1]=10;
    if(num==3&&a[0][2]==3)
            a[0][2]=10;
    if(num==4&&a[1][0]==4)
            a[1][0]=10;
    if(num==5&&a[1][1]==5)
            a[1][1]=10;
    if(num==6&&a[1][2]==6)
            a[1][2]=10;
     if(num==7&&a[2][0]==7)
            a[2][0]=10;
      if(num==8&&a[2][1]==8)
            a[2][1]=10;
        if(num==9)
            a[2][2]=10;

printf("\n");
printf("     %d  |  %d  |  %d\n",a[0][0],a[0][1],a[0][2]);
printf("    -----|-----|-----\n");
printf("     %d   | %d   |  %d\n",a[1][0],a[1][1],a[1][2]);
printf("    -----|-----|-----\n");
printf("     %d   | %d   |  %d\n",a[2][0],a[2][1],a[2][2]);
printf("    -----|-----|-----");
printf("\n\n");

         if(a[0][0]==a[0][1]&&a[0][1]==a[0][2])//row 1
        returnvalue=1;
    else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2])//row 2
        returnvalue=1;
    else if (a[2][0]==a[2][1]&&a[2][1]==a[2][2])//row 3
         returnvalue=1;
    else if(a[0][0]&&a[1][0]&&a[1][0]==a[2][0])//col 1
         returnvalue=1;
    else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1])//col 2
        returnvalue=1;
    else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2])//col 3
        returnvalue=1;
    else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])//dia 1
         returnvalue=1;
    else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])//dia 2
       returnvalue=1;



if(returnvalue==1)
    {
    printf("Player 1 Wins");
    exit(0);
    }


}
       else
        {
         printf("Player 2:  ");
        scanf("%d",&num);
           if(num==1&&a[0][0]==1)
              a[0][0]=20;
            if(num==2)
              a[0][1]=20;
           if(num==3)
              a[0][2]=20;
           if(num==4)
              a[1][0]=20;
           if(num==5)
              a[1][1]=20;
           if(num==6)
              a[1][2]=20;
           if(num==7)
              a[2][0]=20;
           if(num==8)
              a[2][1]=20;
           if(num==9)
              a[2][2]=20;

printf("     %d  | %d  | %d\n",a[0][0],a[0][1],a[0][2]);
printf("    ----|----|----\n");
printf("     %d  | %d  | %d\n",a[1][0],a[1][1],a[1][2]);
printf("    ----|----|----\n");
printf("     %d  | %d  | %d\n",a[2][0],a[2][1],a[2][2]);
printf("    ----|----|----");
printf("\n\n");

         if(a[0][0]==a[0][1]&&a[0][1]==a[0][2])//row 1
        returnvalue=1;
    else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2])//row 2
        returnvalue=1;
    else if (a[2][0]==a[2][1]&&a[2][1]==a[2][2])//row 3
         returnvalue=1;
    else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0])//col 1
         returnvalue=1;
    else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1])//col 2
        returnvalue=1;
    else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2])//col 3
        returnvalue=1;
    else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])//dia 1
         returnvalue=1;
    else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])//dia 2
       returnvalue=1;
     else
        returnvalue=0;


if(returnvalue==1)
    {
    printf("Player 2 Wins");
    exit(0);
    }


       }


}
if(returnvalue!=1)
    printf("Draw");
}
