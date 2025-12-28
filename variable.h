/*
0 = start
1 = menu
2 = high score
3 = level 1 obstacle 1
4 = level 1 obstacle 2
5 = level 1 obstacle 3
6 = level 2 obstacle 1
7 = level 2 obstacle 2
8 = level 2 obstacle 3
9 = level 3 obstacle 1
10 = level 3 obstacle 2 
11 = level 3 obstacle 3
12 = level 4 obstacle 1
13 = level 4 obstacle 2
14 = level 4 obstacle 3
*/




int gamestate=-1;
int bg[2];
int bas;
int bal;
bool collidehia= false;
int bump=0;
int life=3;

char strjas[100], str2jas[100];
int len;
int mode;

int backg[10];
int backpack,bottle,calculator,dragon,helicopter,laptop,notebook,pencilbox,ruler,sodacan,soundbox,book,rt,wrong,live,conti,rtcnt,cnt[8]={0},cntr[6]={0},cntw[6]={0},pl1o1=0;
int xxx=0, yyy=0;
int logox= 300, logoy= 500;
int startx=550, starty=100;
int backx= 1266, backy= 668;
int musicx= 966, musicy= 20;

bool musicOn=true;

char button[20];
char music;
char bc[3][50]= {"Background\\Bg-1.bmp","Background\\Bg-2.bmp","Background\\Bg-3.bmp"};
char play[15] = {"Menu2\\play.bmp"};
char highScore[30] = {"Menu2\\high score.bmp"};
char aboutUs[20] = {"Menu2\\about us.bmp"};




int collideState=0;
int newD=1;
int eating[5];
int p=0;
int eI=0;
int indexNumber=0;
int z=0, h=0 , g=0 , screenHeight= 768, screenWidth= 1366, dx= 8, dy= 8;
int r=100;
int x= rand()%1150+200, y=rand()%350+200 ;
int ini=x,iniy=y, i=0;
int e2=4, e3=12, e4=12;
int px=random2(r,screenWidth-r),py=random(r,screenHeight-r);
int ddx=4;
int ddy=4;

int score=0;

char str[];
char str[1000];
char str2[10];
char str3[10], str4[10];


double stopWatch=0;
double stoppedWatch;
double total_t=0;
double ssscore=total_t;
double scoreLimit=15;


bool scoreIncrement=true;
bool up=false;
bool collide=false, standing= true ;
bool eat= false, passed=false;

int standCounter=0, jumpCounter=0;
int t[4],e[18], cStateJ[25], menu, room, jump, thurst;