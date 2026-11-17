char* longestPalindrome(char* s) {
    int n = strlen(s);
    int start = 0, max = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 2; j++) {
            int l = i, r = i + j;
            while(l >= 0 && r < n && s[l] == s[r]) {
                if(r - l + 1 > max) {
                    start = l;
                    max = r - l + 1;
                }
                l--;
                r++;
            }
        }
    }
    char *ans = malloc(max + 1);
    strncpy(ans, s + start, max);
    ans[max] = '\0';
    return ans;
}