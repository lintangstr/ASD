#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#define PI 3.14
#define MAX 255

int next;

void menuporolan(void);

void trigonometryMenu(void);

void circumferenceMenu(void);

void areaFlatShapeMenu(void);

void volumeMenu(void);

void menukelilingbangundtr(void);

int main();


void xy(int X, int y)
{
    COORD coord;
    coord.X = X;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void penjumlahan(){
    int a, b, hasil;
        ngulang:
        printf("\n1. Penjumlahan :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%d", &a);
        printf("Inputkan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a + b;
        printf("Hasil:\t\t\t   %d\n", hasil);

         printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuporolan();
                }
}
void pengurangan(){
    int a,b,hasil;
        ngulang:
        printf("\n1. Pengurangan :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%d", &a);
        printf("Inputkan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a - b;
        printf("Hasil:\t\t\t   %d\n", hasil);

         printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuporolan();
                }
}
void perkalian(){
        int a,b,hasil;
        ngulang:
        printf("\n1. Perkalian :\n");
        printf("Inputksn bilangan pertama : ");
        scanf("%d", &a);
        printf("Inputkan bilangan kedua   : ");
        scanf("%d", &b);
        hasil = a * b;
        printf("Hasil:\t\t\t   %d\n", hasil);

         printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuporolan();
                }
}
void pembagian(){
        float c,d,hasilbagi;
        ngulang:
        printf("\n1. Pembagian :\n");
        printf("Inputkan bilangan pertama : ");
        scanf("%f", &c);
        printf("Inputkan bilangan kedua   : ");
        scanf("%f", &d);
        hasilbagi = c / d;
        printf("Hasil:\t\t\t   %.2f\n", hasilbagi);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuporolan();
                }
}
void Sinus(){
   double inputan, result;
    ngulang:
    printf("Inputkan derajat sinus : ");
    scanf("%lf", &inputan);
   // Converting to radian
   inputan = (inputan * PI) / 180;
   result = sin(inputan);

   printf("Hasil sinus adalah = %.2lf\n", result);

                printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menusincostan();
                }
}
void cosinus(){
   double arg, result;
    ngulang:
    printf("Mengulang derajat cosinus : ");
    scanf("%lf", &arg);
   // Converting to radian
   arg = (arg * PI) / 180;
   result = cos(arg);

   printf("Hasil cosinus adalah = %.2lf\n", result);

                printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menusincostan();
                }
}
void Tangen(){
    double arg, result;
    ngulang:
    printf("Inputkan derajat sinus : ");
    scanf("%lf", &arg);
   // Converting to radian
   arg = (arg * PI) / 180;
   result = tan(arg);

   printf("Hasil sinus adalah = %.2lf\n", result);
                printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menusincostan();
                }
}

