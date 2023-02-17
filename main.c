#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "safeinput.h" 


bool isVowel(char word){

    if(word == 'a' || word =='e' || word =='i' || word =='o' || word =='u' || word =='y' || word =='å' || word =='ä' || word =='ö' )
        return true;
    else    
        return false;
    
}






void main(){

    char text[100];
    int vowelCount = 0;
    int charCount = 0;
    GetInput("Enter a text: ", text, sizeof(text));

    for(int i = 0; i<strlen(text); i++){

        if(isVowel(text[i]))
            vowelCount++;
        if(isalnum(text[i]))
            charCount++;
    }
    
    
    printf("Nr of vowels: %d\nNr of chars: %d", vowelCount, charCount);


}