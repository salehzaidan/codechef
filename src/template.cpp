#include <bits/stdc++.h>

#ifdef LOCAL
#include <gtest/gtest.h>
#endif

using namespace std;

int solve(int a, int b) { return a + b; }

int main(int argc, char *argv[]) {
#ifdef LOCAL
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
#endif

  int a, b;
  cin >> a >> b;
  int result = solve(a, b);
  cout << result;

  return 0;
}

#ifdef LOCAL
TEST(SolutionTest, TestCase1) {
  int a = 1;
  int b = 2;

  int actual = solve(a, b);
  int expected = 3;

  EXPECT_EQ(actual, expected);
}
#endif