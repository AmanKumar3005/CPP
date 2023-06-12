/*
class templates
you have implemented a class which is generic .... the same class you can use for different data types.
template <class t>
class class_name
{
	t var;
	public:
		t fun(t arg)
		{
	
		}
};
func1(t arg1){
	
}
fun1(10);
//create generic class object....take care...
class_name obj;
class_name<datatype> obj;
class_name<int> obj1;
class_name<float> obj2;

*/

#include <iostream>
using namespace std;

template <class t>
class tempclass
{
	t x,y;
public:
	tempclass(t p,t q)
	{
		x = p;
		y = q;
	}
	void tempmax()
	{
		if (x > y)
			cout << "x is max value " << x << endl;
		else
			cout << "y is max value " << y << endl;
	}
};

int main()
{
	tempclass<int> intmax(10,20);
	intmax.tempmax();
	tempclass<float> floatmax(1.2,4.5);
	floatmax.tempmax();
	return 0;
}


===============================================================


#include <iostream>
using namespace std;

template <class t>
class classsearch
{
	t x[5];
	t value;
public:
    void readarray()
    {
        int i = 0;
        for (i = 0; i < 5 ; i++) {
            cin >> x[i];
        }
        cout << "Enter values to search" << endl;
        cin >> value;
    }
    void searchvalue()
    {
        int i;
        for (i = 0; i < 5; i++) {
            if (x[i] == value)
            {
                cout << "The element found at " << i + 1 << endl;
                break;
            }
        }
        if (i == 5) {
            cout << "Element not found" << endl;
        }
    }
};

int main()
{
	classsearch<int> iarray;
	classsearch<float> farray;
	iarray.readarray();
	iarray.searchvalue();
	farray.readarray();
	farray.searchvalue();
	return 0;
}


=================================================================================


/*
 STL .... in C++
 1. Containers -----> stores your data in structure/template/container -- array
 2. Iterators ------> iterate data in container x[10]
 3. Algorithms -----> which are already implemented in library of c++
 */

/*
 * stack
 * its a collection of values/elements
 * LIFO = FILO
 push --- > to add an element into stack
 pop ---- > to remove an element from stack
 top = -1
 stack[++top] = 5;
 size = 4
 top = 0,1,2,3
 top <= size - 1
 */