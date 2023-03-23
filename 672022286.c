#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#define MAX 5

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

struct Antrian{
        int head;
        int tail;
        int data[MAX];
    }antrian;

int isEmptyQueue() {
    return (antrian.tail == -1) ? 1 : 0;
}

int isFullQueue() {
    return (antrian.tail == MAX - 1) ? 1 : 0;
}

void initializeQueue() {
    antrian.head = antrian.tail = -1;
}

void enqueue(int data) {
    if (isEmptyQueue()) {
        antrian.head = antrian.tail = 0;
        antrian.data[antrian.tail] = data;
        printf("Data %d berhasil diinput!\n", antrian.data[antrian.tail]);
    } else if (!isFullQueue()) {
        antrian.tail++;
        antrian.data[antrian.tail] = data;
        printf("Data %d berhasil diinput!\n", antrian.data[antrian.tail]);
    } else {
        printf("Antrean sudah penuh!\n");
    }
}

int dequeue() {
    if (isEmptyQueue()) {
        printf("Data masih kosong!\n");
    } else {
        int e = antrian.data[antrian.head];
        printf("Data %d telah dikeluarkan dari antrean\n", e);
        for (int i = antrian.head; i <= antrian.tail - 1; i++) {
            antrian.data[i] = antrian.data[i + 1];
        }
        antrian.tail--;
        if (antrian.tail == -1) {
            antrian.head = -1;
        }
        return e;
    }
}

void clearQueue() {
    initializeQueue();
    printf("Antrean telah direset!\n");
}

void printQueue() {
    if (isEmptyQueue()) {
        printf("Antrean masih kosong!\n");
    } else {
        for (int i = antrian.head; i <= antrian.tail; i++) {
            printf("%d ", antrian.data[i]);
        }
        printf("\n");
    }
}

void queueMenu() {
    int dt;
    initializeQueue();
    int choice;
    do {
        printf("1. Tambah data\n");
        printf("2. Keluarkan data\n");
        printf("3. Lihat antrean\n");
        printf("4. Reset antrean\n");
        printf("5. Kembali ke menu utama\n");
        printf("Masukkan pilihan:");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                system("cls");
                if (isFullQueue() != 1) {
                    printf("Masukkan data:");
                    scanf("%d", &dt);
                    enqueue(dt);
                } else {
                    printf("Antrean sudah penuh!\n");
                }
                break;
            case 2:
                system("cls");
                dequeue();
                break;
            case 3:
                system("cls");
                printQueue();
                break;
            case 4:
                system("cls");
                clearQueue();
                break;
            case 5:
                system("cls");
                    main();
                    break;
                default:
                    printf("tidak ada dalam pilihan\n");
                    system("cls");
                    break;
                }

        }while(choice>0 && choice <6);
        //return 0;

    }
struct Tumpukan{
            char data[5][50];
            int top; //untuk menentukan data paling atas

        }tumpuk;
        //buat fungsi apakah tumpukan masih kosong
        int kosong()
        {
            if(tumpuk.top == -1)
            {
                return 1;
            }else{
                return 0;
            }
        }

        //buat fungsi apakah tumpukan sudah penuh
        //buat fungsi apakah tumpukan sudah penuh
        int Penuh()
        {
            if(tumpuk.top == MAX-1)
            {
                return 1;
            }
            else{
                return 0;
            }
        }

        void initiate()
        {
            //decalare bahwa tumpukan masih kosong
            tumpuk.top = -1;
        }

        void push()
        {
            char temp[30];
            if(Penuh() != 1)
            {
                tumpuk.top++;
                printf("Masukkan data:");
                scanf("%s",&temp);
                strcpy(tumpuk.data[tumpuk.top],temp);
                printf("Data %s berhasil di input\n",tumpuk.data[tumpuk.top]);
            }else{
                printf("Data sudah penuh");
            }
        }

        void pop()
        {
            if(kosong() != 1)
            {
                printf("Data %s telah dibuang\n",tumpuk.data[tumpuk.top]);
                tumpuk.top--;

            }else{
                printf("Data masih kosong\n");
            }
        }

        void printData()
        {
            if(kosong() !=1)
            {
                for(int i=tumpuk.top;i>=0;i--)
                {
                    printf("%s\n",tumpuk.data[i]);
                }
            }else{
                printf("Data masih kosong\n");
            }
        }
        void stack()
        {
        initiate();
        int choice;
        do{
            printf("1.Push Stack\n");
            printf("2.Pop Stack\n");
            printf("3.Print Stack\n");
            printf("4.Clear Stack\n");
            printf("5.Return Main Menu\n");
            printf("Input pilihan:");
            scanf("%d",&choice);
                switch(choice)
                {
                case 1:
                    system("cls");
                    push();
                    break;
                case 2:
                    system("cls");
                    pop();
                    break;
                case 3:
                    system("cls");
                    printData();
                    break;
                case 4:
                    system("cls");
                    if(kosong())
                    {
                        printf("Data masih kosong!,tidak bisa reset\n");
                    }
                    else{
                          initiate();
                    printf("Data telah di reset!\n");
                    }

                    break;
                case 5:
                    system("cls");
                    main();
                default:
                    printf("tidak ada dalam pilihan\n");
                    break;
                }

        }while(choice >0 && choice < 6);
//return 0;
    }

void main()
{
    int input,inMenu,y=1;
    int up=24,down=25;
    int menutambah;
    char pil;

    system("mode con: cols=120 lines=30");
    system("color F8");
    system("cls");
    do{
    if(y==0){
         y++;
         continue;
    }
        if(y==4){
            y--;
            continue;
        }
    gotoxy(0,2);
    printf("   ");
    for(int a=0;a<41;a++){printf("+");}
    printf("\n   | >>    Tugas Quiz Stack and Queue   << |\n   ");
    for(int a=0;a<41;a++){printf("+");}
    printf("\n   |                                       |\n");
    printf("   |           1. Stack String             |\n");
    printf("   |           2. Queue Integer            |\n");
    printf("   |           3. Exit Program             |\n");
    printf("   |                                       |\n   ");
    for(int a=0;a<41;a++){printf("+");}
    gotoxy(8,5+y);printf("==>");
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

    switch (inMenu)
    {
    case 1:
        stack();
        break;
    case 3:
        printf("\nTERIMA KASIH ~ GOODLUCK\n");
        system("cls");
        break;
    }
}
