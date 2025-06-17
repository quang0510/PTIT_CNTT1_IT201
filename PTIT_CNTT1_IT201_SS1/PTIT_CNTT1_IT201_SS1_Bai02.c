

    void printDouble(int n) {
        int i = 1;
        while (i < n) {
            printf("%d\n" , i);
            i *= 2;
        }
    }

// Vi bien i tang theo cap so nhan (i *= 2)
// i = 1 → 2 → 4 → 8 → ... → 2^k < n
// 2^k ≥ n ⇒ k ≥ log2(n)

// do phuc tap thoi gian O log (n)

