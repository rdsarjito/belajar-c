#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void clrscr()
{
system("cls||clear");
}


main()
{
 int matika,tanya;
 float A,B,luas;


 
 do{ 
 clrscr();

 printf("===========================================================================\n");
 printf("1 Luas Persegi Panjang\n");
 printf("2 Luas Segitiga\n");
 printf("3 Luas Lingkaran\n");
 printf("4 Luas Trapesium\n");
 printf("5 Selesai\n");
 printf("===========================================================================\n");
 scanf("%d",&matika);
 
 if(matika==1)
	{  
	


		printf("Luas Persegi Panjang\n");
		printf("Menghitung Luas Persegi Panjang\n");
		printf("\nPanjang = ");
		scanf("%f",&A);
		printf("\nLebar   = ");
		scanf("%f",&B);
		luas=A*B;
		printf("luas = %g\n\n",luas);
		printf("Apakah ingin menghitung lagi?\n");
		printf("1 Hitung lagi\n");
 		printf("2 Selesai\n");
		
		scanf("%d",&tanya);
		if(tanya==2)
		{
			printf("\nSelesai");
			break;
		}

  
 }


 if(matika==2)
	{  

	

		printf("Luas Segitiga\n");
		printf("Menghitung Luas Segitiga\n");
		printf("\n Alas = ");
		scanf("%f",&A);
		printf("\n Tinggi   = ");
		scanf("%f",&B);
		luas=A*B/2;
		printf("luas = %g\n\n",luas);	
		printf("Apakah ingin menghitung lagi?\n");
		printf("1 Hitung lagi\n");
 		printf("2 Selesai\n");
		
		scanf("%d",&tanya);
		if(tanya==2)
		{
			printf("\nSelesai");
			break;
			}
			
	}
  
 
 

}while(matika < 5); 

printf("\nProses telah diakhiri..\nTekan Sembarang tombol\n");
getch();
}





