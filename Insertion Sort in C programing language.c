#include<stdio.h>
#include<math.h>

void InsertionSort(int Array[],int Array_Length){
    int Index_I,Index_J,Key;
    for(Index_I = 1; Index_I < Array_Length; Index_I++){
        Key = Array[Index_I];
        Index_J = Index_I - 1;
        while(Index_J >= 0 && Array[Index_J] > Key){
            Array[Index_J + 1] = Array[Index_J];
            Index_J = Index_J - 1;
            }
        Array[Index_J + 1] =  Key;
    }
}

void Print_Array(int Array[], int Number){
    int Index_I;
    for(Index_I = 0; Index_I < Number; Index_I++)
        printf("%d ",Array[Index_I]);
    printf("\n");
}

int main()
{

int Size;
printf("Please enter the Array size: ");
scanf("%d",&Size);
int Array[Size];

for(int Index_I=0;Index_I<Size;Index_I++){
   scanf("%d",&Array[Index_I]);}

int Number = sizeof(Array) / sizeof(Array[0]);

InsertionSort(Array, Number);
Print_Array(Array, Number);

    return 0;
}
