/* 
p05 删除程序中所有注释
编写一个删除C语言程序中所有的注释语句。要正确处理带引号的字符串与字符常量。在C语言中，
注释不能嵌套。 */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    char ch;
    char com[2];

    fp1 = fopen("/Users/houyixin/c_al/c-algorithm/for_task.txt", "r");
    fp2 = fopen("/Users/houyixin/c_al/c-algorithm/for_task5.txt", "w");

    while (!feof(fp1)) {
        ch = fgetc(fp1);
        if (ch == EOF) {
            continue;
        }
        if (ch == '/') {
            ch = fgetc(fp1);
            if (ch == '/') {
                while(ch != '\n' && ch != EOF) {
                    ch = fgetc(fp1);
                } 
                fputc('\n', fp2);
            }

            else if(ch == '*') {
                fgets(com, 3, fp1);
                while(strstr(com, "*/") == NULL) {
                    fseek(fp1, -1L, SEEK_CUR);
                    fgets(com, 3, fp1);
                }
            }

            else {
                fseek(fp1, -2L, SEEK_CUR);
                ch = fgetc(fp1);
                fputc(ch, fp2);
            }
        }

        else {
            fputc(ch, fp2);
        }

        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}


