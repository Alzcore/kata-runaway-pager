#include "gtest/gtest.h"
#include <string>
#include "KataRunawayPager.h"

using namespace std;

TEST(EncodeMessageTest, ItShouldReturnAString)
{
	string result = KataRunawayPager::EncodeMessage("message");
	EXPECT_EQ(result, "message");
}

TEST(EncodeMessageTest, ItShouldRemoveSpaces)
{
	string result = KataRunawayPager::EncodeMessage("C A T");
	EXPECT_EQ(result, "CAT");
}
