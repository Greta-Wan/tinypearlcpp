#include <iostream>
#include <thread>
#include <mutex>
#include "stringbad.h"

void callme1(StringBad&);

using std::endl;
using std::cout;

void CallMe(StringBad);
int main()
{
    {
        StringBad headline1("Headline1");
        CallMe(headline1);

        /*cout << "Starting an inner block:\n";
        StringBad headline1("Headline1");
        StringBad headline2("Headline2");

        StringBad sports("Sports");

        cout << "headline1: " << headline1 << endl;
        cout << "headline2: " << headline2 << endl;
        cout << "sports: " << sports << endl;

        callme1(headline1);

        cout << "headline1: " << headline1 << endl;
        callme2(headline2);
        cout << "headline2: " << headline2 << endl;

        cout << "Initialize one object to another:\n";

        StringBad sailor = sports;
        cout << "sailor: " << sailor << endl;

        cout << "Assign one object to another:\n";

        StringBad knot;
        knot = headline1;

        cout << "knot: " << knot << endl;
        cout << "Exiting the block.\n";*/

    }

    cout << "End of main() \n";

    return 0;
}

void callme1(StringBad & rsb) 
{
    cout << "String passed by reference:\n";
    cout << rsb << endl;
}

void CallMe(StringBad sb)
{
    cout << "String passed by value:\n";
    cout << sb;
}

