#include <iostream>
#include <cstring>
#include <concepts> // this is required to use concepts.

// concepts are much cleaner version of function or template.
// such as static casts.

// Call Template | template <typename TypeOne>
// Syntax 1 | requires std::integral<TypeOne> | allows only integeal type on templates.
// Syntax 2 | requires std::integral<TupeOne>
// Syntax 3 | template <std::integral TypeOne>
// Syntax 4 | TypeOne (TypeOne a, TypeOne B) requires std::integeral<TypeOne>

// on function;
// auto add (std::integral auto a, std::integral auto a)
// check if parameter is a Integral type.

// Below shows different way to build concepts
template <typename TypeTwo>
concept MyIntegral = std::is_integral_v<TypeTwo>;

template <typename TypeTwo>
concept Multipliable = requires(TypeTwo a, TypeTwo b)
{
    a*b;
};

template <typename TypeTwo>
concept Incrementable = requires(TypeTwo a)
{
    a+=1;
    ++a;
    a++;
};

// Using Custom Concepts we built above
// - nothing special, they all do the same
// SYNTAX 1
template <typename TypeTwo>
requires MyIntegral<TypeTwo> // << use trait we decleared from above
TypeTwo Addition_One(TypeTwo A, TypeTwo B)
{
    return A+B;
}
// SYNTAX 2
template <MyIntegral TypeTwo>
TypeTwo Addition_Two(TypeTwo A, TypeTwo B)
{
    return A + B;
}
// SYNTAX 3
auto Addition_Three(MyIntegral auto A, MyIntegral auto B)
{
    return A+B;
}

template <typename TypeTwo>
requires Multipliable<TypeTwo>
TypeTwo Multiple_One(TypeTwo A, TypeTwo B)
{
    return A * B;
}

template <typename TypeTwo>
requires Incrementable<TypeTwo>
TypeTwo Increment(TypeTwo A)
{
    return A;
}

template <typename Requires_Clauses>
concept Requirement_Trait = requires (Requires_Clauses Variable_One)
{
    sizeof(Variable_One) <=4; // simple requirement : only checks syntax
    requires sizeof(Requires_Clauses) <= 4; // additional/nested requirement. : Check if statement is true;
}; 

template <typename Requirement_Clauses>
concept Compound_Addable = requires (Requirement_Clauses A, Requirement_Clauses B)
{
    {A+B} noexcept -> std::convertible_to<int>; // checks if a + b is valid syntax, doesnt throw expetions, and the
    // result is convertible to int
};

// NOTE 
// Always call Template first whenever call concept/require.
// to build concept, use concept keyword
// to use concept, use require keyword.

int main()
{
    std::string String_One {"Strings"};

    std::cout << Addition_One(5,5) << std::endl;
    std::cout << Multiple_One(5,5) << std::endl;
    std::cout << Increment(5) << std::endl;
    // Compile error. std::cout << Increment(String_One) << std::endl;
    return 0;
}