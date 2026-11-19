# include<stdio.h>
int main()
{
	long long i=0;
	scanf("%lld",&i);
	while(i!=1){
		if(i%2==0){
			i/=2;
			printf("%lld\n",i);
		}else{
			i=i*3+1;
			printf("%lld\n",i);
		}
	}
	return 0;
}
