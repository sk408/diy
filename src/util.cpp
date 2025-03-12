#include <stdio.h>
#include <string.h>

#include "util.hpp"

namespace asha
{
bool str_eq(const char* str1, const char* str2) {
    return (strcmp(str1, str2) == 0);
}

void str_to_bd_addr(const char* addr_str, bd_addr_t addr) {
    sscanf(addr_str, "%02hhx:%02hhx:%02hhx:%02hhx:%02hhx:%02hhx", 
           &addr[0], &addr[1], &addr[2], &addr[3], &addr[4], &addr[5]);
}
} // namespace asha