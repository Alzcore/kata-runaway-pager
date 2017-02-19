#include <string>
#include <iostream>
#include <regex>
#include "KataRunawayPager.h"

string KataRunawayPager::EncodeMessage(string InMessage)
{
	return regex_replace(InMessage, regex("[^A-Za-z]"), "");
}
