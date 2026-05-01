// Marvis Zivanai M241606 - HCS411 Part E: graphics.h [100 Marks]
// NOTE: This code runs on Turbo C++ 3.0 with DOSBox
// graphics.h is obsolete and not supported on modern systems
// Modern OpenGL was used for Parts A, B, D, F instead

#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
    
    // Card Background
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    bar(50, 150, 550, 350);
    
    // Border
    setcolor(BLUE);
    setlinestyle(SOLID_LINE, 0, 3);
    rectangle(50, 150, 550, 350);
    
    // Logo Circle
    setcolor(BLUE);
    setfillstyle(SOLID_FILL, BLUE);
    circle(150, 250, 40);
    floodfill(150, 250, BLUE);
    
    // Text Details
    setcolor(BLACK);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtextxy(220, 180, "Marvis Zivanai");
    
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 1);
    outtextxy(220, 220, "M241606");
    outtextxy(220, 250, "Computer Graphics Developer");
    outtextxy(220, 280, "HCS411 - GZU 2026");
    outtextxy(220, 310, "Part E: graphics.h Library");
    
    getch();
    closegraph();
    return 0;
}
