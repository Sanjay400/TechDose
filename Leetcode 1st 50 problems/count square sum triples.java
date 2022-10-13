class Solution {
    public int countTriples(int n) {
        int res = 0;
        for (int i = n; i >= 5; i--) {
            for (int j = i - 1; j > (int) Math.sqrt(i * i / 2.0); j--) {
                int temp = (int) Math.sqrt(i * i - j * j);
                if (temp * temp + j * j == i * i) {
                    res += 2;
                }
            }
        }

        return res;
    }
}
