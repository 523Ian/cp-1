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

typedef long long ll;

class LongLongTripDiv2 {
public:

  ll a, b, c;
  bool sw;

  void bs(ll lo, ll hi) {
    ll m = (hi+lo) / 2;

    if(lo == hi || m == lo) {
      if(m * c + (b-m) != a) {
	sw = false;
      }
      return;
    }

    if(m * c + (b-m) > a)
      bs(lo, m);
    else if(m * c + (b-m) < a)
      bs(m, hi);
  }

  string isAble(long long x, int y, int z) {
    sw = true;
    a = x, b = y, c = z;

    bs(0, y+1);

    if(sw)
      return "Possible";
    else
      return "Impossible";
  }
};


// BEGIN KAWIGIEDIT TESTING
// Generated by KawigiEdit 2.1.4 (beta) modified by pivanof
bool KawigiEdit_RunTest(int testNum, long long p0, int p1, int p2, bool hasAnswer, string p3) {
	cout << "Test " << testNum << ": [" << p0 << "," << p1 << "," << p2;
	cout << "]" << endl;
	LongLongTripDiv2 *obj;
	string answer;
	obj = new LongLongTripDiv2();
	clock_t startTime = clock();
	answer = obj->isAble(p0, p1, p2);
	clock_t endTime = clock();
	delete obj;
	bool res;
	res = true;
	cout << "Time: " << double(endTime - startTime) / CLOCKS_PER_SEC << " seconds" << endl;
	if (hasAnswer) {
		cout << "Desired answer:" << endl;
		cout << "\t" << "\"" << p3 << "\"" << endl;
	}
	cout << "Your answer:" << endl;
	cout << "\t" << "\"" << answer << "\"" << endl;
	if (hasAnswer) {
		res = answer == p3;
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
	
	long long p0;
	int p1;
	int p2;
	string p3;
	
	{
	// ----- test 0 -----
	p0 = 10ll;
	p1 = 6;
	p2 = 3;
	p3 = "Possible";
	all_right = KawigiEdit_RunTest(0, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 1 -----
	p0 = 10ll;
	p1 = 5;
	p2 = 3;
	p3 = "Impossible";
	all_right = KawigiEdit_RunTest(1, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 2 -----
	p0 = 50ll;
	p1 = 100;
	p2 = 2;
	p3 = "Impossible";
	all_right = KawigiEdit_RunTest(2, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 3 -----
	p0 = 120ll;
	p1 = 10;
	p2 = 11;
	p3 = "Impossible";
	all_right = KawigiEdit_RunTest(3, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 4 -----
	p0 = 10ll;
	p1 = 10;
	p2 = 9999;
	p3 = "Possible";
	all_right = KawigiEdit_RunTest(4, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 5 -----
	p0 = 1000ll;
	p1 = 100;
	p2 = 10;
	p3 = "Possible";
	all_right = KawigiEdit_RunTest(5, p0, p1, p2, true, p3) && all_right;
	// ------------------
	}
	
	{
	// ----- test 6 -----
	p0 = 1000010000100001ll;
	p1 = 1100011;
	p2 = 1000000000;
	p3 = "Possible";
	all_right = KawigiEdit_RunTest(6, p0, p1, p2, true, p3) && all_right;
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
