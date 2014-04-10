#include <stdio.h>

void insertSort(int *data,int n);
void bubbleSort(int *data, int n);
void swap(int *x, int *y);
int main(void)
{
    int i,a[10] = {3, 11, 2, 5, 0, 33, 6, 91, -1, 10};
    int b[10] = {3, 11, 2, 5, 0, 33, 6, 91, -1, 10};
    insertSort(a, 10);
    for(i=0;i<10;i++)
        printf("%d, ",a[i]);
    printf("\n");
    bubbleSort(b, 10);
    for(i=0;i<10;i++)
        printf("%d, ",a[i]);
    printf("\n");
    return 0;
}

void insertSort(int *data, int n)
{
    int i,k;
    for(i=1;i < n; i++){    //starting from the second element
        for(k=i;k > 0 && data[k] < data[k-1];k--){
            swap(&data[k], &data[k-1]);
        }
        // unvarient: data[0,i] is sorted.
    }
}
void bubbleSort(int *data, int n)
{
    int i,j;
    int swapped;
    for(i=0;i<n;i++) {
        swapped = 0;
        for(j=n-1;j>i;j--)
            if(data[j] < data[j-1]) {
                swap(&data[j],&data[j-1]);
                swapped = 1;
            }

        if(!swapped)
            break;
    }
}
void swap(int *x, int *y)
{
    int tmp = *y;
    *y = *x;
    *x = tmp;
}
