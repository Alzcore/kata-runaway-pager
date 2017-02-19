#include <iostream>
#include <string>
#include <algorithm>
#include "KataRunawayPager.h"

string KataRunawayPager::EncodeMessage(string InMessage)
{
	InMessage.erase(std::remove(InMessage.begin(), InMessage.end(), ' '), InMessage.end());
	return InMessage;
}
