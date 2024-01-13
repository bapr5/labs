def kmp(pattern, text):
    prefix = [0] * len(pattern)
    j = 0
    for i in range(1, len(pattern)):
        while j > 0 and pattern[j] != pattern[i]:
            j = prefix[j-1]
        if pattern[j] == pattern[i]:
            j += 1
        prefix[i] = j
    j = 0
    for i in range(len(text)):
        while j > 0 and pattern[j] != text[i]:
            j = prefix[j-1]
        if pattern[j] == text[i]:
            j += 1
        if j == len(pattern):
            return i - len(pattern) + 1
    return -1
text = "abababcabababd"
pattern = "ababd"
index = kmp(pattern, text)
if index != -1:
    print("Подстрока найдена в позиции", index)
else:
    print("Подстрока не найдена")
