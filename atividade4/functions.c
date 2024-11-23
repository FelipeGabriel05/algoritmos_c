int MDC(int x, int y) {
    int r;
    r = x % y;

    if (r == 0 ) {
        return y;
    }

    while(r != 0) {
        x = y;
        y = r;
        r = x % y;
    }
    return y;
}
