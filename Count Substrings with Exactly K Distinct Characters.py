def at_most_k(s, k):
    freq = {}
    left = 0
    count = 0

    for right in range(len(s)):
        freq[s[right]] = freq.get(s[right], 0) + 1

        while len(freq) > k:
            freq[s[left]] -= 1
            if freq[s[left]] == 0:
                del freq[s[left]]
            left += 1

        count += right - left + 1

    return count

def count_substrings(s, k):
    return at_most_k(s, k) - at_most_k(s, k - 1)

s = input()
k = int(input())

print(count_substrings(s, k))
