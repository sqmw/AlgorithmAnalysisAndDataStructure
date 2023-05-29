#include <stdio.h>
# include "../lib/header.h"

# define EleType int
struct LNode {
    EleType data;
    struct LNode *next;
};

int main() {
    char s[5];
    scanf("%s", &s);
    puts(s);
}