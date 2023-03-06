#include <stdio.h>

const char *get_name() {
    static char buf[128];
    scanf("%s", buf);
    return buf;
}

int main(int argc, char *argv[]) {
    printf("What's your name? ");
    const char *name = get_name();
    printf("Hello, %s!\n", name);
    return 0;
}
