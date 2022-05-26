#pragma once
#include <string>
#include <iostream>
#include "Object.h"
using namespace std;
class LongLong :public Object
{
private:
    long a;
    long b;
public:
    LongLong();
    LongLong(long, long);
    LongLong(const LongLong&);
    ~LongLong();
    long GetA() const { return a; }
    long GetB() const { return b; }
    void SetA(long value);
    void SetB(long value);

    LongLong& operator = (const LongLong&);
    operator string() const;

    friend ostream& operator << (ostream&, const LongLong&);
    friend istream& operator >> (istream&, LongLong&);

    friend bool operator==(const LongLong& l, const LongLong& f);
    friend bool operator!=(const LongLong& l, const LongLong& f);
    friend bool operator<(const LongLong& l, const LongLong& f);
};