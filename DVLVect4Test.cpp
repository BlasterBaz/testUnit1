#include "pch.h"

#include "..//TestGameEnvironnement1/DVLVect4.h"


namespace Vect4 {

	class DVLVect4Test : public ::testing::Test {
	protected:

		DVLVect4Test() {
		}

		~DVLVect4Test() override {
		}

		void SetUp() override {
		}

		void TearDown() override {
		}

		DVLVect4 v2;
		DVLVect4 v3;
		DVLVect4 v4;
	};

	TEST_F(DVLVect4Test, testInit) {
		v4.set(0, 0, 0, 0);
		EXPECT_TRUE(v2 == DVLVect4(0, 0, 0, 0));
		EXPECT_TRUE(v2 == DVLVect4(DVLVect4(0, 0, 0, 0)));
		EXPECT_TRUE(v2 == v4);
	}

	TEST_F(DVLVect4Test, testcomp) {
		v3.set(1, 2, 3, 4);
		v2 = DVLVect4(1, 2, 3, 4);
		v4 = DVLVect4(DVLVect4(3, 4, 6, 8));
		EXPECT_TRUE(v2 == v3);
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 4, 6, 8));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 2, 6, 8));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(2, 2, 3, 8));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 4, 3, 8));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 4, 3, 4));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(2, 2, 3, 4));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 2, 6, 4));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 4, 6, 4));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect4(1, 2, 3, 8));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
	}

	TEST_F(DVLVect4Test, testvectOp) {
		v3.set(1, 2, 3, 4);
		v2 = DVLVect4(1, 2, 3, 4);
		v4 = DVLVect4(DVLVect4(2, 4, 6, 8));
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

	TEST_F(DVLVect4Test, testfloatOp) {
		v3.set(1, 2, 3, 4);
		v2 = DVLVect4(1, 2, 3, 4);
		v4 = DVLVect4(DVLVect4(2, 3, 4, 5));
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