#include<stdio.h>
#include<conio.h>


int board[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j,pos=1,a[9]={0,0,0,0,0,0,0,0,0};

int getCenter()
{
  if(board[1][1]==5)
  return board[1][1];
  else
  if(board[0][0]==1 && board[1][1]!=55)
  return board[0][0];
  else
  chanceFour();
}

int getSquare()
{
   if(board[0][1]==2)
   return board[0][1];
   else
   {
     if(board[1][0]==4)
     return board[1][0];
     else
      if(board[1][2]==6)
      return board[1][2];
      else
       if(board[2][1]==8)
       return board[2][1];
   }
}

int getDiagonal()
{
if(board[0][0]==1)
   return board[0][0];
   else
   {
    if(board[0][2]==3)
     return board[0][2];
    else
    if(board[2][0]==7)
    return board[2][0];
    else
    if(board[2][2]==9)
    return board[2][2];
    else
    getSquare();
   }
}



int chanceFour()
{
  if(board[0][0]+board[0][1]==110 || board[0][1]+board[0][2]==110 || board[0][0]+board[0][2]==110)
     {
      if(board[0][0]==1)
       return board[0][0];
      else
	if(board[0][1]==2)
	 return board[0][1];
	else
	 if(board[0][2]==3)
	  return board[0][2];
     }
   if(board[1][0]+board[1][1]==110 || board[1][1]+board[1][2]==110 || board[1][0]+board[1][2]==110)
     {
      if(board[1][0]==4)
       return board[1][0];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[1][2]==6)
	  return board[1][2];
     }

    if(board[2][0]+board[2][1]==110 || board[2][1]+board[2][2]==110 || board[2][0]+board[2][2]==110)
     {
      if(board[2][0]==7)
       return board[2][0];
      else
	if(board[2][1]==8)
	 return board[2][1];
	else
	 if(board[2][2]==9)
	  return board[2][2];
     }

     if(board[0][0]+board[1][0]==110 || board[1][0]+board[2][0]==110 || board[0][0]+board[2][0]==110)
     {
      if(board[0][0]==1)
       return board[0][0];
      else
	if(board[1][0]==4)
	 return board[1][0];
	else
	 if(board[2][0]==7)
	  return board[2][0];
     }

      if(board[0][1]+board[1][1]==110 || board[1][1]+board[2][1]==110 || board[0][1]+board[2][1]==110)
     {
      if(board[0][1]==2)
       return board[0][1];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[2][1]==8)
	  return board[2][1];
     }

      if(board[0][2]+board[1][2]==110 || board[1][2]+board[2][2]==110 || board[0][2]+board[2][2]==110)
     {
      if(board[0][2]==3)
       return board[0][2];
      else
	if(board[1][2]==6)
	 return board[1][2];
	else
	 if(board[2][2]==9)
	  return board[2][2];
     }

     if(board[0][0]+board[1][1]==110 || board[1][1]+board[2][2]==110 || board[0][0]+board[2][2]==110)
     {
      if(board[0][0]==1)
       return board[0][0];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[2][2]==9)
	  return board[2][2];
     }

       if(board[0][2]+board[1][1]==110 || board[1][1]+board[2][0]==110 || board[0][2]+board[2][0]==110)
     {
      if(board[0][2]==3)
       return board[0][2];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[2][0]==7)
	  return board[2][0];
     }


 if(board[0][0]+board[0][1]==42 || board[0][1]+board[0][2]==42 || board[0][0]+board[0][2]==42)
     {
      if(board[0][0]==1)
       return board[0][0];
      else
	if(board[0][1]==2)
	 return board[0][1];
	else
	 if(board[0][2]==3)
	  return board[0][2];
     }

      if(board[1][0]+board[1][1]==42 || board[1][1]+board[1][2]==42 || board[1][0]+board[1][2]==42)
     {
      if(board[1][0]==4)
       return board[1][0];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[1][2]==6)
	  return board[1][2];
     }

      if(board[2][0]+board[2][1]==42 || board[2][1]+board[2][2]==42 || board[2][0]+board[2][2]==42)
     {
      if(board[2][0]==7)
       return board[2][0];
      else
	if(board[2][1]==8)
	 return board[2][1];
	else
	 if(board[2][2]==9)
	  return board[2][2];
     }

      if(board[0][0]+board[1][0]==42 || board[1][0]+board[2][0]==42 || board[0][0]+board[2][0]==42)
     {
      if(board[0][0]==1)
       return board[0][0];
      else
	if(board[1][0]==4)
	 return board[1][0];
	else
	 if(board[2][0]==7)
	  return board[2][0];
     }

      if(board[0][1]+board[1][1]==42 || board[1][1]+board[2][1]==42 || board[0][1]+board[2][1]==42)
     {
      if(board[0][1]==2)
       return board[0][1];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[2][1]==8)
	  return board[2][1];
     }

      if(board[0][2]+board[1][2]==42 || board[1][2]+board[2][2]==42 || board[0][2]+board[2][2]==42)
     {
      if(board[0][2]==3)
       return board[0][2];
      else
	if(board[1][2]==6)
	 return board[1][2];
	else
	 if(board[2][2]==9)
	  return board[2][2];
     }



     if(board[0][0]+board[1][1]==42 || board[1][1]+board[2][2]==42 || board[0][0]+board[2][2]==42)
     {
      if(board[0][0]==1)
       return board[0][0];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[2][2]==9)
	  return board[2][2];
     }

     if(board[0][2]+board[1][1]==42 || board[1][1]+board[2][0]==42 || board[0][2]+board[2][0]==42)
     {
      if(board[0][2]==3)
       return board[0][2];
      else
	if(board[1][1]==5)
	 return board[1][1];
	else
	 if(board[2][0]==7)
	  return board[2][0];
     }

 //  if(board[0][1] != board[1][1] && board[2][1]==8)
  // return board[2][1];
    getDiagonal();

}

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
   draw();
}

void main()
{
 int chance=1,post,i=0,j;
 clrscr();

 printf("_________________TIC_TAC_TOE IMPLEMENTATION_________________\n");
 printf("Player 1(you)=21\n");
 printf("Player 2(computer)=55\n\n");

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
  printf("\n\n");
  sleep(1);

  post=getCenter();

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
}

if(chance>=5)
 {
   if(board[0][0]+board[0][1]+board[0][2]==63 || board[1][0]+board[1][1]+board[1][2]==63 || board[2][0]+board[2][1]+board[2][2]==63 || board[0][0]+board[1][0]+board[2][0]==63 || board[0][1]+board[1][1]+board[2][1]==63 || board[0][2]+board[1][2]+board[2][2]==63 || board[0][0]+board[1][1]+board[2][2]==63 || board[0][2]+board[1][1]+board[2][0]==63)
  {
   printf("\n\nPlayer 1 wins..");
   break;
   }
   else
  {
    if(board[0][0]+board[0][1]+board[0][2]==165 || board[1][0]+board[1][1]+board[1][2]==165 || board[2][0]+board[2][1]+board[2][2]==165 || board[0][0]+board[1][0]+board[2][0]==165 || board[0][1]+board[1][1]+board[2][1]==165 || board[0][2]+board[1][2]+board[2][2]==165 || board[0][0]+board[1][1]+board[2][2]==165 || board[0][2]+board[1][1]+board[2][0]==165)
     {
      printf("\n\nComputer wins..");
      break;
     }

   else
     if(chance==10)
     printf("\n\nMatch is draw..");
   }
}
}

 getch();
}

