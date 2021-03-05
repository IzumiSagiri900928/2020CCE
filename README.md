# 2020CCE

## 第一個找零錢

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d=50*%d+5*%d+1*%d\n",n,n/50,n%50/5,n%5/1);
}
```
## 第二個因數個數

```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(n%i==0)
			ans=ans+1;
		}
	printf("%d\n",ans);	
}

```
## 第三個找倍數
```C
#include <stdio.h>
int main()
{
	int a[1000],ans=0;
	
	
	for(int i=1;i<=10;i++){
		scanf("%d",&a[i]);
		if(a[i]%3==0)
			ans+=1;
	}
	printf("%d\n",ans);
}
```
## 第四個整數轉換為等級
```C
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=90){
        printf("A");
    }
    else if (n<90 && n>=80){
        printf("B");
    }
    else if (n<80 && n>=60){
        printf("C");
    }
    else printf("F");
}
```
## 第五個分式化簡
```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
		
	for(int i=1;i<=b;i++){
		if(a%i==0 && b%i==0){
			c=i;
	 	}
	 }
	printf("%d %d\n",a/c,b/c);

}
```
## 第六個讀入整數反序列印
```C
#include <stdio.h>
int main()
{
	int a[1000];
	int k;
	for(int i=0;i<=10;i++){
		scanf("%d",&a[i]);
		if(a[i]==0) break;
		k=i;
			
	}	
	for(int i=k-1;i>=0;i--){
		printf("%d ",a[i]);
	}		
	printf("\n");
}
```
## 第七個A的B次方函數
```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
		ans=ans*a;
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```
## 第八個漸增數列相加
```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		ans=ans+(i-1)*i;
	}	
	printf("%d\n",ans);

}
```


