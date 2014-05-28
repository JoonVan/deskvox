#ifndef VV_MATH_OUTPUT_H
#define VV_MATH_OUTPUT_H


#include "forward.h"


#include <cstddef>
#include <ostream>
#include <sstream>


namespace virvo
{


namespace math
{

template
<
    size_t Dim,
    typename T,
    typename CharT,
    typename Traits
>
std::basic_ostream< CharT, Traits >&
operator<<(std::basic_ostream< CharT, Traits >& out, vector< Dim, T > v)
{

    std::basic_ostringstream< CharT, Traits > s;
    s.flags(out.flags());
    s.imbue(out.getloc());
    s.precision(out.precision());

    s << '(';
    for (size_t d = 0; d < Dim; ++d)
    {
        s << v[d];
        if (d < Dim - 1)
        {
            s << ',';
        }
    }
    s << ')';

    return out << s.str();

}

template
<
    typename T,
    typename CharT,
    typename Traits
>
std::basic_ostream< CharT, Traits >&
operator<<(std::basic_ostream< CharT, Traits >& out, vector< 3, T > v)
{

    std::basic_ostringstream< CharT, Traits > s;
    s.flags(out.flags());
    s.imbue(out.getloc());
    s.precision(out.precision());

    s << '(' << v.x << ',' << v.y << ',' << v.z << ')';

    return out << s.str();

}


template
<
    typename T,
    typename CharT,
    typename Traits
>
std::basic_ostream< CharT, Traits >&
operator<<(std::basic_ostream< CharT, Traits >& out, vector< 4, T > v)
{

    std::basic_ostringstream< CharT, Traits > s;
    s.flags(out.flags());
    s.imbue(out.getloc());
    s.precision(out.precision());

    s << '(' << v.x << ',' << v.y << ',' << v.z << ',' << v.w << ')';

    return out << s.str();

}


} // math


} // virvo


#endif // VV_MATH_OUTPUT_H


