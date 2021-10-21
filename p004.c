/* 
p04 字符串转换
将阿拉伯数字转成中文数字，例如，输入字符串"我爱12你好34"，输出"我爱一二你好三四" */

//我的程序也有局限性，如果输入大于两个整数的字符串就挂了。

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main () {
   char str[100];
   int a;
   char Num[10][4] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};

   printf("Enter a string : ");
   gets(str);
   a = strlen(str);
   
   char str1[a];
   strcpy(str1, str);
   int p = 0;
   for (int i = 0; i < a; i++, p++) {
       if (isdigit(str1[i])) {
           int j = atoi(&str1[i]);
           int m = j / 10;
           int n = j % 10;;
           printf("%s%s", Num[m], Num[n]);
           i += 1;
           
       }
       else {
            printf("%c", str1[i]);
       }
   }
   return 0;
}
