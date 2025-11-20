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

#include <tencentcloud/ams/v20201229/AmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ams::V20201229;
using namespace TencentCloud::Ams::V20201229::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-29";
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

AmsClient::CreateAudioModerationSyncTaskOutcome AmsClient::CreateAudioModerationSyncTask(const CreateAudioModerationSyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAudioModerationSyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAudioModerationSyncTaskResponse rsp = CreateAudioModerationSyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAudioModerationSyncTaskOutcome(rsp);
        else
            return CreateAudioModerationSyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAudioModerationSyncTaskOutcome(outcome.GetError());
    }
}

void AmsClient::CreateAudioModerationSyncTaskAsync(const CreateAudioModerationSyncTaskRequest& request, const CreateAudioModerationSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAudioModerationSyncTaskRequest&;
    using Resp = CreateAudioModerationSyncTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAudioModerationSyncTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmsClient::CreateAudioModerationSyncTaskOutcomeCallable AmsClient::CreateAudioModerationSyncTaskCallable(const CreateAudioModerationSyncTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAudioModerationSyncTaskOutcome>>();
    CreateAudioModerationSyncTaskAsync(
    request,
    [prom](
        const AmsClient*,
        const CreateAudioModerationSyncTaskRequest&,
        CreateAudioModerationSyncTaskOutcome resp,
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

AmsClient::DescribeTasksOutcome AmsClient::DescribeTasks(const DescribeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTasksResponse rsp = DescribeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTasksOutcome(rsp);
        else
            return DescribeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeTasksOutcome(outcome.GetError());
    }
}

void AmsClient::DescribeTasksAsync(const DescribeTasksRequest& request, const DescribeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTasksRequest&;
    using Resp = DescribeTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AmsClient::DescribeTasksOutcomeCallable AmsClient::DescribeTasksCallable(const DescribeTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTasksOutcome>>();
    DescribeTasksAsync(
    request,
    [prom](
        const AmsClient*,
        const DescribeTasksRequest&,
        DescribeTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

