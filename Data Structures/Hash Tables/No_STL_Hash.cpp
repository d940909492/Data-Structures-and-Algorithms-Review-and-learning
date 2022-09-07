#include <iostream>
#include <string>
using namespace std;

const int Hsize = 233; //changing any number you want

class HashElement {
public:
    int key;
    int value;

    HashElement(int key, int value) {
        cout<<"key and value created"<<endl;
    }
};

class HashTable {
    HashElement **arr;
public:
    HashTable() {
        arr = new HashElement*[Hsize];
        for(int i = 0; i < Hsize; i++) {
            arr[i] = NULL;
        }
    }

    int hashFunction(int key) { //return between 0 to Hsize
        return key % Hsize;
    }

    void insertElement(int key, int value) {
        int h = hashFunction(key);
        while(arr[h] != NULL && arr[h]->key != key) {
            h = hashFunction(h + 1);
        }
        if(arr[h] != NULL) {
            delete arr[h];
        }
        arr[h] = new HashElement(key, value); 
    }

    int getValue(int key) {
        int temp = hashFunction(key);
        while(arr[temp] != NULL && arr[temp]->key != key) {
            temp = hashFunction(temp + 1);
        }
        if(arr[temp] == NULL) {
            return -1;
        }
        return arr[temp]->value;
    }

  void removeValue(int key) {
        int h = hashFunction(key);
        if(arr[h] == NULL) {
            cout<<"No Element Found"<<endl;
            return;
        }
        while(arr[h] != NULL) {
            if(arr[h]->key == key) {
                break;
            }
            h = hashFunction(h + 1);
        }
      delete arr[h];
    }
};

int main() {
  
    // Do whatever you want here

    return 0;

}
