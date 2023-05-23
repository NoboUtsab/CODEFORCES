#include <graphics.h>
int main()
{
int gd, gm;

detectgraph(&gd, &gm);
initgraph(&gd, &gm, (char*)"");
circle(250, 200, 80);
getch();
closegraph();
return 0;
}

