#include <bits/stdc++.h>
#include <graphics.h>

using namespace std;

void drawCircle(int xc, int yc, int x, int y)
{
    putpixel(xc+x, yc+y, WHITE);
    putpixel(xc+x, yc-y, WHITE);
    putpixel(xc-x, yc-y,WHITE);
    putpixel(xc-x, yc+y, WHITE);
}

void circleBres(int xc, int yc, int r)
{
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (y >= x)
    {
        drawCircle(xc, yc, x, y);
        x++;
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, x, y);
        delay(200);
    }
    //x = r, y = 0;
    d = 3 - 2 * r;
    while (TRUE)
    {
    	if(x==0&&y==r)
			break;
        drawCircle(xc, yc, x, y);
        x--;
        if (d > 0)
        {
            y++;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        drawCircle(xc, yc, y, x);
        delay(200);
    }
}
int main()
{
    int xc = 100, yc = 100, r2 = 50;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    circleBres(xc, yc, r2);
    getch();
    return 0;
}
