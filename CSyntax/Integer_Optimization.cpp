#include <iostream>

int main() {

    // Let h = 2147483647 (32bit Computer's maxinum integer)

    // signed integer requires divide 2 numb in computation also allows number into negative.
    // range of signed integer ( -h ~ h )
    signed int Integer_Signed_Positive {2147483647}; // 4 bytes, h
    signed int Integer_Signed_Negative {-2147483647}; // 4 bytes, -h
    // signed int Integer_Signed_Positive_Double {4294967294}; COMPILE ERROR.


    // unsigned integer does not require to divide number. but it does not allow to number go negative.
    // but this benefits to faster computation. 
    // rannge of unsigned integer ( 0 ~ 2h )
    unsigned int Integer_Unsigned {4294967294}; // 4 bytes, 2h
    // unsigned int Integer_Unsigned {-4294967294}; COMPILE ERROR.


    std::cout << Integer_Signed_Positive << std::endl;
    std::cout << Integer_Signed_Negative << std::endl;
    std::cout << Integer_Unsigned << std::endl;

    // short was invented for faster Datastore, uses only 2 bytes.
    short Short_Number {-32768}; // range (-32768 ~ 32768)
    short int Short_Integer {455}; 

        // Short variables. uses 2 bytes.
    // range (-32768 ~ 32767)
    short short_variable {-32768};  // range (-32768 ~ 32767)
    short int short_integer {455}; // doesnt make difference at all. its same as "int"
    // basically short int = int.
    signed short signed_short_variable {122}; // range (-32768 ~ 32768), but still 2 bytes.
    signed short int signed_short_integer {122}; 

    // 0 ~ 65,535(16BIT), 2bytes, no negative numbers - Optimization at best.
    unsigned short int unsigned_short_integer {456}; 

    // Let h = 2147483647 (32bit Computer's maxinum integer)
    // signed and unsigned integers. uses 4 bytees
    int Normal_integer {55};  // -h ~ h
    signed singed_variable {2}; // signed is considered same as int.
    signed int signed_integer_variable {52}; // same thing
    unsigned int unsigned_integer {434}; // 0 ~ 2h

    // long variables. uses 8 bytes(64bit)
    // Let H = 9223372036854775808 (64 bits computer number)
    long long_variable {-9223372036854775808}; // -H ~ H-1
    long int long_variable {9223372036854775807}; // same as long
    long long int long_long_integer {2424}; // same as long
    signed long long int signed_long_long_integer {4234234}; // same as long
    unsigned long long int unsigned_long_long_integer {18446744073709551615}; // 0 ~ 2H - 1

    // Note; 
    // USE "short" modifer on variable if you wanna include negatives in range of |32768| (Absolute value with 15 BITS)
    // USE "long" if you wanna include negatives in range of |9223372036854775808| (63 BITS)
    // USE normal "int" if you wanna include negatives in range of |2147483647| (31 BITS)
    // few things we can notice here, "unsigned" will use original computer bits(64/32/16) number,
    // but signed will divide it by 2 then minus 1.

    // hence, range can be expressed 
    // "signed" or normal "int" = 2^n (n is bits) - (-2^n ~ 2^n-1)
    // "unsigned" int range (2^n-1)

    // "unsigned long long int" will Fix range of 64 Bits, but "unsigned long int" will depend on system, same as "signed long int".
    // "signed int" is same as "int"

    return 0;

}
