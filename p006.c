/* 
p06 统计字符数
输入一行字符，分别统计出其中英文字母、数字、空格、制表符、换行符和其他字符的个数。 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
   char str[100];
   int len = 0;
   int num_of_alpha = 0;
   int num_of_int = 0;
   int num_of_space = 0;
   int num_of_tabs = 0;
   int num_of_linebreak = 0;
   int num_of_special = 0;

   printf("Enter a string : ");
   gets(str);
   len = strlen(str);


   for (int i = 0; i < len; i++) {
       if (isalpha(str[i])) {  
           num_of_alpha++;
       }
       if ('0' <= str[i] && str[i] <= '9') {
           num_of_int++;
       }
       if (isspace(str[i])) {
           num_of_space++;
       }
       if (isspecial(str[i])) {
           num_of_special++;
       }
       if (str[i] == '\n') {
           num_of_linebreak++;
       }
       if (str[i] == '\t') {
           num_of_tabs++;
       }
   }

       printf("nums of alpha are: %d\n", num_of_alpha);
       printf("nums of integer are: %d\n", num_of_int);
       printf("nums of space are: %d\n", num_of_space);
       printf("nums of special are: %d\n", num_of_special);
       printf("nums of linebreak are: %d\n", num_of_linebreak);
       printf("nums of tab are: %d\n", num_of_tabs);
       return 0;
}