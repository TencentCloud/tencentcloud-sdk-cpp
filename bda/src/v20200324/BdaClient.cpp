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

#include <tencentcloud/bda/v20200324/BdaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bda::V20200324;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-24";
    const string ENDPOINT = "bda.tencentcloudapi.com";
}

BdaClient::BdaClient(const Credential &credential, const string &region) :
    BdaClient(credential, region, ClientProfile())
{
}

BdaClient::BdaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BdaClient::CreateSegmentationTaskOutcome BdaClient::CreateSegmentationTask(const CreateSegmentationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSegmentationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSegmentationTaskResponse rsp = CreateSegmentationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSegmentationTaskOutcome(rsp);
        else
            return CreateSegmentationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSegmentationTaskOutcome(outcome.GetError());
    }
}

void BdaClient::CreateSegmentationTaskAsync(const CreateSegmentationTaskRequest& request, const CreateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSegmentationTaskRequest&;
    using Resp = CreateSegmentationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSegmentationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdaClient::CreateSegmentationTaskOutcomeCallable BdaClient::CreateSegmentationTaskCallable(const CreateSegmentationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSegmentationTaskOutcome>>();
    CreateSegmentationTaskAsync(
    request,
    [prom](
        const BdaClient*,
        const CreateSegmentationTaskRequest&,
        CreateSegmentationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdaClient::DescribeSegmentationTaskOutcome BdaClient::DescribeSegmentationTask(const DescribeSegmentationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSegmentationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSegmentationTaskResponse rsp = DescribeSegmentationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSegmentationTaskOutcome(rsp);
        else
            return DescribeSegmentationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSegmentationTaskOutcome(outcome.GetError());
    }
}

void BdaClient::DescribeSegmentationTaskAsync(const DescribeSegmentationTaskRequest& request, const DescribeSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSegmentationTaskRequest&;
    using Resp = DescribeSegmentationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSegmentationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdaClient::DescribeSegmentationTaskOutcomeCallable BdaClient::DescribeSegmentationTaskCallable(const DescribeSegmentationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSegmentationTaskOutcome>>();
    DescribeSegmentationTaskAsync(
    request,
    [prom](
        const BdaClient*,
        const DescribeSegmentationTaskRequest&,
        DescribeSegmentationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdaClient::SegmentCustomizedPortraitPicOutcome BdaClient::SegmentCustomizedPortraitPic(const SegmentCustomizedPortraitPicRequest &request)
{
    auto outcome = MakeRequest(request, "SegmentCustomizedPortraitPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SegmentCustomizedPortraitPicResponse rsp = SegmentCustomizedPortraitPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SegmentCustomizedPortraitPicOutcome(rsp);
        else
            return SegmentCustomizedPortraitPicOutcome(o.GetError());
    }
    else
    {
        return SegmentCustomizedPortraitPicOutcome(outcome.GetError());
    }
}

void BdaClient::SegmentCustomizedPortraitPicAsync(const SegmentCustomizedPortraitPicRequest& request, const SegmentCustomizedPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SegmentCustomizedPortraitPicRequest&;
    using Resp = SegmentCustomizedPortraitPicResponse;

    DoRequestAsync<Req, Resp>(
        "SegmentCustomizedPortraitPic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdaClient::SegmentCustomizedPortraitPicOutcomeCallable BdaClient::SegmentCustomizedPortraitPicCallable(const SegmentCustomizedPortraitPicRequest &request)
{
    const auto prom = std::make_shared<std::promise<SegmentCustomizedPortraitPicOutcome>>();
    SegmentCustomizedPortraitPicAsync(
    request,
    [prom](
        const BdaClient*,
        const SegmentCustomizedPortraitPicRequest&,
        SegmentCustomizedPortraitPicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdaClient::SegmentPortraitPicOutcome BdaClient::SegmentPortraitPic(const SegmentPortraitPicRequest &request)
{
    auto outcome = MakeRequest(request, "SegmentPortraitPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SegmentPortraitPicResponse rsp = SegmentPortraitPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SegmentPortraitPicOutcome(rsp);
        else
            return SegmentPortraitPicOutcome(o.GetError());
    }
    else
    {
        return SegmentPortraitPicOutcome(outcome.GetError());
    }
}

void BdaClient::SegmentPortraitPicAsync(const SegmentPortraitPicRequest& request, const SegmentPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SegmentPortraitPicRequest&;
    using Resp = SegmentPortraitPicResponse;

    DoRequestAsync<Req, Resp>(
        "SegmentPortraitPic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdaClient::SegmentPortraitPicOutcomeCallable BdaClient::SegmentPortraitPicCallable(const SegmentPortraitPicRequest &request)
{
    const auto prom = std::make_shared<std::promise<SegmentPortraitPicOutcome>>();
    SegmentPortraitPicAsync(
    request,
    [prom](
        const BdaClient*,
        const SegmentPortraitPicRequest&,
        SegmentPortraitPicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BdaClient::TerminateSegmentationTaskOutcome BdaClient::TerminateSegmentationTask(const TerminateSegmentationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateSegmentationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateSegmentationTaskResponse rsp = TerminateSegmentationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateSegmentationTaskOutcome(rsp);
        else
            return TerminateSegmentationTaskOutcome(o.GetError());
    }
    else
    {
        return TerminateSegmentationTaskOutcome(outcome.GetError());
    }
}

void BdaClient::TerminateSegmentationTaskAsync(const TerminateSegmentationTaskRequest& request, const TerminateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateSegmentationTaskRequest&;
    using Resp = TerminateSegmentationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateSegmentationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BdaClient::TerminateSegmentationTaskOutcomeCallable BdaClient::TerminateSegmentationTaskCallable(const TerminateSegmentationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateSegmentationTaskOutcome>>();
    TerminateSegmentationTaskAsync(
    request,
    [prom](
        const BdaClient*,
        const TerminateSegmentationTaskRequest&,
        TerminateSegmentationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

