#include <iostream>
#include <string>
#include <map>
#include <eXosip2/eXosip.h>
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
	return 0;
}
