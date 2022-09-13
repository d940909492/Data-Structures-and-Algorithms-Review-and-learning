#include <iostream>
#include <stack>

/* Stack Method:
empty:	Test whether container is empty (public member function)
size:	Return size (public member function)
top:	Access next element (public member function)
push:	Insert element (public member function)
emplace:	Construct and insert element (public member function)
pop:	Remove top element (public member function)
swap:	Swap contents (public member function)
*/

using namespace std;

int main()
{
    stack<int> test;
    test.push(10);
    cout<<test.top()<<endl;
    test.push(20);
    test.push(30);
    cout<<"size is: "<<test.size()<<endl;
    while(!test.empty()){
        cout<<test.top()<<"  ";
        test.pop();
    }
    cout<<endl;
    stack<int> test1;
    stack<int> test2;
    test1.push(10);
    test1.push(20);
    test1.push(30);
    cout<<"test1 size is: "<<test1.size()<<endl;
    test2.push(10);
    test2.push(20);
    cout<<"test2 size is: "<<test2.size()<<endl;
    test1.swap(test2);
    cout<<"current test1 size is: "<<test1.size()<<endl;
    cout<<"current test2 size is: "<<test2.size()<<endl;
    return 0;
}
