#include "gtest/gtest.h"
#include "KataRunawayPager.h"

TEST(EncodeMessageTest, ItShouldReturnAString)
{
	const char* result = KataRunawayPager::EncodeMessage("message");
	EXPECT_EQ(result, "message");
}

TEST(EncodeMessageTest, ItShouldRemoveSpaces)
{
	const char* result = KataRunawayPager::EncodeMessage("C A T");
	EXPECT_EQ(result, "CAT");
}
