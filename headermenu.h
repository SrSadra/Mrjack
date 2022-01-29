#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include "D:\python code\headerdefinition.h"


// char pl1[20][20] = {"PLAYER NO.1" , "0" };
// char pl2[20][20] = {"PLAYER NO.2" , "0"};  


// int dec;


void mainmenu(int* dec){
    int a;
    printf("\t\t\t\t\t\tMR.JACK\n\n\n\n\t\t\t\t\t\t1-Start\n\n\t\t\t\t\t\t2-Costume map\n\n\t\t\t\t\t\t3-Exit\n");
    printf("\t\t\t\t");
    scanf("%d", &a);
    *dec = a;
}


void firstmenu(int* dec){
    int a;
    printf("                              WELCOME TO THE GAME\n\n                               press 1 to continue\n\t\t\t\t\t");
    scanf("%d", &a);    
    *dec = a;    
    system("cls");
    if (*dec != 1){
        firstmenu(&dec);
    }
    // PlaySound(TEXT("C:\Users\sadra\Music\\Ain_t_My_Fault_R3hab_Remix_разминка.mp3") , NULL , SND_SYNC);

}



void startmenu(char **pl1 , char** pl2 , int*dec){
    int a,b;
    printf("\t\t\t\t\t\tCHOOSE YOUR SIDE\n\n\t\t\tDetective:\t\t\t\t\t\tMr.Jack:\n");
    printf("\t\t\tPlayer No.:\n\t\t\tPlayer No.:\n\t\t\t");
    scanf("%d" , &a );
    printf("\t\t\t");
    scanf("%d", &b);
    if (a==10 || b==10){
        *dec = 10;
        system("cls");
        return;

    }
    system("cls");
    if (a==1){
        strcpy(pl1[1] , "Detec");
        strcpy(pl2[1] , "Mr.Jack");
    }
    else if(a==2){
        strcpy(pl2[1] , "Detec");
        strcpy(pl1[1] , "Mr.Jack");
    }
    system("cls");
    // startgame();

    }