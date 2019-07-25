#include<stdio.h>
#include<conio.h>
int a[]={11,22,33,44,55,66,77,88,99};
int r,c;
void main()
{
 void player0();
 void player1();
 clrscr();
 printf("The game starts\n\n");
 printf("   |   |   \n-----------\n   |   |   \n-----------\n   |   |   \n");
 player0();  gotoxy(1,9);
 player1();  gotoxy(1,10);
 player0();  gotoxy(1,11);
 player1();  gotoxy(1,12);
 player0();  gotoxy(1,13);
 player1();  gotoxy(1,14);
 player0();  gotoxy(1,15);
 player1();  gotoxy(1,16);
 player0();  gotoxy(40,5);
 printf("the game draws");
 getch();
}
void player0()
{
 printf("\nenter position of 0 (row, column) : ");
 scanf("%d%d",&r,&c);
 if(r==1&&c==1){  gotoxy(2,3);   printf("0");  a[1]=0;  }
 if(r==1&&c==2){  gotoxy(6,3);   printf("0");  a[2]=0;  }
 if(r==1&&c==3){  gotoxy(10,3);  printf("0");  a[3]=0;  }
 if(r==2&&c==1){  gotoxy(2,5);   printf("0");  a[4]=0;  }
 if(r==2&&c==2){  gotoxy(6,5);   printf("0");  a[5]=0;  }
 if(r==2&&c==3){  gotoxy(10,5);  printf("0");  a[6]=0;  }
 if(r==3&&c==1){  gotoxy(2,7);   printf("0");  a[7]=0;  }
 if(r==3&&c==2){  gotoxy(6,7);   printf("0");  a[8]=0;  }
 if(r==3&&c==3){  gotoxy(10,7);  printf("0");  a[9]=0;  }
 if(   (a[1]==a[2]&&a[2]==a[3])
     ||(a[4]==a[5]&&a[5]==a[6])
     ||(a[7]==a[8]&&a[8]==a[9])
     ||(a[1]==a[4]&&a[4]==a[7])
     ||(a[2]==a[5]&&a[5]==a[8])
     ||(a[3]==a[6]&&a[6]==a[9])
     ||(a[1]==a[5]&&a[5]==a[9])
     ||(a[3]==a[5]&&a[5]==a[7])   )
 {
  gotoxy(40,5);
  printf("0 is winner");
  getch();
  exit(0);
 }
}
void player1()
{
 printf("\nenter position of 1 (row, column) : ");
 scanf("%d%d",&r,&c);
 if(r==1&&c==1){  gotoxy(2,3);   printf("1");  a[1]=1;  }
 if(r==1&&c==2){  gotoxy(6,3);   printf("1");  a[2]=1;  }
 if(r==1&&c==3){  gotoxy(10,3);  printf("1");  a[3]=1;  }
 if(r==2&&c==1){  gotoxy(2,5);   printf("1");  a[4]=1;  }
 if(r==2&&c==2){  gotoxy(6,5);   printf("1");  a[5]=1;  }
 if(r==2&&c==3){  gotoxy(10,5);  printf("1");  a[6]=1;  }
 if(r==3&&c==1){  gotoxy(2,7);   printf("1");  a[7]=1;  }
 if(r==3&&c==2){  gotoxy(6,7);   printf("1");  a[8]=1;  }
 if(r==3&&c==3){  gotoxy(10,7);  printf("1");  a[9]=1;  }
 if(   (a[1]==a[2]&&a[2]==a[3])
     ||(a[4]==a[5]&&a[5]==a[6])
     ||(a[7]==a[8]&&a[8]==a[9])
     ||(a[1]==a[4]&&a[4]==a[7])
     ||(a[2]==a[5]&&a[5]==a[8])
     ||(a[3]==a[6]&&a[6]==a[9])
     ||(a[1]==a[5]&&a[5]==a[9])
     ||(a[3]==a[5]&&a[5]==a[7])   )
 {
  gotoxy(40,5);
  printf("1 is winner");
  getch();
  exit(0);
 }
}