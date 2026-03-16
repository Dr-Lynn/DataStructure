#include <iostream>
#include <vector>
using namespace std;

#define MaxSize 50
typedef int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int length;
}SqList;

void del_x(SqList &L, ElemType x){
	int k=0;
	for(int i=0;i<L.length;++i){
		if(L.data[i]!=x){
			L.data[k]=L.data[i];
			++k;
		}
	}
	L.length = k;
}

int main(){
	ElemType x;
	cin>>x;
	
	SqList list;
	cin>>list.length;
	for(int i=0;i<list.length;++i){
		cin>>list.data[i];
	}
	
	del_x(list, x);
	
	cout<<list.data[0];
	for(int i=1;i<list.length;++i){
		cout<<" "<<list.data[i];
	}
	cout<<endl;
	
	return 0;
}
