#include "hash.hpp"

#if __has_include("fast_hash.hpp")
    #include "fast_hash.hpp"
    
    std::uint32_t hash32(std::string_view s) {
        return fast_hash32(s);
    }
#else
    // Fallback
    std::uint32_t hash32(std::string_view s) {
        std::uint32_t hash = 2166136261u;
        for (unsigned char c : s) {
            hash = (hash ^ c) * 16777619u;
        }
        return hash;
    }
#endif