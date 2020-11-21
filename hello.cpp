/**c++ is my favorite programming language because it does not abstract away the finer details that help encapsulate the essence of what computing is all about: it is about realizing the unknown from the known, the contrast of view, your attitude, or point of reference, is the insight that computing, like all objective phenomenon, is discrete, and the science of law and nature are found in the finder details of c++
**/
#include <iostream>

class list {
public:
list();
int listCapacity;
int listSize;
bool insert(int item);
void removeFirstInstance(int item);
void removeAll(int item);
int get(int loc);
void set(int loc, int item);
int find(int item);
private:
int ** arrayList ;
};

list::list(){
arrayList = new int*[2];
for(int i = 0; i < 2; i ++){
arrayList[i] = new int[1];
}
listCapacity = 2;
listSize = 0;
}
bool list::insert(int item){
if(listSize == listCapacity){
int ** newArrayList = new int*[listCapacity*2];
for(int i = 0; i < listSize; i++){
newArrayList[i] = arrayList[i];
}
int ** temp = arrayList;
arrayList = newArrayList;
for(int i = 0; i < listSize; i++){
delete[] temp[i];
} 
delete[] temp;
arrayList[listSize][0] = item;
listSize++;
return true;
}
arrayList[listSize][0] = item;
listSize++;
return true;
}
void list::removeFirstInstance(int item){
//find index
//save it, so we can check an index, for get() 
//to delete, we have to consider whether to move all values one space from the deletion, etc, to keep track of other indexes. 
int index = find(item);
if(index == -1){
return;
}
arrayList[index][0] = -1;
return;
}
int list::get(int loc){
int index = loc - 1;
if(arrayList[index][0] == -1){
while(arrayList[index][0] == -1){
index++;
}
}
return arrayList[index][0];
}
void list::set(int loc, int item){ //doesn't replace item at loc with new item, shifts the list back at select loc.
//int index = loc - 1;
//int temp = arrayList[index];

}
int list::find(int item){
for(int i = 0; i < listSize; i ++){
if(arrayList[i][0] == item){
return i;
}
}
return -1;
}

using namespace std;


int main()
{


cout << "Hello world" << endl;
list myList;
//cout<< myList.m << endl;
for(int i = 1; i <= 100; i++){
myList.insert(i);
}

myList.removeFirstInstance(69);
cout<< myList.get(69) << " equals 70" << endl;
cout<< myList.get(1) <<endl;


return 1;

}
