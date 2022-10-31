#include<stdio.h>
#include<stdlib.h>

typedef struct evenArr
{
    int size;
    int* ptr;
}even_arr;

const int inputArr[] = {0,1,2,3,4,5,6,7,8,9};

void ArrangeToEven (even_arr *input)
{
    
    for (int i= 0; i<10;i++)
    {
        input->ptr = (int*)malloc((input->size)*sizeof(int));
        if(inputArr[i]%2==0)
        {
            input->size +=1;
            input->ptr[i]= inputArr[i];
        }
        else{
            continue;
        }
        printf("test %d\n",*((input->ptr)+i));
    }
      
}

void ArrangeToOdd(even_arr *input)
{
    for (int i= 0; i<10;i++)
    {
        input->ptr = (int*)malloc((input->size)*sizeof(int));
        if(inputArr[i]%2!=0)
        {
            input->size +=1;
            input->ptr[i]= inputArr[i];
        }
        else{
            continue;
        }
        printf("test %d\n",*((input->ptr)+i));
    }
      
}

int main(int argc, char const *argv[])
{
    even_arr even;
    ArrangeToEven(&even);
    ArrangeToOdd(&even);
    return 0;
}
