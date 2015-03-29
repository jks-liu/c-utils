#ifndef JKS_C_UTILS_H_
#define JKS_C_UTILS_H_

/* `J` is the enamespace which is short for 'JKS'. */

#ifdef __cplusplus
extern "C" { /* } */
#endif



#define J_CONCATENATE_(x, y) x##y
#define J_CONCATENATE(x, y) CONCATENATE_(x, y)

#define J_STRING_(x) #x
#define J_STRING(x) J_STRING_(x)

#define J_BIT0 0x01


#ifdef __cplusplus
/* { */ }
#endif

#endif /* C_UTILS_H_ */
