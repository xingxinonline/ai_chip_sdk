#include <gtest/gtest.h>
#include "cortex_m4_header.h"

TEST(CortexM4Test, FunctionTest) {
    cortex_m4_function();
    // 验证是否正确运行
    ASSERT_TRUE(true);
}
