#include <stdio.h>
#include <stdlib.h>

char Text[128]={'\0'};
char cryptograph[128]={'\0'};

int entrypt(char num[], int length) {
    for(int i=0; i < length; i++)
    {
        cryptograph[i]=num[i]+i+5;
    }
    printf("加密后的密文是：%s\n",cryptograph);
} 

int decrypt(char num[], int length) {
    for(int i=0; i < length; i++)
    {
       Text[i]=cryptograph[i] - i -5;
    }
    printf("解密后的明文是：%s\n",Text);
}

int main() {
    int length = 0;

    printf("Enter the length of the password: ");
    scanf("%d", &length);
    printf("\n");

    char* data = (int*)malloc(length * sizeof(char));

    printf("Enter each char of the password: \n");

    for (int n = 0; n < length; n++) {
    scanf("%s", &data[n]);
    }

    printf("%d", entrypt(data, length));
    printf("%d", decrypt(data, length));

    free(data);

    return 0;

}