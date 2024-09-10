#include<stdio.h> 
#include <stdlib.h> 
int main()
{
	int a1 = 9, a2 = 2, b1, b2, b3; 
	a2 += a1;	// a2=2+9=11
	b1 = a2 / 4 + a2 % 4;	// b1=11/4+11%4=2+3=7
	b2 = b1 > b2 && b1 > a2;	// b3=(7>3) та(7>11) ? нi 0
	printf("b2=%d\n", b2);
	b3 = --b2;	// b2=b2-1=0-1=-1 b3=b2=-1
	printf("a2=%d b1=%d b2=%d b3=%d\n", a2, b1, b2, b3); 
	float f1 = 3.6, f2 = 0.5, r1, r2;
	r1 = f1 / f2;	// r1=3.6/0.5=7.2
	r2 = (f1 < f2) ? f1 + 2 : --f2;	// r2=(3.6<0.5)? нi (0.5–1)= –0.5
	printf("r1=%5.2f r2=%5.2f\n", r1, r2); 
	system("pause"); 
	return 0; 
}
