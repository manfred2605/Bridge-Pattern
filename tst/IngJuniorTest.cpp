//
// Created by xocyPC on 2/11/2021.
//
#include "gtest/gtest.h"
#include "IngJunior.h"
#include "IncomeTax.h"
#include "CCSSTax.h"

TEST(IngJuniorTestSuite, CheckData){
    auto* tax = new IncomeTax();
    auto* ing = new IngJunior(650000,tax);
    EXPECT_EQ(ing->payTaxes(),"must pay 15% tax \n");
    std::cout<<ing->payTaxes();
}

TEST(IngJuniorTestSuite, CheckDataCCSS){
    auto* taxi = new CCSSTax();
    auto* ing = new IngJunior(650000,taxi);
    EXPECT_EQ(ing->payTaxes(),"must pay 10% of your salary: 65000\n");
    std::cout<<ing->payTaxes();
}