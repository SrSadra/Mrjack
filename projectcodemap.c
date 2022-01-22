#include <stdio.h>


int creatmap(){

    for (int row = 0 ; row<39 ; row++){
        for (int i =0 ; i<6 ; i++){
            if (row%4 == 0){
            if (i==0 && row<2){
                printf("  ");
            }
            else if( i==0){
                printf("* ");
            }
            for (int space = 0 ; space<6 ; space++){
                printf(" ");
            }
            for (int board = 0 ; board<3 ; board++){
                printf("* ");
            }
            if ( i ==5 && row>3){
                for (int space = 0 ; space<6 ; space++){
                printf(" ");
            }
            printf("*");
            }
        }
        else if (row %4 == 1){
            if (i==0 && row<2){
                printf("  ");
            }
            else if(i==0){
                printf(" *");
            }
            for (int space2 =0 ; space2<5 ; space2++ ){
                printf(" ");
            }
            printf("*");
            for (int space2 =0 ; space2<5 ; space2++ ){
                printf(" ");
            }
            printf("*");
            if (i==5 && row>3){
            for (int space2 =0 ; space2<5 ; space2++ ){
                printf(" ");
            }
            printf("*");
            }
            }

        else if (row %4 == 2){
            if (i == 0){
                printf("  ");
            }
            for (int board3 = 0 ; board3<3 ; board3++){
                printf("* ");
            }
            for (int space3 = 0 ;space3<6 ; space3++){
                printf(" ");
            }
            if (i == 5){
                printf("* * *");
            }
        }

        else if (row % 4 == 3){
            if (i == 0){
                printf(" *");
            }

            for (int space4 =0 ; space4<5 ; space4++){
                printf(" ");
            }
            printf("*");
            for (int space4 =0 ; space4<5 ; space4++){
                printf(" ");
            }
            printf("*");            
            if (i==5 ){
            for (int space4 =0 ; space4<5 ; space4++){
                printf(" ");
            }
            printf("*");
            }
        }
            
        }
        printf("\n");
    }



}

int main(){
    creatmap();

    return 0;
}