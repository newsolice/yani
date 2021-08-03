//
// Created by solice on 2021/8/3.
//

#ifndef YANI_LINKQUEUE_H
#define YANI_LINKQUEUE_H

#endif //YANI_LINKQUEUE_H


#include <stdlib.h>

typedef struct {
    DataType data;
    struct LkQueNode *next;
} LkQueNode;

typedef struct {
    LkQueNode *front, *rear;
} LkQue;

void InitQueue(LkQue *q) {
    LkQueNode *p;
    p = (LkQueNode *) malloc(sizeof(LkQueNode));
    q->front = p;
    q->rear = p;
    (q->front)->next = NULL;
}

int EmptyQueue(LkQue l) {
    if (l.rear == l.front) {
        return 1;
    }

    return 0;
}

void EnQueue(LkQue *lq, DataType elem) {
    LkQueNode *tmp;
    tmp = (LkQueNode *) malloc(sizeof(LkQueNode));

    tmp->data = elem;
    tmp->next = NULL;
    (lq->rear)->next = (struct LkQueNode *) tmp;
    lq->rear = tmp;
}