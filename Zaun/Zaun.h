#ifndef ZAUN_H_INCLUDED
#define ZAUN_H_INCLUDED

#endif // ZAUN_H_INCLUDED

#include<winsock.h>
#include<vector>
#include<map>
#include "zaun_structs.h"
class Zaun
{
    ZaunParams zaun_params;
    public:
    Zaun(char *zion_addr,int zion_addr_len)
    {
        memset(&zaun_params,0,sizeof(zaun_params));
        memcpy(zaun_params.zion_addr,zion_addr,zion_addr_len);
        cout<<endl<<"\t\tObtaining port to: "<<zaun_params.zion_addr<<"\t--|__"<<endl;

    }

    void findSt()
    {

    }
};
