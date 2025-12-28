void setCordinate()
{
	int sum=100;
	for(int i=3;i>=0;i--)
	{
		bCordinate[i].x1jas= 520;
		bCordinate[i].y1jas= sum;
		sum+=150;
	}
}

void Buttons()
{
	button[0] = iLoadImage("Menu\\logo.png");
	button[1] = iLoadImage("Menu\\start.png");
	button[2] = iLoadImage("Menu\\play.png");
	button[3] = iLoadImage("Menu\\high score.png");
	button[4] = iLoadImage("Menu\\about us.png");
	button[5] = iLoadImage("Menu\\exit.png");
	button[6] = iLoadImage("Menu\\back.png");

	button[7] = iLoadImage("Menu\\start2.png");
	button[8] = iLoadImage("Menu\\play2.png");
	button[9] = iLoadImage("Menu\\high score2.png");
	button[10] = iLoadImage("Menu\\about us2.png");
	button[11] = iLoadImage("Menu\\exit2.png");

	music = iLoadImage("Menu\\music.png");
}