#include <iostream>

class list {
public:
list();
int listCapacity;
int listSize;
bool insert(int item);
void remove(int item);
int get(int loc);
int set(int loc, int val);
private:
int * arrayList ;
};

list::list(){
arrayList = new int[2];
listCapacity = 2;
listSize = 0;
}
bool list::insert(int item){
if(listSize == listCapacity){
int * newArrayList = new int[listCapacity*2];
for(int i = 0; i < listSize; i++){
newArrayList[i] = arrayList[i];
}
int * temp = arrayList;
arrayList = newArrayList;
delete[] temp;
arrayList[listSize] = item;
listSize++;
return true;
}
arrayList[listSize] = item;
listSize++;
return true;
}

using namespace std;


int main()
{


cout << "Hello world" << endl;
list myList;
//cout<< myList.m << endl;
for(int i = 0; i < 100; i++){
myList.insert(i);
}


return 1;

}
