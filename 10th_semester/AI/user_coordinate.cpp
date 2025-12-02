//User coordinate

#include<graphics.h>
#include<iostream>


using namespace std;

int main(){
	
	int w,h;
	cout << "Enter window width:";
	cin >> w;
	cout << "Enter window height:";
	cin >> h;
	
	int xc,yc;
	cout << "Enter Circle center X: ";
	cin >> xc;
	
	cout << "Enter circle center Y: ";
	cin >> yc;
	
	initwindow(w,h, "CSE2203027083");
	
	line(w/2,0,w/2,h);
	line(0,h/2,w,h/2);
	
	outtextxy(w/2+10,5, "+Y");
	outtextxy(w/2+10,h-20, "-Y");
	outtextxy(5,h/2+10, "-X");
	outtextxy(w-20,h/2+10, "+X");
	
	circle(xc,yc,100);
	
	while(!kbhit()){
		delay(200);
	}
	
	return 0;
}

