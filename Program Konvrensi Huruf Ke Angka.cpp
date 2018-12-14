#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char nilai;
    printf("masukan nilai huruf :\t");
    scanf("%s",&nilai);
    switch (nilai)
    {
    case 'A' :
        printf("nilai angka 9-10\n");
        break;
    case 'B' :
        printf("nilai angka 7-8\n");
        break;
    case 'C' :
        printf("nilai angka 5-6\n");
        break;
    case 'D' :
        printf("nilai angka 3-4\n");
    case 'E' :
        printf("nilai angka 1-2\n");
    default:
        printf("\nERROR");
    }
    return 0;
}


