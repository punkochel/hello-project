#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__)
#define SDK_EXPORT __declspec(dllexport)
#else
#define SDK_EXPORT __attribute__((visibility("default")))
#endif