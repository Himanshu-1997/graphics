#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int    polyCorners;
float  polyX[20];
float  polyY[20];
float  x, y;

bool pointInPolygon() {

  int   i, j=polyCorners-1 ;
  bool  oddNodes=false      ;

  for (i=0; i<polyCorners; i++) {
    if (polyY[i]<y && polyY[j]>=y
    ||  polyY[j]<y && polyY[i]>=y) {
      if (polyX[i]+(y-polyY[i])/(polyY[j]-polyY[i])*(polyX[j]-polyX[i])<x) {
        oddNodes=!oddNodes; }}
    j=i; }

  return oddNodes; }
int main()
{
    int i;
    int ch;
    bool f;
    printf("Enter the number of co-ordinates: ");
    scanf("%d",&polyCorners);
    printf("Enter the x and y co-ordinates respectively: \n");
    for(i=1;i<=polyCorners;i++)
    {
        scanf("%d",&polyX[i]);
        scanf("%d",&polyY[i]);
    }
     printf("Enter 1 to continue: ");
       scanf("%d",&ch);
    while(ch==1)
    {
       printf("Enter the co-ordinates of point to test: ");
       scanf("%d",&x);
       scanf("%d",&y);
       f=pointInPolygon();
       if(f)
        printf("Inside\n");
       else
        printf("Outside\n");
       printf("Enter 1 to continue: ");
       scanf("%d",&ch);
    }

    return 0;
}
