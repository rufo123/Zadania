#include "Text.h"

Text::Text(string pText)
{
	if (pText.size() <= 50) {
	
		aText = pText;
	
	}
	else {
		throw invalid_argument("Prekrocil si maximalnu dlzku slova, MAX 50");
	}
	
}

string Text::getSlovo()
{
	return aText;
}
