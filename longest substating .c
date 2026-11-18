
#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]) {
    int n = strlen(s);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int visited[256] = {0};
        int length = 0;

        for (int j = i; j < n; j++) {
            if (visited[(unsigned char)s[j]]) {
                break;
            }

            visited[(unsigned char)s[j]] = 1;
            length++;

            if (length > maxLength) {
                maxLength = length;
            }
        }
    }

    return maxLength;
}

int main() {
    char s[1000];

    printf("Enter a string: ");
    scanf("%999s", s);

    printf("Longest substring length: %d\n",
           lengthOfLongestSubstring(s));

    return 0;
}
