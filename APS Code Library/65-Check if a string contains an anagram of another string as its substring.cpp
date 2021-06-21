#include <bits/stdc++.h>
using namespace std;


bool checkAnagram(string s1, string s2)
{
	// Stores frequencies of
	// characters in substrings of s2
	vector<int> s2hash(26, 0);

	// Stores frequencies of
	// characters in s1
	vector<int> s1hash(26, 0);
	int s1len = s1.size();
	int s2len = s2.size();

	// If length of s2 exceeds length of s1
	if (s1len > s2len)
		return false;

	int left = 0, right = 0;

	// Store frequencies of characters in first
	// substring of length s1len in string s2
	while (right < s1len) {

		s1hash[s1[right] - 'a'] += 1;
		s2hash[s2[right] - 'a'] += 1;
		right++;
	}

	right -= 1;

	// Perform Sliding Window technique
	while (right < s2len) {

		// If hashmaps are found to be
		// identical for any substring
		if (s1hash == s2hash)
			return true;

		right++;

		if (right != s2len)
			s2hash[s2[right] - 'a'] += 1;

		s2hash[s2[left] - 'a'] -= 1;
		left++;
	}
	return false;
}


int main()
{
	string s1 = "ab";
	string s2 = "bbpobac";

	if (checkAnagram(s1, s2))
		cout << "YES\n";
	else
		cout << "No\n";

	return 0;
}
