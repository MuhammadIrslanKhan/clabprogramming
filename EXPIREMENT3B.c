#include <stdio.h>

int main()
{
    char value;
    printf("Enter the Character :-");
    scanf("%c%c", &value,&value);
    if (value == 'a'||value == 'e'||value == 'i'||value == 'o'||value == 'u'||value == 'A'||value =='E'||value == 'I'||value == 'O'||value =='U')printf("Vowel");
    else printf("Consonant");

    return 0;
}