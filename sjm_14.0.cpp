//array index out of bound exception
//int a[5]
#include <iostream>
using namespace std;
int main()
{
	int a[5] = {1,2,3,4,5},i;
	try
	{
		i = 0;
		while (1){

		if (i!=5)
		{
		cout << a[i] << endl;
		i++;
	}
	else{
		throw i;
	}
}
		
}
catch(int i){
    cout <<"array index out of bound exception is caught" << endl;
}
	return 0;
}


================================================================================


#include <iostream>
using namespace std;
void fun(){
    int x;
    cout << "Enter x value" << endl;
    cin >> x;
    if(x>0){
        cout << "The square is" << x*x;
    }
    else{
        throw x;
    }
}
int main()
{
	try
	{
		fun();
	}
	
	catch(int i)
	{
	    cout << "An exception is caught" << endl;
	}
	
	
	
	
	return 0;
}


=====================================================


#include <iostream>
using namespace std;
void fun(){
    int x,y;
    cout << "Enter x value" << endl;
    cin >> x;
    cout << "Enter y value" << endl;
    cin >> y;
    if(y!=0){
        cout << x%y;
    }
    else{
        throw y;
    }
}
int main()
{
	try
	{
		fun();
	}
	
	catch(int i)
	{
	    cout << "Division by zero exception" << endl;
	}
	
	
	
	
	return 0;
}


===============================================================


//Multiple catch blocks
/*
try{
    stat1;
    stat2;
}
catch(arg1){
    
}
catch(arg2){
    
}
catch(arg3){
    
}
*/
#include <iostream>
using namespace std;
void fun(int x){
    try{
        if(x == 0)
        throw x;
        else
        if (x>0)
        throw 1.0;
        else
        throw 'x';
    }
    catch(int p){
        cout << "The x value should not be 0" << endl;
    }
    catch(double q){
        cout << "The value should not be +ve" << endl;
    }
    catch(char r){
        cout << "The x value should not be -ve" << endl;
    }
}
int main()
{
	fun(0);
	fun(4);
	fun(-44);
	return 0;
}


==================================================================


/*catching multiple exceptions --> by a single catch block
catch(){
    its going to handel multiple exceptions
}
*/
#include <iostream>
using namespace std;
void fun(int x){
    try{
        if(x == 0)
        throw x;
        else
        if (x>0)
        throw 1.0;
        else
        throw 'x';
    }
    catch(double d){
        cout << "The x value should not be zero" << endl;
    }
    catch(...){
        cout << "I am catch handler who can handle multiple exceptions" << endl;
    }
}
int main()
{
	fun(0);
	fun(4);
	fun(-44);
	return 0;
}


============================================================================================


#include <iostream>
using namespace std;
void fun(int x) throw(int, double) // will be aborted if not char
{
    if(x == 0)
    throw x;
    else
    if (x>0)
    throw 'x';
    else
    throw 1.0;
    }
    
int main()
{
    try
{	
   // fun(0);
	fun(44); // --> try will only execute 1 statement
   // fun(-4);
}

catch(int p){
    cout << "The x value should not be 0" << endl;
}

catch(char q){
    cout << "The x value should not +ve" << endl;
}

catch(double r){
    cout << "The x value should not be +ve" << endl;
}
    return 0;
}


===================================================================


