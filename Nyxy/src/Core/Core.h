#pragma once

#ifdef NE_PLATFORM_WINDOWS
#ifdef NE_BUILD_DLL
#define NYXY_API __declspec(dllexport)
#else
#define NYXY_API __declspec(dllimport)
#endif
#else
#error Nyxy only supports Windows!
#endif