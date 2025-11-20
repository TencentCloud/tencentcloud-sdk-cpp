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

#include <tencentcloud/dts/v20180330/DtsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dts::V20180330;
using namespace TencentCloud::Dts::V20180330::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-30";
    const string ENDPOINT = "dts.tencentcloudapi.com";
}

DtsClient::DtsClient(const Credential &credential, const string &region) :
    DtsClient(credential, region, ClientProfile())
{
}

DtsClient::DtsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DtsClient::ActivateSubscribeOutcome DtsClient::ActivateSubscribe(const ActivateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateSubscribeResponse rsp = ActivateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateSubscribeOutcome(rsp);
        else
            return ActivateSubscribeOutcome(o.GetError());
    }
    else
    {
        return ActivateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ActivateSubscribeAsync(const ActivateSubscribeRequest& request, const ActivateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActivateSubscribeRequest&;
    using Resp = ActivateSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ActivateSubscribeOutcomeCallable DtsClient::ActivateSubscribeCallable(const ActivateSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateSubscribeOutcome>>();
    ActivateSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const ActivateSubscribeRequest&,
        ActivateSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CompleteMigrateJobOutcome DtsClient::CompleteMigrateJob(const CompleteMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CompleteMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompleteMigrateJobResponse rsp = CompleteMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompleteMigrateJobOutcome(rsp);
        else
            return CompleteMigrateJobOutcome(o.GetError());
    }
    else
    {
        return CompleteMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::CompleteMigrateJobAsync(const CompleteMigrateJobRequest& request, const CompleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CompleteMigrateJobRequest&;
    using Resp = CompleteMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "CompleteMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CompleteMigrateJobOutcomeCallable DtsClient::CompleteMigrateJobCallable(const CompleteMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CompleteMigrateJobOutcome>>();
    CompleteMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CompleteMigrateJobRequest&,
        CompleteMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateMigrateCheckJobOutcome DtsClient::CreateMigrateCheckJob(const CreateMigrateCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrateCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrateCheckJobResponse rsp = CreateMigrateCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrateCheckJobOutcome(rsp);
        else
            return CreateMigrateCheckJobOutcome(o.GetError());
    }
    else
    {
        return CreateMigrateCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrateCheckJobAsync(const CreateMigrateCheckJobRequest& request, const CreateMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMigrateCheckJobRequest&;
    using Resp = CreateMigrateCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMigrateCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateMigrateCheckJobOutcomeCallable DtsClient::CreateMigrateCheckJobCallable(const CreateMigrateCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMigrateCheckJobOutcome>>();
    CreateMigrateCheckJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateMigrateCheckJobRequest&,
        CreateMigrateCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateMigrateJobOutcome DtsClient::CreateMigrateJob(const CreateMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMigrateJobResponse rsp = CreateMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMigrateJobOutcome(rsp);
        else
            return CreateMigrateJobOutcome(o.GetError());
    }
    else
    {
        return CreateMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::CreateMigrateJobAsync(const CreateMigrateJobRequest& request, const CreateMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMigrateJobRequest&;
    using Resp = CreateMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateMigrateJobOutcomeCallable DtsClient::CreateMigrateJobCallable(const CreateMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMigrateJobOutcome>>();
    CreateMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateMigrateJobRequest&,
        CreateMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::CreateSubscribeOutcome DtsClient::CreateSubscribe(const CreateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscribeResponse rsp = CreateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscribeOutcome(rsp);
        else
            return CreateSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::CreateSubscribeAsync(const CreateSubscribeRequest& request, const CreateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubscribeRequest&;
    using Resp = CreateSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::CreateSubscribeOutcomeCallable DtsClient::CreateSubscribeCallable(const CreateSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubscribeOutcome>>();
    CreateSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const CreateSubscribeRequest&,
        CreateSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DeleteMigrateJobOutcome DtsClient::DeleteMigrateJob(const DeleteMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMigrateJobResponse rsp = DeleteMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMigrateJobOutcome(rsp);
        else
            return DeleteMigrateJobOutcome(o.GetError());
    }
    else
    {
        return DeleteMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::DeleteMigrateJobAsync(const DeleteMigrateJobRequest& request, const DeleteMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMigrateJobRequest&;
    using Resp = DeleteMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DeleteMigrateJobOutcomeCallable DtsClient::DeleteMigrateJobCallable(const DeleteMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMigrateJobOutcome>>();
    DeleteMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const DeleteMigrateJobRequest&,
        DeleteMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeAsyncRequestInfoOutcome DtsClient::DescribeAsyncRequestInfo(const DescribeAsyncRequestInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAsyncRequestInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAsyncRequestInfoResponse rsp = DescribeAsyncRequestInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAsyncRequestInfoOutcome(rsp);
        else
            return DescribeAsyncRequestInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAsyncRequestInfoOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeAsyncRequestInfoAsync(const DescribeAsyncRequestInfoRequest& request, const DescribeAsyncRequestInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAsyncRequestInfoRequest&;
    using Resp = DescribeAsyncRequestInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAsyncRequestInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeAsyncRequestInfoOutcomeCallable DtsClient::DescribeAsyncRequestInfoCallable(const DescribeAsyncRequestInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAsyncRequestInfoOutcome>>();
    DescribeAsyncRequestInfoAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeAsyncRequestInfoRequest&,
        DescribeAsyncRequestInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeMigrateCheckJobOutcome DtsClient::DescribeMigrateCheckJob(const DescribeMigrateCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrateCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrateCheckJobResponse rsp = DescribeMigrateCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrateCheckJobOutcome(rsp);
        else
            return DescribeMigrateCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrateCheckJobOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrateCheckJobAsync(const DescribeMigrateCheckJobRequest& request, const DescribeMigrateCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrateCheckJobRequest&;
    using Resp = DescribeMigrateCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrateCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeMigrateCheckJobOutcomeCallable DtsClient::DescribeMigrateCheckJobCallable(const DescribeMigrateCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrateCheckJobOutcome>>();
    DescribeMigrateCheckJobAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeMigrateCheckJobRequest&,
        DescribeMigrateCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeMigrateJobsOutcome DtsClient::DescribeMigrateJobs(const DescribeMigrateJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMigrateJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMigrateJobsResponse rsp = DescribeMigrateJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMigrateJobsOutcome(rsp);
        else
            return DescribeMigrateJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeMigrateJobsOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeMigrateJobsAsync(const DescribeMigrateJobsRequest& request, const DescribeMigrateJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMigrateJobsRequest&;
    using Resp = DescribeMigrateJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMigrateJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeMigrateJobsOutcomeCallable DtsClient::DescribeMigrateJobsCallable(const DescribeMigrateJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMigrateJobsOutcome>>();
    DescribeMigrateJobsAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeMigrateJobsRequest&,
        DescribeMigrateJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSubscribeConfOutcome DtsClient::DescribeSubscribeConf(const DescribeSubscribeConfRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribeConf");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribeConfResponse rsp = DescribeSubscribeConfResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribeConfOutcome(rsp);
        else
            return DescribeSubscribeConfOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribeConfOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribeConfAsync(const DescribeSubscribeConfRequest& request, const DescribeSubscribeConfAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribeConfRequest&;
    using Resp = DescribeSubscribeConfResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribeConf", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSubscribeConfOutcomeCallable DtsClient::DescribeSubscribeConfCallable(const DescribeSubscribeConfRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribeConfOutcome>>();
    DescribeSubscribeConfAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSubscribeConfRequest&,
        DescribeSubscribeConfOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::DescribeSubscribesOutcome DtsClient::DescribeSubscribes(const DescribeSubscribesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscribes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscribesResponse rsp = DescribeSubscribesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscribesOutcome(rsp);
        else
            return DescribeSubscribesOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscribesOutcome(outcome.GetError());
    }
}

void DtsClient::DescribeSubscribesAsync(const DescribeSubscribesRequest& request, const DescribeSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubscribesRequest&;
    using Resp = DescribeSubscribesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubscribes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::DescribeSubscribesOutcomeCallable DtsClient::DescribeSubscribesCallable(const DescribeSubscribesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubscribesOutcome>>();
    DescribeSubscribesAsync(
    request,
    [prom](
        const DtsClient*,
        const DescribeSubscribesRequest&,
        DescribeSubscribesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::IsolateSubscribeOutcome DtsClient::IsolateSubscribe(const IsolateSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateSubscribeResponse rsp = IsolateSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateSubscribeOutcome(rsp);
        else
            return IsolateSubscribeOutcome(o.GetError());
    }
    else
    {
        return IsolateSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::IsolateSubscribeAsync(const IsolateSubscribeRequest& request, const IsolateSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateSubscribeRequest&;
    using Resp = IsolateSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::IsolateSubscribeOutcomeCallable DtsClient::IsolateSubscribeCallable(const IsolateSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateSubscribeOutcome>>();
    IsolateSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const IsolateSubscribeRequest&,
        IsolateSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifyMigrateJobOutcome DtsClient::ModifyMigrateJob(const ModifyMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMigrateJobResponse rsp = ModifyMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMigrateJobOutcome(rsp);
        else
            return ModifyMigrateJobOutcome(o.GetError());
    }
    else
    {
        return ModifyMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::ModifyMigrateJobAsync(const ModifyMigrateJobRequest& request, const ModifyMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMigrateJobRequest&;
    using Resp = ModifyMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifyMigrateJobOutcomeCallable DtsClient::ModifyMigrateJobCallable(const ModifyMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMigrateJobOutcome>>();
    ModifyMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifyMigrateJobRequest&,
        ModifyMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeAutoRenewFlagOutcome DtsClient::ModifySubscribeAutoRenewFlag(const ModifySubscribeAutoRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeAutoRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeAutoRenewFlagResponse rsp = ModifySubscribeAutoRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeAutoRenewFlagOutcome(rsp);
        else
            return ModifySubscribeAutoRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeAutoRenewFlagOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeAutoRenewFlagAsync(const ModifySubscribeAutoRenewFlagRequest& request, const ModifySubscribeAutoRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeAutoRenewFlagRequest&;
    using Resp = ModifySubscribeAutoRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeAutoRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeAutoRenewFlagOutcomeCallable DtsClient::ModifySubscribeAutoRenewFlagCallable(const ModifySubscribeAutoRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeAutoRenewFlagOutcome>>();
    ModifySubscribeAutoRenewFlagAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeAutoRenewFlagRequest&,
        ModifySubscribeAutoRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeConsumeTimeOutcome DtsClient::ModifySubscribeConsumeTime(const ModifySubscribeConsumeTimeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeConsumeTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeConsumeTimeResponse rsp = ModifySubscribeConsumeTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeConsumeTimeOutcome(rsp);
        else
            return ModifySubscribeConsumeTimeOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeConsumeTimeOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeConsumeTimeAsync(const ModifySubscribeConsumeTimeRequest& request, const ModifySubscribeConsumeTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeConsumeTimeRequest&;
    using Resp = ModifySubscribeConsumeTimeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeConsumeTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeConsumeTimeOutcomeCallable DtsClient::ModifySubscribeConsumeTimeCallable(const ModifySubscribeConsumeTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeConsumeTimeOutcome>>();
    ModifySubscribeConsumeTimeAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeConsumeTimeRequest&,
        ModifySubscribeConsumeTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeNameOutcome DtsClient::ModifySubscribeName(const ModifySubscribeNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeNameResponse rsp = ModifySubscribeNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeNameOutcome(rsp);
        else
            return ModifySubscribeNameOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeNameOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeNameAsync(const ModifySubscribeNameRequest& request, const ModifySubscribeNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeNameRequest&;
    using Resp = ModifySubscribeNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeNameOutcomeCallable DtsClient::ModifySubscribeNameCallable(const ModifySubscribeNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeNameOutcome>>();
    ModifySubscribeNameAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeNameRequest&,
        ModifySubscribeNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeObjectsOutcome DtsClient::ModifySubscribeObjects(const ModifySubscribeObjectsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeObjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeObjectsResponse rsp = ModifySubscribeObjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeObjectsOutcome(rsp);
        else
            return ModifySubscribeObjectsOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeObjectsOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeObjectsAsync(const ModifySubscribeObjectsRequest& request, const ModifySubscribeObjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeObjectsRequest&;
    using Resp = ModifySubscribeObjectsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeObjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeObjectsOutcomeCallable DtsClient::ModifySubscribeObjectsCallable(const ModifySubscribeObjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeObjectsOutcome>>();
    ModifySubscribeObjectsAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeObjectsRequest&,
        ModifySubscribeObjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ModifySubscribeVipVportOutcome DtsClient::ModifySubscribeVipVport(const ModifySubscribeVipVportRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubscribeVipVport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubscribeVipVportResponse rsp = ModifySubscribeVipVportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubscribeVipVportOutcome(rsp);
        else
            return ModifySubscribeVipVportOutcome(o.GetError());
    }
    else
    {
        return ModifySubscribeVipVportOutcome(outcome.GetError());
    }
}

void DtsClient::ModifySubscribeVipVportAsync(const ModifySubscribeVipVportRequest& request, const ModifySubscribeVipVportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubscribeVipVportRequest&;
    using Resp = ModifySubscribeVipVportResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubscribeVipVport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ModifySubscribeVipVportOutcomeCallable DtsClient::ModifySubscribeVipVportCallable(const ModifySubscribeVipVportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubscribeVipVportOutcome>>();
    ModifySubscribeVipVportAsync(
    request,
    [prom](
        const DtsClient*,
        const ModifySubscribeVipVportRequest&,
        ModifySubscribeVipVportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::OfflineIsolatedSubscribeOutcome DtsClient::OfflineIsolatedSubscribe(const OfflineIsolatedSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "OfflineIsolatedSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OfflineIsolatedSubscribeResponse rsp = OfflineIsolatedSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OfflineIsolatedSubscribeOutcome(rsp);
        else
            return OfflineIsolatedSubscribeOutcome(o.GetError());
    }
    else
    {
        return OfflineIsolatedSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::OfflineIsolatedSubscribeAsync(const OfflineIsolatedSubscribeRequest& request, const OfflineIsolatedSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OfflineIsolatedSubscribeRequest&;
    using Resp = OfflineIsolatedSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "OfflineIsolatedSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::OfflineIsolatedSubscribeOutcomeCallable DtsClient::OfflineIsolatedSubscribeCallable(const OfflineIsolatedSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<OfflineIsolatedSubscribeOutcome>>();
    OfflineIsolatedSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const OfflineIsolatedSubscribeRequest&,
        OfflineIsolatedSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::ResetSubscribeOutcome DtsClient::ResetSubscribe(const ResetSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ResetSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetSubscribeResponse rsp = ResetSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetSubscribeOutcome(rsp);
        else
            return ResetSubscribeOutcome(o.GetError());
    }
    else
    {
        return ResetSubscribeOutcome(outcome.GetError());
    }
}

void DtsClient::ResetSubscribeAsync(const ResetSubscribeRequest& request, const ResetSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetSubscribeRequest&;
    using Resp = ResetSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "ResetSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::ResetSubscribeOutcomeCallable DtsClient::ResetSubscribeCallable(const ResetSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetSubscribeOutcome>>();
    ResetSubscribeAsync(
    request,
    [prom](
        const DtsClient*,
        const ResetSubscribeRequest&,
        ResetSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StartMigrateJobOutcome DtsClient::StartMigrateJob(const StartMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartMigrateJobResponse rsp = StartMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartMigrateJobOutcome(rsp);
        else
            return StartMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StartMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StartMigrateJobAsync(const StartMigrateJobRequest& request, const StartMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartMigrateJobRequest&;
    using Resp = StartMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "StartMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StartMigrateJobOutcomeCallable DtsClient::StartMigrateJobCallable(const StartMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartMigrateJobOutcome>>();
    StartMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StartMigrateJobRequest&,
        StartMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DtsClient::StopMigrateJobOutcome DtsClient::StopMigrateJob(const StopMigrateJobRequest &request)
{
    auto outcome = MakeRequest(request, "StopMigrateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopMigrateJobResponse rsp = StopMigrateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopMigrateJobOutcome(rsp);
        else
            return StopMigrateJobOutcome(o.GetError());
    }
    else
    {
        return StopMigrateJobOutcome(outcome.GetError());
    }
}

void DtsClient::StopMigrateJobAsync(const StopMigrateJobRequest& request, const StopMigrateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopMigrateJobRequest&;
    using Resp = StopMigrateJobResponse;

    DoRequestAsync<Req, Resp>(
        "StopMigrateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DtsClient::StopMigrateJobOutcomeCallable DtsClient::StopMigrateJobCallable(const StopMigrateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopMigrateJobOutcome>>();
    StopMigrateJobAsync(
    request,
    [prom](
        const DtsClient*,
        const StopMigrateJobRequest&,
        StopMigrateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

