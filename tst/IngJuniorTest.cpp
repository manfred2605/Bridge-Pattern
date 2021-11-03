//
// Created by xocyPC on 2/11/2021.
//
#include "gtest/gtest.h"
#include "IngJunior.h"
#include "IncomeTax.h"

TEST(IngJuniorTestSuite, CheckData){
    auto* tax = new IncomeTax();
    auto* ing = new IngJunior(650000,tax);
    EXPECT_EQ(ing->payTaxes(),"15% tax");
}