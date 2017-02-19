#include "gtest/gtest.h"
#include <string>
#include "KataRunawayPager.h"

using namespace std;

TEST(EncodeMessageTest, ItShouldRemoveSpaces)
{
	string result = KataRunawayPager::EncodeMessage("C A T");
	EXPECT_EQ(result, "CAT");
}

TEST(EncodeMessageTest, ItShouldOnlyContainLetters)
{
	string result = KataRunawayPager::EncodeMessage("123A2&%',");
	EXPECT_EQ(result, "A");
}

TEST(EncodeMessageTest, ItShouldCapitalizeAllLetters)
{
	string result = KataRunawayPager::EncodeMessage("sAnDwHiCh");
	EXPECT_EQ(result, "SANDWHICH");
}
