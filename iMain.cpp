#include "iGraphics.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <string.h>
#include "variable.h"
#include "structure.h"
#include "selection.h"
#include "Chasing.h"
#include "menu.h"
#include "basket.h"
#include "GameState.h"
using namespace std;



#define Width 1366
#define Height 768


int random(int min, int max){
	srand(time(NULL)*2500);
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
} 
int random2(int min, int max){
	srand(time(NULL)+15000);
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}

//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::Idraw Here::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://







object Basket;
void setBasket()
{
	Basket.xhia=1000;
	Basket.yhia=100;
}

object Ball;
void setBall()
{
	Ball.xhia= rand()%1360;
	Ball.yhia= 775;
}



//:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::idr::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::://


//void Menu()
//{



//}







void iDraw()
{
	iClear();
	cout<<"gamestate   "<<gamestate<<endl;
	cout<<"score   "<<score<<endl;
	cout<<"tt   "<<total_t<<endl;
	cout<<"sssss   "<<ssscore<<endl;
	GameState();
	iText(500,400,str, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(600,400,str2, GLUT_BITMAP_TIMES_ROMAN_24);
	iText(700,400,str3, GLUT_BITMAP_TIMES_ROMAN_24);

}





/*function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/

void iMouseMove(int mx, int my)
{
	xxx = mx - 150;
	yyy = my - 20;
}
//*******************************************************************ipassiveMouse***********************************************************************//
void iPassiveMouseMove(int mx, int my)
{
	if(gamestate==-1)
	{
		if(mx>=startx && mx<=startx+200 && my>=starty+100 && my<=starty+300)
			start.hv= true;
		else
			start.hv= false;
	}

	else if(gamestate==0)
	{
		if(mx>=bCordinate[0].x1jas && mx<=bCordinate[0].x1jas+300 && my>=bCordinate[0].y1jas && my<=bCordinate[0].y1jas+70)
			play2.hv = true;
		else
			play2.hv= false;

		if(mx>=bCordinate[1].x1jas && mx<=bCordinate[1].x1jas+300 && my>=bCordinate[1].y1jas && my<=bCordinate[1].y1jas+70)
			highscore2.hv= true;
		else
			highscore2.hv= false;

		if(mx>=bCordinate[2].x1jas && mx<=bCordinate[2].x1jas+300 && my>=bCordinate[2].y1jas && my<=bCordinate[2].y1jas+70)
			aboutus2.hv = true;
		else
			aboutus2.hv= false;

		if(mx>=bCordinate[3].x1jas && mx<=bCordinate[3].x1jas+300 && my>=bCordinate[3].y1jas && my<=bCordinate[3].y1jas+70)
			exit2.hv = true;
		else
			exit2.hv= false;

	}
}
/*void l1o1imm()
{
if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
{

}
}*/
void iMouse(int button, int state, int mx, int my)
{
	if(gamestate==-1)
	{
		if(mx>=startx && mx<=startx+200 && my>=starty+100 && my<=starty+300)
			gamestate= 0;
	}

	else if(gamestate==0)
	{
		for(int i=0; i<4; i++)
		{
			if(mx>=bCordinate[i].x1jas && mx<=bCordinate[i].x1jas+300 && my>=bCordinate[i].y1jas && my<=bCordinate[i].y1jas+70)
			{
				if(i!=0&&i!=3)
					gamestate= i;

				else if(i==0)
					gamestate = 3;

				else if(i==3)
					exit(0);
			}
		}
	}

	else if(gamestate==1||gamestate==2)
	{
		if(mx>=backx && mx<=backx+100 && my>=backy && my<=backy+100)
			gamestate= 0;
	}
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		if(gamestate==100&&((mx>270&&mx<665)&&(my>215&&my<310))){
			if(!passed){
				gamestate=collideState;
				total_t=0;
			}
			else gamestate=collideState+1;
			scoreIncrement=true;
			up=false;
		}
	}


	if(gamestate==3)//l1o1
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=410&&mx<=530)&&(my>=150&&my<=285))//w
				cnt[0]=1,score-=10;
			if((mx>=310&&mx<=380)&&(my>=300&&my<=420))//r
				cnt[1]=1,score+=20;
			if((mx>=410&&mx<=490)&&(my>=450&&my<=550))//w
				cnt[2]=1,score-=10;
			if((mx>=810&&mx<=860)&&(my>=450&&my<=550))//w
				cnt[3]=1,score-=10;
			if((mx>=870&&mx<=1020)&&(my>=300&&my<=450))//r
				cnt[4]=1,score+=20;
			if((mx>=810&&mx<=879)&&(my>=150&&my<=250))//r
				cnt[5]=1,score+=20;
			if((mx>=610&&mx<=710)&&(my>=60&&my<=110))
			{
				gamestate=4;
				for(int i=0;i<8;i++)
				{
					cnt[i]=0;
				}
			}
		}
	}
	else if(gamestate==6)//l2o1
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=710&&mx<=760)&&(my>=500&&my<=600))//w
				cnt[0]=1,score-=10;
			if((mx>=485&&mx<=565)&&(my>=500&&my<=600))//w
				cnt[1]=1,score-=10;
			if((mx>=485&&mx<=605)&&(my>=120&&my<=255))//w
				cnt[2]=1,score-=10;
			if((mx>=360&&mx<=480)&&(my>=250&&my<=330))//w
				cnt[3]=1,score-=10;
			if((mx>=810&&mx<=880)&&(my>=360&&my<=480))//r
				cnt[4]=1,score+=20;
			if((mx>=360&&mx<=480)&&(my>=380&&my<=500))//r
				cnt[5]=1,score+=20;
			if((mx>=710&&mx<=779)&&(my>=120&&my<=220))//r
				cnt[6]=1,score+=20;
			if((mx>=810&&mx<=890)&&(my>=220&&my<=325))//r
				cnt[7]=1,score+=20;
			if((rtcnt==4)&&(mx>=610&&mx<=710)&&(my>=30&&my<=80))
			{
				gamestate=7;
				for(int i=0;i<8;i++)
				{
					cnt[i]=0;
				}
			}
		}
	}
	else if(gamestate==9)//l3o1
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=485&&mx<=535)&&(my>=120&&my<=220))//w
				cnt[0]=1,score-=10;
			if((mx>=485&&mx<=485+80)&&(my>=500&&my<=600))//w
				cnt[1]=1,score-=10;
			if((mx>=710&&mx<=710+180)&&(my>=500&&my<=500+120))//r
				cnt[2]=1,score+=20;
			if((mx>=360&&mx<=360+70)&&(my>=380&&my<=380+120))//r
				cnt[3]=1,score+=20;
			if((mx>=810&&mx<=810+120)&&(my>=360&&my<=360+120))//r
				cnt[4]=1,score+=20;
			if((mx>=710&&mx<=779)&&(my>=120&&my<=220))//r
				cnt[5]=1,score+=20;
			if((mx>=360&&mx<=360+80)&&(my>=250&&my<=250+105))//r
				cnt[6]=1,score+=20;
			if((mx>=810&&mx<=930)&&(my>=220&&my<=300))//w
				cnt[7]=1,score-=10;
			if((rtcnt==5)&&(mx>=610&&mx<=710)&&(my>=30&&my<=80))
			{
				gamestate=10;
				for(int i=0;i<8;i++)
				{
					cnt[i]=0;
				}
			}
		}
	}
	else if(gamestate==12)//l4o1
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if((mx>=485&&mx<=485+120)&&(my>=120&&my<=180))//r
				cnt[0]=1,score+=20;
			if((mx>=710&&mx<=710+80)&&(my>=120&&my<=220))//w
				cnt[1]=1,score-=10;
			if((mx>=450&&mx<=450+180)&&(my>=500&&my<=500+120))//r
				cnt[2]=1,score+=20;
			if((mx>=810&&mx<=810+70)&&(my>=220&&my<=220+120))//r
				cnt[3]=1,score+=20;
			if((mx>=810&&mx<=810+120)&&(my>=360&&my<=360+120))//r
				cnt[4]=1,score+=20;
			if((mx>=710&&mx<=779)&&(my>=500&&my<=600))//r
				cnt[5]=1,score+=20;
			if((mx>=360&&mx<=360+80)&&(my>=250&&my<=250+105))//r
				cnt[6]=1,score+=20;
			if((mx>=360&&mx<=360+120)&&(my>=380&&my<=460))//w
				cnt[7]=1,score-=10;
			if((rtcnt==6)&&(mx>=610&&mx<=710)&&(my>=30&&my<=80))
			{
				gamestate=13;
				for(int i=0;i<8;i++)
				{
					cnt[i]=0;
				}
			}
		}
	}


	else if(gamestate==5 || gamestate==8 || gamestate==11 || gamestate==13)
	{
		if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
		{
			if(gamestate==100&&((mx>270&&mx<665)&&(my>215&&my<310))){
				if(!passed)
					gamestate=collideState;
				else gamestate=collideState+1;
				scoreIncrement=true;
				up=false;
			}
		}
	}

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{

	if(gamestate==4 ||gamestate==7||gamestate==10||gamestate==13)
	{
		if (key =='d')
		{
			if(gamestate==4)
			{
				Basket.xhia+=20;
			}

			if(gamestate==7)
			{
				Basket.xhia+=25;
			}

			if(gamestate==10)
			{
				Basket.xhia+=30;
			}

			if(gamestate==13)
			{
				Basket.xhia+=35;
			}

		}
		else if (key == 'a')
		{
			if(gamestate==4)
			{
				Basket.xhia-=20;
			}

			if(gamestate==7)
			{
				Basket.xhia-=25;
			}

			if(gamestate==10)
			{
				Basket.xhia-=30;
			}

			if(gamestate==13)
			{
				Basket.xhia-=35;
			}
		}

		if(key =='e')
		{
			if(life<=0)
			{
				score=0;
				bump=0;
				life=3;
				Ball.yhia=775;
			}
		}

		else if(gamestate==5||gamestate==8||gamestate==11||gamestate==14)
		{
			if(key != '\b')
			{
				str[indexNumber]= key;


				indexNumber++;
				str[indexNumber]= '\0';
			}

			else
			{
				if(indexNumber <= 0)
					indexNumber=0;

				else
					indexNumber--;

				str[indexNumber]= '\0';
			}
		}

	}
	if(key =='x')
	{
		gamestate++;
	}
}

