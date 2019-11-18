#include <stdio.h> 
#include <stdlib.h> 
 
int main()  
{  
 int x, y, i, hasil;  
 printf("Masukkan angka yang akan dipangkatkan: "); 
 scanf("%d", &x); 
 printf("Masukkan angka pangkat: "); 
 scanf("%d", &y); 
  
 i=1; 
 hasil=1; 
  
 for(i=1;i<=y;i++) 
 { 
  hasil=hasil*x;  
 } 
 printf("Hasil angka %d pangkat %d adalah %d ",x,y, hasil); 
 return 0; 
}
