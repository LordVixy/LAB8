#include <stdio.h>
#include <stdlib.h>
#include "max.h"
#include "min.h"


int main(){

	int t[]={13,12,5,1,19,13,17};
	int n=7;
	int val_max;
	int val_min;
	max(t,n,&val_max);
	min(t,n,&val_min);

	printf (" le max est : %d\n le min est : %d\n", val_max, val_min);

	return 0;
}
