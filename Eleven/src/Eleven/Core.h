#pragma once


#ifdef ELVN_PLATFORM_WINDOWS
	#ifdef ELVN_BUILD_DLL
		#define ELEVEN_API __declspec(dllexport)
	#else
		#define ELEVEN_API __declspec(dllimport)
	#endif
#else
	#error Eleven only supports Windows!
#endif	
