#include <stdio.h>

#include "dummy.h"

#define TEST_VAL (10)

int main(void)
{
	Dummy_Ctx *dummy_ctx = NULL;
	int test_var = 0;

	dummy_ctx = dummy_ctx_alloc();
	if(!dummy_ctx) 
		return -1;

	if(dummy_ctx_set_val(dummy_ctx, TEST_VAL)) {
		goto _exit_error;
	}

	if(dummy_ctx_get_val(dummy_ctx, &test_var)) {
		goto _exit_error;
	}

	if(test_var != TEST_VAL) {
		fprintf(stderr, "Hubo un error! test_var %d != TEST_VAL %d\n", test_var, TEST_VAL);
		goto _exit_error;
	}

	dummy_ctx_free(dummy_ctx);
	return 0;

_exit_error:
	dummy_ctx_free(dummy_ctx);
	return -1;
}
