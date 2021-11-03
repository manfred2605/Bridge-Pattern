//
// Created by xocyPC on 2/11/2021.
//

#include "gtest/gtest.h"

int main(int argc, char **argv) {
    std::cout << "Hello, Universidad Nacional!" << std::endl;

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
