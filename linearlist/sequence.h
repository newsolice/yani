//
// Created by solice on 2021/7/28.
//

#ifndef YANI_SEQUENCE_H
#define YANI_SEQUENCE_H

#endif //YANI_SEQUENCE_H

#include <stdlib.h>

#define MAX_SIZE 7

typedef int DateType;

typedef struct {
    DateType data[MAX_SIZE];
    int length;
} SeqList;

void Initiate(SeqList *l);

void Traverse(SeqList l);

void DeleteSeqList(SeqList *l, int i);

int Length(SeqList l);

int Get(SeqList l, int i);

int Locate(SeqList l, DateType e);


void InsertSeqList(SeqList *l, DateType x, int i);