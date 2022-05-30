#pragma once

#ifdef FY_PLATFORM_WINDOWS

     #ifdef FY_BUILD_DLL
     #define FANCY_API  __declspec(dllexport)
     #else 
     #define FANCY_API  __declspec(dllimport)
     #endif // FY_BUILD_DLL
#else
#error Fancy Only Supports Windows!
#endif // FY_PLATFORM_WINDOWS
