#ifndef _BSN_CLIENT_
#define _BSN_CLIENT_

int bsn_init(char *config);
int bsn_halt();
int bsn_state1(float*,float*,float*);
//int bsn_state2(float*, float*, float*);
int bsn_set_center1();
//int bsn_set_center2();

int bsn_start_stream();
int bsn_stream_id();
int bsn_stop_stream();

// -- added
int classify_EAR_state(float xp, float yp, float zp);

// -- added
enum EAR_state { EAR_NEUTRAL, EAR_LEFT, EAR_RIGHT, EAR_UP, EAR_DOWN };


#endif
