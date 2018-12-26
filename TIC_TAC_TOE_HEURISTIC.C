#include<stdio.h>
#include<conio.h>


int board[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int i,j,pos=1,a[9]={0,0,0,0,0,0,0,0,0}; //for checking occupied position
int h[9]={0,0,0,0,0,0,0,0,0}; //for heuristic
int m,post,cpost,s,chance=1;


int max4(int s1,int s2,int s3,int s4)
{
  if(s1>s2 && s1>s3 && s1>s4 || s1==s2 || s1==s3 || s1==s4 || s2==s3 || s2==s4 || s3==s4)   //for s1 in max4
  {
    if(h[3]==0)
    {
     post=4;
     return post;
    }

    if(h[4]==0)
    {
     post=5;
     return post;
    }

    if(h[5]==0)
    {
      post=6;
      return post;
    }
  }
  else
  if(s2>s3 && s2>s4)         //for s2 in max4
  {
   if(h[1]==0)
    {
     post=2;
     return post;
    }

   if(h[4]==0)
    {
     post=5;
     return post;
    }

   if(h[7]==0)
    {
     post=8;
     return post;
    }

 }
  else
  if(s3>s4)               //for s3 in max4
  {
    if(h[0]==0)
    {
     post=1;
     return post;
    }

    if(h[4]==0)
    {
     post=5;
     return post;
    }

    if(h[8]==0)
    {
     post=9;
     return post;
    }
 }
  else
  if(s4>s1 && s4>s2 && s4>s3)      //for s4 in max4
  {  // check 2 4 6
    if(h[2]==0)
    {
     post=3;
     return post;
    }

    if(h[4]==0)
    {
     post=5;
     return post;
    }

    if(h[6]==0)
    {
     post=7;
     return post;
    }
  }

}

int max3(int s1,int s2,int s3)
{
if(s1>s2 && s1>s3 )    //for s1 in max3
{
 if(h[0]==1 && h[1]==1 || h[0]==1 && h[2]==1 || h[1]==1 && h[2]==1)
 {
  if(h[0]==0)
    {
     post=1;
     return post;
    }

  if(h[1]==0)
    {
     post=2;
     return post;
    }

  if(h[2]==0)
    {
     post=3;
     return post;
    }
 }

 if(h[0]==1 && h[3]==1 || h[0]==1 && h[6]==1 || h[3]==1 && h[6]==1)
  {
  if(h[0]==0)
  {
     post=1;
     return post;
  }

  if(h[3]==0)
    {
     post=4;
     return post;
    }

  if(h[6]==0)
    {
     post=7;
     return post;
    }
 }

  if(h[2]==1 && h[5]==1 || h[2]==1 && h[8]==1 || h[5]==1 && h[8]==1)
  {
   if(h[2]==0)
   {
    post=3;
    return post;
   }

  if(h[5]==0)
    {
     post=6;
     return post;
    }

  if(h[8]==0)
    {
     post=9;
     return post;
    }
 }
}
else
if(s2>s3)    //for s2 in max3
{
  if(h[0]==1 && h[3]==1 || h[0]==1 && h[6]==1 || h[3]==1 && h[6]==1)
  {
   if(h[0]==0)
    {
     post=1;
     return post;
    }

    if(h[3]==0)
    {
     post=4;
     return post;
    }

    if(h[6]==0)
    {
     post=7;
     return post;
    }
  }

   if(h[2]==1 && h[4]==1 || h[2]==1 && h[6]==1 || h[4]==1 && h[6]==1)
   {
    if(h[2]==0)
    {
     post=3;
     return post;
    }

    if(h[4]==0)
    {
     post=5;
     return post;
    }

     if(h[6]==0)
    {
     post=7;
     return post;
    }
  }

  if(h[6]==1 && h[7]==1 || h[7]==1 && h[8]==1 || h[6]==1 && h[8]==1)
   {
    if(h[6]==0)
    {
      post=7;
      return post;
    }

    if(h[7]==0)
    {
     post=8;
     return post;
    }

    if(h[8]==0)
    {
     post=9;
     return post;
    }
  }
}
else
if(s3>s1 && s3>s2) //for s3 in max3
{
  if(h[0]==1 && h[4]==1 || h[0]==1 && h[8]==1 || h[4]==1 && h[8]==1)
  {
   if(h[0]==0)
    {
     post=1;
     return post;
    }

     if(h[4]==0)
    {
     post=5;
     return post;
    }

     if(h[8]==0)
    {
     post=9;
     return post;
    }
  }

    if(h[2]==1 && h[5]==1 || h[2]==1 && h[8]==1 || h[5]==1 && h[8]==1)
    {
      if(h[2]==0)
    {
     post=3;
     return post;
    }

    if(h[5]==0)
    {
     post=6;
     return post;
    }

    if(h[8]==0)
    {
     post=9;
     return post;
    }
  }

  if(h[6]==1 && h[7]==1 || h[7]==1 && h[8]==1 || h[6]==1 && h[8]==1)
   {
    if(h[6]==0)
    {
      post=7;
      return post;
    }

    if(h[7]==0)
    {
     post=8;
     return post;
    }

    if(h[8]==0)
    {
     post=9;
     return post;
    }
 }

}

}
int rough()//when match is going to draw,selecting one of avlbl position
{
 if(h[0]==0)
    {
     post=1;
     return post;
    }

    if(h[1]==0)
    {
     post=2;
     return post;
    }

     if(h[2]==0)
    {
     post=3;
     return post;
    }
      if(h[4]==0)
    {
     post=5;
     return post;
    }

     if(h[5]==0)
    {
     post=6;
     return post;
    }
     if(h[6]==0)
      {
	post=7;
	return post;
      }

      if(h[7]==0)
      {
	post=8;
	return post;
      }

      if(h[8]==0)
      {
	post=9;
	return post;
      }


}

int max2(int s1,int s2)
{
  if(s1>s2) //for s1 in max2
  {
   if(h[0]==1 && h[1]==1 || h[0]==1 && h[2]==1 || h[1]==1 && h[2]==1)
   {
     if(h[0]==0)
    {
     post=1;
     return post;
    }

    if(h[1]==0)
    {
     post=2;
     return post;
    }

     if(h[2]==0)
    {
     post=3;
     return post;
    }
  }

     if(h[3]==1 && h[4]==1 || h[3]==1 && h[5]==1 || h[4]==1 && h[5]==1)
  {
     if(h[3]==0)
    {
     post=4;
     return post;
    }

     if(h[4]==0)
    {
     post=5;
     return post;
    }

     if(h[5]==0)
    {
     post=6;
     return post;
    }
  }

 if(h[2]==1 && h[5]==1 || h[2]==1 && h[8]==1 || h[5]==1 && h[8]==1)
 {
   if(h[2]==0)
   {
     post=3;
     return post;
   }

     if(h[8]==0)
    {
     post=9;
     return post;
    }

    if(h[5]==0)
    {
      post=6;
      return post;
    }
  }

   if(h[1]==1 && h[4]==1 || h[1]==1 && h[7]==1 || h[4]==1 && h[7]==1)
  {
     if(h[1]==0)
     {
      post=2;
      return post;
     }

     if(h[4]==0)
     {
      post=5;
      return post;
     }

    if(h[7]==0)
    {
     post=8;
     return post;
    }
   }


 }
  else //for s2 in max2
  {
     if(h[0]==1 && h[3]==1 || h[0]==1 && h[6]==1 || h[3]==1 && h[6]==1 )
   {
       if(h[0]==0)
       {
	post =1;
	return post;
       }

       if(h[3]==0)
       {
	 post=4;
	 return post;
       }

       if(h[6]==0)
       {
	 post=7;
	 return post;
       }
    }

     if(h[1]==1 && h[4]==1 || h[1]==1 && h[7]==1 || h[4]==1 && h[7]==1)
     {
       if(h[1]==0)
       {
	 post=2;
	 return post;
       }

	if(h[4]==0)
       {
	 post=5;
	 return post;
       }

	if(h[7]==0)
       {
	 post=8;
	 return post;
       }
     }

  if(h[3]==1 && h[4]==1 || h[3]==1 && h[5]==1 || h[4]==1 && h[5]==1)
    {
     if(h[3]==0)
     {
	post=4;
	return post;
     }

     if(h[4]==0)
     {
       post=5;
       return post;
     }

     if(h[5]==0)
     {
       post=6;
       return post;
     }
    }

   if(h[6]==1 && h[7]==1 || h[6]==1 && h[8]==1 || h[7]==1 && h[8]==1)
   {
      if(h[6]==0)
      {
	post=7;
	return post;
      }

      if(h[7]==0)
      {
	post=8;
	return post;
      }

      if(h[8]==0)
      {
	post=9;
	return post;
      }
    }



  }
}

int calculate(int m)
{
int s1=0,s2=0,s3=0,s4=0,pt;
 h[m]=1;
 //when chance is 6 or more computer first check for its winning chance
 if(chance>=6){
  if(board[0][0]+board[0][1]==108 || board[0][1]+board[0][2]==108 || board[0][0]+board[0][2]==108)
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
   if(board[1][0]+board[1][1]==108 || board[1][1]+board[1][2]==108 || board[1][0]+board[1][2]==108)
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

    if(board[2][0]+board[2][1]==108 || board[2][1]+board[2][2]==108 || board[2][0]+board[2][2]==108)
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

     if(board[0][0]+board[1][0]==108 || board[1][0]+board[2][0]==108 || board[0][0]+board[2][0]==108)
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

      if(board[0][1]+board[1][1]==108 || board[1][1]+board[2][1]==108 || board[0][1]+board[2][1]==108)
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

      if(board[0][2]+board[1][2]==108 || board[1][2]+board[2][2]==108 || board[0][2]+board[2][2]==108)
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

     if(board[0][0]+board[1][1]==108 || board[1][1]+board[2][2]==108 || board[0][0]+board[2][2]==108)
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

       if(board[0][2]+board[1][1]==108 || board[1][1]+board[2][0]==108 || board[0][2]+board[2][0]==108)
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
  }
 if(m==0)
 {
   s1=h[0]+h[1]+h[2];
   s2=h[0]+h[3]+h[6];
   s3=h[0]+h[4]+h[8];

   if(s1==s2 && s2==s3)
   {
     pt=5;
     return pt;
   }
   else
   {
   pt=max3(s1,s2,s3);
   return pt;
   }
 }

 if(m==1)
 {
   s1=h[0]+h[1]+h[2];
   s2=h[1]+h[4]+h[7];
     if(s1==s2)
   {
     pt=5;
     return pt;
   }
   else
   {
   pt= max2(s1,s2);
   if(pt==0 || pt==-1){ pt=rough(); }
   return pt;
   }
 }

 if(m==2)
 {
   s1=h[0]+h[1]+h[2];
   s2=h[2]+h[4]+h[6];
   s3=h[2]+h[5]+h[8];
     if(s1==s2 && s2==s3)
   {
     pt=5;
     return pt;
   }
   else{
   pt=max3(s1,s2,s3);
   return pt;
   }
 }

 if(m==3)
 {
   s1=h[3]+h[4]+h[5];
   s2=h[0]+h[3]+h[6];
     if(s1==s2)
   {
     pt=5;
     return pt;
   }
   pt= max2(s1,s2);
    if(pt==0 || pt==-1){ pt=rough(); }
   return pt;
 }
if(m==4)
 {
   s1=h[3]+h[4]+h[5];
   s2=h[1]+h[4]+h[7];
   s3=h[0]+h[4]+h[8];
   s4=h[2]+h[4]+h[6];
     if(s1==s2 && s2==s3 && s3==s4)
   {
     pt=1;
     return pt;
   }
   else{
   pt= max4(s1,s2,s3,s4);
   return pt;
   }
 }
if(m==5)
 {
   s1=h[2]+h[5]+h[8];
   s2=h[3]+h[4]+h[5];
     if(s1==s2)
   {
     pt=m;
     return pt;
   }
   else{
   pt= max2(s1,s2);
    if(pt==0 || pt==-1){ pt=rough(); }
   return pt;
   }
 }
if(m==6)
 {
   s1=h[0]+h[3]+h[6];
   s2=h[2]+h[4]+h[6];
   s3=h[6]+h[7]+h[8];
     if(s1==s2 && s2==s3)
   {
     pt=5;
     return pt;
   }else{
   pt= max3(s1,s2,s3);
   return pt;
   }
 }
if(m==7)
 {
   s1=h[1]+h[4]+h[7];
   s2=h[6]+h[7]+h[8];
     if(s1==s2)
   {
     pt=5;
     return pt;
   }else{
   pt= max2(s1,s2);
    if(pt==0 || pt==-1){ pt=rough(); }
   return pt;
   }
 }

 if(m==8)
 {
   s1=h[2]+h[5]+h[8];
   s2=h[6]+h[7]+h[8];
   s3=h[0]+h[4]+h[8];
     if(s1==s2 && s2==s3)
   {
     pt=5;
     return pt;
   }else{
   pt= max3(s1,s2,s3);
   return pt;
   }
 }
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
    board[i][j]=54;
    s=p-1;
    h[s]=-1;   //54 = -1
    }
   }
 }
   draw();
}

