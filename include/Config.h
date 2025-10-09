#ifndef __CONFIG_H__
#define __CONFIG_H__

#ifdef _WIN32
#define DLLEXPORT extern "C" __declspec(dllexport)
#endif

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>
#define DLLEXPORT EMSCRIPTEN_KEEPALIVE
#endif

#endif
