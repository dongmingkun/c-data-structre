#include <stdio.h>
#define MAXSIZE 100
//创建线性表
typedef struct{
    int data[MAXSIZE];
    int length;
}sqList;
//初始化线性表
void InitList(Sqlist*L){
    L->length=0;
}
//插入元素
int ListInsert(Sqlist*L,int i,int val){
    if(i<1 || i>L->length+1)
        return 0;
    if(i>length=MAXSIZE)
    return 0;
for(int j=L->length;j>=i;j--){
    L->data[j]=L->data[j-1];
}
L->data[j-1]=val;
L->length++;
return 1;
}
//打印顺序表
void PrintList(SqList*L){
    for(int i=0;i<L->length;i++){
        printf("%d",L->data[i]);
    }
    printf("\n");
}
int main(){
    Sqlist L;
    InitList(&L);
    ListInsert(&L,1,10);
    ListInsert(&L,2,20);
    ListInsert(&L,3,30);
    PrintList(&L);
    return 0;
}