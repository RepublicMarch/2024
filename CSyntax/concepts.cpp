#include <iostream>
#include <concepts> // this is required to use concepts.
    // concepts;
    // concepts are much cleaner version of function or template.
    // such as static casts.

template <typename TypeOne>
requires std::integral<TypeOne> // allows only integeal type on templates.
// Syntax 2 requires std::integral<TupeOne>
// Syntax 3 template <std::integral TypeOne>
// Syntax 4 TypeOne (TypeOne a, TypeOne B) requires std::integeral<TypeOne>

// on function;
// auto add (std::integral auto a, std::integral auto a)
// check if parameter is a Integral type.

TypeOne Addition (TypeOne A, TypeOne B)
{
    int sum = A + B;
    return sum;
};

int main()
{
    std::cout << Addition(24, 24) << std::endl;
    return 0;
}