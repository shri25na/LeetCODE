bool isPalindrome(int x) {
    int c=x;
    long long rev=0;
    int r=0;
    while(c>0){
        r=c%10;
        rev=rev*10+r;
        c=c/10;
    }
    if (rev==x)
        return 1;
    else
        return 0;    
}
