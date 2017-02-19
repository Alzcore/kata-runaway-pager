#pragma once
#include <string>
using namespace std;

class KataRunawayPager {
public:

	static string EncodeMessage(string InMessage);

protected:

	static string CleanMessage(string Message);
};
