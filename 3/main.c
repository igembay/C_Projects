#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
       return exp(-0.08*x)*sin(x);
}

int main(int argc, char *argv[])
{

  int n,i,j,m;
  double Y[80];
  char Scr [20] [80];
  double x,y,x1,x2,dx,ymax,ymin;

  x1=0;
  x2=30;
  dx=(x2-x1)/80;

  ymax=0;
  ymin=0;

  i=0;
  for (x=x1; x<=x2; x+=dx)
   {
      y=f(x);
      if (y>ymax) ymax=y;
      if (y<ymin) ymin=y;
      Y[i++]=y;
   }

   ymax=ymax+(ymax-ymin)*0.1;
   ymin=ymin-(ymax-ymin)*0.1;

  for (i=0; i<20; i++)
   for (j=0; j<80; j++) Scr[i][j]=' ';

  for (i=0; i<80; i++)
  {
      m=20*(ymax-Y[i])/(ymax-ymin);
      Scr [m] [i]='*';
  }

  for (i=0; i<20; i++)
    for (j=0; j<80; j++) printf("%c",Scr[i][j]);

  system("PAUSE");
  return 0;
}
