#include <iostream>

int standCounter=0, jumpCounter=0;
int t[4],e[18], cStateJ[25], menu, room, jump, thurst;

void charRend(){
	char currentStateJelly[25][15]={"images\\1.png","images\\2.png","images\\3.png","images\\4.png","images\\5.png","images\\6.png","images\\7.png","images\\8.png","images\\9.png","images\\10.png","images\\11.png","images\\12.png","images\\13.png","images\\14.png","images\\15.png","images\\16.png","images\\17.png","images\\18.png","images\\19.png","images\\20.png","images\\21.png","images\\22.png","images\\23.png","images\\24.png","images\\25.png",};
	menu=iLoadImage("menu\\Untitled.png");
	room=iLoadImage("room\\1.jpg");
	t[0]=iLoadImage("charr\\1.png");
	t[1]=iLoadImage("charr\\2.png");
	t[2]=iLoadImage("charr\\3.png");
	t[3]=iLoadImage("charr\\4.png");
	e[0]=iLoadImage("enemy\\1.png");
	e[1]=iLoadImage("enemy\\2.png");
	e[2]=iLoadImage("enemy\\3.png");
	e[3]=iLoadImage("enemy\\4.png");
	e[4]=iLoadImage("enemy\\5.png");
	e[5]=iLoadImage("enemy\\6.png");
	e[6]=iLoadImage("enemy\\7.png");
	e[7]=iLoadImage("enemy\\8.png");
	e[8]=iLoadImage("enemy\\9.png");
	e[9]=iLoadImage("enemy\\10.png");
	e[10]=iLoadImage("enemy\\11.png");
	e[11]=iLoadImage("enemy\\12.png");
	e[12]=iLoadImage("enemy\\13.png");
	e[13]=iLoadImage("enemy\\14.png");
	e[14]=iLoadImage("enemy\\15.png");
	e[15]=iLoadImage("enemy\\16.png");
	e[16]=iLoadImage("enemy\\17.png");
	e[17]=iLoadImage("enemy\\18.png");
	thurst=iLoadImage("images\\thurst.png");
	jump=iLoadImage("images\\jump.png");
	int L=0; 
	while (L<25){
		cStateJ[L]=iLoadImage(currentStateJelly[L]);
		L++;
	}

}


void myDraw(int screenWidth, int screenHeight, int &x, int &y, int px, int py, bool &standing, bool &up, bool collide, int &gameState, int eI, int i, double &score ){
		//charRend();
		iSetColor(0, 255 , 255);
		iShowImage(0,0,screenWidth,screenHeight,room);
		iShowImage(x,y,100,100,e[eI]);
		if(!standing){

			standCounter++;
			if(standCounter>15){ 
				standing=true;
				standCounter=0;

			}
			iShowImage(px,py,300,180,cStateJ[i]);


		}else if(!up&&standing){
			iShowImage(px,py,300,180,cStateJ[4]);
		}
		if(up){
			jumpCounter++;
			standing=true;
			iShowImage(px,py,300,180,jump);
			iShowImage(px+123,py+10,40,40,thurst);
			if(jumpCounter>30){
				up=false;
				jumpCounter=0;

			}
		}

		if(collide){
			gameState=100;
			score=0;
		}
}