#include <bits/stdc++.h>

#ifdef LOCAL
#include <gtest/gtest.h>
#endif

using namespace std;

string solve(int a, int b, int c) {
  if ((a + b) / 2.0 > c) {
    return "YES";
  }
  return "NO";
}

int main(int argc, char *argv[]) {
#ifdef LOCAL
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#endif

  int t;
  cin >> t;
  while (t-- > 0) {
    int a, b, c;
    cin >> a >> b >> c;
    string result = solve(a, b, c);
    cout << result << '\n';
  }

  return 0;
}

#ifdef LOCAL
TEST(SolutionTest, TestCase1) {
  int a = 5;
  int b = 9;
  int c = 6;

  string actual = solve(a, b, c);
  string expected = "YES";

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase0) {
  int a = 5;
  int b = 8;
  int c = 6;

  string actual = solve(a, b, c);
  string expected = "YES";

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase3) {
  int a = 5;
  int b = 7;
  int c = 6;

  string actual = solve(a, b, c);
  string expected = "NO";

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase4) {
  int a = 4;
  int b = 9;
  int c = 8;

  string actual = solve(a, b, c);
  string expected = "NO";

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase5) {
  int a = 3;
  int b = 7;
  int c = 2;

  string actual = solve(a, b, c);
  string expected = "YES";

  EXPECT_EQ(actual, expected);
}
#endif