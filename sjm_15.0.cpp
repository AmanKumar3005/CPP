//Templates
//you can define a single function that will work with different data types
//which can be possible with templates
//1 - function templates
//2 - class templates
//code reusability
/*
void sum(int x,int y)
{
	x + y;
}
void sum1(float x,float y)
{
	x + y;
}
i am going to define a single function which will work with different data types
void sum2()
{
	
}
template <class t>
void tempfun(t p)
{
	
} 
tempfun(4.5)
*/

#include <iostream>
using namespace std;

template <typename t>
t tempsum(t p,t q){
    return p + q;
}
int main(){
    cout << "the integer sum is: " << tempsum(2,4) << endl;
    cout << "the float sum is " << tempsum(2.4,4.8) << endl;
}


========================================================================


#include <iostream>
using namespace std;

template <typename t1, typename t2>
t1 tempsum(t1 p,t2 q){
    return p + q;
}

template <typename t1, typename t2, typename t3>
float tempsum(t1 p, t2 q, t3 r){
    return p + q + r;
}
int main(){
    cout << "the integer sum is: " << tempsum(2,4.7) << endl;
    cout << "the float sum is " << tempsum(2.4,4) << endl;
    cout << "the sum of different types is " << tempsum(2.4,2) << endl;
    cout << "the three variables sum is " << tempsum(2,3,4.8);
   
}

=========================================================================


#include <iostream>
using namespace std;

template <typename t>
void swap1(t &x, t &y)
{
    t tmp = x;
    x = y;
    y = tmp;
    cout << x << " " << y << endl;
}

int main()
{
    int a = 2, b = 4;
    float c = 2.7, d = 4.9;
    swap1(a,b);
    swap1(c,d);


    return 0;
}


===================================================


/*
 * int a[3] = {1,2,3}
 *
 *
 * */

#include <iostream>
using namespace std;

template <typename t>
void search(t x[], t n){
    t i;
    for ( i = 0; i < 4; i++) {
        if(x[i] == n){
            cout << "number is found at " << i << endl;
            break;
        }
    }
    if (i == 4) {
        cout << "number not found" << endl;
    }
}

int main()
{
    int isearch[4], ino;
    cout << "Enter array values" << endl;
    for (int i = 0; i < 4; i ++ ){
        cin >> isearch[i];
    }
    cout << "Enter number to search" << endl;
    cin >> ino;
    search(isearch,ino);
    return 0;
}


=======================================================================