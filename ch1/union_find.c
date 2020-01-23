#include <stdio.h>
#define MAX_PAIRS 100

/* Quick-find (slow union) */
int main() {
    int id[MAX_PAIRS];
    int i, t, p, q;
    FILE *fid = fopen("input.txt", "r");

    for (i = 0; (id[i] = i) < MAX_PAIRS; i++);

    while (fscanf(fid, "%d %d\n", &p, &q) != EOF) {
        if (id[p] == id[q]) {
            continue;
        }
        for (i = 0, t = id[p]; i < MAX_PAIRS; i++) {
            if (id[i] == t) {
                id[i] = id[q];
            }
        }
        printf("%d %d\n", p, q);
    }
}
