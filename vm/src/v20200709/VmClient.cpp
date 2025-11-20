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

#include <tencentcloud/vm/v20200709/VmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vm::V20200709;
using namespace TencentCloud::Vm::V20200709::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-09";
    const string ENDPOINT = "vm.tencentcloudapi.com";
}

VmClient::VmClient(const Credential &credential, const string &region) :
    VmClient(credential, region, ClientProfile())
{
}

VmClient::VmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VmClient::CancelTaskOutcome VmClient::CancelTask(const CancelTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CancelTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelTaskResponse rsp = CancelTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelTaskOutcome(rsp);
        else
            return CancelTaskOutcome(o.GetError());
    }
    else
    {
        return CancelTaskOutcome(outcome.GetError());
    }
}

void VmClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelTaskRequest&;
    using Resp = CancelTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CancelTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VmClient::CancelTaskOutcomeCallable VmClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTaskOutcome>>();
    CancelTaskAsync(
    request,
    [prom](
        const VmClient*,
        const CancelTaskRequest&,
        CancelTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VmClient::CreateBizConfigOutcome VmClient::CreateBizConfig(const CreateBizConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBizConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBizConfigResponse rsp = CreateBizConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBizConfigOutcome(rsp);
        else
            return CreateBizConfigOutcome(o.GetError());
    }
    else
    {
        return CreateBizConfigOutcome(outcome.GetError());
    }
}

void VmClient::CreateBizConfigAsync(const CreateBizConfigRequest& request, const CreateBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBizConfigRequest&;
    using Resp = CreateBizConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBizConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VmClient::CreateBizConfigOutcomeCallable VmClient::CreateBizConfigCallable(const CreateBizConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBizConfigOutcome>>();
    CreateBizConfigAsync(
    request,
    [prom](
        const VmClient*,
        const CreateBizConfigRequest&,
        CreateBizConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VmClient::CreateVideoModerationTaskOutcome VmClient::CreateVideoModerationTask(const CreateVideoModerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVideoModerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVideoModerationTaskResponse rsp = CreateVideoModerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVideoModerationTaskOutcome(rsp);
        else
            return CreateVideoModerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateVideoModerationTaskOutcome(outcome.GetError());
    }
}

void VmClient::CreateVideoModerationTaskAsync(const CreateVideoModerationTaskRequest& request, const CreateVideoModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVideoModerationTaskRequest&;
    using Resp = CreateVideoModerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVideoModerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VmClient::CreateVideoModerationTaskOutcomeCallable VmClient::CreateVideoModerationTaskCallable(const CreateVideoModerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVideoModerationTaskOutcome>>();
    CreateVideoModerationTaskAsync(
    request,
    [prom](
        const VmClient*,
        const CreateVideoModerationTaskRequest&,
        CreateVideoModerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VmClient::DescribeTaskDetailOutcome VmClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void VmClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VmClient::DescribeTaskDetailOutcomeCallable VmClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const VmClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VmClient::DescribeVideoStatOutcome VmClient::DescribeVideoStat(const DescribeVideoStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoStatResponse rsp = DescribeVideoStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoStatOutcome(rsp);
        else
            return DescribeVideoStatOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoStatOutcome(outcome.GetError());
    }
}

void VmClient::DescribeVideoStatAsync(const DescribeVideoStatRequest& request, const DescribeVideoStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoStatRequest&;
    using Resp = DescribeVideoStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VmClient::DescribeVideoStatOutcomeCallable VmClient::DescribeVideoStatCallable(const DescribeVideoStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoStatOutcome>>();
    DescribeVideoStatAsync(
    request,
    [prom](
        const VmClient*,
        const DescribeVideoStatRequest&,
        DescribeVideoStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

