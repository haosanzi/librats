/* Copyright (c) 2022 Hygon Corporation
 * Copyright (c) 2020-2022 Alibaba Cloud
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <librats/log.h>
#include <librats/verifier.h>

static unsigned int dummy_private;

rats_verifier_err_t csv_verifier_init(rats_verifier_ctx_t *ctx)
{
	RTLS_DEBUG("ctx %p\n", ctx);

	ctx->verifier_private = &dummy_private;

	return RATS_VERIFIER_ERR_NONE;
}
