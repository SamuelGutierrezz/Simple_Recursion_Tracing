#include <iostream>

using namespace std;

int factorial(int n) {
    cout << "factorial n=" << n << endl;//print out current state of int n
    if (n == 1)//Checks for lowest possible sub-problem aka base case
        return 1;//if lowest is true, the recursion will start behind the scenes starting from one until n.


    //after all the calculations in this return; this return is calling factorial(int n) and passing the new calculated n.
    return factorial(n - 1) * n;

    //(n-1) will minus 1 from current state of n
    //( * n )<----The n here doesn't use (n-1) value; but the current state of n in this return.

}

int main()
{
    cout << factorial(6) << endl;
    return 0;
}
