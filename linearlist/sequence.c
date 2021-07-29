//
// Created by solice on 2021/7/28.
//

#include <stdlib.h>
#include <stdio.h>
#include "sequence.h"

void Initiate(SeqList *l) {
    l->length = 0;
    //    l->data = {0};
}

void Traverse(SeqList l) {
    for (int i = 0; i < l.length; i++) {
        printf("[%d]: %d\n", i, l.data[i]);
    }
}

void DeleteSeqList(SeqList *l, int i) {
    if (i < 1 || i > l->length) {
        printf("删除位置不合法");
        exit(1);
    }
    for (int j = i; j < l->length; j++) {
        l->data[j-1] = l->data[j];
    }
    l->length--;
}

int Length(SeqList l) {
    return l.length;
}

int Get(SeqList l, int i) {
    if (i < 1 || i > l.length) {
        return -1;
    }
    return l.data[i-1];
}

int Locate(SeqList l, DateType e) {
    for (int i = 1; i <= l.length; i++) {
        if (l.data[i-1] == e) {
            return i;
        }
    }
    return -1;
}


void InsertSeqList(SeqList *l, DateType x, int i) {
    if (l->length == MAX_SIZE) {
        printf("表已满\n");
        exit(1);
    }
    if (i < 1 || i > l->length+1) {
        printf("插入位置错误");
        exit(1);
    }
    for (int j = l->length; j >= i; j--) {
        l->data[j] = l->data[j-1];
    }
    l->data[i-1] = x;
    l->length++;

}