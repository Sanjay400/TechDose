char* freqAlphabets(char* s) {
    int size = strlen(s), residx = 0, idx = 0;
    char* res = (char*) malloc((size + 1) * sizeof(char));
    while (idx < size) {
        if (idx + 2 < size && s[idx + 2] == '#') {
            res[residx++] = atoi(s + idx) + 96;
            idx += 3;
        } else {
            res[residx++] = s[idx++] - 48 + 96;
        }
    }
    res[residx] = '\0';
    return res;
}
