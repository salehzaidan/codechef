#include <bits/stdc++.h>

#ifdef LOCAL
#include <gtest/gtest.h>
#endif

using namespace std;

int solve(int n, int x) {
  const int size = 6;
  return ((n + size - 1) / size) * x;
}

int main(int argc, char *argv[]) {
#ifdef LOCAL
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#endif

  int t;
  cin >> t;
  while (t-- > 0) {
    int n, x;
    cin >> n >> x;
    int result = solve(n, x);
    cout << result << '\n';
  }

  return 0;
}

#ifdef LOCAL
TEST(SolutionTest, TestCase1) {
  int n = 1;
  int x = 100;

  int actual = solve(n, x);
  int expected = 100;

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase2) {
  int n = 12;
  int x = 250;

  int actual = solve(n, x);
  int expected = 500;

  EXPECT_EQ(actual, expected);
}

TEST(SolutionTest, TestCase3) {
  int n = 16;
  int x = 135;

  int actual = solve(n, x);
  int expected = 405;

  EXPECT_EQ(actual, expected);
}
#endif