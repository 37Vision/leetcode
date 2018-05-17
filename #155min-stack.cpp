typedef struct {
    int* stack;//栈
    int* lowarray;//用来存储当过最小值的元素
    int lownum;//一共有几个元素当过最小值
    int top;
} MinStack;

/** initialize your data structure here. */
MinStack* minStackCreate(int maxSize) {
    MinStack* obj = (MinStack*)malloc(sizeof(MinStack));
    obj->lownum = -1; 
    obj->top = 0;
    obj->stack = (int*)malloc(sizeof(int)*maxSize);
    obj->lowarray = (int*)malloc(sizeof(int)*maxSize);
    return obj;
}

void minStackPush(MinStack* obj, int x) {
    obj->stack[(obj->top)++] = x;
    if(obj->lownum == -1 ||x <= obj->lowarray[obj->lownum]) //如果压栈的值小于等于当前最小值则在lowarry中添加压栈元素值x
        obj->lowarray[++obj->lownum] = x;
}

void minStackPop(MinStack* obj) {
    if(obj->stack[--obj->top] == obj->lowarray[obj->lownum])
        obj->lownum--;
}

int minStackTop(MinStack* obj) {
    return obj->stack[(obj->top)-1];
}

int minStackGetMin(MinStack* obj) {
    return obj->lowarray[obj->lownum];
}

void minStackFree(MinStack* obj) {
    free(obj->stack);
    free(obj->lowarray);
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * struct MinStack* obj = minStackCreate(maxSize);
 * minStackPush(obj, x);
 * minStackPop(obj);
 * int param_3 = minStackTop(obj);
 * int param_4 = minStackGetMin(obj);
 * minStackFree(obj);
 */