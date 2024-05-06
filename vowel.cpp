/*Write a program that counts the number of vowels in a sentence.
eg " Hello World " => returns 2*/
#include <iostream>

using namespace std;

bool isVowel(char c){
    c = toupper(c);
    return c=='A'||c=='E'||c=='I'||c=='O' ||c=='U';
}

int main()
{
    char str[10] = "totalvowels";
    int vowels = 0;
    
    for(int i = 0; str[i]; i++)  
    {
        if(isVowel(str[i]))
		    vowels++;
        
    }
    
    cout << "Total Vowels : " << vowels;
    
    return 0;
}