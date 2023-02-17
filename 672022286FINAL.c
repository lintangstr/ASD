#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i, j, keep, input, angka, isi,batas,bil,temp,temp2,midkir,midkan,seg1,seg2,seg3,seg4,spas1,spas2;

            system("cls");
    puts("===============");
    puts("TUGAS QUIZ ASD");
    puts("===============");
    puts("==>1. Level 1");
    puts("   2. Level 2");
    puts("   3. Level 3");
    puts("   4. Exit");
    puts("===============");
    printf("pilih menu : ");
    scanf("%d", &input);

    switch(input){
    case 1:
        system("cls");
    printf("Masukkan jumlah : ");
    scanf("%d", & angka);

    for(i=0; i<=angka; i++){
        keep=i;
    for(j=0; j<=i; j++){
       printf("%d", keep);
       keep++;


    }

    printf("\n");

    }
    break;

    case 2:
        system("cls");
        printf  ("Level 2");
       int masukan;
       printf("Masukkan jumlah : ");
       scanf("%d", &masukan);
       for(int i=1; i<=masukan; i++){
       for(int j=1; j<=i; j++){
            printf ("%d", i*j);
       }
       printf("\n");
       }
       break ;

	case 3:
	    system("cls");
	    printf  ("Level 3");
	printf("Masukan jumlah : ");
	scanf("%d",&bil);
	isi=bil-1;
	temp=isi;
	temp2=isi;
	for (batas=1;batas<=isi;batas++){
	//SEGITIGA KIRI ATAS/
	for (spas1=isi;spas1>=batas;spas1--)
	printf("%s"," ");
	for (seg1=1;seg1<=batas;seg1++)
	printf("%d",seg1);
	//SEGITIGA KANAN ATAS/
	for (seg2=batas-1;seg2>=1;seg2--)
	printf("%d",seg2);
	printf("\n");
	}
	//TENGAH/
	for(midkir=1;midkir<=bil;midkir++)
	printf("%d",midkir);
	for(midkan=bil-1;midkan>=1;midkan--)
	printf("%d",midkan);
	printf("\n");

	for (batas=1;batas<=isi;batas++){
	//SEGITIGA KIRI BAWAH/
	for (spas2=1;spas2<=batas;spas2++)
	printf("%s"," ");
	for (seg3=1;seg3<=temp;seg3++)
	printf("%d",seg3);temp=temp-1;
	//SEGITIGA KANAN BAWAH/
	for (seg4=temp2-1;seg4>=1;seg4--)
	printf("%d",seg4);temp2=temp2-1;
	printf("\n");
	}


    break ;





	case 4: printf  ("TERIMA KASIH"); 	break;
    default : printf("MENU TIDAK ADA");
}

return 0;
}


