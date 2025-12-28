//collision flag
#include "structure.h"

void collisionhia(int &x1hia, int &y1hia, int &x2hia, int &y2hia){
	if((x1hia+r> x2hia && x2hia+r > x1hia)&&(y1hia+r> y2hia && y2hia+r > y1hia))
	{
		collidehia= true;
	}
}

void Fall()
{
	if(gamestate==4)
	{
		Ball.yhia-=5;
	}
	else if(gamestate==7)
	{
		Ball.yhia-=10;
	}
	else if(gamestate==10)
	{
		Ball.yhia-=15;
	}
	else if(gamestate==13)
	{
		Ball.yhia-=20;
	}

	if(Ball.yhia < 80)
	{
		Ball.yhia=775;
		Ball.xhia= rand()%1360;
		life--;
		score= score-10;
	}

	collisionhia(Ball.xhia,Ball.yhia,Basket.xhia,Basket.yhia);
	if(collidehia==true)
	{
		Ball.yhia=775;
		Ball.xhia= rand()%1360;
		bump++;
		score= score+20;
		collidehia= false;	
	}

	if(bump==5) 
	{
		if(gamestate==4)
		{
			gamestate=5;
			bump=0;
			Basket.xhia=1000;
			Basket.yhia=100;
		}


		if(gamestate==7)
		{
			gamestate=8;
			bump=0;
			Basket.xhia=1000;
			Basket.yhia=100;
		}
		if(gamestate==10)
		{
			gamestate=11;
			bump=0;
			Basket.xhia=1000;
			Basket.yhia=100;
		}
		if(gamestate==13)
		{
			gamestate=14;
		}
	}


}