void kel_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Keliling Persegi :\n");
        printf("Inputkan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Inputkan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil = 2*(a+b);
        printf("Keliling Persegi Adalah = %.2f\n", hasil);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menukeliling();
                }
}
void kel_Trapesium(){
    float a,b,c,hasil,tinggi=0.5,tampung;
        ngulang:
        printf("\n1. Keliling Trapesium :\n");
        printf("Inputkan Sisi Atas Trapesium Sama Kaki     : ");
        scanf("%f", &a);
        printf("Inputkan Sisi Bawah Trapesium Sama Kaki    : ");
        scanf("%f", &b);
        printf("Inputkan Sisi Miring Trapesium Sama Kaki   : ");
        scanf("%f", &c);
        hasil=tinggi*(a+b);
        tampung=hasil;
        //tinggi=1/2*(a+b);
        //printf("\n%.2f", tinggi);
        printf("Keliling Trapesium Sama Kaki adalah = %.2f\n", tampung+a+b+c);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menukeliling();
                }
}
void kel_LayangLayang(){
    float a,b,hasil;
        ngulang:
        printf("\n1. Keliling Layang-Layang :\n");
        printf("Inputkan Panjang Sisi Atas      : ");
        scanf("%f", &a);
        printf("Inputkan Panjang Sisi Bawah     : ");
        scanf("%f", &b);
        hasil =2*(a+b);
        printf("Keliling Layang-Layang adalah = %.2f\n", hasil);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menukeliling();
                }
}
void kel_Lingkaran(){
    float c,d,tampung1,tampung2;
    float phi =3.14;
        ngulang:
        printf("\n1. Lingkaran :\n");
        printf("Inputkan Panjang Diameter    : ");
        scanf("%f", &c);
        printf("Inputkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1=phi*c;
        tampung2=2*(phi*d);
        printf("Keliling Lingkaran berdasar Diameter    = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari   = %.2f\n", tampung2);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menukeliling();
                }
}
void Luas_Persegi(){
    float a, b, hasil;
        ngulang:
        printf("\n1. Luas :\n");
        printf("Inputkan Panjang Persegi : ");
        scanf("%f", &a);
        printf("Inputkan Lebar Persegi   : ");
        scanf("%f", &b);
        hasil =a*b;
        printf("Luas Persegi Adalah = %.2f\n", hasil);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuluasbangundtr();
                }
}
void Luas_Trapesium(){
    float a,b,c,hasil,tinggi=0.5,tampung;
        ngulang:
        printf("\n1. Luas Trapesium :\n");
        printf("Inputkan Sisi Atas Trapesium Sama Kaki      : ");
        scanf("%f", &a);
        printf("Inputkan Sisi Bawah Trapesium Sama Kaki     : ");
        scanf("%f", &b);
        printf("Inputkan Sisi Miring Trapesium Sama Kaki    : ");
        scanf("%f", &c);
        hasil=tinggi*(a+b);
        tampung=hasil;
        printf("Luas Trapesium Sama Kaki adalah = %.2f\n", 0.5*(a+b)*tampung);

        printf("Mengualang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuluasbangundtr();
                }
}
void Luas_LayangLayang(){
    float a,b,hasil;
        ngulang:
        printf("\n1. Luas Layang-Layang :\n");
        printf("Inputkan Panjang Sisi Atas      : ");
        scanf("%f", &a);
        printf("Inputkan Panjang Sisi Bawah     : ");
        scanf("%f", &b);
        hasil =0.5*(a*b);
        printf("Luas Layang-Layang adalah = %.2f\n", hasil);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuluasbangundtr();
                }
}
void Luas_Lingkaran(){
    float c,d,tampung1,tampung2;
    float phi=3.14;
        ngulang:
        printf("\n1. Luas Lingkaran :\n");
        printf("Inputkan Panjang Diameter    : ");
        scanf("%f", &c);
        printf("Inputkan Panjang Jari-jari   : ");
        scanf("%f", &d);
        tampung1=0.25*phi*(c*c);
        tampung2=phi*(d*d);
        printf("Keliling Lingkaran berdasar Diameter    = %.2f\n", tampung1);
        printf("Keliling Lingkaran berdasar Jari-Jari   = %.2f\n", tampung2);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuluasbangundtr();
                }
}
void Volum_Kubus(){
    float a;
        ngulang:
        printf("\n1. Volume Kubus :\n");
        printf("Inputkan Panjang Sisi Kubus : ");
        scanf("%f", &a);
        printf("Volume Kubus adalah = %.2f\n", a*a*a);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuvolum();
                }
}
void Volum_Prisma(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,tampung,phi=3.14;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Inputkan Sisi Persegi        : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Inputkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Inputkan Tinggi Segitiga     : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Inputkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Inputkan Diameter Lingkaran  :");
        scanf("%f", &e);
        printf("Inputkan Tinggi Prisma       :");
        scanf("%f", &f);
        printf("Volume Prisma Persegi adalah                = %.2f\n", a*a*a);
        printf("Volume Prisma Segitiga adalah               = %.2f\n", ((b*c)/2)*f);
        printf("Volume Silinder berdasar Jari-Jari adalah   = %.2f\n", phi*(d*d*f));
        printf("Volume Silinder berdasar Diameter adalah    = %.2f\n", 0.25*phi*(e*e)*f);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuvolum();
                }
}
void Volum_Limas(){
    float a,b,c,d,e,f,hasil,tinggi=0.5,tampung,phi=3.14,luas_alas,rdiameter;
        ngulang:
        printf("\n1. Volum Prisma :\n");
        printf("Inputkan Sisi Persegi        : ");
        scanf("%f", &a);
        //kelompok segitiga
        printf("Inputkan Lebar Alas Segitiga : ");
        scanf("%f", &b);
        printf("Inputkan Tinggi Segitiga     : ");
        scanf("%f", &c);
        //kelompok lingkaran
        printf("Inputkan Jari-Jari Lingkaran :");
        scanf("%f", &d);
        printf("Inputkan Diameter Lingkaran  :");
        scanf("%f", &e);
        printf("Inputkan Tinggi Limas        :");
        scanf("%f", &f);
        luas_alas=0.5*b*f;
        rdiameter=e/2;
        printf("Volume Limas Persegi adalah                     = %.2f\n", 0.33*a*a*f);
        printf("Volume Limas Segitiga adalah                    = %.2f\n", 0.33*luas_alas*f);
        printf("Volume Limas Silinder berdasar Jari-Jari adalah = %.2f\n", phi*d*d*f);
        printf("Volume Limas Silinder berdasar Diameter adalah  = %.2f\n", phi*rdiameter*rdiameter*f);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuvolum();
                }
}
void Volum_Lingkaran(){
    float c,d,rdiameter,tampung2;
    float phi=3.14;
        ngulang:
        printf("\n1. Volume Bola :\n");
        printf("Inputkan Jari-Jari Lingkaran : ");
        scanf("%f", &c);
        printf("Inputkan Diameter Lingkaran  : ");
        scanf("%f", &d);
        rdiameter=d/2;
        printf("Keliling Lingkaran berdasar Jari-Jari   = %.2f\n", 1.33*phi*c*c*c);
        printf("Keliling Lingkaran berdasar Diameter    = %.2f\n", 1.33*phi*rdiameter*rdiameter*rdiameter);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                 menuvolum();
                }

}
void akar(){
    float inputan;
    double tampung;
        ngulang:
        printf ("Masukkan bilangan yang akan diakar : ");
        scanf (" %f", &inputan);
        // sqrt(squareroot
        tampung = sqrt(inputan);
        printf (" \nHasil akar dari %.2f adalah %.2f\n", inputan, tampung);

        printf("Mengulang? (y/t): ");
                getchar();
                next = getchar();
                if (next == 'y'|| next == 'Y'){
                    system("cls");
                }
                else if(next =='t'|| next=='T'){
                    system("cls");
                main();
                }



}
void menuporolan(){
                //Menu penjumlahan

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        xy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   X !!             Kalkulator          !! X\n   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   X                                       X\n");
        printf("   X         1. Perkalian                  X\n");
        printf("   X         2. Pembagian                  X\n");
        printf("   X         3. Penjumlahan                X\n");
        printf("   X         4. Pengurangan                X\n");
        printf("   X         5. Kembali ke Menu utama      X\n");
        printf("   X                                       X\n   ");
        for(int a=0;a<41;a++){printf("=");}
        xy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                perkalian();
                break;
            case 2 :
                pembagian();
                break;
            case 3 :
                penjumlahan();
                break;
            case 4 :
                pengurangan();
                break;
            case 5 :
                system("cls");
                main();


        }
}

