# 第二章 线性表

## 顺序表

顺序表的标准定义（所有顺序表都用这个定义），函数定义也按这个走

```C++
#include <iostream>
#include <vector>
using namespace std;

#define MaxSize 50
typedef int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;
```

