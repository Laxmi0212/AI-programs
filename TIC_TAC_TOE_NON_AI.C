#include<stdio.h>
#include<conio.h>

/*_______________TIC_TAC_TOE Implementation________________
		  Blank position=0
		  1st player=21
		  2nd player=55                                              */

int board[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,pos=1,a[9]={0,0,0,0,0,0,0,0,0};


/*int getCenter()
{
  return board[1][1];
}

int getSquare()
{
   if(board[0][1]==0)
   return board[0][1];
   else
   {
     if(board[1][0]==0)
     return board[1][0];
     else
      if(board[1][2]==0)
      return board[1][2];
      else
       if(board[2][1]==0)
       return board[2][1];
   }
}

int getDiagonals()
{
   if(board[0][0]==0)
   return board[0][0];
   else
   {
    if(board[0][2]==0)
     return board[0][2];
    else
    if(board[2][0]==0)
    return board[2][0];
    else
    if(board[2][2]==0)
    return board[2][2];
    else
    getSquare();
   }
} */

void draw()
{

  printf("%d | %d | %d\n",board[0][0],board[0][1],board[0][2]);
  printf("-   -   -  \n");
  printf("%d | %d | %d\n",board[1][0],board[1][1],board[1][2]);
  printf("-   -   -  \n");
  printf("%d | %d | %d",board[2][0],board[2][1],board[2][2]);
}

void drawUpdate(int p,int c)
{
for(i=0;i<3;i++)
 {
   for(j=0;j<3;j++)
   {
    if(board[i][j]==p)
    {
    if(c%2!=0)
    board[i][j]=21;
    else
    board[i][j]=55;
    }
   }
 }

  printf("%d | %d | %d\n",board[0][0],board[0][1],board[0][2]);
  printf("-   -   -  \n");
  printf("%d | %d | %d\n",board[1][0],board[1][1],board[1][2]);
  printf("-   -   -  \n");
  printf("%d | %d | %d",board[2][0],board[2][1],board[2][2]);

}



void main()
{
 int chance=1,post,i=0,j;

 clrscr();

 printf("_________________TIC_TAC_TOE IMPLEMENTATION_________________\n");
 printf("Player 1=21\n");
 printf("Player 2=55\n\n");

 draw();

m:while(chance<=9)
{
 if(chance%2!=0) //player 1
 {

   printf("\n\nEnter position you want for play (player 1): ");
   scanf("%d",&post);

   //for checking position is already occupied or not
   for(j=0;j<9;j++)
   if(a[j]==post)
   {
   printf("space already occupied");
   goto m;
   }
   a[i]=post;
   i++;

   drawUpdate(post,chance);
   chance++;
 }

else
{
if(chance%2==0) //player 2
 {
   printf("\nEnter position you want for play (player 2): ");
   scanf("%d",&post);

   //checking if space is already occupied or not
   for(j=0;j<9;j++)
   if(a[j]==post)
   { printf("space alreay occuupied");
     goto m;
   }
   a[i]=post;
   i++;

   drawUpdate(post,chance);
   chance++;
 }
}

 if(chance>=5)
 {
   if(board[0][0]+board[0][1]+board[0][2]==63 || board[1][0]+board[1][1]+board[1][2]==63 || board[2][0]+board[2][1]+board[2][2]==63 || board[0][0]+board[1][0]+board[2][0]==63 || board[0][1]+board[1][1]+board[2][1]==63 || board[0][2]+board[1][2]+board[2][2]==63 || board[0][0]+board[1][1]+board[2][2]==63 || board[0][2]+board[1][1]+board[2][0]==63)
  {
   printf("\nPlayer 1 wins..");
   break;
   }
   else
  {
    if(board[0][0]+board[0][1]+board[0][2]==165 || board[1][0]+board[1][1]+board[1][2]==165 || board[2][0]+board[2][1]+board[2][2]==165 || board[0][0]+board[1][0]+board[2][0]==165 || board[0][1]+board[1][1]+board[2][1]==165 || board[0][2]+board[1][2]+board[2][2]==165 || board[0][0]+board[1][1]+board[2][2]==165 || board[0][2]+board[1][1]+board[2][0]==165)
     {
      printf("\nPlayer 2 wins..");
      break;
     }

   else
     if(chance==10)
     printf("\nNo one wins the match..");
   }
}
}


/* getCenter();
 else
 getDiagonals(); */

 getch();

}