#include <iostream>

using namespace std;
cclass variables {
private:
    int a;
    int b;
    int c;
public:
    // Default constructor - initializes all members to zero
    variables() : a(0), b(0), c(0) {}

    // Parameterized constructor for initializing 'a' and 'b'
    variables(int a, int b) : a(a), b(b), c(0) {}

    // Parameterized constructor for all members
    variables(int var1, int var2, int var3) : a(var1), b(var2), c(var3) {}

    ~variables(); // Destructor, currently empty
};
/* note that all members are initialized due to the order they are declared in the class
  not the initialization list order */
/* so the initialization order is
a....b.....c then in destruction
c....b.....a */

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
