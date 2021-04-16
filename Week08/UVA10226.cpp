#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][35];
int compare(const void*p1,const void*p2)
{
	return strcmp( (char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	int N=0;
	for(int i=0;    ;i++){
		char*now=gets(tree[i]);
		if(now==NULL){
			N=i;
			break;
		
		}
		if(strcmp(tree[i],"")==0){
			N=i;
			break;
		
		}
	}
	qsort( tree, N,35,compare);
	int ans=1;
	printf("%s ",tree[0]);
	for(int i=0;i<N-1;i++){
		if(strcmp(tree[i], tree[i+1])!=0){
			printf("%.4f\n",100*ans/(float)N);
			printf("%s ",tree[i+1]);
			ans=1;
		}else ans++;

	}
	printf("%.4f\n",100*ans/(float)N);

}
