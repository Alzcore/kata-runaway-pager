#include <string>
#include <iostream>
#include <regex>
#include "KataRunawayPager.h"

string KataRunawayPager::EncodeMessage(string Message)
{
	if (Message.length() == 0) return "";

	Message = CleanMessage(Message);

	string EncodedMessage = "";
	char LastCharacter = Message[0];
	int CharacterCount = 1;

	for (int i = 1; i <= Message.length(); i++)
	{
		if (Message[i] == LastCharacter)
		{
			CharacterCount++;
		}
		else
		{
			EncodedMessage += LastCharacter;
			if (CharacterCount > 1) {
				EncodedMessage += std::to_string(CharacterCount);
			}
			LastCharacter = Message[i];
			CharacterCount = 1;
		}
	}

	return EncodedMessage;
}

string KataRunawayPager::CleanMessage(string Message)
{
	transform(Message.begin(), Message.end(), Message.begin(), ::toupper);
	return regex_replace(Message, regex("[^A-Z]"), "");
}