#ifndef __DUMMY_H_
#define __DUMMY_H_

//Includes
#include <stdlib.h>

//Tipos
typedef struct Dummy_Ctx Dummy_Ctx;

//Prototipos
Dummy_Ctx *dummy_ctx_alloc(void);

void dummy_ctx_free(Dummy_Ctx *ctx);

int dummy_ctx_start(Dummy_Ctx *ctx);

int dummy_ctx_set_val(Dummy_Ctx *ctx, int val);

int dummy_ctx_get_val(Dummy_Ctx *ctx, int *val);

#endif
