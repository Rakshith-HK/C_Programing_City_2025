#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int count1[26] = {0}, count2[26] = {0};

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // If lengths are different → not anagram
    if (strlen(str1) != strlen(str2))
    {
        printf("Not an anagram");
        return 0;
    }

    // Count frequency of characters in str1
    for (int i = 0; str1[i] != '\0'; i++)
    {
        count1[str1[i] - 'a']++;
    }

    // Count frequency in str2
    for (int i = 0; str2[i] != '\0'; i++)
    {
        count2[str2[i] - 'a']++;
    }

    // Compare both frequency arrays
    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            printf("Not an anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
