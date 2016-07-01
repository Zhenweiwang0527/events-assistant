#include<iostream>
using namespace std;

int main(int argc, char*argv[])
{
	system(R"(curl https://zhenwei.zendesk.com/api/v2/tickets.json -v -u charleswang0527@gmail.com:yp10889900 GET)");
	return 0;
}