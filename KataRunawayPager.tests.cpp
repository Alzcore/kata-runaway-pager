#include "gtest/gtest.h"
#include "KataRunawayPager.h"

namespace {

class EncodeMessageTest : public ::testing::Test {
protected:
	virtual void SetUp() {
		result = KataRunawayPager::EncodeMessage("message");
	}

	const char* result;
};

TEST_F(EncodeMessageTest, ItShouldReturnAString)
{
	EXPECT_EQ(result, "message");
}

}
