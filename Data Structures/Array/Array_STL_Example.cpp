#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &array){ //This is pass vector by reference, if pass by value, just remove "&" ;
    for(int i = 0; i<array.size(); i++){
        cout<<array.at(i)<<endl;
    }
}

int main()
{
    vector<int>array = {1,2,3,4,5};
    //print(array);
    
    array.push_back(6); //add an element after the array, this is O(1)
    //print(array);

    array.pop_back(); //remove last element, also O(1)
    //print(array);
    
    array.emplace(array.begin() ,9); //insert an element in specific position, this is O(n) because it add an new element and move or shift rest all elements after it
    print(array);
    
    /*
    more method at: https://cplusplus.com/reference/vector/vector/
    */
    return 0;
}
