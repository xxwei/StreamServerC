#include <iostream>
#include <string>
#include <map>
#include <glog/logging.h>
#include <eXosip2/eXosip.h>
#include <time.h>
using namespace std;
int main(int argc, char const *argv[])
{
	
	cout<<"Hello Stream Server"<<endl;
	FLAGS_log_dir="./";
	google::InitGoogleLogging(argv[0]);
	struct eXosip_t  *context_eXosip=eXosip_malloc();
	int ret  = eXosip_init(context_eXosip);
	if(ret!=0)
	{
		cout<<"init eXosip error"<<endl;
		LOG(INFO)<<"init eXosip Error";
	}
	LOG(INFO)<<"Start StreamServer";
	timespec time1;
	clock_gettime(CLOCK_PROCESS_CPUTIME_ID,&time1);
	google::ShutdownGoogleLogging();
	return 0;
}
