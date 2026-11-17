bool wordPattern(char* pattern, char* s) {
    char *words[300];
    int map[256];
    for (int i = 0; i < 256; i++) {
        map[i] = -1;
    }
    int count = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        words[count++] = token;
        token = strtok(NULL, " ");
    }
    int n = strlen(pattern);
    if (n != count)
        return false;
    for (int i = 0; i < n; i++) {
        unsigned char c = pattern[i];
        int found = -1;
        for (int j = 0; j < i; j++) {
            if (pattern[j] == c) {
                found = j;
                break;
            }
        }
        if (found != -1) {
            if (strcmp(words[i], words[found]) != 0)
                return false;
        }
        else {
            for (int j = 0; j < i; j++) {
                if (strcmp(words[i], words[j]) == 0)
                    return false;
            }
        }
    }
    return true;
}