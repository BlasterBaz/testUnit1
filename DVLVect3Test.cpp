#include "pch.h"

#include "..//TestGameEnvironnement1/DVLVect3.h"

namespace Vect3 {

	class DVLVect3Test : public ::testing::Test {
	protected:

		DVLVect3Test() {
		}

		~DVLVect3Test() override {
		}

		void SetUp() override {
		}

		void TearDown() override {
		}

		DVLVect3 v2;
		DVLVect3 v3;
		DVLVect3 v4;
	};

	TEST_F(DVLVect3Test, testInit) {
		v4.set(0, 0, 0);
		EXPECT_TRUE(v2 == DVLVect3(0, 0, 0));
		EXPECT_TRUE(v2 == DVLVect3(DVLVect3(0, 0, 0)));
		EXPECT_TRUE(v2 == v4);
	}

	TEST_F(DVLVect3Test, testcomp) {
		v3.set(1, 2, 3);
		v2 = DVLVect3(1, 2, 3);
		v4 = DVLVect3(DVLVect3(3, 4, 6));
		EXPECT_TRUE(v2 == v3);
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect3(1, 4, 6));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect3(1, 2, 6));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect3(2, 2, 3));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
		v4 = (DVLVect3(1, 4, 3));
		EXPECT_TRUE(v2 != v4);
		EXPECT_TRUE(v4 != v3);
	}

	TEST_F(DVLVect3Test, testvectOp) {
		v3.set(1, 2, 3);
		v2 = DVLVect3(1, 2, 3);
		v4 = DVLVect3(DVLVect3(2, 4, 6));
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

	TEST_F(DVLVect3Test, testfloatOp) {
		v3.set(1, 2, 3);
		v2 = DVLVect3(1, 2, 3);
		v4 = DVLVect3(DVLVect3(2, 3, 4));
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

}  // namespace