class WordDictionary {
public:

	// Adds a word into the data structure.
	void addWord(string word) {
		int str_len = word.length();
		map<int, vector<string>>::iterator strmap_iterator = strmap.find(str_len);
		vector<string> strv;
		if (strmap_iterator != strmap.end())
		{
            strmap_iterator->second.push_back(word);
		}
		else
		{
			strv.push_back(word);
			strmap.insert(pair<int, vector<string>>(str_len, strv));
		}
	}

	// Returns if the word is in the data structure. A word could
	// contain the dot character '.' to represent any one letter.
	bool search(string word) {
		int str_len = word.length();
		map<int, vector<string>>::iterator strmap_iterator = strmap.find(str_len);
		vector<string> strv;
		if (strmap_iterator != strmap.end())
		{
			strv = strmap_iterator->second;
			vector<string>::iterator strv_iterator = strv.begin();
			for (; strv_iterator != strv.end(); strv_iterator++)
			{
				string str = *strv_iterator;
				if (isStrEqual(str, word))
				{
					return true;
				}
			}
			return false;
		}
		else
		{
			return false;
		}
	}
private:
	bool isStrEqual(const string &str, const string &word)
	{
		const char *ch_str = str.c_str();
		const char *ch_word = word.c_str();

		bool result = false;
		for (int i = 0; i < str.length(); i++)
		{
			if (ch_word[i] == '.')
			{
				result = true;
				continue;
			}
			else
			{
				if (ch_word[i] == ch_str[i])
				{
					result = true;
				}
				else
				{
					return false;
				}
			}
		}
		return result;
	}
private:
	map<int, vector<string>> strmap;//core data structure: map with string length as key.
};