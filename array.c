#include <stdio.h>
#include <conio.h>

int main()
{
	int h, pilih, cari;
	while (pilih != 1 || pilih != 2 || pilih != 3)
	{
		int npm[5] = {136,137,138,139,140};
		float ipk[5] = {3.0,2.9,3.6,3.7,4.0};
	
		printf("Pilih dengan angka\n");
		printf("1 Tampilkan data(a-z) \n2 Tampilkan data(z-a) \n3 Cari data\n");
		printf("Masukkan pilihan: \n");
		scanf("%d", &pilih);
		if(pilih == 1)
		{
			printf("Data Mahasiswa: \n");
			for(h=0; h<5; h++)
			{
				printf("npm : %d\n", npm[h]);
				printf("ipk : %f\n", ipk[h]);
			}
			
		} 
		else if (pilih == 2)
		{
			printf("Data Mahasiswa: \n");
			for(h=4; h>=0; h--)
			{
				printf("npm : %d\n", npm[h]);
				printf("ipk : %f\n", ipk[h]);	
		}	
		
		}
		else if (pilih == 3)
		{
			printf("Masukkan npm: \n");
			scanf("%d", &cari);
			for(h=0; h<5; h++)
			{
				if(npm[h] != cari)
				{
					printf("npm : %d\n", npm[h]);
					printf("ipk : %f\n", ipk[h]);
					break;
				}
			}			
		}
		else
		{
			printf("Inputan Salah");
	}
	}
	return 0;
}
