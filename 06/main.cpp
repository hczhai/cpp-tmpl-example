#include "add.hpp"
#include "main2.hpp"

int main()
{
    cout << add<int>(1, 1) << endl;
    cout << add<float>(1.0f, 1.0f) << endl;
    main2();
}