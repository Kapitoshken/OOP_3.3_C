#include <sstream>
#include "LongLong.h"

using namespace std;
LongLong::LongLong()
{
    a = 0;
    b = 0;
}
LongLong::LongLong(long x = 0, long y = 0)
{
    a = x;
    b = y;
}
LongLong::LongLong(const LongLong& g)
{
    a = g.a;
    b = g.b;
}
LongLong::~LongLong()
{
}
void LongLong::SetA(long value)
{
    a = value;
}

void LongLong::SetB(long value)
{
    b = value;
}

LongLong& LongLong::operator=(const LongLong& x)
{
    a = x.a;
    return *this;
}

LongLong::operator string() const
{
    stringstream ss;
    ss << "a = " << a << endl;
    ss << "b = " << b << endl;

    return ss.str();
}

ostream& operator<<(ostream& out, const LongLong& r)
{
    out << string(r);
    return out;
}

istream& operator>>(istream& in, LongLong& r)
{
    cout << "A = "; in >> r.a;
    cout << "B = "; in >> r.b;
    cout << endl;
    return in;
}

bool operator<(const LongLong& l, const LongLong& f)
{
    return l.GetA() < f.GetA() ||
        l.GetA() == f.GetA() &&
        l.GetB() < f.GetB();
}

bool operator==(const LongLong& l, const LongLong& f)
{
    return  l.GetA() == f.GetA() && l.GetB() == f.GetB();
}

bool operator!=(const LongLong& l, const LongLong& f)
{
    return  l.GetA() != f.GetA() && l.GetB() != f.GetB();
}