namespace virvo
{


namespace math
{


template < size_t Dim, typename T >
VV_FORCE_INLINE vector< Dim, T >& operator+=(vector< Dim, T >& u, vector< Dim, T > const& v)
{
    u = u + v;
    return u;
}

template < size_t Dim, typename T >
VV_FORCE_INLINE vector< Dim, T >& operator-=(vector< Dim, T >& u, vector< Dim, T > const& v)
{
    u = u - v;
    return u;
}

template < size_t Dim, typename T >
VV_FORCE_INLINE vector< Dim, T >& operator*=(vector< Dim, T >& u, vector< Dim, T > const& v)
{
    u = u * v;
    return u;
}

template < size_t Dim, typename T >
VV_FORCE_INLINE vector< Dim, T >& operator/=(vector< Dim, T >& u, vector< Dim, T > const& v)
{
    u = u / v;
    return u;
}


} // math


} // virvo


