#include <stdio.h>
#include <stdlib.h>

double coss(double x,int n){
	
	double res = 1;
	double h = -(x*x)/2;
	double a = 3;
	double b = 4;

	for (int i = 1; i <= n; i++){	
		
		res = res + h;
		h = h *((-(x*x))/(a*b));
		a = a + 2;
		b = b + 2;
	}

	return res;
}

int main(int argc, char const *argv[]){
	if(argc != 3)
		return 0;

	double r = coss(atof(argv[1]),atoi(argv[2]));
	printf("%.16f\n",r);
	
	return 0;
}

