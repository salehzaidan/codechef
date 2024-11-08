#include <bits/stdc++.h>

#ifdef LOCAL
#include <gtest/gtest.h>
#endif

using namespace std;

string solve(int x) {
  if (x >= 12) {
    return "YES";
  }
  return "NO";
}

int main(int argc, char *argv[]) {
#ifdef LOCAL
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#endif

  int x;
  cin >> x;
  string result = solve(x);
  cout << result;

  return 0;
}

#ifdef LOCAL
TEST(SolutionTest, TestCase1) {
  int x = 3;

  string actual = solve(x);
  string expected = "NO";

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase2) {
  int x = 17;

  string actual = solve(x);
  string expected = "YES";

  EXPECT_EQ(actual, expected);
}
#endif