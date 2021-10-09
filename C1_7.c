# include <stdio.h>

int main() {
    int length = 10;
    printf("Please Enter 10 integers: ");
    int array[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0];

    for (int i = 0; i < 10; i++) {
        if (array[i] > max) {
            max = array[i];
        }    
    }

    printf("%s %d", "The max number is: ", max);
    return 0;
}