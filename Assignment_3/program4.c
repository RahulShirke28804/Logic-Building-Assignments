#include <stdio.h>
#include <ctype.h>

char DisplayConvert(char cValue)
{
    if (isupper(cValue))
    {
        return tolower(cValue);
    }
    else if (islower(cValue))
    {
        return toupper(cValue);
    }

}

int main() {
    char cValue = '\0';
    char cRet = '\0';
    printf("Enter a character: ");
    scanf(" %c", &cValue); 

    cRet = DisplayConvert(cValue);
    printf("Converted character: %c\n", cRet);

    return 0;
}
