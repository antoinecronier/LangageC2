#include <stdio.h>
#include <stdlib.h>

int test(){
    int a = 97;
    float b = 97;
    int c = 1;
    char saisi[80];
    printf("entier signe %d, entier non signe %u, entier octal %o, character %c, reel1 %f, reel2 %e\n",a,a,a,a,b,b);
    scanf("%d[0-9]",&c);
    fflush(stdin);
    printf("c vaut %d\n",c);
    scanf("%80[a-zA-Z]",saisi);
    printf("saisi vaut : %s\n",saisi);
    return 0;
}

int pomme(){
    int pomme1 =0;
    int pomme2 =0;
    int pommeTT = 0;
    char j1[20] = {0};
    char j2[20] = {0};

    printf("Saisir nom J1\n");
    scanf("%s[a-zA-Z]",j1);
    printf("Saisir pomme J1\n");
    scanf("%d[0-9]",&pomme1);

    printf("Saisir nom J2\n");
    scanf("%s[a-zA-Z]",j2);
    printf("Saisir pomme J2\n");
    scanf("%d[0-9]",&pomme2);

    printf("%s a %d pommes\n",j1,pomme1);
    printf("%s a %d pommes\n",j2,pomme2);
    pommeTT = pomme1+pomme2;
    printf("%Ils ont %d pommes au total\n",pommeTT);
}

int calc(){

    while(1){
        int a=0;
        int b=0;
        int r=0;

        printf("Saisir a\n");
        scanf("%d[0-9]",&a);

        printf("Saisir b\n");
        scanf("%d[0-9]",&b);

        if(a == b){
            r = a + b;
            printf("Result : %d\n",r);
        }
        else if(a < 0 && b > 0){
            r = a * b;
            printf("Result : %d\n",r);
        }
        else if(
           ((a < 0 && b < 0) || (a > 0 && b > 0))
           &&(
              (a < -10 || b < -10)
              ||
              (a > 10 || b > 10)
              )){
            r = a / b;
            printf("Result : %d\n",r);
        }

        fflush(stdin);
        getchar();
        system("cls");
    }

}

int main()
{
    //int a = -1;
    /*while(a != 12){

        printf("Saisir a\n");
        scanf("%d[0-9]",&a);
        fflush(stdin);
        switch(a){
            case 1:
                printf("coucou\n");
            case 2:
                printf("bonjour\n");
            case 3:
                printf("yo\n");
            default:
                printf("loupé\n");
        }
    }*/

    /*int i,j;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%d + %d = %d\n",i,j,i+j);
        }
    }*/

    /*int a;
    do{
        printf("Saisir a\n");
        scanf("%d[0-9]",&a);
        fflush(stdin);
        switch(a){
            case 1:
                printf("coucou\n");
            case 2:
                printf("bonjour\n");
            case 3:
                printf("yo\n");
            default:
                printf("loupé\n");
        }
    }while(a);*/
}
