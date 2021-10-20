#include <stdio.h>
int main(int argc, char const *argv[])
{
    char a;
    FILE* sourse = fopen("/Users/houyixin/c_al/c-algorithm/test.txt", "r");
    FILE* target = fopen("/Users/houyixin/c_al/c-algorithm/test2.txt", "w");

    while ((a = fgetc(sourse) != EOF)) {
        fputc(a, target);
    }

    fclose(sourse);
    fclose(target);
}
