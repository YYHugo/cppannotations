#include <iostream>


void increase_by_value (int a) {
    std::cout << "A value is parsed, so a new local variable is created. Leaving this function (changing its scope), the variable will no longer exist, which means all changes are not saved" << std::endl;
    a += 5;
    std::cout << "Value of argument: " << a << std::endl;
}

void increase_by_reference (int &a) {
    std::cout << "A reference to an int is parsed." << std::endl;
    a += 5;
    std::cout << "Value of argument: " << a << std::endl;
}

void increase_by_pointer (int *a_p) {
    std::cout << "A pointer to an int is parsed." << std::endl;
    *a_p += 5;
    std::cout << "Value of argument: " << *a_p << std::endl;
}

void increase_by_reference_const (int const &a) {
    std::cout << "A reference to an int is parsed." << std::endl;
    //I'm not able to change a read-only reference. Compiler will cry
    // a += 5;
    std::cout << "Value of argument: " << a << ", but since parameter is an 'int const &', so reference won't change" << std::endl;
}

void increase_by_pointer_const (int const *a_p) {
    std::cout << "A pointer to an int is parsed." << std::endl;
    //*a_p += 5;
    std::cout << "Value of argument: " << *a_p << std::endl;
}

int main (int argc, char * argv[]){
    int a_val = 11;
    int & b = a_val;    //reference to a variable a_val, which means you can call the same thing as 'a_val' or 'b' (like an ALIAS)
    std::cout << "a_val = " << a_val << std::endl;
    ++b;                //Let's see what happens if I change 'b'
    std::cout << "b = " << b << std::endl;
    std::cout << "a_val - b = " << (a_val - b) << ", they're the same\n" <<std::endl;

    std::cout << "Now, let's see what happens while passing arguments to functions\n" << std::endl;

    increase_by_value(a_val);
    std::cout << "Value of argument after leaving function parsed by value: " << a_val << std::endl;

    increase_by_reference(a_val);
    std::cout << "\nValue of argument after leaving function parsed by reference: " << a_val << std::endl;

    increase_by_pointer(&a_val);
    std::cout << "\nValue of argument after leaving function parsed by pointer: " << a_val << std::endl;

    increase_by_reference_const(a_val);
    std::cout << "\nValue of argument after leaving function parsed by reference and const: " << a_val << std::endl;

    return 0;
}