/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/

void iSpecialKeyboard(unsigned char key)
{
	if (key == GLUT_KEY_END)
	{
		if(musicOn)
		{
			musicOn= false;
			PlaySound(0, 0, 0);
		}
		else
		{
			musicOn= true;
			PlaySound("Music\\Deep-ambient-music.wav", NULL, SND_LOOP| SND_ASYNC);
		}
	}
	else if(gamestate==5||gamestate==8||gamestate==11||gamestate==14)
	{
		if (key == GLUT_KEY_RIGHT)
		{
			standing= false;
			up=false;
			px+=20;
			i++;
			if(i>24) i=0;


		}
		if (key == GLUT_KEY_UP)
		{
			py+=20;
			up=true;
		}

		if (key == GLUT_KEY_LEFT)
		{
			standing=false;
			px-=20;
			i--;
			up=false;

			if(i<0) i=24;
		}

		if (key == GLUT_KEY_DOWN)
		{
			py-=20;	
			up=true;
		}
	}


}


int main()
{
	///srand((unsigned)time(NULL));

	if(musicOn)
	{
		PlaySound("Music\\Deep-ambient-music.wav", NULL, SND_LOOP| SND_ASYNC);
	}

	len = 0;
	mode = 0;
	strjas[0]= 0;
	rightLeft(ini, newD);
	check(x,y,px,py);
	//if(gamestate==5||gamestate==8||gamestate==11||gamestate==14)
	//{
	iSetTimer(100,change2);
	iSetTimer(30, change);
	//{
	setCordinate();
	setBasket();
	setBall();
	iSetTimer(50,Fall);
	iInitialize(Width, Height, "DumbyDoo");
	image();
	charRend();
	Buttons();
	iStart();
}