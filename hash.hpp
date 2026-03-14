#ifndef HASH_HPP
#define HASH_HPP

#include <cstdint>
#include <string_view>

#ifndef __has_include
    #error "Compiler does not support __has_include. Please use C++17 compatible compiler (g++ or clang++)"
#endif

std::uint32_t hash32(std::string_view s);

#endif // HASH_HPP