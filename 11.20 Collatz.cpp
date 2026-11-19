# include<stdio.h>
int main()
{
	long long i=0;
	scanf("%lld",&i);
	while(i!=1){
		if(i%2==0){
		printf("%lld/2=%lld\n",i,i/2);
		i/=2;
		}else{
			printf("%lld*3+1=%lld\n",i,i*3+1);
			i=i*3+1;
		}
	}
	return 0;
} 
