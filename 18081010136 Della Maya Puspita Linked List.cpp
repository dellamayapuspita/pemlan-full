#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//========================================================

struct node {
	 int data;
    struct node *next;
};
typedef struct node node;

node *createNode(void);
void tambahAwal(node **head);
void tambahData(node **head);
void tranverse(node *head);
void insertNode(node **head, node *pPre, node *pNew);
void deleteNode(node **head, node *pPre, node *pCur);
void hapusData(node **head);
void deleteList(node *head);
void hitungnode(node *head);

//========================================================

int main()
{
  node *head;
  char pilih;

  head = NULL;
  do{
    //untuk membersihkan tampilan
    //untuk windows
    system("cls");
    //untuk linux
     //system("clear");
   
     printf("\nMASUKKAN PILIHAN\n");
     printf("1. TAMBAH DATA DI AWAL\n");
     printf("2. TAMBAH DATA DI TENGAH\n");
     printf("3. HAPUS DATA\n");
     printf("4. CETAK ISI\n");
     printf("5. HITUNG NODE DATA DAN HITUNG SELURUH ISI DATA\n");
     printf("MASUKKAN PILIHAN(tekan q untuk keluar):	");
     fflush(stdin);
     scanf("%c", &pilih);
     if (pilih == '1')
     		tambahAwal(&head);
     else if (pilih == '2')
			tambahData(&head);
     else if (pilih == '3')
     		hapusData(&head);
     else if (pilih == '4'){
     		tranverse(head);
     		getch();
     	}
     else if (pilih == '5'){
     		hitungnode(head);
         getch();
     }
  } 
  while (pilih != 'q');
  deleteList(head);
}

//========================================================

node *createNode(void){
  node *ptr;

  ptr = (node *)malloc(sizeof(node));
  return(ptr);
}

//========================================================

void tambahAwal(node **head){
  int bil;
  node *pTemp;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  fflush(stdin);
  printf("MASUKKAN BILANGAN INTEGER: ");
  fflush(stdin);
  scanf("%d", &bil);
  pTemp = (node *)malloc(sizeof(node));

  if (pTemp != NULL){
  		pTemp->data = bil;
      pTemp->next = NULL;
      insertNode(head, NULL, pTemp);
  }
  else{
      printf("ALOKASI MEMORI GAGAL");
      getch();
  }
}

//========================================================

void tambahData(node **head){
  int pos, bil;
  node *pTemp, *pCur;

  //untuk membersihkan tampilan
  //untuk windows
  system("cls");
  //untuk linux
  //system("clear");
  
  tranverse(*head);
  printf("\nPOSISI PENYISIPAN SETELAH DATA BERNILAI: ");
  fflush(stdin);
  scanf("%d", &pos);
  printf("\nDATA YANG DISISIPKAN: ");
  fflush(stdin);
  scanf("%d", &bil);

  pCur = *head;
  while (pCur != NULL && pCur -> data != pos) {
    pCur = pCur -> next;
  }

  pTemp = (node *)malloc(sizeof(node));

  if (pCur == NULL){
     printf("\nNODE TIDAK DITEMUKAN");
     getch();
  }
  else if (pTemp == NULL){
     printf("\nALOKASI MEMORI GAGAL");
     getch();
  }
  else{
     pTemp->data = bil;
     pTemp->next = NULL;
     insertNode(head, pCur, pTemp);
  }
}

//========================================================

void tranverse(node *head){
   //traverse linked list
	node *pWalker;

    system("cls");
	pWalker = head;
	while (pWalker != NULL){
   	printf("%d->", pWalker -> data);
   	pWalker = pWalker -> next;
	}
   printf("NULL");
}

//========================================================

void insertNode(node **head, node *pPre, node *pNew){
    if (pPre == NULL){
       //menambahkan diawal atau pada empty list
	    pNew -> next = *head;
       *head = pNew;
    }
    else {
       //menambahkan node di tengah atau di akhir
       pNew -> next = pPre -> next;
       pPre -> next = pNew;
   }
}

//========================================================

void deleteNode(node **head, node *pPre, node *pCur)
{
	if (pPre == NULL)
	   *head = pCur -> next;
	else
       pPre -> next = pCur -> next;
	free(pCur);
}

//========================================================

void hapusData(node **head)
{
  int pos;
  node *pCur, *pPre;

  //clrscr();
  system("cls");
  tranverse(*head);
  printf("\nDATA YANG AKAN DIHAPUS: ");
  fflush(stdin);
  scanf("%d", &pos);

  pPre = NULL;
  pCur = *head;
  //cari target value sampai ditemukan atau sampai pada akhir list
  while (pCur != NULL && pCur -> data != pos) {
    pPre = pCur;
    pCur = pCur -> next;
  }

  if (pCur == NULL){
     printf("\nNODE TIDAK DITEMUKAN");
     getch();
  }
  else
     deleteNode(head, pPre, pCur);
}

//========================================================

void deleteList(node *head){
  node *pTemp;

  while(head != NULL){
     pTemp = head;
     head = head->next;
     free(pTemp);
  }
}

//========================================================

void hitungnode(node *head){
   
	node *pWalker;

    system("cls");
    int i=0;
    int hitung=0;
	pWalker = head;
	while (pWalker != NULL){
	hitung=hitung+pWalker -> data;
	i=i+1;
   	pWalker = pWalker -> next;
	}
   printf("\n jumlah node data  = %d",i);
   printf("\n jumlah seluruh isi data  = %d",hitung);
}