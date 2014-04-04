#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define INF 2000000000

class ConvertibleStrings {
public:
  int leastRemovals(string a, string b) {
    vector<string> V;

    vector<string> W;
    int f = 362880;
    string s = "ABCDEFGHI";
    for(int i=0; i<f; i++) {
      W.push_back(s);
      next_permutation(s.begin(), s.end());
    }

    int c = INF;

    for(int i=0; i<W.size(); i++) {
      string t = "";
      for(int j=0; j<a.length(); j++) {
	t += W[i][(a[j]-'A') % 9];
      }

      int cp = 0;
      for(int j=0; j<b.length(); j++) {
	if(t[j] != b[j])
	  cp++;
      }

      c = min(c, cp);
    }

    return c;
  }
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, string p0, string p1, bool hasAnswer, int p2) {
	cout << "Test " << testNum << ": [" << "\"" << p0 << "\"" << "," << "\"" << p1 << "\"";
	cout << "]" << endl;
	ConvertibleStrings *obj;
	int answer;
	obj = new ConvertibleStrings();
	clock_t startTime = clock();
	answer = obj->leastRemovals(p0, p1);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << p2 << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << answer << endl;
	if (hasAnswer) {
		res = answer == p2;
	}
	if (!res) {
		cout << "DOESN'T MATCH!!!!" << endl;
	} else if (double(endTime - startTime) / CLOCKS_PER_SEC >= 2) {
		cout << "FAIL the timeout" << endl;
		res = false;
	} else if (hasAnswer) {
		cout << "Match :-)" << endl;
	} else {
		cout << "OK, but is it right?" << endl;
	}
	cout << "" << endl;
	return res;
}
int main() {
	bool all_right;
	all_right = true;
	
	string p0;
	string p1;
	int p2;
	
	{
	// ----- test 0 -----
	p0 = "DD";
	p1 = "FF";
	p2 = 0;
	all_right = KawigiEdit_RunTest(0, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = "AAAA";
	p1 = "ABCD";
	p2 = 3;
	all_right = KawigiEdit_RunTest(1, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = "AAIAIA";
	p1 = "BCDBEE";
	p2 = 3;
	all_right = KawigiEdit_RunTest(2, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = "ABACDCECDCDAAABBFBEHBDFDDHHD";
	p1 = "GBGCDCECDCHAAIBBFHEBBDFHHHHE";
	p2 = 9;
	all_right = KawigiEdit_RunTest(3, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = "CADEFIECDHEDCDIDGFCAEFFBGIHIIHGIBIH";
	p1 = "DGBIHADCBDAHEBFGHFAHAIDCDACFAAADBEI";
	p2 = 22;
	all_right = KawigiEdit_RunTest(4, p0, p1, true, p2) && all_right;
	// ------------------
	}
	
	if (all_right) {
		cout << "You're a stud (at least on the example cases)!" << endl;
	} else {
		cout << "Some of the test cases had errors." << endl;
	}
	return 0;
}
// END KAWIGIEDIT TESTING
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!