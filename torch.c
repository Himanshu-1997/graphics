#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include<time.h>
using namespace std;

int main(int argc, char const *argv[]){

	 int graphdriver, graphmode, errorcode, i;
	 graphdriver = DETECT;
	 initgraph(&graphdriver, &graphmode, "C:\\TC\\BGI");

	 rectangle(100,300,300,250);
	// rectangle(190,280,200,290);
	 setcolor(WHITE);
	 setfillstyle(4,WHITE);
	 //floodfill(105,295,WHITE);

	 setfillstyle(5,WHITE);
	 rectangle(400,200,350,350);
	 floodfill(375,300,WHITE);

	 line(300,250,350,200);
	 line(300,300,350,350);

	 setcolor(YELLOW);
	 setfillstyle(7,YELLOW);

	 int x;

	 in:
	 cout<<"ON(1) / OFF(0):"<<endl;
	 cin>>x;


    if(x==1){
      setcolor(GREEN);
	 setfillstyle(4,GREEN);
	 rectangle(10,30,40,30);
	 //floodfill(105,295,WHITE);


	 for(int j=200;j<=350;j+=1){
          setcolor(YELLOW);
          rectangle(190,280,200,290);
          setfillstyle(7,YELLOW);
          line(410,j,600,j-100);
          line(410,j,600,j+100);
          line(410,j,600,j);
          //delay(10);
	 }
        cout<<" TORCH STATUS:ON\n";
	   goto in;
    }

    else if(x==0){
       	 for(int j=200;j<=350;j+=1){
              setcolor(BLACK);
               rectangle(190,280,200,290);
              setfillstyle(7,BLACK);
              line(410,j,600,j-100);
              line(410,j,600,j+100);
              line(410,j,600,j);

              delay(0);
	 } cout<<" TORCH STATUS: OFF\n";
	   goto in;

    }


  getch();
  closegraph();
  return 0;
}
