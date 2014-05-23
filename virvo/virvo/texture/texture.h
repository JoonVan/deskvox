#ifndef VV_TEXTURE_H
#define VV_TEXTURE_H


#include "detail/sampler3d.h"
#include "detail/texture3d.h"



namespace virvo
{


template < int bpc, typename VoxelT, typename FloatT >
VV_FORCE_INLINE FloatT tex3D(texture< VoxelT, 3 > const& tex, simd::base_vec3< FloatT > coord)
{

    virvo::ssize3 size( tex.width(), tex.height(), tex.depth() );
    return detail::tex3D< bpc >( tex.data, coord, size, tex.get_filter_mode() );

}


template < int bpc, typename VoxelT >
VV_FORCE_INLINE simd::sse_vec tex3D(texture< VoxelT, 3 > const& tex, simd::base_vec3< simd::sse_vec > coord)
{

    simd::base_vec3< simd::sse_veci > size( tex.width(), tex.height(), tex.depth() );
    return detail::tex3D< bpc >( tex.data, coord, size, tex.get_filter_mode() );

}


} // virvo


#endif // VV_TEXTURE_H

