//
// Created by solice on 2021/8/3.
//

#ifndef YANI_LOOPQUEUE_H
#define YANI_LOOPQUEUE_H

#endif //YANI_LOOPQUEUE_H

const int maxsize = 20;

typedef int DataType;

typedef struct cycqueue {
    DataType data[maxsize];
    int front, rear;
}CycQue;

void InitQueue(CycQue *cq) {
    cq->front = 0;
    cq->rear = 0;
}

int EmptyQueue(CycQue cq) {
    if (cq.rear == cq.front) {
        return 1;
    }
    return 0;
}

int EnQueue(CycQue cq, DataType x) {
    if ((cq.rear+1) % maxsize == cq.front) {
        return 0;
    } else {
        cq.rear = (cq.rear + 1) % maxsize;
        cq.data[cq.rear] = x;
        return 1;
    }
}

int DeQueue(CycQue cq, DataType *x) {
    if (cq.front == cq.rear) {
        return 0
    }
    *x = cq.data[(cq.front+1) % maxsize]
    return 1;
}