#include "pch.h"

#include "..//TestGameEnvironnement1/DVLVect2.h"

namespace Vect2 {

	class DVLVect2Test : public ::testing::Test {
	protected:

		DVLVect2Test() {
		}

		~DVLVect2Test() override {
		}

		void SetUp() override {
		}

		void TearDown() override {
		}

		DVLVect2 v2;
		DVLVect2 v3;
		DVLVect2 v4;
	};

	TEST_F(DVLVect2Test, testInit) {
		EXPECT_TRUE(v2 == DVLVect2(0, 0));
		EXPECT_TRUE(v2 == DVLVect2(DVLVect2(0, 0)));
	}

	TEST_F(DVLVect2Test, testcomp) {
		v3.set(1, 2);
		v2 = DVLVect2(1, 2);
		v4 = DVLVect2(DVLVect2(3, 4));
		EXPECT_TRUE(v2 == v3);
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect2(1, 4));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect2(2, 2));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
	}

	TEST_F(DVLVect2Test, testvectOp) {
		v3.set(1, 2);
		v2 = DVLVect2(1, 2);
		v4 = DVLVect2(DVLVect2(2, 4));
		v2 += v3;
		EXPECT_TRUE(v2 == v4);
		EXPECT_TRUE(v2 != v3);
		EXPECT_TRUE(v4 != v3);
		v2 -= v3;
		EXPECT_TRUE(v3 == v2);
		EXPECT_TRUE(v4 != v3);
		EXPECT_TRUE(v4 != v2);
		v2 = v2 + v3;
		EXPECT_TRUE(v2 == v4);
		EXPECT_TRUE(v2 != v3);
		EXPECT_TRUE(v4 != v3);
		v2 = v2 - v3;
		EXPECT_TRUE(v3 == v2);
		EXPECT_TRUE(v4 != v3);
		EXPECT_TRUE(v4 != v2);
	}

	TEST_F(DVLVect2Test, testfloatOp) {
		v3.set(1, 2);
		v2 = DVLVect2(1, 2);
		v4 = DVLVect2(DVLVect2(2, 3));
		v2 += 1;
		EXPECT_TRUE(v2 == v4);
		EXPECT_TRUE(v2 != v3);
		EXPECT_TRUE(v4 != v3);
		v2 -= 1;
		EXPECT_TRUE(v3 == v2);
		EXPECT_TRUE(v4 != v3);
		EXPECT_TRUE(v4 != v2);
		v2 = v2 + 1;
		EXPECT_TRUE(v2 == v4);
		EXPECT_TRUE(v2 != v3);
		EXPECT_TRUE(v4 != v3);
		v2 = v2 - 1;
		EXPECT_TRUE(v3 == v2);
		EXPECT_TRUE(v4 != v3);
		EXPECT_TRUE(v4 != v2);
	}
}