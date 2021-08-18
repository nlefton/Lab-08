#include <iostream>
#include <string>
using namespace std;

#pragma once
class AString 
{
public:
AString();
AString(string value);
string getAString();
void cleanUp();
void countLetters(int alphabet[26]);
private:
string StringValue;
};
bool compareCounts(int ca1[26], int ca2[26]);


