#line 287 "/home/travis/build/felix-lang/felix/src/packages/demux.fdoc"
#ifndef __FLX_DEMUX_CONFIG_H__
#define __FLX_DEMUX_CONFIG_H__
#include "flx_rtl_config.hpp"
#ifdef BUILD_DEMUX
#define DEMUX_EXTERN FLX_EXPORT
#else
#define DEMUX_EXTERN FLX_IMPORT
#endif
#endif
