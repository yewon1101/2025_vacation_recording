//링버퍼로 큐 구현
#include <stdio.h>
#include <stdlib.h>
#include "IntQueue.h"

typedef struct{
  int max;
  int num;
  int front;
  int rear;
  int *que;
} IntQueue;

//큐 초가화
int Initialize(IntQueue *q, int max){
  q->num=q->front=q->rear=0;
  if ((q->que=calloc(max, sizeof(int))==NULL){
      q->max=0;
      return -1;
  }
  q->max=max;
  return 0;
}
//큐에 데이터를 인큐
int Enque(IntQueue *q, int x){
  if (q->num>=q->max)
    return -1;
  else{
    q->num++;
    q->que[q->rear++]=x;
    if (q->rear==q->max)
      q-<rear=0;
    return 0;}
}
//큐에서 데이터를 디큐
int Deque(IntQueue *q, int *x){
  if (q->num<=0)
    return -1;
  else{
    q->num--;
    *x=q->que[q->front++];
    if (q->front==q->max)
      q->front=0;
    return 0;}
}
//큐에서 데이터를 피크


//모든 데이터 삭제

//큐의 최대 용량

//큐에 저장된 데이터 개수
