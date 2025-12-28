#include <iostream>

int random(int min, int max){
	srand(time(NULL)*2500);
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
} 
int random2(int min, int max){
	srand(time(NULL)+15000);
	return min + rand() / (RAND_MAX / (max - min + 1) + 1);
}