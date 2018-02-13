#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void rotate( int figure[], int edges, double angle, int cx, int cy )
{
	double x, y;
	angle = -1 * (angle*3.14/180);
	double cos_a = cos(angle);
	double sin_a = sin(angle);

	for(int i=0; i < edges; i++)
	{
		x = figure[2*i] - cx;
		y = figure[2*i+1] - cy;
		figure[2*i] = ceil( (x * cos_a) - (y * sin_a) + cx );
		figure[2*i+1] = ceil( (x * sin_a)+(y * cos_a) + cy );
	}
}
int main()
{
    int a;
printf("press 1 for translation\npress 2 for scaling\npress 3 for rotation\n");
scanf("%d",&a);
int poly[12];
poly[0]=100,poly[1]=50,poly[2]=50,poly[3]=100,poly[4]=50,poly[5]=200,poly[6]=150,poly[7]=200,poly[8]=150,poly[9]=100,poly[10]=100,poly[11]=50;
if(a==1){
        int gd=DETECT, gm;
        initgraph(&gd,&gm,"C:\\TC\\BGI");
        int i=0,tx,ty;
        //printf("Enter xc,yc,r\n");
        //scanf("%d%d%d",&xc,&yc,&r);
        setcolor(YELLOW);
        //circle(xc,yc,r);
        drawpoly(6,poly);
        printf("Enter tx,ty\n");
        scanf("%d%d",&tx,&ty);\
        for(i=0;i<12;i+=2){
            poly[i]+=tx;
        }
        for(i=1;i<12;i+=2){
            poly[i]+=ty;
        }
        cleardevice();
        setcolor(WHITE);
        drawpoly(6,poly);
        getch();
        closegraph();
        }
    else if(a==2)
    {
        int gd=DETECT,gm;
        initgraph(&gd,&gm,"C:\\TC\\BGI");
        int i=0,sx,sy;
        //printf("x1,y1,x2,y2\n");
        //cin>>x1>>y1>>x2>>y2;
        //scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
        //rectangle(x1,y1,x2,y2);
        setcolor(YELLOW);
        drawpoly(6,poly);
        printf("sx,sy\n");
        //cin>>sx>>sy;
        scanf("%d%d",&sx,&sy);
        //rectangle(x3,y3,x4,y4);
        for(i=0;i<12;i+=2){
            poly[i]*=sx;
            poly[i+1]*=sy;
        }
        cleardevice();
        setcolor(WHITE);
        drawpoly(6,poly);
        getch();
        closegraph();
    }
    else if(a==3)
        {
    int figure[20], edges,i;  // A Figure with Max 10 edges.
	double angle;
	int cx=0, cy=0;
	int gd = DETECT, gm;
	initgraph( &gd, &gm, "" );
	int max_y = getmaxy();
	//clrscr();
	cleardevice();

	printf( "Number of edges: " );
	scanf( "%d", &edges );

	for( i=0; i < edges; i++)
	{
		printf( "Enter edge (x%d,y%d) : ", i , i );
		scanf( "%d %d", &figure[2*i], &figure[2*i+1] );
	}
	figure[2*i] = figure[0];
	figure[2*i+1] = figure[1];
	edges += 1;

	printf( "Enter angle of rotation in degrees: ");
	scanf( "%lf", &angle);

	printf( "Enter the center of rotation: \n");
	printf( "cx: ");
	scanf( "%d", &cx);
	printf( "cy: ");
	scanf( "%d", &cy);
	cy = max_y - cy;

	cleardevice();
	setbkcolor(WHITE);

	setcolor(GREEN);
	setlinestyle(SOLID_LINE, 0, 3);
	drawpoly( edges, figure );
	//getch();
    //cleardevice();
	for(int i=0; i < edges; i++)
		figure[2*i+1] = max_y - figure[2*i+1];
	rotate(figure,edges,angle,cx,cy);
	for(int i=0; i < edges; i++)
		figure[2*i+1] = max_y - figure[2*i+1];

	setcolor(WHITE);
	drawpoly( edges, figure );
	getch();
    }
    else{
        printf("Read the instruction carefully!!");
    }
}
