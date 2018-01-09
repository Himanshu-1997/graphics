#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main(){
    int gdriver = DETECT,gmode;
        double PI=3.14;
    int x,y,i,m,n,j;
    float k=0;
    initgraph(&gdriver,&gmode,"C:\\Turbo3\\BGI");
    x=getmaxx()/4;
    y=getmaxy()/4;

    while(1){
        cleardevice();
    //delay(100);
        setcolor(WHITE);
        //arc(x,y,0,180,i-20);
        //setcolor(COLOR(255,153,51));
        line(x+10,y+20,x+200,y+20);
        line(x+10,y+63,x+200,y+63);
        line(x+10,y+106,x+200,y+106);
        line(x+10,y+20,x+10,y+300);
        line(x+10,y+150,x+200,y+150);
        line(x+200,y+20,x+200,y+150);
        line(x+10-15,y+300,x+25,y+300);
        line(x+10-15,y+300,x-5,y+306);
        line(x+25,y+300,x+25,y+306);
        line(x+10-15,y+306,x+25,y+306);
        setfillstyle(1,COLOR(255,153,51));
        floodfill(x+95,y+41,15);
        setfillstyle(1,15);
        floodfill(x+95,y+84,15);
        setfillstyle(1,2);
        floodfill(x+95,y+125,15);
                setcolor(BLACK);
            circle(x+105,y+84,20);

            for(i=0;i<360;i+=15)
            {
                //delay(100);
                setcolor(BLACK);
                m=20*cos(i*PI/180+k);
                n=20*sin(i*PI/180+k);
                line(x+105,y+84,m+x+105,y+84-n);
            }
            k=k+0.1;
            delay(100);
        }
    getch();
}

