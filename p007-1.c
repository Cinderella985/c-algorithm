#include <stdio.h>
#include <ctype.h>
#include <string.h>

//这个程序尽输出了出现次数最多的字母，前十个难到我了。
 
int main()
{
   FILE *fp = NULL;
   char buff[255];
 
   fp = fopen("/Users/houyixin/c_al/c-algorithm/for_p007.txt", "r+");
   
   fgets(buff, 255, fp);
   //printf("%s\n", buff);
   fclose(fp);

   int num[26] = {0};
   int i = 0;
   int j = 0;
   int max = 0;
   char a;
   int len = strlen(buff);
   //printf("%d\n", len);
   char str1[len];
   strcpy(str1, buff);
   
   /* 
   while (buff != NULL) {
       if (isalpha(buff)) {
           a = tolower(buff);
           i = a - 'a';
           num[i]++;
       }
       buff++;
       if (max < num[i]) {
           max = num[i];
       }
   } */

   for (int i = 0; i < len; i++) {
       if (isalpha(str1[i])) {  
           a = tolower(str1[i]);
           j = a - 'a';
           num[j]++;
       }

       if (max < num[j]) {
           max = num[j];
       }
   }

   int str2[len];
   strcpy(str1, buff);

   for (int i = 0; i < 26; i++) {
       if (max == num[i]) {
           printf("letter %c : %d times \n", 'a' + i, num[i]);
       }
   } 
}
