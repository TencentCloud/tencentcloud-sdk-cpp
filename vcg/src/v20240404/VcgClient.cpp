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

#include <tencentcloud/vcg/v20240404/VcgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vcg::V20240404;
using namespace TencentCloud::Vcg::V20240404::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-04-04";
    const string ENDPOINT = "vcg.tencentcloudapi.com";
}

VcgClient::VcgClient(const Credential &credential, const string &region) :
    VcgClient(credential, region, ClientProfile())
{
}

VcgClient::VcgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VcgClient::DescribeVideoStylizationJobOutcome VcgClient::DescribeVideoStylizationJob(const DescribeVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoStylizationJobResponse rsp = DescribeVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoStylizationJobOutcome(rsp);
        else
            return DescribeVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VcgClient::DescribeVideoStylizationJobAsync(const DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoStylizationJobRequest&;
    using Resp = DescribeVideoStylizationJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoStylizationJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcgClient::DescribeVideoStylizationJobOutcomeCallable VcgClient::DescribeVideoStylizationJobCallable(const DescribeVideoStylizationJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoStylizationJobOutcome>>();
    DescribeVideoStylizationJobAsync(
    request,
    [prom](
        const VcgClient*,
        const DescribeVideoStylizationJobRequest&,
        DescribeVideoStylizationJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VcgClient::SubmitVideoStylizationJobOutcome VcgClient::SubmitVideoStylizationJob(const SubmitVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoStylizationJobResponse rsp = SubmitVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoStylizationJobOutcome(rsp);
        else
            return SubmitVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VcgClient::SubmitVideoStylizationJobAsync(const SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitVideoStylizationJobRequest&;
    using Resp = SubmitVideoStylizationJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitVideoStylizationJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VcgClient::SubmitVideoStylizationJobOutcomeCallable VcgClient::SubmitVideoStylizationJobCallable(const SubmitVideoStylizationJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitVideoStylizationJobOutcome>>();
    SubmitVideoStylizationJobAsync(
    request,
    [prom](
        const VcgClient*,
        const SubmitVideoStylizationJobRequest&,
        SubmitVideoStylizationJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

