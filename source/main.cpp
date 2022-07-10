#include <iostream>

using namespace std;

int main(){

	#ifdef _WIN32
		#ifdef _WIN64
			cout << "OS: Windows (x64)" << endl;
		#else
			cout << "OS: Windows (x86)" << endl;
		#endif
	#endif
	#ifdef __linux__
		#ifdef __ANDROID__
			cout << "OS: Android" << endl;
		#else
			cout << "OS: Linux" << endl;
		#endif
	#else
		cout << "OS: Unix" << endl;
	#endif
	#ifdef __APPLE__
		#include <TargetConditionals.h>
		#ifdef TARGET_OS_IPHONE
			cout << "OS: iOS" << endl;
		#endif
		#ifdef TARGET_OS_MAC
			cout << "OS: MACOS" << endl;
		#endif
	#endif

	return 0;
}