void main()
{
 int i=0,j;
 clrscr();

 printf("_________________TIC_TAC_TOE IMPLEMENTATION_________________\n");
 printf("Player 1(you)=21\n");
 printf("Player 2(computer)=54\n\n");

 draw();

m:while(chance<=9)
{
 if(chance%2!=0) //player 1
 {
   p:printf("\nEnter position you want for play (player 1): ");
   scanf("%d",&post);

   if(post==0 || post>9){
   printf("\nNot a valid position try again..");
   goto p;}

   for(j=0;j<9;j++)
   if(a[j]==post)
   {
   printf("\nspace already occupied\n");
   goto m;
   }
   a[i]=post;
   i++;

   sleep(2);
   drawUpdate(post,chance);
   chance++;
   sleep(1);
   printf("\n\nChance: %d(computer)\n",chance);

   m=post-1;
   cpost=calculate(m);

 }

else
{
if(chance%2==0) //player 2
 {
  printf("Computer will going to make next move in position %d\n\n",cpost);
  sleep(2);

 for(j=0;j<9;j++)
  if(a[j]==cpost)
   {
   printf("\nspace already occupied\n");
   break;
   goto m;
   }
   a[i]=cpost;
   i++;

  drawUpdate(cpost,chance);
  chance++;
  sleep(1);
  printf("\n\nChance: %d(player)",chance);

 }
}

if(chance>=6)
 {


   if(board[0][0]+board[0][1]+board[0][2]==63 || board[1][0]+board[1][1]+board[1][2]==63 || board[2][0]+board[2][1]+board[2][2]==63 || board[0][0]+board[1][0]+board[2][0]==63 || board[0][1]+board[1][1]+board[2][1]==63 || board[0][2]+board[1][2]+board[2][2]==63 || board[0][0]+board[1][1]+board[2][2]==63 || board[0][2]+board[1][1]+board[2][0]==63)
  {
   printf("\n\nPlayer 1 wins..");
   break;
   }
   else
  {
    if(board[0][0]+board[0][1]+board[0][2]==162 || board[1][0]+board[1][1]+board[1][2]==162 || board[2][0]+board[2][1]+board[2][2]==162 || board[0][0]+board[1][0]+board[2][0]==162 || board[0][1]+board[1][1]+board[2][1]==162 || board[0][2]+board[1][2]+board[2][2]==162 || board[0][0]+board[1][1]+board[2][2]==162 || board[0][2]+board[1][1]+board[2][0]==162)
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

