/* 你的代码将被嵌在这里 */
int sign(int x) {
    int ret;
    if (x > 0)
        ret = 1;
    else if (0 == x)
        ret = 0;
    else
        ret = -1;

    return ret;
}