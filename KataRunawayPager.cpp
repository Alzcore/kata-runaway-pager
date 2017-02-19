#include <string>
#include <iostream>
#include <regex>
#include "KataRunawayPager.h"

string KataRunawayPager::EncodeMessage(string InMessage)
{
	return CleanMessage(InMessage);
}

string KataRunawayPager::CleanMessage(string Message)
{
	transform(Message.begin(), Message.end(), Message.begin(), ::toupper);
	return regex_replace(Message, regex("[^A-Z]"), "");
}