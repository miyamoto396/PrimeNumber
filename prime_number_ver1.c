/*素数を判別するプログラム1*/
/*まず偶数かどうかの判定*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/*倍数判定関数*/
/*真なら０を返す、偽なら１を返す*/
int multiple_two();
int multiple_three();


void main()
{
	int number = 49;
	int check = multiple_two(number);

	printf("%d\n",check);

	return;
}

int multiple_two(int number){
	int true_false;
	int nnumber = number%2;

	if(nnumber==1){
		true_false = 1;
	}
	else{
		true_false = 0;
	}
	
	return true_false;
}