#include <iostream>
#include <string>
#include <map>
#include <eXosip2/eXosip.h>
#include <time.h>
using namespace std;
int main(int argc, char const *argv[])
{
	struct eXosip_t *context_eXosip;
	cout<<"Hello Stream Server"<<endl;
	int ret  = eXosip_init(context_eXosip);
	if(ret!=0)
	{
		cout<<"inti eXosip error"<<endl;
	}
	timespec time1;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&time1);
	
	return 0;
}
