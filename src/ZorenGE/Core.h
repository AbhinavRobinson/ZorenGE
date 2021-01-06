#pragma once

#ifdef ZGE_PLATFORM_WINDOWS
#ifdef ZGE_BUILD_DLL
#define ZORENGE_API __declspec(dllexport)
#else
#define ZORENGE_API __declspec(dllimport)
#endif
#else
#error Zoren is only supported on Windows!
#endif