#include "stringbad.h"
#include "cstring"
using std::cout;

int StringBad::num_strings = 0;

StringBad::StringBad(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;

    cout << num_strings << " : " << str << " object created." << std::endl;
}

StringBad::StringBad()
{
    len = 4;
    str = new char[len];
    std::strcpy(str, "C++");
    num_strings++;

    cout << num_strings << " : " << str << " default object created." << std::endl;
}

StringBad::~StringBad()
{
    cout << str << " object deleted, ";
    --num_strings;

    cout << num_strings << " left" << std::endl;

    delete[] str;
}

std::ostream& operator<<(std::ostream& os, const StringBad& st)
{
    os << st.str;
    return os;
}
