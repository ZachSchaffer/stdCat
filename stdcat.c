#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc == 2) {
        FILE *in;
        char *fileName = argv[1];
        if ((in = fopen(fileName, "r")) == NULL) {
            printf("Cannot read or open %s.\n", fileName);
            return 1;
        }
        char c;
        while ((c = (char) getc(in)) != EOF) {
            printf("%c", c);
        }

        fclose(in);
    }

    return 0;
}