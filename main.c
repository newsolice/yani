#include <stdio.h>


#include "linearlist/sequence.h"

struct student {
    char name[20];
    int age;
};

int main() {
    SeqList l;
    Initiate(&l);
    InsertSeqList(&l, 1, 1);
    InsertSeqList(&l, 2, 2);
    Traverse(l);

    printf("%d\n", Locate(l, 5));
    return 0;
}
