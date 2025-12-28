#include <iostream>
#include "iGraphics.h"
void rightLeft(int ini, int &newD){
	if(ini>683){
		newD=-1;	
	}else
	{
		newD=1;		
	}

}
void reset(int &x,int &y,int &px,int &py){
		x=100;
		y=300;
		px=900;
		py=600;

}
void check(int &x,int &y,int &px,int &py){

	while(abs(x-px)<500&&abs(y-py)<250){
		if(abs(x-px)<10){
			
			x= rand()%660;

		}
		else{
			
			y=rand()%360 ;

		}
	}
}

