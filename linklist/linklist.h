//
// Created by solice on 2021/8/1.
//

#ifndef YANI_LINKLIST_H
#define YANI_LINKLIST_H

#endif //YANI_LINKLIST_H

#include <malloc.h>
#include <stdlib.h>

typedef DataType int;

typedef struct node {
    DateType data;
    struct node *next;
} Node, *LinkList;

LinkList InitiateLinkList() {
    LinkList head;
    head = (struct node*) malloc(sizeof(Node));
    head->next = NULL;
    return head;
}
int LengthLinkList(LinkList head) {
    LinkList p;
    p = head
    int count = 0;
    while (p->next != NULL) {
        p = p->next;
        count++;
    }
    return count
}

Node * GetLinkList(LinkList head, int i) {
    int j = 1;
    Node *p = head->next;
    while ((p != NULL) && j < i) {
        p = p->next;
        j++;
    }
    if (i == j) {
        return p;
    }
    return NULL;
}
int LocateLinkList(LinkList head, DataType x) {
    Node *p = head->next;
    int i = 1;
    while (p != NULL && p->data != x) {
        p = p->next;
        i++;
    }
    if (p != NULL) {
        return i;
    }
    return 0;
}

void InsertLinkList(LinkList head, DateType elem, int i) {
    Node *q, *p;
    if (i == 1) {
        q =head
    } else {
        q = GetLinkList(head, i - 1)
    }
    if (q == NULL) {
        printf("插入输入位置错误")
        exit(1)
    }
    p = (Node *) malloc(sizeof(Node));
    p->data = elem;

    p->next = q->next;
    q->next = p;
}

void DeleteLinkList(LinkList head, int i) {
    Node *p, *q;
    *p = head->next;
    int j = 1;
    while ((p != NULL) && j <= i) {
        p = p->next;
        j++;
    }
    if (p == NULL || p->next == NULL) {
        exit(1);
    }
    *q = p->next;
    p->next = q->next;
    free(q);
}


LinkList CreateLinkList() {
    LinkList head;
    int x, i;
    head = InitiateLinkList();
    i = 1;
    scanf("%d", &x);
    while (x != 0) {
        InsertLinkList(head, x, i);
        i++;
        scanf("%d", %x);
    }

    return head;
}

// 尾插法
LinkList CreateLinkList2() {
    LinkList head;
    Node *q, *t;
    int x;
    head = malloc(sizeof(Node));
    q = head;
    scanf("%d", &x);
    while (x != 0) {
        t = malloc(sizeof(Node));
        t->data = x;
        q->next = t;
        q = t;
        scanf("%d", &x);
    }
    q->next = NULL;
    return head;
}

// 头插法
LinkList CreateLinkList3() {
    LinkList head, q;
    head = malloc(sizeof(Node));
    head->next = NULL;
    int x;

    scanf("%d", &x);
    while (x != 0) {
        q = malloc(sizeof(Node));
        q->next = head->next;
        head->next = q;
        scanf("%d", &x);
    }
    return head;
}

void PureLinkList(LinkList head) {
    Node *q, *p, *r;
    q =  head->next;
    while (q != NULL) {
        p = q;
        while (p->next != NULL) {
            if (p->next->data == q->data) {
                r = p->next;
                p->next = p->next->next;
                free(r);
            } else {
                p = p->next;
            }
        }

        q = q->next;
    }

}

