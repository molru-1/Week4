#include <stdio.h>
int main(void){
    printf("배열의 수:");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("(공백으로 구분)배열 입력:");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("정렬된 배열:");
    for(int i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
    printf("\n\n\n");
}
