#include<stdio.h>
void maxheapify(int arr[],int i,int n)
{
	int largest;
	int temp;
	int l=2*i,r=2*i+1;
	if(l<=n && arr[l]>arr[i])
	   largest=l;
	else
	   largest=i;
	if(r<=n && arr[r]>arr[largest])
	   largest=r;
	if(largest!=i)
	{    
	   temp=arr[i];
	   arr[i]=arr[largest];
	   arr[largest]=temp;
	   maxheapify(arr,largest,n);
    }
}
void buildmaxheap(int arr[],int n)
{
	int i;
	for(i=n/2;i>=1;i--)
	{
        maxheapify(arr,i,n);
	}
		for(i=1;i<=n;i++)
	      printf("%d\n",arr[i]);
}
void heapsort(int arr[],int n)
{
	int i,temp,j=n;
	buildmaxheap(arr,n);
	for(i=1;i<=n;i++)
	{
	  temp=arr[1];
	  arr[1]=arr[j];
	  
	  arr[j]=temp;
	  j--;
	  maxheapify(arr,1,j);
	}
	
}
int main()
{
	int arr[20],i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	   arr[i]=n-i;
	   	for(i=1;i<=n;i++)
        printf("%d\n",arr[i]);
	heapsort(arr,n);
	for(i=1;i<=n;i++)
	  printf("%d\n",arr[i]);
	  return 0;
}

