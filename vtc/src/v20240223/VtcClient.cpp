/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/vtc/v20240223/VtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vtc::V20240223;
using namespace TencentCloud::Vtc::V20240223::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-02-23";
    const string ENDPOINT = "vtc.tencentcloudapi.com";
}

VtcClient::VtcClient(const Credential &credential, const string &region) :
    VtcClient(credential, region, ClientProfile())
{
}

VtcClient::VtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VtcClient::ConfirmVideoTranslateJobOutcome VtcClient::ConfirmVideoTranslateJob(const ConfirmVideoTranslateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmVideoTranslateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmVideoTranslateJobResponse rsp = ConfirmVideoTranslateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmVideoTranslateJobOutcome(rsp);
        else
            return ConfirmVideoTranslateJobOutcome(o.GetError());
    }
    else
    {
        return ConfirmVideoTranslateJobOutcome(outcome.GetError());
    }
}

void VtcClient::ConfirmVideoTranslateJobAsync(const ConfirmVideoTranslateJobRequest& request, const ConfirmVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfirmVideoTranslateJobRequest&;
    using Resp = ConfirmVideoTranslateJobResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmVideoTranslateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VtcClient::ConfirmVideoTranslateJobOutcomeCallable VtcClient::ConfirmVideoTranslateJobCallable(const ConfirmVideoTranslateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmVideoTranslateJobOutcome>>();
    ConfirmVideoTranslateJobAsync(
    request,
    [prom](
        const VtcClient*,
        const ConfirmVideoTranslateJobRequest&,
        ConfirmVideoTranslateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VtcClient::DescribeVideoTranslateJobOutcome VtcClient::DescribeVideoTranslateJob(const DescribeVideoTranslateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoTranslateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoTranslateJobResponse rsp = DescribeVideoTranslateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoTranslateJobOutcome(rsp);
        else
            return DescribeVideoTranslateJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoTranslateJobOutcome(outcome.GetError());
    }
}

void VtcClient::DescribeVideoTranslateJobAsync(const DescribeVideoTranslateJobRequest& request, const DescribeVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoTranslateJobRequest&;
    using Resp = DescribeVideoTranslateJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoTranslateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VtcClient::DescribeVideoTranslateJobOutcomeCallable VtcClient::DescribeVideoTranslateJobCallable(const DescribeVideoTranslateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoTranslateJobOutcome>>();
    DescribeVideoTranslateJobAsync(
    request,
    [prom](
        const VtcClient*,
        const DescribeVideoTranslateJobRequest&,
        DescribeVideoTranslateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VtcClient::SubmitVideoTranslateJobOutcome VtcClient::SubmitVideoTranslateJob(const SubmitVideoTranslateJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoTranslateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoTranslateJobResponse rsp = SubmitVideoTranslateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoTranslateJobOutcome(rsp);
        else
            return SubmitVideoTranslateJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoTranslateJobOutcome(outcome.GetError());
    }
}

void VtcClient::SubmitVideoTranslateJobAsync(const SubmitVideoTranslateJobRequest& request, const SubmitVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoTranslateJobRequest&;
    using Resp = SubmitVideoTranslateJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoTranslateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VtcClient::SubmitVideoTranslateJobOutcomeCallable VtcClient::SubmitVideoTranslateJobCallable(const SubmitVideoTranslateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoTranslateJobOutcome>>();
    SubmitVideoTranslateJobAsync(
    request,
    [prom](
        const VtcClient*,
        const SubmitVideoTranslateJobRequest&,
        SubmitVideoTranslateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

