#include <iostream>
#include <vector>
using namespace std;

const int Sta_SZ  = 20;
static vector<int> vect;
static int st_len[3] = {Sta_SZ, Sta_SZ, Sta_SZ};

bool isEmpty(int stack_no)  {
  
	if(st_len[stack_no]== -1);
		return true;
	else
		return false;
 }

bool push(int stack_no, int num) {

    if(st_len[stack_no] == 0) {
        cout << "Stack " << stack_no << " overflow " << endl;
        return false;
    }

    st_len[stack_no] --;
    vect.at(stack_no * Sta_SIZE + st_len[stack_no]) = num;

    return true;
}

bool pop(int stack_no, int &num) {

    if(st_len[stack_no] == Sta_SZ){
        cout << "Stack " << stack_no << " underflow " << endl;
        return false;
    }

    num = vect.at(stack_no * Sta_SZ + st_len[stack_no]);
    st_len[stack_no] ++;

    return true;
}

bool peek(int stack_no, int &num) {

    if(st_len[stack_no] == Sta_SZ) {
        cout << "Stack " << stack_no << " is empty " << endl;
        return false;
    }

    num = vect.at(stack_no * Sta_SZ + st_len[stack_no]);

    return true;
}

int main(int argc, char* argv[]) {

    vec.reserve(3 * Sta_SZ);
    vec.resize(3 * Sta_SZ);
    cout << "vector size is: " << vec.capacity() << endl;

    for(int i = 0; i < 25; i++) {
        push(1, i);
    }

    int value;

    for(int i = 0; i < 25; i++) {
        peek(1,value);
        cout << "peek value: " << value << endl;
        pop(1, value);
        cout << "value: " << value << endl;
    }

    return 0;
}