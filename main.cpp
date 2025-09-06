#include <cstdint>
#include <iostream>

#include "random_pcg.h"

int main() {
    auto pcg = RandomPCG();
    uint64_t bitTotals[32] = {};
    for (int32_t i = 0; i < 1000000000; i++) {
        auto bits = std::bit_cast<std::uint32_t>(pcg.randf());
        for (int j = 0; j < 32; j++) {
            bitTotals[j] += (bits >> j & 1u);
        }
    }

    for (int i = 0; i < 32; i++) {
        printf("Bit %02d: %llu\n", i, bitTotals[i]);
    }

    return 0;
}
