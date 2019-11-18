#include <stdio.h> 
#include <stdlib.h> 

int main()
{ 
int pangkat(int x, int y) 
{ 
 if(y==0){ 
  return 1;  
 } 
 else{ 
  return x*pangkat(x, y-1);   
 } 
} 
 int x, y; 
 printf("Masukkan angka yang akan dipangkatkan: "); 
 scanf("%d",&x); 
 printf("Masukkan angka pangkat: "); 
 scanf("%d",&y); 
 printf("Hasil angka %d pangkat %d adalah %d ",x,y, pangkat(x,y));
   return 0; 
}
