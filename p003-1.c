#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   char buff[255];
 
   fp = fopen("/Users/houyixin/c_al/c-algorithm/test.txt", "r");
   
   fgets(buff, 255, fp);
   printf("%s\n", buff);
   fclose(fp);
 
}