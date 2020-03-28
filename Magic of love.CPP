#include<stdio.h>
#include<conio.h>
main(){
char i,l,o,v,e,y,a,u,b,c,m[30];
printf("programmed by ASUTOSH PATI\n");
printf("Enter your lovers name: ");
gets(m);
printf("write something about her\n");
do
{
  do
  { printf("I ");
    i=getch();
    break;
  }
  while(i!=27);
  if(i==27)
    break;
  do
  { printf("L");
    l=getch();
    break;
  }  
  while(l!=27);
  if(l==27)
    break;
  do
  { printf("O");
    o=getch();
    break;
  }
  while(o!=27);
  if(o==27)
    break;
  do
  { printf("V");
    v=getch();
    break;
  }
  while(v!=27);
  if(v==27)
    break;
  do
  { printf("E ");
    e=getch();
    break;
  }
  while(e!=27);
  if(e==27)
    break;
  do
  { printf("Y");
    y=getch();
    break;
  }
  while(y!=27);
  if(y==27)
    break;
  do
  { printf("O");
    a=getch();
    break;
  }
  while(a!=27);
  if(o==27)
    break;
  do
  { printf("U ");
    u=getch();
    break;
  }
  while(u!=27);
  if(u==27)
    break;
  do
  { printf("%s . ",m);
    b=getch();
    break;
  }
  while(b!=27);
  if(b==27)
    break;
  c=getch();
}
while(c!=27);
for(i=0;m[i]!='\0';i++)
        {   if(m[i]=='a'||m[i]=='A')
                 m[i]='A';
            else if(m[i]=='b'||m[i]=='B')
                 m[i]='B';
            else if(m[i]=='c'||m[i]=='C')
                 m[i]='C';
            else if(m[i]=='d'||m[i]=='D')
                 m[i]='D';
            else if(m[i]=='e'||m[i]=='E')
                 m[i]='E';
            else if(m[i]=='f'||m[i]=='F')
                 m[i]='F';
            else if(m[i]=='g'||m[i]=='G')
                 m[i]='G';
            else if(m[i]=='h'||m[i]=='H')
                 m[i]='H';
            else if(m[i]=='i'||m[i]=='I')
                 m[i]='I';
            else if(m[i]=='j'||m[i]=='J')
                 m[i]='J';
            else if(m[i]=='k'||m[i]=='K')
                 m[i]='K';
            else if(m[i]=='l'||m[i]=='L')
                 m[i]='L';
            else if(m[i]=='m'||m[i]=='M')
                 m[i]='M';
            else if(m[i]=='n'||m[i]=='N')
                 m[i]='N';
            else if(m[i]=='o'||m[i]=='O')
                 m[i]='O';
            else if(m[i]=='p'||m[i]=='P')
                 m[i]='P';
            else if(m[i]=='q'||m[i]=='Q')
                 m[i]='Q';
            else if(m[i]=='r'||m[i]=='R')
                 m[i]='R';
            else if(m[i]=='s'||m[i]=='S')
                 m[i]='S';
            else if(m[i]=='t'||m[i]=='T')
                 m[i]='T';
            else if(m[i]=='u'||m[i]=='U')
                 m[i]='U';
            else if(m[i]=='v'||m[i]=='V')
                 m[i]='V'; 
            else if(m[i]=='w'||m[i]=='W')
                 m[i]='W';
            else if(m[i]=='x'||m[i]=='X')
                 m[i]='X';
            else if(m[i]=='y'||m[i]=='Y')
                 m[i]='Y';
            else if(m[i]=='z'||m[i]=='Z')
                 m[i]='Z';
        }
        m[i]='\0';
printf("\n\nhence it is proved that you love %s so much\n",m);
getch();
return 0;
}
