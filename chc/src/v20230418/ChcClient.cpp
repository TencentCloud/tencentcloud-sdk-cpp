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

#include <tencentcloud/chc/v20230418/ChcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Chc::V20230418;
using namespace TencentCloud::Chc::V20230418::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-18";
    const string ENDPOINT = "chc.tencentcloudapi.com";
}

ChcClient::ChcClient(const Credential &credential, const string &region) :
    ChcClient(credential, region, ClientProfile())
{
}

ChcClient::ChcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ChcClient::ConfirmCommonServiceWorkOrderOutcome ChcClient::ConfirmCommonServiceWorkOrder(const ConfirmCommonServiceWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmCommonServiceWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmCommonServiceWorkOrderResponse rsp = ConfirmCommonServiceWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmCommonServiceWorkOrderOutcome(rsp);
        else
            return ConfirmCommonServiceWorkOrderOutcome(o.GetError());
    }
    else
    {
        return ConfirmCommonServiceWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::ConfirmCommonServiceWorkOrderAsync(const ConfirmCommonServiceWorkOrderRequest& request, const ConfirmCommonServiceWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfirmCommonServiceWorkOrderRequest&;
    using Resp = ConfirmCommonServiceWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmCommonServiceWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::ConfirmCommonServiceWorkOrderOutcomeCallable ChcClient::ConfirmCommonServiceWorkOrderCallable(const ConfirmCommonServiceWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmCommonServiceWorkOrderOutcome>>();
    ConfirmCommonServiceWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const ConfirmCommonServiceWorkOrderRequest&,
        ConfirmCommonServiceWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateCommonServiceWorkOrderOutcome ChcClient::CreateCommonServiceWorkOrder(const CreateCommonServiceWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCommonServiceWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCommonServiceWorkOrderResponse rsp = CreateCommonServiceWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCommonServiceWorkOrderOutcome(rsp);
        else
            return CreateCommonServiceWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateCommonServiceWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateCommonServiceWorkOrderAsync(const CreateCommonServiceWorkOrderRequest& request, const CreateCommonServiceWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCommonServiceWorkOrderRequest&;
    using Resp = CreateCommonServiceWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCommonServiceWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateCommonServiceWorkOrderOutcomeCallable ChcClient::CreateCommonServiceWorkOrderCallable(const CreateCommonServiceWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCommonServiceWorkOrderOutcome>>();
    CreateCommonServiceWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateCommonServiceWorkOrderRequest&,
        CreateCommonServiceWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateModelEvaluationWorkOrderOutcome ChcClient::CreateModelEvaluationWorkOrder(const CreateModelEvaluationWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateModelEvaluationWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateModelEvaluationWorkOrderResponse rsp = CreateModelEvaluationWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateModelEvaluationWorkOrderOutcome(rsp);
        else
            return CreateModelEvaluationWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateModelEvaluationWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateModelEvaluationWorkOrderAsync(const CreateModelEvaluationWorkOrderRequest& request, const CreateModelEvaluationWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateModelEvaluationWorkOrderRequest&;
    using Resp = CreateModelEvaluationWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateModelEvaluationWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateModelEvaluationWorkOrderOutcomeCallable ChcClient::CreateModelEvaluationWorkOrderCallable(const CreateModelEvaluationWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateModelEvaluationWorkOrderOutcome>>();
    CreateModelEvaluationWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateModelEvaluationWorkOrderRequest&,
        CreateModelEvaluationWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateMovingWorkOrderOutcome ChcClient::CreateMovingWorkOrder(const CreateMovingWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMovingWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMovingWorkOrderResponse rsp = CreateMovingWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMovingWorkOrderOutcome(rsp);
        else
            return CreateMovingWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateMovingWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateMovingWorkOrderAsync(const CreateMovingWorkOrderRequest& request, const CreateMovingWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMovingWorkOrderRequest&;
    using Resp = CreateMovingWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMovingWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateMovingWorkOrderOutcomeCallable ChcClient::CreateMovingWorkOrderCallable(const CreateMovingWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMovingWorkOrderOutcome>>();
    CreateMovingWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateMovingWorkOrderRequest&,
        CreateMovingWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateNetDeviceModelOutcome ChcClient::CreateNetDeviceModel(const CreateNetDeviceModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetDeviceModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetDeviceModelResponse rsp = CreateNetDeviceModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetDeviceModelOutcome(rsp);
        else
            return CreateNetDeviceModelOutcome(o.GetError());
    }
    else
    {
        return CreateNetDeviceModelOutcome(outcome.GetError());
    }
}

void ChcClient::CreateNetDeviceModelAsync(const CreateNetDeviceModelRequest& request, const CreateNetDeviceModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetDeviceModelRequest&;
    using Resp = CreateNetDeviceModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetDeviceModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateNetDeviceModelOutcomeCallable ChcClient::CreateNetDeviceModelCallable(const CreateNetDeviceModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetDeviceModelOutcome>>();
    CreateNetDeviceModelAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateNetDeviceModelRequest&,
        CreateNetDeviceModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreatePersonnelVisitWorkOrderOutcome ChcClient::CreatePersonnelVisitWorkOrder(const CreatePersonnelVisitWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePersonnelVisitWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonnelVisitWorkOrderResponse rsp = CreatePersonnelVisitWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonnelVisitWorkOrderOutcome(rsp);
        else
            return CreatePersonnelVisitWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePersonnelVisitWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreatePersonnelVisitWorkOrderAsync(const CreatePersonnelVisitWorkOrderRequest& request, const CreatePersonnelVisitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePersonnelVisitWorkOrderRequest&;
    using Resp = CreatePersonnelVisitWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePersonnelVisitWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreatePersonnelVisitWorkOrderOutcomeCallable ChcClient::CreatePersonnelVisitWorkOrderCallable(const CreatePersonnelVisitWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePersonnelVisitWorkOrderOutcome>>();
    CreatePersonnelVisitWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreatePersonnelVisitWorkOrderRequest&,
        CreatePersonnelVisitWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreatePowerOffWorkOrderOutcome ChcClient::CreatePowerOffWorkOrder(const CreatePowerOffWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePowerOffWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePowerOffWorkOrderResponse rsp = CreatePowerOffWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePowerOffWorkOrderOutcome(rsp);
        else
            return CreatePowerOffWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePowerOffWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreatePowerOffWorkOrderAsync(const CreatePowerOffWorkOrderRequest& request, const CreatePowerOffWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePowerOffWorkOrderRequest&;
    using Resp = CreatePowerOffWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePowerOffWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreatePowerOffWorkOrderOutcomeCallable ChcClient::CreatePowerOffWorkOrderCallable(const CreatePowerOffWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePowerOffWorkOrderOutcome>>();
    CreatePowerOffWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreatePowerOffWorkOrderRequest&,
        CreatePowerOffWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreatePowerOnWorkOrderOutcome ChcClient::CreatePowerOnWorkOrder(const CreatePowerOnWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePowerOnWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePowerOnWorkOrderResponse rsp = CreatePowerOnWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePowerOnWorkOrderOutcome(rsp);
        else
            return CreatePowerOnWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePowerOnWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreatePowerOnWorkOrderAsync(const CreatePowerOnWorkOrderRequest& request, const CreatePowerOnWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePowerOnWorkOrderRequest&;
    using Resp = CreatePowerOnWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePowerOnWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreatePowerOnWorkOrderOutcomeCallable ChcClient::CreatePowerOnWorkOrderCallable(const CreatePowerOnWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePowerOnWorkOrderOutcome>>();
    CreatePowerOnWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreatePowerOnWorkOrderRequest&,
        CreatePowerOnWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateQuitWorkOrderOutcome ChcClient::CreateQuitWorkOrder(const CreateQuitWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateQuitWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateQuitWorkOrderResponse rsp = CreateQuitWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateQuitWorkOrderOutcome(rsp);
        else
            return CreateQuitWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateQuitWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateQuitWorkOrderAsync(const CreateQuitWorkOrderRequest& request, const CreateQuitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateQuitWorkOrderRequest&;
    using Resp = CreateQuitWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateQuitWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateQuitWorkOrderOutcomeCallable ChcClient::CreateQuitWorkOrderCallable(const CreateQuitWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateQuitWorkOrderOutcome>>();
    CreateQuitWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateQuitWorkOrderRequest&,
        CreateQuitWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateRackOffWorkOrderOutcome ChcClient::CreateRackOffWorkOrder(const CreateRackOffWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRackOffWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRackOffWorkOrderResponse rsp = CreateRackOffWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRackOffWorkOrderOutcome(rsp);
        else
            return CreateRackOffWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateRackOffWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateRackOffWorkOrderAsync(const CreateRackOffWorkOrderRequest& request, const CreateRackOffWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRackOffWorkOrderRequest&;
    using Resp = CreateRackOffWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRackOffWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateRackOffWorkOrderOutcomeCallable ChcClient::CreateRackOffWorkOrderCallable(const CreateRackOffWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRackOffWorkOrderOutcome>>();
    CreateRackOffWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateRackOffWorkOrderRequest&,
        CreateRackOffWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateRackOnWorkOrderOutcome ChcClient::CreateRackOnWorkOrder(const CreateRackOnWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRackOnWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRackOnWorkOrderResponse rsp = CreateRackOnWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRackOnWorkOrderOutcome(rsp);
        else
            return CreateRackOnWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateRackOnWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateRackOnWorkOrderAsync(const CreateRackOnWorkOrderRequest& request, const CreateRackOnWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRackOnWorkOrderRequest&;
    using Resp = CreateRackOnWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRackOnWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateRackOnWorkOrderOutcomeCallable ChcClient::CreateRackOnWorkOrderCallable(const CreateRackOnWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRackOnWorkOrderOutcome>>();
    CreateRackOnWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateRackOnWorkOrderRequest&,
        CreateRackOnWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateReceivingWorkOrderOutcome ChcClient::CreateReceivingWorkOrder(const CreateReceivingWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateReceivingWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateReceivingWorkOrderResponse rsp = CreateReceivingWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateReceivingWorkOrderOutcome(rsp);
        else
            return CreateReceivingWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateReceivingWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateReceivingWorkOrderAsync(const CreateReceivingWorkOrderRequest& request, const CreateReceivingWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateReceivingWorkOrderRequest&;
    using Resp = CreateReceivingWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateReceivingWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateReceivingWorkOrderOutcomeCallable ChcClient::CreateReceivingWorkOrderCallable(const CreateReceivingWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateReceivingWorkOrderOutcome>>();
    CreateReceivingWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateReceivingWorkOrderRequest&,
        CreateReceivingWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateServerModelOutcome ChcClient::CreateServerModel(const CreateServerModelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServerModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServerModelResponse rsp = CreateServerModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServerModelOutcome(rsp);
        else
            return CreateServerModelOutcome(o.GetError());
    }
    else
    {
        return CreateServerModelOutcome(outcome.GetError());
    }
}

void ChcClient::CreateServerModelAsync(const CreateServerModelRequest& request, const CreateServerModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServerModelRequest&;
    using Resp = CreateServerModelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateServerModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateServerModelOutcomeCallable ChcClient::CreateServerModelCallable(const CreateServerModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServerModelOutcome>>();
    CreateServerModelAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateServerModelRequest&,
        CreateServerModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::CreateSpeciallyQuitWorkOrderOutcome ChcClient::CreateSpeciallyQuitWorkOrder(const CreateSpeciallyQuitWorkOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSpeciallyQuitWorkOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSpeciallyQuitWorkOrderResponse rsp = CreateSpeciallyQuitWorkOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSpeciallyQuitWorkOrderOutcome(rsp);
        else
            return CreateSpeciallyQuitWorkOrderOutcome(o.GetError());
    }
    else
    {
        return CreateSpeciallyQuitWorkOrderOutcome(outcome.GetError());
    }
}

void ChcClient::CreateSpeciallyQuitWorkOrderAsync(const CreateSpeciallyQuitWorkOrderRequest& request, const CreateSpeciallyQuitWorkOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSpeciallyQuitWorkOrderRequest&;
    using Resp = CreateSpeciallyQuitWorkOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSpeciallyQuitWorkOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::CreateSpeciallyQuitWorkOrderOutcomeCallable ChcClient::CreateSpeciallyQuitWorkOrderCallable(const CreateSpeciallyQuitWorkOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSpeciallyQuitWorkOrderOutcome>>();
    CreateSpeciallyQuitWorkOrderAsync(
    request,
    [prom](
        const ChcClient*,
        const CreateSpeciallyQuitWorkOrderRequest&,
        CreateSpeciallyQuitWorkOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeAvailableModelListOutcome ChcClient::DescribeAvailableModelList(const DescribeAvailableModelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAvailableModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAvailableModelListResponse rsp = DescribeAvailableModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAvailableModelListOutcome(rsp);
        else
            return DescribeAvailableModelListOutcome(o.GetError());
    }
    else
    {
        return DescribeAvailableModelListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeAvailableModelListAsync(const DescribeAvailableModelListRequest& request, const DescribeAvailableModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAvailableModelListRequest&;
    using Resp = DescribeAvailableModelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAvailableModelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeAvailableModelListOutcomeCallable ChcClient::DescribeAvailableModelListCallable(const DescribeAvailableModelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAvailableModelListOutcome>>();
    DescribeAvailableModelListAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeAvailableModelListRequest&,
        DescribeAvailableModelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeCampusListOutcome ChcClient::DescribeCampusList(const DescribeCampusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCampusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCampusListResponse rsp = DescribeCampusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCampusListOutcome(rsp);
        else
            return DescribeCampusListOutcome(o.GetError());
    }
    else
    {
        return DescribeCampusListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeCampusListAsync(const DescribeCampusListRequest& request, const DescribeCampusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCampusListRequest&;
    using Resp = DescribeCampusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCampusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeCampusListOutcomeCallable ChcClient::DescribeCampusListCallable(const DescribeCampusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCampusListOutcome>>();
    DescribeCampusListAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeCampusListRequest&,
        DescribeCampusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeCommonServiceWorkOrderDetailOutcome ChcClient::DescribeCommonServiceWorkOrderDetail(const DescribeCommonServiceWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCommonServiceWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCommonServiceWorkOrderDetailResponse rsp = DescribeCommonServiceWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCommonServiceWorkOrderDetailOutcome(rsp);
        else
            return DescribeCommonServiceWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCommonServiceWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeCommonServiceWorkOrderDetailAsync(const DescribeCommonServiceWorkOrderDetailRequest& request, const DescribeCommonServiceWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCommonServiceWorkOrderDetailRequest&;
    using Resp = DescribeCommonServiceWorkOrderDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCommonServiceWorkOrderDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeCommonServiceWorkOrderDetailOutcomeCallable ChcClient::DescribeCommonServiceWorkOrderDetailCallable(const DescribeCommonServiceWorkOrderDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCommonServiceWorkOrderDetailOutcome>>();
    DescribeCommonServiceWorkOrderDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeCommonServiceWorkOrderDetailRequest&,
        DescribeCommonServiceWorkOrderDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeCustomerInfoOutcome ChcClient::DescribeCustomerInfo(const DescribeCustomerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomerInfoResponse rsp = DescribeCustomerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomerInfoOutcome(rsp);
        else
            return DescribeCustomerInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomerInfoOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeCustomerInfoAsync(const DescribeCustomerInfoRequest& request, const DescribeCustomerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomerInfoRequest&;
    using Resp = DescribeCustomerInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomerInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeCustomerInfoOutcomeCallable ChcClient::DescribeCustomerInfoCallable(const DescribeCustomerInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomerInfoOutcome>>();
    DescribeCustomerInfoAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeCustomerInfoRequest&,
        DescribeCustomerInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeDeviceListOutcome ChcClient::DescribeDeviceList(const DescribeDeviceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceListResponse rsp = DescribeDeviceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceListOutcome(rsp);
        else
            return DescribeDeviceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeDeviceListAsync(const DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceListRequest&;
    using Resp = DescribeDeviceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeDeviceListOutcomeCallable ChcClient::DescribeDeviceListCallable(const DescribeDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceListOutcome>>();
    DescribeDeviceListAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeDeviceListRequest&,
        DescribeDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeDeviceWorkOrderDetailOutcome ChcClient::DescribeDeviceWorkOrderDetail(const DescribeDeviceWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceWorkOrderDetailResponse rsp = DescribeDeviceWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceWorkOrderDetailOutcome(rsp);
        else
            return DescribeDeviceWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeDeviceWorkOrderDetailAsync(const DescribeDeviceWorkOrderDetailRequest& request, const DescribeDeviceWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceWorkOrderDetailRequest&;
    using Resp = DescribeDeviceWorkOrderDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceWorkOrderDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeDeviceWorkOrderDetailOutcomeCallable ChcClient::DescribeDeviceWorkOrderDetailCallable(const DescribeDeviceWorkOrderDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceWorkOrderDetailOutcome>>();
    DescribeDeviceWorkOrderDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeDeviceWorkOrderDetailRequest&,
        DescribeDeviceWorkOrderDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeIdcUnitAssetDetailOutcome ChcClient::DescribeIdcUnitAssetDetail(const DescribeIdcUnitAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdcUnitAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdcUnitAssetDetailResponse rsp = DescribeIdcUnitAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdcUnitAssetDetailOutcome(rsp);
        else
            return DescribeIdcUnitAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIdcUnitAssetDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeIdcUnitAssetDetailAsync(const DescribeIdcUnitAssetDetailRequest& request, const DescribeIdcUnitAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdcUnitAssetDetailRequest&;
    using Resp = DescribeIdcUnitAssetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdcUnitAssetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeIdcUnitAssetDetailOutcomeCallable ChcClient::DescribeIdcUnitAssetDetailCallable(const DescribeIdcUnitAssetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdcUnitAssetDetailOutcome>>();
    DescribeIdcUnitAssetDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeIdcUnitAssetDetailRequest&,
        DescribeIdcUnitAssetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeIdcUnitDetailOutcome ChcClient::DescribeIdcUnitDetail(const DescribeIdcUnitDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdcUnitDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdcUnitDetailResponse rsp = DescribeIdcUnitDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdcUnitDetailOutcome(rsp);
        else
            return DescribeIdcUnitDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIdcUnitDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeIdcUnitDetailAsync(const DescribeIdcUnitDetailRequest& request, const DescribeIdcUnitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdcUnitDetailRequest&;
    using Resp = DescribeIdcUnitDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdcUnitDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeIdcUnitDetailOutcomeCallable ChcClient::DescribeIdcUnitDetailCallable(const DescribeIdcUnitDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdcUnitDetailOutcome>>();
    DescribeIdcUnitDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeIdcUnitDetailRequest&,
        DescribeIdcUnitDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeIdcsOutcome ChcClient::DescribeIdcs(const DescribeIdcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdcsResponse rsp = DescribeIdcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdcsOutcome(rsp);
        else
            return DescribeIdcsOutcome(o.GetError());
    }
    else
    {
        return DescribeIdcsOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeIdcsAsync(const DescribeIdcsRequest& request, const DescribeIdcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIdcsRequest&;
    using Resp = DescribeIdcsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIdcs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeIdcsOutcomeCallable ChcClient::DescribeIdcsCallable(const DescribeIdcsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIdcsOutcome>>();
    DescribeIdcsAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeIdcsRequest&,
        DescribeIdcsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeModelOutcome ChcClient::DescribeModel(const DescribeModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelResponse rsp = DescribeModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelOutcome(rsp);
        else
            return DescribeModelOutcome(o.GetError());
    }
    else
    {
        return DescribeModelOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelAsync(const DescribeModelRequest& request, const DescribeModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelRequest&;
    using Resp = DescribeModelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeModelOutcomeCallable ChcClient::DescribeModelCallable(const DescribeModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelOutcome>>();
    DescribeModelAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeModelRequest&,
        DescribeModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeModelEvaluationWorkOrderDetailOutcome ChcClient::DescribeModelEvaluationWorkOrderDetail(const DescribeModelEvaluationWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelEvaluationWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelEvaluationWorkOrderDetailResponse rsp = DescribeModelEvaluationWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelEvaluationWorkOrderDetailOutcome(rsp);
        else
            return DescribeModelEvaluationWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeModelEvaluationWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelEvaluationWorkOrderDetailAsync(const DescribeModelEvaluationWorkOrderDetailRequest& request, const DescribeModelEvaluationWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelEvaluationWorkOrderDetailRequest&;
    using Resp = DescribeModelEvaluationWorkOrderDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelEvaluationWorkOrderDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeModelEvaluationWorkOrderDetailOutcomeCallable ChcClient::DescribeModelEvaluationWorkOrderDetailCallable(const DescribeModelEvaluationWorkOrderDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelEvaluationWorkOrderDetailOutcome>>();
    DescribeModelEvaluationWorkOrderDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeModelEvaluationWorkOrderDetailRequest&,
        DescribeModelEvaluationWorkOrderDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeModelTemplateOutcome ChcClient::DescribeModelTemplate(const DescribeModelTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelTemplateResponse rsp = DescribeModelTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelTemplateOutcome(rsp);
        else
            return DescribeModelTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeModelTemplateOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelTemplateAsync(const DescribeModelTemplateRequest& request, const DescribeModelTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelTemplateRequest&;
    using Resp = DescribeModelTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeModelTemplateOutcomeCallable ChcClient::DescribeModelTemplateCallable(const DescribeModelTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelTemplateOutcome>>();
    DescribeModelTemplateAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeModelTemplateRequest&,
        DescribeModelTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeModelVersionListOutcome ChcClient::DescribeModelVersionList(const DescribeModelVersionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelVersionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelVersionListResponse rsp = DescribeModelVersionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelVersionListOutcome(rsp);
        else
            return DescribeModelVersionListOutcome(o.GetError());
    }
    else
    {
        return DescribeModelVersionListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeModelVersionListAsync(const DescribeModelVersionListRequest& request, const DescribeModelVersionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelVersionListRequest&;
    using Resp = DescribeModelVersionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelVersionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeModelVersionListOutcomeCallable ChcClient::DescribeModelVersionListCallable(const DescribeModelVersionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelVersionListOutcome>>();
    DescribeModelVersionListAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeModelVersionListRequest&,
        DescribeModelVersionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribePersonnelVisitWorkOrderDetailOutcome ChcClient::DescribePersonnelVisitWorkOrderDetail(const DescribePersonnelVisitWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePersonnelVisitWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePersonnelVisitWorkOrderDetailResponse rsp = DescribePersonnelVisitWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePersonnelVisitWorkOrderDetailOutcome(rsp);
        else
            return DescribePersonnelVisitWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePersonnelVisitWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::DescribePersonnelVisitWorkOrderDetailAsync(const DescribePersonnelVisitWorkOrderDetailRequest& request, const DescribePersonnelVisitWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePersonnelVisitWorkOrderDetailRequest&;
    using Resp = DescribePersonnelVisitWorkOrderDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePersonnelVisitWorkOrderDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribePersonnelVisitWorkOrderDetailOutcomeCallable ChcClient::DescribePersonnelVisitWorkOrderDetailCallable(const DescribePersonnelVisitWorkOrderDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePersonnelVisitWorkOrderDetailOutcome>>();
    DescribePersonnelVisitWorkOrderDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribePersonnelVisitWorkOrderDetailRequest&,
        DescribePersonnelVisitWorkOrderDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribePositionStatusSummaryOutcome ChcClient::DescribePositionStatusSummary(const DescribePositionStatusSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePositionStatusSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePositionStatusSummaryResponse rsp = DescribePositionStatusSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePositionStatusSummaryOutcome(rsp);
        else
            return DescribePositionStatusSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribePositionStatusSummaryOutcome(outcome.GetError());
    }
}

void ChcClient::DescribePositionStatusSummaryAsync(const DescribePositionStatusSummaryRequest& request, const DescribePositionStatusSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePositionStatusSummaryRequest&;
    using Resp = DescribePositionStatusSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePositionStatusSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribePositionStatusSummaryOutcomeCallable ChcClient::DescribePositionStatusSummaryCallable(const DescribePositionStatusSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePositionStatusSummaryOutcome>>();
    DescribePositionStatusSummaryAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribePositionStatusSummaryRequest&,
        DescribePositionStatusSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribePositionsOutcome ChcClient::DescribePositions(const DescribePositionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePositions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePositionsResponse rsp = DescribePositionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePositionsOutcome(rsp);
        else
            return DescribePositionsOutcome(o.GetError());
    }
    else
    {
        return DescribePositionsOutcome(outcome.GetError());
    }
}

void ChcClient::DescribePositionsAsync(const DescribePositionsRequest& request, const DescribePositionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePositionsRequest&;
    using Resp = DescribePositionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePositions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribePositionsOutcomeCallable ChcClient::DescribePositionsCallable(const DescribePositionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePositionsOutcome>>();
    DescribePositionsAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribePositionsRequest&,
        DescribePositionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeRacksOutcome ChcClient::DescribeRacks(const DescribeRacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRacksResponse rsp = DescribeRacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRacksOutcome(rsp);
        else
            return DescribeRacksOutcome(o.GetError());
    }
    else
    {
        return DescribeRacksOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeRacksAsync(const DescribeRacksRequest& request, const DescribeRacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRacksRequest&;
    using Resp = DescribeRacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeRacksOutcomeCallable ChcClient::DescribeRacksCallable(const DescribeRacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRacksOutcome>>();
    DescribeRacksAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeRacksRequest&,
        DescribeRacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeRacksDistributionOutcome ChcClient::DescribeRacksDistribution(const DescribeRacksDistributionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRacksDistribution");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRacksDistributionResponse rsp = DescribeRacksDistributionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRacksDistributionOutcome(rsp);
        else
            return DescribeRacksDistributionOutcome(o.GetError());
    }
    else
    {
        return DescribeRacksDistributionOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeRacksDistributionAsync(const DescribeRacksDistributionRequest& request, const DescribeRacksDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRacksDistributionRequest&;
    using Resp = DescribeRacksDistributionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRacksDistribution", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeRacksDistributionOutcomeCallable ChcClient::DescribeRacksDistributionCallable(const DescribeRacksDistributionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRacksDistributionOutcome>>();
    DescribeRacksDistributionAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeRacksDistributionRequest&,
        DescribeRacksDistributionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeResourceUsageOutcome ChcClient::DescribeResourceUsage(const DescribeResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceUsageResponse rsp = DescribeResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceUsageOutcome(rsp);
        else
            return DescribeResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceUsageOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeResourceUsageAsync(const DescribeResourceUsageRequest& request, const DescribeResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceUsageRequest&;
    using Resp = DescribeResourceUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeResourceUsageOutcomeCallable ChcClient::DescribeResourceUsageCallable(const DescribeResourceUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceUsageOutcome>>();
    DescribeResourceUsageAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeResourceUsageRequest&,
        DescribeResourceUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeWorkOrderListOutcome ChcClient::DescribeWorkOrderList(const DescribeWorkOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkOrderListResponse rsp = DescribeWorkOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkOrderListOutcome(rsp);
        else
            return DescribeWorkOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkOrderListOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeWorkOrderListAsync(const DescribeWorkOrderListRequest& request, const DescribeWorkOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkOrderListRequest&;
    using Resp = DescribeWorkOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeWorkOrderListOutcomeCallable ChcClient::DescribeWorkOrderListCallable(const DescribeWorkOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkOrderListOutcome>>();
    DescribeWorkOrderListAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeWorkOrderListRequest&,
        DescribeWorkOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeWorkOrderStatisticsOutcome ChcClient::DescribeWorkOrderStatistics(const DescribeWorkOrderStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkOrderStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkOrderStatisticsResponse rsp = DescribeWorkOrderStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkOrderStatisticsOutcome(rsp);
        else
            return DescribeWorkOrderStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkOrderStatisticsOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeWorkOrderStatisticsAsync(const DescribeWorkOrderStatisticsRequest& request, const DescribeWorkOrderStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkOrderStatisticsRequest&;
    using Resp = DescribeWorkOrderStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkOrderStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeWorkOrderStatisticsOutcomeCallable ChcClient::DescribeWorkOrderStatisticsCallable(const DescribeWorkOrderStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkOrderStatisticsOutcome>>();
    DescribeWorkOrderStatisticsAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeWorkOrderStatisticsRequest&,
        DescribeWorkOrderStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::DescribeWorkOrderTypesOutcome ChcClient::DescribeWorkOrderTypes(const DescribeWorkOrderTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkOrderTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkOrderTypesResponse rsp = DescribeWorkOrderTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkOrderTypesOutcome(rsp);
        else
            return DescribeWorkOrderTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkOrderTypesOutcome(outcome.GetError());
    }
}

void ChcClient::DescribeWorkOrderTypesAsync(const DescribeWorkOrderTypesRequest& request, const DescribeWorkOrderTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkOrderTypesRequest&;
    using Resp = DescribeWorkOrderTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkOrderTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::DescribeWorkOrderTypesOutcomeCallable ChcClient::DescribeWorkOrderTypesCallable(const DescribeWorkOrderTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkOrderTypesOutcome>>();
    DescribeWorkOrderTypesAsync(
    request,
    [prom](
        const ChcClient*,
        const DescribeWorkOrderTypesRequest&,
        DescribeWorkOrderTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::ExportCustomerWorkOrderDetailOutcome ChcClient::ExportCustomerWorkOrderDetail(const ExportCustomerWorkOrderDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportCustomerWorkOrderDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportCustomerWorkOrderDetailResponse rsp = ExportCustomerWorkOrderDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportCustomerWorkOrderDetailOutcome(rsp);
        else
            return ExportCustomerWorkOrderDetailOutcome(o.GetError());
    }
    else
    {
        return ExportCustomerWorkOrderDetailOutcome(outcome.GetError());
    }
}

void ChcClient::ExportCustomerWorkOrderDetailAsync(const ExportCustomerWorkOrderDetailRequest& request, const ExportCustomerWorkOrderDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportCustomerWorkOrderDetailRequest&;
    using Resp = ExportCustomerWorkOrderDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ExportCustomerWorkOrderDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::ExportCustomerWorkOrderDetailOutcomeCallable ChcClient::ExportCustomerWorkOrderDetailCallable(const ExportCustomerWorkOrderDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportCustomerWorkOrderDetailOutcome>>();
    ExportCustomerWorkOrderDetailAsync(
    request,
    [prom](
        const ChcClient*,
        const ExportCustomerWorkOrderDetailRequest&,
        ExportCustomerWorkOrderDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChcClient::ModifyWorkOrderTypeCollectFlagOutcome ChcClient::ModifyWorkOrderTypeCollectFlag(const ModifyWorkOrderTypeCollectFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkOrderTypeCollectFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkOrderTypeCollectFlagResponse rsp = ModifyWorkOrderTypeCollectFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkOrderTypeCollectFlagOutcome(rsp);
        else
            return ModifyWorkOrderTypeCollectFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkOrderTypeCollectFlagOutcome(outcome.GetError());
    }
}

void ChcClient::ModifyWorkOrderTypeCollectFlagAsync(const ModifyWorkOrderTypeCollectFlagRequest& request, const ModifyWorkOrderTypeCollectFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkOrderTypeCollectFlagRequest&;
    using Resp = ModifyWorkOrderTypeCollectFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkOrderTypeCollectFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChcClient::ModifyWorkOrderTypeCollectFlagOutcomeCallable ChcClient::ModifyWorkOrderTypeCollectFlagCallable(const ModifyWorkOrderTypeCollectFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkOrderTypeCollectFlagOutcome>>();
    ModifyWorkOrderTypeCollectFlagAsync(
    request,
    [prom](
        const ChcClient*,
        const ModifyWorkOrderTypeCollectFlagRequest&,
        ModifyWorkOrderTypeCollectFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

