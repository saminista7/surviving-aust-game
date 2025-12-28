void image()
{
	backg[0]= iLoadImage("Asset\\Background.png");
	backpack = iLoadImage("Asset\\Bagpack.png");
	bottle = iLoadImage("Asset\\Bottle.png");
	calculator = iLoadImage("Asset\\Calculator.png");
	dragon = iLoadImage("Asset\\Dragon.png");
	helicopter = iLoadImage("Asset\\Helicopter.png");
	laptop = iLoadImage("Asset\\Laptop.png");
	notebook = iLoadImage("Asset\\Notebook.png");
	pencilbox = iLoadImage("Asset\\Pencil Box.png");
	ruler = iLoadImage("Asset\\Ruler.png");
	sodacan = iLoadImage("Asset\\Soda Can.png");
	soundbox = iLoadImage("Asset\\Sound Box.png");
	book = iLoadImage("Asset\\Teach yourself C Book.png");
	rt = iLoadImage("Asset\\right.png");
	wrong = iLoadImage("Asset\\wrong.png");
	live = iLoadImage("Asset\\live.png");
	conti = iLoadImage("Asset\\continue.png");
	bg[0]= iLoadImage("Background\\bg.png");
	bg[1]= iLoadImage("Background\\gameover.png");
	bas= iLoadImage("Basket\\blueb.png");
	bal= iLoadImage("Basket\\cgpa.png");
}


void l1o1idr()
{
	rtcnt=0;

	iShowImage(0, 0, Width, Height,backg[0]);
	iShowImage(550, 250, 200, 260, backpack);
	iShowImage(410, 150, 120, 135, dragon);
	iShowImage(310, 300, 70, 120, pencilbox);
	iShowImage(410, 450, 80, 100, soundbox);
	iShowImage(810, 450, 50, 100, sodacan);
	iShowImage(870, 300, 120, 120, notebook);
	iShowImage(810, 150, 69, 100, calculator);
	if(cnt[0])
	{
		iShowImage(410, 150, 120, 135, wrong);
	}
	if(cnt[1])
	{
		iShowImage(310, 300, 70, 120,rt);rtcnt++;
	}
	if(cnt[2])
	{
		iShowImage(410, 450, 80, 100, wrong);
	}
	if(cnt[3])
	{
		iShowImage(810, 450, 50, 100, wrong);
	}
	if(cnt[4])
	{
		iShowImage(870, 300, 120, 120,rt);rtcnt++;
	}
	if(cnt[5])
	{
		iShowImage(810, 150, 69, 100,rt);rtcnt++;
	}
	if(rtcnt==3)
	{
		iShowImage(610, 60, 100, 50, conti);
	}
}

void l2o1idr()
{

	rtcnt=0;
	iShowImage(0, 0, Width, Height,backg[0]);
	iShowImage(550, 250, 200, 260, backpack);
	iShowImage(710, 500, 50, 100, sodacan);
	iShowImage(485, 500, 80, 100, soundbox);
	iShowImage(485, 120, 120, 135, dragon);
	iShowImage(810, 360, 70, 120, pencilbox);
	iShowImage(360, 380, 120, 120, notebook);
	iShowImage(710, 120, 69, 100, calculator);
	iShowImage(810, 220 , 80, 105, book);
	iShowImage(360, 250 , 120, 80, helicopter);
	if(cnt[0])
	{
		iShowImage(710, 500, 50, 100, wrong);
	}
	if(cnt[1])
	{
		iShowImage(485, 500, 80, 100, wrong);
	}
	if(cnt[2])
	{
		iShowImage(485, 120, 120, 135, wrong);
	}
	if(cnt[3])
	{
		iShowImage(360, 250 , 120, 80, wrong);
	}
	if(cnt[4])
	{
		iShowImage(810, 360, 70, 120,rt);rtcnt++;
	}
	if(cnt[5])
	{
		iShowImage(360, 380, 120, 120,rt);rtcnt++;
	}
	if(cnt[6])
	{
		iShowImage(710, 120, 69, 100,rt);rtcnt++;
	}
	if(cnt[7])
	{
		iShowImage(810, 220 , 80, 105,rt);rtcnt++;
	}
	if(rtcnt==4)
	{
		iShowImage(610, 30, 100, 50, conti);
	}
}
void l3o1idr()
{
	rtcnt=0;
	iShowImage(0, 0, Width, Height,backg[0]);
	iShowImage(550, 250, 200, 260, backpack);
	iShowImage(485, 120, 50, 100, sodacan);
	iShowImage(485, 500, 80, 100, soundbox);
	iShowImage(710, 500, 180, 120, laptop);
	iShowImage(360, 380, 70, 120, pencilbox);
	iShowImage(810, 360, 120, 120, notebook);
	iShowImage(710, 120, 69, 100, calculator);
	iShowImage(360, 250 , 80, 105, book);
	iShowImage(810, 220 , 120, 80, helicopter);
	if(cnt[0])
	{
		iShowImage(485, 120, 50, 100, wrong);
	}
	if(cnt[1])
	{
		iShowImage(485, 500, 80, 100, wrong);
	}
	if(cnt[2])
	{
		iShowImage(710, 500, 180, 120,rt);rtcnt++;
	}
	if(cnt[3])
	{
		iShowImage(360, 380, 70, 120,rt);rtcnt++;
	}
	if(cnt[4])
	{
		iShowImage(810, 360, 120, 120,rt);rtcnt++;
	}
	if(cnt[5])
	{
		iShowImage(710, 120, 69, 100,rt);rtcnt++;
	}
	if(cnt[6])
	{
		iShowImage(360, 250 , 80, 105,rt);rtcnt++;
	}
	if(cnt[7])
	{
		iShowImage(810, 220 , 120, 80, wrong);
	}
	if(rtcnt==5)
	{
		iShowImage(610, 30, 100, 50, conti);
	}
}

void l4o1idr()
{
	rtcnt=0;
	iShowImage(0, 0, Width, Height,backg[0]);
	iShowImage(550, 250, 200, 260, backpack);
	iShowImage(485, 120, 120, 60, ruler);
	iShowImage(710, 120, 80, 100, soundbox);
	iShowImage(450, 500, 180, 120, laptop);
	iShowImage(810, 220 , 70, 120, pencilbox);
	iShowImage(810, 360, 120, 120, notebook);
	iShowImage(710, 500, 69, 100, calculator);
	iShowImage(360, 250 , 80, 105, book);
	iShowImage(360, 380, 120, 80, helicopter);
	if(cnt[0])
	{
		iShowImage(485, 120, 120, 60,rt);rtcnt++;
	}
	if(cnt[1])
	{
		iShowImage(710, 120, 80, 100, wrong);
	}
	if(cnt[2])
	{
		iShowImage(450, 500, 180, 120,rt);rtcnt++;
	}
	if(cnt[3])
	{
		iShowImage(810, 220 , 70, 120,rt);rtcnt++;
	}
	if(cnt[4])
	{
		iShowImage(810, 360, 120, 120,rt);rtcnt++;
	}
	if(cnt[5])
	{
		iShowImage(710, 500, 69, 100,rt);rtcnt++;
	}
	if(cnt[6])
	{
		iShowImage(360, 250 , 80, 105,rt);rtcnt++;
	}
	if(cnt[7])
	{
		iShowImage(360, 380, 120, 80, wrong);
	}
	if(rtcnt==6)
	{
		iShowImage(610, 30, 100, 50, conti);
	}
}


void newgameidr()//l1o1
{
	l1o1idr();
}