void menusincostan(){

        //Menu SinCostan

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        xy(0,2);
        printf("   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   X !!            Sincostan            !! X\n   ");
        for(int a=0;a<41;a++){printf("=");}
        printf("\n   X                                       X\n");
        printf("   X         1. Sinus                      X\n");
        printf("   X         2. Cosinus                    X\n");
        printf("   X         3. Tangen                     X\n");
        printf("   X         4. Kembali ke Menu utama      X\n");
        printf("   X                                       X\n   ");
        for(int a=0;a<41;a++){printf("=");}
        xy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                Sinus();
                break;
            case 2:
                cosinus();
                break;
            case 3:
                Tangen();
                break;
            case 4:
                system("cls");
                main();


        }

}

void menukeliling(){


        //Menu Keliling Luas Volume

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==5){
            y--;
            continue;
        }
        xy(0,2);
        printf("   ");
        for(int a=0;a<55;a++){printf("=");}
        printf("\n   X !!            Menghitung Keliling Luas Volume    !! X\n   ");
        for(int a=0;a<55;a++){printf("=");}
        printf("\n   X                                                    X\n");
        printf("   X             1. Keliling Bangun Datar               X\n");
        printf("   X             2. Luas Bangun Datar                   X\n");
        printf("   X             3. Volume Bangun Ruang                 X\n");
        printf("   X             4. Kembali ke Menu utama               X\n");
        printf("   X                                                    X\n");
        for(int a=0;a<55;a++){printf("=");}
        xy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
            case 1:
                menukelilingbangundtr();
                break;
            case 2:
                menuluasbangundtr();
                break;
            case 3:
                menuvolum();
                break;
            case 4:
                system("cls");
                main();


        }
}

void menukelilingbangundtr(){

    //Menu Keliling Bangun Datar

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        xy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   X !!            Keliling Bangun Datar         !! X\n   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   X                                                X\n");
        printf("   X         1. Keliling Persegi                    X\n");
        printf("   X         2. Keliling Trapesium                  X\n");
        printf("   X         3. Keliling Layang-Layang              X\n");
        printf("   X         4. Keliling Lingkaran                  X\n");
        printf("   X         5. Kembali ke Menu Sebelumnya          X\n");
        printf("   X                                                X\n   ");
        for(int a=0;a<50;a++){printf("=");}
        xy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    kel_Persegi();
                break;
             case 2 :
                    kel_Trapesium();
                break;
             case 3 :
                    kel_LayangLayang();
                break;
             case 4 :
                    kel_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }
}

