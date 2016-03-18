#include "dummy_priv.h"

Dummy_Ctx *dummy_ctx_alloc(void)
{
	Dummy_Ctx *ret_ctx = NULL;
	ret_ctx = calloc(1, sizeof(Dummy_Ctx));
	return ret_ctx;
}

void dummy_ctx_free(Dummy_Ctx *ctx)
{
	free(ctx);
}

int dummy_ctx_start(Dummy_Ctx *ctx)
{
	return 0;
}

int dummy_ctx_set_val(Dummy_Ctx *ctx, int val)
{
	ctx->val = val;
	return 0;
}

int dummy_ctx_get_val(Dummy_Ctx *ctx, int *val)
{
	*val = ctx->val;
	return 0;
}


