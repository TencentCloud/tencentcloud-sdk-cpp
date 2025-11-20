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

#include <tencentcloud/asw/v20200722/AswClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Asw::V20200722;
using namespace TencentCloud::Asw::V20200722::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-22";
    const string ENDPOINT = "asw.tencentcloudapi.com";
}

AswClient::AswClient(const Credential &credential, const string &region) :
    AswClient(credential, region, ClientProfile())
{
}

AswClient::AswClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AswClient::CreateFlowServiceOutcome AswClient::CreateFlowService(const CreateFlowServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlowService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlowServiceResponse rsp = CreateFlowServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlowServiceOutcome(rsp);
        else
            return CreateFlowServiceOutcome(o.GetError());
    }
    else
    {
        return CreateFlowServiceOutcome(outcome.GetError());
    }
}

void AswClient::CreateFlowServiceAsync(const CreateFlowServiceRequest& request, const CreateFlowServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlowServiceRequest&;
    using Resp = CreateFlowServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlowService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::CreateFlowServiceOutcomeCallable AswClient::CreateFlowServiceCallable(const CreateFlowServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlowServiceOutcome>>();
    CreateFlowServiceAsync(
    request,
    [prom](
        const AswClient*,
        const CreateFlowServiceRequest&,
        CreateFlowServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::DescribeExecutionOutcome AswClient::DescribeExecution(const DescribeExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutionResponse rsp = DescribeExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutionOutcome(rsp);
        else
            return DescribeExecutionOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutionOutcome(outcome.GetError());
    }
}

void AswClient::DescribeExecutionAsync(const DescribeExecutionRequest& request, const DescribeExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExecutionRequest&;
    using Resp = DescribeExecutionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExecution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::DescribeExecutionOutcomeCallable AswClient::DescribeExecutionCallable(const DescribeExecutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExecutionOutcome>>();
    DescribeExecutionAsync(
    request,
    [prom](
        const AswClient*,
        const DescribeExecutionRequest&,
        DescribeExecutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::DescribeExecutionHistoryOutcome AswClient::DescribeExecutionHistory(const DescribeExecutionHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecutionHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutionHistoryResponse rsp = DescribeExecutionHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutionHistoryOutcome(rsp);
        else
            return DescribeExecutionHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutionHistoryOutcome(outcome.GetError());
    }
}

void AswClient::DescribeExecutionHistoryAsync(const DescribeExecutionHistoryRequest& request, const DescribeExecutionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExecutionHistoryRequest&;
    using Resp = DescribeExecutionHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExecutionHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::DescribeExecutionHistoryOutcomeCallable AswClient::DescribeExecutionHistoryCallable(const DescribeExecutionHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExecutionHistoryOutcome>>();
    DescribeExecutionHistoryAsync(
    request,
    [prom](
        const AswClient*,
        const DescribeExecutionHistoryRequest&,
        DescribeExecutionHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::DescribeExecutionsOutcome AswClient::DescribeExecutions(const DescribeExecutionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExecutions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExecutionsResponse rsp = DescribeExecutionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExecutionsOutcome(rsp);
        else
            return DescribeExecutionsOutcome(o.GetError());
    }
    else
    {
        return DescribeExecutionsOutcome(outcome.GetError());
    }
}

void AswClient::DescribeExecutionsAsync(const DescribeExecutionsRequest& request, const DescribeExecutionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExecutionsRequest&;
    using Resp = DescribeExecutionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExecutions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::DescribeExecutionsOutcomeCallable AswClient::DescribeExecutionsCallable(const DescribeExecutionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExecutionsOutcome>>();
    DescribeExecutionsAsync(
    request,
    [prom](
        const AswClient*,
        const DescribeExecutionsRequest&,
        DescribeExecutionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::DescribeFlowServiceDetailOutcome AswClient::DescribeFlowServiceDetail(const DescribeFlowServiceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowServiceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowServiceDetailResponse rsp = DescribeFlowServiceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowServiceDetailOutcome(rsp);
        else
            return DescribeFlowServiceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowServiceDetailOutcome(outcome.GetError());
    }
}

void AswClient::DescribeFlowServiceDetailAsync(const DescribeFlowServiceDetailRequest& request, const DescribeFlowServiceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowServiceDetailRequest&;
    using Resp = DescribeFlowServiceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowServiceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::DescribeFlowServiceDetailOutcomeCallable AswClient::DescribeFlowServiceDetailCallable(const DescribeFlowServiceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowServiceDetailOutcome>>();
    DescribeFlowServiceDetailAsync(
    request,
    [prom](
        const AswClient*,
        const DescribeFlowServiceDetailRequest&,
        DescribeFlowServiceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::DescribeFlowServicesOutcome AswClient::DescribeFlowServices(const DescribeFlowServicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowServices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowServicesResponse rsp = DescribeFlowServicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowServicesOutcome(rsp);
        else
            return DescribeFlowServicesOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowServicesOutcome(outcome.GetError());
    }
}

void AswClient::DescribeFlowServicesAsync(const DescribeFlowServicesRequest& request, const DescribeFlowServicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowServicesRequest&;
    using Resp = DescribeFlowServicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowServices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::DescribeFlowServicesOutcomeCallable AswClient::DescribeFlowServicesCallable(const DescribeFlowServicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowServicesOutcome>>();
    DescribeFlowServicesAsync(
    request,
    [prom](
        const AswClient*,
        const DescribeFlowServicesRequest&,
        DescribeFlowServicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::ModifyFlowServiceOutcome AswClient::ModifyFlowService(const ModifyFlowServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlowService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlowServiceResponse rsp = ModifyFlowServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlowServiceOutcome(rsp);
        else
            return ModifyFlowServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyFlowServiceOutcome(outcome.GetError());
    }
}

void AswClient::ModifyFlowServiceAsync(const ModifyFlowServiceRequest& request, const ModifyFlowServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFlowServiceRequest&;
    using Resp = ModifyFlowServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFlowService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::ModifyFlowServiceOutcomeCallable AswClient::ModifyFlowServiceCallable(const ModifyFlowServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFlowServiceOutcome>>();
    ModifyFlowServiceAsync(
    request,
    [prom](
        const AswClient*,
        const ModifyFlowServiceRequest&,
        ModifyFlowServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::StartExecutionOutcome AswClient::StartExecution(const StartExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "StartExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartExecutionResponse rsp = StartExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartExecutionOutcome(rsp);
        else
            return StartExecutionOutcome(o.GetError());
    }
    else
    {
        return StartExecutionOutcome(outcome.GetError());
    }
}

void AswClient::StartExecutionAsync(const StartExecutionRequest& request, const StartExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartExecutionRequest&;
    using Resp = StartExecutionResponse;

    DoRequestAsync<Req, Resp>(
        "StartExecution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::StartExecutionOutcomeCallable AswClient::StartExecutionCallable(const StartExecutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartExecutionOutcome>>();
    StartExecutionAsync(
    request,
    [prom](
        const AswClient*,
        const StartExecutionRequest&,
        StartExecutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AswClient::StopExecutionOutcome AswClient::StopExecution(const StopExecutionRequest &request)
{
    auto outcome = MakeRequest(request, "StopExecution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopExecutionResponse rsp = StopExecutionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopExecutionOutcome(rsp);
        else
            return StopExecutionOutcome(o.GetError());
    }
    else
    {
        return StopExecutionOutcome(outcome.GetError());
    }
}

void AswClient::StopExecutionAsync(const StopExecutionRequest& request, const StopExecutionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopExecutionRequest&;
    using Resp = StopExecutionResponse;

    DoRequestAsync<Req, Resp>(
        "StopExecution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AswClient::StopExecutionOutcomeCallable AswClient::StopExecutionCallable(const StopExecutionRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopExecutionOutcome>>();
    StopExecutionAsync(
    request,
    [prom](
        const AswClient*,
        const StopExecutionRequest&,
        StopExecutionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