void menuluasbangundtr(){

    //Menu Luas Bangun Datar

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        xy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   X !!             Luas Bangun Datar            !! X\n   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   X                                                X\n");
        printf("   X         1. Luas Persegi                        X\n");
        printf("   X         2. Luas Trapesium                      X\n");
        printf("   X         3. Luas Layang-Layang                  X\n");
        printf("   X         4. Luas Lingkaran                      X\n");
        printf("   X         5. Kembali ke Menu Sebelumnya          X\n");
        printf("   X                                                X\n   ");
        for(int a=0;a<50;a++){printf("=");}
        xy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Luas_Persegi();
                break;
             case 2 :
                    Luas_Trapesium();
                break;
             case 3 :
                    Luas_LayangLayang();
                break;
             case 4 :
                    Luas_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menuvolum(){

    //Menu Volum Bangun Ruang

        int input,inMenu,y=1;
        int up=24,down=25;
        int menuplus;
        char pil;

            system("mode con: cols=120 lines=30");
            system("color F4");
            system("cls");
        do{
        if(y==0){
         y++;
         continue;
        }
        if(y==6){
            y--;
            continue;
        }
        xy(0,2);
        printf("   ");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   X !!             Volume Bangun Ruang            !! X\n");
        for(int a=0;a<50;a++){printf("=");}
        printf("\n   X                                                X\n");
        printf("   X         1. Volume Kubus                        X\n");
        printf("   X         2. Volume Prisma                       X\n");
        printf("   X         3. Volume Limas                        X\n");
        printf("   X         4. Volume Bola                         X\n");
        printf("   X         5. Kembali ke Menu Sebelumnya          X\n");
        printf("   X                                                X\n");
        for(int a=0;a<50;a++){printf("=");}
        xy(8,5+y);printf("=>"); //printf("masuk poro");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
            }
        }while((int)pil!=13);
        inMenu=y;
        system("cls");
        switch (inMenu){
             case 1:
                    Volum_Kubus();
                break;
             case 2 :
                    Volum_Prisma();
                break;
             case 3 :
                    Volum_Limas();
                break;
             case 4 :
                    Volum_Lingkaran();
                break;
             case 5 :
                system("cls");
                menukeliling();


        }

}

void menu_utama(){
    int input,inMenu,y=1;
    int up=24,down=25;
    int menuplus;
    char pil;

    system("mode con: cols=120 lines=30");
    system("color F4");
    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==6){
            y--;
            continue;
        }
    xy(0,2);
    printf("   ");
    for(int a=0;a<41;a++){printf("=");}
    printf("\n   X !!           Kalkulator            !! X\n   ");
    for(int a=0;a<41;a++){printf("=");}
    printf("\n   X                                       X\n");
    printf("   X         1. Matematika Dasar           X\n");
    printf("   X         2. SinCosTan                  X\n");
    printf("   X         3. Hitung Keliling dan Luas   X\n");
    printf("   X         4. Hitung Akar Kuadrat        X\n");
    printf("   X         5. Exit                       X\n");
    printf("   X                                       X\n   ");
    for(int a=0;a<41;a++){printf("=");}
    xy(8,5+y);printf("=>");
            pil=getch();
            switch(pil){
            case 72:
                y--;
                break;
            case 80:
                y++;
                break;
            default:
                break;
    }
    }while((int)pil!=13);
    inMenu=y;
    system("cls");

    switch (inMenu){
    case 1:{
            menuporolan();
        break;
    }
    case 2:{
            menusincostan();
        break;
    }
    case 3:{
            menukeliling();
        break;
    }
    case 4:{
            akar();
        break;
     }
    default : printf("\t\t\t\t\t\t=================\n");
              printf("\t\t\t\t\t\t=  TERIMAKASIH  =\n");
              printf("\t\t\t\t\t\t=================\n");exit(0);
    }
}

main(){
    char username[MAX], password [MAX];
    user:
        system("cls");
    printf("Masukkan Username : ");
    scanf(" %[^\n]s", &username);
    printf("Masukkan Password : ");
    scanf(" %[^\n]s", &password);
    if(strcmp(username,"lintang")==0 && strcmp(password,"affaiyah")==0){
        printf("Selamat anda berhasil Login\n");
        system("pause");
        menu_utama();
    }
    else {
        printf("maaf username dan password anda salah\n");
        system("pause");
        goto user;
        }
}

