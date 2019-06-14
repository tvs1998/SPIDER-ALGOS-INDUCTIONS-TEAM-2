#include<stdio.h>
int main()
{
	char in[106];
	int num,i,out[500];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",&in);
		evalution(i,in,out);
	}
	for(i=0;i<num;i++)
	{
		printf("%d#\n",out[i]);
	}
}
evalution(int i,char in[],int out[])
{
	int j,k=0,l=0;
	if(in[0]=='<')
	{
	    for(j=0;in[j]!='0';j++)
	    {
		    if(k>=l)
			{
			      if(in[j]=='<')
	                       k++;
	                       if(in[j]=='>')
	                       l++;
			}    
	    }
		if(k==l)
		out[i]=k+l;
		if(k<l)
		out[i]=k+l-1;
		if(k>l)
		out[i]=0;
	}
	else
	{
		out[i]=0;
	}
}
