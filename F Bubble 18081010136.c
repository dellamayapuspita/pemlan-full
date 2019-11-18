#include <stdio.h>              


int main()                        
{
	int a[100],d,m,p;
	printf("Banyaknya data: ");
        scanf("%d",&d);
        printf("Angka yang diinputkan: ");
        
      for(m=0;m<d;m++)
    {
        scanf("%d",&a[m]);
    }
	for ( m = 0; m < d; m++)                     
	{
		for ( p = 0; p < d; p++)             
		{
			if (a[p] > a[m])                
			{
				int tmp = a[m];         
				a[m] = a[p];            
				a[p] = tmp;             
			}  
		}
	}
	printf("\n\nUrutan dari terkecil : ");                     
	for (m = 0; m < d; m++)                     
	{
		printf(" %d ", a[m]);
	}
	for ( m = 0; m < d; m++)                     
	{
		for ( p = 0; p < d; p++)             
		{
			if (a[p] < a[m])                
			{
				int tmp = a[m];         
				a[m] = a[p];            
				a[p] = tmp;             
			}
		}
	}
	printf("\n\nUrutan dari terbesar : ");                    
	for ( m = 0; m < d; m++)                     
	{
		printf(" %d ", a[m]);                   
	}

	return 0;                                       
}
