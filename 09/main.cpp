#include "add.hpp"
#include "multiply.hpp"
#include "main2.hpp"

int main()
{
    cout << add<int>(1, 1) << endl;
    cout << multiply<int>(1, 1) << endl;
    cout << add<float>(1.0f, 1.0f) << endl;
    cout << multiply<float>(1.0f, 1.0f) << endl;
    main2();
}