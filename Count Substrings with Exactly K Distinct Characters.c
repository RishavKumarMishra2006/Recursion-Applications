#include <stdio.h>
#include <string.h>

int atMostK(char *s, int k) {
    int freq[26] = {0};
    int left = 0, count = 0, distinct = 0;

    for (int right = 0; s[right]; right++) {
        if (freq[s[right] - 'a'] == 0)
            distinct++;
        
        freq[s[right] - 'a']++;

        while (distinct > k) {
            freq[s[left] - 'a']--;
            if (freq[s[left] - 'a'] == 0)
                distinct--;
            left++;
        }

        count += right - left + 1;
    }

    return count;
}

int countSubstrings(char *s, int k) {
    return atMostK(s, k) - atMostK(s, k - 1);
}

int main() {
    char s[1000];
    int k;
    scanf("%s %d", s, &k);

    printf("%d", countSubstrings(s, k));
    return 0;
}
