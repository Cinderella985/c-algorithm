#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef struct WORDCOUNT
{
   char word[20]; // 定义单词的长度，不大于20
   int count;
} WORDCOUNT;

int main(int argc, char const *argv[])
{
    WORDCOUNT wordcount[10000]; //存放的单词内容是什么
    char essay[200000], ch, temp[20]; //将单词的字符分别存储
    int i, j, k = 0, len, count, t;
    FILE *fp;

    fp = fopen("Fuckuuuu.txt", "r");

    for (i = 0; (ch = fgetc(fp)) != EOF; i++) {
        essay[i] = ch;
       // printf("%c", essay[i]);
    }
    len = i;//将字母写到essay数组中
    //printf("%d\n", len);

    for (i = 0; i < len; i++) {
        if (essay[i] == '-' || ispunct(essay[i]) || isdigit(essay[i])) {
            for (j = i + 1; j < len; j++) {
                essay[j - 1] = essay[j];
            }
            len--;
        }

        else if (essay[i] >= 'A' && essay[i] <= 'Z') {
            essay[i] += 32;
        }

        else if (essay[i] >= 'a' && essay[i] <= 'z') {
            essay[i] = essay[i];
        }

        else {
           essay[i] = ' '; 
        }
        //printf("%c", essay[i]);
    }

    

    for (i = 0; i < 10000, k < len; i++) {//i表示单词的个数
        for ( j = 0; j < 20 && essay[k] != ' ' && k < len; j++, k++) {//20表示单词长度
            wordcount[i].word[j] = essay[k];
        }
        //printf("%s %d\n", wordcount[i].word, wordcount[i].count);

        k++;
    }

    count = i ; //确定共有几个单词
    //printf("%d\n", count);

    for (i = 0; i < count; i++) {
        wordcount[i].count = 1;//每个单词初始值都赋值为一
    }

    for (i = 0; i < count; i++) {
        for (j = i + 1; j < count; j++) {
            if (strcmp(wordcount[i].word, wordcount[j].word) == 0) {
                wordcount[i].count += wordcount[j].count;
                for (k = j + 1; k < count; k++) {
                    strcpy(wordcount[k - 1].word, wordcount[k].word);//消除重复的单词
                }
                count--;
            }
        }
        //printf("%s %d\n", wordcount[i].word, wordcount[i].count);
    }

    //按照字符表的顺序排列
    for(i = 0; i < count - 1; i++) {
        for (j = 1; j < count - 1; j++) {
            if (strcmp(wordcount[j - 1].word, wordcount[j].word) > 0) {
                strcpy(temp, wordcount[j - 1].word);
                strcpy(wordcount[j - 1].word, wordcount[j].word);
                strcpy(wordcount[j].word, temp);
                t = wordcount[j - 1].count;
                wordcount[j - 1].count = wordcount[j].count;
                wordcount[j].count = t;
            }
        }
    }

    //按照数量排序
    for (i = 0; i < count - 1; i++) {
        for (j = 1; j < count - 1; j++) {
            if (wordcount[j - 1].count < wordcount[j].count) {
                strcpy(temp, wordcount[j - 1].word);
                strcpy(wordcount[j - 1].word, wordcount[j].word);
                strcpy(wordcount[j].word, temp);
                t = wordcount[j - 1].count;
                wordcount[j - 1].count = wordcount[j].count;
                wordcount[j].count = t;
            }
        }
    }
    
    //for (int m = 0; m < len; m++) {
    //    printf("%s %d\n", wordcount[m].word, wordcount[m].count);
    //}

    if (count < 10) {
        for (i = 0; i < count; i++) {
            printf("%s %d\n", wordcount[i].word, wordcount[i].count);
        }
    }

    else {
        for (i = 0; i < 10; i++) {
            printf("%s %d\n", wordcount[i].word, wordcount[i].count);
        }
    }

    return 0;
}

