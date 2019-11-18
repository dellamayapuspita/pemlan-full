#include <stdio.h>

int angka[6]={22,10,15,3,8,2};
int d,h;

void main(){
	for(d=1; d<6; d++){
		for(h=d; h>0 && angka[h]<angka[h-1]; h--){
			int temp=angka[h-1];
			angka[h-1]=angka[h];
			angka[h]=temp;
		}
	}

	for(d=0; d<6; d++){
		printf("%d ", angka[d]);
	}
	getchar();
}
