#include <stdio.h>
#include <stdlib.h>

struct ipkmhs {
	int npm;
	float ipk;
};
typedef struct ipkmhs im;

int main()
{
	int h;
	im ipkmhs[5];
	ipkmhs[0].npm = 136;
	ipkmhs[0].ipk = 3.0;

	ipkmhs[1].npm = 137;
	ipkmhs[1].ipk = 2.9;
	
	ipkmhs[2].npm = 138;
	ipkmhs[2].ipk = 3.6;
	
	ipkmhs[3].npm = 139;
	ipkmhs[3].ipk = 3.7;
	
	ipkmhs[4].npm = 140;
	ipkmhs[4].ipk = 4.0;

	for(h = 0 ; h<5 ; h++)
	{
		printf("%d = %f \n", ipkmhs[h].npm, ipkmhs[h].ipk);
	}
	return 0;
}

