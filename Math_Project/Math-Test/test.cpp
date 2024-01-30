#include "pch.h"


#include <gtest/gtest.h>

extern "C" {


	int soma(int value) {

		return value + 2;
	}
}

extern "C" {
	int soma(int value);
}

TEST(TestCase1, TestOK) {
	EXPECT_EQ(soma(2), 4);

}

TEST(TestCase2, TestNOK) {
	EXPECT_EQ(soma(2), 0);

}


