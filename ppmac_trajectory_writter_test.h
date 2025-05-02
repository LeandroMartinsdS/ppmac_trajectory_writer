#ifndef TRAJ_WRITTER_H
#define TRAJ_WRITTER_H

#define TEST_ENV

#ifdef TEST_ENV
    #include "Libraries/ppmac_tcp/ppmac_tcp.h"
    #include "Libraries/ppmac_ushm_buffer/ppmac_ushm_buffer.h"

#else
    #define RUN_AS_RT_APP

    #include "../../Libraries/ppmac_tcp/ppmac_tcp.h"
    #include "../../Libraries/ppmac_ushm_buffer/ppmac_ushm_buffer.h"

    #endif // TEST_ENV
    int serverSock;

#endif // TRAJ_WRITTER_H

