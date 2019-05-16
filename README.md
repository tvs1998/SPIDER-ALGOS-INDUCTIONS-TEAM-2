# SPIDER-ALGOS-INDUCTIONS-TEAM-2
The Repo for task submission

Task_v2.0(Group Activity): http://www.github.com/ ---- Clone/Fork a common github repo to your local system The basic idea of this task is to understand how collaborated projects work on github .

Terminal: After cloning the repo you’ll be given a particular algorithm to implement in your favourite programming language Code the algorithm and then push the file to the repository. After pushing the code, finally put a pull request. Your pull request will then be reviewed by the collaborator. If everything is fine and your mentor is convinced and contented your request will be approved. Finally, you are now a contributor and you’ve conquered the BATTLEGROUND. Congrats you are now a git enlightened !!!

The algorithm to be implemented is Modular Exponentiation. Read about it, if you guys don't know it. It's a really simple implementation and optimising algorithm, which would be essential in many competitive contests!

Pull requests will be verified and accepted by Shashvat or me.

Have fun and happy coding !!!

hi!i am mudunuri sri krishna
this is my code in c-programming for modular exponentiation

#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("enter base power mod");
	scanf("%d %d %d",&a,&b,&c);
	e=1;
	d=a;
	while(b>0)
	{
	   	if(b%2!=0)
	   	{   
            e=mod(d,c)*e;
     	}
		d=mod(d,c)*mod(d,c);
		d=mod(d,c);
		b=b/2;
	}
	e=mod(e,c);
	printf("final value is %d",e);
}
int mod(int d,int c)
{   
	d=d%c;
	return d;
}
