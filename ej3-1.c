/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
	int low, high, mid;
	low = 0;
	high = n - 1;
	mid = (low+high)/2;
	while (low <= high && x != v[mid]) {
		
		if (x < v[mid])
			high = mid-1;
		else
			low = mid +1;
		mid = (low + high) / 2;
			return mid;
	}
	if(x == v[mid])
		return mid;
	else
		return -1;
	/* no match */
}

int main(){
	int valores[] = {0,1,2,3,4,5,6,7,8,9};
	printf("%d\n",binsearch(7,valores,10));
	
}
