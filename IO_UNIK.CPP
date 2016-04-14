	#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream.h>
#include <fstream.h>

int main()
{
   char c[8];int d;
   char x[20]="00,01,dan 81";
   char y[50]="0000, 0001, 2025, 3025, dan 9801";
   char x6[50]="000000, 000001, 088209, 494209, dan 998001";
   char x8[100]="00000000, 00000001, 04941729, 07441984, 24502500, 25502500, 52881984, 60481729, dan 99980001";
   char xa[150]="0000000000, 0000000001, 0023804641, 0300814336, 0493817284, 6049417284, 6832014336, 9048004641, dan 9999800001";
   char xb[500]="000000000000, 000000000001, 000028005264, 001518037444, 020408122449, 021948126201, 033058148761, 035010152100, 043470165025, 101558217124, 108878221089, 123448227904, 127194229449, 152344237969, 213018248521, 217930248900, 249500250000, 250500250000, 284270248900, 289940248521, 371718237969, 413908229449, 420744227904, 448944221089, 464194217124, 626480165025, 660790152100, 669420148761, 725650126201, 734694122449, 923594037444, 989444005264, dan 999998000001";
   FILE *fptr;
   fptr=fopen("io_unik.log","w");
      if(fptr==NULL){
      printf("Error!");
      exit(1);    }
      else {
	printf("Masukkan bilangan genap\n");
	printf("output bilangan unik berada didirectory yang sama:\n");
	scanf("%d",&d);
	fprintf(fptr,"input\n");
	fprintf(fptr,"/***************************Start********************/");
if ( d != NULL) {
	fprintf(fptr,"\n%d digit\n", d);
	fprintf(fptr,"/****************************End*********************/\n");
 if ( d%2 == 0 && d != 0 )
	{
	if (d==2) { printf("dua digit\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\n%s", x);
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}
	else if (d==4){ printf("empat digit\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\n%s", y);
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}
	else if (d==6){ printf("enam digit\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\n%s", x6);
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}
	else if (d==8){ printf("delapan digit\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\n%s", x8);
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}
	else if (d==10){ printf("sepuluh digit\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\n%s", xa);
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}
	else if (d==12){ printf("dua belas digit\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\n%s", xb);
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}
	}
else {
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\ninput yang anda masukkan ganjil, salah");
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);
		}	}
else if (d == 0){
		fprintf(fptr,"\n%s digit\n", d);
		fprintf(fptr,"/****************************End*********************/\n");
		fclose(fptr);
		FILE *f1tr;
		f1tr = fopen("io_unik.log","a");
		fprintf(f1tr,"\n\n\n output\n");
		fprintf(f1tr,"/***************************Start********************/");
		fprintf(f1tr, "\nsalah, input yang anda masukkan NOL atau bukan angka");
		fprintf(f1tr,"\n/****************************End*********************/");
		fclose(f1tr);

}
		}
 printf("\nFile Output sudah tercetak dalam file io_unik.log \n");
 fptr = NULL;

}

