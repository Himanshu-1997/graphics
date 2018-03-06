#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<DOS.h>
#include<stdlib.h>
#include<math.h>
int main()
{
        int gd=DETECT,gm;
        initgraph(&gd,&gm,"c:\\turboc3\\bgi");
        int x=200,y=250,xm;
        xm=getmaxx();
        line(x+75,y+75,x+170,y-10);
        ellipse(x+170,y-50,0,360,28,40);
        while(!kbhit())
        {
            if(x<=xm)
            {
            cleardevice();
            x=x+20;
            line(x+75,y+75,x+170,y-10);
            ellipse(x+170,y-50,0,360,28,40);
            delay(100);
            }
            else
            {
                do
                {
                cleardevice();
                x=x-20;
                line(x+170,y-10,x+245,y+75);
                ellipse(x+170,y-50,0,360,28,40);
                delay(100);
                }
                while(x!=0);

            }
        }

        getch();
        closegraph();
}
