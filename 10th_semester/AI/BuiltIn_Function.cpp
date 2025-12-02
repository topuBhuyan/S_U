// built_in function

#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
	
	int w , h, R;
	cout << "Enter width and height: ";
	cin >> w >> h;
	cout << "Enter Radius: ";
	cin >> R;
    initwindow(w, h, "CSE2203027083");

    rectangle(5, 5, w-5, h-5);

    line(w/2 - R, 5, w/2-R, w-5);   // left vertical
    line(w/2 + R, 5, w/2 + R, h-5);   // right vertical

    line(5, h/2, w-5, h/2);   // center horizontal

    
    circle(w/2, h/2, 50);	//circle draw

    while(!kbhit()){
    	delay(200);
	}

    closegraph();
    return 0;
}

