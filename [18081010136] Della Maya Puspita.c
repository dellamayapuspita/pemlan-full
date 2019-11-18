#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


	struct tgl_lahir {
		int tanggal;
		int bulan;
		int tahun;
	};
	struct alamat {
		char jalan[40];
		char kota[20];
		char provinsi[20];
	};
	struct rekening {
		char no_rek[12];
		int  saldo;
		char nama[20];
		char bank[10];
		struct tgl_lahir tgl_lahir;
		int umur;
		struct alamat alamat;
	};
	
int main(int argc, char *argv[]) {
	int index=0;
	int skrg=2019;
	int i=0;
	int j;
	int input;
	char convert[128];
	int loop=1;
	int inp_case;
	int total=0;
	int in_serbgn;
	char ch_serbgn[20];
	struct rekening rek[3];
	
	
	while(loop==1){
	
	printf("                                  DATA NASABAH                              \n");
	printf("                                 --------------                             \n");
	printf("|  1.  MEMASUKKAN DATA NASABAH                                             |\n");
	printf("|  2.  MENAMPILKAN SEMUA DATA NASABAH                                      |\n");
	printf("|  3.  MENAMPILKAN AKUMULASI SALDO TOTAL SEMUA NASABAH                     |\n");
	printf("|  4.  MENAMPILKAN DATA NASABAH BERDASARKAN NAMA                           |\n");
	printf("|  5.  MENAMPILKAN DATA NASABAH BERDASARKAN NOMER REKENING                 |\n");
	printf("|  6.  MENAMPILKAN DATA NASABAH BERDASARKAN UMUR                           |\n");
	printf("|  7.  MENAMPILKAN DATA NASABAH BERDASARKAN KOTA                           |\n");
	printf("|  8.  MENAMPILKAN DATA NASABAH BERDASARKAN PROVINSI                       |\n");
	printf("|  9.  KELUAR DARI MENU                                                    |\n");
	printf("|--------------------------------------------------------------------------|\n");
	printf("                                                                            \n");
	printf("Pilih angka pada menu: ");
	scanf("%d",&inp_case);
		
	system("cls");	
	switch(inp_case){
		case 1:
			{
				printf("Masukkan Nama Anda: ");
				scanf("%s",&rek[i].nama);
				system("cls");
				printf("Pilih Bank yang Anda inginkan");
				printf("\n1. BRI (Bank Rakyat Indonesia)");
				printf("\n2. BCA (Bank Central Asia)");
				printf("\n3. BNI (Bank Nasional Indonesia)");
				printf("\nMasukkan Bank yang Anda inginkan berdasarkan angka di atas: ");
				scanf("%d",&input);
				
				switch(input){
					case 1:
						strcpy(rek[i].bank,"BRI");
						strcpy(rek[i].no_rek,"001");
						system("cls");
						break;
					case 2:
						strcpy(rek[i].bank,"BCA");
						strcpy(rek[i].no_rek,"002");
						system("cls");
						break;
					case 3:
						strcpy(rek[i].bank,"BNI");
						strcpy(rek[i].no_rek,"003");
						system("cls");
						break;
					default:
						printf("Input salah!!!");
						system("cls");
						break;
				}
					printf("Masukkan tanggal lahir Anda \n");
					printf("Tanggal\t: ");
					scanf("%d",&rek[i].tgl_lahir.tanggal);	
					printf("Bulan\t: ");
					scanf("%d",&rek[i].tgl_lahir.bulan);
					printf("Tahun\t: ");
					scanf("%d",&rek[i].tgl_lahir.tahun);
					fflush(stdin);
					system("cls");
					
					rek[i].umur = skrg - rek[i].tgl_lahir.tahun;
					
						printf("Masukkan Alamat Rumah Anda\n");
						printf("Jalan\t\t: ");
						scanf("%[^\n]",&rek[i].alamat.jalan);	
						fflush(stdin);
						printf("Kota\t\t: ");
						scanf("%[^\n]",&rek[i].alamat.kota);
						fflush(stdin);
						printf("Provinsi\t: ");
						scanf("%[^\n]",&rek[i].alamat.provinsi);
						fflush(stdin);
						system("cls");
						
							strcat(rek[i].no_rek,itoa(rand()%512+128,convert,10));
							if(rek[i].tgl_lahir.tanggal<10){
							strcat(rek[i].no_rek,"0");
							}
							strcat(rek[i].no_rek,itoa(rek[i].tgl_lahir.tanggal,convert,10));	
							if(rek[i].tgl_lahir.bulan<10){
							strcat(rek[i].no_rek,"0");
							}
							strcat(rek[i].no_rek,itoa(rek[i].tgl_lahir.bulan,convert,10));
							if((rek[i].tgl_lahir.tahun%100)<10){
							strcat(rek[i].no_rek,"0");
							}
							strcat(rek[i].no_rek,itoa((rek[i].tgl_lahir.tahun)%10,convert,10));
							printf("Nomer Rekening Anda\t: %s\n",rek[i].no_rek);
							printf("Saldo awal untuk Nasabah baru adalah Rp 200.000,00");
							fflush(stdin);
				
				i++;
			}
			break;
		case 2:
		{
			printf("Data semua Nasabah yang terdaftar\n");
			for(j=0;j<i;j++){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].no_rek);
				printf("Umur		: %d\n",rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n",rek[j].tgl_lahir.tanggal,rek[j].tgl_lahir.bulan,rek[j].tgl_lahir.tahun);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}	
		}
			break;
			
		case 3:	
		{
			for(j=0;j<i;j++){
				total = 200000 + 200000;
			}
			printf("Total Saldo 	: %d",total);
		}
		
			break;
			
		case 4:			
		{
			printf("Masukkan Nama yang ingin dicari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].nama,ch_serbgn)==0){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].no_rek);
				printf("Umur		: %d\n",rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n",rek[j].tgl_lahir.tanggal,rek[j].tgl_lahir.bulan,rek[j].tgl_lahir.tahun);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}
			break;
		
		case 5:
		{
			printf("Masukkan Nomer Rekening yang ingin dicari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].no_rek,ch_serbgn)==0){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].no_rek);
				printf("Umur		: %d\n",rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n",rek[j].tgl_lahir.tanggal,rek[j].tgl_lahir.bulan,rek[j].tgl_lahir.tahun);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}	
			break;	
		
		case 6:		
		{
			printf("Masukkan range umur: ");
			scanf("%d",&in_serbgn);
			for(j=0;j<i;j++){
				if(rek[j].umur<in_serbgn){
					printf("Nama %s umur kurang dari %d\n",rek[j].nama,in_serbgn);
				}else {
					printf("Nama %s umur lebih dari %d\n",rek[j].nama,in_serbgn);
				}
				}	
		}
			break;
		case 7:		
		{
			printf("Masukkan kota yang ingin anda cari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].alamat.kota,ch_serbgn)==0){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].no_rek);
				printf("Umur		: %d\n",rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n",rek[j].tgl_lahir.tanggal,rek[j].tgl_lahir.bulan,rek[j].tgl_lahir.tahun);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}
			break;
		case 8:
		{
			printf("Masukkan kota yang ingin anda cari: ");
			scanf("%s",&ch_serbgn);
			fflush(stdin);
			for(j=0;j<i;j++){
				if(strcmp(rek[j].alamat.provinsi,ch_serbgn)==0){
				printf("Nama		: %s\n",rek[j].nama);
				printf("Nama Bank	: %s\n",rek[j].bank);
				printf("No Rek		: %s\n",rek[j].no_rek);
				printf("Umur		: %d\n",rek[j].umur);
				printf("Tgl Lahir	: %d-%d-%d\n",rek[j].tgl_lahir.tanggal,rek[j].tgl_lahir.bulan,rek[j].tgl_lahir.tahun);
				printf("Alamat		: Jl.%s, Kota %s, Provinsi %s\n",rek[j].alamat.jalan,rek[j].alamat.kota,rek[j].alamat.provinsi);
				printf("Saldo 		: 200000\n");
				printf("\n\n");
				}
				}
		}
			break;
		case 9:
			exit(0);
			break;
			
		default:
			printf("Input Anda salah");
			break;
		}	
		
		printf("\nKembali ke Menu Utama? (1. Ya/2. Tidak) ");
		scanf("%d",&loop);

		system("cls");
	}
		
	

	return 0;
}
