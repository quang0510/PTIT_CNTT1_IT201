// cách 1 : dung vong lap for

int n ;
int sum;

for (int i = 0 ; i < n ; i ++) {
    sum += i ;
}

// do phuc tap khong gian la O(1)


// cách 2 : dung cong thuc tinh tong toan hoc

     sum = n * (n + 1) / 2;

// do phuc tap khong gian la O(1)