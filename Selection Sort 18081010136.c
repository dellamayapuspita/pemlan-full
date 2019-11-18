#include <stdio.h>

int angka[6]={32,75,69,58,21,40};
int d,h;

void main(){
	for(d=0; d<6; d++){
		int indexAngkaTerkecil=d;
		for(h=d; h<6; h++){
			if(angka[h]<angka[indexAngkaTerkecil]){
				indexAngkaTerkecil=h;
			}
		}
		int temp=angka[d];
		angka[d]=angka[indexAngkaTerkecil];
		angka[indexAngkaTerkecil]=temp;
	}
	for(d=0; d<6; d++){
		printf("%d ", angka[d]);
	}
	getchar();
}
