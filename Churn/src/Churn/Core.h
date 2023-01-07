#pragma once

#ifdef CH_PLATFORM_WINDOWS
	#ifdef CH_BUILD_DLL
		#define CHURN_API __declspec(dllexport)
	#else 
		#define CHURN_API __declspec(dllimport)
	#endif
#else Churn only supports Windows!
#endif // CH_PLATFORM_WINDOWS

