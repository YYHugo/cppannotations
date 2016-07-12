#include <iostream>

/**CAUTION:
 * Use command "g++ -Wall -std=c++11"
 * on receive (int &&val), && is accepted on C++11
**/

namespace dts=std;
// This function return a temporary (anonymous) value
int intVal() {
    return 5;
}

void receive(int &val) {    //note: lvalue reference
    // lvalue - left value
    dts::cout << "int value parameter\n";
}

void receive (int &&val) {  //note: rvalue reference
    // rvalue - right value
    ++val;
    dts::cout << "int R-value parameter, now " << val << '\n';
}

int main( int argc, char * argv[]) {
    /*int &ir = intVal();         // fails: refers to a temporary*/
    int const &ic = intVal();   // OK: immutable temporary
    /*int *ip = &intVal();        // fails: no lvalue available*/
    dts::cout << ic << dts::endl;

    //Now let's see the receive's functions
    int value = 5;
    receive(18);    // calls rvalue function
    receive(value); // calls lvalue function
    receive(intVal()); // calls rvalue function
    /* C++11 will differ receive's() by lvalue or rvalue, if
     * receive (int &val) changes to
     * receive (int val)
     * it'll say ambiguidity
    **/
    dts::cout << "Value after calling receive rvalue is: " << value << '\n';

    return 0;
}
