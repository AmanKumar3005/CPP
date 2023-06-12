//logical error
//compilation error
//run time error
//problem -> solution -> error in logic -> logical error
//any programming language have some set rules
//run --> program error free
//errors that occurred at run time --> run time errors
//exception handling in c++
// try
// throw
// catch
// identify
/*
 try
 {
    start 1;
    start 2;
    start 3;
    throw exception;
 }      
 
//throw exception;
catch(argument)
  {
  statement 4;
  //action to be taken for the exception thrown by throw keyword from a try block
  }

try{
    stat1;
    stat2;
    stat3;
    throw excep;
}
catch(arg)
{
    stat4; action to be taken against the exception
}
*/

#include <iostream>
using namespace std;

//division by zero

int main(){
    int a,b;
    cout << "Enter a and b values " << endl;
    cin >> a >> b;
    try{
        if(b!=0)
            cout << a/b;
        else
            throw b;
    }
    catch (int i) {
        cout << "Division by zero exception ";
        cout << i;
    }
    return 0;
}