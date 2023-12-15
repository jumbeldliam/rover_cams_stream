
        #define BUILD "1702444446-mozjpeg-sys"
        #ifndef INLINE
            #if defined(__GNUC__)
                #define INLINE inline __attribute__((always_inline))
            #elif defined(_MSC_VER)
                #define INLINE __forceinline
            #else
                #define INLINE inline
            #endif
        #endif
        #define FALLTHROUGH
        #define PACKAGE_NAME "mozjpeg-sys"
        #define VERSION "2.0.5"
        #define SIZEOF_SIZE_T 8
        
