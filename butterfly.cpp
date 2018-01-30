 #include<graphics.h>
#include<conio.h>
#include<stdlib.h>
char *buff1,*buff2;
int main()
{
    int gd=DETECT,gm;
    void *buff;
    int area1,area2,x,y,inc_x=10,inc_y=10;

    initgraph(&gd,&gm,"c:\\tc\\bgi");

    //  structure of butterfly
     ellipse(240,80,115,65,10,40);//body

     circle(240,40,10);   // face
     circle(240,30,2);    // lips
     circle(235,37,2);   // left eye
     circle(245,37,2);   // right eye

     ellipse(215,40,15,100,20,40);    //antenna
     ellipse(265,40,85,165,20,40);    //antenna

     ellipse(160,90,270,0,80,25);   //left wing
     ellipse(160,60,0,90,80,25);

     ellipse(160,75,270,90,15,40);   // wing border
     ellipse(320,75,90,270,15,40);   //wing border

     ellipse(320,90,180,270,80,25); //  right wing
     ellipse(320,60,90,180,80,25);

     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(240,40,WHITE);
     setfillstyle(SOLID_FILL,BLUE);
     floodfill(200,80,WHITE);
     floodfill(290,60,WHITE);
     setfillstyle(SOLID_FILL,RED);
     floodfill(240,80,WHITE);
     setfillstyle(SOLID_FILL,GREEN);
     floodfill(240,110,WHITE);
     //Store first image action
     area1=imagesize(160,0,320,120);
     buff1=(char*)malloc(area1);

     getimage(160,0,320,120,buff1);
     clearviewport();
     // second image creation part
     ellipse(240,80,120,60,10,40);

     circle(240,40,10);
     circle(240,30,2);
     circle(235,37,2);
     circle(245,37,2);

     ellipse(215,40,15,100,20,30);
     ellipse(265,40,85,165,20,30);

     ellipse(320,90,180,260,80,40);
     ellipse(320,60,100,180,80,40);
     ellipse(310,75,115,245,15,60);

     ellipse(160,90,280,0,80,40); //  left
     ellipse(160,60,0,80,80,40);
     ellipse(170,75,295,65,15,60);
     setfillstyle(SOLID_FILL,YELLOW);
     floodfill(240,40,WHITE);
     setfillstyle(SOLID_FILL,BLUE);
     floodfill(200,80,WHITE);
     floodfill(290,60,WHITE);
     setfillstyle(SOLID_FILL,RED);
     floodfill(240,80,WHITE);
     setfillstyle(SOLID_FILL,GREEN);
     floodfill(240,110,WHITE);

     //Store second image    (WINGS BEHIND)
     area2=imagesize(160,0,320,140);
     buff2=(char*)malloc(area2);
     getimage(160,0,320,140,buff2);
     clearviewport();

     x=10;y=1;
     while(!kbhit())
     {
    x += inc_x;
        if(x > getmaxx()-175)
            inc_x = -5;
        if(x < 10 )
            inc_x = 10;
        y += inc_y;
        if(y > getmaxy()-135)
            inc_y = -10;
        if(y < 10 )
            inc_y = 10;
       putimage(x,y,buff1,COPY_PUT);
       delay(100);
       clearviewport();
       putimage(x,y,buff2,COPY_PUT);
       delay(100);
       clearviewport();
      }
      getch();
      closegraph();
}
