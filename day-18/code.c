#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *sentence="It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.";
    int letter_counter[26]={0};
    int length=strlen(sentence);
    char c;
    for(int i=0;i<length;i++){
        c=tolower(sentence[i]);
        if(c>='a' && c<='z'){
            letter_counter[c-'a']++;
        }
    }
    double percent;
    int i;
    for(int i=0;i<26;i++){
        char letter=i+97;
        percent=((double)letter_counter[i]/length)*100;
        printf("%c:%.2lf",letter,percent);
    }
    return 0;
}
   