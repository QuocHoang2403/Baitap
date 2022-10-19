#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

struct idArray
{
    int *array;
    int size;
};

struct idArray *enterNumber()
{
    static struct idArray getArray;
    int* ptr;  
    int n;
    printf("Please enter the number of numbers you want to fill\n");
    scanf("%d",&n);  
    ptr = (int*) malloc(n * sizeof(int));
    for(int i = 0;i<n;i++){
        printf("Enter number %d: ", i);
        scanf("%d", ptr +i);
    }
    getArray.array = ptr;
    getArray.size = n;

    return &getArray;
}
void Min2Max (struct idArray *getArray)
{
    int las,j;
    for(int i = 1;i< getArray->size; i++){
        las = getArray ->array[i];
        j = i;
        while((j> 0)&&(getArray->array[j-1]>las)){
            getArray->array[j] = getArray->array[j-1];
            j = j-1;
            getArray->array[j] = las ;
        }
    }
    printf("Result:  ");
    for (int i =0; i<getArray->size;i++){
        printf("%d ", getArray->array[i]);
    }
    printf("\n");
}

void Max2Min (struct idArray *getArray)
{
    int las,j;
    for(int i = 1;i< getArray->size; i++){
        las = getArray ->array[i];
        j = i;
        while((j> 0)&&(getArray->array[j-1]>las)){
            getArray->array[j] = getArray->array[j-1];
            j = j-1;
            getArray->array[j] = las ;
        }
    }
    printf("Result:  ");
    for (int i = (getArray->size)-1;i>=0;i--){
        printf("%d ", getArray->array[i]);
    }
    printf("\n");
}

void Max(struct idArray *getArray)
{
    int max =0;
    
    for(int i = 0;i< getArray->size; i++){
        if (getArray->array[i]>max){
            max = getArray->array[i];
        }
    }
    printf("Max =: %d\n", max);
}

void Option(struct idArray *getArray)
{
    int op;
    printf ("Choose option\n");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
        /* code */
        Min2Max(getArray);
        break;
    case 2:
        /* code */
        Max2Min(getArray);
        break;
    case 3:
        /* code */
        Max(getArray);
        break;
    default:
        printf("Option is not define\n");
        break;
    }
}

int main (int agrc, char const *argv[])
{
    struct idArray *ETN;

    ETN = enterNumber();
    printf("Array is: ");
    for(int i = 0; i< ETN->size;i++){
        printf("%d ",(ETN->array[i]));
    }
    printf("\n");

    Option(ETN);

    return 0;
}
