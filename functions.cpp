#include <iostream>
#include <string>
#include "headers.h"
using namespace std;

AString::AString()
{
StringValue = "";
}
AString::AString(string value)
{
StringValue = value;
}
string AString::getAString()
{
cout << "Enter string value: ";
getline(cin, StringValue);
return StringValue;
}
void AString::cleanUp()
{
string characters = "";
for(int m = 0; m < StringValue.size(); m++)
{
if (StringValue[m] >= 'A' && StringValue[m] <= 'Z')
{
characters += tolower(StringValue[m]);
}
else if (StringValue[m] >= 'a' && StringValue[m] <= 'z')
{
characters += StringValue[m];
}
}
StringValue = characters;
}
void AString::countLetters(int alphabet[26])
{
for (int n =0; n < 26; n++)
alphabet[n] = 0;
for (char p: StringValue)
alphabet[p-'a']++;
}
bool compareCounts(int ca1[26], int ca2[26])
{
for (int n = 0; n < 26; n++)
{
if (ca1[n] != ca2[n])
return true;
}
return false;
}