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

#include <tencentcloud/ams/v20200608/AmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ams::V20200608;
using namespace TencentCloud::Ams::V20200608::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-06-08";
    const string ENDPOINT = "ams.tencentcloudapi.com";
}

AmsClient::AmsClient(const Credential &credential, const string &region) :
    AmsClient(credential, region, ClientProfile())
{
}

AmsClient::AmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AmsClient::CancelTaskOutcome AmsClient::CancelTask(const CancelTaskRequest &request)
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

void AmsClient::CancelTaskAsync(const CancelTaskRequest& request, const CancelTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AmsClient::CancelTaskOutcomeCallable AmsClient::CancelTaskCallable(const CancelTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelTaskOutcome>>();
    CancelTaskAsync(
    request,
    [prom](
        const AmsClient*,
        const CancelTaskRequest&,
        CancelTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AmsClient::CreateAudioModerationTaskOutcome AmsClient::CreateAudioModerationTask(const CreateAudioModerationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAudioModerationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAudioModerationTaskResponse rsp = CreateAudioModerationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAudioModerationTaskOutcome(rsp);
        else
            return CreateAudioModerationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAudioModerationTaskOutcome(outcome.GetError());
    }
}

void AmsClient::CreateAudioModerationTaskAsync(const CreateAudioModerationTaskRequest& request, const CreateAudioModerationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAudioModerationTaskRequest&;
    using Resp = CreateAudioModerationTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAudioModerationTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmsClient::CreateAudioModerationTaskOutcomeCallable AmsClient::CreateAudioModerationTaskCallable(const CreateAudioModerationTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAudioModerationTaskOutcome>>();
    CreateAudioModerationTaskAsync(
    request,
    [prom](
        const AmsClient*,
        const CreateAudioModerationTaskRequest&,
        CreateAudioModerationTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AmsClient::CreateBizConfigOutcome AmsClient::CreateBizConfig(const CreateBizConfigRequest &request)
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

void AmsClient::CreateBizConfigAsync(const CreateBizConfigRequest& request, const CreateBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AmsClient::CreateBizConfigOutcomeCallable AmsClient::CreateBizConfigCallable(const CreateBizConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBizConfigOutcome>>();
    CreateBizConfigAsync(
    request,
    [prom](
        const AmsClient*,
        const CreateBizConfigRequest&,
        CreateBizConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AmsClient::DescribeAmsListOutcome AmsClient::DescribeAmsList(const DescribeAmsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAmsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAmsListResponse rsp = DescribeAmsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAmsListOutcome(rsp);
        else
            return DescribeAmsListOutcome(o.GetError());
    }
    else
    {
        return DescribeAmsListOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeAmsListAsync(const DescribeAmsListRequest& request, const DescribeAmsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAmsListRequest&;
    using Resp = DescribeAmsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAmsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmsClient::DescribeAmsListOutcomeCallable AmsClient::DescribeAmsListCallable(const DescribeAmsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAmsListOutcome>>();
    DescribeAmsListAsync(
    request,
    [prom](
        const AmsClient*,
        const DescribeAmsListRequest&,
        DescribeAmsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AmsClient::DescribeAudioStatOutcome AmsClient::DescribeAudioStat(const DescribeAudioStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAudioStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAudioStatResponse rsp = DescribeAudioStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAudioStatOutcome(rsp);
        else
            return DescribeAudioStatOutcome(o.GetError());
    }
    else
    {
        return DescribeAudioStatOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeAudioStatAsync(const DescribeAudioStatRequest& request, const DescribeAudioStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAudioStatRequest&;
    using Resp = DescribeAudioStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAudioStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmsClient::DescribeAudioStatOutcomeCallable AmsClient::DescribeAudioStatCallable(const DescribeAudioStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAudioStatOutcome>>();
    DescribeAudioStatAsync(
    request,
    [prom](
        const AmsClient*,
        const DescribeAudioStatRequest&,
        DescribeAudioStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AmsClient::DescribeBizConfigOutcome AmsClient::DescribeBizConfig(const DescribeBizConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBizConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBizConfigResponse rsp = DescribeBizConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBizConfigOutcome(rsp);
        else
            return DescribeBizConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBizConfigOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeBizConfigAsync(const DescribeBizConfigRequest& request, const DescribeBizConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBizConfigRequest&;
    using Resp = DescribeBizConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBizConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmsClient::DescribeBizConfigOutcomeCallable AmsClient::DescribeBizConfigCallable(const DescribeBizConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBizConfigOutcome>>();
    DescribeBizConfigAsync(
    request,
    [prom](
        const AmsClient*,
        const DescribeBizConfigRequest&,
        DescribeBizConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AmsClient::DescribeTaskDetailOutcome AmsClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
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

void AmsClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

AmsClient::DescribeTaskDetailOutcomeCallable AmsClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const AmsClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

