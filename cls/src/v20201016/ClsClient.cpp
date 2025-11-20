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

#include <tencentcloud/cls/v20201016/ClsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cls::V20201016;
using namespace TencentCloud::Cls::V20201016::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-16";
    const string ENDPOINT = "cls.tencentcloudapi.com";
}

ClsClient::ClsClient(const Credential &credential, const string &region) :
    ClsClient(credential, region, ClientProfile())
{
}

ClsClient::ClsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ClsClient::AddMachineGroupInfoOutcome ClsClient::AddMachineGroupInfo(const AddMachineGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddMachineGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddMachineGroupInfoResponse rsp = AddMachineGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddMachineGroupInfoOutcome(rsp);
        else
            return AddMachineGroupInfoOutcome(o.GetError());
    }
    else
    {
        return AddMachineGroupInfoOutcome(outcome.GetError());
    }
}

void ClsClient::AddMachineGroupInfoAsync(const AddMachineGroupInfoRequest& request, const AddMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddMachineGroupInfoRequest&;
    using Resp = AddMachineGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddMachineGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::AddMachineGroupInfoOutcomeCallable ClsClient::AddMachineGroupInfoCallable(const AddMachineGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddMachineGroupInfoOutcome>>();
    AddMachineGroupInfoAsync(
    request,
    [prom](
        const ClsClient*,
        const AddMachineGroupInfoRequest&,
        AddMachineGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ApplyConfigToMachineGroupOutcome ClsClient::ApplyConfigToMachineGroup(const ApplyConfigToMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyConfigToMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyConfigToMachineGroupResponse rsp = ApplyConfigToMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyConfigToMachineGroupOutcome(rsp);
        else
            return ApplyConfigToMachineGroupOutcome(o.GetError());
    }
    else
    {
        return ApplyConfigToMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::ApplyConfigToMachineGroupAsync(const ApplyConfigToMachineGroupRequest& request, const ApplyConfigToMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyConfigToMachineGroupRequest&;
    using Resp = ApplyConfigToMachineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyConfigToMachineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ApplyConfigToMachineGroupOutcomeCallable ClsClient::ApplyConfigToMachineGroupCallable(const ApplyConfigToMachineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyConfigToMachineGroupOutcome>>();
    ApplyConfigToMachineGroupAsync(
    request,
    [prom](
        const ClsClient*,
        const ApplyConfigToMachineGroupRequest&,
        ApplyConfigToMachineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CheckFunctionOutcome ClsClient::CheckFunction(const CheckFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFunctionResponse rsp = CheckFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFunctionOutcome(rsp);
        else
            return CheckFunctionOutcome(o.GetError());
    }
    else
    {
        return CheckFunctionOutcome(outcome.GetError());
    }
}

void ClsClient::CheckFunctionAsync(const CheckFunctionRequest& request, const CheckFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckFunctionRequest&;
    using Resp = CheckFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "CheckFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CheckFunctionOutcomeCallable ClsClient::CheckFunctionCallable(const CheckFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckFunctionOutcome>>();
    CheckFunctionAsync(
    request,
    [prom](
        const ClsClient*,
        const CheckFunctionRequest&,
        CheckFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CheckRechargeKafkaServerOutcome ClsClient::CheckRechargeKafkaServer(const CheckRechargeKafkaServerRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRechargeKafkaServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRechargeKafkaServerResponse rsp = CheckRechargeKafkaServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRechargeKafkaServerOutcome(rsp);
        else
            return CheckRechargeKafkaServerOutcome(o.GetError());
    }
    else
    {
        return CheckRechargeKafkaServerOutcome(outcome.GetError());
    }
}

void ClsClient::CheckRechargeKafkaServerAsync(const CheckRechargeKafkaServerRequest& request, const CheckRechargeKafkaServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckRechargeKafkaServerRequest&;
    using Resp = CheckRechargeKafkaServerResponse;

    DoRequestAsync<Req, Resp>(
        "CheckRechargeKafkaServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CheckRechargeKafkaServerOutcomeCallable ClsClient::CheckRechargeKafkaServerCallable(const CheckRechargeKafkaServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckRechargeKafkaServerOutcome>>();
    CheckRechargeKafkaServerAsync(
    request,
    [prom](
        const ClsClient*,
        const CheckRechargeKafkaServerRequest&,
        CheckRechargeKafkaServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CloseKafkaConsumerOutcome ClsClient::CloseKafkaConsumer(const CloseKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CloseKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseKafkaConsumerResponse rsp = CloseKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseKafkaConsumerOutcome(rsp);
        else
            return CloseKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return CloseKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::CloseKafkaConsumerAsync(const CloseKafkaConsumerRequest& request, const CloseKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseKafkaConsumerRequest&;
    using Resp = CloseKafkaConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "CloseKafkaConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CloseKafkaConsumerOutcomeCallable ClsClient::CloseKafkaConsumerCallable(const CloseKafkaConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseKafkaConsumerOutcome>>();
    CloseKafkaConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const CloseKafkaConsumerRequest&,
        CloseKafkaConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateAlarmOutcome ClsClient::CreateAlarm(const CreateAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmResponse rsp = CreateAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmOutcome(rsp);
        else
            return CreateAlarmOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmAsync(const CreateAlarmRequest& request, const CreateAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmRequest&;
    using Resp = CreateAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateAlarmOutcomeCallable ClsClient::CreateAlarmCallable(const CreateAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmOutcome>>();
    CreateAlarmAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateAlarmRequest&,
        CreateAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateAlarmNoticeOutcome ClsClient::CreateAlarmNotice(const CreateAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmNoticeResponse rsp = CreateAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmNoticeOutcome(rsp);
        else
            return CreateAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmNoticeAsync(const CreateAlarmNoticeRequest& request, const CreateAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmNoticeRequest&;
    using Resp = CreateAlarmNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarmNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateAlarmNoticeOutcomeCallable ClsClient::CreateAlarmNoticeCallable(const CreateAlarmNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmNoticeOutcome>>();
    CreateAlarmNoticeAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateAlarmNoticeRequest&,
        CreateAlarmNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateAlarmShieldOutcome ClsClient::CreateAlarmShield(const CreateAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAlarmShieldResponse rsp = CreateAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAlarmShieldOutcome(rsp);
        else
            return CreateAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return CreateAlarmShieldOutcome(outcome.GetError());
    }
}

void ClsClient::CreateAlarmShieldAsync(const CreateAlarmShieldRequest& request, const CreateAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAlarmShieldRequest&;
    using Resp = CreateAlarmShieldResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAlarmShield", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateAlarmShieldOutcomeCallable ClsClient::CreateAlarmShieldCallable(const CreateAlarmShieldRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAlarmShieldOutcome>>();
    CreateAlarmShieldAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateAlarmShieldRequest&,
        CreateAlarmShieldOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateCloudProductLogCollectionOutcome ClsClient::CreateCloudProductLogCollection(const CreateCloudProductLogCollectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudProductLogCollection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudProductLogCollectionResponse rsp = CreateCloudProductLogCollectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudProductLogCollectionOutcome(rsp);
        else
            return CreateCloudProductLogCollectionOutcome(o.GetError());
    }
    else
    {
        return CreateCloudProductLogCollectionOutcome(outcome.GetError());
    }
}

void ClsClient::CreateCloudProductLogCollectionAsync(const CreateCloudProductLogCollectionRequest& request, const CreateCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudProductLogCollectionRequest&;
    using Resp = CreateCloudProductLogCollectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudProductLogCollection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateCloudProductLogCollectionOutcomeCallable ClsClient::CreateCloudProductLogCollectionCallable(const CreateCloudProductLogCollectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudProductLogCollectionOutcome>>();
    CreateCloudProductLogCollectionAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateCloudProductLogCollectionRequest&,
        CreateCloudProductLogCollectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateConfigOutcome ClsClient::CreateConfig(const CreateConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigResponse rsp = CreateConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigOutcome(rsp);
        else
            return CreateConfigOutcome(o.GetError());
    }
    else
    {
        return CreateConfigOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigRequest&;
    using Resp = CreateConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateConfigOutcomeCallable ClsClient::CreateConfigCallable(const CreateConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigOutcome>>();
    CreateConfigAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateConfigRequest&,
        CreateConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateConfigExtraOutcome ClsClient::CreateConfigExtra(const CreateConfigExtraRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigExtraResponse rsp = CreateConfigExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigExtraOutcome(rsp);
        else
            return CreateConfigExtraOutcome(o.GetError());
    }
    else
    {
        return CreateConfigExtraOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConfigExtraAsync(const CreateConfigExtraRequest& request, const CreateConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigExtraRequest&;
    using Resp = CreateConfigExtraResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigExtra", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateConfigExtraOutcomeCallable ClsClient::CreateConfigExtraCallable(const CreateConfigExtraRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigExtraOutcome>>();
    CreateConfigExtraAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateConfigExtraRequest&,
        CreateConfigExtraOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateConsoleSharingOutcome ClsClient::CreateConsoleSharing(const CreateConsoleSharingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleSharing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleSharingResponse rsp = CreateConsoleSharingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleSharingOutcome(rsp);
        else
            return CreateConsoleSharingOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleSharingOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConsoleSharingAsync(const CreateConsoleSharingRequest& request, const CreateConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsoleSharingRequest&;
    using Resp = CreateConsoleSharingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsoleSharing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateConsoleSharingOutcomeCallable ClsClient::CreateConsoleSharingCallable(const CreateConsoleSharingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsoleSharingOutcome>>();
    CreateConsoleSharingAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateConsoleSharingRequest&,
        CreateConsoleSharingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateConsumerOutcome ClsClient::CreateConsumer(const CreateConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerResponse rsp = CreateConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerOutcome(rsp);
        else
            return CreateConsumerOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::CreateConsumerAsync(const CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsumerRequest&;
    using Resp = CreateConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateConsumerOutcomeCallable ClsClient::CreateConsumerCallable(const CreateConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsumerOutcome>>();
    CreateConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateConsumerRequest&,
        CreateConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateCosRechargeOutcome ClsClient::CreateCosRecharge(const CreateCosRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosRechargeResponse rsp = CreateCosRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosRechargeOutcome(rsp);
        else
            return CreateCosRechargeOutcome(o.GetError());
    }
    else
    {
        return CreateCosRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateCosRechargeAsync(const CreateCosRechargeRequest& request, const CreateCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosRechargeRequest&;
    using Resp = CreateCosRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateCosRechargeOutcomeCallable ClsClient::CreateCosRechargeCallable(const CreateCosRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosRechargeOutcome>>();
    CreateCosRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateCosRechargeRequest&,
        CreateCosRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateDashboardSubscribeOutcome ClsClient::CreateDashboardSubscribe(const CreateDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDashboardSubscribeResponse rsp = CreateDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDashboardSubscribeOutcome(rsp);
        else
            return CreateDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return CreateDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateDashboardSubscribeAsync(const CreateDashboardSubscribeRequest& request, const CreateDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDashboardSubscribeRequest&;
    using Resp = CreateDashboardSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDashboardSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateDashboardSubscribeOutcomeCallable ClsClient::CreateDashboardSubscribeCallable(const CreateDashboardSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDashboardSubscribeOutcome>>();
    CreateDashboardSubscribeAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateDashboardSubscribeRequest&,
        CreateDashboardSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateDataTransformOutcome ClsClient::CreateDataTransform(const CreateDataTransformRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDataTransform");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDataTransformResponse rsp = CreateDataTransformResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDataTransformOutcome(rsp);
        else
            return CreateDataTransformOutcome(o.GetError());
    }
    else
    {
        return CreateDataTransformOutcome(outcome.GetError());
    }
}

void ClsClient::CreateDataTransformAsync(const CreateDataTransformRequest& request, const CreateDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDataTransformRequest&;
    using Resp = CreateDataTransformResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDataTransform", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateDataTransformOutcomeCallable ClsClient::CreateDataTransformCallable(const CreateDataTransformRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDataTransformOutcome>>();
    CreateDataTransformAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateDataTransformRequest&,
        CreateDataTransformOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateDeliverCloudFunctionOutcome ClsClient::CreateDeliverCloudFunction(const CreateDeliverCloudFunctionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeliverCloudFunction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeliverCloudFunctionResponse rsp = CreateDeliverCloudFunctionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeliverCloudFunctionOutcome(rsp);
        else
            return CreateDeliverCloudFunctionOutcome(o.GetError());
    }
    else
    {
        return CreateDeliverCloudFunctionOutcome(outcome.GetError());
    }
}

void ClsClient::CreateDeliverCloudFunctionAsync(const CreateDeliverCloudFunctionRequest& request, const CreateDeliverCloudFunctionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeliverCloudFunctionRequest&;
    using Resp = CreateDeliverCloudFunctionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeliverCloudFunction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateDeliverCloudFunctionOutcomeCallable ClsClient::CreateDeliverCloudFunctionCallable(const CreateDeliverCloudFunctionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeliverCloudFunctionOutcome>>();
    CreateDeliverCloudFunctionAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateDeliverCloudFunctionRequest&,
        CreateDeliverCloudFunctionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateExportOutcome ClsClient::CreateExport(const CreateExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExportResponse rsp = CreateExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExportOutcome(rsp);
        else
            return CreateExportOutcome(o.GetError());
    }
    else
    {
        return CreateExportOutcome(outcome.GetError());
    }
}

void ClsClient::CreateExportAsync(const CreateExportRequest& request, const CreateExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExportRequest&;
    using Resp = CreateExportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateExportOutcomeCallable ClsClient::CreateExportCallable(const CreateExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExportOutcome>>();
    CreateExportAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateExportRequest&,
        CreateExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateIndexOutcome ClsClient::CreateIndex(const CreateIndexRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIndexResponse rsp = CreateIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIndexOutcome(rsp);
        else
            return CreateIndexOutcome(o.GetError());
    }
    else
    {
        return CreateIndexOutcome(outcome.GetError());
    }
}

void ClsClient::CreateIndexAsync(const CreateIndexRequest& request, const CreateIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIndexRequest&;
    using Resp = CreateIndexResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateIndexOutcomeCallable ClsClient::CreateIndexCallable(const CreateIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIndexOutcome>>();
    CreateIndexAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateIndexRequest&,
        CreateIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateKafkaRechargeOutcome ClsClient::CreateKafkaRecharge(const CreateKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKafkaRechargeResponse rsp = CreateKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKafkaRechargeOutcome(rsp);
        else
            return CreateKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return CreateKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::CreateKafkaRechargeAsync(const CreateKafkaRechargeRequest& request, const CreateKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKafkaRechargeRequest&;
    using Resp = CreateKafkaRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKafkaRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateKafkaRechargeOutcomeCallable ClsClient::CreateKafkaRechargeCallable(const CreateKafkaRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKafkaRechargeOutcome>>();
    CreateKafkaRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateKafkaRechargeRequest&,
        CreateKafkaRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateLogsetOutcome ClsClient::CreateLogset(const CreateLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogsetResponse rsp = CreateLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogsetOutcome(rsp);
        else
            return CreateLogsetOutcome(o.GetError());
    }
    else
    {
        return CreateLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::CreateLogsetAsync(const CreateLogsetRequest& request, const CreateLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLogsetRequest&;
    using Resp = CreateLogsetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLogset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateLogsetOutcomeCallable ClsClient::CreateLogsetCallable(const CreateLogsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLogsetOutcome>>();
    CreateLogsetAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateLogsetRequest&,
        CreateLogsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateMachineGroupOutcome ClsClient::CreateMachineGroup(const CreateMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMachineGroupResponse rsp = CreateMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMachineGroupOutcome(rsp);
        else
            return CreateMachineGroupOutcome(o.GetError());
    }
    else
    {
        return CreateMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::CreateMachineGroupAsync(const CreateMachineGroupRequest& request, const CreateMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMachineGroupRequest&;
    using Resp = CreateMachineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMachineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateMachineGroupOutcomeCallable ClsClient::CreateMachineGroupCallable(const CreateMachineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMachineGroupOutcome>>();
    CreateMachineGroupAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateMachineGroupRequest&,
        CreateMachineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateNoticeContentOutcome ClsClient::CreateNoticeContent(const CreateNoticeContentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNoticeContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNoticeContentResponse rsp = CreateNoticeContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNoticeContentOutcome(rsp);
        else
            return CreateNoticeContentOutcome(o.GetError());
    }
    else
    {
        return CreateNoticeContentOutcome(outcome.GetError());
    }
}

void ClsClient::CreateNoticeContentAsync(const CreateNoticeContentRequest& request, const CreateNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNoticeContentRequest&;
    using Resp = CreateNoticeContentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNoticeContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateNoticeContentOutcomeCallable ClsClient::CreateNoticeContentCallable(const CreateNoticeContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNoticeContentOutcome>>();
    CreateNoticeContentAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateNoticeContentRequest&,
        CreateNoticeContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateScheduledSqlOutcome ClsClient::CreateScheduledSql(const CreateScheduledSqlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScheduledSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScheduledSqlResponse rsp = CreateScheduledSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScheduledSqlOutcome(rsp);
        else
            return CreateScheduledSqlOutcome(o.GetError());
    }
    else
    {
        return CreateScheduledSqlOutcome(outcome.GetError());
    }
}

void ClsClient::CreateScheduledSqlAsync(const CreateScheduledSqlRequest& request, const CreateScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScheduledSqlRequest&;
    using Resp = CreateScheduledSqlResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScheduledSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateScheduledSqlOutcomeCallable ClsClient::CreateScheduledSqlCallable(const CreateScheduledSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScheduledSqlOutcome>>();
    CreateScheduledSqlAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateScheduledSqlRequest&,
        CreateScheduledSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateShipperOutcome ClsClient::CreateShipper(const CreateShipperRequest &request)
{
    auto outcome = MakeRequest(request, "CreateShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateShipperResponse rsp = CreateShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateShipperOutcome(rsp);
        else
            return CreateShipperOutcome(o.GetError());
    }
    else
    {
        return CreateShipperOutcome(outcome.GetError());
    }
}

void ClsClient::CreateShipperAsync(const CreateShipperRequest& request, const CreateShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateShipperRequest&;
    using Resp = CreateShipperResponse;

    DoRequestAsync<Req, Resp>(
        "CreateShipper", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateShipperOutcomeCallable ClsClient::CreateShipperCallable(const CreateShipperRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateShipperOutcome>>();
    CreateShipperAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateShipperRequest&,
        CreateShipperOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateTopicOutcome ClsClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void ClsClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTopicRequest&;
    using Resp = CreateTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateTopicOutcomeCallable ClsClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicOutcome>>();
    CreateTopicAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateTopicRequest&,
        CreateTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::CreateWebCallbackOutcome ClsClient::CreateWebCallback(const CreateWebCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWebCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWebCallbackResponse rsp = CreateWebCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWebCallbackOutcome(rsp);
        else
            return CreateWebCallbackOutcome(o.GetError());
    }
    else
    {
        return CreateWebCallbackOutcome(outcome.GetError());
    }
}

void ClsClient::CreateWebCallbackAsync(const CreateWebCallbackRequest& request, const CreateWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWebCallbackRequest&;
    using Resp = CreateWebCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWebCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::CreateWebCallbackOutcomeCallable ClsClient::CreateWebCallbackCallable(const CreateWebCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWebCallbackOutcome>>();
    CreateWebCallbackAsync(
    request,
    [prom](
        const ClsClient*,
        const CreateWebCallbackRequest&,
        CreateWebCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteAlarmOutcome ClsClient::DeleteAlarm(const DeleteAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmResponse rsp = DeleteAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmOutcome(rsp);
        else
            return DeleteAlarmOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmAsync(const DeleteAlarmRequest& request, const DeleteAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmRequest&;
    using Resp = DeleteAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteAlarmOutcomeCallable ClsClient::DeleteAlarmCallable(const DeleteAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmOutcome>>();
    DeleteAlarmAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteAlarmRequest&,
        DeleteAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteAlarmNoticeOutcome ClsClient::DeleteAlarmNotice(const DeleteAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmNoticeResponse rsp = DeleteAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmNoticeOutcome(rsp);
        else
            return DeleteAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmNoticeAsync(const DeleteAlarmNoticeRequest& request, const DeleteAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmNoticeRequest&;
    using Resp = DeleteAlarmNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarmNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteAlarmNoticeOutcomeCallable ClsClient::DeleteAlarmNoticeCallable(const DeleteAlarmNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmNoticeOutcome>>();
    DeleteAlarmNoticeAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteAlarmNoticeRequest&,
        DeleteAlarmNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteAlarmShieldOutcome ClsClient::DeleteAlarmShield(const DeleteAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAlarmShieldResponse rsp = DeleteAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAlarmShieldOutcome(rsp);
        else
            return DeleteAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return DeleteAlarmShieldOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteAlarmShieldAsync(const DeleteAlarmShieldRequest& request, const DeleteAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAlarmShieldRequest&;
    using Resp = DeleteAlarmShieldResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAlarmShield", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteAlarmShieldOutcomeCallable ClsClient::DeleteAlarmShieldCallable(const DeleteAlarmShieldRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAlarmShieldOutcome>>();
    DeleteAlarmShieldAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteAlarmShieldRequest&,
        DeleteAlarmShieldOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteCloudProductLogCollectionOutcome ClsClient::DeleteCloudProductLogCollection(const DeleteCloudProductLogCollectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCloudProductLogCollection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCloudProductLogCollectionResponse rsp = DeleteCloudProductLogCollectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCloudProductLogCollectionOutcome(rsp);
        else
            return DeleteCloudProductLogCollectionOutcome(o.GetError());
    }
    else
    {
        return DeleteCloudProductLogCollectionOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteCloudProductLogCollectionAsync(const DeleteCloudProductLogCollectionRequest& request, const DeleteCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCloudProductLogCollectionRequest&;
    using Resp = DeleteCloudProductLogCollectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCloudProductLogCollection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteCloudProductLogCollectionOutcomeCallable ClsClient::DeleteCloudProductLogCollectionCallable(const DeleteCloudProductLogCollectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCloudProductLogCollectionOutcome>>();
    DeleteCloudProductLogCollectionAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteCloudProductLogCollectionRequest&,
        DeleteCloudProductLogCollectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteConfigOutcome ClsClient::DeleteConfig(const DeleteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigResponse rsp = DeleteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigOutcome(rsp);
        else
            return DeleteConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigRequest&;
    using Resp = DeleteConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteConfigOutcomeCallable ClsClient::DeleteConfigCallable(const DeleteConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigOutcome>>();
    DeleteConfigAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteConfigRequest&,
        DeleteConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteConfigExtraOutcome ClsClient::DeleteConfigExtra(const DeleteConfigExtraRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigExtraResponse rsp = DeleteConfigExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigExtraOutcome(rsp);
        else
            return DeleteConfigExtraOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigExtraOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigExtraAsync(const DeleteConfigExtraRequest& request, const DeleteConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigExtraRequest&;
    using Resp = DeleteConfigExtraResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigExtra", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteConfigExtraOutcomeCallable ClsClient::DeleteConfigExtraCallable(const DeleteConfigExtraRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigExtraOutcome>>();
    DeleteConfigExtraAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteConfigExtraRequest&,
        DeleteConfigExtraOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteConfigFromMachineGroupOutcome ClsClient::DeleteConfigFromMachineGroup(const DeleteConfigFromMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigFromMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigFromMachineGroupResponse rsp = DeleteConfigFromMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigFromMachineGroupOutcome(rsp);
        else
            return DeleteConfigFromMachineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigFromMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConfigFromMachineGroupAsync(const DeleteConfigFromMachineGroupRequest& request, const DeleteConfigFromMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigFromMachineGroupRequest&;
    using Resp = DeleteConfigFromMachineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigFromMachineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteConfigFromMachineGroupOutcomeCallable ClsClient::DeleteConfigFromMachineGroupCallable(const DeleteConfigFromMachineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigFromMachineGroupOutcome>>();
    DeleteConfigFromMachineGroupAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteConfigFromMachineGroupRequest&,
        DeleteConfigFromMachineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteConsoleSharingOutcome ClsClient::DeleteConsoleSharing(const DeleteConsoleSharingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsoleSharing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsoleSharingResponse rsp = DeleteConsoleSharingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsoleSharingOutcome(rsp);
        else
            return DeleteConsoleSharingOutcome(o.GetError());
    }
    else
    {
        return DeleteConsoleSharingOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConsoleSharingAsync(const DeleteConsoleSharingRequest& request, const DeleteConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConsoleSharingRequest&;
    using Resp = DeleteConsoleSharingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConsoleSharing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteConsoleSharingOutcomeCallable ClsClient::DeleteConsoleSharingCallable(const DeleteConsoleSharingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConsoleSharingOutcome>>();
    DeleteConsoleSharingAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteConsoleSharingRequest&,
        DeleteConsoleSharingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteConsumerOutcome ClsClient::DeleteConsumer(const DeleteConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerResponse rsp = DeleteConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerOutcome(rsp);
        else
            return DeleteConsumerOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteConsumerAsync(const DeleteConsumerRequest& request, const DeleteConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConsumerRequest&;
    using Resp = DeleteConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteConsumerOutcomeCallable ClsClient::DeleteConsumerCallable(const DeleteConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConsumerOutcome>>();
    DeleteConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteConsumerRequest&,
        DeleteConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteCosRechargeOutcome ClsClient::DeleteCosRecharge(const DeleteCosRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCosRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCosRechargeResponse rsp = DeleteCosRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCosRechargeOutcome(rsp);
        else
            return DeleteCosRechargeOutcome(o.GetError());
    }
    else
    {
        return DeleteCosRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteCosRechargeAsync(const DeleteCosRechargeRequest& request, const DeleteCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCosRechargeRequest&;
    using Resp = DeleteCosRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCosRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteCosRechargeOutcomeCallable ClsClient::DeleteCosRechargeCallable(const DeleteCosRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCosRechargeOutcome>>();
    DeleteCosRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteCosRechargeRequest&,
        DeleteCosRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteDashboardSubscribeOutcome ClsClient::DeleteDashboardSubscribe(const DeleteDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDashboardSubscribeResponse rsp = DeleteDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDashboardSubscribeOutcome(rsp);
        else
            return DeleteDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return DeleteDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteDashboardSubscribeAsync(const DeleteDashboardSubscribeRequest& request, const DeleteDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDashboardSubscribeRequest&;
    using Resp = DeleteDashboardSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDashboardSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteDashboardSubscribeOutcomeCallable ClsClient::DeleteDashboardSubscribeCallable(const DeleteDashboardSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDashboardSubscribeOutcome>>();
    DeleteDashboardSubscribeAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteDashboardSubscribeRequest&,
        DeleteDashboardSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteDataTransformOutcome ClsClient::DeleteDataTransform(const DeleteDataTransformRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDataTransform");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDataTransformResponse rsp = DeleteDataTransformResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDataTransformOutcome(rsp);
        else
            return DeleteDataTransformOutcome(o.GetError());
    }
    else
    {
        return DeleteDataTransformOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteDataTransformAsync(const DeleteDataTransformRequest& request, const DeleteDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDataTransformRequest&;
    using Resp = DeleteDataTransformResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDataTransform", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteDataTransformOutcomeCallable ClsClient::DeleteDataTransformCallable(const DeleteDataTransformRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDataTransformOutcome>>();
    DeleteDataTransformAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteDataTransformRequest&,
        DeleteDataTransformOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteExportOutcome ClsClient::DeleteExport(const DeleteExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteExportResponse rsp = DeleteExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteExportOutcome(rsp);
        else
            return DeleteExportOutcome(o.GetError());
    }
    else
    {
        return DeleteExportOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteExportAsync(const DeleteExportRequest& request, const DeleteExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteExportRequest&;
    using Resp = DeleteExportResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteExportOutcomeCallable ClsClient::DeleteExportCallable(const DeleteExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteExportOutcome>>();
    DeleteExportAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteExportRequest&,
        DeleteExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteIndexOutcome ClsClient::DeleteIndex(const DeleteIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIndexResponse rsp = DeleteIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIndexOutcome(rsp);
        else
            return DeleteIndexOutcome(o.GetError());
    }
    else
    {
        return DeleteIndexOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteIndexAsync(const DeleteIndexRequest& request, const DeleteIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIndexRequest&;
    using Resp = DeleteIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteIndexOutcomeCallable ClsClient::DeleteIndexCallable(const DeleteIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIndexOutcome>>();
    DeleteIndexAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteIndexRequest&,
        DeleteIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteKafkaRechargeOutcome ClsClient::DeleteKafkaRecharge(const DeleteKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKafkaRechargeResponse rsp = DeleteKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKafkaRechargeOutcome(rsp);
        else
            return DeleteKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return DeleteKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteKafkaRechargeAsync(const DeleteKafkaRechargeRequest& request, const DeleteKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteKafkaRechargeRequest&;
    using Resp = DeleteKafkaRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKafkaRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteKafkaRechargeOutcomeCallable ClsClient::DeleteKafkaRechargeCallable(const DeleteKafkaRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKafkaRechargeOutcome>>();
    DeleteKafkaRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteKafkaRechargeRequest&,
        DeleteKafkaRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteLogsetOutcome ClsClient::DeleteLogset(const DeleteLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogsetResponse rsp = DeleteLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogsetOutcome(rsp);
        else
            return DeleteLogsetOutcome(o.GetError());
    }
    else
    {
        return DeleteLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteLogsetAsync(const DeleteLogsetRequest& request, const DeleteLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogsetRequest&;
    using Resp = DeleteLogsetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteLogsetOutcomeCallable ClsClient::DeleteLogsetCallable(const DeleteLogsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogsetOutcome>>();
    DeleteLogsetAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteLogsetRequest&,
        DeleteLogsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteMachineGroupOutcome ClsClient::DeleteMachineGroup(const DeleteMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineGroupResponse rsp = DeleteMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineGroupOutcome(rsp);
        else
            return DeleteMachineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteMachineGroupAsync(const DeleteMachineGroupRequest& request, const DeleteMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineGroupRequest&;
    using Resp = DeleteMachineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteMachineGroupOutcomeCallable ClsClient::DeleteMachineGroupCallable(const DeleteMachineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineGroupOutcome>>();
    DeleteMachineGroupAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteMachineGroupRequest&,
        DeleteMachineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteMachineGroupInfoOutcome ClsClient::DeleteMachineGroupInfo(const DeleteMachineGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineGroupInfoResponse rsp = DeleteMachineGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineGroupInfoOutcome(rsp);
        else
            return DeleteMachineGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineGroupInfoOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteMachineGroupInfoAsync(const DeleteMachineGroupInfoRequest& request, const DeleteMachineGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineGroupInfoRequest&;
    using Resp = DeleteMachineGroupInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachineGroupInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteMachineGroupInfoOutcomeCallable ClsClient::DeleteMachineGroupInfoCallable(const DeleteMachineGroupInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineGroupInfoOutcome>>();
    DeleteMachineGroupInfoAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteMachineGroupInfoRequest&,
        DeleteMachineGroupInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteNoticeContentOutcome ClsClient::DeleteNoticeContent(const DeleteNoticeContentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNoticeContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNoticeContentResponse rsp = DeleteNoticeContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNoticeContentOutcome(rsp);
        else
            return DeleteNoticeContentOutcome(o.GetError());
    }
    else
    {
        return DeleteNoticeContentOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteNoticeContentAsync(const DeleteNoticeContentRequest& request, const DeleteNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNoticeContentRequest&;
    using Resp = DeleteNoticeContentResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNoticeContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteNoticeContentOutcomeCallable ClsClient::DeleteNoticeContentCallable(const DeleteNoticeContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNoticeContentOutcome>>();
    DeleteNoticeContentAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteNoticeContentRequest&,
        DeleteNoticeContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteScheduledSqlOutcome ClsClient::DeleteScheduledSql(const DeleteScheduledSqlRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScheduledSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScheduledSqlResponse rsp = DeleteScheduledSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScheduledSqlOutcome(rsp);
        else
            return DeleteScheduledSqlOutcome(o.GetError());
    }
    else
    {
        return DeleteScheduledSqlOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteScheduledSqlAsync(const DeleteScheduledSqlRequest& request, const DeleteScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteScheduledSqlRequest&;
    using Resp = DeleteScheduledSqlResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScheduledSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteScheduledSqlOutcomeCallable ClsClient::DeleteScheduledSqlCallable(const DeleteScheduledSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScheduledSqlOutcome>>();
    DeleteScheduledSqlAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteScheduledSqlRequest&,
        DeleteScheduledSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteShipperOutcome ClsClient::DeleteShipper(const DeleteShipperRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShipperResponse rsp = DeleteShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShipperOutcome(rsp);
        else
            return DeleteShipperOutcome(o.GetError());
    }
    else
    {
        return DeleteShipperOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteShipperAsync(const DeleteShipperRequest& request, const DeleteShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteShipperRequest&;
    using Resp = DeleteShipperResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteShipper", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteShipperOutcomeCallable ClsClient::DeleteShipperCallable(const DeleteShipperRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteShipperOutcome>>();
    DeleteShipperAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteShipperRequest&,
        DeleteShipperOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteTopicOutcome ClsClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTopicRequest&;
    using Resp = DeleteTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteTopicOutcomeCallable ClsClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicOutcome>>();
    DeleteTopicAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteTopicRequest&,
        DeleteTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DeleteWebCallbackOutcome ClsClient::DeleteWebCallback(const DeleteWebCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebCallbackResponse rsp = DeleteWebCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebCallbackOutcome(rsp);
        else
            return DeleteWebCallbackOutcome(o.GetError());
    }
    else
    {
        return DeleteWebCallbackOutcome(outcome.GetError());
    }
}

void ClsClient::DeleteWebCallbackAsync(const DeleteWebCallbackRequest& request, const DeleteWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebCallbackRequest&;
    using Resp = DeleteWebCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DeleteWebCallbackOutcomeCallable ClsClient::DeleteWebCallbackCallable(const DeleteWebCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebCallbackOutcome>>();
    DeleteWebCallbackAsync(
    request,
    [prom](
        const ClsClient*,
        const DeleteWebCallbackRequest&,
        DeleteWebCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeAlarmNoticesOutcome ClsClient::DescribeAlarmNotices(const DescribeAlarmNoticesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmNotices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmNoticesResponse rsp = DescribeAlarmNoticesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmNoticesOutcome(rsp);
        else
            return DescribeAlarmNoticesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmNoticesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmNoticesAsync(const DescribeAlarmNoticesRequest& request, const DescribeAlarmNoticesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmNoticesRequest&;
    using Resp = DescribeAlarmNoticesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmNotices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeAlarmNoticesOutcomeCallable ClsClient::DescribeAlarmNoticesCallable(const DescribeAlarmNoticesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmNoticesOutcome>>();
    DescribeAlarmNoticesAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeAlarmNoticesRequest&,
        DescribeAlarmNoticesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeAlarmShieldsOutcome ClsClient::DescribeAlarmShields(const DescribeAlarmShieldsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmShields");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmShieldsResponse rsp = DescribeAlarmShieldsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmShieldsOutcome(rsp);
        else
            return DescribeAlarmShieldsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmShieldsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmShieldsAsync(const DescribeAlarmShieldsRequest& request, const DescribeAlarmShieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmShieldsRequest&;
    using Resp = DescribeAlarmShieldsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmShields", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeAlarmShieldsOutcomeCallable ClsClient::DescribeAlarmShieldsCallable(const DescribeAlarmShieldsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmShieldsOutcome>>();
    DescribeAlarmShieldsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeAlarmShieldsRequest&,
        DescribeAlarmShieldsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeAlarmsOutcome ClsClient::DescribeAlarms(const DescribeAlarmsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmsResponse rsp = DescribeAlarmsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmsOutcome(rsp);
        else
            return DescribeAlarmsOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlarmsAsync(const DescribeAlarmsRequest& request, const DescribeAlarmsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmsRequest&;
    using Resp = DescribeAlarmsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeAlarmsOutcomeCallable ClsClient::DescribeAlarmsCallable(const DescribeAlarmsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmsOutcome>>();
    DescribeAlarmsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeAlarmsRequest&,
        DescribeAlarmsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeAlertRecordHistoryOutcome ClsClient::DescribeAlertRecordHistory(const DescribeAlertRecordHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertRecordHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertRecordHistoryResponse rsp = DescribeAlertRecordHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertRecordHistoryOutcome(rsp);
        else
            return DescribeAlertRecordHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertRecordHistoryOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeAlertRecordHistoryAsync(const DescribeAlertRecordHistoryRequest& request, const DescribeAlertRecordHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlertRecordHistoryRequest&;
    using Resp = DescribeAlertRecordHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlertRecordHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeAlertRecordHistoryOutcomeCallable ClsClient::DescribeAlertRecordHistoryCallable(const DescribeAlertRecordHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlertRecordHistoryOutcome>>();
    DescribeAlertRecordHistoryAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeAlertRecordHistoryRequest&,
        DescribeAlertRecordHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeCloudProductLogTasksOutcome ClsClient::DescribeCloudProductLogTasks(const DescribeCloudProductLogTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCloudProductLogTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCloudProductLogTasksResponse rsp = DescribeCloudProductLogTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCloudProductLogTasksOutcome(rsp);
        else
            return DescribeCloudProductLogTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeCloudProductLogTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeCloudProductLogTasksAsync(const DescribeCloudProductLogTasksRequest& request, const DescribeCloudProductLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCloudProductLogTasksRequest&;
    using Resp = DescribeCloudProductLogTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCloudProductLogTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeCloudProductLogTasksOutcomeCallable ClsClient::DescribeCloudProductLogTasksCallable(const DescribeCloudProductLogTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCloudProductLogTasksOutcome>>();
    DescribeCloudProductLogTasksAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeCloudProductLogTasksRequest&,
        DescribeCloudProductLogTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeConfigExtrasOutcome ClsClient::DescribeConfigExtras(const DescribeConfigExtrasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigExtras");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigExtrasResponse rsp = DescribeConfigExtrasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigExtrasOutcome(rsp);
        else
            return DescribeConfigExtrasOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigExtrasOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigExtrasAsync(const DescribeConfigExtrasRequest& request, const DescribeConfigExtrasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigExtrasRequest&;
    using Resp = DescribeConfigExtrasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigExtras", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeConfigExtrasOutcomeCallable ClsClient::DescribeConfigExtrasCallable(const DescribeConfigExtrasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigExtrasOutcome>>();
    DescribeConfigExtrasAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeConfigExtrasRequest&,
        DescribeConfigExtrasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeConfigMachineGroupsOutcome ClsClient::DescribeConfigMachineGroups(const DescribeConfigMachineGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigMachineGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigMachineGroupsResponse rsp = DescribeConfigMachineGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigMachineGroupsOutcome(rsp);
        else
            return DescribeConfigMachineGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigMachineGroupsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigMachineGroupsAsync(const DescribeConfigMachineGroupsRequest& request, const DescribeConfigMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigMachineGroupsRequest&;
    using Resp = DescribeConfigMachineGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigMachineGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeConfigMachineGroupsOutcomeCallable ClsClient::DescribeConfigMachineGroupsCallable(const DescribeConfigMachineGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigMachineGroupsOutcome>>();
    DescribeConfigMachineGroupsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeConfigMachineGroupsRequest&,
        DescribeConfigMachineGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeConfigsOutcome ClsClient::DescribeConfigs(const DescribeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigsResponse rsp = DescribeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigsOutcome(rsp);
        else
            return DescribeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigsRequest&;
    using Resp = DescribeConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeConfigsOutcomeCallable ClsClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigsOutcome>>();
    DescribeConfigsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeConfigsRequest&,
        DescribeConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeConsoleSharingListOutcome ClsClient::DescribeConsoleSharingList(const DescribeConsoleSharingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsoleSharingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsoleSharingListResponse rsp = DescribeConsoleSharingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsoleSharingListOutcome(rsp);
        else
            return DescribeConsoleSharingListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsoleSharingListOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConsoleSharingListAsync(const DescribeConsoleSharingListRequest& request, const DescribeConsoleSharingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsoleSharingListRequest&;
    using Resp = DescribeConsoleSharingListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsoleSharingList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeConsoleSharingListOutcomeCallable ClsClient::DescribeConsoleSharingListCallable(const DescribeConsoleSharingListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsoleSharingListOutcome>>();
    DescribeConsoleSharingListAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeConsoleSharingListRequest&,
        DescribeConsoleSharingListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeConsumerOutcome ClsClient::DescribeConsumer(const DescribeConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerResponse rsp = DescribeConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerOutcome(rsp);
        else
            return DescribeConsumerOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeConsumerAsync(const DescribeConsumerRequest& request, const DescribeConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConsumerRequest&;
    using Resp = DescribeConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeConsumerOutcomeCallable ClsClient::DescribeConsumerCallable(const DescribeConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConsumerOutcome>>();
    DescribeConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeConsumerRequest&,
        DescribeConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeCosRechargesOutcome ClsClient::DescribeCosRecharges(const DescribeCosRechargesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRecharges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRechargesResponse rsp = DescribeCosRechargesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRechargesOutcome(rsp);
        else
            return DescribeCosRechargesOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRechargesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeCosRechargesAsync(const DescribeCosRechargesRequest& request, const DescribeCosRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosRechargesRequest&;
    using Resp = DescribeCosRechargesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosRecharges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeCosRechargesOutcomeCallable ClsClient::DescribeCosRechargesCallable(const DescribeCosRechargesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosRechargesOutcome>>();
    DescribeCosRechargesAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeCosRechargesRequest&,
        DescribeCosRechargesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeDashboardSubscribesOutcome ClsClient::DescribeDashboardSubscribes(const DescribeDashboardSubscribesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboardSubscribes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardSubscribesResponse rsp = DescribeDashboardSubscribesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardSubscribesOutcome(rsp);
        else
            return DescribeDashboardSubscribesOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardSubscribesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeDashboardSubscribesAsync(const DescribeDashboardSubscribesRequest& request, const DescribeDashboardSubscribesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDashboardSubscribesRequest&;
    using Resp = DescribeDashboardSubscribesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDashboardSubscribes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeDashboardSubscribesOutcomeCallable ClsClient::DescribeDashboardSubscribesCallable(const DescribeDashboardSubscribesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDashboardSubscribesOutcome>>();
    DescribeDashboardSubscribesAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeDashboardSubscribesRequest&,
        DescribeDashboardSubscribesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeDashboardsOutcome ClsClient::DescribeDashboards(const DescribeDashboardsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboards");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardsResponse rsp = DescribeDashboardsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardsOutcome(rsp);
        else
            return DescribeDashboardsOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeDashboardsAsync(const DescribeDashboardsRequest& request, const DescribeDashboardsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDashboardsRequest&;
    using Resp = DescribeDashboardsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDashboards", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeDashboardsOutcomeCallable ClsClient::DescribeDashboardsCallable(const DescribeDashboardsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDashboardsOutcome>>();
    DescribeDashboardsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeDashboardsRequest&,
        DescribeDashboardsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeDataTransformInfoOutcome ClsClient::DescribeDataTransformInfo(const DescribeDataTransformInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataTransformInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataTransformInfoResponse rsp = DescribeDataTransformInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataTransformInfoOutcome(rsp);
        else
            return DescribeDataTransformInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDataTransformInfoOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeDataTransformInfoAsync(const DescribeDataTransformInfoRequest& request, const DescribeDataTransformInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataTransformInfoRequest&;
    using Resp = DescribeDataTransformInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataTransformInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeDataTransformInfoOutcomeCallable ClsClient::DescribeDataTransformInfoCallable(const DescribeDataTransformInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataTransformInfoOutcome>>();
    DescribeDataTransformInfoAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeDataTransformInfoRequest&,
        DescribeDataTransformInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeExportsOutcome ClsClient::DescribeExports(const DescribeExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportsResponse rsp = DescribeExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportsOutcome(rsp);
        else
            return DescribeExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeExportsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeExportsAsync(const DescribeExportsRequest& request, const DescribeExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportsRequest&;
    using Resp = DescribeExportsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExports", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeExportsOutcomeCallable ClsClient::DescribeExportsCallable(const DescribeExportsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportsOutcome>>();
    DescribeExportsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeExportsRequest&,
        DescribeExportsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeIndexOutcome ClsClient::DescribeIndex(const DescribeIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIndexResponse rsp = DescribeIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIndexOutcome(rsp);
        else
            return DescribeIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeIndexOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeIndexAsync(const DescribeIndexRequest& request, const DescribeIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIndexRequest&;
    using Resp = DescribeIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeIndexOutcomeCallable ClsClient::DescribeIndexCallable(const DescribeIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIndexOutcome>>();
    DescribeIndexAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeIndexRequest&,
        DescribeIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeKafkaConsumerOutcome ClsClient::DescribeKafkaConsumer(const DescribeKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaConsumerResponse rsp = DescribeKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaConsumerOutcome(rsp);
        else
            return DescribeKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeKafkaConsumerAsync(const DescribeKafkaConsumerRequest& request, const DescribeKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKafkaConsumerRequest&;
    using Resp = DescribeKafkaConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKafkaConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeKafkaConsumerOutcomeCallable ClsClient::DescribeKafkaConsumerCallable(const DescribeKafkaConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKafkaConsumerOutcome>>();
    DescribeKafkaConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeKafkaConsumerRequest&,
        DescribeKafkaConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeKafkaConsumerGroupDetailOutcome ClsClient::DescribeKafkaConsumerGroupDetail(const DescribeKafkaConsumerGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaConsumerGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaConsumerGroupDetailResponse rsp = DescribeKafkaConsumerGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaConsumerGroupDetailOutcome(rsp);
        else
            return DescribeKafkaConsumerGroupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaConsumerGroupDetailOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeKafkaConsumerGroupDetailAsync(const DescribeKafkaConsumerGroupDetailRequest& request, const DescribeKafkaConsumerGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKafkaConsumerGroupDetailRequest&;
    using Resp = DescribeKafkaConsumerGroupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKafkaConsumerGroupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeKafkaConsumerGroupDetailOutcomeCallable ClsClient::DescribeKafkaConsumerGroupDetailCallable(const DescribeKafkaConsumerGroupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKafkaConsumerGroupDetailOutcome>>();
    DescribeKafkaConsumerGroupDetailAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeKafkaConsumerGroupDetailRequest&,
        DescribeKafkaConsumerGroupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeKafkaConsumerGroupListOutcome ClsClient::DescribeKafkaConsumerGroupList(const DescribeKafkaConsumerGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaConsumerGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaConsumerGroupListResponse rsp = DescribeKafkaConsumerGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaConsumerGroupListOutcome(rsp);
        else
            return DescribeKafkaConsumerGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaConsumerGroupListOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeKafkaConsumerGroupListAsync(const DescribeKafkaConsumerGroupListRequest& request, const DescribeKafkaConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKafkaConsumerGroupListRequest&;
    using Resp = DescribeKafkaConsumerGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKafkaConsumerGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeKafkaConsumerGroupListOutcomeCallable ClsClient::DescribeKafkaConsumerGroupListCallable(const DescribeKafkaConsumerGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKafkaConsumerGroupListOutcome>>();
    DescribeKafkaConsumerGroupListAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeKafkaConsumerGroupListRequest&,
        DescribeKafkaConsumerGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeKafkaRechargesOutcome ClsClient::DescribeKafkaRecharges(const DescribeKafkaRechargesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKafkaRecharges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKafkaRechargesResponse rsp = DescribeKafkaRechargesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKafkaRechargesOutcome(rsp);
        else
            return DescribeKafkaRechargesOutcome(o.GetError());
    }
    else
    {
        return DescribeKafkaRechargesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeKafkaRechargesAsync(const DescribeKafkaRechargesRequest& request, const DescribeKafkaRechargesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKafkaRechargesRequest&;
    using Resp = DescribeKafkaRechargesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKafkaRecharges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeKafkaRechargesOutcomeCallable ClsClient::DescribeKafkaRechargesCallable(const DescribeKafkaRechargesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKafkaRechargesOutcome>>();
    DescribeKafkaRechargesAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeKafkaRechargesRequest&,
        DescribeKafkaRechargesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeLogContextOutcome ClsClient::DescribeLogContext(const DescribeLogContextRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogContext");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogContextResponse rsp = DescribeLogContextResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogContextOutcome(rsp);
        else
            return DescribeLogContextOutcome(o.GetError());
    }
    else
    {
        return DescribeLogContextOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogContextAsync(const DescribeLogContextRequest& request, const DescribeLogContextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogContextRequest&;
    using Resp = DescribeLogContextResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogContext", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeLogContextOutcomeCallable ClsClient::DescribeLogContextCallable(const DescribeLogContextRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogContextOutcome>>();
    DescribeLogContextAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeLogContextRequest&,
        DescribeLogContextOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeLogHistogramOutcome ClsClient::DescribeLogHistogram(const DescribeLogHistogramRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogHistogram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogHistogramResponse rsp = DescribeLogHistogramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogHistogramOutcome(rsp);
        else
            return DescribeLogHistogramOutcome(o.GetError());
    }
    else
    {
        return DescribeLogHistogramOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogHistogramAsync(const DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogHistogramRequest&;
    using Resp = DescribeLogHistogramResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogHistogram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeLogHistogramOutcomeCallable ClsClient::DescribeLogHistogramCallable(const DescribeLogHistogramRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogHistogramOutcome>>();
    DescribeLogHistogramAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeLogHistogramRequest&,
        DescribeLogHistogramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeLogsetsOutcome ClsClient::DescribeLogsets(const DescribeLogsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogsetsResponse rsp = DescribeLogsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogsetsOutcome(rsp);
        else
            return DescribeLogsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogsetsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeLogsetsAsync(const DescribeLogsetsRequest& request, const DescribeLogsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogsetsRequest&;
    using Resp = DescribeLogsetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogsets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeLogsetsOutcomeCallable ClsClient::DescribeLogsetsCallable(const DescribeLogsetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogsetsOutcome>>();
    DescribeLogsetsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeLogsetsRequest&,
        DescribeLogsetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeMachineGroupConfigsOutcome ClsClient::DescribeMachineGroupConfigs(const DescribeMachineGroupConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGroupConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGroupConfigsResponse rsp = DescribeMachineGroupConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGroupConfigsOutcome(rsp);
        else
            return DescribeMachineGroupConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGroupConfigsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachineGroupConfigsAsync(const DescribeMachineGroupConfigsRequest& request, const DescribeMachineGroupConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineGroupConfigsRequest&;
    using Resp = DescribeMachineGroupConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineGroupConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeMachineGroupConfigsOutcomeCallable ClsClient::DescribeMachineGroupConfigsCallable(const DescribeMachineGroupConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineGroupConfigsOutcome>>();
    DescribeMachineGroupConfigsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeMachineGroupConfigsRequest&,
        DescribeMachineGroupConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeMachineGroupsOutcome ClsClient::DescribeMachineGroups(const DescribeMachineGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGroupsResponse rsp = DescribeMachineGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGroupsOutcome(rsp);
        else
            return DescribeMachineGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGroupsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachineGroupsAsync(const DescribeMachineGroupsRequest& request, const DescribeMachineGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineGroupsRequest&;
    using Resp = DescribeMachineGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeMachineGroupsOutcomeCallable ClsClient::DescribeMachineGroupsCallable(const DescribeMachineGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineGroupsOutcome>>();
    DescribeMachineGroupsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeMachineGroupsRequest&,
        DescribeMachineGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeMachinesOutcome ClsClient::DescribeMachines(const DescribeMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesResponse rsp = DescribeMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesOutcome(rsp);
        else
            return DescribeMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachinesRequest&;
    using Resp = DescribeMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeMachinesOutcomeCallable ClsClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachinesOutcome>>();
    DescribeMachinesAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeMachinesRequest&,
        DescribeMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeNoticeContentsOutcome ClsClient::DescribeNoticeContents(const DescribeNoticeContentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoticeContents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoticeContentsResponse rsp = DescribeNoticeContentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoticeContentsOutcome(rsp);
        else
            return DescribeNoticeContentsOutcome(o.GetError());
    }
    else
    {
        return DescribeNoticeContentsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeNoticeContentsAsync(const DescribeNoticeContentsRequest& request, const DescribeNoticeContentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNoticeContentsRequest&;
    using Resp = DescribeNoticeContentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNoticeContents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeNoticeContentsOutcomeCallable ClsClient::DescribeNoticeContentsCallable(const DescribeNoticeContentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNoticeContentsOutcome>>();
    DescribeNoticeContentsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeNoticeContentsRequest&,
        DescribeNoticeContentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribePartitionsOutcome ClsClient::DescribePartitions(const DescribePartitionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePartitions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePartitionsResponse rsp = DescribePartitionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePartitionsOutcome(rsp);
        else
            return DescribePartitionsOutcome(o.GetError());
    }
    else
    {
        return DescribePartitionsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribePartitionsAsync(const DescribePartitionsRequest& request, const DescribePartitionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePartitionsRequest&;
    using Resp = DescribePartitionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePartitions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribePartitionsOutcomeCallable ClsClient::DescribePartitionsCallable(const DescribePartitionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePartitionsOutcome>>();
    DescribePartitionsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribePartitionsRequest&,
        DescribePartitionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeScheduledSqlInfoOutcome ClsClient::DescribeScheduledSqlInfo(const DescribeScheduledSqlInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScheduledSqlInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScheduledSqlInfoResponse rsp = DescribeScheduledSqlInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScheduledSqlInfoOutcome(rsp);
        else
            return DescribeScheduledSqlInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeScheduledSqlInfoOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeScheduledSqlInfoAsync(const DescribeScheduledSqlInfoRequest& request, const DescribeScheduledSqlInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScheduledSqlInfoRequest&;
    using Resp = DescribeScheduledSqlInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScheduledSqlInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeScheduledSqlInfoOutcomeCallable ClsClient::DescribeScheduledSqlInfoCallable(const DescribeScheduledSqlInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScheduledSqlInfoOutcome>>();
    DescribeScheduledSqlInfoAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeScheduledSqlInfoRequest&,
        DescribeScheduledSqlInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeShipperTasksOutcome ClsClient::DescribeShipperTasks(const DescribeShipperTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShipperTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShipperTasksResponse rsp = DescribeShipperTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShipperTasksOutcome(rsp);
        else
            return DescribeShipperTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeShipperTasksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeShipperTasksAsync(const DescribeShipperTasksRequest& request, const DescribeShipperTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeShipperTasksRequest&;
    using Resp = DescribeShipperTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShipperTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeShipperTasksOutcomeCallable ClsClient::DescribeShipperTasksCallable(const DescribeShipperTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShipperTasksOutcome>>();
    DescribeShipperTasksAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeShipperTasksRequest&,
        DescribeShipperTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeShippersOutcome ClsClient::DescribeShippers(const DescribeShippersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeShippers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeShippersResponse rsp = DescribeShippersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeShippersOutcome(rsp);
        else
            return DescribeShippersOutcome(o.GetError());
    }
    else
    {
        return DescribeShippersOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeShippersAsync(const DescribeShippersRequest& request, const DescribeShippersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeShippersRequest&;
    using Resp = DescribeShippersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeShippers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeShippersOutcomeCallable ClsClient::DescribeShippersCallable(const DescribeShippersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeShippersOutcome>>();
    DescribeShippersAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeShippersRequest&,
        DescribeShippersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeTopicsOutcome ClsClient::DescribeTopics(const DescribeTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicsResponse rsp = DescribeTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicsOutcome(rsp);
        else
            return DescribeTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicsOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeTopicsAsync(const DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopicsRequest&;
    using Resp = DescribeTopicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeTopicsOutcomeCallable ClsClient::DescribeTopicsCallable(const DescribeTopicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicsOutcome>>();
    DescribeTopicsAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeTopicsRequest&,
        DescribeTopicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::DescribeWebCallbacksOutcome ClsClient::DescribeWebCallbacks(const DescribeWebCallbacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebCallbacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebCallbacksResponse rsp = DescribeWebCallbacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebCallbacksOutcome(rsp);
        else
            return DescribeWebCallbacksOutcome(o.GetError());
    }
    else
    {
        return DescribeWebCallbacksOutcome(outcome.GetError());
    }
}

void ClsClient::DescribeWebCallbacksAsync(const DescribeWebCallbacksRequest& request, const DescribeWebCallbacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebCallbacksRequest&;
    using Resp = DescribeWebCallbacksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebCallbacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::DescribeWebCallbacksOutcomeCallable ClsClient::DescribeWebCallbacksCallable(const DescribeWebCallbacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebCallbacksOutcome>>();
    DescribeWebCallbacksAsync(
    request,
    [prom](
        const ClsClient*,
        const DescribeWebCallbacksRequest&,
        DescribeWebCallbacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::GetAlarmLogOutcome ClsClient::GetAlarmLog(const GetAlarmLogRequest &request)
{
    auto outcome = MakeRequest(request, "GetAlarmLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAlarmLogResponse rsp = GetAlarmLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAlarmLogOutcome(rsp);
        else
            return GetAlarmLogOutcome(o.GetError());
    }
    else
    {
        return GetAlarmLogOutcome(outcome.GetError());
    }
}

void ClsClient::GetAlarmLogAsync(const GetAlarmLogRequest& request, const GetAlarmLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAlarmLogRequest&;
    using Resp = GetAlarmLogResponse;

    DoRequestAsync<Req, Resp>(
        "GetAlarmLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::GetAlarmLogOutcomeCallable ClsClient::GetAlarmLogCallable(const GetAlarmLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAlarmLogOutcome>>();
    GetAlarmLogAsync(
    request,
    [prom](
        const ClsClient*,
        const GetAlarmLogRequest&,
        GetAlarmLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::MergePartitionOutcome ClsClient::MergePartition(const MergePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "MergePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MergePartitionResponse rsp = MergePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MergePartitionOutcome(rsp);
        else
            return MergePartitionOutcome(o.GetError());
    }
    else
    {
        return MergePartitionOutcome(outcome.GetError());
    }
}

void ClsClient::MergePartitionAsync(const MergePartitionRequest& request, const MergePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MergePartitionRequest&;
    using Resp = MergePartitionResponse;

    DoRequestAsync<Req, Resp>(
        "MergePartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::MergePartitionOutcomeCallable ClsClient::MergePartitionCallable(const MergePartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<MergePartitionOutcome>>();
    MergePartitionAsync(
    request,
    [prom](
        const ClsClient*,
        const MergePartitionRequest&,
        MergePartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyAlarmOutcome ClsClient::ModifyAlarm(const ModifyAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmResponse rsp = ModifyAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmOutcome(rsp);
        else
            return ModifyAlarmOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmAsync(const ModifyAlarmRequest& request, const ModifyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmRequest&;
    using Resp = ModifyAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyAlarmOutcomeCallable ClsClient::ModifyAlarmCallable(const ModifyAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmOutcome>>();
    ModifyAlarmAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyAlarmRequest&,
        ModifyAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyAlarmNoticeOutcome ClsClient::ModifyAlarmNotice(const ModifyAlarmNoticeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmNotice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmNoticeResponse rsp = ModifyAlarmNoticeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmNoticeOutcome(rsp);
        else
            return ModifyAlarmNoticeOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmNoticeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmNoticeAsync(const ModifyAlarmNoticeRequest& request, const ModifyAlarmNoticeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmNoticeRequest&;
    using Resp = ModifyAlarmNoticeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmNotice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyAlarmNoticeOutcomeCallable ClsClient::ModifyAlarmNoticeCallable(const ModifyAlarmNoticeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmNoticeOutcome>>();
    ModifyAlarmNoticeAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyAlarmNoticeRequest&,
        ModifyAlarmNoticeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyAlarmShieldOutcome ClsClient::ModifyAlarmShield(const ModifyAlarmShieldRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmShield");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmShieldResponse rsp = ModifyAlarmShieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmShieldOutcome(rsp);
        else
            return ModifyAlarmShieldOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmShieldOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyAlarmShieldAsync(const ModifyAlarmShieldRequest& request, const ModifyAlarmShieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmShieldRequest&;
    using Resp = ModifyAlarmShieldResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmShield", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyAlarmShieldOutcomeCallable ClsClient::ModifyAlarmShieldCallable(const ModifyAlarmShieldRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmShieldOutcome>>();
    ModifyAlarmShieldAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyAlarmShieldRequest&,
        ModifyAlarmShieldOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyCloudProductLogCollectionOutcome ClsClient::ModifyCloudProductLogCollection(const ModifyCloudProductLogCollectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCloudProductLogCollection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCloudProductLogCollectionResponse rsp = ModifyCloudProductLogCollectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCloudProductLogCollectionOutcome(rsp);
        else
            return ModifyCloudProductLogCollectionOutcome(o.GetError());
    }
    else
    {
        return ModifyCloudProductLogCollectionOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyCloudProductLogCollectionAsync(const ModifyCloudProductLogCollectionRequest& request, const ModifyCloudProductLogCollectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCloudProductLogCollectionRequest&;
    using Resp = ModifyCloudProductLogCollectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCloudProductLogCollection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyCloudProductLogCollectionOutcomeCallable ClsClient::ModifyCloudProductLogCollectionCallable(const ModifyCloudProductLogCollectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCloudProductLogCollectionOutcome>>();
    ModifyCloudProductLogCollectionAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyCloudProductLogCollectionRequest&,
        ModifyCloudProductLogCollectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyConfigOutcome ClsClient::ModifyConfig(const ModifyConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigResponse rsp = ModifyConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigOutcome(rsp);
        else
            return ModifyConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConfigAsync(const ModifyConfigRequest& request, const ModifyConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConfigRequest&;
    using Resp = ModifyConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyConfigOutcomeCallable ClsClient::ModifyConfigCallable(const ModifyConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConfigOutcome>>();
    ModifyConfigAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyConfigRequest&,
        ModifyConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyConfigExtraOutcome ClsClient::ModifyConfigExtra(const ModifyConfigExtraRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigExtraResponse rsp = ModifyConfigExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigExtraOutcome(rsp);
        else
            return ModifyConfigExtraOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigExtraOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConfigExtraAsync(const ModifyConfigExtraRequest& request, const ModifyConfigExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConfigExtraRequest&;
    using Resp = ModifyConfigExtraResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConfigExtra", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyConfigExtraOutcomeCallable ClsClient::ModifyConfigExtraCallable(const ModifyConfigExtraRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConfigExtraOutcome>>();
    ModifyConfigExtraAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyConfigExtraRequest&,
        ModifyConfigExtraOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyConsoleSharingOutcome ClsClient::ModifyConsoleSharing(const ModifyConsoleSharingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsoleSharing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsoleSharingResponse rsp = ModifyConsoleSharingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsoleSharingOutcome(rsp);
        else
            return ModifyConsoleSharingOutcome(o.GetError());
    }
    else
    {
        return ModifyConsoleSharingOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConsoleSharingAsync(const ModifyConsoleSharingRequest& request, const ModifyConsoleSharingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsoleSharingRequest&;
    using Resp = ModifyConsoleSharingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsoleSharing", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyConsoleSharingOutcomeCallable ClsClient::ModifyConsoleSharingCallable(const ModifyConsoleSharingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsoleSharingOutcome>>();
    ModifyConsoleSharingAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyConsoleSharingRequest&,
        ModifyConsoleSharingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyConsumerOutcome ClsClient::ModifyConsumer(const ModifyConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerResponse rsp = ModifyConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerOutcome(rsp);
        else
            return ModifyConsumerOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyConsumerAsync(const ModifyConsumerRequest& request, const ModifyConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConsumerRequest&;
    using Resp = ModifyConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyConsumerOutcomeCallable ClsClient::ModifyConsumerCallable(const ModifyConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConsumerOutcome>>();
    ModifyConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyConsumerRequest&,
        ModifyConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyCosRechargeOutcome ClsClient::ModifyCosRecharge(const ModifyCosRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosRechargeResponse rsp = ModifyCosRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosRechargeOutcome(rsp);
        else
            return ModifyCosRechargeOutcome(o.GetError());
    }
    else
    {
        return ModifyCosRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyCosRechargeAsync(const ModifyCosRechargeRequest& request, const ModifyCosRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCosRechargeRequest&;
    using Resp = ModifyCosRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCosRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyCosRechargeOutcomeCallable ClsClient::ModifyCosRechargeCallable(const ModifyCosRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCosRechargeOutcome>>();
    ModifyCosRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyCosRechargeRequest&,
        ModifyCosRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyDashboardSubscribeOutcome ClsClient::ModifyDashboardSubscribe(const ModifyDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDashboardSubscribeResponse rsp = ModifyDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDashboardSubscribeOutcome(rsp);
        else
            return ModifyDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return ModifyDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyDashboardSubscribeAsync(const ModifyDashboardSubscribeRequest& request, const ModifyDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDashboardSubscribeRequest&;
    using Resp = ModifyDashboardSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDashboardSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyDashboardSubscribeOutcomeCallable ClsClient::ModifyDashboardSubscribeCallable(const ModifyDashboardSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDashboardSubscribeOutcome>>();
    ModifyDashboardSubscribeAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyDashboardSubscribeRequest&,
        ModifyDashboardSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyDataTransformOutcome ClsClient::ModifyDataTransform(const ModifyDataTransformRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDataTransform");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDataTransformResponse rsp = ModifyDataTransformResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDataTransformOutcome(rsp);
        else
            return ModifyDataTransformOutcome(o.GetError());
    }
    else
    {
        return ModifyDataTransformOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyDataTransformAsync(const ModifyDataTransformRequest& request, const ModifyDataTransformAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDataTransformRequest&;
    using Resp = ModifyDataTransformResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDataTransform", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyDataTransformOutcomeCallable ClsClient::ModifyDataTransformCallable(const ModifyDataTransformRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDataTransformOutcome>>();
    ModifyDataTransformAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyDataTransformRequest&,
        ModifyDataTransformOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyIndexOutcome ClsClient::ModifyIndex(const ModifyIndexRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIndexResponse rsp = ModifyIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIndexOutcome(rsp);
        else
            return ModifyIndexOutcome(o.GetError());
    }
    else
    {
        return ModifyIndexOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyIndexAsync(const ModifyIndexRequest& request, const ModifyIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIndexRequest&;
    using Resp = ModifyIndexResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyIndexOutcomeCallable ClsClient::ModifyIndexCallable(const ModifyIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIndexOutcome>>();
    ModifyIndexAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyIndexRequest&,
        ModifyIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyKafkaConsumerOutcome ClsClient::ModifyKafkaConsumer(const ModifyKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKafkaConsumerResponse rsp = ModifyKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKafkaConsumerOutcome(rsp);
        else
            return ModifyKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return ModifyKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyKafkaConsumerAsync(const ModifyKafkaConsumerRequest& request, const ModifyKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyKafkaConsumerRequest&;
    using Resp = ModifyKafkaConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyKafkaConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyKafkaConsumerOutcomeCallable ClsClient::ModifyKafkaConsumerCallable(const ModifyKafkaConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyKafkaConsumerOutcome>>();
    ModifyKafkaConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyKafkaConsumerRequest&,
        ModifyKafkaConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyKafkaConsumerGroupOffsetOutcome ClsClient::ModifyKafkaConsumerGroupOffset(const ModifyKafkaConsumerGroupOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKafkaConsumerGroupOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKafkaConsumerGroupOffsetResponse rsp = ModifyKafkaConsumerGroupOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKafkaConsumerGroupOffsetOutcome(rsp);
        else
            return ModifyKafkaConsumerGroupOffsetOutcome(o.GetError());
    }
    else
    {
        return ModifyKafkaConsumerGroupOffsetOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyKafkaConsumerGroupOffsetAsync(const ModifyKafkaConsumerGroupOffsetRequest& request, const ModifyKafkaConsumerGroupOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyKafkaConsumerGroupOffsetRequest&;
    using Resp = ModifyKafkaConsumerGroupOffsetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyKafkaConsumerGroupOffset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyKafkaConsumerGroupOffsetOutcomeCallable ClsClient::ModifyKafkaConsumerGroupOffsetCallable(const ModifyKafkaConsumerGroupOffsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyKafkaConsumerGroupOffsetOutcome>>();
    ModifyKafkaConsumerGroupOffsetAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyKafkaConsumerGroupOffsetRequest&,
        ModifyKafkaConsumerGroupOffsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyKafkaRechargeOutcome ClsClient::ModifyKafkaRecharge(const ModifyKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyKafkaRechargeResponse rsp = ModifyKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyKafkaRechargeOutcome(rsp);
        else
            return ModifyKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return ModifyKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyKafkaRechargeAsync(const ModifyKafkaRechargeRequest& request, const ModifyKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyKafkaRechargeRequest&;
    using Resp = ModifyKafkaRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyKafkaRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyKafkaRechargeOutcomeCallable ClsClient::ModifyKafkaRechargeCallable(const ModifyKafkaRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyKafkaRechargeOutcome>>();
    ModifyKafkaRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyKafkaRechargeRequest&,
        ModifyKafkaRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyLogsetOutcome ClsClient::ModifyLogset(const ModifyLogsetRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogsetResponse rsp = ModifyLogsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogsetOutcome(rsp);
        else
            return ModifyLogsetOutcome(o.GetError());
    }
    else
    {
        return ModifyLogsetOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyLogsetAsync(const ModifyLogsetRequest& request, const ModifyLogsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogsetRequest&;
    using Resp = ModifyLogsetResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyLogsetOutcomeCallable ClsClient::ModifyLogsetCallable(const ModifyLogsetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogsetOutcome>>();
    ModifyLogsetAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyLogsetRequest&,
        ModifyLogsetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyMachineGroupOutcome ClsClient::ModifyMachineGroup(const ModifyMachineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineGroupResponse rsp = ModifyMachineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineGroupOutcome(rsp);
        else
            return ModifyMachineGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineGroupOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyMachineGroupAsync(const ModifyMachineGroupRequest& request, const ModifyMachineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMachineGroupRequest&;
    using Resp = ModifyMachineGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMachineGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyMachineGroupOutcomeCallable ClsClient::ModifyMachineGroupCallable(const ModifyMachineGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMachineGroupOutcome>>();
    ModifyMachineGroupAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyMachineGroupRequest&,
        ModifyMachineGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyNoticeContentOutcome ClsClient::ModifyNoticeContent(const ModifyNoticeContentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNoticeContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNoticeContentResponse rsp = ModifyNoticeContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNoticeContentOutcome(rsp);
        else
            return ModifyNoticeContentOutcome(o.GetError());
    }
    else
    {
        return ModifyNoticeContentOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyNoticeContentAsync(const ModifyNoticeContentRequest& request, const ModifyNoticeContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNoticeContentRequest&;
    using Resp = ModifyNoticeContentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNoticeContent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyNoticeContentOutcomeCallable ClsClient::ModifyNoticeContentCallable(const ModifyNoticeContentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNoticeContentOutcome>>();
    ModifyNoticeContentAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyNoticeContentRequest&,
        ModifyNoticeContentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyScheduledSqlOutcome ClsClient::ModifyScheduledSql(const ModifyScheduledSqlRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyScheduledSql");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyScheduledSqlResponse rsp = ModifyScheduledSqlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyScheduledSqlOutcome(rsp);
        else
            return ModifyScheduledSqlOutcome(o.GetError());
    }
    else
    {
        return ModifyScheduledSqlOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyScheduledSqlAsync(const ModifyScheduledSqlRequest& request, const ModifyScheduledSqlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyScheduledSqlRequest&;
    using Resp = ModifyScheduledSqlResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyScheduledSql", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyScheduledSqlOutcomeCallable ClsClient::ModifyScheduledSqlCallable(const ModifyScheduledSqlRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyScheduledSqlOutcome>>();
    ModifyScheduledSqlAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyScheduledSqlRequest&,
        ModifyScheduledSqlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyShipperOutcome ClsClient::ModifyShipper(const ModifyShipperRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyShipper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyShipperResponse rsp = ModifyShipperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyShipperOutcome(rsp);
        else
            return ModifyShipperOutcome(o.GetError());
    }
    else
    {
        return ModifyShipperOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyShipperAsync(const ModifyShipperRequest& request, const ModifyShipperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyShipperRequest&;
    using Resp = ModifyShipperResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyShipper", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyShipperOutcomeCallable ClsClient::ModifyShipperCallable(const ModifyShipperRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyShipperOutcome>>();
    ModifyShipperAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyShipperRequest&,
        ModifyShipperOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyTopicOutcome ClsClient::ModifyTopic(const ModifyTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicResponse rsp = ModifyTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicOutcome(rsp);
        else
            return ModifyTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTopicRequest&;
    using Resp = ModifyTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyTopicOutcomeCallable ClsClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicOutcome>>();
    ModifyTopicAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyTopicRequest&,
        ModifyTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::ModifyWebCallbackOutcome ClsClient::ModifyWebCallback(const ModifyWebCallbackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebCallback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebCallbackResponse rsp = ModifyWebCallbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebCallbackOutcome(rsp);
        else
            return ModifyWebCallbackOutcome(o.GetError());
    }
    else
    {
        return ModifyWebCallbackOutcome(outcome.GetError());
    }
}

void ClsClient::ModifyWebCallbackAsync(const ModifyWebCallbackRequest& request, const ModifyWebCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebCallbackRequest&;
    using Resp = ModifyWebCallbackResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebCallback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::ModifyWebCallbackOutcomeCallable ClsClient::ModifyWebCallbackCallable(const ModifyWebCallbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebCallbackOutcome>>();
    ModifyWebCallbackAsync(
    request,
    [prom](
        const ClsClient*,
        const ModifyWebCallbackRequest&,
        ModifyWebCallbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::OpenKafkaConsumerOutcome ClsClient::OpenKafkaConsumer(const OpenKafkaConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "OpenKafkaConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenKafkaConsumerResponse rsp = OpenKafkaConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenKafkaConsumerOutcome(rsp);
        else
            return OpenKafkaConsumerOutcome(o.GetError());
    }
    else
    {
        return OpenKafkaConsumerOutcome(outcome.GetError());
    }
}

void ClsClient::OpenKafkaConsumerAsync(const OpenKafkaConsumerRequest& request, const OpenKafkaConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenKafkaConsumerRequest&;
    using Resp = OpenKafkaConsumerResponse;

    DoRequestAsync<Req, Resp>(
        "OpenKafkaConsumer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::OpenKafkaConsumerOutcomeCallable ClsClient::OpenKafkaConsumerCallable(const OpenKafkaConsumerRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenKafkaConsumerOutcome>>();
    OpenKafkaConsumerAsync(
    request,
    [prom](
        const ClsClient*,
        const OpenKafkaConsumerRequest&,
        OpenKafkaConsumerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::PreviewKafkaRechargeOutcome ClsClient::PreviewKafkaRecharge(const PreviewKafkaRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "PreviewKafkaRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PreviewKafkaRechargeResponse rsp = PreviewKafkaRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PreviewKafkaRechargeOutcome(rsp);
        else
            return PreviewKafkaRechargeOutcome(o.GetError());
    }
    else
    {
        return PreviewKafkaRechargeOutcome(outcome.GetError());
    }
}

void ClsClient::PreviewKafkaRechargeAsync(const PreviewKafkaRechargeRequest& request, const PreviewKafkaRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PreviewKafkaRechargeRequest&;
    using Resp = PreviewKafkaRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "PreviewKafkaRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::PreviewKafkaRechargeOutcomeCallable ClsClient::PreviewKafkaRechargeCallable(const PreviewKafkaRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<PreviewKafkaRechargeOutcome>>();
    PreviewKafkaRechargeAsync(
    request,
    [prom](
        const ClsClient*,
        const PreviewKafkaRechargeRequest&,
        PreviewKafkaRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::QueryMetricOutcome ClsClient::QueryMetric(const QueryMetricRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMetricResponse rsp = QueryMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMetricOutcome(rsp);
        else
            return QueryMetricOutcome(o.GetError());
    }
    else
    {
        return QueryMetricOutcome(outcome.GetError());
    }
}

void ClsClient::QueryMetricAsync(const QueryMetricRequest& request, const QueryMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMetricRequest&;
    using Resp = QueryMetricResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMetric", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::QueryMetricOutcomeCallable ClsClient::QueryMetricCallable(const QueryMetricRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMetricOutcome>>();
    QueryMetricAsync(
    request,
    [prom](
        const ClsClient*,
        const QueryMetricRequest&,
        QueryMetricOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::QueryRangeMetricOutcome ClsClient::QueryRangeMetric(const QueryRangeMetricRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRangeMetric");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRangeMetricResponse rsp = QueryRangeMetricResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRangeMetricOutcome(rsp);
        else
            return QueryRangeMetricOutcome(o.GetError());
    }
    else
    {
        return QueryRangeMetricOutcome(outcome.GetError());
    }
}

void ClsClient::QueryRangeMetricAsync(const QueryRangeMetricRequest& request, const QueryRangeMetricAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryRangeMetricRequest&;
    using Resp = QueryRangeMetricResponse;

    DoRequestAsync<Req, Resp>(
        "QueryRangeMetric", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::QueryRangeMetricOutcomeCallable ClsClient::QueryRangeMetricCallable(const QueryRangeMetricRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryRangeMetricOutcome>>();
    QueryRangeMetricAsync(
    request,
    [prom](
        const ClsClient*,
        const QueryRangeMetricRequest&,
        QueryRangeMetricOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::RetryShipperTaskOutcome ClsClient::RetryShipperTask(const RetryShipperTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RetryShipperTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryShipperTaskResponse rsp = RetryShipperTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryShipperTaskOutcome(rsp);
        else
            return RetryShipperTaskOutcome(o.GetError());
    }
    else
    {
        return RetryShipperTaskOutcome(outcome.GetError());
    }
}

void ClsClient::RetryShipperTaskAsync(const RetryShipperTaskRequest& request, const RetryShipperTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryShipperTaskRequest&;
    using Resp = RetryShipperTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RetryShipperTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::RetryShipperTaskOutcomeCallable ClsClient::RetryShipperTaskCallable(const RetryShipperTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryShipperTaskOutcome>>();
    RetryShipperTaskAsync(
    request,
    [prom](
        const ClsClient*,
        const RetryShipperTaskRequest&,
        RetryShipperTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::SearchCosRechargeInfoOutcome ClsClient::SearchCosRechargeInfo(const SearchCosRechargeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "SearchCosRechargeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchCosRechargeInfoResponse rsp = SearchCosRechargeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchCosRechargeInfoOutcome(rsp);
        else
            return SearchCosRechargeInfoOutcome(o.GetError());
    }
    else
    {
        return SearchCosRechargeInfoOutcome(outcome.GetError());
    }
}

void ClsClient::SearchCosRechargeInfoAsync(const SearchCosRechargeInfoRequest& request, const SearchCosRechargeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchCosRechargeInfoRequest&;
    using Resp = SearchCosRechargeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "SearchCosRechargeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::SearchCosRechargeInfoOutcomeCallable ClsClient::SearchCosRechargeInfoCallable(const SearchCosRechargeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchCosRechargeInfoOutcome>>();
    SearchCosRechargeInfoAsync(
    request,
    [prom](
        const ClsClient*,
        const SearchCosRechargeInfoRequest&,
        SearchCosRechargeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::SearchDashboardSubscribeOutcome ClsClient::SearchDashboardSubscribe(const SearchDashboardSubscribeRequest &request)
{
    auto outcome = MakeRequest(request, "SearchDashboardSubscribe");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchDashboardSubscribeResponse rsp = SearchDashboardSubscribeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchDashboardSubscribeOutcome(rsp);
        else
            return SearchDashboardSubscribeOutcome(o.GetError());
    }
    else
    {
        return SearchDashboardSubscribeOutcome(outcome.GetError());
    }
}

void ClsClient::SearchDashboardSubscribeAsync(const SearchDashboardSubscribeRequest& request, const SearchDashboardSubscribeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchDashboardSubscribeRequest&;
    using Resp = SearchDashboardSubscribeResponse;

    DoRequestAsync<Req, Resp>(
        "SearchDashboardSubscribe", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::SearchDashboardSubscribeOutcomeCallable ClsClient::SearchDashboardSubscribeCallable(const SearchDashboardSubscribeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchDashboardSubscribeOutcome>>();
    SearchDashboardSubscribeAsync(
    request,
    [prom](
        const ClsClient*,
        const SearchDashboardSubscribeRequest&,
        SearchDashboardSubscribeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::SearchLogOutcome ClsClient::SearchLog(const SearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchLogResponse rsp = SearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchLogOutcome(rsp);
        else
            return SearchLogOutcome(o.GetError());
    }
    else
    {
        return SearchLogOutcome(outcome.GetError());
    }
}

void ClsClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchLogRequest&;
    using Resp = SearchLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::SearchLogOutcomeCallable ClsClient::SearchLogCallable(const SearchLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchLogOutcome>>();
    SearchLogAsync(
    request,
    [prom](
        const ClsClient*,
        const SearchLogRequest&,
        SearchLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::SplitPartitionOutcome ClsClient::SplitPartition(const SplitPartitionRequest &request)
{
    auto outcome = MakeRequest(request, "SplitPartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SplitPartitionResponse rsp = SplitPartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SplitPartitionOutcome(rsp);
        else
            return SplitPartitionOutcome(o.GetError());
    }
    else
    {
        return SplitPartitionOutcome(outcome.GetError());
    }
}

void ClsClient::SplitPartitionAsync(const SplitPartitionRequest& request, const SplitPartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SplitPartitionRequest&;
    using Resp = SplitPartitionResponse;

    DoRequestAsync<Req, Resp>(
        "SplitPartition", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::SplitPartitionOutcomeCallable ClsClient::SplitPartitionCallable(const SplitPartitionRequest &request)
{
    const auto prom = std::make_shared<std::promise<SplitPartitionOutcome>>();
    SplitPartitionAsync(
    request,
    [prom](
        const ClsClient*,
        const SplitPartitionRequest&,
        SplitPartitionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ClsClient::UploadLogOutcome ClsClient::UploadLog(const UploadLogRequest &request)
{
    auto outcome = MakeRequest(request, "UploadLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadLogResponse rsp = UploadLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadLogOutcome(rsp);
        else
            return UploadLogOutcome(o.GetError());
    }
    else
    {
        return UploadLogOutcome(outcome.GetError());
    }
}

void ClsClient::UploadLogAsync(const UploadLogRequest& request, const UploadLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadLogRequest&;
    using Resp = UploadLogResponse;

    DoRequestAsync<Req, Resp>(
        "UploadLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ClsClient::UploadLogOutcomeCallable ClsClient::UploadLogCallable(const UploadLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadLogOutcome>>();
    UploadLogAsync(
    request,
    [prom](
        const ClsClient*,
        const UploadLogRequest&,
        UploadLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

