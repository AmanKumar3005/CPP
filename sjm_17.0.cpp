#include <iostream>
using namespace std;

int stack[10],n=10,top=-1;
void push(int v)
{
    if(top>=n-1)
    {
        cout<<"stack is overflown"<<endl;
    }
    else
    {
        top++;
        stack[top]=v;
    }
}
void pop()
{
    if(top<=-1)
    {
        cout<<"stack is underflown"<<endl;

    }
    else
    {
        cout<<"the poped element is"<<stack[top]<<endl;
        top--;
    }
}
void disp()
{
    if(top>=0)
    {
        cout<<"here are the element of stack"<<endl;
        for(int i=top;i>=0;i--)
        {
            cout<<stack[i]<<endl;
        }
    }
    else
    {
        cout<<"stack have no elements to display"<<endl;
    }
}
int main()
{
    int ch,v;
    cout<<"enter 1 to push"<<endl;
    cout<<"enter 2 to pop"<<endl;
    cout<<"enter 3 to display"<<endl;
    cout<<"enter 4 to exit"<<endl;
    do
    {
        cout<<"enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter an element to push"<<endl;
                cin>>v;
                push(v);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                disp();
                break;
            }
            case 4:
            {
                cout<<"exit"<<endl;
                break;
            }
            default:
            {
                cout<<"enter valid choice"<<endl;
            }
        }

    }while(ch!=4);



    return 0;
}


=============================================================


#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack <int> s;
    int ch,v;
    cout<<"enter 1 to push"<<endl;
    cout<<"enter 2 to pop"<<endl;
    cout<<"enter 3 to exit"<<endl;
    do
    {
        cout<<"Enter your choice"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"enter an element to push"<<endl;
                cin>>v;
                s.push(v);
                cout << "The size of stack is " << s.size() << endl;
                break;
            }
            case 2:
            {
                int e = s.top();
                s.pop();
                cout << "the poped element is " << e << endl;
                break;
            }
            case 3:
            {
                cout<<"exit"<<endl;
                break;
            }
            default:
            {
                cout<<"enter valid choice"<<endl;
            }
        }

    }while(ch!=3);

    return 0;
}


=====================================================


//vector
//a sequence of elements....array..
//vectors are dynamic in nature
//vector <type> variable;
//push_back() ---> element from back

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> n;
    for (int i = 1; i <= 4; i++) {
        n.push_back(i);
    }
    cout << "Elements in vector are -" << endl;
    for (int i = 0; i < 4; i++) {
        cout << n[i] << endl;
    }
    cout << n.at(5) << endl;
    return 0;
}


=======================================================


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> n;
    n.assign(10,5);
    for(int i = 0; i < n.size(); i++)
    {
        cout << n[i] << endl;
    }
    n.push_back(2000);
    for(int i = 0; i < n.size(); i++)
    {
        cout << n[i] << endl;
    }
    return 0;
}



===============================================


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> n;
    vector <int> :: iterator it;
    n.assign(10,5);
    for (it = n.begin(); it != n.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}



=========================================================



#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> n;
    vector <int> :: iterator it;
    n.assign(10,5);
    n.push_back(2000);
    for (it = n.begin(); it != n.end(); it++) {
        cout << *it << endl;
    }
    n.pop_back();
    for (it = n.begin(); it != n.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}



===========================================================


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> n;
    vector <int> :: iterator it;
    n.assign(10,5);
    n.push_back(2000);
    n.pop_back();
    n.clear();
    cout << n.size();
    return 0;
}


======================================================


