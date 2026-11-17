char* intToRoman(int num) {
    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };
    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };
    char *result = malloc(20);
    int index = 0;
    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            int len = strlen(symbols[i]);
            strcpy(result + index, symbols[i]);
            index += len;

            num -= values[i];
        }
    }
    result[index] = '\0';
    return result;
}