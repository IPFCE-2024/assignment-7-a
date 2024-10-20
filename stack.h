#pragma once

#ifndef STACK_H
#define STACK_H
#include <stdbool.h>


typedef struct node {
  int data;
  struct node *next;
} node;

typedef struct {
  node *head;
} stack;

void initialize(stack *s);
void push(int x, stack *s);
int pop(stack *s);
bool empty(stack *s);
bool full(stack *s);

#endif