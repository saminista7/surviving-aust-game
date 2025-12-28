
void GameState()
{
if(gamestate==-1)
	{
		//menu
		iShowBMP(0,0,bc[0]);
		iShowImage(logox, logoy, 800, 100, button[0]);
		iShowImage(startx, starty, 300, 300, button[1]);
		iShowImage(musicx, musicy, 350, 20, music);

		if(start.hv==true)
			iShowImage(startx, starty, 300, 300, button[7]);
	}

	else if(gamestate==0)
	{
		//menu
		iShowBMP(0,0,bc[1]);
		for(int i=0; i<4; i++)
		{
			iShowImage(bCordinate[i].x1jas, bCordinate[i].y1jas, 300, 70, button[i+2]);
		}

		if(play2.hv==true)
			iShowImage(bCordinate[0].x1jas, bCordinate[0].y1jas, 300, 70, button[8]);

		else if(highscore2.hv==true)
			iShowImage(bCordinate[1].x1jas, bCordinate[1].y1jas, 300, 70, button[9]);

		else if(aboutus2.hv==true)
			iShowImage(bCordinate[2].x1jas, bCordinate[2].y1jas, 300, 70, button[10]);

		else if(exit2.hv==true)
			iShowImage(bCordinate[3].x1jas, bCordinate[3].y1jas, 300, 70, button[11]);

		iShowImage(musicx, musicy, 350, 20, music);
	}

	else if(gamestate==1)
	{
		iShowBMP(0,0,highScore);
		iShowImage(backx, backy, 100, 100, button[6]);
	}

	else if(gamestate==2)
	{
		iShowBMP(0,0,aboutUs);
		iShowImage(backx, backy, 100, 100, button[6]);
	}

	else if(gamestate==3)
	{
		iClear();
		newgameidr();

	}
	else if(gamestate==6)
	{
		iClear();
		l2o1idr();

	}
	else if(gamestate==9)
	{
		iClear();
		l3o1idr();

	}
	else if(gamestate==12)
	{
		iClear();
		l4o1idr();
	}
	else if(gamestate==4 || gamestate==7 || gamestate==10 || gamestate==12)
	{
		iShowImage(0,0,1366,768,bg[0]);
		iShowImage(Basket.xhia,Basket.yhia,150,150,bas);
		iShowImage(Ball.xhia,Ball.yhia,100,100,bal);

		if((life<=0) && (bump<5))
		{
			iShowImage(0,0,1366,768,bg[1]);	
		}
	}
	if(gamestate==5){
		scoreLimit=15;

		iClear();
		myDraw(screenWidth, screenHeight, x,y,px,py,standing,up, collide, gamestate, eI, i, ssscore);

	}
	if (gamestate==8){
		scoreLimit=20;
		iClear();
		myDraw(screenWidth, screenHeight, x,y,px,py,standing,up, collide, gamestate, eI, i, ssscore);
	}
	if (gamestate==11){
		scoreLimit=25;
		iClear();
		myDraw(screenWidth, screenHeight, x,y,px,py,standing,up, collide, gamestate, eI, i, ssscore);
	}
	if (gamestate==14){
		scoreLimit=30;
		iClear();
		myDraw(screenWidth, screenHeight, x,y,px,py,standing,up, collide, gamestate, eI, i, ssscore);
	}
	else if(gamestate==100){ 
		iClear();
		iShowImage(0,0,screenWidth,screenHeight,menu);
		iSetColor(110,110,110);
		iText(800,455,str4, GLUT_BITMAP_TIMES_ROMAN_24);
		total_t=0;

	}
}