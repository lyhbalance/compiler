int f(int n){
	int temp;
    if(n == 1)
        return n;
    else{
    	temp = f(n-1) + 2 * n;
		return temp;
    }
}

int main()
{
	int n = read();
    int result = f(n);
	print(result);
    return 0;
}