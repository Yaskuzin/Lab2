#include <iostream>
using namespace std;
int main() {
    char key;
    int i;
    int i0 = 32;
    do
    {
        cin>>key;
        switch (key){
            case '1': {
    for (i=i0;i<=127;i++) {
        printf(" %3d-%c",i,i);
        if (i%5 == 0) printf("\n");
    }
    printf("\n");
                break;
            }
            case '2':{
                for (i=i0;i<=127;i++) {
                    if (i%2 == 0){
                    printf(" %3d-%c",i,i);
                    }
                    if (i%10 == 0) printf("\n");
                }
                printf("\n");
                break;
            }
            case '3':{
                for (i=i0+5;i<i0+10;i++){
                    printf(" %3d - %c",i,i);
                }
                break;
            }
            case '4':{
                for (i=i0+20;i<i0+30;i++){
                    printf(" %3d - %c",i,i);
                    printf("\n");
                    for (int j = i0+19;j<i;j++) printf(" ");
                }
                break;
            }
            case '5':{
                for (i=i0+25;i<i0+50;i++){
                    printf(" %3d - %c",i,i);
                    printf("\n");
                }
            }
        }
    }while (key != '0');
    return 0;
}