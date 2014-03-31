#include <stdio.h>
struct str {
    int len;
    char *s;
};
struct foo {
    struct str *a;
};

int main(int argc, char **argv) {

    char ss[] = "hello world!";
    struct str s = {2, ss};
    struct str *ps = &s;
    struct foo f = {0};
    if(f.a->s) {
        printf(f.a->s);
    }
    return 0;
}
