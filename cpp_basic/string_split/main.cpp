#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

void split(const string& s, vector<string>& tokens, const string& delimiters = " ")
{
	string::size_type lastPos = s.find_first_not_of(delimiters, 0);
	string::size_type pos = s.find_first_of(delimiters, lastPos);
	while (string::npos != pos || string::npos != lastPos)
	{
		tokens.push_back(s.substr(lastPos, pos - lastPos));
		lastPos = s.find_first_not_of(delimiters, pos);
		pos = s.find_first_of(delimiters, lastPos);
	}
}


int main(int argc, char** argv) {
	string s1="7,0,89 8,0,90 8,0,91 2,0,92 8,0,93 " ;
	
	// first split by " "
	vector<string> tokens_ciphers;
	split(s1, tokens_ciphers, " ");
	
	//---test_start---
	cout<<"tokens_1.size="<<tokens_ciphers.size()<<endl;
	for(int i=0;i<tokens_ciphers.size();i++)
	{
		cout<<tokens_ciphers[i]<<",size="<<tokens_ciphers[i].size()<<endl;
	}
	//---test_end---
	
	
	// second split by ,
	vector< vector<int> > cipher_code_list;
	for(int i=0;i<tokens_ciphers.size();i++)
	{
		vector<string> tokens_cipher_num_str_list;
		split(tokens_ciphers[i], tokens_cipher_num_str_list, ",");
		if(tokens_cipher_num_str_list.size()==3)
		{
			vector<int> tmp;
			int cipher1,cipher2,cipher3;
			istringstream ( tokens_cipher_num_str_list[0] ) >> cipher1;
			istringstream ( tokens_cipher_num_str_list[1] ) >> cipher2;
			istringstream ( tokens_cipher_num_str_list[2] ) >> cipher3;
			tmp.push_back(cipher1);
			tmp.push_back(cipher2);
			tmp.push_back(cipher3);
			cipher_code_list.push_back(tmp);
		}
	}
	//----test_start----
	for(int i=0;i<cipher_code_list.size();i++)
	{
		cout<<cipher_code_list[i][0]<<","<<cipher_code_list[i][1]<<","<<cipher_code_list[i][2]<<endl;
	}
	//----test_end---- 
	
	return 0;
}
