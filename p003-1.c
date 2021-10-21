#include <stdio.h>
 
int main()
{
   FILE *fp = NULL;
   char buff[255];
 
   fp = fopen("/Users/houyixin/c_al/c-algorithm/for_p007.txt", "r");
   
   fgets(buff, 255, fp);
   printf("%s\n", buff);
   fclose(fp);
 
}