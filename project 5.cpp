#include <stdio.h>

int main() {
    int arr[100], even[100], odd[100];
    int n, i, j, temp;
    int e = 0, o = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even[e++] = arr[i];
        else
            odd[o++] = arr[i];
    }

    for(i = 0; i < e-1; i++) {
        for(j = 0; j < e-i-1; j++) {
            if(even[j] > even[j+1]) {
                temp = even[j];
                even[j] = even[j+1];
                even[j+1] = temp;
            }
        }
    }

    for(i = 0; i < o-1; i++) {
        for(j = 0; j < o-i-1; j++) {
            if(odd[j] < odd[j+1]) {
                temp = odd[j];
                odd[j] = odd[j+1];
                odd[j+1] = temp;
            }
        }
    }

    printf("Result after sorting:\n");

    for(i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }

    for(i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}