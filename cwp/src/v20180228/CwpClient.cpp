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

#include <tencentcloud/cwp/v20180228/CwpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cwp::V20180228;
using namespace TencentCloud::Cwp::V20180228::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-02-28";
    const string ENDPOINT = "cwp.tencentcloudapi.com";
}

CwpClient::CwpClient(const Credential &credential, const string &region) :
    CwpClient(credential, region, ClientProfile())
{
}

CwpClient::CwpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CwpClient::AddLoginWhiteListsOutcome CwpClient::AddLoginWhiteLists(const AddLoginWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "AddLoginWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddLoginWhiteListsResponse rsp = AddLoginWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddLoginWhiteListsOutcome(rsp);
        else
            return AddLoginWhiteListsOutcome(o.GetError());
    }
    else
    {
        return AddLoginWhiteListsOutcome(outcome.GetError());
    }
}

void CwpClient::AddLoginWhiteListsAsync(const AddLoginWhiteListsRequest& request, const AddLoginWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddLoginWhiteListsRequest&;
    using Resp = AddLoginWhiteListsResponse;

    DoRequestAsync<Req, Resp>(
        "AddLoginWhiteLists", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::AddLoginWhiteListsOutcomeCallable CwpClient::AddLoginWhiteListsCallable(const AddLoginWhiteListsRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddLoginWhiteListsOutcome>>();
    AddLoginWhiteListsAsync(
    request,
    [prom](
        const CwpClient*,
        const AddLoginWhiteListsRequest&,
        AddLoginWhiteListsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ChangeRuleEventsIgnoreStatusOutcome CwpClient::ChangeRuleEventsIgnoreStatus(const ChangeRuleEventsIgnoreStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeRuleEventsIgnoreStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeRuleEventsIgnoreStatusResponse rsp = ChangeRuleEventsIgnoreStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeRuleEventsIgnoreStatusOutcome(rsp);
        else
            return ChangeRuleEventsIgnoreStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeRuleEventsIgnoreStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ChangeRuleEventsIgnoreStatusAsync(const ChangeRuleEventsIgnoreStatusRequest& request, const ChangeRuleEventsIgnoreStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeRuleEventsIgnoreStatusRequest&;
    using Resp = ChangeRuleEventsIgnoreStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeRuleEventsIgnoreStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ChangeRuleEventsIgnoreStatusOutcomeCallable CwpClient::ChangeRuleEventsIgnoreStatusCallable(const ChangeRuleEventsIgnoreStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeRuleEventsIgnoreStatusOutcome>>();
    ChangeRuleEventsIgnoreStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ChangeRuleEventsIgnoreStatusRequest&,
        ChangeRuleEventsIgnoreStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ChangeStrategyEnableStatusOutcome CwpClient::ChangeStrategyEnableStatus(const ChangeStrategyEnableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeStrategyEnableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeStrategyEnableStatusResponse rsp = ChangeStrategyEnableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeStrategyEnableStatusOutcome(rsp);
        else
            return ChangeStrategyEnableStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeStrategyEnableStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ChangeStrategyEnableStatusAsync(const ChangeStrategyEnableStatusRequest& request, const ChangeStrategyEnableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeStrategyEnableStatusRequest&;
    using Resp = ChangeStrategyEnableStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeStrategyEnableStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ChangeStrategyEnableStatusOutcomeCallable CwpClient::ChangeStrategyEnableStatusCallable(const ChangeStrategyEnableStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeStrategyEnableStatusOutcome>>();
    ChangeStrategyEnableStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ChangeStrategyEnableStatusRequest&,
        ChangeStrategyEnableStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CheckBashPolicyParamsOutcome CwpClient::CheckBashPolicyParams(const CheckBashPolicyParamsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBashPolicyParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBashPolicyParamsResponse rsp = CheckBashPolicyParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBashPolicyParamsOutcome(rsp);
        else
            return CheckBashPolicyParamsOutcome(o.GetError());
    }
    else
    {
        return CheckBashPolicyParamsOutcome(outcome.GetError());
    }
}

void CwpClient::CheckBashPolicyParamsAsync(const CheckBashPolicyParamsRequest& request, const CheckBashPolicyParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBashPolicyParamsRequest&;
    using Resp = CheckBashPolicyParamsResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBashPolicyParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CheckBashPolicyParamsOutcomeCallable CwpClient::CheckBashPolicyParamsCallable(const CheckBashPolicyParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBashPolicyParamsOutcome>>();
    CheckBashPolicyParamsAsync(
    request,
    [prom](
        const CwpClient*,
        const CheckBashPolicyParamsRequest&,
        CheckBashPolicyParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CheckBashRuleParamsOutcome CwpClient::CheckBashRuleParams(const CheckBashRuleParamsRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBashRuleParams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBashRuleParamsResponse rsp = CheckBashRuleParamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBashRuleParamsOutcome(rsp);
        else
            return CheckBashRuleParamsOutcome(o.GetError());
    }
    else
    {
        return CheckBashRuleParamsOutcome(outcome.GetError());
    }
}

void CwpClient::CheckBashRuleParamsAsync(const CheckBashRuleParamsRequest& request, const CheckBashRuleParamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBashRuleParamsRequest&;
    using Resp = CheckBashRuleParamsResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBashRuleParams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CheckBashRuleParamsOutcomeCallable CwpClient::CheckBashRuleParamsCallable(const CheckBashRuleParamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBashRuleParamsOutcome>>();
    CheckBashRuleParamsAsync(
    request,
    [prom](
        const CwpClient*,
        const CheckBashRuleParamsRequest&,
        CheckBashRuleParamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CheckFileTamperRuleOutcome CwpClient::CheckFileTamperRule(const CheckFileTamperRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFileTamperRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFileTamperRuleResponse rsp = CheckFileTamperRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFileTamperRuleOutcome(rsp);
        else
            return CheckFileTamperRuleOutcome(o.GetError());
    }
    else
    {
        return CheckFileTamperRuleOutcome(outcome.GetError());
    }
}

void CwpClient::CheckFileTamperRuleAsync(const CheckFileTamperRuleRequest& request, const CheckFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckFileTamperRuleRequest&;
    using Resp = CheckFileTamperRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CheckFileTamperRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CheckFileTamperRuleOutcomeCallable CwpClient::CheckFileTamperRuleCallable(const CheckFileTamperRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckFileTamperRuleOutcome>>();
    CheckFileTamperRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const CheckFileTamperRuleRequest&,
        CheckFileTamperRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CheckFirstScanBaselineOutcome CwpClient::CheckFirstScanBaseline(const CheckFirstScanBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "CheckFirstScanBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckFirstScanBaselineResponse rsp = CheckFirstScanBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckFirstScanBaselineOutcome(rsp);
        else
            return CheckFirstScanBaselineOutcome(o.GetError());
    }
    else
    {
        return CheckFirstScanBaselineOutcome(outcome.GetError());
    }
}

void CwpClient::CheckFirstScanBaselineAsync(const CheckFirstScanBaselineRequest& request, const CheckFirstScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckFirstScanBaselineRequest&;
    using Resp = CheckFirstScanBaselineResponse;

    DoRequestAsync<Req, Resp>(
        "CheckFirstScanBaseline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CheckFirstScanBaselineOutcomeCallable CwpClient::CheckFirstScanBaselineCallable(const CheckFirstScanBaselineRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckFirstScanBaselineOutcome>>();
    CheckFirstScanBaselineAsync(
    request,
    [prom](
        const CwpClient*,
        const CheckFirstScanBaselineRequest&,
        CheckFirstScanBaselineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CheckLogKafkaConnectionStateOutcome CwpClient::CheckLogKafkaConnectionState(const CheckLogKafkaConnectionStateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckLogKafkaConnectionState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckLogKafkaConnectionStateResponse rsp = CheckLogKafkaConnectionStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckLogKafkaConnectionStateOutcome(rsp);
        else
            return CheckLogKafkaConnectionStateOutcome(o.GetError());
    }
    else
    {
        return CheckLogKafkaConnectionStateOutcome(outcome.GetError());
    }
}

void CwpClient::CheckLogKafkaConnectionStateAsync(const CheckLogKafkaConnectionStateRequest& request, const CheckLogKafkaConnectionStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckLogKafkaConnectionStateRequest&;
    using Resp = CheckLogKafkaConnectionStateResponse;

    DoRequestAsync<Req, Resp>(
        "CheckLogKafkaConnectionState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CheckLogKafkaConnectionStateOutcomeCallable CwpClient::CheckLogKafkaConnectionStateCallable(const CheckLogKafkaConnectionStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckLogKafkaConnectionStateOutcome>>();
    CheckLogKafkaConnectionStateAsync(
    request,
    [prom](
        const CwpClient*,
        const CheckLogKafkaConnectionStateRequest&,
        CheckLogKafkaConnectionStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ClearLocalStorageOutcome CwpClient::ClearLocalStorage(const ClearLocalStorageRequest &request)
{
    auto outcome = MakeRequest(request, "ClearLocalStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearLocalStorageResponse rsp = ClearLocalStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearLocalStorageOutcome(rsp);
        else
            return ClearLocalStorageOutcome(o.GetError());
    }
    else
    {
        return ClearLocalStorageOutcome(outcome.GetError());
    }
}

void CwpClient::ClearLocalStorageAsync(const ClearLocalStorageRequest& request, const ClearLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearLocalStorageRequest&;
    using Resp = ClearLocalStorageResponse;

    DoRequestAsync<Req, Resp>(
        "ClearLocalStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ClearLocalStorageOutcomeCallable CwpClient::ClearLocalStorageCallable(const ClearLocalStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearLocalStorageOutcome>>();
    ClearLocalStorageAsync(
    request,
    [prom](
        const CwpClient*,
        const ClearLocalStorageRequest&,
        ClearLocalStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateBanWhiteListOutcome CwpClient::CreateBanWhiteList(const CreateBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBanWhiteListResponse rsp = CreateBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBanWhiteListOutcome(rsp);
        else
            return CreateBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateBanWhiteListAsync(const CreateBanWhiteListRequest& request, const CreateBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBanWhiteListRequest&;
    using Resp = CreateBanWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBanWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateBanWhiteListOutcomeCallable CwpClient::CreateBanWhiteListCallable(const CreateBanWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBanWhiteListOutcome>>();
    CreateBanWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateBanWhiteListRequest&,
        CreateBanWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateBaselineStrategyOutcome CwpClient::CreateBaselineStrategy(const CreateBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBaselineStrategyResponse rsp = CreateBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBaselineStrategyOutcome(rsp);
        else
            return CreateBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateBaselineStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::CreateBaselineStrategyAsync(const CreateBaselineStrategyRequest& request, const CreateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBaselineStrategyRequest&;
    using Resp = CreateBaselineStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBaselineStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateBaselineStrategyOutcomeCallable CwpClient::CreateBaselineStrategyCallable(const CreateBaselineStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBaselineStrategyOutcome>>();
    CreateBaselineStrategyAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateBaselineStrategyRequest&,
        CreateBaselineStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateBuyBindTaskOutcome CwpClient::CreateBuyBindTask(const CreateBuyBindTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBuyBindTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBuyBindTaskResponse rsp = CreateBuyBindTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBuyBindTaskOutcome(rsp);
        else
            return CreateBuyBindTaskOutcome(o.GetError());
    }
    else
    {
        return CreateBuyBindTaskOutcome(outcome.GetError());
    }
}

void CwpClient::CreateBuyBindTaskAsync(const CreateBuyBindTaskRequest& request, const CreateBuyBindTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBuyBindTaskRequest&;
    using Resp = CreateBuyBindTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBuyBindTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateBuyBindTaskOutcomeCallable CwpClient::CreateBuyBindTaskCallable(const CreateBuyBindTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBuyBindTaskOutcome>>();
    CreateBuyBindTaskAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateBuyBindTaskRequest&,
        CreateBuyBindTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateEmergencyVulScanOutcome CwpClient::CreateEmergencyVulScan(const CreateEmergencyVulScanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmergencyVulScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmergencyVulScanResponse rsp = CreateEmergencyVulScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmergencyVulScanOutcome(rsp);
        else
            return CreateEmergencyVulScanOutcome(o.GetError());
    }
    else
    {
        return CreateEmergencyVulScanOutcome(outcome.GetError());
    }
}

void CwpClient::CreateEmergencyVulScanAsync(const CreateEmergencyVulScanRequest& request, const CreateEmergencyVulScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmergencyVulScanRequest&;
    using Resp = CreateEmergencyVulScanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmergencyVulScan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateEmergencyVulScanOutcomeCallable CwpClient::CreateEmergencyVulScanCallable(const CreateEmergencyVulScanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmergencyVulScanOutcome>>();
    CreateEmergencyVulScanAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateEmergencyVulScanRequest&,
        CreateEmergencyVulScanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateIncidentBacktrackingOutcome CwpClient::CreateIncidentBacktracking(const CreateIncidentBacktrackingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIncidentBacktracking");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIncidentBacktrackingResponse rsp = CreateIncidentBacktrackingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIncidentBacktrackingOutcome(rsp);
        else
            return CreateIncidentBacktrackingOutcome(o.GetError());
    }
    else
    {
        return CreateIncidentBacktrackingOutcome(outcome.GetError());
    }
}

void CwpClient::CreateIncidentBacktrackingAsync(const CreateIncidentBacktrackingRequest& request, const CreateIncidentBacktrackingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIncidentBacktrackingRequest&;
    using Resp = CreateIncidentBacktrackingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIncidentBacktracking", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateIncidentBacktrackingOutcomeCallable CwpClient::CreateIncidentBacktrackingCallable(const CreateIncidentBacktrackingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIncidentBacktrackingOutcome>>();
    CreateIncidentBacktrackingAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateIncidentBacktrackingRequest&,
        CreateIncidentBacktrackingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateLicenseOrderOutcome CwpClient::CreateLicenseOrder(const CreateLicenseOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLicenseOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLicenseOrderResponse rsp = CreateLicenseOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLicenseOrderOutcome(rsp);
        else
            return CreateLicenseOrderOutcome(o.GetError());
    }
    else
    {
        return CreateLicenseOrderOutcome(outcome.GetError());
    }
}

void CwpClient::CreateLicenseOrderAsync(const CreateLicenseOrderRequest& request, const CreateLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLicenseOrderRequest&;
    using Resp = CreateLicenseOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLicenseOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateLicenseOrderOutcomeCallable CwpClient::CreateLicenseOrderCallable(const CreateLicenseOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLicenseOrderOutcome>>();
    CreateLicenseOrderAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateLicenseOrderRequest&,
        CreateLicenseOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateLogExportOutcome CwpClient::CreateLogExport(const CreateLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogExportResponse rsp = CreateLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogExportOutcome(rsp);
        else
            return CreateLogExportOutcome(o.GetError());
    }
    else
    {
        return CreateLogExportOutcome(outcome.GetError());
    }
}

void CwpClient::CreateLogExportAsync(const CreateLogExportRequest& request, const CreateLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLogExportRequest&;
    using Resp = CreateLogExportResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLogExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateLogExportOutcomeCallable CwpClient::CreateLogExportCallable(const CreateLogExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLogExportOutcome>>();
    CreateLogExportAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateLogExportRequest&,
        CreateLogExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateMaliciousRequestWhiteListOutcome CwpClient::CreateMaliciousRequestWhiteList(const CreateMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMaliciousRequestWhiteListResponse rsp = CreateMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMaliciousRequestWhiteListOutcome(rsp);
        else
            return CreateMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateMaliciousRequestWhiteListAsync(const CreateMaliciousRequestWhiteListRequest& request, const CreateMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMaliciousRequestWhiteListRequest&;
    using Resp = CreateMaliciousRequestWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMaliciousRequestWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateMaliciousRequestWhiteListOutcomeCallable CwpClient::CreateMaliciousRequestWhiteListCallable(const CreateMaliciousRequestWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMaliciousRequestWhiteListOutcome>>();
    CreateMaliciousRequestWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateMaliciousRequestWhiteListRequest&,
        CreateMaliciousRequestWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateMalwareWhiteListOutcome CwpClient::CreateMalwareWhiteList(const CreateMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMalwareWhiteListResponse rsp = CreateMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMalwareWhiteListOutcome(rsp);
        else
            return CreateMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateMalwareWhiteListAsync(const CreateMalwareWhiteListRequest& request, const CreateMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMalwareWhiteListRequest&;
    using Resp = CreateMalwareWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMalwareWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateMalwareWhiteListOutcomeCallable CwpClient::CreateMalwareWhiteListCallable(const CreateMalwareWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMalwareWhiteListOutcome>>();
    CreateMalwareWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateMalwareWhiteListRequest&,
        CreateMalwareWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateNetAttackWhiteListOutcome CwpClient::CreateNetAttackWhiteList(const CreateNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNetAttackWhiteListResponse rsp = CreateNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNetAttackWhiteListOutcome(rsp);
        else
            return CreateNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::CreateNetAttackWhiteListAsync(const CreateNetAttackWhiteListRequest& request, const CreateNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNetAttackWhiteListRequest&;
    using Resp = CreateNetAttackWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNetAttackWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateNetAttackWhiteListOutcomeCallable CwpClient::CreateNetAttackWhiteListCallable(const CreateNetAttackWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNetAttackWhiteListOutcome>>();
    CreateNetAttackWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateNetAttackWhiteListRequest&,
        CreateNetAttackWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateProtectServerOutcome CwpClient::CreateProtectServer(const CreateProtectServerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProtectServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProtectServerResponse rsp = CreateProtectServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProtectServerOutcome(rsp);
        else
            return CreateProtectServerOutcome(o.GetError());
    }
    else
    {
        return CreateProtectServerOutcome(outcome.GetError());
    }
}

void CwpClient::CreateProtectServerAsync(const CreateProtectServerRequest& request, const CreateProtectServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProtectServerRequest&;
    using Resp = CreateProtectServerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProtectServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateProtectServerOutcomeCallable CwpClient::CreateProtectServerCallable(const CreateProtectServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProtectServerOutcome>>();
    CreateProtectServerAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateProtectServerRequest&,
        CreateProtectServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateRansomDefenseStrategyOutcome CwpClient::CreateRansomDefenseStrategy(const CreateRansomDefenseStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRansomDefenseStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRansomDefenseStrategyResponse rsp = CreateRansomDefenseStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRansomDefenseStrategyOutcome(rsp);
        else
            return CreateRansomDefenseStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateRansomDefenseStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::CreateRansomDefenseStrategyAsync(const CreateRansomDefenseStrategyRequest& request, const CreateRansomDefenseStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRansomDefenseStrategyRequest&;
    using Resp = CreateRansomDefenseStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRansomDefenseStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateRansomDefenseStrategyOutcomeCallable CwpClient::CreateRansomDefenseStrategyCallable(const CreateRansomDefenseStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRansomDefenseStrategyOutcome>>();
    CreateRansomDefenseStrategyAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateRansomDefenseStrategyRequest&,
        CreateRansomDefenseStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateScanMalwareSettingOutcome CwpClient::CreateScanMalwareSetting(const CreateScanMalwareSettingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScanMalwareSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScanMalwareSettingResponse rsp = CreateScanMalwareSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScanMalwareSettingOutcome(rsp);
        else
            return CreateScanMalwareSettingOutcome(o.GetError());
    }
    else
    {
        return CreateScanMalwareSettingOutcome(outcome.GetError());
    }
}

void CwpClient::CreateScanMalwareSettingAsync(const CreateScanMalwareSettingRequest& request, const CreateScanMalwareSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateScanMalwareSettingRequest&;
    using Resp = CreateScanMalwareSettingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateScanMalwareSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateScanMalwareSettingOutcomeCallable CwpClient::CreateScanMalwareSettingCallable(const CreateScanMalwareSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateScanMalwareSettingOutcome>>();
    CreateScanMalwareSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateScanMalwareSettingRequest&,
        CreateScanMalwareSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateSearchLogOutcome CwpClient::CreateSearchLog(const CreateSearchLogRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSearchLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSearchLogResponse rsp = CreateSearchLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSearchLogOutcome(rsp);
        else
            return CreateSearchLogOutcome(o.GetError());
    }
    else
    {
        return CreateSearchLogOutcome(outcome.GetError());
    }
}

void CwpClient::CreateSearchLogAsync(const CreateSearchLogRequest& request, const CreateSearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSearchLogRequest&;
    using Resp = CreateSearchLogResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSearchLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateSearchLogOutcomeCallable CwpClient::CreateSearchLogCallable(const CreateSearchLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSearchLogOutcome>>();
    CreateSearchLogAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateSearchLogRequest&,
        CreateSearchLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateSearchTemplateOutcome CwpClient::CreateSearchTemplate(const CreateSearchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSearchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSearchTemplateResponse rsp = CreateSearchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSearchTemplateOutcome(rsp);
        else
            return CreateSearchTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateSearchTemplateOutcome(outcome.GetError());
    }
}

void CwpClient::CreateSearchTemplateAsync(const CreateSearchTemplateRequest& request, const CreateSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSearchTemplateRequest&;
    using Resp = CreateSearchTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSearchTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateSearchTemplateOutcomeCallable CwpClient::CreateSearchTemplateCallable(const CreateSearchTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSearchTemplateOutcome>>();
    CreateSearchTemplateAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateSearchTemplateRequest&,
        CreateSearchTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateVulFixOutcome CwpClient::CreateVulFix(const CreateVulFixRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVulFix");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVulFixResponse rsp = CreateVulFixResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVulFixOutcome(rsp);
        else
            return CreateVulFixOutcome(o.GetError());
    }
    else
    {
        return CreateVulFixOutcome(outcome.GetError());
    }
}

void CwpClient::CreateVulFixAsync(const CreateVulFixRequest& request, const CreateVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVulFixRequest&;
    using Resp = CreateVulFixResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVulFix", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateVulFixOutcomeCallable CwpClient::CreateVulFixCallable(const CreateVulFixRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVulFixOutcome>>();
    CreateVulFixAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateVulFixRequest&,
        CreateVulFixOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::CreateWhiteListOrderOutcome CwpClient::CreateWhiteListOrder(const CreateWhiteListOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWhiteListOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWhiteListOrderResponse rsp = CreateWhiteListOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWhiteListOrderOutcome(rsp);
        else
            return CreateWhiteListOrderOutcome(o.GetError());
    }
    else
    {
        return CreateWhiteListOrderOutcome(outcome.GetError());
    }
}

void CwpClient::CreateWhiteListOrderAsync(const CreateWhiteListOrderRequest& request, const CreateWhiteListOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWhiteListOrderRequest&;
    using Resp = CreateWhiteListOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWhiteListOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::CreateWhiteListOrderOutcomeCallable CwpClient::CreateWhiteListOrderCallable(const CreateWhiteListOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWhiteListOrderOutcome>>();
    CreateWhiteListOrderAsync(
    request,
    [prom](
        const CwpClient*,
        const CreateWhiteListOrderRequest&,
        CreateWhiteListOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteAllJavaMemShellsOutcome CwpClient::DeleteAllJavaMemShells(const DeleteAllJavaMemShellsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAllJavaMemShells");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAllJavaMemShellsResponse rsp = DeleteAllJavaMemShellsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAllJavaMemShellsOutcome(rsp);
        else
            return DeleteAllJavaMemShellsOutcome(o.GetError());
    }
    else
    {
        return DeleteAllJavaMemShellsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteAllJavaMemShellsAsync(const DeleteAllJavaMemShellsRequest& request, const DeleteAllJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAllJavaMemShellsRequest&;
    using Resp = DeleteAllJavaMemShellsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAllJavaMemShells", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteAllJavaMemShellsOutcomeCallable CwpClient::DeleteAllJavaMemShellsCallable(const DeleteAllJavaMemShellsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAllJavaMemShellsOutcome>>();
    DeleteAllJavaMemShellsAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteAllJavaMemShellsRequest&,
        DeleteAllJavaMemShellsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBanWhiteListOutcome CwpClient::DeleteBanWhiteList(const DeleteBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBanWhiteListResponse rsp = DeleteBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBanWhiteListOutcome(rsp);
        else
            return DeleteBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBanWhiteListAsync(const DeleteBanWhiteListRequest& request, const DeleteBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBanWhiteListRequest&;
    using Resp = DeleteBanWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBanWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBanWhiteListOutcomeCallable CwpClient::DeleteBanWhiteListCallable(const DeleteBanWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBanWhiteListOutcome>>();
    DeleteBanWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBanWhiteListRequest&,
        DeleteBanWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBaselinePolicyOutcome CwpClient::DeleteBaselinePolicy(const DeleteBaselinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselinePolicyResponse rsp = DeleteBaselinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselinePolicyOutcome(rsp);
        else
            return DeleteBaselinePolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselinePolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselinePolicyAsync(const DeleteBaselinePolicyRequest& request, const DeleteBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBaselinePolicyRequest&;
    using Resp = DeleteBaselinePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBaselinePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBaselinePolicyOutcomeCallable CwpClient::DeleteBaselinePolicyCallable(const DeleteBaselinePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBaselinePolicyOutcome>>();
    DeleteBaselinePolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBaselinePolicyRequest&,
        DeleteBaselinePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBaselineRuleOutcome CwpClient::DeleteBaselineRule(const DeleteBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineRuleResponse rsp = DeleteBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineRuleOutcome(rsp);
        else
            return DeleteBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineRuleAsync(const DeleteBaselineRuleRequest& request, const DeleteBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBaselineRuleRequest&;
    using Resp = DeleteBaselineRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBaselineRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBaselineRuleOutcomeCallable CwpClient::DeleteBaselineRuleCallable(const DeleteBaselineRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBaselineRuleOutcome>>();
    DeleteBaselineRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBaselineRuleRequest&,
        DeleteBaselineRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBaselineRuleIgnoreOutcome CwpClient::DeleteBaselineRuleIgnore(const DeleteBaselineRuleIgnoreRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineRuleIgnore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineRuleIgnoreResponse rsp = DeleteBaselineRuleIgnoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineRuleIgnoreOutcome(rsp);
        else
            return DeleteBaselineRuleIgnoreOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineRuleIgnoreOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineRuleIgnoreAsync(const DeleteBaselineRuleIgnoreRequest& request, const DeleteBaselineRuleIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBaselineRuleIgnoreRequest&;
    using Resp = DeleteBaselineRuleIgnoreResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBaselineRuleIgnore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBaselineRuleIgnoreOutcomeCallable CwpClient::DeleteBaselineRuleIgnoreCallable(const DeleteBaselineRuleIgnoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBaselineRuleIgnoreOutcome>>();
    DeleteBaselineRuleIgnoreAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBaselineRuleIgnoreRequest&,
        DeleteBaselineRuleIgnoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBaselineStrategyOutcome CwpClient::DeleteBaselineStrategy(const DeleteBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineStrategyResponse rsp = DeleteBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineStrategyOutcome(rsp);
        else
            return DeleteBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineStrategyAsync(const DeleteBaselineStrategyRequest& request, const DeleteBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBaselineStrategyRequest&;
    using Resp = DeleteBaselineStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBaselineStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBaselineStrategyOutcomeCallable CwpClient::DeleteBaselineStrategyCallable(const DeleteBaselineStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBaselineStrategyOutcome>>();
    DeleteBaselineStrategyAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBaselineStrategyRequest&,
        DeleteBaselineStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBaselineWeakPasswordOutcome CwpClient::DeleteBaselineWeakPassword(const DeleteBaselineWeakPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBaselineWeakPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBaselineWeakPasswordResponse rsp = DeleteBaselineWeakPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBaselineWeakPasswordOutcome(rsp);
        else
            return DeleteBaselineWeakPasswordOutcome(o.GetError());
    }
    else
    {
        return DeleteBaselineWeakPasswordOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBaselineWeakPasswordAsync(const DeleteBaselineWeakPasswordRequest& request, const DeleteBaselineWeakPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBaselineWeakPasswordRequest&;
    using Resp = DeleteBaselineWeakPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBaselineWeakPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBaselineWeakPasswordOutcomeCallable CwpClient::DeleteBaselineWeakPasswordCallable(const DeleteBaselineWeakPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBaselineWeakPasswordOutcome>>();
    DeleteBaselineWeakPasswordAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBaselineWeakPasswordRequest&,
        DeleteBaselineWeakPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBashEventsOutcome CwpClient::DeleteBashEvents(const DeleteBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashEventsResponse rsp = DeleteBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashEventsOutcome(rsp);
        else
            return DeleteBashEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteBashEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBashEventsAsync(const DeleteBashEventsRequest& request, const DeleteBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBashEventsRequest&;
    using Resp = DeleteBashEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBashEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBashEventsOutcomeCallable CwpClient::DeleteBashEventsCallable(const DeleteBashEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBashEventsOutcome>>();
    DeleteBashEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBashEventsRequest&,
        DeleteBashEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBashPoliciesOutcome CwpClient::DeleteBashPolicies(const DeleteBashPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashPoliciesResponse rsp = DeleteBashPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashPoliciesOutcome(rsp);
        else
            return DeleteBashPoliciesOutcome(o.GetError());
    }
    else
    {
        return DeleteBashPoliciesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBashPoliciesAsync(const DeleteBashPoliciesRequest& request, const DeleteBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBashPoliciesRequest&;
    using Resp = DeleteBashPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBashPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBashPoliciesOutcomeCallable CwpClient::DeleteBashPoliciesCallable(const DeleteBashPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBashPoliciesOutcome>>();
    DeleteBashPoliciesAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBashPoliciesRequest&,
        DeleteBashPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBashRulesOutcome CwpClient::DeleteBashRules(const DeleteBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBashRulesResponse rsp = DeleteBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBashRulesOutcome(rsp);
        else
            return DeleteBashRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBashRulesAsync(const DeleteBashRulesRequest& request, const DeleteBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBashRulesRequest&;
    using Resp = DeleteBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBashRulesOutcomeCallable CwpClient::DeleteBashRulesCallable(const DeleteBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBashRulesOutcome>>();
    DeleteBashRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBashRulesRequest&,
        DeleteBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteBruteAttacksOutcome CwpClient::DeleteBruteAttacks(const DeleteBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBruteAttacksResponse rsp = DeleteBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBruteAttacksOutcome(rsp);
        else
            return DeleteBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return DeleteBruteAttacksOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteBruteAttacksAsync(const DeleteBruteAttacksRequest& request, const DeleteBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBruteAttacksRequest&;
    using Resp = DeleteBruteAttacksResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBruteAttacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteBruteAttacksOutcomeCallable CwpClient::DeleteBruteAttacksCallable(const DeleteBruteAttacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBruteAttacksOutcome>>();
    DeleteBruteAttacksAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteBruteAttacksRequest&,
        DeleteBruteAttacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteLicenseRecordOutcome CwpClient::DeleteLicenseRecord(const DeleteLicenseRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLicenseRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLicenseRecordResponse rsp = DeleteLicenseRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLicenseRecordOutcome(rsp);
        else
            return DeleteLicenseRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteLicenseRecordOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLicenseRecordAsync(const DeleteLicenseRecordRequest& request, const DeleteLicenseRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLicenseRecordRequest&;
    using Resp = DeleteLicenseRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLicenseRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteLicenseRecordOutcomeCallable CwpClient::DeleteLicenseRecordCallable(const DeleteLicenseRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLicenseRecordOutcome>>();
    DeleteLicenseRecordAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteLicenseRecordRequest&,
        DeleteLicenseRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteLicenseRecordAllOutcome CwpClient::DeleteLicenseRecordAll(const DeleteLicenseRecordAllRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLicenseRecordAll");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLicenseRecordAllResponse rsp = DeleteLicenseRecordAllResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLicenseRecordAllOutcome(rsp);
        else
            return DeleteLicenseRecordAllOutcome(o.GetError());
    }
    else
    {
        return DeleteLicenseRecordAllOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLicenseRecordAllAsync(const DeleteLicenseRecordAllRequest& request, const DeleteLicenseRecordAllAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLicenseRecordAllRequest&;
    using Resp = DeleteLicenseRecordAllResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLicenseRecordAll", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteLicenseRecordAllOutcomeCallable CwpClient::DeleteLicenseRecordAllCallable(const DeleteLicenseRecordAllRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLicenseRecordAllOutcome>>();
    DeleteLicenseRecordAllAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteLicenseRecordAllRequest&,
        DeleteLicenseRecordAllOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteLogExportOutcome CwpClient::DeleteLogExport(const DeleteLogExportRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLogExport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLogExportResponse rsp = DeleteLogExportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLogExportOutcome(rsp);
        else
            return DeleteLogExportOutcome(o.GetError());
    }
    else
    {
        return DeleteLogExportOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLogExportAsync(const DeleteLogExportRequest& request, const DeleteLogExportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLogExportRequest&;
    using Resp = DeleteLogExportResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLogExport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteLogExportOutcomeCallable CwpClient::DeleteLogExportCallable(const DeleteLogExportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLogExportOutcome>>();
    DeleteLogExportAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteLogExportRequest&,
        DeleteLogExportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteLoginWhiteListOutcome CwpClient::DeleteLoginWhiteList(const DeleteLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoginWhiteListResponse rsp = DeleteLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoginWhiteListOutcome(rsp);
        else
            return DeleteLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteLoginWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteLoginWhiteListAsync(const DeleteLoginWhiteListRequest& request, const DeleteLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLoginWhiteListRequest&;
    using Resp = DeleteLoginWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLoginWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteLoginWhiteListOutcomeCallable CwpClient::DeleteLoginWhiteListCallable(const DeleteLoginWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLoginWhiteListOutcome>>();
    DeleteLoginWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteLoginWhiteListRequest&,
        DeleteLoginWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMachineOutcome CwpClient::DeleteMachine(const DeleteMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineResponse rsp = DeleteMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineOutcome(rsp);
        else
            return DeleteMachineOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMachineAsync(const DeleteMachineRequest& request, const DeleteMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineRequest&;
    using Resp = DeleteMachineResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMachineOutcomeCallable CwpClient::DeleteMachineCallable(const DeleteMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineOutcome>>();
    DeleteMachineAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMachineRequest&,
        DeleteMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMachineClearHistoryOutcome CwpClient::DeleteMachineClearHistory(const DeleteMachineClearHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineClearHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineClearHistoryResponse rsp = DeleteMachineClearHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineClearHistoryOutcome(rsp);
        else
            return DeleteMachineClearHistoryOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineClearHistoryOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMachineClearHistoryAsync(const DeleteMachineClearHistoryRequest& request, const DeleteMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineClearHistoryRequest&;
    using Resp = DeleteMachineClearHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachineClearHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMachineClearHistoryOutcomeCallable CwpClient::DeleteMachineClearHistoryCallable(const DeleteMachineClearHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineClearHistoryOutcome>>();
    DeleteMachineClearHistoryAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMachineClearHistoryRequest&,
        DeleteMachineClearHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMachineTagOutcome CwpClient::DeleteMachineTag(const DeleteMachineTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMachineTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMachineTagResponse rsp = DeleteMachineTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMachineTagOutcome(rsp);
        else
            return DeleteMachineTagOutcome(o.GetError());
    }
    else
    {
        return DeleteMachineTagOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMachineTagAsync(const DeleteMachineTagRequest& request, const DeleteMachineTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMachineTagRequest&;
    using Resp = DeleteMachineTagResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMachineTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMachineTagOutcomeCallable CwpClient::DeleteMachineTagCallable(const DeleteMachineTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMachineTagOutcome>>();
    DeleteMachineTagAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMachineTagRequest&,
        DeleteMachineTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMaliciousRequestWhiteListOutcome CwpClient::DeleteMaliciousRequestWhiteList(const DeleteMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaliciousRequestWhiteListResponse rsp = DeleteMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaliciousRequestWhiteListOutcome(rsp);
        else
            return DeleteMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMaliciousRequestWhiteListAsync(const DeleteMaliciousRequestWhiteListRequest& request, const DeleteMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMaliciousRequestWhiteListRequest&;
    using Resp = DeleteMaliciousRequestWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMaliciousRequestWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMaliciousRequestWhiteListOutcomeCallable CwpClient::DeleteMaliciousRequestWhiteListCallable(const DeleteMaliciousRequestWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMaliciousRequestWhiteListOutcome>>();
    DeleteMaliciousRequestWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMaliciousRequestWhiteListRequest&,
        DeleteMaliciousRequestWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMaliciousRequestsOutcome CwpClient::DeleteMaliciousRequests(const DeleteMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMaliciousRequestsResponse rsp = DeleteMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMaliciousRequestsOutcome(rsp);
        else
            return DeleteMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return DeleteMaliciousRequestsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMaliciousRequestsAsync(const DeleteMaliciousRequestsRequest& request, const DeleteMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMaliciousRequestsRequest&;
    using Resp = DeleteMaliciousRequestsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMaliciousRequests", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMaliciousRequestsOutcomeCallable CwpClient::DeleteMaliciousRequestsCallable(const DeleteMaliciousRequestsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMaliciousRequestsOutcome>>();
    DeleteMaliciousRequestsAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMaliciousRequestsRequest&,
        DeleteMaliciousRequestsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMalwareScanTaskOutcome CwpClient::DeleteMalwareScanTask(const DeleteMalwareScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwareScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwareScanTaskResponse rsp = DeleteMalwareScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwareScanTaskOutcome(rsp);
        else
            return DeleteMalwareScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwareScanTaskOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMalwareScanTaskAsync(const DeleteMalwareScanTaskRequest& request, const DeleteMalwareScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMalwareScanTaskRequest&;
    using Resp = DeleteMalwareScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMalwareScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMalwareScanTaskOutcomeCallable CwpClient::DeleteMalwareScanTaskCallable(const DeleteMalwareScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMalwareScanTaskOutcome>>();
    DeleteMalwareScanTaskAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMalwareScanTaskRequest&,
        DeleteMalwareScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMalwareWhiteListOutcome CwpClient::DeleteMalwareWhiteList(const DeleteMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwareWhiteListResponse rsp = DeleteMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwareWhiteListOutcome(rsp);
        else
            return DeleteMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMalwareWhiteListAsync(const DeleteMalwareWhiteListRequest& request, const DeleteMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMalwareWhiteListRequest&;
    using Resp = DeleteMalwareWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMalwareWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMalwareWhiteListOutcomeCallable CwpClient::DeleteMalwareWhiteListCallable(const DeleteMalwareWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMalwareWhiteListOutcome>>();
    DeleteMalwareWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMalwareWhiteListRequest&,
        DeleteMalwareWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteMalwaresOutcome CwpClient::DeleteMalwares(const DeleteMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMalwaresResponse rsp = DeleteMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMalwaresOutcome(rsp);
        else
            return DeleteMalwaresOutcome(o.GetError());
    }
    else
    {
        return DeleteMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteMalwaresAsync(const DeleteMalwaresRequest& request, const DeleteMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMalwaresRequest&;
    using Resp = DeleteMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteMalwaresOutcomeCallable CwpClient::DeleteMalwaresCallable(const DeleteMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMalwaresOutcome>>();
    DeleteMalwaresAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteMalwaresRequest&,
        DeleteMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteNetAttackWhiteListOutcome CwpClient::DeleteNetAttackWhiteList(const DeleteNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNetAttackWhiteListResponse rsp = DeleteNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNetAttackWhiteListOutcome(rsp);
        else
            return DeleteNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteNetAttackWhiteListAsync(const DeleteNetAttackWhiteListRequest& request, const DeleteNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNetAttackWhiteListRequest&;
    using Resp = DeleteNetAttackWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNetAttackWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteNetAttackWhiteListOutcomeCallable CwpClient::DeleteNetAttackWhiteListCallable(const DeleteNetAttackWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNetAttackWhiteListOutcome>>();
    DeleteNetAttackWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteNetAttackWhiteListRequest&,
        DeleteNetAttackWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteNonlocalLoginPlacesOutcome CwpClient::DeleteNonlocalLoginPlaces(const DeleteNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNonlocalLoginPlacesResponse rsp = DeleteNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNonlocalLoginPlacesOutcome(rsp);
        else
            return DeleteNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DeleteNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteNonlocalLoginPlacesAsync(const DeleteNonlocalLoginPlacesRequest& request, const DeleteNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNonlocalLoginPlacesRequest&;
    using Resp = DeleteNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteNonlocalLoginPlacesOutcomeCallable CwpClient::DeleteNonlocalLoginPlacesCallable(const DeleteNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNonlocalLoginPlacesOutcome>>();
    DeleteNonlocalLoginPlacesAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteNonlocalLoginPlacesRequest&,
        DeleteNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeletePrivilegeEventsOutcome CwpClient::DeletePrivilegeEvents(const DeletePrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivilegeEventsResponse rsp = DeletePrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivilegeEventsOutcome(rsp);
        else
            return DeletePrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return DeletePrivilegeEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DeletePrivilegeEventsAsync(const DeletePrivilegeEventsRequest& request, const DeletePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivilegeEventsRequest&;
    using Resp = DeletePrivilegeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivilegeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeletePrivilegeEventsOutcomeCallable CwpClient::DeletePrivilegeEventsCallable(const DeletePrivilegeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivilegeEventsOutcome>>();
    DeletePrivilegeEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DeletePrivilegeEventsRequest&,
        DeletePrivilegeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeletePrivilegeRulesOutcome CwpClient::DeletePrivilegeRules(const DeletePrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivilegeRulesResponse rsp = DeletePrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivilegeRulesOutcome(rsp);
        else
            return DeletePrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return DeletePrivilegeRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeletePrivilegeRulesAsync(const DeletePrivilegeRulesRequest& request, const DeletePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivilegeRulesRequest&;
    using Resp = DeletePrivilegeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivilegeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeletePrivilegeRulesOutcomeCallable CwpClient::DeletePrivilegeRulesCallable(const DeletePrivilegeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivilegeRulesOutcome>>();
    DeletePrivilegeRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DeletePrivilegeRulesRequest&,
        DeletePrivilegeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteProtectDirOutcome CwpClient::DeleteProtectDir(const DeleteProtectDirRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProtectDir");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProtectDirResponse rsp = DeleteProtectDirResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProtectDirOutcome(rsp);
        else
            return DeleteProtectDirOutcome(o.GetError());
    }
    else
    {
        return DeleteProtectDirOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteProtectDirAsync(const DeleteProtectDirRequest& request, const DeleteProtectDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProtectDirRequest&;
    using Resp = DeleteProtectDirResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProtectDir", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteProtectDirOutcomeCallable CwpClient::DeleteProtectDirCallable(const DeleteProtectDirRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProtectDirOutcome>>();
    DeleteProtectDirAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteProtectDirRequest&,
        DeleteProtectDirOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteRaspRulesOutcome CwpClient::DeleteRaspRules(const DeleteRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRaspRulesResponse rsp = DeleteRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRaspRulesOutcome(rsp);
        else
            return DeleteRaspRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteRaspRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteRaspRulesAsync(const DeleteRaspRulesRequest& request, const DeleteRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRaspRulesRequest&;
    using Resp = DeleteRaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteRaspRulesOutcomeCallable CwpClient::DeleteRaspRulesCallable(const DeleteRaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRaspRulesOutcome>>();
    DeleteRaspRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteRaspRulesRequest&,
        DeleteRaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteReverseShellEventsOutcome CwpClient::DeleteReverseShellEvents(const DeleteReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellEventsResponse rsp = DeleteReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellEventsOutcome(rsp);
        else
            return DeleteReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteReverseShellEventsAsync(const DeleteReverseShellEventsRequest& request, const DeleteReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReverseShellEventsRequest&;
    using Resp = DeleteReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteReverseShellEventsOutcomeCallable CwpClient::DeleteReverseShellEventsCallable(const DeleteReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReverseShellEventsOutcome>>();
    DeleteReverseShellEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteReverseShellEventsRequest&,
        DeleteReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteReverseShellRulesOutcome CwpClient::DeleteReverseShellRules(const DeleteReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReverseShellRulesResponse rsp = DeleteReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReverseShellRulesOutcome(rsp);
        else
            return DeleteReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteReverseShellRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteReverseShellRulesAsync(const DeleteReverseShellRulesRequest& request, const DeleteReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReverseShellRulesRequest&;
    using Resp = DeleteReverseShellRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReverseShellRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteReverseShellRulesOutcomeCallable CwpClient::DeleteReverseShellRulesCallable(const DeleteReverseShellRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReverseShellRulesOutcome>>();
    DeleteReverseShellRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteReverseShellRulesRequest&,
        DeleteReverseShellRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteRiskDnsEventOutcome CwpClient::DeleteRiskDnsEvent(const DeleteRiskDnsEventRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskDnsEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskDnsEventResponse rsp = DeleteRiskDnsEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskDnsEventOutcome(rsp);
        else
            return DeleteRiskDnsEventOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskDnsEventOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteRiskDnsEventAsync(const DeleteRiskDnsEventRequest& request, const DeleteRiskDnsEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRiskDnsEventRequest&;
    using Resp = DeleteRiskDnsEventResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRiskDnsEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteRiskDnsEventOutcomeCallable CwpClient::DeleteRiskDnsEventCallable(const DeleteRiskDnsEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRiskDnsEventOutcome>>();
    DeleteRiskDnsEventAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteRiskDnsEventRequest&,
        DeleteRiskDnsEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteRiskDnsPolicyOutcome CwpClient::DeleteRiskDnsPolicy(const DeleteRiskDnsPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskDnsPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskDnsPolicyResponse rsp = DeleteRiskDnsPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskDnsPolicyOutcome(rsp);
        else
            return DeleteRiskDnsPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskDnsPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteRiskDnsPolicyAsync(const DeleteRiskDnsPolicyRequest& request, const DeleteRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRiskDnsPolicyRequest&;
    using Resp = DeleteRiskDnsPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRiskDnsPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteRiskDnsPolicyOutcomeCallable CwpClient::DeleteRiskDnsPolicyCallable(const DeleteRiskDnsPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRiskDnsPolicyOutcome>>();
    DeleteRiskDnsPolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteRiskDnsPolicyRequest&,
        DeleteRiskDnsPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteScanTaskOutcome CwpClient::DeleteScanTask(const DeleteScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScanTaskResponse rsp = DeleteScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScanTaskOutcome(rsp);
        else
            return DeleteScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteScanTaskOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteScanTaskAsync(const DeleteScanTaskRequest& request, const DeleteScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteScanTaskRequest&;
    using Resp = DeleteScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteScanTaskOutcomeCallable CwpClient::DeleteScanTaskCallable(const DeleteScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteScanTaskOutcome>>();
    DeleteScanTaskAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteScanTaskRequest&,
        DeleteScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteSearchTemplateOutcome CwpClient::DeleteSearchTemplate(const DeleteSearchTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSearchTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSearchTemplateResponse rsp = DeleteSearchTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSearchTemplateOutcome(rsp);
        else
            return DeleteSearchTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteSearchTemplateOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteSearchTemplateAsync(const DeleteSearchTemplateRequest& request, const DeleteSearchTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSearchTemplateRequest&;
    using Resp = DeleteSearchTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSearchTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteSearchTemplateOutcomeCallable CwpClient::DeleteSearchTemplateCallable(const DeleteSearchTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSearchTemplateOutcome>>();
    DeleteSearchTemplateAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteSearchTemplateRequest&,
        DeleteSearchTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteTagsOutcome CwpClient::DeleteTags(const DeleteTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagsResponse rsp = DeleteTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagsOutcome(rsp);
        else
            return DeleteTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteTagsOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteTagsAsync(const DeleteTagsRequest& request, const DeleteTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTagsRequest&;
    using Resp = DeleteTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteTagsOutcomeCallable CwpClient::DeleteTagsCallable(const DeleteTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTagsOutcome>>();
    DeleteTagsAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteTagsRequest&,
        DeleteTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteWebHookPolicyOutcome CwpClient::DeleteWebHookPolicy(const DeleteWebHookPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebHookPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebHookPolicyResponse rsp = DeleteWebHookPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebHookPolicyOutcome(rsp);
        else
            return DeleteWebHookPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteWebHookPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebHookPolicyAsync(const DeleteWebHookPolicyRequest& request, const DeleteWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebHookPolicyRequest&;
    using Resp = DeleteWebHookPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebHookPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteWebHookPolicyOutcomeCallable CwpClient::DeleteWebHookPolicyCallable(const DeleteWebHookPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebHookPolicyOutcome>>();
    DeleteWebHookPolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteWebHookPolicyRequest&,
        DeleteWebHookPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteWebHookReceiverOutcome CwpClient::DeleteWebHookReceiver(const DeleteWebHookReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebHookReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebHookReceiverResponse rsp = DeleteWebHookReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebHookReceiverOutcome(rsp);
        else
            return DeleteWebHookReceiverOutcome(o.GetError());
    }
    else
    {
        return DeleteWebHookReceiverOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebHookReceiverAsync(const DeleteWebHookReceiverRequest& request, const DeleteWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebHookReceiverRequest&;
    using Resp = DeleteWebHookReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebHookReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteWebHookReceiverOutcomeCallable CwpClient::DeleteWebHookReceiverCallable(const DeleteWebHookReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebHookReceiverOutcome>>();
    DeleteWebHookReceiverAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteWebHookReceiverRequest&,
        DeleteWebHookReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteWebHookRuleOutcome CwpClient::DeleteWebHookRule(const DeleteWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebHookRuleResponse rsp = DeleteWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebHookRuleOutcome(rsp);
        else
            return DeleteWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebHookRuleAsync(const DeleteWebHookRuleRequest& request, const DeleteWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebHookRuleRequest&;
    using Resp = DeleteWebHookRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebHookRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteWebHookRuleOutcomeCallable CwpClient::DeleteWebHookRuleCallable(const DeleteWebHookRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebHookRuleOutcome>>();
    DeleteWebHookRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteWebHookRuleRequest&,
        DeleteWebHookRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DeleteWebPageEventLogOutcome CwpClient::DeleteWebPageEventLog(const DeleteWebPageEventLogRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWebPageEventLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWebPageEventLogResponse rsp = DeleteWebPageEventLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWebPageEventLogOutcome(rsp);
        else
            return DeleteWebPageEventLogOutcome(o.GetError());
    }
    else
    {
        return DeleteWebPageEventLogOutcome(outcome.GetError());
    }
}

void CwpClient::DeleteWebPageEventLogAsync(const DeleteWebPageEventLogRequest& request, const DeleteWebPageEventLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWebPageEventLogRequest&;
    using Resp = DeleteWebPageEventLogResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWebPageEventLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DeleteWebPageEventLogOutcomeCallable CwpClient::DeleteWebPageEventLogCallable(const DeleteWebPageEventLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWebPageEventLogOutcome>>();
    DeleteWebPageEventLogAsync(
    request,
    [prom](
        const CwpClient*,
        const DeleteWebPageEventLogRequest&,
        DeleteWebPageEventLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeABTestConfigOutcome CwpClient::DescribeABTestConfig(const DescribeABTestConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeABTestConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeABTestConfigResponse rsp = DescribeABTestConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeABTestConfigOutcome(rsp);
        else
            return DescribeABTestConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeABTestConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeABTestConfigAsync(const DescribeABTestConfigRequest& request, const DescribeABTestConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeABTestConfigRequest&;
    using Resp = DescribeABTestConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeABTestConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeABTestConfigOutcomeCallable CwpClient::DescribeABTestConfigCallable(const DescribeABTestConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeABTestConfigOutcome>>();
    DescribeABTestConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeABTestConfigRequest&,
        DescribeABTestConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAESKeyOutcome CwpClient::DescribeAESKey(const DescribeAESKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAESKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAESKeyResponse rsp = DescribeAESKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAESKeyOutcome(rsp);
        else
            return DescribeAESKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeAESKeyOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAESKeyAsync(const DescribeAESKeyRequest& request, const DescribeAESKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAESKeyRequest&;
    using Resp = DescribeAESKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAESKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAESKeyOutcomeCallable CwpClient::DescribeAESKeyCallable(const DescribeAESKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAESKeyOutcome>>();
    DescribeAESKeyAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAESKeyRequest&,
        DescribeAESKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAccountStatisticsOutcome CwpClient::DescribeAccountStatistics(const DescribeAccountStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccountStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccountStatisticsResponse rsp = DescribeAccountStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccountStatisticsOutcome(rsp);
        else
            return DescribeAccountStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccountStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAccountStatisticsAsync(const DescribeAccountStatisticsRequest& request, const DescribeAccountStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccountStatisticsRequest&;
    using Resp = DescribeAccountStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccountStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAccountStatisticsOutcomeCallable CwpClient::DescribeAccountStatisticsCallable(const DescribeAccountStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccountStatisticsOutcome>>();
    DescribeAccountStatisticsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAccountStatisticsRequest&,
        DescribeAccountStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAgentInstallCommandOutcome CwpClient::DescribeAgentInstallCommand(const DescribeAgentInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstallCommandResponse rsp = DescribeAgentInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstallCommandOutcome(rsp);
        else
            return DescribeAgentInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstallCommandOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAgentInstallCommandAsync(const DescribeAgentInstallCommandRequest& request, const DescribeAgentInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentInstallCommandRequest&;
    using Resp = DescribeAgentInstallCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentInstallCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAgentInstallCommandOutcomeCallable CwpClient::DescribeAgentInstallCommandCallable(const DescribeAgentInstallCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentInstallCommandOutcome>>();
    DescribeAgentInstallCommandAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAgentInstallCommandRequest&,
        DescribeAgentInstallCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAgentInstallationTokenOutcome CwpClient::DescribeAgentInstallationToken(const DescribeAgentInstallationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAgentInstallationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAgentInstallationTokenResponse rsp = DescribeAgentInstallationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAgentInstallationTokenOutcome(rsp);
        else
            return DescribeAgentInstallationTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeAgentInstallationTokenOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAgentInstallationTokenAsync(const DescribeAgentInstallationTokenRequest& request, const DescribeAgentInstallationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAgentInstallationTokenRequest&;
    using Resp = DescribeAgentInstallationTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAgentInstallationToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAgentInstallationTokenOutcomeCallable CwpClient::DescribeAgentInstallationTokenCallable(const DescribeAgentInstallationTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAgentInstallationTokenOutcome>>();
    DescribeAgentInstallationTokenAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAgentInstallationTokenRequest&,
        DescribeAgentInstallationTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAlarmIncidentNodesOutcome CwpClient::DescribeAlarmIncidentNodes(const DescribeAlarmIncidentNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmIncidentNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmIncidentNodesResponse rsp = DescribeAlarmIncidentNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmIncidentNodesOutcome(rsp);
        else
            return DescribeAlarmIncidentNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmIncidentNodesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAlarmIncidentNodesAsync(const DescribeAlarmIncidentNodesRequest& request, const DescribeAlarmIncidentNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmIncidentNodesRequest&;
    using Resp = DescribeAlarmIncidentNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmIncidentNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAlarmIncidentNodesOutcomeCallable CwpClient::DescribeAlarmIncidentNodesCallable(const DescribeAlarmIncidentNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmIncidentNodesOutcome>>();
    DescribeAlarmIncidentNodesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAlarmIncidentNodesRequest&,
        DescribeAlarmIncidentNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAlarmVertexIdOutcome CwpClient::DescribeAlarmVertexId(const DescribeAlarmVertexIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmVertexId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmVertexIdResponse rsp = DescribeAlarmVertexIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmVertexIdOutcome(rsp);
        else
            return DescribeAlarmVertexIdOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmVertexIdOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAlarmVertexIdAsync(const DescribeAlarmVertexIdRequest& request, const DescribeAlarmVertexIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmVertexIdRequest&;
    using Resp = DescribeAlarmVertexIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmVertexId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAlarmVertexIdOutcomeCallable CwpClient::DescribeAlarmVertexIdCallable(const DescribeAlarmVertexIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmVertexIdOutcome>>();
    DescribeAlarmVertexIdAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAlarmVertexIdRequest&,
        DescribeAlarmVertexIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetAppCountOutcome CwpClient::DescribeAssetAppCount(const DescribeAssetAppCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppCountResponse rsp = DescribeAssetAppCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppCountOutcome(rsp);
        else
            return DescribeAssetAppCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetAppCountAsync(const DescribeAssetAppCountRequest& request, const DescribeAssetAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetAppCountRequest&;
    using Resp = DescribeAssetAppCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetAppCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetAppCountOutcomeCallable CwpClient::DescribeAssetAppCountCallable(const DescribeAssetAppCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetAppCountOutcome>>();
    DescribeAssetAppCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetAppCountRequest&,
        DescribeAssetAppCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetAppListOutcome CwpClient::DescribeAssetAppList(const DescribeAssetAppListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppListResponse rsp = DescribeAssetAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppListOutcome(rsp);
        else
            return DescribeAssetAppListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetAppListAsync(const DescribeAssetAppListRequest& request, const DescribeAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetAppListRequest&;
    using Resp = DescribeAssetAppListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetAppList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetAppListOutcomeCallable CwpClient::DescribeAssetAppListCallable(const DescribeAssetAppListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetAppListOutcome>>();
    DescribeAssetAppListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetAppListRequest&,
        DescribeAssetAppListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetAppProcessListOutcome CwpClient::DescribeAssetAppProcessList(const DescribeAssetAppProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetAppProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetAppProcessListResponse rsp = DescribeAssetAppProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetAppProcessListOutcome(rsp);
        else
            return DescribeAssetAppProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetAppProcessListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetAppProcessListAsync(const DescribeAssetAppProcessListRequest& request, const DescribeAssetAppProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetAppProcessListRequest&;
    using Resp = DescribeAssetAppProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetAppProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetAppProcessListOutcomeCallable CwpClient::DescribeAssetAppProcessListCallable(const DescribeAssetAppProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetAppProcessListOutcome>>();
    DescribeAssetAppProcessListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetAppProcessListRequest&,
        DescribeAssetAppProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetCoreModuleInfoOutcome CwpClient::DescribeAssetCoreModuleInfo(const DescribeAssetCoreModuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetCoreModuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetCoreModuleInfoResponse rsp = DescribeAssetCoreModuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetCoreModuleInfoOutcome(rsp);
        else
            return DescribeAssetCoreModuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetCoreModuleInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetCoreModuleInfoAsync(const DescribeAssetCoreModuleInfoRequest& request, const DescribeAssetCoreModuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetCoreModuleInfoRequest&;
    using Resp = DescribeAssetCoreModuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetCoreModuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetCoreModuleInfoOutcomeCallable CwpClient::DescribeAssetCoreModuleInfoCallable(const DescribeAssetCoreModuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetCoreModuleInfoOutcome>>();
    DescribeAssetCoreModuleInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetCoreModuleInfoRequest&,
        DescribeAssetCoreModuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetCoreModuleListOutcome CwpClient::DescribeAssetCoreModuleList(const DescribeAssetCoreModuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetCoreModuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetCoreModuleListResponse rsp = DescribeAssetCoreModuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetCoreModuleListOutcome(rsp);
        else
            return DescribeAssetCoreModuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetCoreModuleListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetCoreModuleListAsync(const DescribeAssetCoreModuleListRequest& request, const DescribeAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetCoreModuleListRequest&;
    using Resp = DescribeAssetCoreModuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetCoreModuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetCoreModuleListOutcomeCallable CwpClient::DescribeAssetCoreModuleListCallable(const DescribeAssetCoreModuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetCoreModuleListOutcome>>();
    DescribeAssetCoreModuleListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetCoreModuleListRequest&,
        DescribeAssetCoreModuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetDatabaseCountOutcome CwpClient::DescribeAssetDatabaseCount(const DescribeAssetDatabaseCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDatabaseCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDatabaseCountResponse rsp = DescribeAssetDatabaseCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDatabaseCountOutcome(rsp);
        else
            return DescribeAssetDatabaseCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDatabaseCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDatabaseCountAsync(const DescribeAssetDatabaseCountRequest& request, const DescribeAssetDatabaseCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDatabaseCountRequest&;
    using Resp = DescribeAssetDatabaseCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDatabaseCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetDatabaseCountOutcomeCallable CwpClient::DescribeAssetDatabaseCountCallable(const DescribeAssetDatabaseCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDatabaseCountOutcome>>();
    DescribeAssetDatabaseCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetDatabaseCountRequest&,
        DescribeAssetDatabaseCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetDatabaseInfoOutcome CwpClient::DescribeAssetDatabaseInfo(const DescribeAssetDatabaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDatabaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDatabaseInfoResponse rsp = DescribeAssetDatabaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDatabaseInfoOutcome(rsp);
        else
            return DescribeAssetDatabaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDatabaseInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDatabaseInfoAsync(const DescribeAssetDatabaseInfoRequest& request, const DescribeAssetDatabaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDatabaseInfoRequest&;
    using Resp = DescribeAssetDatabaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDatabaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetDatabaseInfoOutcomeCallable CwpClient::DescribeAssetDatabaseInfoCallable(const DescribeAssetDatabaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDatabaseInfoOutcome>>();
    DescribeAssetDatabaseInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetDatabaseInfoRequest&,
        DescribeAssetDatabaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetDatabaseListOutcome CwpClient::DescribeAssetDatabaseList(const DescribeAssetDatabaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDatabaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDatabaseListResponse rsp = DescribeAssetDatabaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDatabaseListOutcome(rsp);
        else
            return DescribeAssetDatabaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDatabaseListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDatabaseListAsync(const DescribeAssetDatabaseListRequest& request, const DescribeAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDatabaseListRequest&;
    using Resp = DescribeAssetDatabaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDatabaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetDatabaseListOutcomeCallable CwpClient::DescribeAssetDatabaseListCallable(const DescribeAssetDatabaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDatabaseListOutcome>>();
    DescribeAssetDatabaseListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetDatabaseListRequest&,
        DescribeAssetDatabaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetDiskListOutcome CwpClient::DescribeAssetDiskList(const DescribeAssetDiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDiskListResponse rsp = DescribeAssetDiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDiskListOutcome(rsp);
        else
            return DescribeAssetDiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDiskListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetDiskListAsync(const DescribeAssetDiskListRequest& request, const DescribeAssetDiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDiskListRequest&;
    using Resp = DescribeAssetDiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetDiskListOutcomeCallable CwpClient::DescribeAssetDiskListCallable(const DescribeAssetDiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDiskListOutcome>>();
    DescribeAssetDiskListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetDiskListRequest&,
        DescribeAssetDiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetEnvListOutcome CwpClient::DescribeAssetEnvList(const DescribeAssetEnvListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetEnvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetEnvListResponse rsp = DescribeAssetEnvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetEnvListOutcome(rsp);
        else
            return DescribeAssetEnvListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetEnvListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetEnvListAsync(const DescribeAssetEnvListRequest& request, const DescribeAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetEnvListRequest&;
    using Resp = DescribeAssetEnvListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetEnvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetEnvListOutcomeCallable CwpClient::DescribeAssetEnvListCallable(const DescribeAssetEnvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetEnvListOutcome>>();
    DescribeAssetEnvListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetEnvListRequest&,
        DescribeAssetEnvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetHostTotalCountOutcome CwpClient::DescribeAssetHostTotalCount(const DescribeAssetHostTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetHostTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetHostTotalCountResponse rsp = DescribeAssetHostTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetHostTotalCountOutcome(rsp);
        else
            return DescribeAssetHostTotalCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetHostTotalCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetHostTotalCountAsync(const DescribeAssetHostTotalCountRequest& request, const DescribeAssetHostTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetHostTotalCountRequest&;
    using Resp = DescribeAssetHostTotalCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetHostTotalCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetHostTotalCountOutcomeCallable CwpClient::DescribeAssetHostTotalCountCallable(const DescribeAssetHostTotalCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetHostTotalCountOutcome>>();
    DescribeAssetHostTotalCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetHostTotalCountRequest&,
        DescribeAssetHostTotalCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetInfoOutcome CwpClient::DescribeAssetInfo(const DescribeAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetInfoResponse rsp = DescribeAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetInfoOutcome(rsp);
        else
            return DescribeAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetInfoAsync(const DescribeAssetInfoRequest& request, const DescribeAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetInfoRequest&;
    using Resp = DescribeAssetInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetInfoOutcomeCallable CwpClient::DescribeAssetInfoCallable(const DescribeAssetInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetInfoOutcome>>();
    DescribeAssetInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetInfoRequest&,
        DescribeAssetInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetInitServiceListOutcome CwpClient::DescribeAssetInitServiceList(const DescribeAssetInitServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetInitServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetInitServiceListResponse rsp = DescribeAssetInitServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetInitServiceListOutcome(rsp);
        else
            return DescribeAssetInitServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetInitServiceListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetInitServiceListAsync(const DescribeAssetInitServiceListRequest& request, const DescribeAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetInitServiceListRequest&;
    using Resp = DescribeAssetInitServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetInitServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetInitServiceListOutcomeCallable CwpClient::DescribeAssetInitServiceListCallable(const DescribeAssetInitServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetInitServiceListOutcome>>();
    DescribeAssetInitServiceListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetInitServiceListRequest&,
        DescribeAssetInitServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetJarInfoOutcome CwpClient::DescribeAssetJarInfo(const DescribeAssetJarInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetJarInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetJarInfoResponse rsp = DescribeAssetJarInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetJarInfoOutcome(rsp);
        else
            return DescribeAssetJarInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetJarInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetJarInfoAsync(const DescribeAssetJarInfoRequest& request, const DescribeAssetJarInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetJarInfoRequest&;
    using Resp = DescribeAssetJarInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetJarInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetJarInfoOutcomeCallable CwpClient::DescribeAssetJarInfoCallable(const DescribeAssetJarInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetJarInfoOutcome>>();
    DescribeAssetJarInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetJarInfoRequest&,
        DescribeAssetJarInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetJarListOutcome CwpClient::DescribeAssetJarList(const DescribeAssetJarListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetJarList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetJarListResponse rsp = DescribeAssetJarListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetJarListOutcome(rsp);
        else
            return DescribeAssetJarListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetJarListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetJarListAsync(const DescribeAssetJarListRequest& request, const DescribeAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetJarListRequest&;
    using Resp = DescribeAssetJarListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetJarList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetJarListOutcomeCallable CwpClient::DescribeAssetJarListCallable(const DescribeAssetJarListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetJarListOutcome>>();
    DescribeAssetJarListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetJarListRequest&,
        DescribeAssetJarListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetLoadInfoOutcome CwpClient::DescribeAssetLoadInfo(const DescribeAssetLoadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetLoadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetLoadInfoResponse rsp = DescribeAssetLoadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetLoadInfoOutcome(rsp);
        else
            return DescribeAssetLoadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetLoadInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetLoadInfoAsync(const DescribeAssetLoadInfoRequest& request, const DescribeAssetLoadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetLoadInfoRequest&;
    using Resp = DescribeAssetLoadInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetLoadInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetLoadInfoOutcomeCallable CwpClient::DescribeAssetLoadInfoCallable(const DescribeAssetLoadInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetLoadInfoOutcome>>();
    DescribeAssetLoadInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetLoadInfoRequest&,
        DescribeAssetLoadInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetMachineDetailOutcome CwpClient::DescribeAssetMachineDetail(const DescribeAssetMachineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetMachineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetMachineDetailResponse rsp = DescribeAssetMachineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetMachineDetailOutcome(rsp);
        else
            return DescribeAssetMachineDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetMachineDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetMachineDetailAsync(const DescribeAssetMachineDetailRequest& request, const DescribeAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetMachineDetailRequest&;
    using Resp = DescribeAssetMachineDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetMachineDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetMachineDetailOutcomeCallable CwpClient::DescribeAssetMachineDetailCallable(const DescribeAssetMachineDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetMachineDetailOutcome>>();
    DescribeAssetMachineDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetMachineDetailRequest&,
        DescribeAssetMachineDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetMachineListOutcome CwpClient::DescribeAssetMachineList(const DescribeAssetMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetMachineListResponse rsp = DescribeAssetMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetMachineListOutcome(rsp);
        else
            return DescribeAssetMachineListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetMachineListAsync(const DescribeAssetMachineListRequest& request, const DescribeAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetMachineListRequest&;
    using Resp = DescribeAssetMachineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetMachineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetMachineListOutcomeCallable CwpClient::DescribeAssetMachineListCallable(const DescribeAssetMachineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetMachineListOutcome>>();
    DescribeAssetMachineListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetMachineListRequest&,
        DescribeAssetMachineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetMachineTagTopOutcome CwpClient::DescribeAssetMachineTagTop(const DescribeAssetMachineTagTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetMachineTagTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetMachineTagTopResponse rsp = DescribeAssetMachineTagTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetMachineTagTopOutcome(rsp);
        else
            return DescribeAssetMachineTagTopOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetMachineTagTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetMachineTagTopAsync(const DescribeAssetMachineTagTopRequest& request, const DescribeAssetMachineTagTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetMachineTagTopRequest&;
    using Resp = DescribeAssetMachineTagTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetMachineTagTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetMachineTagTopOutcomeCallable CwpClient::DescribeAssetMachineTagTopCallable(const DescribeAssetMachineTagTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetMachineTagTopOutcome>>();
    DescribeAssetMachineTagTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetMachineTagTopRequest&,
        DescribeAssetMachineTagTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetPlanTaskListOutcome CwpClient::DescribeAssetPlanTaskList(const DescribeAssetPlanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPlanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPlanTaskListResponse rsp = DescribeAssetPlanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPlanTaskListOutcome(rsp);
        else
            return DescribeAssetPlanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPlanTaskListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetPlanTaskListAsync(const DescribeAssetPlanTaskListRequest& request, const DescribeAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetPlanTaskListRequest&;
    using Resp = DescribeAssetPlanTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetPlanTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetPlanTaskListOutcomeCallable CwpClient::DescribeAssetPlanTaskListCallable(const DescribeAssetPlanTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetPlanTaskListOutcome>>();
    DescribeAssetPlanTaskListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetPlanTaskListRequest&,
        DescribeAssetPlanTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetPortCountOutcome CwpClient::DescribeAssetPortCount(const DescribeAssetPortCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPortCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPortCountResponse rsp = DescribeAssetPortCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPortCountOutcome(rsp);
        else
            return DescribeAssetPortCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPortCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetPortCountAsync(const DescribeAssetPortCountRequest& request, const DescribeAssetPortCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetPortCountRequest&;
    using Resp = DescribeAssetPortCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetPortCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetPortCountOutcomeCallable CwpClient::DescribeAssetPortCountCallable(const DescribeAssetPortCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetPortCountOutcome>>();
    DescribeAssetPortCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetPortCountRequest&,
        DescribeAssetPortCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetPortInfoListOutcome CwpClient::DescribeAssetPortInfoList(const DescribeAssetPortInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetPortInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetPortInfoListResponse rsp = DescribeAssetPortInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetPortInfoListOutcome(rsp);
        else
            return DescribeAssetPortInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetPortInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetPortInfoListAsync(const DescribeAssetPortInfoListRequest& request, const DescribeAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetPortInfoListRequest&;
    using Resp = DescribeAssetPortInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetPortInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetPortInfoListOutcomeCallable CwpClient::DescribeAssetPortInfoListCallable(const DescribeAssetPortInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetPortInfoListOutcome>>();
    DescribeAssetPortInfoListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetPortInfoListRequest&,
        DescribeAssetPortInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetProcessCountOutcome CwpClient::DescribeAssetProcessCount(const DescribeAssetProcessCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessCountResponse rsp = DescribeAssetProcessCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessCountOutcome(rsp);
        else
            return DescribeAssetProcessCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetProcessCountAsync(const DescribeAssetProcessCountRequest& request, const DescribeAssetProcessCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetProcessCountRequest&;
    using Resp = DescribeAssetProcessCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetProcessCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetProcessCountOutcomeCallable CwpClient::DescribeAssetProcessCountCallable(const DescribeAssetProcessCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetProcessCountOutcome>>();
    DescribeAssetProcessCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetProcessCountRequest&,
        DescribeAssetProcessCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetProcessInfoListOutcome CwpClient::DescribeAssetProcessInfoList(const DescribeAssetProcessInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessInfoListResponse rsp = DescribeAssetProcessInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessInfoListOutcome(rsp);
        else
            return DescribeAssetProcessInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetProcessInfoListAsync(const DescribeAssetProcessInfoListRequest& request, const DescribeAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetProcessInfoListRequest&;
    using Resp = DescribeAssetProcessInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetProcessInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetProcessInfoListOutcomeCallable CwpClient::DescribeAssetProcessInfoListCallable(const DescribeAssetProcessInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetProcessInfoListOutcome>>();
    DescribeAssetProcessInfoListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetProcessInfoListRequest&,
        DescribeAssetProcessInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetRecentMachineInfoOutcome CwpClient::DescribeAssetRecentMachineInfo(const DescribeAssetRecentMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetRecentMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetRecentMachineInfoResponse rsp = DescribeAssetRecentMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetRecentMachineInfoOutcome(rsp);
        else
            return DescribeAssetRecentMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetRecentMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetRecentMachineInfoAsync(const DescribeAssetRecentMachineInfoRequest& request, const DescribeAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetRecentMachineInfoRequest&;
    using Resp = DescribeAssetRecentMachineInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetRecentMachineInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetRecentMachineInfoOutcomeCallable CwpClient::DescribeAssetRecentMachineInfoCallable(const DescribeAssetRecentMachineInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetRecentMachineInfoOutcome>>();
    DescribeAssetRecentMachineInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetRecentMachineInfoRequest&,
        DescribeAssetRecentMachineInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetSystemPackageListOutcome CwpClient::DescribeAssetSystemPackageList(const DescribeAssetSystemPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSystemPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSystemPackageListResponse rsp = DescribeAssetSystemPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSystemPackageListOutcome(rsp);
        else
            return DescribeAssetSystemPackageListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSystemPackageListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetSystemPackageListAsync(const DescribeAssetSystemPackageListRequest& request, const DescribeAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetSystemPackageListRequest&;
    using Resp = DescribeAssetSystemPackageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetSystemPackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetSystemPackageListOutcomeCallable CwpClient::DescribeAssetSystemPackageListCallable(const DescribeAssetSystemPackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetSystemPackageListOutcome>>();
    DescribeAssetSystemPackageListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetSystemPackageListRequest&,
        DescribeAssetSystemPackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetTotalCountOutcome CwpClient::DescribeAssetTotalCount(const DescribeAssetTotalCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetTotalCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetTotalCountResponse rsp = DescribeAssetTotalCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetTotalCountOutcome(rsp);
        else
            return DescribeAssetTotalCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetTotalCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetTotalCountAsync(const DescribeAssetTotalCountRequest& request, const DescribeAssetTotalCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetTotalCountRequest&;
    using Resp = DescribeAssetTotalCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetTotalCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetTotalCountOutcomeCallable CwpClient::DescribeAssetTotalCountCallable(const DescribeAssetTotalCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetTotalCountOutcome>>();
    DescribeAssetTotalCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetTotalCountRequest&,
        DescribeAssetTotalCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetTypeTopOutcome CwpClient::DescribeAssetTypeTop(const DescribeAssetTypeTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetTypeTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetTypeTopResponse rsp = DescribeAssetTypeTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetTypeTopOutcome(rsp);
        else
            return DescribeAssetTypeTopOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetTypeTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetTypeTopAsync(const DescribeAssetTypeTopRequest& request, const DescribeAssetTypeTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetTypeTopRequest&;
    using Resp = DescribeAssetTypeTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetTypeTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetTypeTopOutcomeCallable CwpClient::DescribeAssetTypeTopCallable(const DescribeAssetTypeTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetTypeTopOutcome>>();
    DescribeAssetTypeTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetTypeTopRequest&,
        DescribeAssetTypeTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetTypesOutcome CwpClient::DescribeAssetTypes(const DescribeAssetTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetTypesResponse rsp = DescribeAssetTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetTypesOutcome(rsp);
        else
            return DescribeAssetTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetTypesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetTypesAsync(const DescribeAssetTypesRequest& request, const DescribeAssetTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetTypesRequest&;
    using Resp = DescribeAssetTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetTypesOutcomeCallable CwpClient::DescribeAssetTypesCallable(const DescribeAssetTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetTypesOutcome>>();
    DescribeAssetTypesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetTypesRequest&,
        DescribeAssetTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetUserCountOutcome CwpClient::DescribeAssetUserCount(const DescribeAssetUserCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserCountResponse rsp = DescribeAssetUserCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserCountOutcome(rsp);
        else
            return DescribeAssetUserCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserCountAsync(const DescribeAssetUserCountRequest& request, const DescribeAssetUserCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetUserCountRequest&;
    using Resp = DescribeAssetUserCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetUserCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetUserCountOutcomeCallable CwpClient::DescribeAssetUserCountCallable(const DescribeAssetUserCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetUserCountOutcome>>();
    DescribeAssetUserCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetUserCountRequest&,
        DescribeAssetUserCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetUserInfoOutcome CwpClient::DescribeAssetUserInfo(const DescribeAssetUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserInfoResponse rsp = DescribeAssetUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserInfoOutcome(rsp);
        else
            return DescribeAssetUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserInfoAsync(const DescribeAssetUserInfoRequest& request, const DescribeAssetUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetUserInfoRequest&;
    using Resp = DescribeAssetUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetUserInfoOutcomeCallable CwpClient::DescribeAssetUserInfoCallable(const DescribeAssetUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetUserInfoOutcome>>();
    DescribeAssetUserInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetUserInfoRequest&,
        DescribeAssetUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetUserKeyListOutcome CwpClient::DescribeAssetUserKeyList(const DescribeAssetUserKeyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserKeyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserKeyListResponse rsp = DescribeAssetUserKeyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserKeyListOutcome(rsp);
        else
            return DescribeAssetUserKeyListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserKeyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserKeyListAsync(const DescribeAssetUserKeyListRequest& request, const DescribeAssetUserKeyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetUserKeyListRequest&;
    using Resp = DescribeAssetUserKeyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetUserKeyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetUserKeyListOutcomeCallable CwpClient::DescribeAssetUserKeyListCallable(const DescribeAssetUserKeyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetUserKeyListOutcome>>();
    DescribeAssetUserKeyListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetUserKeyListRequest&,
        DescribeAssetUserKeyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetUserListOutcome CwpClient::DescribeAssetUserList(const DescribeAssetUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetUserListResponse rsp = DescribeAssetUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetUserListOutcome(rsp);
        else
            return DescribeAssetUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetUserListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetUserListAsync(const DescribeAssetUserListRequest& request, const DescribeAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetUserListRequest&;
    using Resp = DescribeAssetUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetUserListOutcomeCallable CwpClient::DescribeAssetUserListCallable(const DescribeAssetUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetUserListOutcome>>();
    DescribeAssetUserListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetUserListRequest&,
        DescribeAssetUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebAppCountOutcome CwpClient::DescribeAssetWebAppCount(const DescribeAssetWebAppCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebAppCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebAppCountResponse rsp = DescribeAssetWebAppCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebAppCountOutcome(rsp);
        else
            return DescribeAssetWebAppCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebAppCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebAppCountAsync(const DescribeAssetWebAppCountRequest& request, const DescribeAssetWebAppCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebAppCountRequest&;
    using Resp = DescribeAssetWebAppCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebAppCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebAppCountOutcomeCallable CwpClient::DescribeAssetWebAppCountCallable(const DescribeAssetWebAppCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebAppCountOutcome>>();
    DescribeAssetWebAppCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebAppCountRequest&,
        DescribeAssetWebAppCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebAppListOutcome CwpClient::DescribeAssetWebAppList(const DescribeAssetWebAppListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebAppListResponse rsp = DescribeAssetWebAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebAppListOutcome(rsp);
        else
            return DescribeAssetWebAppListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebAppListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebAppListAsync(const DescribeAssetWebAppListRequest& request, const DescribeAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebAppListRequest&;
    using Resp = DescribeAssetWebAppListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebAppList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebAppListOutcomeCallable CwpClient::DescribeAssetWebAppListCallable(const DescribeAssetWebAppListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebAppListOutcome>>();
    DescribeAssetWebAppListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebAppListRequest&,
        DescribeAssetWebAppListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebAppPluginListOutcome CwpClient::DescribeAssetWebAppPluginList(const DescribeAssetWebAppPluginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebAppPluginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebAppPluginListResponse rsp = DescribeAssetWebAppPluginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebAppPluginListOutcome(rsp);
        else
            return DescribeAssetWebAppPluginListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebAppPluginListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebAppPluginListAsync(const DescribeAssetWebAppPluginListRequest& request, const DescribeAssetWebAppPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebAppPluginListRequest&;
    using Resp = DescribeAssetWebAppPluginListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebAppPluginList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebAppPluginListOutcomeCallable CwpClient::DescribeAssetWebAppPluginListCallable(const DescribeAssetWebAppPluginListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebAppPluginListOutcome>>();
    DescribeAssetWebAppPluginListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebAppPluginListRequest&,
        DescribeAssetWebAppPluginListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebFrameCountOutcome CwpClient::DescribeAssetWebFrameCount(const DescribeAssetWebFrameCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebFrameCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebFrameCountResponse rsp = DescribeAssetWebFrameCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebFrameCountOutcome(rsp);
        else
            return DescribeAssetWebFrameCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebFrameCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebFrameCountAsync(const DescribeAssetWebFrameCountRequest& request, const DescribeAssetWebFrameCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebFrameCountRequest&;
    using Resp = DescribeAssetWebFrameCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebFrameCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebFrameCountOutcomeCallable CwpClient::DescribeAssetWebFrameCountCallable(const DescribeAssetWebFrameCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebFrameCountOutcome>>();
    DescribeAssetWebFrameCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebFrameCountRequest&,
        DescribeAssetWebFrameCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebFrameListOutcome CwpClient::DescribeAssetWebFrameList(const DescribeAssetWebFrameListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebFrameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebFrameListResponse rsp = DescribeAssetWebFrameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebFrameListOutcome(rsp);
        else
            return DescribeAssetWebFrameListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebFrameListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebFrameListAsync(const DescribeAssetWebFrameListRequest& request, const DescribeAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebFrameListRequest&;
    using Resp = DescribeAssetWebFrameListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebFrameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebFrameListOutcomeCallable CwpClient::DescribeAssetWebFrameListCallable(const DescribeAssetWebFrameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebFrameListOutcome>>();
    DescribeAssetWebFrameListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebFrameListRequest&,
        DescribeAssetWebFrameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebLocationCountOutcome CwpClient::DescribeAssetWebLocationCount(const DescribeAssetWebLocationCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationCountResponse rsp = DescribeAssetWebLocationCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationCountOutcome(rsp);
        else
            return DescribeAssetWebLocationCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationCountAsync(const DescribeAssetWebLocationCountRequest& request, const DescribeAssetWebLocationCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebLocationCountRequest&;
    using Resp = DescribeAssetWebLocationCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebLocationCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebLocationCountOutcomeCallable CwpClient::DescribeAssetWebLocationCountCallable(const DescribeAssetWebLocationCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebLocationCountOutcome>>();
    DescribeAssetWebLocationCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebLocationCountRequest&,
        DescribeAssetWebLocationCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebLocationInfoOutcome CwpClient::DescribeAssetWebLocationInfo(const DescribeAssetWebLocationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationInfoResponse rsp = DescribeAssetWebLocationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationInfoOutcome(rsp);
        else
            return DescribeAssetWebLocationInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationInfoAsync(const DescribeAssetWebLocationInfoRequest& request, const DescribeAssetWebLocationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebLocationInfoRequest&;
    using Resp = DescribeAssetWebLocationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebLocationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebLocationInfoOutcomeCallable CwpClient::DescribeAssetWebLocationInfoCallable(const DescribeAssetWebLocationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebLocationInfoOutcome>>();
    DescribeAssetWebLocationInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebLocationInfoRequest&,
        DescribeAssetWebLocationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebLocationListOutcome CwpClient::DescribeAssetWebLocationList(const DescribeAssetWebLocationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationListResponse rsp = DescribeAssetWebLocationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationListOutcome(rsp);
        else
            return DescribeAssetWebLocationListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationListAsync(const DescribeAssetWebLocationListRequest& request, const DescribeAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebLocationListRequest&;
    using Resp = DescribeAssetWebLocationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebLocationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebLocationListOutcomeCallable CwpClient::DescribeAssetWebLocationListCallable(const DescribeAssetWebLocationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebLocationListOutcome>>();
    DescribeAssetWebLocationListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebLocationListRequest&,
        DescribeAssetWebLocationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebLocationPathListOutcome CwpClient::DescribeAssetWebLocationPathList(const DescribeAssetWebLocationPathListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebLocationPathList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebLocationPathListResponse rsp = DescribeAssetWebLocationPathListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebLocationPathListOutcome(rsp);
        else
            return DescribeAssetWebLocationPathListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebLocationPathListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebLocationPathListAsync(const DescribeAssetWebLocationPathListRequest& request, const DescribeAssetWebLocationPathListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebLocationPathListRequest&;
    using Resp = DescribeAssetWebLocationPathListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebLocationPathList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebLocationPathListOutcomeCallable CwpClient::DescribeAssetWebLocationPathListCallable(const DescribeAssetWebLocationPathListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebLocationPathListOutcome>>();
    DescribeAssetWebLocationPathListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebLocationPathListRequest&,
        DescribeAssetWebLocationPathListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebServiceCountOutcome CwpClient::DescribeAssetWebServiceCount(const DescribeAssetWebServiceCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceCountResponse rsp = DescribeAssetWebServiceCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceCountOutcome(rsp);
        else
            return DescribeAssetWebServiceCountOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebServiceCountAsync(const DescribeAssetWebServiceCountRequest& request, const DescribeAssetWebServiceCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebServiceCountRequest&;
    using Resp = DescribeAssetWebServiceCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebServiceCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebServiceCountOutcomeCallable CwpClient::DescribeAssetWebServiceCountCallable(const DescribeAssetWebServiceCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebServiceCountOutcome>>();
    DescribeAssetWebServiceCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebServiceCountRequest&,
        DescribeAssetWebServiceCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebServiceInfoListOutcome CwpClient::DescribeAssetWebServiceInfoList(const DescribeAssetWebServiceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceInfoListResponse rsp = DescribeAssetWebServiceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceInfoListOutcome(rsp);
        else
            return DescribeAssetWebServiceInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebServiceInfoListAsync(const DescribeAssetWebServiceInfoListRequest& request, const DescribeAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebServiceInfoListRequest&;
    using Resp = DescribeAssetWebServiceInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebServiceInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebServiceInfoListOutcomeCallable CwpClient::DescribeAssetWebServiceInfoListCallable(const DescribeAssetWebServiceInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebServiceInfoListOutcome>>();
    DescribeAssetWebServiceInfoListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebServiceInfoListRequest&,
        DescribeAssetWebServiceInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAssetWebServiceProcessListOutcome CwpClient::DescribeAssetWebServiceProcessList(const DescribeAssetWebServiceProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetWebServiceProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetWebServiceProcessListResponse rsp = DescribeAssetWebServiceProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetWebServiceProcessListOutcome(rsp);
        else
            return DescribeAssetWebServiceProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetWebServiceProcessListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAssetWebServiceProcessListAsync(const DescribeAssetWebServiceProcessListRequest& request, const DescribeAssetWebServiceProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetWebServiceProcessListRequest&;
    using Resp = DescribeAssetWebServiceProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetWebServiceProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAssetWebServiceProcessListOutcomeCallable CwpClient::DescribeAssetWebServiceProcessListCallable(const DescribeAssetWebServiceProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetWebServiceProcessListOutcome>>();
    DescribeAssetWebServiceProcessListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAssetWebServiceProcessListRequest&,
        DescribeAssetWebServiceProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAttackEventInfoOutcome CwpClient::DescribeAttackEventInfo(const DescribeAttackEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackEventInfoResponse rsp = DescribeAttackEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackEventInfoOutcome(rsp);
        else
            return DescribeAttackEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackEventInfoAsync(const DescribeAttackEventInfoRequest& request, const DescribeAttackEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackEventInfoRequest&;
    using Resp = DescribeAttackEventInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackEventInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAttackEventInfoOutcomeCallable CwpClient::DescribeAttackEventInfoCallable(const DescribeAttackEventInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackEventInfoOutcome>>();
    DescribeAttackEventInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAttackEventInfoRequest&,
        DescribeAttackEventInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAttackEventsOutcome CwpClient::DescribeAttackEvents(const DescribeAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackEventsResponse rsp = DescribeAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackEventsOutcome(rsp);
        else
            return DescribeAttackEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackEventsAsync(const DescribeAttackEventsRequest& request, const DescribeAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackEventsRequest&;
    using Resp = DescribeAttackEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAttackEventsOutcomeCallable CwpClient::DescribeAttackEventsCallable(const DescribeAttackEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackEventsOutcome>>();
    DescribeAttackEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAttackEventsRequest&,
        DescribeAttackEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAttackStatisticsOutcome CwpClient::DescribeAttackStatistics(const DescribeAttackStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackStatisticsResponse rsp = DescribeAttackStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackStatisticsOutcome(rsp);
        else
            return DescribeAttackStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackStatisticsAsync(const DescribeAttackStatisticsRequest& request, const DescribeAttackStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackStatisticsRequest&;
    using Resp = DescribeAttackStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAttackStatisticsOutcomeCallable CwpClient::DescribeAttackStatisticsCallable(const DescribeAttackStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackStatisticsOutcome>>();
    DescribeAttackStatisticsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAttackStatisticsRequest&,
        DescribeAttackStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAttackTopOutcome CwpClient::DescribeAttackTop(const DescribeAttackTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackTopResponse rsp = DescribeAttackTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackTopOutcome(rsp);
        else
            return DescribeAttackTopOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackTopAsync(const DescribeAttackTopRequest& request, const DescribeAttackTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackTopRequest&;
    using Resp = DescribeAttackTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAttackTopOutcomeCallable CwpClient::DescribeAttackTopCallable(const DescribeAttackTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackTopOutcome>>();
    DescribeAttackTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAttackTopRequest&,
        DescribeAttackTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAttackTrendsOutcome CwpClient::DescribeAttackTrends(const DescribeAttackTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackTrendsResponse rsp = DescribeAttackTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackTrendsOutcome(rsp);
        else
            return DescribeAttackTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackTrendsAsync(const DescribeAttackTrendsRequest& request, const DescribeAttackTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackTrendsRequest&;
    using Resp = DescribeAttackTrendsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackTrends", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAttackTrendsOutcomeCallable CwpClient::DescribeAttackTrendsCallable(const DescribeAttackTrendsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackTrendsOutcome>>();
    DescribeAttackTrendsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAttackTrendsRequest&,
        DescribeAttackTrendsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeAttackVulTypeListOutcome CwpClient::DescribeAttackVulTypeList(const DescribeAttackVulTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAttackVulTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAttackVulTypeListResponse rsp = DescribeAttackVulTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAttackVulTypeListOutcome(rsp);
        else
            return DescribeAttackVulTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeAttackVulTypeListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeAttackVulTypeListAsync(const DescribeAttackVulTypeListRequest& request, const DescribeAttackVulTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAttackVulTypeListRequest&;
    using Resp = DescribeAttackVulTypeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAttackVulTypeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeAttackVulTypeListOutcomeCallable CwpClient::DescribeAttackVulTypeListCallable(const DescribeAttackVulTypeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAttackVulTypeListOutcome>>();
    DescribeAttackVulTypeListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeAttackVulTypeListRequest&,
        DescribeAttackVulTypeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBanModeOutcome CwpClient::DescribeBanMode(const DescribeBanModeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanModeResponse rsp = DescribeBanModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanModeOutcome(rsp);
        else
            return DescribeBanModeOutcome(o.GetError());
    }
    else
    {
        return DescribeBanModeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanModeAsync(const DescribeBanModeRequest& request, const DescribeBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBanModeRequest&;
    using Resp = DescribeBanModeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBanMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBanModeOutcomeCallable CwpClient::DescribeBanModeCallable(const DescribeBanModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBanModeOutcome>>();
    DescribeBanModeAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBanModeRequest&,
        DescribeBanModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBanRegionsOutcome CwpClient::DescribeBanRegions(const DescribeBanRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanRegionsResponse rsp = DescribeBanRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanRegionsOutcome(rsp);
        else
            return DescribeBanRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeBanRegionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanRegionsAsync(const DescribeBanRegionsRequest& request, const DescribeBanRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBanRegionsRequest&;
    using Resp = DescribeBanRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBanRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBanRegionsOutcomeCallable CwpClient::DescribeBanRegionsCallable(const DescribeBanRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBanRegionsOutcome>>();
    DescribeBanRegionsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBanRegionsRequest&,
        DescribeBanRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBanStatusOutcome CwpClient::DescribeBanStatus(const DescribeBanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanStatusResponse rsp = DescribeBanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanStatusOutcome(rsp);
        else
            return DescribeBanStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeBanStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanStatusAsync(const DescribeBanStatusRequest& request, const DescribeBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBanStatusRequest&;
    using Resp = DescribeBanStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBanStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBanStatusOutcomeCallable CwpClient::DescribeBanStatusCallable(const DescribeBanStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBanStatusOutcome>>();
    DescribeBanStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBanStatusRequest&,
        DescribeBanStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBanWhiteListOutcome CwpClient::DescribeBanWhiteList(const DescribeBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBanWhiteListResponse rsp = DescribeBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBanWhiteListOutcome(rsp);
        else
            return DescribeBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBanWhiteListAsync(const DescribeBanWhiteListRequest& request, const DescribeBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBanWhiteListRequest&;
    using Resp = DescribeBanWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBanWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBanWhiteListOutcomeCallable CwpClient::DescribeBanWhiteListCallable(const DescribeBanWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBanWhiteListOutcome>>();
    DescribeBanWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBanWhiteListRequest&,
        DescribeBanWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineAnalysisDataOutcome CwpClient::DescribeBaselineAnalysisData(const DescribeBaselineAnalysisDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineAnalysisData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineAnalysisDataResponse rsp = DescribeBaselineAnalysisDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineAnalysisDataOutcome(rsp);
        else
            return DescribeBaselineAnalysisDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineAnalysisDataOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineAnalysisDataAsync(const DescribeBaselineAnalysisDataRequest& request, const DescribeBaselineAnalysisDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineAnalysisDataRequest&;
    using Resp = DescribeBaselineAnalysisDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineAnalysisData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineAnalysisDataOutcomeCallable CwpClient::DescribeBaselineAnalysisDataCallable(const DescribeBaselineAnalysisDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineAnalysisDataOutcome>>();
    DescribeBaselineAnalysisDataAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineAnalysisDataRequest&,
        DescribeBaselineAnalysisDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineBasicInfoOutcome CwpClient::DescribeBaselineBasicInfo(const DescribeBaselineBasicInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineBasicInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineBasicInfoResponse rsp = DescribeBaselineBasicInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineBasicInfoOutcome(rsp);
        else
            return DescribeBaselineBasicInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineBasicInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineBasicInfoAsync(const DescribeBaselineBasicInfoRequest& request, const DescribeBaselineBasicInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineBasicInfoRequest&;
    using Resp = DescribeBaselineBasicInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineBasicInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineBasicInfoOutcomeCallable CwpClient::DescribeBaselineBasicInfoCallable(const DescribeBaselineBasicInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineBasicInfoOutcome>>();
    DescribeBaselineBasicInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineBasicInfoRequest&,
        DescribeBaselineBasicInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineDefaultStrategyListOutcome CwpClient::DescribeBaselineDefaultStrategyList(const DescribeBaselineDefaultStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDefaultStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDefaultStrategyListResponse rsp = DescribeBaselineDefaultStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDefaultStrategyListOutcome(rsp);
        else
            return DescribeBaselineDefaultStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDefaultStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDefaultStrategyListAsync(const DescribeBaselineDefaultStrategyListRequest& request, const DescribeBaselineDefaultStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineDefaultStrategyListRequest&;
    using Resp = DescribeBaselineDefaultStrategyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineDefaultStrategyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineDefaultStrategyListOutcomeCallable CwpClient::DescribeBaselineDefaultStrategyListCallable(const DescribeBaselineDefaultStrategyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineDefaultStrategyListOutcome>>();
    DescribeBaselineDefaultStrategyListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineDefaultStrategyListRequest&,
        DescribeBaselineDefaultStrategyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineDetailOutcome CwpClient::DescribeBaselineDetail(const DescribeBaselineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDetailResponse rsp = DescribeBaselineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDetailOutcome(rsp);
        else
            return DescribeBaselineDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDetailAsync(const DescribeBaselineDetailRequest& request, const DescribeBaselineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineDetailRequest&;
    using Resp = DescribeBaselineDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineDetailOutcomeCallable CwpClient::DescribeBaselineDetailCallable(const DescribeBaselineDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineDetailOutcome>>();
    DescribeBaselineDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineDetailRequest&,
        DescribeBaselineDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineDetectListOutcome CwpClient::DescribeBaselineDetectList(const DescribeBaselineDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDetectListResponse rsp = DescribeBaselineDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDetectListOutcome(rsp);
        else
            return DescribeBaselineDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDetectListAsync(const DescribeBaselineDetectListRequest& request, const DescribeBaselineDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineDetectListRequest&;
    using Resp = DescribeBaselineDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineDetectListOutcomeCallable CwpClient::DescribeBaselineDetectListCallable(const DescribeBaselineDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineDetectListOutcome>>();
    DescribeBaselineDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineDetectListRequest&,
        DescribeBaselineDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineDetectOverviewOutcome CwpClient::DescribeBaselineDetectOverview(const DescribeBaselineDetectOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDetectOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDetectOverviewResponse rsp = DescribeBaselineDetectOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDetectOverviewOutcome(rsp);
        else
            return DescribeBaselineDetectOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDetectOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDetectOverviewAsync(const DescribeBaselineDetectOverviewRequest& request, const DescribeBaselineDetectOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineDetectOverviewRequest&;
    using Resp = DescribeBaselineDetectOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineDetectOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineDetectOverviewOutcomeCallable CwpClient::DescribeBaselineDetectOverviewCallable(const DescribeBaselineDetectOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineDetectOverviewOutcome>>();
    DescribeBaselineDetectOverviewAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineDetectOverviewRequest&,
        DescribeBaselineDetectOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineDownloadListOutcome CwpClient::DescribeBaselineDownloadList(const DescribeBaselineDownloadListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineDownloadList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineDownloadListResponse rsp = DescribeBaselineDownloadListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineDownloadListOutcome(rsp);
        else
            return DescribeBaselineDownloadListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineDownloadListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineDownloadListAsync(const DescribeBaselineDownloadListRequest& request, const DescribeBaselineDownloadListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineDownloadListRequest&;
    using Resp = DescribeBaselineDownloadListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineDownloadList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineDownloadListOutcomeCallable CwpClient::DescribeBaselineDownloadListCallable(const DescribeBaselineDownloadListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineDownloadListOutcome>>();
    DescribeBaselineDownloadListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineDownloadListRequest&,
        DescribeBaselineDownloadListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineEffectHostListOutcome CwpClient::DescribeBaselineEffectHostList(const DescribeBaselineEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineEffectHostListResponse rsp = DescribeBaselineEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineEffectHostListOutcome(rsp);
        else
            return DescribeBaselineEffectHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineEffectHostListAsync(const DescribeBaselineEffectHostListRequest& request, const DescribeBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineEffectHostListRequest&;
    using Resp = DescribeBaselineEffectHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineEffectHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineEffectHostListOutcomeCallable CwpClient::DescribeBaselineEffectHostListCallable(const DescribeBaselineEffectHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineEffectHostListOutcome>>();
    DescribeBaselineEffectHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineEffectHostListRequest&,
        DescribeBaselineEffectHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineFixListOutcome CwpClient::DescribeBaselineFixList(const DescribeBaselineFixListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineFixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineFixListResponse rsp = DescribeBaselineFixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineFixListOutcome(rsp);
        else
            return DescribeBaselineFixListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineFixListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineFixListAsync(const DescribeBaselineFixListRequest& request, const DescribeBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineFixListRequest&;
    using Resp = DescribeBaselineFixListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineFixList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineFixListOutcomeCallable CwpClient::DescribeBaselineFixListCallable(const DescribeBaselineFixListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineFixListOutcome>>();
    DescribeBaselineFixListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineFixListRequest&,
        DescribeBaselineFixListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineHostDetectListOutcome CwpClient::DescribeBaselineHostDetectList(const DescribeBaselineHostDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostDetectListResponse rsp = DescribeBaselineHostDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostDetectListOutcome(rsp);
        else
            return DescribeBaselineHostDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostDetectListAsync(const DescribeBaselineHostDetectListRequest& request, const DescribeBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineHostDetectListRequest&;
    using Resp = DescribeBaselineHostDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineHostDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineHostDetectListOutcomeCallable CwpClient::DescribeBaselineHostDetectListCallable(const DescribeBaselineHostDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineHostDetectListOutcome>>();
    DescribeBaselineHostDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineHostDetectListRequest&,
        DescribeBaselineHostDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineHostIgnoreListOutcome CwpClient::DescribeBaselineHostIgnoreList(const DescribeBaselineHostIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostIgnoreListResponse rsp = DescribeBaselineHostIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostIgnoreListOutcome(rsp);
        else
            return DescribeBaselineHostIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostIgnoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostIgnoreListAsync(const DescribeBaselineHostIgnoreListRequest& request, const DescribeBaselineHostIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineHostIgnoreListRequest&;
    using Resp = DescribeBaselineHostIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineHostIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineHostIgnoreListOutcomeCallable CwpClient::DescribeBaselineHostIgnoreListCallable(const DescribeBaselineHostIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineHostIgnoreListOutcome>>();
    DescribeBaselineHostIgnoreListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineHostIgnoreListRequest&,
        DescribeBaselineHostIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineHostRiskTopOutcome CwpClient::DescribeBaselineHostRiskTop(const DescribeBaselineHostRiskTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostRiskTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostRiskTopResponse rsp = DescribeBaselineHostRiskTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostRiskTopOutcome(rsp);
        else
            return DescribeBaselineHostRiskTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostRiskTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostRiskTopAsync(const DescribeBaselineHostRiskTopRequest& request, const DescribeBaselineHostRiskTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineHostRiskTopRequest&;
    using Resp = DescribeBaselineHostRiskTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineHostRiskTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineHostRiskTopOutcomeCallable CwpClient::DescribeBaselineHostRiskTopCallable(const DescribeBaselineHostRiskTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineHostRiskTopOutcome>>();
    DescribeBaselineHostRiskTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineHostRiskTopRequest&,
        DescribeBaselineHostRiskTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineHostTopOutcome CwpClient::DescribeBaselineHostTop(const DescribeBaselineHostTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineHostTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineHostTopResponse rsp = DescribeBaselineHostTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineHostTopOutcome(rsp);
        else
            return DescribeBaselineHostTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineHostTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineHostTopAsync(const DescribeBaselineHostTopRequest& request, const DescribeBaselineHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineHostTopRequest&;
    using Resp = DescribeBaselineHostTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineHostTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineHostTopOutcomeCallable CwpClient::DescribeBaselineHostTopCallable(const DescribeBaselineHostTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineHostTopOutcome>>();
    DescribeBaselineHostTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineHostTopRequest&,
        DescribeBaselineHostTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineItemDetectListOutcome CwpClient::DescribeBaselineItemDetectList(const DescribeBaselineItemDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemDetectListResponse rsp = DescribeBaselineItemDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemDetectListOutcome(rsp);
        else
            return DescribeBaselineItemDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemDetectListAsync(const DescribeBaselineItemDetectListRequest& request, const DescribeBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineItemDetectListRequest&;
    using Resp = DescribeBaselineItemDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineItemDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineItemDetectListOutcomeCallable CwpClient::DescribeBaselineItemDetectListCallable(const DescribeBaselineItemDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineItemDetectListOutcome>>();
    DescribeBaselineItemDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineItemDetectListRequest&,
        DescribeBaselineItemDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineItemIgnoreListOutcome CwpClient::DescribeBaselineItemIgnoreList(const DescribeBaselineItemIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemIgnoreListResponse rsp = DescribeBaselineItemIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemIgnoreListOutcome(rsp);
        else
            return DescribeBaselineItemIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemIgnoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemIgnoreListAsync(const DescribeBaselineItemIgnoreListRequest& request, const DescribeBaselineItemIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineItemIgnoreListRequest&;
    using Resp = DescribeBaselineItemIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineItemIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineItemIgnoreListOutcomeCallable CwpClient::DescribeBaselineItemIgnoreListCallable(const DescribeBaselineItemIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineItemIgnoreListOutcome>>();
    DescribeBaselineItemIgnoreListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineItemIgnoreListRequest&,
        DescribeBaselineItemIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineItemInfoOutcome CwpClient::DescribeBaselineItemInfo(const DescribeBaselineItemInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemInfoResponse rsp = DescribeBaselineItemInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemInfoOutcome(rsp);
        else
            return DescribeBaselineItemInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemInfoAsync(const DescribeBaselineItemInfoRequest& request, const DescribeBaselineItemInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineItemInfoRequest&;
    using Resp = DescribeBaselineItemInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineItemInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineItemInfoOutcomeCallable CwpClient::DescribeBaselineItemInfoCallable(const DescribeBaselineItemInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineItemInfoOutcome>>();
    DescribeBaselineItemInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineItemInfoRequest&,
        DescribeBaselineItemInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineItemListOutcome CwpClient::DescribeBaselineItemList(const DescribeBaselineItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemListResponse rsp = DescribeBaselineItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemListOutcome(rsp);
        else
            return DescribeBaselineItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemListAsync(const DescribeBaselineItemListRequest& request, const DescribeBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineItemListRequest&;
    using Resp = DescribeBaselineItemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineItemListOutcomeCallable CwpClient::DescribeBaselineItemListCallable(const DescribeBaselineItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineItemListOutcome>>();
    DescribeBaselineItemListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineItemListRequest&,
        DescribeBaselineItemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineItemRiskTopOutcome CwpClient::DescribeBaselineItemRiskTop(const DescribeBaselineItemRiskTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineItemRiskTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineItemRiskTopResponse rsp = DescribeBaselineItemRiskTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineItemRiskTopOutcome(rsp);
        else
            return DescribeBaselineItemRiskTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineItemRiskTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineItemRiskTopAsync(const DescribeBaselineItemRiskTopRequest& request, const DescribeBaselineItemRiskTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineItemRiskTopRequest&;
    using Resp = DescribeBaselineItemRiskTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineItemRiskTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineItemRiskTopOutcomeCallable CwpClient::DescribeBaselineItemRiskTopCallable(const DescribeBaselineItemRiskTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineItemRiskTopOutcome>>();
    DescribeBaselineItemRiskTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineItemRiskTopRequest&,
        DescribeBaselineItemRiskTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineListOutcome CwpClient::DescribeBaselineList(const DescribeBaselineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineListResponse rsp = DescribeBaselineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineListOutcome(rsp);
        else
            return DescribeBaselineListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineListAsync(const DescribeBaselineListRequest& request, const DescribeBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineListRequest&;
    using Resp = DescribeBaselineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineListOutcomeCallable CwpClient::DescribeBaselineListCallable(const DescribeBaselineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineListOutcome>>();
    DescribeBaselineListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineListRequest&,
        DescribeBaselineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselinePolicyListOutcome CwpClient::DescribeBaselinePolicyList(const DescribeBaselinePolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselinePolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselinePolicyListResponse rsp = DescribeBaselinePolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselinePolicyListOutcome(rsp);
        else
            return DescribeBaselinePolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselinePolicyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselinePolicyListAsync(const DescribeBaselinePolicyListRequest& request, const DescribeBaselinePolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselinePolicyListRequest&;
    using Resp = DescribeBaselinePolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselinePolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselinePolicyListOutcomeCallable CwpClient::DescribeBaselinePolicyListCallable(const DescribeBaselinePolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselinePolicyListOutcome>>();
    DescribeBaselinePolicyListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselinePolicyListRequest&,
        DescribeBaselinePolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineRuleOutcome CwpClient::DescribeBaselineRule(const DescribeBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleResponse rsp = DescribeBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleOutcome(rsp);
        else
            return DescribeBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleAsync(const DescribeBaselineRuleRequest& request, const DescribeBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineRuleRequest&;
    using Resp = DescribeBaselineRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineRuleOutcomeCallable CwpClient::DescribeBaselineRuleCallable(const DescribeBaselineRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineRuleOutcome>>();
    DescribeBaselineRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineRuleRequest&,
        DescribeBaselineRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineRuleCategoryListOutcome CwpClient::DescribeBaselineRuleCategoryList(const DescribeBaselineRuleCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleCategoryListResponse rsp = DescribeBaselineRuleCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleCategoryListOutcome(rsp);
        else
            return DescribeBaselineRuleCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleCategoryListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleCategoryListAsync(const DescribeBaselineRuleCategoryListRequest& request, const DescribeBaselineRuleCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineRuleCategoryListRequest&;
    using Resp = DescribeBaselineRuleCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineRuleCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineRuleCategoryListOutcomeCallable CwpClient::DescribeBaselineRuleCategoryListCallable(const DescribeBaselineRuleCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineRuleCategoryListOutcome>>();
    DescribeBaselineRuleCategoryListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineRuleCategoryListRequest&,
        DescribeBaselineRuleCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineRuleDetectListOutcome CwpClient::DescribeBaselineRuleDetectList(const DescribeBaselineRuleDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleDetectListResponse rsp = DescribeBaselineRuleDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleDetectListOutcome(rsp);
        else
            return DescribeBaselineRuleDetectListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleDetectListAsync(const DescribeBaselineRuleDetectListRequest& request, const DescribeBaselineRuleDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineRuleDetectListRequest&;
    using Resp = DescribeBaselineRuleDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineRuleDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineRuleDetectListOutcomeCallable CwpClient::DescribeBaselineRuleDetectListCallable(const DescribeBaselineRuleDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineRuleDetectListOutcome>>();
    DescribeBaselineRuleDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineRuleDetectListRequest&,
        DescribeBaselineRuleDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineRuleIgnoreListOutcome CwpClient::DescribeBaselineRuleIgnoreList(const DescribeBaselineRuleIgnoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleIgnoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleIgnoreListResponse rsp = DescribeBaselineRuleIgnoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleIgnoreListOutcome(rsp);
        else
            return DescribeBaselineRuleIgnoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleIgnoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleIgnoreListAsync(const DescribeBaselineRuleIgnoreListRequest& request, const DescribeBaselineRuleIgnoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineRuleIgnoreListRequest&;
    using Resp = DescribeBaselineRuleIgnoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineRuleIgnoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineRuleIgnoreListOutcomeCallable CwpClient::DescribeBaselineRuleIgnoreListCallable(const DescribeBaselineRuleIgnoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineRuleIgnoreListOutcome>>();
    DescribeBaselineRuleIgnoreListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineRuleIgnoreListRequest&,
        DescribeBaselineRuleIgnoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineRuleListOutcome CwpClient::DescribeBaselineRuleList(const DescribeBaselineRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineRuleListResponse rsp = DescribeBaselineRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineRuleListOutcome(rsp);
        else
            return DescribeBaselineRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineRuleListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineRuleListAsync(const DescribeBaselineRuleListRequest& request, const DescribeBaselineRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineRuleListRequest&;
    using Resp = DescribeBaselineRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineRuleListOutcomeCallable CwpClient::DescribeBaselineRuleListCallable(const DescribeBaselineRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineRuleListOutcome>>();
    DescribeBaselineRuleListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineRuleListRequest&,
        DescribeBaselineRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineScanScheduleOutcome CwpClient::DescribeBaselineScanSchedule(const DescribeBaselineScanScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineScanSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineScanScheduleResponse rsp = DescribeBaselineScanScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineScanScheduleOutcome(rsp);
        else
            return DescribeBaselineScanScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineScanScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineScanScheduleAsync(const DescribeBaselineScanScheduleRequest& request, const DescribeBaselineScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineScanScheduleRequest&;
    using Resp = DescribeBaselineScanScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineScanSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineScanScheduleOutcomeCallable CwpClient::DescribeBaselineScanScheduleCallable(const DescribeBaselineScanScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineScanScheduleOutcome>>();
    DescribeBaselineScanScheduleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineScanScheduleRequest&,
        DescribeBaselineScanScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineStrategyDetailOutcome CwpClient::DescribeBaselineStrategyDetail(const DescribeBaselineStrategyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineStrategyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineStrategyDetailResponse rsp = DescribeBaselineStrategyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineStrategyDetailOutcome(rsp);
        else
            return DescribeBaselineStrategyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineStrategyDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineStrategyDetailAsync(const DescribeBaselineStrategyDetailRequest& request, const DescribeBaselineStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineStrategyDetailRequest&;
    using Resp = DescribeBaselineStrategyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineStrategyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineStrategyDetailOutcomeCallable CwpClient::DescribeBaselineStrategyDetailCallable(const DescribeBaselineStrategyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineStrategyDetailOutcome>>();
    DescribeBaselineStrategyDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineStrategyDetailRequest&,
        DescribeBaselineStrategyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineStrategyListOutcome CwpClient::DescribeBaselineStrategyList(const DescribeBaselineStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineStrategyListResponse rsp = DescribeBaselineStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineStrategyListOutcome(rsp);
        else
            return DescribeBaselineStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineStrategyListAsync(const DescribeBaselineStrategyListRequest& request, const DescribeBaselineStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineStrategyListRequest&;
    using Resp = DescribeBaselineStrategyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineStrategyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineStrategyListOutcomeCallable CwpClient::DescribeBaselineStrategyListCallable(const DescribeBaselineStrategyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineStrategyListOutcome>>();
    DescribeBaselineStrategyListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineStrategyListRequest&,
        DescribeBaselineStrategyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineTopOutcome CwpClient::DescribeBaselineTop(const DescribeBaselineTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineTopResponse rsp = DescribeBaselineTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineTopOutcome(rsp);
        else
            return DescribeBaselineTopOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineTopAsync(const DescribeBaselineTopRequest& request, const DescribeBaselineTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineTopRequest&;
    using Resp = DescribeBaselineTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineTopOutcomeCallable CwpClient::DescribeBaselineTopCallable(const DescribeBaselineTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineTopOutcome>>();
    DescribeBaselineTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineTopRequest&,
        DescribeBaselineTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBaselineWeakPasswordListOutcome CwpClient::DescribeBaselineWeakPasswordList(const DescribeBaselineWeakPasswordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBaselineWeakPasswordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBaselineWeakPasswordListResponse rsp = DescribeBaselineWeakPasswordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBaselineWeakPasswordListOutcome(rsp);
        else
            return DescribeBaselineWeakPasswordListOutcome(o.GetError());
    }
    else
    {
        return DescribeBaselineWeakPasswordListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBaselineWeakPasswordListAsync(const DescribeBaselineWeakPasswordListRequest& request, const DescribeBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBaselineWeakPasswordListRequest&;
    using Resp = DescribeBaselineWeakPasswordListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBaselineWeakPasswordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBaselineWeakPasswordListOutcomeCallable CwpClient::DescribeBaselineWeakPasswordListCallable(const DescribeBaselineWeakPasswordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBaselineWeakPasswordListOutcome>>();
    DescribeBaselineWeakPasswordListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBaselineWeakPasswordListRequest&,
        DescribeBaselineWeakPasswordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBashEventsOutcome CwpClient::DescribeBashEvents(const DescribeBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsResponse rsp = DescribeBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsOutcome(rsp);
        else
            return DescribeBashEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsAsync(const DescribeBashEventsRequest& request, const DescribeBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashEventsRequest&;
    using Resp = DescribeBashEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBashEventsOutcomeCallable CwpClient::DescribeBashEventsCallable(const DescribeBashEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashEventsOutcome>>();
    DescribeBashEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBashEventsRequest&,
        DescribeBashEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBashEventsInfoOutcome CwpClient::DescribeBashEventsInfo(const DescribeBashEventsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEventsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsInfoResponse rsp = DescribeBashEventsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsInfoOutcome(rsp);
        else
            return DescribeBashEventsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsInfoAsync(const DescribeBashEventsInfoRequest& request, const DescribeBashEventsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashEventsInfoRequest&;
    using Resp = DescribeBashEventsInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashEventsInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBashEventsInfoOutcomeCallable CwpClient::DescribeBashEventsInfoCallable(const DescribeBashEventsInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashEventsInfoOutcome>>();
    DescribeBashEventsInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBashEventsInfoRequest&,
        DescribeBashEventsInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBashEventsInfoNewOutcome CwpClient::DescribeBashEventsInfoNew(const DescribeBashEventsInfoNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEventsInfoNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsInfoNewResponse rsp = DescribeBashEventsInfoNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsInfoNewOutcome(rsp);
        else
            return DescribeBashEventsInfoNewOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsInfoNewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsInfoNewAsync(const DescribeBashEventsInfoNewRequest& request, const DescribeBashEventsInfoNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashEventsInfoNewRequest&;
    using Resp = DescribeBashEventsInfoNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashEventsInfoNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBashEventsInfoNewOutcomeCallable CwpClient::DescribeBashEventsInfoNewCallable(const DescribeBashEventsInfoNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashEventsInfoNewOutcome>>();
    DescribeBashEventsInfoNewAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBashEventsInfoNewRequest&,
        DescribeBashEventsInfoNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBashEventsNewOutcome CwpClient::DescribeBashEventsNew(const DescribeBashEventsNewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashEventsNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashEventsNewResponse rsp = DescribeBashEventsNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashEventsNewOutcome(rsp);
        else
            return DescribeBashEventsNewOutcome(o.GetError());
    }
    else
    {
        return DescribeBashEventsNewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashEventsNewAsync(const DescribeBashEventsNewRequest& request, const DescribeBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashEventsNewRequest&;
    using Resp = DescribeBashEventsNewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashEventsNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBashEventsNewOutcomeCallable CwpClient::DescribeBashEventsNewCallable(const DescribeBashEventsNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashEventsNewOutcome>>();
    DescribeBashEventsNewAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBashEventsNewRequest&,
        DescribeBashEventsNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBashPoliciesOutcome CwpClient::DescribeBashPolicies(const DescribeBashPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashPoliciesResponse rsp = DescribeBashPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashPoliciesOutcome(rsp);
        else
            return DescribeBashPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeBashPoliciesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashPoliciesAsync(const DescribeBashPoliciesRequest& request, const DescribeBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashPoliciesRequest&;
    using Resp = DescribeBashPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBashPoliciesOutcomeCallable CwpClient::DescribeBashPoliciesCallable(const DescribeBashPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashPoliciesOutcome>>();
    DescribeBashPoliciesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBashPoliciesRequest&,
        DescribeBashPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBashRulesOutcome CwpClient::DescribeBashRules(const DescribeBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBashRulesResponse rsp = DescribeBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBashRulesOutcome(rsp);
        else
            return DescribeBashRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBashRulesAsync(const DescribeBashRulesRequest& request, const DescribeBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBashRulesRequest&;
    using Resp = DescribeBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBashRulesOutcomeCallable CwpClient::DescribeBashRulesCallable(const DescribeBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBashRulesOutcome>>();
    DescribeBashRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBashRulesRequest&,
        DescribeBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBruteAttackListOutcome CwpClient::DescribeBruteAttackList(const DescribeBruteAttackListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBruteAttackList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBruteAttackListResponse rsp = DescribeBruteAttackListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBruteAttackListOutcome(rsp);
        else
            return DescribeBruteAttackListOutcome(o.GetError());
    }
    else
    {
        return DescribeBruteAttackListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBruteAttackListAsync(const DescribeBruteAttackListRequest& request, const DescribeBruteAttackListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBruteAttackListRequest&;
    using Resp = DescribeBruteAttackListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBruteAttackList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBruteAttackListOutcomeCallable CwpClient::DescribeBruteAttackListCallable(const DescribeBruteAttackListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBruteAttackListOutcome>>();
    DescribeBruteAttackListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBruteAttackListRequest&,
        DescribeBruteAttackListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeBruteAttackRulesOutcome CwpClient::DescribeBruteAttackRules(const DescribeBruteAttackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBruteAttackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBruteAttackRulesResponse rsp = DescribeBruteAttackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBruteAttackRulesOutcome(rsp);
        else
            return DescribeBruteAttackRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBruteAttackRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeBruteAttackRulesAsync(const DescribeBruteAttackRulesRequest& request, const DescribeBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBruteAttackRulesRequest&;
    using Resp = DescribeBruteAttackRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBruteAttackRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeBruteAttackRulesOutcomeCallable CwpClient::DescribeBruteAttackRulesCallable(const DescribeBruteAttackRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBruteAttackRulesOutcome>>();
    DescribeBruteAttackRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeBruteAttackRulesRequest&,
        DescribeBruteAttackRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeCanFixVulMachineOutcome CwpClient::DescribeCanFixVulMachine(const DescribeCanFixVulMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCanFixVulMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCanFixVulMachineResponse rsp = DescribeCanFixVulMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCanFixVulMachineOutcome(rsp);
        else
            return DescribeCanFixVulMachineOutcome(o.GetError());
    }
    else
    {
        return DescribeCanFixVulMachineOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeCanFixVulMachineAsync(const DescribeCanFixVulMachineRequest& request, const DescribeCanFixVulMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCanFixVulMachineRequest&;
    using Resp = DescribeCanFixVulMachineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCanFixVulMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeCanFixVulMachineOutcomeCallable CwpClient::DescribeCanFixVulMachineCallable(const DescribeCanFixVulMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCanFixVulMachineOutcome>>();
    DescribeCanFixVulMachineAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeCanFixVulMachineRequest&,
        DescribeCanFixVulMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeCanNotSeparateMachineOutcome CwpClient::DescribeCanNotSeparateMachine(const DescribeCanNotSeparateMachineRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCanNotSeparateMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCanNotSeparateMachineResponse rsp = DescribeCanNotSeparateMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCanNotSeparateMachineOutcome(rsp);
        else
            return DescribeCanNotSeparateMachineOutcome(o.GetError());
    }
    else
    {
        return DescribeCanNotSeparateMachineOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeCanNotSeparateMachineAsync(const DescribeCanNotSeparateMachineRequest& request, const DescribeCanNotSeparateMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCanNotSeparateMachineRequest&;
    using Resp = DescribeCanNotSeparateMachineResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCanNotSeparateMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeCanNotSeparateMachineOutcomeCallable CwpClient::DescribeCanNotSeparateMachineCallable(const DescribeCanNotSeparateMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCanNotSeparateMachineOutcome>>();
    DescribeCanNotSeparateMachineAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeCanNotSeparateMachineRequest&,
        DescribeCanNotSeparateMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeClientExceptionOutcome CwpClient::DescribeClientException(const DescribeClientExceptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientException");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientExceptionResponse rsp = DescribeClientExceptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientExceptionOutcome(rsp);
        else
            return DescribeClientExceptionOutcome(o.GetError());
    }
    else
    {
        return DescribeClientExceptionOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeClientExceptionAsync(const DescribeClientExceptionRequest& request, const DescribeClientExceptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClientExceptionRequest&;
    using Resp = DescribeClientExceptionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientException", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeClientExceptionOutcomeCallable CwpClient::DescribeClientExceptionCallable(const DescribeClientExceptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientExceptionOutcome>>();
    DescribeClientExceptionAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeClientExceptionRequest&,
        DescribeClientExceptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeDefenceEventDetailOutcome CwpClient::DescribeDefenceEventDetail(const DescribeDefenceEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefenceEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefenceEventDetailResponse rsp = DescribeDefenceEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefenceEventDetailOutcome(rsp);
        else
            return DescribeDefenceEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDefenceEventDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeDefenceEventDetailAsync(const DescribeDefenceEventDetailRequest& request, const DescribeDefenceEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDefenceEventDetailRequest&;
    using Resp = DescribeDefenceEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDefenceEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeDefenceEventDetailOutcomeCallable CwpClient::DescribeDefenceEventDetailCallable(const DescribeDefenceEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDefenceEventDetailOutcome>>();
    DescribeDefenceEventDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeDefenceEventDetailRequest&,
        DescribeDefenceEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeDirectConnectInstallCommandOutcome CwpClient::DescribeDirectConnectInstallCommand(const DescribeDirectConnectInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectInstallCommandResponse rsp = DescribeDirectConnectInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectInstallCommandOutcome(rsp);
        else
            return DescribeDirectConnectInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectInstallCommandOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeDirectConnectInstallCommandAsync(const DescribeDirectConnectInstallCommandRequest& request, const DescribeDirectConnectInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDirectConnectInstallCommandRequest&;
    using Resp = DescribeDirectConnectInstallCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectConnectInstallCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeDirectConnectInstallCommandOutcomeCallable CwpClient::DescribeDirectConnectInstallCommandCallable(const DescribeDirectConnectInstallCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectConnectInstallCommandOutcome>>();
    DescribeDirectConnectInstallCommandAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeDirectConnectInstallCommandRequest&,
        DescribeDirectConnectInstallCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeESAggregationsOutcome CwpClient::DescribeESAggregations(const DescribeESAggregationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeESAggregations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeESAggregationsResponse rsp = DescribeESAggregationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeESAggregationsOutcome(rsp);
        else
            return DescribeESAggregationsOutcome(o.GetError());
    }
    else
    {
        return DescribeESAggregationsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeESAggregationsAsync(const DescribeESAggregationsRequest& request, const DescribeESAggregationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeESAggregationsRequest&;
    using Resp = DescribeESAggregationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeESAggregations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeESAggregationsOutcomeCallable CwpClient::DescribeESAggregationsCallable(const DescribeESAggregationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeESAggregationsOutcome>>();
    DescribeESAggregationsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeESAggregationsRequest&,
        DescribeESAggregationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeEmergencyVulListOutcome CwpClient::DescribeEmergencyVulList(const DescribeEmergencyVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEmergencyVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEmergencyVulListResponse rsp = DescribeEmergencyVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEmergencyVulListOutcome(rsp);
        else
            return DescribeEmergencyVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeEmergencyVulListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeEmergencyVulListAsync(const DescribeEmergencyVulListRequest& request, const DescribeEmergencyVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEmergencyVulListRequest&;
    using Resp = DescribeEmergencyVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEmergencyVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeEmergencyVulListOutcomeCallable CwpClient::DescribeEmergencyVulListCallable(const DescribeEmergencyVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEmergencyVulListOutcome>>();
    DescribeEmergencyVulListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeEmergencyVulListRequest&,
        DescribeEmergencyVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeEventByTableOutcome CwpClient::DescribeEventByTable(const DescribeEventByTableRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventByTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventByTableResponse rsp = DescribeEventByTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventByTableOutcome(rsp);
        else
            return DescribeEventByTableOutcome(o.GetError());
    }
    else
    {
        return DescribeEventByTableOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeEventByTableAsync(const DescribeEventByTableRequest& request, const DescribeEventByTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventByTableRequest&;
    using Resp = DescribeEventByTableResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventByTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeEventByTableOutcomeCallable CwpClient::DescribeEventByTableCallable(const DescribeEventByTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventByTableOutcome>>();
    DescribeEventByTableAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeEventByTableRequest&,
        DescribeEventByTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeExportMachinesOutcome CwpClient::DescribeExportMachines(const DescribeExportMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExportMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExportMachinesResponse rsp = DescribeExportMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExportMachinesOutcome(rsp);
        else
            return DescribeExportMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeExportMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeExportMachinesAsync(const DescribeExportMachinesRequest& request, const DescribeExportMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExportMachinesRequest&;
    using Resp = DescribeExportMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExportMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeExportMachinesOutcomeCallable CwpClient::DescribeExportMachinesCallable(const DescribeExportMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExportMachinesOutcome>>();
    DescribeExportMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeExportMachinesRequest&,
        DescribeExportMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeFastAnalysisOutcome CwpClient::DescribeFastAnalysis(const DescribeFastAnalysisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFastAnalysis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFastAnalysisResponse rsp = DescribeFastAnalysisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFastAnalysisOutcome(rsp);
        else
            return DescribeFastAnalysisOutcome(o.GetError());
    }
    else
    {
        return DescribeFastAnalysisOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFastAnalysisAsync(const DescribeFastAnalysisRequest& request, const DescribeFastAnalysisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFastAnalysisRequest&;
    using Resp = DescribeFastAnalysisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFastAnalysis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeFastAnalysisOutcomeCallable CwpClient::DescribeFastAnalysisCallable(const DescribeFastAnalysisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFastAnalysisOutcome>>();
    DescribeFastAnalysisAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeFastAnalysisRequest&,
        DescribeFastAnalysisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeFileTamperEventRuleInfoOutcome CwpClient::DescribeFileTamperEventRuleInfo(const DescribeFileTamperEventRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperEventRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperEventRuleInfoResponse rsp = DescribeFileTamperEventRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperEventRuleInfoOutcome(rsp);
        else
            return DescribeFileTamperEventRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperEventRuleInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperEventRuleInfoAsync(const DescribeFileTamperEventRuleInfoRequest& request, const DescribeFileTamperEventRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileTamperEventRuleInfoRequest&;
    using Resp = DescribeFileTamperEventRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileTamperEventRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeFileTamperEventRuleInfoOutcomeCallable CwpClient::DescribeFileTamperEventRuleInfoCallable(const DescribeFileTamperEventRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileTamperEventRuleInfoOutcome>>();
    DescribeFileTamperEventRuleInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeFileTamperEventRuleInfoRequest&,
        DescribeFileTamperEventRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeFileTamperEventsOutcome CwpClient::DescribeFileTamperEvents(const DescribeFileTamperEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperEventsResponse rsp = DescribeFileTamperEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperEventsOutcome(rsp);
        else
            return DescribeFileTamperEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperEventsAsync(const DescribeFileTamperEventsRequest& request, const DescribeFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileTamperEventsRequest&;
    using Resp = DescribeFileTamperEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileTamperEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeFileTamperEventsOutcomeCallable CwpClient::DescribeFileTamperEventsCallable(const DescribeFileTamperEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileTamperEventsOutcome>>();
    DescribeFileTamperEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeFileTamperEventsRequest&,
        DescribeFileTamperEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeFileTamperRuleCountOutcome CwpClient::DescribeFileTamperRuleCount(const DescribeFileTamperRuleCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperRuleCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperRuleCountResponse rsp = DescribeFileTamperRuleCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperRuleCountOutcome(rsp);
        else
            return DescribeFileTamperRuleCountOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperRuleCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperRuleCountAsync(const DescribeFileTamperRuleCountRequest& request, const DescribeFileTamperRuleCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileTamperRuleCountRequest&;
    using Resp = DescribeFileTamperRuleCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileTamperRuleCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeFileTamperRuleCountOutcomeCallable CwpClient::DescribeFileTamperRuleCountCallable(const DescribeFileTamperRuleCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileTamperRuleCountOutcome>>();
    DescribeFileTamperRuleCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeFileTamperRuleCountRequest&,
        DescribeFileTamperRuleCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeFileTamperRuleInfoOutcome CwpClient::DescribeFileTamperRuleInfo(const DescribeFileTamperRuleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperRuleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperRuleInfoResponse rsp = DescribeFileTamperRuleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperRuleInfoOutcome(rsp);
        else
            return DescribeFileTamperRuleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperRuleInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperRuleInfoAsync(const DescribeFileTamperRuleInfoRequest& request, const DescribeFileTamperRuleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileTamperRuleInfoRequest&;
    using Resp = DescribeFileTamperRuleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileTamperRuleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeFileTamperRuleInfoOutcomeCallable CwpClient::DescribeFileTamperRuleInfoCallable(const DescribeFileTamperRuleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileTamperRuleInfoOutcome>>();
    DescribeFileTamperRuleInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeFileTamperRuleInfoRequest&,
        DescribeFileTamperRuleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeFileTamperRulesOutcome CwpClient::DescribeFileTamperRules(const DescribeFileTamperRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileTamperRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileTamperRulesResponse rsp = DescribeFileTamperRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileTamperRulesOutcome(rsp);
        else
            return DescribeFileTamperRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeFileTamperRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeFileTamperRulesAsync(const DescribeFileTamperRulesRequest& request, const DescribeFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileTamperRulesRequest&;
    using Resp = DescribeFileTamperRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileTamperRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeFileTamperRulesOutcomeCallable CwpClient::DescribeFileTamperRulesCallable(const DescribeFileTamperRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileTamperRulesOutcome>>();
    DescribeFileTamperRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeFileTamperRulesRequest&,
        DescribeFileTamperRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeGeneralStatOutcome CwpClient::DescribeGeneralStat(const DescribeGeneralStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGeneralStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGeneralStatResponse rsp = DescribeGeneralStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGeneralStatOutcome(rsp);
        else
            return DescribeGeneralStatOutcome(o.GetError());
    }
    else
    {
        return DescribeGeneralStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeGeneralStatAsync(const DescribeGeneralStatRequest& request, const DescribeGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGeneralStatRequest&;
    using Resp = DescribeGeneralStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGeneralStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeGeneralStatOutcomeCallable CwpClient::DescribeGeneralStatCallable(const DescribeGeneralStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGeneralStatOutcome>>();
    DescribeGeneralStatAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeGeneralStatRequest&,
        DescribeGeneralStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeHistoryAccountsOutcome CwpClient::DescribeHistoryAccounts(const DescribeHistoryAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryAccountsResponse rsp = DescribeHistoryAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryAccountsOutcome(rsp);
        else
            return DescribeHistoryAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryAccountsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHistoryAccountsAsync(const DescribeHistoryAccountsRequest& request, const DescribeHistoryAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHistoryAccountsRequest&;
    using Resp = DescribeHistoryAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHistoryAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeHistoryAccountsOutcomeCallable CwpClient::DescribeHistoryAccountsCallable(const DescribeHistoryAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHistoryAccountsOutcome>>();
    DescribeHistoryAccountsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeHistoryAccountsRequest&,
        DescribeHistoryAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeHistoryServiceOutcome CwpClient::DescribeHistoryService(const DescribeHistoryServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHistoryService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHistoryServiceResponse rsp = DescribeHistoryServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHistoryServiceOutcome(rsp);
        else
            return DescribeHistoryServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeHistoryServiceOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHistoryServiceAsync(const DescribeHistoryServiceRequest& request, const DescribeHistoryServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHistoryServiceRequest&;
    using Resp = DescribeHistoryServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHistoryService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeHistoryServiceOutcomeCallable CwpClient::DescribeHistoryServiceCallable(const DescribeHistoryServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHistoryServiceOutcome>>();
    DescribeHistoryServiceAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeHistoryServiceRequest&,
        DescribeHistoryServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeHostInfoOutcome CwpClient::DescribeHostInfo(const DescribeHostInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostInfoResponse rsp = DescribeHostInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostInfoOutcome(rsp);
        else
            return DescribeHostInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeHostInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHostInfoAsync(const DescribeHostInfoRequest& request, const DescribeHostInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostInfoRequest&;
    using Resp = DescribeHostInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeHostInfoOutcomeCallable CwpClient::DescribeHostInfoCallable(const DescribeHostInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostInfoOutcome>>();
    DescribeHostInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeHostInfoRequest&,
        DescribeHostInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeHostLoginListOutcome CwpClient::DescribeHostLoginList(const DescribeHostLoginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostLoginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostLoginListResponse rsp = DescribeHostLoginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostLoginListOutcome(rsp);
        else
            return DescribeHostLoginListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostLoginListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHostLoginListAsync(const DescribeHostLoginListRequest& request, const DescribeHostLoginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostLoginListRequest&;
    using Resp = DescribeHostLoginListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostLoginList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeHostLoginListOutcomeCallable CwpClient::DescribeHostLoginListCallable(const DescribeHostLoginListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostLoginListOutcome>>();
    DescribeHostLoginListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeHostLoginListRequest&,
        DescribeHostLoginListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeHotVulTopOutcome CwpClient::DescribeHotVulTop(const DescribeHotVulTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHotVulTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHotVulTopResponse rsp = DescribeHotVulTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHotVulTopOutcome(rsp);
        else
            return DescribeHotVulTopOutcome(o.GetError());
    }
    else
    {
        return DescribeHotVulTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeHotVulTopAsync(const DescribeHotVulTopRequest& request, const DescribeHotVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHotVulTopRequest&;
    using Resp = DescribeHotVulTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHotVulTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeHotVulTopOutcomeCallable CwpClient::DescribeHotVulTopCallable(const DescribeHotVulTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHotVulTopOutcome>>();
    DescribeHotVulTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeHotVulTopRequest&,
        DescribeHotVulTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeIgnoreBaselineRuleOutcome CwpClient::DescribeIgnoreBaselineRule(const DescribeIgnoreBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgnoreBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgnoreBaselineRuleResponse rsp = DescribeIgnoreBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgnoreBaselineRuleOutcome(rsp);
        else
            return DescribeIgnoreBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeIgnoreBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIgnoreBaselineRuleAsync(const DescribeIgnoreBaselineRuleRequest& request, const DescribeIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIgnoreBaselineRuleRequest&;
    using Resp = DescribeIgnoreBaselineRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIgnoreBaselineRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeIgnoreBaselineRuleOutcomeCallable CwpClient::DescribeIgnoreBaselineRuleCallable(const DescribeIgnoreBaselineRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIgnoreBaselineRuleOutcome>>();
    DescribeIgnoreBaselineRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeIgnoreBaselineRuleRequest&,
        DescribeIgnoreBaselineRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeIgnoreHostAndItemConfigOutcome CwpClient::DescribeIgnoreHostAndItemConfig(const DescribeIgnoreHostAndItemConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgnoreHostAndItemConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgnoreHostAndItemConfigResponse rsp = DescribeIgnoreHostAndItemConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgnoreHostAndItemConfigOutcome(rsp);
        else
            return DescribeIgnoreHostAndItemConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeIgnoreHostAndItemConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIgnoreHostAndItemConfigAsync(const DescribeIgnoreHostAndItemConfigRequest& request, const DescribeIgnoreHostAndItemConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIgnoreHostAndItemConfigRequest&;
    using Resp = DescribeIgnoreHostAndItemConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIgnoreHostAndItemConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeIgnoreHostAndItemConfigOutcomeCallable CwpClient::DescribeIgnoreHostAndItemConfigCallable(const DescribeIgnoreHostAndItemConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIgnoreHostAndItemConfigOutcome>>();
    DescribeIgnoreHostAndItemConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeIgnoreHostAndItemConfigRequest&,
        DescribeIgnoreHostAndItemConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeIgnoreRuleEffectHostListOutcome CwpClient::DescribeIgnoreRuleEffectHostList(const DescribeIgnoreRuleEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgnoreRuleEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgnoreRuleEffectHostListResponse rsp = DescribeIgnoreRuleEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgnoreRuleEffectHostListOutcome(rsp);
        else
            return DescribeIgnoreRuleEffectHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeIgnoreRuleEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeIgnoreRuleEffectHostListAsync(const DescribeIgnoreRuleEffectHostListRequest& request, const DescribeIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIgnoreRuleEffectHostListRequest&;
    using Resp = DescribeIgnoreRuleEffectHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIgnoreRuleEffectHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeIgnoreRuleEffectHostListOutcomeCallable CwpClient::DescribeIgnoreRuleEffectHostListCallable(const DescribeIgnoreRuleEffectHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIgnoreRuleEffectHostListOutcome>>();
    DescribeIgnoreRuleEffectHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeIgnoreRuleEffectHostListRequest&,
        DescribeIgnoreRuleEffectHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeImportMachineInfoOutcome CwpClient::DescribeImportMachineInfo(const DescribeImportMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImportMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImportMachineInfoResponse rsp = DescribeImportMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImportMachineInfoOutcome(rsp);
        else
            return DescribeImportMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeImportMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeImportMachineInfoAsync(const DescribeImportMachineInfoRequest& request, const DescribeImportMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImportMachineInfoRequest&;
    using Resp = DescribeImportMachineInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImportMachineInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeImportMachineInfoOutcomeCallable CwpClient::DescribeImportMachineInfoCallable(const DescribeImportMachineInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImportMachineInfoOutcome>>();
    DescribeImportMachineInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeImportMachineInfoRequest&,
        DescribeImportMachineInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeJavaMemShellInfoOutcome CwpClient::DescribeJavaMemShellInfo(const DescribeJavaMemShellInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellInfoResponse rsp = DescribeJavaMemShellInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellInfoOutcome(rsp);
        else
            return DescribeJavaMemShellInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellInfoAsync(const DescribeJavaMemShellInfoRequest& request, const DescribeJavaMemShellInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJavaMemShellInfoRequest&;
    using Resp = DescribeJavaMemShellInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJavaMemShellInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeJavaMemShellInfoOutcomeCallable CwpClient::DescribeJavaMemShellInfoCallable(const DescribeJavaMemShellInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJavaMemShellInfoOutcome>>();
    DescribeJavaMemShellInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeJavaMemShellInfoRequest&,
        DescribeJavaMemShellInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeJavaMemShellListOutcome CwpClient::DescribeJavaMemShellList(const DescribeJavaMemShellListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellListResponse rsp = DescribeJavaMemShellListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellListOutcome(rsp);
        else
            return DescribeJavaMemShellListOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellListAsync(const DescribeJavaMemShellListRequest& request, const DescribeJavaMemShellListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJavaMemShellListRequest&;
    using Resp = DescribeJavaMemShellListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJavaMemShellList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeJavaMemShellListOutcomeCallable CwpClient::DescribeJavaMemShellListCallable(const DescribeJavaMemShellListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJavaMemShellListOutcome>>();
    DescribeJavaMemShellListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeJavaMemShellListRequest&,
        DescribeJavaMemShellListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeJavaMemShellPluginInfoOutcome CwpClient::DescribeJavaMemShellPluginInfo(const DescribeJavaMemShellPluginInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellPluginInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellPluginInfoResponse rsp = DescribeJavaMemShellPluginInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellPluginInfoOutcome(rsp);
        else
            return DescribeJavaMemShellPluginInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellPluginInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellPluginInfoAsync(const DescribeJavaMemShellPluginInfoRequest& request, const DescribeJavaMemShellPluginInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJavaMemShellPluginInfoRequest&;
    using Resp = DescribeJavaMemShellPluginInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJavaMemShellPluginInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeJavaMemShellPluginInfoOutcomeCallable CwpClient::DescribeJavaMemShellPluginInfoCallable(const DescribeJavaMemShellPluginInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJavaMemShellPluginInfoOutcome>>();
    DescribeJavaMemShellPluginInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeJavaMemShellPluginInfoRequest&,
        DescribeJavaMemShellPluginInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeJavaMemShellPluginListOutcome CwpClient::DescribeJavaMemShellPluginList(const DescribeJavaMemShellPluginListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJavaMemShellPluginList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJavaMemShellPluginListResponse rsp = DescribeJavaMemShellPluginListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJavaMemShellPluginListOutcome(rsp);
        else
            return DescribeJavaMemShellPluginListOutcome(o.GetError());
    }
    else
    {
        return DescribeJavaMemShellPluginListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeJavaMemShellPluginListAsync(const DescribeJavaMemShellPluginListRequest& request, const DescribeJavaMemShellPluginListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJavaMemShellPluginListRequest&;
    using Resp = DescribeJavaMemShellPluginListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJavaMemShellPluginList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeJavaMemShellPluginListOutcomeCallable CwpClient::DescribeJavaMemShellPluginListCallable(const DescribeJavaMemShellPluginListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJavaMemShellPluginListOutcome>>();
    DescribeJavaMemShellPluginListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeJavaMemShellPluginListRequest&,
        DescribeJavaMemShellPluginListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLicenseOutcome CwpClient::DescribeLicense(const DescribeLicenseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicense");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseResponse rsp = DescribeLicenseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseOutcome(rsp);
        else
            return DescribeLicenseOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseAsync(const DescribeLicenseRequest& request, const DescribeLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseRequest&;
    using Resp = DescribeLicenseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicense", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLicenseOutcomeCallable CwpClient::DescribeLicenseCallable(const DescribeLicenseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseOutcome>>();
    DescribeLicenseAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLicenseRequest&,
        DescribeLicenseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLicenseBindListOutcome CwpClient::DescribeLicenseBindList(const DescribeLicenseBindListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseBindList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseBindListResponse rsp = DescribeLicenseBindListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseBindListOutcome(rsp);
        else
            return DescribeLicenseBindListOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseBindListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseBindListAsync(const DescribeLicenseBindListRequest& request, const DescribeLicenseBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseBindListRequest&;
    using Resp = DescribeLicenseBindListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseBindList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLicenseBindListOutcomeCallable CwpClient::DescribeLicenseBindListCallable(const DescribeLicenseBindListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseBindListOutcome>>();
    DescribeLicenseBindListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLicenseBindListRequest&,
        DescribeLicenseBindListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLicenseBindScheduleOutcome CwpClient::DescribeLicenseBindSchedule(const DescribeLicenseBindScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseBindSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseBindScheduleResponse rsp = DescribeLicenseBindScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseBindScheduleOutcome(rsp);
        else
            return DescribeLicenseBindScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseBindScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseBindScheduleAsync(const DescribeLicenseBindScheduleRequest& request, const DescribeLicenseBindScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseBindScheduleRequest&;
    using Resp = DescribeLicenseBindScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseBindSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLicenseBindScheduleOutcomeCallable CwpClient::DescribeLicenseBindScheduleCallable(const DescribeLicenseBindScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseBindScheduleOutcome>>();
    DescribeLicenseBindScheduleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLicenseBindScheduleRequest&,
        DescribeLicenseBindScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLicenseGeneralOutcome CwpClient::DescribeLicenseGeneral(const DescribeLicenseGeneralRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseGeneral");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseGeneralResponse rsp = DescribeLicenseGeneralResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseGeneralOutcome(rsp);
        else
            return DescribeLicenseGeneralOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseGeneralOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseGeneralAsync(const DescribeLicenseGeneralRequest& request, const DescribeLicenseGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseGeneralRequest&;
    using Resp = DescribeLicenseGeneralResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseGeneral", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLicenseGeneralOutcomeCallable CwpClient::DescribeLicenseGeneralCallable(const DescribeLicenseGeneralRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseGeneralOutcome>>();
    DescribeLicenseGeneralAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLicenseGeneralRequest&,
        DescribeLicenseGeneralOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLicenseListOutcome CwpClient::DescribeLicenseList(const DescribeLicenseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseListResponse rsp = DescribeLicenseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseListOutcome(rsp);
        else
            return DescribeLicenseListOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseListAsync(const DescribeLicenseListRequest& request, const DescribeLicenseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseListRequest&;
    using Resp = DescribeLicenseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLicenseListOutcomeCallable CwpClient::DescribeLicenseListCallable(const DescribeLicenseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseListOutcome>>();
    DescribeLicenseListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLicenseListRequest&,
        DescribeLicenseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLicenseWhiteConfigOutcome CwpClient::DescribeLicenseWhiteConfig(const DescribeLicenseWhiteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenseWhiteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicenseWhiteConfigResponse rsp = DescribeLicenseWhiteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicenseWhiteConfigOutcome(rsp);
        else
            return DescribeLicenseWhiteConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLicenseWhiteConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLicenseWhiteConfigAsync(const DescribeLicenseWhiteConfigRequest& request, const DescribeLicenseWhiteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicenseWhiteConfigRequest&;
    using Resp = DescribeLicenseWhiteConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenseWhiteConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLicenseWhiteConfigOutcomeCallable CwpClient::DescribeLicenseWhiteConfigCallable(const DescribeLicenseWhiteConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicenseWhiteConfigOutcome>>();
    DescribeLicenseWhiteConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLicenseWhiteConfigRequest&,
        DescribeLicenseWhiteConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogDeliveryKafkaOptionsOutcome CwpClient::DescribeLogDeliveryKafkaOptions(const DescribeLogDeliveryKafkaOptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogDeliveryKafkaOptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogDeliveryKafkaOptionsResponse rsp = DescribeLogDeliveryKafkaOptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogDeliveryKafkaOptionsOutcome(rsp);
        else
            return DescribeLogDeliveryKafkaOptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogDeliveryKafkaOptionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogDeliveryKafkaOptionsAsync(const DescribeLogDeliveryKafkaOptionsRequest& request, const DescribeLogDeliveryKafkaOptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogDeliveryKafkaOptionsRequest&;
    using Resp = DescribeLogDeliveryKafkaOptionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogDeliveryKafkaOptions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogDeliveryKafkaOptionsOutcomeCallable CwpClient::DescribeLogDeliveryKafkaOptionsCallable(const DescribeLogDeliveryKafkaOptionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogDeliveryKafkaOptionsOutcome>>();
    DescribeLogDeliveryKafkaOptionsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogDeliveryKafkaOptionsRequest&,
        DescribeLogDeliveryKafkaOptionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogExportsOutcome CwpClient::DescribeLogExports(const DescribeLogExportsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogExports");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogExportsResponse rsp = DescribeLogExportsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogExportsOutcome(rsp);
        else
            return DescribeLogExportsOutcome(o.GetError());
    }
    else
    {
        return DescribeLogExportsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogExportsAsync(const DescribeLogExportsRequest& request, const DescribeLogExportsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogExportsRequest&;
    using Resp = DescribeLogExportsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogExports", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogExportsOutcomeCallable CwpClient::DescribeLogExportsCallable(const DescribeLogExportsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogExportsOutcome>>();
    DescribeLogExportsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogExportsRequest&,
        DescribeLogExportsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogHistogramOutcome CwpClient::DescribeLogHistogram(const DescribeLogHistogramRequest &request)
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

void CwpClient::DescribeLogHistogramAsync(const DescribeLogHistogramRequest& request, const DescribeLogHistogramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CwpClient::DescribeLogHistogramOutcomeCallable CwpClient::DescribeLogHistogramCallable(const DescribeLogHistogramRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogHistogramOutcome>>();
    DescribeLogHistogramAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogHistogramRequest&,
        DescribeLogHistogramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogIndexOutcome CwpClient::DescribeLogIndex(const DescribeLogIndexRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogIndex");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogIndexResponse rsp = DescribeLogIndexResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogIndexOutcome(rsp);
        else
            return DescribeLogIndexOutcome(o.GetError());
    }
    else
    {
        return DescribeLogIndexOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogIndexAsync(const DescribeLogIndexRequest& request, const DescribeLogIndexAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogIndexRequest&;
    using Resp = DescribeLogIndexResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogIndex", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogIndexOutcomeCallable CwpClient::DescribeLogIndexCallable(const DescribeLogIndexRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogIndexOutcome>>();
    DescribeLogIndexAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogIndexRequest&,
        DescribeLogIndexOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogKafkaDeliverInfoOutcome CwpClient::DescribeLogKafkaDeliverInfo(const DescribeLogKafkaDeliverInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogKafkaDeliverInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogKafkaDeliverInfoResponse rsp = DescribeLogKafkaDeliverInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogKafkaDeliverInfoOutcome(rsp);
        else
            return DescribeLogKafkaDeliverInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLogKafkaDeliverInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogKafkaDeliverInfoAsync(const DescribeLogKafkaDeliverInfoRequest& request, const DescribeLogKafkaDeliverInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogKafkaDeliverInfoRequest&;
    using Resp = DescribeLogKafkaDeliverInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogKafkaDeliverInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogKafkaDeliverInfoOutcomeCallable CwpClient::DescribeLogKafkaDeliverInfoCallable(const DescribeLogKafkaDeliverInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogKafkaDeliverInfoOutcome>>();
    DescribeLogKafkaDeliverInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogKafkaDeliverInfoRequest&,
        DescribeLogKafkaDeliverInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogStorageConfigOutcome CwpClient::DescribeLogStorageConfig(const DescribeLogStorageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageConfigResponse rsp = DescribeLogStorageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageConfigOutcome(rsp);
        else
            return DescribeLogStorageConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogStorageConfigAsync(const DescribeLogStorageConfigRequest& request, const DescribeLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogStorageConfigRequest&;
    using Resp = DescribeLogStorageConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogStorageConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogStorageConfigOutcomeCallable CwpClient::DescribeLogStorageConfigCallable(const DescribeLogStorageConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogStorageConfigOutcome>>();
    DescribeLogStorageConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogStorageConfigRequest&,
        DescribeLogStorageConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogStorageRecordOutcome CwpClient::DescribeLogStorageRecord(const DescribeLogStorageRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageRecordResponse rsp = DescribeLogStorageRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageRecordOutcome(rsp);
        else
            return DescribeLogStorageRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageRecordOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogStorageRecordAsync(const DescribeLogStorageRecordRequest& request, const DescribeLogStorageRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogStorageRecordRequest&;
    using Resp = DescribeLogStorageRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogStorageRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogStorageRecordOutcomeCallable CwpClient::DescribeLogStorageRecordCallable(const DescribeLogStorageRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogStorageRecordOutcome>>();
    DescribeLogStorageRecordAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogStorageRecordRequest&,
        DescribeLogStorageRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogStorageStatisticOutcome CwpClient::DescribeLogStorageStatistic(const DescribeLogStorageStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogStorageStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogStorageStatisticResponse rsp = DescribeLogStorageStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogStorageStatisticOutcome(rsp);
        else
            return DescribeLogStorageStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeLogStorageStatisticOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogStorageStatisticAsync(const DescribeLogStorageStatisticRequest& request, const DescribeLogStorageStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogStorageStatisticRequest&;
    using Resp = DescribeLogStorageStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogStorageStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogStorageStatisticOutcomeCallable CwpClient::DescribeLogStorageStatisticCallable(const DescribeLogStorageStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogStorageStatisticOutcome>>();
    DescribeLogStorageStatisticAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogStorageStatisticRequest&,
        DescribeLogStorageStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLogTypeOutcome CwpClient::DescribeLogType(const DescribeLogTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogTypeResponse rsp = DescribeLogTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogTypeOutcome(rsp);
        else
            return DescribeLogTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeLogTypeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLogTypeAsync(const DescribeLogTypeRequest& request, const DescribeLogTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogTypeRequest&;
    using Resp = DescribeLogTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLogTypeOutcomeCallable CwpClient::DescribeLogTypeCallable(const DescribeLogTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogTypeOutcome>>();
    DescribeLogTypeAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLogTypeRequest&,
        DescribeLogTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLoginWhiteCombinedListOutcome CwpClient::DescribeLoginWhiteCombinedList(const DescribeLoginWhiteCombinedListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteCombinedList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteCombinedListResponse rsp = DescribeLoginWhiteCombinedListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteCombinedListOutcome(rsp);
        else
            return DescribeLoginWhiteCombinedListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteCombinedListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLoginWhiteCombinedListAsync(const DescribeLoginWhiteCombinedListRequest& request, const DescribeLoginWhiteCombinedListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginWhiteCombinedListRequest&;
    using Resp = DescribeLoginWhiteCombinedListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginWhiteCombinedList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLoginWhiteCombinedListOutcomeCallable CwpClient::DescribeLoginWhiteCombinedListCallable(const DescribeLoginWhiteCombinedListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginWhiteCombinedListOutcome>>();
    DescribeLoginWhiteCombinedListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLoginWhiteCombinedListRequest&,
        DescribeLoginWhiteCombinedListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLoginWhiteHostListOutcome CwpClient::DescribeLoginWhiteHostList(const DescribeLoginWhiteHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteHostListResponse rsp = DescribeLoginWhiteHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteHostListOutcome(rsp);
        else
            return DescribeLoginWhiteHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLoginWhiteHostListAsync(const DescribeLoginWhiteHostListRequest& request, const DescribeLoginWhiteHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginWhiteHostListRequest&;
    using Resp = DescribeLoginWhiteHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginWhiteHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLoginWhiteHostListOutcomeCallable CwpClient::DescribeLoginWhiteHostListCallable(const DescribeLoginWhiteHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginWhiteHostListOutcome>>();
    DescribeLoginWhiteHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLoginWhiteHostListRequest&,
        DescribeLoginWhiteHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeLoginWhiteListOutcome CwpClient::DescribeLoginWhiteList(const DescribeLoginWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginWhiteListResponse rsp = DescribeLoginWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginWhiteListOutcome(rsp);
        else
            return DescribeLoginWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeLoginWhiteListAsync(const DescribeLoginWhiteListRequest& request, const DescribeLoginWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLoginWhiteListRequest&;
    using Resp = DescribeLoginWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLoginWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeLoginWhiteListOutcomeCallable CwpClient::DescribeLoginWhiteListCallable(const DescribeLoginWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLoginWhiteListOutcome>>();
    DescribeLoginWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeLoginWhiteListRequest&,
        DescribeLoginWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineClearHistoryOutcome CwpClient::DescribeMachineClearHistory(const DescribeMachineClearHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineClearHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineClearHistoryResponse rsp = DescribeMachineClearHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineClearHistoryOutcome(rsp);
        else
            return DescribeMachineClearHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineClearHistoryOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineClearHistoryAsync(const DescribeMachineClearHistoryRequest& request, const DescribeMachineClearHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineClearHistoryRequest&;
    using Resp = DescribeMachineClearHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineClearHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineClearHistoryOutcomeCallable CwpClient::DescribeMachineClearHistoryCallable(const DescribeMachineClearHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineClearHistoryOutcome>>();
    DescribeMachineClearHistoryAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineClearHistoryRequest&,
        DescribeMachineClearHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineDefenseCntOutcome CwpClient::DescribeMachineDefenseCnt(const DescribeMachineDefenseCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineDefenseCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineDefenseCntResponse rsp = DescribeMachineDefenseCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineDefenseCntOutcome(rsp);
        else
            return DescribeMachineDefenseCntOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineDefenseCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineDefenseCntAsync(const DescribeMachineDefenseCntRequest& request, const DescribeMachineDefenseCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineDefenseCntRequest&;
    using Resp = DescribeMachineDefenseCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineDefenseCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineDefenseCntOutcomeCallable CwpClient::DescribeMachineDefenseCntCallable(const DescribeMachineDefenseCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineDefenseCntOutcome>>();
    DescribeMachineDefenseCntAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineDefenseCntRequest&,
        DescribeMachineDefenseCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineFileTamperRulesOutcome CwpClient::DescribeMachineFileTamperRules(const DescribeMachineFileTamperRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineFileTamperRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineFileTamperRulesResponse rsp = DescribeMachineFileTamperRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineFileTamperRulesOutcome(rsp);
        else
            return DescribeMachineFileTamperRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineFileTamperRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineFileTamperRulesAsync(const DescribeMachineFileTamperRulesRequest& request, const DescribeMachineFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineFileTamperRulesRequest&;
    using Resp = DescribeMachineFileTamperRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineFileTamperRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineFileTamperRulesOutcomeCallable CwpClient::DescribeMachineFileTamperRulesCallable(const DescribeMachineFileTamperRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineFileTamperRulesOutcome>>();
    DescribeMachineFileTamperRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineFileTamperRulesRequest&,
        DescribeMachineFileTamperRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineGeneralOutcome CwpClient::DescribeMachineGeneral(const DescribeMachineGeneralRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineGeneral");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineGeneralResponse rsp = DescribeMachineGeneralResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineGeneralOutcome(rsp);
        else
            return DescribeMachineGeneralOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineGeneralOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineGeneralAsync(const DescribeMachineGeneralRequest& request, const DescribeMachineGeneralAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineGeneralRequest&;
    using Resp = DescribeMachineGeneralResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineGeneral", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineGeneralOutcomeCallable CwpClient::DescribeMachineGeneralCallable(const DescribeMachineGeneralRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineGeneralOutcome>>();
    DescribeMachineGeneralAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineGeneralRequest&,
        DescribeMachineGeneralOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineInfoOutcome CwpClient::DescribeMachineInfo(const DescribeMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineInfoResponse rsp = DescribeMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineInfoOutcome(rsp);
        else
            return DescribeMachineInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineInfoAsync(const DescribeMachineInfoRequest& request, const DescribeMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineInfoRequest&;
    using Resp = DescribeMachineInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineInfoOutcomeCallable CwpClient::DescribeMachineInfoCallable(const DescribeMachineInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineInfoOutcome>>();
    DescribeMachineInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineInfoRequest&,
        DescribeMachineInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineLicenseDetailOutcome CwpClient::DescribeMachineLicenseDetail(const DescribeMachineLicenseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineLicenseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineLicenseDetailResponse rsp = DescribeMachineLicenseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineLicenseDetailOutcome(rsp);
        else
            return DescribeMachineLicenseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineLicenseDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineLicenseDetailAsync(const DescribeMachineLicenseDetailRequest& request, const DescribeMachineLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineLicenseDetailRequest&;
    using Resp = DescribeMachineLicenseDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineLicenseDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineLicenseDetailOutcomeCallable CwpClient::DescribeMachineLicenseDetailCallable(const DescribeMachineLicenseDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineLicenseDetailOutcome>>();
    DescribeMachineLicenseDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineLicenseDetailRequest&,
        DescribeMachineLicenseDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineListOutcome CwpClient::DescribeMachineList(const DescribeMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineListResponse rsp = DescribeMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineListOutcome(rsp);
        else
            return DescribeMachineListOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineListAsync(const DescribeMachineListRequest& request, const DescribeMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineListRequest&;
    using Resp = DescribeMachineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineListOutcomeCallable CwpClient::DescribeMachineListCallable(const DescribeMachineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineListOutcome>>();
    DescribeMachineListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineListRequest&,
        DescribeMachineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineOsListOutcome CwpClient::DescribeMachineOsList(const DescribeMachineOsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineOsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineOsListResponse rsp = DescribeMachineOsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineOsListOutcome(rsp);
        else
            return DescribeMachineOsListOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineOsListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineOsListAsync(const DescribeMachineOsListRequest& request, const DescribeMachineOsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineOsListRequest&;
    using Resp = DescribeMachineOsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineOsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineOsListOutcomeCallable CwpClient::DescribeMachineOsListCallable(const DescribeMachineOsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineOsListOutcome>>();
    DescribeMachineOsListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineOsListRequest&,
        DescribeMachineOsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineRegionListOutcome CwpClient::DescribeMachineRegionList(const DescribeMachineRegionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineRegionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineRegionListResponse rsp = DescribeMachineRegionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineRegionListOutcome(rsp);
        else
            return DescribeMachineRegionListOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineRegionListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineRegionListAsync(const DescribeMachineRegionListRequest& request, const DescribeMachineRegionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineRegionListRequest&;
    using Resp = DescribeMachineRegionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineRegionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineRegionListOutcomeCallable CwpClient::DescribeMachineRegionListCallable(const DescribeMachineRegionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineRegionListOutcome>>();
    DescribeMachineRegionListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineRegionListRequest&,
        DescribeMachineRegionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineRegionsOutcome CwpClient::DescribeMachineRegions(const DescribeMachineRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineRegionsResponse rsp = DescribeMachineRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineRegionsOutcome(rsp);
        else
            return DescribeMachineRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineRegionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineRegionsAsync(const DescribeMachineRegionsRequest& request, const DescribeMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineRegionsRequest&;
    using Resp = DescribeMachineRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineRegionsOutcomeCallable CwpClient::DescribeMachineRegionsCallable(const DescribeMachineRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineRegionsOutcome>>();
    DescribeMachineRegionsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineRegionsRequest&,
        DescribeMachineRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineRiskCntOutcome CwpClient::DescribeMachineRiskCnt(const DescribeMachineRiskCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineRiskCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineRiskCntResponse rsp = DescribeMachineRiskCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineRiskCntOutcome(rsp);
        else
            return DescribeMachineRiskCntOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineRiskCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineRiskCntAsync(const DescribeMachineRiskCntRequest& request, const DescribeMachineRiskCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineRiskCntRequest&;
    using Resp = DescribeMachineRiskCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineRiskCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineRiskCntOutcomeCallable CwpClient::DescribeMachineRiskCntCallable(const DescribeMachineRiskCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineRiskCntOutcome>>();
    DescribeMachineRiskCntAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineRiskCntRequest&,
        DescribeMachineRiskCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachineSnapshotOutcome CwpClient::DescribeMachineSnapshot(const DescribeMachineSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineSnapshotResponse rsp = DescribeMachineSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineSnapshotOutcome(rsp);
        else
            return DescribeMachineSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineSnapshotOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachineSnapshotAsync(const DescribeMachineSnapshotRequest& request, const DescribeMachineSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachineSnapshotRequest&;
    using Resp = DescribeMachineSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachineSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachineSnapshotOutcomeCallable CwpClient::DescribeMachineSnapshotCallable(const DescribeMachineSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachineSnapshotOutcome>>();
    DescribeMachineSnapshotAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachineSnapshotRequest&,
        DescribeMachineSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachinesOutcome CwpClient::DescribeMachines(const DescribeMachinesRequest &request)
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

void CwpClient::DescribeMachinesAsync(const DescribeMachinesRequest& request, const DescribeMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CwpClient::DescribeMachinesOutcomeCallable CwpClient::DescribeMachinesCallable(const DescribeMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachinesOutcome>>();
    DescribeMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachinesRequest&,
        DescribeMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMachinesSimpleOutcome CwpClient::DescribeMachinesSimple(const DescribeMachinesSimpleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachinesSimple");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachinesSimpleResponse rsp = DescribeMachinesSimpleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachinesSimpleOutcome(rsp);
        else
            return DescribeMachinesSimpleOutcome(o.GetError());
    }
    else
    {
        return DescribeMachinesSimpleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMachinesSimpleAsync(const DescribeMachinesSimpleRequest& request, const DescribeMachinesSimpleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMachinesSimpleRequest&;
    using Resp = DescribeMachinesSimpleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMachinesSimple", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMachinesSimpleOutcomeCallable CwpClient::DescribeMachinesSimpleCallable(const DescribeMachinesSimpleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMachinesSimpleOutcome>>();
    DescribeMachinesSimpleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMachinesSimpleRequest&,
        DescribeMachinesSimpleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalWareListOutcome CwpClient::DescribeMalWareList(const DescribeMalWareListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalWareList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalWareListResponse rsp = DescribeMalWareListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalWareListOutcome(rsp);
        else
            return DescribeMalWareListOutcome(o.GetError());
    }
    else
    {
        return DescribeMalWareListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalWareListAsync(const DescribeMalWareListRequest& request, const DescribeMalWareListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalWareListRequest&;
    using Resp = DescribeMalWareListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalWareList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalWareListOutcomeCallable CwpClient::DescribeMalWareListCallable(const DescribeMalWareListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalWareListOutcome>>();
    DescribeMalWareListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalWareListRequest&,
        DescribeMalWareListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMaliciousRequestWhiteListOutcome CwpClient::DescribeMaliciousRequestWhiteList(const DescribeMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMaliciousRequestWhiteListResponse rsp = DescribeMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMaliciousRequestWhiteListOutcome(rsp);
        else
            return DescribeMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMaliciousRequestWhiteListAsync(const DescribeMaliciousRequestWhiteListRequest& request, const DescribeMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMaliciousRequestWhiteListRequest&;
    using Resp = DescribeMaliciousRequestWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMaliciousRequestWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMaliciousRequestWhiteListOutcomeCallable CwpClient::DescribeMaliciousRequestWhiteListCallable(const DescribeMaliciousRequestWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMaliciousRequestWhiteListOutcome>>();
    DescribeMaliciousRequestWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMaliciousRequestWhiteListRequest&,
        DescribeMaliciousRequestWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareFileOutcome CwpClient::DescribeMalwareFile(const DescribeMalwareFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareFileResponse rsp = DescribeMalwareFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareFileOutcome(rsp);
        else
            return DescribeMalwareFileOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareFileOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareFileAsync(const DescribeMalwareFileRequest& request, const DescribeMalwareFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareFileRequest&;
    using Resp = DescribeMalwareFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareFileOutcomeCallable CwpClient::DescribeMalwareFileCallable(const DescribeMalwareFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareFileOutcome>>();
    DescribeMalwareFileAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareFileRequest&,
        DescribeMalwareFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareInfoOutcome CwpClient::DescribeMalwareInfo(const DescribeMalwareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareInfoResponse rsp = DescribeMalwareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareInfoOutcome(rsp);
        else
            return DescribeMalwareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareInfoAsync(const DescribeMalwareInfoRequest& request, const DescribeMalwareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareInfoRequest&;
    using Resp = DescribeMalwareInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareInfoOutcomeCallable CwpClient::DescribeMalwareInfoCallable(const DescribeMalwareInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareInfoOutcome>>();
    DescribeMalwareInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareInfoRequest&,
        DescribeMalwareInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareRiskOverviewOutcome CwpClient::DescribeMalwareRiskOverview(const DescribeMalwareRiskOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareRiskOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareRiskOverviewResponse rsp = DescribeMalwareRiskOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareRiskOverviewOutcome(rsp);
        else
            return DescribeMalwareRiskOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareRiskOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareRiskOverviewAsync(const DescribeMalwareRiskOverviewRequest& request, const DescribeMalwareRiskOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareRiskOverviewRequest&;
    using Resp = DescribeMalwareRiskOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareRiskOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareRiskOverviewOutcomeCallable CwpClient::DescribeMalwareRiskOverviewCallable(const DescribeMalwareRiskOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareRiskOverviewOutcome>>();
    DescribeMalwareRiskOverviewAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareRiskOverviewRequest&,
        DescribeMalwareRiskOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareRiskWarningOutcome CwpClient::DescribeMalwareRiskWarning(const DescribeMalwareRiskWarningRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareRiskWarning");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareRiskWarningResponse rsp = DescribeMalwareRiskWarningResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareRiskWarningOutcome(rsp);
        else
            return DescribeMalwareRiskWarningOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareRiskWarningOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareRiskWarningAsync(const DescribeMalwareRiskWarningRequest& request, const DescribeMalwareRiskWarningAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareRiskWarningRequest&;
    using Resp = DescribeMalwareRiskWarningResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareRiskWarning", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareRiskWarningOutcomeCallable CwpClient::DescribeMalwareRiskWarningCallable(const DescribeMalwareRiskWarningRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareRiskWarningOutcome>>();
    DescribeMalwareRiskWarningAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareRiskWarningRequest&,
        DescribeMalwareRiskWarningOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareTimingScanSettingOutcome CwpClient::DescribeMalwareTimingScanSetting(const DescribeMalwareTimingScanSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareTimingScanSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareTimingScanSettingResponse rsp = DescribeMalwareTimingScanSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareTimingScanSettingOutcome(rsp);
        else
            return DescribeMalwareTimingScanSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareTimingScanSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareTimingScanSettingAsync(const DescribeMalwareTimingScanSettingRequest& request, const DescribeMalwareTimingScanSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareTimingScanSettingRequest&;
    using Resp = DescribeMalwareTimingScanSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareTimingScanSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareTimingScanSettingOutcomeCallable CwpClient::DescribeMalwareTimingScanSettingCallable(const DescribeMalwareTimingScanSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareTimingScanSettingOutcome>>();
    DescribeMalwareTimingScanSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareTimingScanSettingRequest&,
        DescribeMalwareTimingScanSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareWhiteListOutcome CwpClient::DescribeMalwareWhiteList(const DescribeMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareWhiteListResponse rsp = DescribeMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareWhiteListOutcome(rsp);
        else
            return DescribeMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareWhiteListAsync(const DescribeMalwareWhiteListRequest& request, const DescribeMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareWhiteListRequest&;
    using Resp = DescribeMalwareWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareWhiteListOutcomeCallable CwpClient::DescribeMalwareWhiteListCallable(const DescribeMalwareWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareWhiteListOutcome>>();
    DescribeMalwareWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareWhiteListRequest&,
        DescribeMalwareWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeMalwareWhiteListAffectListOutcome CwpClient::DescribeMalwareWhiteListAffectList(const DescribeMalwareWhiteListAffectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMalwareWhiteListAffectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMalwareWhiteListAffectListResponse rsp = DescribeMalwareWhiteListAffectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMalwareWhiteListAffectListOutcome(rsp);
        else
            return DescribeMalwareWhiteListAffectListOutcome(o.GetError());
    }
    else
    {
        return DescribeMalwareWhiteListAffectListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeMalwareWhiteListAffectListAsync(const DescribeMalwareWhiteListAffectListRequest& request, const DescribeMalwareWhiteListAffectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMalwareWhiteListAffectListRequest&;
    using Resp = DescribeMalwareWhiteListAffectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMalwareWhiteListAffectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeMalwareWhiteListAffectListOutcomeCallable CwpClient::DescribeMalwareWhiteListAffectListCallable(const DescribeMalwareWhiteListAffectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMalwareWhiteListAffectListOutcome>>();
    DescribeMalwareWhiteListAffectListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeMalwareWhiteListAffectListRequest&,
        DescribeMalwareWhiteListAffectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeNetAttackSettingOutcome CwpClient::DescribeNetAttackSetting(const DescribeNetAttackSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetAttackSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetAttackSettingResponse rsp = DescribeNetAttackSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetAttackSettingOutcome(rsp);
        else
            return DescribeNetAttackSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeNetAttackSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeNetAttackSettingAsync(const DescribeNetAttackSettingRequest& request, const DescribeNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetAttackSettingRequest&;
    using Resp = DescribeNetAttackSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetAttackSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeNetAttackSettingOutcomeCallable CwpClient::DescribeNetAttackSettingCallable(const DescribeNetAttackSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetAttackSettingOutcome>>();
    DescribeNetAttackSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeNetAttackSettingRequest&,
        DescribeNetAttackSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeNetAttackWhiteListOutcome CwpClient::DescribeNetAttackWhiteList(const DescribeNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetAttackWhiteListResponse rsp = DescribeNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetAttackWhiteListOutcome(rsp);
        else
            return DescribeNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return DescribeNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeNetAttackWhiteListAsync(const DescribeNetAttackWhiteListRequest& request, const DescribeNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetAttackWhiteListRequest&;
    using Resp = DescribeNetAttackWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetAttackWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeNetAttackWhiteListOutcomeCallable CwpClient::DescribeNetAttackWhiteListCallable(const DescribeNetAttackWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetAttackWhiteListOutcome>>();
    DescribeNetAttackWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeNetAttackWhiteListRequest&,
        DescribeNetAttackWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeOpenPortStatisticsOutcome CwpClient::DescribeOpenPortStatistics(const DescribeOpenPortStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOpenPortStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOpenPortStatisticsResponse rsp = DescribeOpenPortStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOpenPortStatisticsOutcome(rsp);
        else
            return DescribeOpenPortStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeOpenPortStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeOpenPortStatisticsAsync(const DescribeOpenPortStatisticsRequest& request, const DescribeOpenPortStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOpenPortStatisticsRequest&;
    using Resp = DescribeOpenPortStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOpenPortStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeOpenPortStatisticsOutcomeCallable CwpClient::DescribeOpenPortStatisticsCallable(const DescribeOpenPortStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOpenPortStatisticsOutcome>>();
    DescribeOpenPortStatisticsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeOpenPortStatisticsRequest&,
        DescribeOpenPortStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeOverviewStatisticsOutcome CwpClient::DescribeOverviewStatistics(const DescribeOverviewStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewStatisticsResponse rsp = DescribeOverviewStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewStatisticsOutcome(rsp);
        else
            return DescribeOverviewStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeOverviewStatisticsAsync(const DescribeOverviewStatisticsRequest& request, const DescribeOverviewStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewStatisticsRequest&;
    using Resp = DescribeOverviewStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeOverviewStatisticsOutcomeCallable CwpClient::DescribeOverviewStatisticsCallable(const DescribeOverviewStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewStatisticsOutcome>>();
    DescribeOverviewStatisticsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeOverviewStatisticsRequest&,
        DescribeOverviewStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribePrivilegeEventInfoOutcome CwpClient::DescribePrivilegeEventInfo(const DescribePrivilegeEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeEventInfoResponse rsp = DescribePrivilegeEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeEventInfoOutcome(rsp);
        else
            return DescribePrivilegeEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePrivilegeEventInfoAsync(const DescribePrivilegeEventInfoRequest& request, const DescribePrivilegeEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivilegeEventInfoRequest&;
    using Resp = DescribePrivilegeEventInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivilegeEventInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribePrivilegeEventInfoOutcomeCallable CwpClient::DescribePrivilegeEventInfoCallable(const DescribePrivilegeEventInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivilegeEventInfoOutcome>>();
    DescribePrivilegeEventInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribePrivilegeEventInfoRequest&,
        DescribePrivilegeEventInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribePrivilegeEventsOutcome CwpClient::DescribePrivilegeEvents(const DescribePrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeEventsResponse rsp = DescribePrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeEventsOutcome(rsp);
        else
            return DescribePrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePrivilegeEventsAsync(const DescribePrivilegeEventsRequest& request, const DescribePrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivilegeEventsRequest&;
    using Resp = DescribePrivilegeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivilegeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribePrivilegeEventsOutcomeCallable CwpClient::DescribePrivilegeEventsCallable(const DescribePrivilegeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivilegeEventsOutcome>>();
    DescribePrivilegeEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribePrivilegeEventsRequest&,
        DescribePrivilegeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribePrivilegeRulesOutcome CwpClient::DescribePrivilegeRules(const DescribePrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivilegeRulesResponse rsp = DescribePrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivilegeRulesOutcome(rsp);
        else
            return DescribePrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribePrivilegeRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePrivilegeRulesAsync(const DescribePrivilegeRulesRequest& request, const DescribePrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivilegeRulesRequest&;
    using Resp = DescribePrivilegeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivilegeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribePrivilegeRulesOutcomeCallable CwpClient::DescribePrivilegeRulesCallable(const DescribePrivilegeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivilegeRulesOutcome>>();
    DescribePrivilegeRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribePrivilegeRulesRequest&,
        DescribePrivilegeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeProVersionInfoOutcome CwpClient::DescribeProVersionInfo(const DescribeProVersionInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProVersionInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProVersionInfoResponse rsp = DescribeProVersionInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProVersionInfoOutcome(rsp);
        else
            return DescribeProVersionInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProVersionInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProVersionInfoAsync(const DescribeProVersionInfoRequest& request, const DescribeProVersionInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProVersionInfoRequest&;
    using Resp = DescribeProVersionInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProVersionInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeProVersionInfoOutcomeCallable CwpClient::DescribeProVersionInfoCallable(const DescribeProVersionInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProVersionInfoOutcome>>();
    DescribeProVersionInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeProVersionInfoRequest&,
        DescribeProVersionInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeProVersionStatusOutcome CwpClient::DescribeProVersionStatus(const DescribeProVersionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProVersionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProVersionStatusResponse rsp = DescribeProVersionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProVersionStatusOutcome(rsp);
        else
            return DescribeProVersionStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProVersionStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProVersionStatusAsync(const DescribeProVersionStatusRequest& request, const DescribeProVersionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProVersionStatusRequest&;
    using Resp = DescribeProVersionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProVersionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeProVersionStatusOutcomeCallable CwpClient::DescribeProVersionStatusCallable(const DescribeProVersionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProVersionStatusOutcome>>();
    DescribeProVersionStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeProVersionStatusRequest&,
        DescribeProVersionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeProcessStatisticsOutcome CwpClient::DescribeProcessStatistics(const DescribeProcessStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProcessStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProcessStatisticsResponse rsp = DescribeProcessStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProcessStatisticsOutcome(rsp);
        else
            return DescribeProcessStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeProcessStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProcessStatisticsAsync(const DescribeProcessStatisticsRequest& request, const DescribeProcessStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProcessStatisticsRequest&;
    using Resp = DescribeProcessStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProcessStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeProcessStatisticsOutcomeCallable CwpClient::DescribeProcessStatisticsCallable(const DescribeProcessStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProcessStatisticsOutcome>>();
    DescribeProcessStatisticsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeProcessStatisticsRequest&,
        DescribeProcessStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeProductStatusOutcome CwpClient::DescribeProductStatus(const DescribeProductStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductStatusResponse rsp = DescribeProductStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductStatusOutcome(rsp);
        else
            return DescribeProductStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeProductStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProductStatusAsync(const DescribeProductStatusRequest& request, const DescribeProductStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductStatusRequest&;
    using Resp = DescribeProductStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeProductStatusOutcomeCallable CwpClient::DescribeProductStatusCallable(const DescribeProductStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductStatusOutcome>>();
    DescribeProductStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeProductStatusRequest&,
        DescribeProductStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeProtectDirListOutcome CwpClient::DescribeProtectDirList(const DescribeProtectDirListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectDirList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectDirListResponse rsp = DescribeProtectDirListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectDirListOutcome(rsp);
        else
            return DescribeProtectDirListOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectDirListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProtectDirListAsync(const DescribeProtectDirListRequest& request, const DescribeProtectDirListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProtectDirListRequest&;
    using Resp = DescribeProtectDirListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtectDirList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeProtectDirListOutcomeCallable CwpClient::DescribeProtectDirListCallable(const DescribeProtectDirListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectDirListOutcome>>();
    DescribeProtectDirListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeProtectDirListRequest&,
        DescribeProtectDirListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeProtectDirRelatedServerOutcome CwpClient::DescribeProtectDirRelatedServer(const DescribeProtectDirRelatedServerRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectDirRelatedServer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectDirRelatedServerResponse rsp = DescribeProtectDirRelatedServerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectDirRelatedServerOutcome(rsp);
        else
            return DescribeProtectDirRelatedServerOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectDirRelatedServerOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeProtectDirRelatedServerAsync(const DescribeProtectDirRelatedServerRequest& request, const DescribeProtectDirRelatedServerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProtectDirRelatedServerRequest&;
    using Resp = DescribeProtectDirRelatedServerResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtectDirRelatedServer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeProtectDirRelatedServerOutcomeCallable CwpClient::DescribeProtectDirRelatedServerCallable(const DescribeProtectDirRelatedServerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectDirRelatedServerOutcome>>();
    DescribeProtectDirRelatedServerAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeProtectDirRelatedServerRequest&,
        DescribeProtectDirRelatedServerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribePublicProxyInstallCommandOutcome CwpClient::DescribePublicProxyInstallCommand(const DescribePublicProxyInstallCommandRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicProxyInstallCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicProxyInstallCommandResponse rsp = DescribePublicProxyInstallCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicProxyInstallCommandOutcome(rsp);
        else
            return DescribePublicProxyInstallCommandOutcome(o.GetError());
    }
    else
    {
        return DescribePublicProxyInstallCommandOutcome(outcome.GetError());
    }
}

void CwpClient::DescribePublicProxyInstallCommandAsync(const DescribePublicProxyInstallCommandRequest& request, const DescribePublicProxyInstallCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicProxyInstallCommandRequest&;
    using Resp = DescribePublicProxyInstallCommandResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicProxyInstallCommand", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribePublicProxyInstallCommandOutcomeCallable CwpClient::DescribePublicProxyInstallCommandCallable(const DescribePublicProxyInstallCommandRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicProxyInstallCommandOutcome>>();
    DescribePublicProxyInstallCommandAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribePublicProxyInstallCommandRequest&,
        DescribePublicProxyInstallCommandOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseBackupListOutcome CwpClient::DescribeRansomDefenseBackupList(const DescribeRansomDefenseBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseBackupListResponse rsp = DescribeRansomDefenseBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseBackupListOutcome(rsp);
        else
            return DescribeRansomDefenseBackupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseBackupListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseBackupListAsync(const DescribeRansomDefenseBackupListRequest& request, const DescribeRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseBackupListRequest&;
    using Resp = DescribeRansomDefenseBackupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseBackupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseBackupListOutcomeCallable CwpClient::DescribeRansomDefenseBackupListCallable(const DescribeRansomDefenseBackupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseBackupListOutcome>>();
    DescribeRansomDefenseBackupListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseBackupListRequest&,
        DescribeRansomDefenseBackupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseEventsListOutcome CwpClient::DescribeRansomDefenseEventsList(const DescribeRansomDefenseEventsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseEventsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseEventsListResponse rsp = DescribeRansomDefenseEventsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseEventsListOutcome(rsp);
        else
            return DescribeRansomDefenseEventsListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseEventsListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseEventsListAsync(const DescribeRansomDefenseEventsListRequest& request, const DescribeRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseEventsListRequest&;
    using Resp = DescribeRansomDefenseEventsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseEventsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseEventsListOutcomeCallable CwpClient::DescribeRansomDefenseEventsListCallable(const DescribeRansomDefenseEventsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseEventsListOutcome>>();
    DescribeRansomDefenseEventsListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseEventsListRequest&,
        DescribeRansomDefenseEventsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseMachineListOutcome CwpClient::DescribeRansomDefenseMachineList(const DescribeRansomDefenseMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseMachineListResponse rsp = DescribeRansomDefenseMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseMachineListOutcome(rsp);
        else
            return DescribeRansomDefenseMachineListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseMachineListAsync(const DescribeRansomDefenseMachineListRequest& request, const DescribeRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseMachineListRequest&;
    using Resp = DescribeRansomDefenseMachineListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseMachineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseMachineListOutcomeCallable CwpClient::DescribeRansomDefenseMachineListCallable(const DescribeRansomDefenseMachineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseMachineListOutcome>>();
    DescribeRansomDefenseMachineListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseMachineListRequest&,
        DescribeRansomDefenseMachineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseMachineStrategyInfoOutcome CwpClient::DescribeRansomDefenseMachineStrategyInfo(const DescribeRansomDefenseMachineStrategyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseMachineStrategyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseMachineStrategyInfoResponse rsp = DescribeRansomDefenseMachineStrategyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseMachineStrategyInfoOutcome(rsp);
        else
            return DescribeRansomDefenseMachineStrategyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseMachineStrategyInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseMachineStrategyInfoAsync(const DescribeRansomDefenseMachineStrategyInfoRequest& request, const DescribeRansomDefenseMachineStrategyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseMachineStrategyInfoRequest&;
    using Resp = DescribeRansomDefenseMachineStrategyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseMachineStrategyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseMachineStrategyInfoOutcomeCallable CwpClient::DescribeRansomDefenseMachineStrategyInfoCallable(const DescribeRansomDefenseMachineStrategyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseMachineStrategyInfoOutcome>>();
    DescribeRansomDefenseMachineStrategyInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseMachineStrategyInfoRequest&,
        DescribeRansomDefenseMachineStrategyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseRollBackTaskListOutcome CwpClient::DescribeRansomDefenseRollBackTaskList(const DescribeRansomDefenseRollBackTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseRollBackTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseRollBackTaskListResponse rsp = DescribeRansomDefenseRollBackTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseRollBackTaskListOutcome(rsp);
        else
            return DescribeRansomDefenseRollBackTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseRollBackTaskListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseRollBackTaskListAsync(const DescribeRansomDefenseRollBackTaskListRequest& request, const DescribeRansomDefenseRollBackTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseRollBackTaskListRequest&;
    using Resp = DescribeRansomDefenseRollBackTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseRollBackTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseRollBackTaskListOutcomeCallable CwpClient::DescribeRansomDefenseRollBackTaskListCallable(const DescribeRansomDefenseRollBackTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseRollBackTaskListOutcome>>();
    DescribeRansomDefenseRollBackTaskListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseRollBackTaskListRequest&,
        DescribeRansomDefenseRollBackTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseStateOutcome CwpClient::DescribeRansomDefenseState(const DescribeRansomDefenseStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStateResponse rsp = DescribeRansomDefenseStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStateOutcome(rsp);
        else
            return DescribeRansomDefenseStateOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStateOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStateAsync(const DescribeRansomDefenseStateRequest& request, const DescribeRansomDefenseStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseStateRequest&;
    using Resp = DescribeRansomDefenseStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseStateOutcomeCallable CwpClient::DescribeRansomDefenseStateCallable(const DescribeRansomDefenseStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseStateOutcome>>();
    DescribeRansomDefenseStateAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseStateRequest&,
        DescribeRansomDefenseStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseStrategyDetailOutcome CwpClient::DescribeRansomDefenseStrategyDetail(const DescribeRansomDefenseStrategyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseStrategyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStrategyDetailResponse rsp = DescribeRansomDefenseStrategyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStrategyDetailOutcome(rsp);
        else
            return DescribeRansomDefenseStrategyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStrategyDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStrategyDetailAsync(const DescribeRansomDefenseStrategyDetailRequest& request, const DescribeRansomDefenseStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseStrategyDetailRequest&;
    using Resp = DescribeRansomDefenseStrategyDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseStrategyDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseStrategyDetailOutcomeCallable CwpClient::DescribeRansomDefenseStrategyDetailCallable(const DescribeRansomDefenseStrategyDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseStrategyDetailOutcome>>();
    DescribeRansomDefenseStrategyDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseStrategyDetailRequest&,
        DescribeRansomDefenseStrategyDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseStrategyListOutcome CwpClient::DescribeRansomDefenseStrategyList(const DescribeRansomDefenseStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStrategyListResponse rsp = DescribeRansomDefenseStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStrategyListOutcome(rsp);
        else
            return DescribeRansomDefenseStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStrategyListAsync(const DescribeRansomDefenseStrategyListRequest& request, const DescribeRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseStrategyListRequest&;
    using Resp = DescribeRansomDefenseStrategyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseStrategyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseStrategyListOutcomeCallable CwpClient::DescribeRansomDefenseStrategyListCallable(const DescribeRansomDefenseStrategyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseStrategyListOutcome>>();
    DescribeRansomDefenseStrategyListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseStrategyListRequest&,
        DescribeRansomDefenseStrategyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseStrategyMachinesOutcome CwpClient::DescribeRansomDefenseStrategyMachines(const DescribeRansomDefenseStrategyMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseStrategyMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseStrategyMachinesResponse rsp = DescribeRansomDefenseStrategyMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseStrategyMachinesOutcome(rsp);
        else
            return DescribeRansomDefenseStrategyMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseStrategyMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseStrategyMachinesAsync(const DescribeRansomDefenseStrategyMachinesRequest& request, const DescribeRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseStrategyMachinesRequest&;
    using Resp = DescribeRansomDefenseStrategyMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseStrategyMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseStrategyMachinesOutcomeCallable CwpClient::DescribeRansomDefenseStrategyMachinesCallable(const DescribeRansomDefenseStrategyMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseStrategyMachinesOutcome>>();
    DescribeRansomDefenseStrategyMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseStrategyMachinesRequest&,
        DescribeRansomDefenseStrategyMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRansomDefenseTrendOutcome CwpClient::DescribeRansomDefenseTrend(const DescribeRansomDefenseTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRansomDefenseTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRansomDefenseTrendResponse rsp = DescribeRansomDefenseTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRansomDefenseTrendOutcome(rsp);
        else
            return DescribeRansomDefenseTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeRansomDefenseTrendOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRansomDefenseTrendAsync(const DescribeRansomDefenseTrendRequest& request, const DescribeRansomDefenseTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRansomDefenseTrendRequest&;
    using Resp = DescribeRansomDefenseTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRansomDefenseTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRansomDefenseTrendOutcomeCallable CwpClient::DescribeRansomDefenseTrendCallable(const DescribeRansomDefenseTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRansomDefenseTrendOutcome>>();
    DescribeRansomDefenseTrendAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRansomDefenseTrendRequest&,
        DescribeRansomDefenseTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRaspMaxCpuOutcome CwpClient::DescribeRaspMaxCpu(const DescribeRaspMaxCpuRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspMaxCpu");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspMaxCpuResponse rsp = DescribeRaspMaxCpuResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspMaxCpuOutcome(rsp);
        else
            return DescribeRaspMaxCpuOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspMaxCpuOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRaspMaxCpuAsync(const DescribeRaspMaxCpuRequest& request, const DescribeRaspMaxCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRaspMaxCpuRequest&;
    using Resp = DescribeRaspMaxCpuResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRaspMaxCpu", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRaspMaxCpuOutcomeCallable CwpClient::DescribeRaspMaxCpuCallable(const DescribeRaspMaxCpuRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRaspMaxCpuOutcome>>();
    DescribeRaspMaxCpuAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRaspMaxCpuRequest&,
        DescribeRaspMaxCpuOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRaspRuleVulsOutcome CwpClient::DescribeRaspRuleVuls(const DescribeRaspRuleVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspRuleVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspRuleVulsResponse rsp = DescribeRaspRuleVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspRuleVulsOutcome(rsp);
        else
            return DescribeRaspRuleVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspRuleVulsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRaspRuleVulsAsync(const DescribeRaspRuleVulsRequest& request, const DescribeRaspRuleVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRaspRuleVulsRequest&;
    using Resp = DescribeRaspRuleVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRaspRuleVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRaspRuleVulsOutcomeCallable CwpClient::DescribeRaspRuleVulsCallable(const DescribeRaspRuleVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRaspRuleVulsOutcome>>();
    DescribeRaspRuleVulsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRaspRuleVulsRequest&,
        DescribeRaspRuleVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRaspRulesOutcome CwpClient::DescribeRaspRules(const DescribeRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRaspRulesResponse rsp = DescribeRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRaspRulesOutcome(rsp);
        else
            return DescribeRaspRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRaspRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRaspRulesAsync(const DescribeRaspRulesRequest& request, const DescribeRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRaspRulesRequest&;
    using Resp = DescribeRaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRaspRulesOutcomeCallable CwpClient::DescribeRaspRulesCallable(const DescribeRaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRaspRulesOutcome>>();
    DescribeRaspRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRaspRulesRequest&,
        DescribeRaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRecommendedProtectCpuOutcome CwpClient::DescribeRecommendedProtectCpu(const DescribeRecommendedProtectCpuRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecommendedProtectCpu");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecommendedProtectCpuResponse rsp = DescribeRecommendedProtectCpuResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecommendedProtectCpuOutcome(rsp);
        else
            return DescribeRecommendedProtectCpuOutcome(o.GetError());
    }
    else
    {
        return DescribeRecommendedProtectCpuOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRecommendedProtectCpuAsync(const DescribeRecommendedProtectCpuRequest& request, const DescribeRecommendedProtectCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRecommendedProtectCpuRequest&;
    using Resp = DescribeRecommendedProtectCpuResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRecommendedProtectCpu", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRecommendedProtectCpuOutcomeCallable CwpClient::DescribeRecommendedProtectCpuCallable(const DescribeRecommendedProtectCpuRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRecommendedProtectCpuOutcome>>();
    DescribeRecommendedProtectCpuAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRecommendedProtectCpuRequest&,
        DescribeRecommendedProtectCpuOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeReverseShellEventInfoOutcome CwpClient::DescribeReverseShellEventInfo(const DescribeReverseShellEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventInfoResponse rsp = DescribeReverseShellEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventInfoOutcome(rsp);
        else
            return DescribeReverseShellEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeReverseShellEventInfoAsync(const DescribeReverseShellEventInfoRequest& request, const DescribeReverseShellEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellEventInfoRequest&;
    using Resp = DescribeReverseShellEventInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellEventInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeReverseShellEventInfoOutcomeCallable CwpClient::DescribeReverseShellEventInfoCallable(const DescribeReverseShellEventInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellEventInfoOutcome>>();
    DescribeReverseShellEventInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeReverseShellEventInfoRequest&,
        DescribeReverseShellEventInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeReverseShellEventsOutcome CwpClient::DescribeReverseShellEvents(const DescribeReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellEventsResponse rsp = DescribeReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellEventsOutcome(rsp);
        else
            return DescribeReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeReverseShellEventsAsync(const DescribeReverseShellEventsRequest& request, const DescribeReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellEventsRequest&;
    using Resp = DescribeReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeReverseShellEventsOutcomeCallable CwpClient::DescribeReverseShellEventsCallable(const DescribeReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellEventsOutcome>>();
    DescribeReverseShellEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeReverseShellEventsRequest&,
        DescribeReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeReverseShellRulesOutcome CwpClient::DescribeReverseShellRules(const DescribeReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReverseShellRulesResponse rsp = DescribeReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReverseShellRulesOutcome(rsp);
        else
            return DescribeReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeReverseShellRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeReverseShellRulesAsync(const DescribeReverseShellRulesRequest& request, const DescribeReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReverseShellRulesRequest&;
    using Resp = DescribeReverseShellRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReverseShellRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeReverseShellRulesOutcomeCallable CwpClient::DescribeReverseShellRulesCallable(const DescribeReverseShellRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReverseShellRulesOutcome>>();
    DescribeReverseShellRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeReverseShellRulesRequest&,
        DescribeReverseShellRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskBatchStatusOutcome CwpClient::DescribeRiskBatchStatus(const DescribeRiskBatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskBatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskBatchStatusResponse rsp = DescribeRiskBatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskBatchStatusOutcome(rsp);
        else
            return DescribeRiskBatchStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskBatchStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskBatchStatusAsync(const DescribeRiskBatchStatusRequest& request, const DescribeRiskBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskBatchStatusRequest&;
    using Resp = DescribeRiskBatchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskBatchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskBatchStatusOutcomeCallable CwpClient::DescribeRiskBatchStatusCallable(const DescribeRiskBatchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskBatchStatusOutcome>>();
    DescribeRiskBatchStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskBatchStatusRequest&,
        DescribeRiskBatchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskDnsEventInfoOutcome CwpClient::DescribeRiskDnsEventInfo(const DescribeRiskDnsEventInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsEventInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsEventInfoResponse rsp = DescribeRiskDnsEventInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsEventInfoOutcome(rsp);
        else
            return DescribeRiskDnsEventInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsEventInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsEventInfoAsync(const DescribeRiskDnsEventInfoRequest& request, const DescribeRiskDnsEventInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsEventInfoRequest&;
    using Resp = DescribeRiskDnsEventInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsEventInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskDnsEventInfoOutcomeCallable CwpClient::DescribeRiskDnsEventInfoCallable(const DescribeRiskDnsEventInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsEventInfoOutcome>>();
    DescribeRiskDnsEventInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskDnsEventInfoRequest&,
        DescribeRiskDnsEventInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskDnsEventListOutcome CwpClient::DescribeRiskDnsEventList(const DescribeRiskDnsEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsEventListResponse rsp = DescribeRiskDnsEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsEventListOutcome(rsp);
        else
            return DescribeRiskDnsEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsEventListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsEventListAsync(const DescribeRiskDnsEventListRequest& request, const DescribeRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsEventListRequest&;
    using Resp = DescribeRiskDnsEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskDnsEventListOutcomeCallable CwpClient::DescribeRiskDnsEventListCallable(const DescribeRiskDnsEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsEventListOutcome>>();
    DescribeRiskDnsEventListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskDnsEventListRequest&,
        DescribeRiskDnsEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskDnsInfoOutcome CwpClient::DescribeRiskDnsInfo(const DescribeRiskDnsInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsInfoResponse rsp = DescribeRiskDnsInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsInfoOutcome(rsp);
        else
            return DescribeRiskDnsInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsInfoAsync(const DescribeRiskDnsInfoRequest& request, const DescribeRiskDnsInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsInfoRequest&;
    using Resp = DescribeRiskDnsInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskDnsInfoOutcomeCallable CwpClient::DescribeRiskDnsInfoCallable(const DescribeRiskDnsInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsInfoOutcome>>();
    DescribeRiskDnsInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskDnsInfoRequest&,
        DescribeRiskDnsInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskDnsListOutcome CwpClient::DescribeRiskDnsList(const DescribeRiskDnsListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsListResponse rsp = DescribeRiskDnsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsListOutcome(rsp);
        else
            return DescribeRiskDnsListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsListAsync(const DescribeRiskDnsListRequest& request, const DescribeRiskDnsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsListRequest&;
    using Resp = DescribeRiskDnsListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskDnsListOutcomeCallable CwpClient::DescribeRiskDnsListCallable(const DescribeRiskDnsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsListOutcome>>();
    DescribeRiskDnsListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskDnsListRequest&,
        DescribeRiskDnsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskDnsPolicyListOutcome CwpClient::DescribeRiskDnsPolicyList(const DescribeRiskDnsPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDnsPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDnsPolicyListResponse rsp = DescribeRiskDnsPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDnsPolicyListOutcome(rsp);
        else
            return DescribeRiskDnsPolicyListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDnsPolicyListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskDnsPolicyListAsync(const DescribeRiskDnsPolicyListRequest& request, const DescribeRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDnsPolicyListRequest&;
    using Resp = DescribeRiskDnsPolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDnsPolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskDnsPolicyListOutcomeCallable CwpClient::DescribeRiskDnsPolicyListCallable(const DescribeRiskDnsPolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDnsPolicyListOutcome>>();
    DescribeRiskDnsPolicyListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskDnsPolicyListRequest&,
        DescribeRiskDnsPolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeRiskProcessEventsOutcome CwpClient::DescribeRiskProcessEvents(const DescribeRiskProcessEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskProcessEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskProcessEventsResponse rsp = DescribeRiskProcessEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskProcessEventsOutcome(rsp);
        else
            return DescribeRiskProcessEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskProcessEventsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeRiskProcessEventsAsync(const DescribeRiskProcessEventsRequest& request, const DescribeRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskProcessEventsRequest&;
    using Resp = DescribeRiskProcessEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskProcessEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeRiskProcessEventsOutcomeCallable CwpClient::DescribeRiskProcessEventsCallable(const DescribeRiskProcessEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskProcessEventsOutcome>>();
    DescribeRiskProcessEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeRiskProcessEventsRequest&,
        DescribeRiskProcessEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSafeInfoOutcome CwpClient::DescribeSafeInfo(const DescribeSafeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafeInfoResponse rsp = DescribeSafeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafeInfoOutcome(rsp);
        else
            return DescribeSafeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSafeInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSafeInfoAsync(const DescribeSafeInfoRequest& request, const DescribeSafeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSafeInfoRequest&;
    using Resp = DescribeSafeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSafeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSafeInfoOutcomeCallable CwpClient::DescribeSafeInfoCallable(const DescribeSafeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSafeInfoOutcome>>();
    DescribeSafeInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSafeInfoRequest&,
        DescribeSafeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScanMalwareScheduleOutcome CwpClient::DescribeScanMalwareSchedule(const DescribeScanMalwareScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanMalwareSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanMalwareScheduleResponse rsp = DescribeScanMalwareScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanMalwareScheduleOutcome(rsp);
        else
            return DescribeScanMalwareScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeScanMalwareScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanMalwareScheduleAsync(const DescribeScanMalwareScheduleRequest& request, const DescribeScanMalwareScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanMalwareScheduleRequest&;
    using Resp = DescribeScanMalwareScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanMalwareSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScanMalwareScheduleOutcomeCallable CwpClient::DescribeScanMalwareScheduleCallable(const DescribeScanMalwareScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanMalwareScheduleOutcome>>();
    DescribeScanMalwareScheduleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScanMalwareScheduleRequest&,
        DescribeScanMalwareScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScanScheduleOutcome CwpClient::DescribeScanSchedule(const DescribeScanScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanScheduleResponse rsp = DescribeScanScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanScheduleOutcome(rsp);
        else
            return DescribeScanScheduleOutcome(o.GetError());
    }
    else
    {
        return DescribeScanScheduleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanScheduleAsync(const DescribeScanScheduleRequest& request, const DescribeScanScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanScheduleRequest&;
    using Resp = DescribeScanScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScanScheduleOutcomeCallable CwpClient::DescribeScanScheduleCallable(const DescribeScanScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanScheduleOutcome>>();
    DescribeScanScheduleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScanScheduleRequest&,
        DescribeScanScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScanStateOutcome CwpClient::DescribeScanState(const DescribeScanStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanStateResponse rsp = DescribeScanStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanStateOutcome(rsp);
        else
            return DescribeScanStateOutcome(o.GetError());
    }
    else
    {
        return DescribeScanStateOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanStateAsync(const DescribeScanStateRequest& request, const DescribeScanStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanStateRequest&;
    using Resp = DescribeScanStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScanStateOutcomeCallable CwpClient::DescribeScanStateCallable(const DescribeScanStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanStateOutcome>>();
    DescribeScanStateAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScanStateRequest&,
        DescribeScanStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScanTaskDetailsOutcome CwpClient::DescribeScanTaskDetails(const DescribeScanTaskDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskDetailsResponse rsp = DescribeScanTaskDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskDetailsOutcome(rsp);
        else
            return DescribeScanTaskDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskDetailsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanTaskDetailsAsync(const DescribeScanTaskDetailsRequest& request, const DescribeScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanTaskDetailsRequest&;
    using Resp = DescribeScanTaskDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanTaskDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScanTaskDetailsOutcomeCallable CwpClient::DescribeScanTaskDetailsCallable(const DescribeScanTaskDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskDetailsOutcome>>();
    DescribeScanTaskDetailsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScanTaskDetailsRequest&,
        DescribeScanTaskDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScanTaskStatusOutcome CwpClient::DescribeScanTaskStatus(const DescribeScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskStatusResponse rsp = DescribeScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskStatusOutcome(rsp);
        else
            return DescribeScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanTaskStatusAsync(const DescribeScanTaskStatusRequest& request, const DescribeScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanTaskStatusRequest&;
    using Resp = DescribeScanTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScanTaskStatusOutcomeCallable CwpClient::DescribeScanTaskStatusCallable(const DescribeScanTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskStatusOutcome>>();
    DescribeScanTaskStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScanTaskStatusRequest&,
        DescribeScanTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScanVulSettingOutcome CwpClient::DescribeScanVulSetting(const DescribeScanVulSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanVulSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanVulSettingResponse rsp = DescribeScanVulSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanVulSettingOutcome(rsp);
        else
            return DescribeScanVulSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeScanVulSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScanVulSettingAsync(const DescribeScanVulSettingRequest& request, const DescribeScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanVulSettingRequest&;
    using Resp = DescribeScanVulSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanVulSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScanVulSettingOutcomeCallable CwpClient::DescribeScanVulSettingCallable(const DescribeScanVulSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanVulSettingOutcome>>();
    DescribeScanVulSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScanVulSettingRequest&,
        DescribeScanVulSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenAttackHotspotOutcome CwpClient::DescribeScreenAttackHotspot(const DescribeScreenAttackHotspotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenAttackHotspot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenAttackHotspotResponse rsp = DescribeScreenAttackHotspotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenAttackHotspotOutcome(rsp);
        else
            return DescribeScreenAttackHotspotOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenAttackHotspotOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenAttackHotspotAsync(const DescribeScreenAttackHotspotRequest& request, const DescribeScreenAttackHotspotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenAttackHotspotRequest&;
    using Resp = DescribeScreenAttackHotspotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenAttackHotspot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenAttackHotspotOutcomeCallable CwpClient::DescribeScreenAttackHotspotCallable(const DescribeScreenAttackHotspotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenAttackHotspotOutcome>>();
    DescribeScreenAttackHotspotAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenAttackHotspotRequest&,
        DescribeScreenAttackHotspotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenBroadcastsOutcome CwpClient::DescribeScreenBroadcasts(const DescribeScreenBroadcastsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenBroadcasts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenBroadcastsResponse rsp = DescribeScreenBroadcastsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenBroadcastsOutcome(rsp);
        else
            return DescribeScreenBroadcastsOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenBroadcastsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenBroadcastsAsync(const DescribeScreenBroadcastsRequest& request, const DescribeScreenBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenBroadcastsRequest&;
    using Resp = DescribeScreenBroadcastsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenBroadcasts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenBroadcastsOutcomeCallable CwpClient::DescribeScreenBroadcastsCallable(const DescribeScreenBroadcastsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenBroadcastsOutcome>>();
    DescribeScreenBroadcastsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenBroadcastsRequest&,
        DescribeScreenBroadcastsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenDefenseTrendsOutcome CwpClient::DescribeScreenDefenseTrends(const DescribeScreenDefenseTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenDefenseTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenDefenseTrendsResponse rsp = DescribeScreenDefenseTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenDefenseTrendsOutcome(rsp);
        else
            return DescribeScreenDefenseTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenDefenseTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenDefenseTrendsAsync(const DescribeScreenDefenseTrendsRequest& request, const DescribeScreenDefenseTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenDefenseTrendsRequest&;
    using Resp = DescribeScreenDefenseTrendsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenDefenseTrends", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenDefenseTrendsOutcomeCallable CwpClient::DescribeScreenDefenseTrendsCallable(const DescribeScreenDefenseTrendsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenDefenseTrendsOutcome>>();
    DescribeScreenDefenseTrendsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenDefenseTrendsRequest&,
        DescribeScreenDefenseTrendsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenEmergentMsgOutcome CwpClient::DescribeScreenEmergentMsg(const DescribeScreenEmergentMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenEmergentMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenEmergentMsgResponse rsp = DescribeScreenEmergentMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenEmergentMsgOutcome(rsp);
        else
            return DescribeScreenEmergentMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenEmergentMsgOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenEmergentMsgAsync(const DescribeScreenEmergentMsgRequest& request, const DescribeScreenEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenEmergentMsgRequest&;
    using Resp = DescribeScreenEmergentMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenEmergentMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenEmergentMsgOutcomeCallable CwpClient::DescribeScreenEmergentMsgCallable(const DescribeScreenEmergentMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenEmergentMsgOutcome>>();
    DescribeScreenEmergentMsgAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenEmergentMsgRequest&,
        DescribeScreenEmergentMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenEventsCntOutcome CwpClient::DescribeScreenEventsCnt(const DescribeScreenEventsCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenEventsCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenEventsCntResponse rsp = DescribeScreenEventsCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenEventsCntOutcome(rsp);
        else
            return DescribeScreenEventsCntOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenEventsCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenEventsCntAsync(const DescribeScreenEventsCntRequest& request, const DescribeScreenEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenEventsCntRequest&;
    using Resp = DescribeScreenEventsCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenEventsCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenEventsCntOutcomeCallable CwpClient::DescribeScreenEventsCntCallable(const DescribeScreenEventsCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenEventsCntOutcome>>();
    DescribeScreenEventsCntAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenEventsCntRequest&,
        DescribeScreenEventsCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenGeneralStatOutcome CwpClient::DescribeScreenGeneralStat(const DescribeScreenGeneralStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenGeneralStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenGeneralStatResponse rsp = DescribeScreenGeneralStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenGeneralStatOutcome(rsp);
        else
            return DescribeScreenGeneralStatOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenGeneralStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenGeneralStatAsync(const DescribeScreenGeneralStatRequest& request, const DescribeScreenGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenGeneralStatRequest&;
    using Resp = DescribeScreenGeneralStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenGeneralStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenGeneralStatOutcomeCallable CwpClient::DescribeScreenGeneralStatCallable(const DescribeScreenGeneralStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenGeneralStatOutcome>>();
    DescribeScreenGeneralStatAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenGeneralStatRequest&,
        DescribeScreenGeneralStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenHostInvasionOutcome CwpClient::DescribeScreenHostInvasion(const DescribeScreenHostInvasionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenHostInvasion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenHostInvasionResponse rsp = DescribeScreenHostInvasionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenHostInvasionOutcome(rsp);
        else
            return DescribeScreenHostInvasionOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenHostInvasionOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenHostInvasionAsync(const DescribeScreenHostInvasionRequest& request, const DescribeScreenHostInvasionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenHostInvasionRequest&;
    using Resp = DescribeScreenHostInvasionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenHostInvasion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenHostInvasionOutcomeCallable CwpClient::DescribeScreenHostInvasionCallable(const DescribeScreenHostInvasionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenHostInvasionOutcome>>();
    DescribeScreenHostInvasionAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenHostInvasionRequest&,
        DescribeScreenHostInvasionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenMachineRegionsOutcome CwpClient::DescribeScreenMachineRegions(const DescribeScreenMachineRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenMachineRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenMachineRegionsResponse rsp = DescribeScreenMachineRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenMachineRegionsOutcome(rsp);
        else
            return DescribeScreenMachineRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenMachineRegionsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenMachineRegionsAsync(const DescribeScreenMachineRegionsRequest& request, const DescribeScreenMachineRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenMachineRegionsRequest&;
    using Resp = DescribeScreenMachineRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenMachineRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenMachineRegionsOutcomeCallable CwpClient::DescribeScreenMachineRegionsCallable(const DescribeScreenMachineRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenMachineRegionsOutcome>>();
    DescribeScreenMachineRegionsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenMachineRegionsRequest&,
        DescribeScreenMachineRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenMachinesOutcome CwpClient::DescribeScreenMachines(const DescribeScreenMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenMachinesResponse rsp = DescribeScreenMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenMachinesOutcome(rsp);
        else
            return DescribeScreenMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenMachinesAsync(const DescribeScreenMachinesRequest& request, const DescribeScreenMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenMachinesRequest&;
    using Resp = DescribeScreenMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenMachinesOutcomeCallable CwpClient::DescribeScreenMachinesCallable(const DescribeScreenMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenMachinesOutcome>>();
    DescribeScreenMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenMachinesRequest&,
        DescribeScreenMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenProtectionCntOutcome CwpClient::DescribeScreenProtectionCnt(const DescribeScreenProtectionCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenProtectionCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenProtectionCntResponse rsp = DescribeScreenProtectionCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenProtectionCntOutcome(rsp);
        else
            return DescribeScreenProtectionCntOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenProtectionCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenProtectionCntAsync(const DescribeScreenProtectionCntRequest& request, const DescribeScreenProtectionCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenProtectionCntRequest&;
    using Resp = DescribeScreenProtectionCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenProtectionCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenProtectionCntOutcomeCallable CwpClient::DescribeScreenProtectionCntCallable(const DescribeScreenProtectionCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenProtectionCntOutcome>>();
    DescribeScreenProtectionCntAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenProtectionCntRequest&,
        DescribeScreenProtectionCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenProtectionStatOutcome CwpClient::DescribeScreenProtectionStat(const DescribeScreenProtectionStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenProtectionStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenProtectionStatResponse rsp = DescribeScreenProtectionStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenProtectionStatOutcome(rsp);
        else
            return DescribeScreenProtectionStatOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenProtectionStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenProtectionStatAsync(const DescribeScreenProtectionStatRequest& request, const DescribeScreenProtectionStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenProtectionStatRequest&;
    using Resp = DescribeScreenProtectionStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenProtectionStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenProtectionStatOutcomeCallable CwpClient::DescribeScreenProtectionStatCallable(const DescribeScreenProtectionStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenProtectionStatOutcome>>();
    DescribeScreenProtectionStatAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenProtectionStatRequest&,
        DescribeScreenProtectionStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeScreenRiskAssetsTopOutcome CwpClient::DescribeScreenRiskAssetsTop(const DescribeScreenRiskAssetsTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScreenRiskAssetsTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScreenRiskAssetsTopResponse rsp = DescribeScreenRiskAssetsTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScreenRiskAssetsTopOutcome(rsp);
        else
            return DescribeScreenRiskAssetsTopOutcome(o.GetError());
    }
    else
    {
        return DescribeScreenRiskAssetsTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeScreenRiskAssetsTopAsync(const DescribeScreenRiskAssetsTopRequest& request, const DescribeScreenRiskAssetsTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScreenRiskAssetsTopRequest&;
    using Resp = DescribeScreenRiskAssetsTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScreenRiskAssetsTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeScreenRiskAssetsTopOutcomeCallable CwpClient::DescribeScreenRiskAssetsTopCallable(const DescribeScreenRiskAssetsTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScreenRiskAssetsTopOutcome>>();
    DescribeScreenRiskAssetsTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeScreenRiskAssetsTopRequest&,
        DescribeScreenRiskAssetsTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSearchLogsOutcome CwpClient::DescribeSearchLogs(const DescribeSearchLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchLogsResponse rsp = DescribeSearchLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchLogsOutcome(rsp);
        else
            return DescribeSearchLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchLogsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSearchLogsAsync(const DescribeSearchLogsRequest& request, const DescribeSearchLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchLogsRequest&;
    using Resp = DescribeSearchLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSearchLogsOutcomeCallable CwpClient::DescribeSearchLogsCallable(const DescribeSearchLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchLogsOutcome>>();
    DescribeSearchLogsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSearchLogsRequest&,
        DescribeSearchLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSearchTemplatesOutcome CwpClient::DescribeSearchTemplates(const DescribeSearchTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchTemplatesResponse rsp = DescribeSearchTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchTemplatesOutcome(rsp);
        else
            return DescribeSearchTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchTemplatesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSearchTemplatesAsync(const DescribeSearchTemplatesRequest& request, const DescribeSearchTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchTemplatesRequest&;
    using Resp = DescribeSearchTemplatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchTemplates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSearchTemplatesOutcomeCallable CwpClient::DescribeSearchTemplatesCallable(const DescribeSearchTemplatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchTemplatesOutcome>>();
    DescribeSearchTemplatesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSearchTemplatesRequest&,
        DescribeSearchTemplatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSecurityBroadcastInfoOutcome CwpClient::DescribeSecurityBroadcastInfo(const DescribeSecurityBroadcastInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityBroadcastInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityBroadcastInfoResponse rsp = DescribeSecurityBroadcastInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityBroadcastInfoOutcome(rsp);
        else
            return DescribeSecurityBroadcastInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityBroadcastInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityBroadcastInfoAsync(const DescribeSecurityBroadcastInfoRequest& request, const DescribeSecurityBroadcastInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityBroadcastInfoRequest&;
    using Resp = DescribeSecurityBroadcastInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityBroadcastInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSecurityBroadcastInfoOutcomeCallable CwpClient::DescribeSecurityBroadcastInfoCallable(const DescribeSecurityBroadcastInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityBroadcastInfoOutcome>>();
    DescribeSecurityBroadcastInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSecurityBroadcastInfoRequest&,
        DescribeSecurityBroadcastInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSecurityBroadcastsOutcome CwpClient::DescribeSecurityBroadcasts(const DescribeSecurityBroadcastsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityBroadcasts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityBroadcastsResponse rsp = DescribeSecurityBroadcastsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityBroadcastsOutcome(rsp);
        else
            return DescribeSecurityBroadcastsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityBroadcastsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityBroadcastsAsync(const DescribeSecurityBroadcastsRequest& request, const DescribeSecurityBroadcastsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityBroadcastsRequest&;
    using Resp = DescribeSecurityBroadcastsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityBroadcasts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSecurityBroadcastsOutcomeCallable CwpClient::DescribeSecurityBroadcastsCallable(const DescribeSecurityBroadcastsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityBroadcastsOutcome>>();
    DescribeSecurityBroadcastsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSecurityBroadcastsRequest&,
        DescribeSecurityBroadcastsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSecurityDynamicsOutcome CwpClient::DescribeSecurityDynamics(const DescribeSecurityDynamicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityDynamics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityDynamicsResponse rsp = DescribeSecurityDynamicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityDynamicsOutcome(rsp);
        else
            return DescribeSecurityDynamicsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityDynamicsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityDynamicsAsync(const DescribeSecurityDynamicsRequest& request, const DescribeSecurityDynamicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityDynamicsRequest&;
    using Resp = DescribeSecurityDynamicsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityDynamics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSecurityDynamicsOutcomeCallable CwpClient::DescribeSecurityDynamicsCallable(const DescribeSecurityDynamicsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityDynamicsOutcome>>();
    DescribeSecurityDynamicsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSecurityDynamicsRequest&,
        DescribeSecurityDynamicsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSecurityEventStatOutcome CwpClient::DescribeSecurityEventStat(const DescribeSecurityEventStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityEventStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityEventStatResponse rsp = DescribeSecurityEventStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityEventStatOutcome(rsp);
        else
            return DescribeSecurityEventStatOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityEventStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityEventStatAsync(const DescribeSecurityEventStatRequest& request, const DescribeSecurityEventStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityEventStatRequest&;
    using Resp = DescribeSecurityEventStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityEventStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSecurityEventStatOutcomeCallable CwpClient::DescribeSecurityEventStatCallable(const DescribeSecurityEventStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityEventStatOutcome>>();
    DescribeSecurityEventStatAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSecurityEventStatRequest&,
        DescribeSecurityEventStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSecurityEventsCntOutcome CwpClient::DescribeSecurityEventsCnt(const DescribeSecurityEventsCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityEventsCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityEventsCntResponse rsp = DescribeSecurityEventsCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityEventsCntOutcome(rsp);
        else
            return DescribeSecurityEventsCntOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityEventsCntOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityEventsCntAsync(const DescribeSecurityEventsCntRequest& request, const DescribeSecurityEventsCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityEventsCntRequest&;
    using Resp = DescribeSecurityEventsCntResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityEventsCnt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSecurityEventsCntOutcomeCallable CwpClient::DescribeSecurityEventsCntCallable(const DescribeSecurityEventsCntRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityEventsCntOutcome>>();
    DescribeSecurityEventsCntAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSecurityEventsCntRequest&,
        DescribeSecurityEventsCntOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeSecurityTrendsOutcome CwpClient::DescribeSecurityTrends(const DescribeSecurityTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityTrendsResponse rsp = DescribeSecurityTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityTrendsOutcome(rsp);
        else
            return DescribeSecurityTrendsOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeSecurityTrendsAsync(const DescribeSecurityTrendsRequest& request, const DescribeSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSecurityTrendsRequest&;
    using Resp = DescribeSecurityTrendsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSecurityTrends", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeSecurityTrendsOutcomeCallable CwpClient::DescribeSecurityTrendsCallable(const DescribeSecurityTrendsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSecurityTrendsOutcome>>();
    DescribeSecurityTrendsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeSecurityTrendsRequest&,
        DescribeSecurityTrendsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeServerRelatedDirInfoOutcome CwpClient::DescribeServerRelatedDirInfo(const DescribeServerRelatedDirInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServerRelatedDirInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServerRelatedDirInfoResponse rsp = DescribeServerRelatedDirInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServerRelatedDirInfoOutcome(rsp);
        else
            return DescribeServerRelatedDirInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeServerRelatedDirInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeServerRelatedDirInfoAsync(const DescribeServerRelatedDirInfoRequest& request, const DescribeServerRelatedDirInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServerRelatedDirInfoRequest&;
    using Resp = DescribeServerRelatedDirInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServerRelatedDirInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeServerRelatedDirInfoOutcomeCallable CwpClient::DescribeServerRelatedDirInfoCallable(const DescribeServerRelatedDirInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServerRelatedDirInfoOutcome>>();
    DescribeServerRelatedDirInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeServerRelatedDirInfoRequest&,
        DescribeServerRelatedDirInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeServersAndRiskAndFirstInfoOutcome CwpClient::DescribeServersAndRiskAndFirstInfo(const DescribeServersAndRiskAndFirstInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServersAndRiskAndFirstInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServersAndRiskAndFirstInfoResponse rsp = DescribeServersAndRiskAndFirstInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServersAndRiskAndFirstInfoOutcome(rsp);
        else
            return DescribeServersAndRiskAndFirstInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeServersAndRiskAndFirstInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeServersAndRiskAndFirstInfoAsync(const DescribeServersAndRiskAndFirstInfoRequest& request, const DescribeServersAndRiskAndFirstInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServersAndRiskAndFirstInfoRequest&;
    using Resp = DescribeServersAndRiskAndFirstInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServersAndRiskAndFirstInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeServersAndRiskAndFirstInfoOutcomeCallable CwpClient::DescribeServersAndRiskAndFirstInfoCallable(const DescribeServersAndRiskAndFirstInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServersAndRiskAndFirstInfoOutcome>>();
    DescribeServersAndRiskAndFirstInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeServersAndRiskAndFirstInfoRequest&,
        DescribeServersAndRiskAndFirstInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeStrategyExistOutcome CwpClient::DescribeStrategyExist(const DescribeStrategyExistRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyExist");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyExistResponse rsp = DescribeStrategyExistResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyExistOutcome(rsp);
        else
            return DescribeStrategyExistOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyExistOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeStrategyExistAsync(const DescribeStrategyExistRequest& request, const DescribeStrategyExistAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStrategyExistRequest&;
    using Resp = DescribeStrategyExistResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStrategyExist", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeStrategyExistOutcomeCallable CwpClient::DescribeStrategyExistCallable(const DescribeStrategyExistRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStrategyExistOutcome>>();
    DescribeStrategyExistAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeStrategyExistRequest&,
        DescribeStrategyExistOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeTagMachinesOutcome CwpClient::DescribeTagMachines(const DescribeTagMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTagMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagMachinesResponse rsp = DescribeTagMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagMachinesOutcome(rsp);
        else
            return DescribeTagMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeTagMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeTagMachinesAsync(const DescribeTagMachinesRequest& request, const DescribeTagMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagMachinesRequest&;
    using Resp = DescribeTagMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTagMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeTagMachinesOutcomeCallable CwpClient::DescribeTagMachinesCallable(const DescribeTagMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagMachinesOutcome>>();
    DescribeTagMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeTagMachinesRequest&,
        DescribeTagMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeTagsOutcome CwpClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagsRequest&;
    using Resp = DescribeTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeTagsOutcomeCallable CwpClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagsOutcome>>();
    DescribeTagsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeTagsRequest&,
        DescribeTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeTrialReportOutcome CwpClient::DescribeTrialReport(const DescribeTrialReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrialReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrialReportResponse rsp = DescribeTrialReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrialReportOutcome(rsp);
        else
            return DescribeTrialReportOutcome(o.GetError());
    }
    else
    {
        return DescribeTrialReportOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeTrialReportAsync(const DescribeTrialReportRequest& request, const DescribeTrialReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTrialReportRequest&;
    using Resp = DescribeTrialReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTrialReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeTrialReportOutcomeCallable CwpClient::DescribeTrialReportCallable(const DescribeTrialReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTrialReportOutcome>>();
    DescribeTrialReportAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeTrialReportRequest&,
        DescribeTrialReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeUndoVulCountsOutcome CwpClient::DescribeUndoVulCounts(const DescribeUndoVulCountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUndoVulCounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUndoVulCountsResponse rsp = DescribeUndoVulCountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUndoVulCountsOutcome(rsp);
        else
            return DescribeUndoVulCountsOutcome(o.GetError());
    }
    else
    {
        return DescribeUndoVulCountsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeUndoVulCountsAsync(const DescribeUndoVulCountsRequest& request, const DescribeUndoVulCountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUndoVulCountsRequest&;
    using Resp = DescribeUndoVulCountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUndoVulCounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeUndoVulCountsOutcomeCallable CwpClient::DescribeUndoVulCountsCallable(const DescribeUndoVulCountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUndoVulCountsOutcome>>();
    DescribeUndoVulCountsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeUndoVulCountsRequest&,
        DescribeUndoVulCountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeUsersConfigOutcome CwpClient::DescribeUsersConfig(const DescribeUsersConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsersConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersConfigResponse rsp = DescribeUsersConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersConfigOutcome(rsp);
        else
            return DescribeUsersConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeUsersConfigAsync(const DescribeUsersConfigRequest& request, const DescribeUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsersConfigRequest&;
    using Resp = DescribeUsersConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsersConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeUsersConfigOutcomeCallable CwpClient::DescribeUsersConfigCallable(const DescribeUsersConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsersConfigOutcome>>();
    DescribeUsersConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeUsersConfigRequest&,
        DescribeUsersConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeUsualLoginPlacesOutcome CwpClient::DescribeUsualLoginPlaces(const DescribeUsualLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsualLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsualLoginPlacesResponse rsp = DescribeUsualLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsualLoginPlacesOutcome(rsp);
        else
            return DescribeUsualLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUsualLoginPlacesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeUsualLoginPlacesAsync(const DescribeUsualLoginPlacesRequest& request, const DescribeUsualLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsualLoginPlacesRequest&;
    using Resp = DescribeUsualLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsualLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeUsualLoginPlacesOutcomeCallable CwpClient::DescribeUsualLoginPlacesCallable(const DescribeUsualLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsualLoginPlacesOutcome>>();
    DescribeUsualLoginPlacesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeUsualLoginPlacesRequest&,
        DescribeUsualLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVdbAndPocInfoOutcome CwpClient::DescribeVdbAndPocInfo(const DescribeVdbAndPocInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVdbAndPocInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVdbAndPocInfoResponse rsp = DescribeVdbAndPocInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVdbAndPocInfoOutcome(rsp);
        else
            return DescribeVdbAndPocInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVdbAndPocInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVdbAndPocInfoAsync(const DescribeVdbAndPocInfoRequest& request, const DescribeVdbAndPocInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVdbAndPocInfoRequest&;
    using Resp = DescribeVdbAndPocInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVdbAndPocInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVdbAndPocInfoOutcomeCallable CwpClient::DescribeVdbAndPocInfoCallable(const DescribeVdbAndPocInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVdbAndPocInfoOutcome>>();
    DescribeVdbAndPocInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVdbAndPocInfoRequest&,
        DescribeVdbAndPocInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVersionCompareChartOutcome CwpClient::DescribeVersionCompareChart(const DescribeVersionCompareChartRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersionCompareChart");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionCompareChartResponse rsp = DescribeVersionCompareChartResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionCompareChartOutcome(rsp);
        else
            return DescribeVersionCompareChartOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionCompareChartOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVersionCompareChartAsync(const DescribeVersionCompareChartRequest& request, const DescribeVersionCompareChartAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVersionCompareChartRequest&;
    using Resp = DescribeVersionCompareChartResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVersionCompareChart", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVersionCompareChartOutcomeCallable CwpClient::DescribeVersionCompareChartCallable(const DescribeVersionCompareChartRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVersionCompareChartOutcome>>();
    DescribeVersionCompareChartAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVersionCompareChartRequest&,
        DescribeVersionCompareChartOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVersionStatisticsOutcome CwpClient::DescribeVersionStatistics(const DescribeVersionStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVersionStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVersionStatisticsResponse rsp = DescribeVersionStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVersionStatisticsOutcome(rsp);
        else
            return DescribeVersionStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeVersionStatisticsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVersionStatisticsAsync(const DescribeVersionStatisticsRequest& request, const DescribeVersionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVersionStatisticsRequest&;
    using Resp = DescribeVersionStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVersionStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVersionStatisticsOutcomeCallable CwpClient::DescribeVersionStatisticsCallable(const DescribeVersionStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVersionStatisticsOutcome>>();
    DescribeVersionStatisticsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVersionStatisticsRequest&,
        DescribeVersionStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVertexDetailOutcome CwpClient::DescribeVertexDetail(const DescribeVertexDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVertexDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVertexDetailResponse rsp = DescribeVertexDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVertexDetailOutcome(rsp);
        else
            return DescribeVertexDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVertexDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVertexDetailAsync(const DescribeVertexDetailRequest& request, const DescribeVertexDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVertexDetailRequest&;
    using Resp = DescribeVertexDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVertexDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVertexDetailOutcomeCallable CwpClient::DescribeVertexDetailCallable(const DescribeVertexDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVertexDetailOutcome>>();
    DescribeVertexDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVertexDetailRequest&,
        DescribeVertexDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulCountByDatesOutcome CwpClient::DescribeVulCountByDates(const DescribeVulCountByDatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulCountByDates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulCountByDatesResponse rsp = DescribeVulCountByDatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulCountByDatesOutcome(rsp);
        else
            return DescribeVulCountByDatesOutcome(o.GetError());
    }
    else
    {
        return DescribeVulCountByDatesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulCountByDatesAsync(const DescribeVulCountByDatesRequest& request, const DescribeVulCountByDatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulCountByDatesRequest&;
    using Resp = DescribeVulCountByDatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulCountByDates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulCountByDatesOutcomeCallable CwpClient::DescribeVulCountByDatesCallable(const DescribeVulCountByDatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulCountByDatesOutcome>>();
    DescribeVulCountByDatesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulCountByDatesRequest&,
        DescribeVulCountByDatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulCveIdInfoOutcome CwpClient::DescribeVulCveIdInfo(const DescribeVulCveIdInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulCveIdInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulCveIdInfoResponse rsp = DescribeVulCveIdInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulCveIdInfoOutcome(rsp);
        else
            return DescribeVulCveIdInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeVulCveIdInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulCveIdInfoAsync(const DescribeVulCveIdInfoRequest& request, const DescribeVulCveIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulCveIdInfoRequest&;
    using Resp = DescribeVulCveIdInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulCveIdInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulCveIdInfoOutcomeCallable CwpClient::DescribeVulCveIdInfoCallable(const DescribeVulCveIdInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulCveIdInfoOutcome>>();
    DescribeVulCveIdInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulCveIdInfoRequest&,
        DescribeVulCveIdInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefenceEventOutcome CwpClient::DescribeVulDefenceEvent(const DescribeVulDefenceEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceEventResponse rsp = DescribeVulDefenceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceEventOutcome(rsp);
        else
            return DescribeVulDefenceEventOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceEventOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceEventAsync(const DescribeVulDefenceEventRequest& request, const DescribeVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceEventRequest&;
    using Resp = DescribeVulDefenceEventResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefenceEventOutcomeCallable CwpClient::DescribeVulDefenceEventCallable(const DescribeVulDefenceEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceEventOutcome>>();
    DescribeVulDefenceEventAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefenceEventRequest&,
        DescribeVulDefenceEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefenceListOutcome CwpClient::DescribeVulDefenceList(const DescribeVulDefenceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceListResponse rsp = DescribeVulDefenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceListOutcome(rsp);
        else
            return DescribeVulDefenceListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceListAsync(const DescribeVulDefenceListRequest& request, const DescribeVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceListRequest&;
    using Resp = DescribeVulDefenceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefenceListOutcomeCallable CwpClient::DescribeVulDefenceListCallable(const DescribeVulDefenceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceListOutcome>>();
    DescribeVulDefenceListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefenceListRequest&,
        DescribeVulDefenceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefenceOverviewOutcome CwpClient::DescribeVulDefenceOverview(const DescribeVulDefenceOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceOverviewResponse rsp = DescribeVulDefenceOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceOverviewOutcome(rsp);
        else
            return DescribeVulDefenceOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceOverviewAsync(const DescribeVulDefenceOverviewRequest& request, const DescribeVulDefenceOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceOverviewRequest&;
    using Resp = DescribeVulDefenceOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefenceOverviewOutcomeCallable CwpClient::DescribeVulDefenceOverviewCallable(const DescribeVulDefenceOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceOverviewOutcome>>();
    DescribeVulDefenceOverviewAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefenceOverviewRequest&,
        DescribeVulDefenceOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefencePluginDetailOutcome CwpClient::DescribeVulDefencePluginDetail(const DescribeVulDefencePluginDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePluginDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginDetailResponse rsp = DescribeVulDefencePluginDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginDetailOutcome(rsp);
        else
            return DescribeVulDefencePluginDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginDetailOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefencePluginDetailAsync(const DescribeVulDefencePluginDetailRequest& request, const DescribeVulDefencePluginDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefencePluginDetailRequest&;
    using Resp = DescribeVulDefencePluginDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefencePluginDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefencePluginDetailOutcomeCallable CwpClient::DescribeVulDefencePluginDetailCallable(const DescribeVulDefencePluginDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefencePluginDetailOutcome>>();
    DescribeVulDefencePluginDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefencePluginDetailRequest&,
        DescribeVulDefencePluginDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefencePluginExceptionCountOutcome CwpClient::DescribeVulDefencePluginExceptionCount(const DescribeVulDefencePluginExceptionCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePluginExceptionCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginExceptionCountResponse rsp = DescribeVulDefencePluginExceptionCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginExceptionCountOutcome(rsp);
        else
            return DescribeVulDefencePluginExceptionCountOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginExceptionCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefencePluginExceptionCountAsync(const DescribeVulDefencePluginExceptionCountRequest& request, const DescribeVulDefencePluginExceptionCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefencePluginExceptionCountRequest&;
    using Resp = DescribeVulDefencePluginExceptionCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefencePluginExceptionCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefencePluginExceptionCountOutcomeCallable CwpClient::DescribeVulDefencePluginExceptionCountCallable(const DescribeVulDefencePluginExceptionCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefencePluginExceptionCountOutcome>>();
    DescribeVulDefencePluginExceptionCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefencePluginExceptionCountRequest&,
        DescribeVulDefencePluginExceptionCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefencePluginStatusOutcome CwpClient::DescribeVulDefencePluginStatus(const DescribeVulDefencePluginStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefencePluginStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefencePluginStatusResponse rsp = DescribeVulDefencePluginStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefencePluginStatusOutcome(rsp);
        else
            return DescribeVulDefencePluginStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefencePluginStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefencePluginStatusAsync(const DescribeVulDefencePluginStatusRequest& request, const DescribeVulDefencePluginStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefencePluginStatusRequest&;
    using Resp = DescribeVulDefencePluginStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefencePluginStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefencePluginStatusOutcomeCallable CwpClient::DescribeVulDefencePluginStatusCallable(const DescribeVulDefencePluginStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefencePluginStatusOutcome>>();
    DescribeVulDefencePluginStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefencePluginStatusRequest&,
        DescribeVulDefencePluginStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulDefenceSettingOutcome CwpClient::DescribeVulDefenceSetting(const DescribeVulDefenceSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDefenceSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDefenceSettingResponse rsp = DescribeVulDefenceSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDefenceSettingOutcome(rsp);
        else
            return DescribeVulDefenceSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDefenceSettingOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulDefenceSettingAsync(const DescribeVulDefenceSettingRequest& request, const DescribeVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDefenceSettingRequest&;
    using Resp = DescribeVulDefenceSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDefenceSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulDefenceSettingOutcomeCallable CwpClient::DescribeVulDefenceSettingCallable(const DescribeVulDefenceSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDefenceSettingOutcome>>();
    DescribeVulDefenceSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulDefenceSettingRequest&,
        DescribeVulDefenceSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulEffectHostListOutcome CwpClient::DescribeVulEffectHostList(const DescribeVulEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulEffectHostListResponse rsp = DescribeVulEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulEffectHostListOutcome(rsp);
        else
            return DescribeVulEffectHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulEffectHostListAsync(const DescribeVulEffectHostListRequest& request, const DescribeVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulEffectHostListRequest&;
    using Resp = DescribeVulEffectHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulEffectHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulEffectHostListOutcomeCallable CwpClient::DescribeVulEffectHostListCallable(const DescribeVulEffectHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulEffectHostListOutcome>>();
    DescribeVulEffectHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulEffectHostListRequest&,
        DescribeVulEffectHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulEffectModulesOutcome CwpClient::DescribeVulEffectModules(const DescribeVulEffectModulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulEffectModules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulEffectModulesResponse rsp = DescribeVulEffectModulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulEffectModulesOutcome(rsp);
        else
            return DescribeVulEffectModulesOutcome(o.GetError());
    }
    else
    {
        return DescribeVulEffectModulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulEffectModulesAsync(const DescribeVulEffectModulesRequest& request, const DescribeVulEffectModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulEffectModulesRequest&;
    using Resp = DescribeVulEffectModulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulEffectModules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulEffectModulesOutcomeCallable CwpClient::DescribeVulEffectModulesCallable(const DescribeVulEffectModulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulEffectModulesOutcome>>();
    DescribeVulEffectModulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulEffectModulesRequest&,
        DescribeVulEffectModulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulEmergentMsgOutcome CwpClient::DescribeVulEmergentMsg(const DescribeVulEmergentMsgRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulEmergentMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulEmergentMsgResponse rsp = DescribeVulEmergentMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulEmergentMsgOutcome(rsp);
        else
            return DescribeVulEmergentMsgOutcome(o.GetError());
    }
    else
    {
        return DescribeVulEmergentMsgOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulEmergentMsgAsync(const DescribeVulEmergentMsgRequest& request, const DescribeVulEmergentMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulEmergentMsgRequest&;
    using Resp = DescribeVulEmergentMsgResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulEmergentMsg", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulEmergentMsgOutcomeCallable CwpClient::DescribeVulEmergentMsgCallable(const DescribeVulEmergentMsgRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulEmergentMsgOutcome>>();
    DescribeVulEmergentMsgAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulEmergentMsgRequest&,
        DescribeVulEmergentMsgOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulFixStatusOutcome CwpClient::DescribeVulFixStatus(const DescribeVulFixStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulFixStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulFixStatusResponse rsp = DescribeVulFixStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulFixStatusOutcome(rsp);
        else
            return DescribeVulFixStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeVulFixStatusOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulFixStatusAsync(const DescribeVulFixStatusRequest& request, const DescribeVulFixStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulFixStatusRequest&;
    using Resp = DescribeVulFixStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulFixStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulFixStatusOutcomeCallable CwpClient::DescribeVulFixStatusCallable(const DescribeVulFixStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulFixStatusOutcome>>();
    DescribeVulFixStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulFixStatusRequest&,
        DescribeVulFixStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulHostCountScanTimeOutcome CwpClient::DescribeVulHostCountScanTime(const DescribeVulHostCountScanTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulHostCountScanTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulHostCountScanTimeResponse rsp = DescribeVulHostCountScanTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulHostCountScanTimeOutcome(rsp);
        else
            return DescribeVulHostCountScanTimeOutcome(o.GetError());
    }
    else
    {
        return DescribeVulHostCountScanTimeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulHostCountScanTimeAsync(const DescribeVulHostCountScanTimeRequest& request, const DescribeVulHostCountScanTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulHostCountScanTimeRequest&;
    using Resp = DescribeVulHostCountScanTimeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulHostCountScanTime", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulHostCountScanTimeOutcomeCallable CwpClient::DescribeVulHostCountScanTimeCallable(const DescribeVulHostCountScanTimeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulHostCountScanTimeOutcome>>();
    DescribeVulHostCountScanTimeAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulHostCountScanTimeRequest&,
        DescribeVulHostCountScanTimeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulHostTopOutcome CwpClient::DescribeVulHostTop(const DescribeVulHostTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulHostTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulHostTopResponse rsp = DescribeVulHostTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulHostTopOutcome(rsp);
        else
            return DescribeVulHostTopOutcome(o.GetError());
    }
    else
    {
        return DescribeVulHostTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulHostTopAsync(const DescribeVulHostTopRequest& request, const DescribeVulHostTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulHostTopRequest&;
    using Resp = DescribeVulHostTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulHostTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulHostTopOutcomeCallable CwpClient::DescribeVulHostTopCallable(const DescribeVulHostTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulHostTopOutcome>>();
    DescribeVulHostTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulHostTopRequest&,
        DescribeVulHostTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulInfoCvssOutcome CwpClient::DescribeVulInfoCvss(const DescribeVulInfoCvssRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulInfoCvss");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulInfoCvssResponse rsp = DescribeVulInfoCvssResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulInfoCvssOutcome(rsp);
        else
            return DescribeVulInfoCvssOutcome(o.GetError());
    }
    else
    {
        return DescribeVulInfoCvssOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulInfoCvssAsync(const DescribeVulInfoCvssRequest& request, const DescribeVulInfoCvssAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulInfoCvssRequest&;
    using Resp = DescribeVulInfoCvssResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulInfoCvss", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulInfoCvssOutcomeCallable CwpClient::DescribeVulInfoCvssCallable(const DescribeVulInfoCvssRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulInfoCvssOutcome>>();
    DescribeVulInfoCvssAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulInfoCvssRequest&,
        DescribeVulInfoCvssOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulLabelsOutcome CwpClient::DescribeVulLabels(const DescribeVulLabelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulLabels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulLabelsResponse rsp = DescribeVulLabelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulLabelsOutcome(rsp);
        else
            return DescribeVulLabelsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulLabelsOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulLabelsAsync(const DescribeVulLabelsRequest& request, const DescribeVulLabelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulLabelsRequest&;
    using Resp = DescribeVulLabelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulLabels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulLabelsOutcomeCallable CwpClient::DescribeVulLabelsCallable(const DescribeVulLabelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulLabelsOutcome>>();
    DescribeVulLabelsAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulLabelsRequest&,
        DescribeVulLabelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulLevelCountOutcome CwpClient::DescribeVulLevelCount(const DescribeVulLevelCountRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulLevelCount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulLevelCountResponse rsp = DescribeVulLevelCountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulLevelCountOutcome(rsp);
        else
            return DescribeVulLevelCountOutcome(o.GetError());
    }
    else
    {
        return DescribeVulLevelCountOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulLevelCountAsync(const DescribeVulLevelCountRequest& request, const DescribeVulLevelCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulLevelCountRequest&;
    using Resp = DescribeVulLevelCountResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulLevelCount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulLevelCountOutcomeCallable CwpClient::DescribeVulLevelCountCallable(const DescribeVulLevelCountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulLevelCountOutcome>>();
    DescribeVulLevelCountAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulLevelCountRequest&,
        DescribeVulLevelCountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulListOutcome CwpClient::DescribeVulList(const DescribeVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulListResponse rsp = DescribeVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulListOutcome(rsp);
        else
            return DescribeVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulListRequest&;
    using Resp = DescribeVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulListOutcomeCallable CwpClient::DescribeVulListCallable(const DescribeVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulListOutcome>>();
    DescribeVulListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulListRequest&,
        DescribeVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulOverviewOutcome CwpClient::DescribeVulOverview(const DescribeVulOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulOverviewResponse rsp = DescribeVulOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulOverviewOutcome(rsp);
        else
            return DescribeVulOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeVulOverviewOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulOverviewAsync(const DescribeVulOverviewRequest& request, const DescribeVulOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulOverviewRequest&;
    using Resp = DescribeVulOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulOverviewOutcomeCallable CwpClient::DescribeVulOverviewCallable(const DescribeVulOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulOverviewOutcome>>();
    DescribeVulOverviewAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulOverviewRequest&,
        DescribeVulOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulStoreListOutcome CwpClient::DescribeVulStoreList(const DescribeVulStoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulStoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulStoreListResponse rsp = DescribeVulStoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulStoreListOutcome(rsp);
        else
            return DescribeVulStoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulStoreListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulStoreListAsync(const DescribeVulStoreListRequest& request, const DescribeVulStoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulStoreListRequest&;
    using Resp = DescribeVulStoreListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulStoreList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulStoreListOutcomeCallable CwpClient::DescribeVulStoreListCallable(const DescribeVulStoreListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulStoreListOutcome>>();
    DescribeVulStoreListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulStoreListRequest&,
        DescribeVulStoreListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulTopOutcome CwpClient::DescribeVulTop(const DescribeVulTopRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulTop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulTopResponse rsp = DescribeVulTopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulTopOutcome(rsp);
        else
            return DescribeVulTopOutcome(o.GetError());
    }
    else
    {
        return DescribeVulTopOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulTopAsync(const DescribeVulTopRequest& request, const DescribeVulTopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulTopRequest&;
    using Resp = DescribeVulTopResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulTop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulTopOutcomeCallable CwpClient::DescribeVulTopCallable(const DescribeVulTopRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulTopOutcome>>();
    DescribeVulTopAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulTopRequest&,
        DescribeVulTopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeVulTrendOutcome CwpClient::DescribeVulTrend(const DescribeVulTrendRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulTrend");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulTrendResponse rsp = DescribeVulTrendResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulTrendOutcome(rsp);
        else
            return DescribeVulTrendOutcome(o.GetError());
    }
    else
    {
        return DescribeVulTrendOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeVulTrendAsync(const DescribeVulTrendRequest& request, const DescribeVulTrendAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulTrendRequest&;
    using Resp = DescribeVulTrendResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulTrend", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeVulTrendOutcomeCallable CwpClient::DescribeVulTrendCallable(const DescribeVulTrendRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulTrendOutcome>>();
    DescribeVulTrendAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeVulTrendRequest&,
        DescribeVulTrendOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWarningHostConfigOutcome CwpClient::DescribeWarningHostConfig(const DescribeWarningHostConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarningHostConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningHostConfigResponse rsp = DescribeWarningHostConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningHostConfigOutcome(rsp);
        else
            return DescribeWarningHostConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningHostConfigOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWarningHostConfigAsync(const DescribeWarningHostConfigRequest& request, const DescribeWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWarningHostConfigRequest&;
    using Resp = DescribeWarningHostConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWarningHostConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWarningHostConfigOutcomeCallable CwpClient::DescribeWarningHostConfigCallable(const DescribeWarningHostConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWarningHostConfigOutcome>>();
    DescribeWarningHostConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWarningHostConfigRequest&,
        DescribeWarningHostConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWarningListOutcome CwpClient::DescribeWarningList(const DescribeWarningListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWarningList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWarningListResponse rsp = DescribeWarningListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWarningListOutcome(rsp);
        else
            return DescribeWarningListOutcome(o.GetError());
    }
    else
    {
        return DescribeWarningListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWarningListAsync(const DescribeWarningListRequest& request, const DescribeWarningListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWarningListRequest&;
    using Resp = DescribeWarningListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWarningList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWarningListOutcomeCallable CwpClient::DescribeWarningListCallable(const DescribeWarningListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWarningListOutcome>>();
    DescribeWarningListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWarningListRequest&,
        DescribeWarningListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebHookPolicyOutcome CwpClient::DescribeWebHookPolicy(const DescribeWebHookPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookPolicyResponse rsp = DescribeWebHookPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookPolicyOutcome(rsp);
        else
            return DescribeWebHookPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookPolicyAsync(const DescribeWebHookPolicyRequest& request, const DescribeWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebHookPolicyRequest&;
    using Resp = DescribeWebHookPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebHookPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebHookPolicyOutcomeCallable CwpClient::DescribeWebHookPolicyCallable(const DescribeWebHookPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebHookPolicyOutcome>>();
    DescribeWebHookPolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebHookPolicyRequest&,
        DescribeWebHookPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebHookReceiverOutcome CwpClient::DescribeWebHookReceiver(const DescribeWebHookReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookReceiverResponse rsp = DescribeWebHookReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookReceiverOutcome(rsp);
        else
            return DescribeWebHookReceiverOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookReceiverOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookReceiverAsync(const DescribeWebHookReceiverRequest& request, const DescribeWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebHookReceiverRequest&;
    using Resp = DescribeWebHookReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebHookReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebHookReceiverOutcomeCallable CwpClient::DescribeWebHookReceiverCallable(const DescribeWebHookReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebHookReceiverOutcome>>();
    DescribeWebHookReceiverAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebHookReceiverRequest&,
        DescribeWebHookReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebHookReceiverUsageOutcome CwpClient::DescribeWebHookReceiverUsage(const DescribeWebHookReceiverUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookReceiverUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookReceiverUsageResponse rsp = DescribeWebHookReceiverUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookReceiverUsageOutcome(rsp);
        else
            return DescribeWebHookReceiverUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookReceiverUsageOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookReceiverUsageAsync(const DescribeWebHookReceiverUsageRequest& request, const DescribeWebHookReceiverUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebHookReceiverUsageRequest&;
    using Resp = DescribeWebHookReceiverUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebHookReceiverUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebHookReceiverUsageOutcomeCallable CwpClient::DescribeWebHookReceiverUsageCallable(const DescribeWebHookReceiverUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebHookReceiverUsageOutcome>>();
    DescribeWebHookReceiverUsageAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebHookReceiverUsageRequest&,
        DescribeWebHookReceiverUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebHookRuleOutcome CwpClient::DescribeWebHookRule(const DescribeWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookRuleResponse rsp = DescribeWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookRuleOutcome(rsp);
        else
            return DescribeWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookRuleAsync(const DescribeWebHookRuleRequest& request, const DescribeWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebHookRuleRequest&;
    using Resp = DescribeWebHookRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebHookRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebHookRuleOutcomeCallable CwpClient::DescribeWebHookRuleCallable(const DescribeWebHookRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebHookRuleOutcome>>();
    DescribeWebHookRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebHookRuleRequest&,
        DescribeWebHookRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebHookRulesOutcome CwpClient::DescribeWebHookRules(const DescribeWebHookRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebHookRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebHookRulesResponse rsp = DescribeWebHookRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebHookRulesOutcome(rsp);
        else
            return DescribeWebHookRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeWebHookRulesOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebHookRulesAsync(const DescribeWebHookRulesRequest& request, const DescribeWebHookRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebHookRulesRequest&;
    using Resp = DescribeWebHookRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebHookRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebHookRulesOutcomeCallable CwpClient::DescribeWebHookRulesCallable(const DescribeWebHookRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebHookRulesOutcome>>();
    DescribeWebHookRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebHookRulesRequest&,
        DescribeWebHookRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebPageEventListOutcome CwpClient::DescribeWebPageEventList(const DescribeWebPageEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageEventListResponse rsp = DescribeWebPageEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageEventListOutcome(rsp);
        else
            return DescribeWebPageEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageEventListOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageEventListAsync(const DescribeWebPageEventListRequest& request, const DescribeWebPageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebPageEventListRequest&;
    using Resp = DescribeWebPageEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebPageEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebPageEventListOutcomeCallable CwpClient::DescribeWebPageEventListCallable(const DescribeWebPageEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebPageEventListOutcome>>();
    DescribeWebPageEventListAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebPageEventListRequest&,
        DescribeWebPageEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebPageGeneralizeOutcome CwpClient::DescribeWebPageGeneralize(const DescribeWebPageGeneralizeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageGeneralize");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageGeneralizeResponse rsp = DescribeWebPageGeneralizeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageGeneralizeOutcome(rsp);
        else
            return DescribeWebPageGeneralizeOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageGeneralizeOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageGeneralizeAsync(const DescribeWebPageGeneralizeRequest& request, const DescribeWebPageGeneralizeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebPageGeneralizeRequest&;
    using Resp = DescribeWebPageGeneralizeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebPageGeneralize", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebPageGeneralizeOutcomeCallable CwpClient::DescribeWebPageGeneralizeCallable(const DescribeWebPageGeneralizeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebPageGeneralizeOutcome>>();
    DescribeWebPageGeneralizeAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebPageGeneralizeRequest&,
        DescribeWebPageGeneralizeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebPageProtectStatOutcome CwpClient::DescribeWebPageProtectStat(const DescribeWebPageProtectStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageProtectStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageProtectStatResponse rsp = DescribeWebPageProtectStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageProtectStatOutcome(rsp);
        else
            return DescribeWebPageProtectStatOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageProtectStatOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageProtectStatAsync(const DescribeWebPageProtectStatRequest& request, const DescribeWebPageProtectStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebPageProtectStatRequest&;
    using Resp = DescribeWebPageProtectStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebPageProtectStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebPageProtectStatOutcomeCallable CwpClient::DescribeWebPageProtectStatCallable(const DescribeWebPageProtectStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebPageProtectStatOutcome>>();
    DescribeWebPageProtectStatAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebPageProtectStatRequest&,
        DescribeWebPageProtectStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DescribeWebPageServiceInfoOutcome CwpClient::DescribeWebPageServiceInfo(const DescribeWebPageServiceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWebPageServiceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWebPageServiceInfoResponse rsp = DescribeWebPageServiceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWebPageServiceInfoOutcome(rsp);
        else
            return DescribeWebPageServiceInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeWebPageServiceInfoOutcome(outcome.GetError());
    }
}

void CwpClient::DescribeWebPageServiceInfoAsync(const DescribeWebPageServiceInfoRequest& request, const DescribeWebPageServiceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWebPageServiceInfoRequest&;
    using Resp = DescribeWebPageServiceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWebPageServiceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DescribeWebPageServiceInfoOutcomeCallable CwpClient::DescribeWebPageServiceInfoCallable(const DescribeWebPageServiceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWebPageServiceInfoOutcome>>();
    DescribeWebPageServiceInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const DescribeWebPageServiceInfoRequest&,
        DescribeWebPageServiceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::DestroyOrderOutcome CwpClient::DestroyOrder(const DestroyOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyOrderResponse rsp = DestroyOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyOrderOutcome(rsp);
        else
            return DestroyOrderOutcome(o.GetError());
    }
    else
    {
        return DestroyOrderOutcome(outcome.GetError());
    }
}

void CwpClient::DestroyOrderAsync(const DestroyOrderRequest& request, const DestroyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyOrderRequest&;
    using Resp = DestroyOrderResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::DestroyOrderOutcomeCallable CwpClient::DestroyOrderCallable(const DestroyOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyOrderOutcome>>();
    DestroyOrderAsync(
    request,
    [prom](
        const CwpClient*,
        const DestroyOrderRequest&,
        DestroyOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::EditBashRulesOutcome CwpClient::EditBashRules(const EditBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "EditBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditBashRulesResponse rsp = EditBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditBashRulesOutcome(rsp);
        else
            return EditBashRulesOutcome(o.GetError());
    }
    else
    {
        return EditBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::EditBashRulesAsync(const EditBashRulesRequest& request, const EditBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditBashRulesRequest&;
    using Resp = EditBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "EditBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::EditBashRulesOutcomeCallable CwpClient::EditBashRulesCallable(const EditBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditBashRulesOutcome>>();
    EditBashRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const EditBashRulesRequest&,
        EditBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::EditPrivilegeRulesOutcome CwpClient::EditPrivilegeRules(const EditPrivilegeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "EditPrivilegeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditPrivilegeRulesResponse rsp = EditPrivilegeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditPrivilegeRulesOutcome(rsp);
        else
            return EditPrivilegeRulesOutcome(o.GetError());
    }
    else
    {
        return EditPrivilegeRulesOutcome(outcome.GetError());
    }
}

void CwpClient::EditPrivilegeRulesAsync(const EditPrivilegeRulesRequest& request, const EditPrivilegeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditPrivilegeRulesRequest&;
    using Resp = EditPrivilegeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "EditPrivilegeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::EditPrivilegeRulesOutcomeCallable CwpClient::EditPrivilegeRulesCallable(const EditPrivilegeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditPrivilegeRulesOutcome>>();
    EditPrivilegeRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const EditPrivilegeRulesRequest&,
        EditPrivilegeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::EditReverseShellRulesOutcome CwpClient::EditReverseShellRules(const EditReverseShellRulesRequest &request)
{
    auto outcome = MakeRequest(request, "EditReverseShellRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditReverseShellRulesResponse rsp = EditReverseShellRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditReverseShellRulesOutcome(rsp);
        else
            return EditReverseShellRulesOutcome(o.GetError());
    }
    else
    {
        return EditReverseShellRulesOutcome(outcome.GetError());
    }
}

void CwpClient::EditReverseShellRulesAsync(const EditReverseShellRulesRequest& request, const EditReverseShellRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditReverseShellRulesRequest&;
    using Resp = EditReverseShellRulesResponse;

    DoRequestAsync<Req, Resp>(
        "EditReverseShellRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::EditReverseShellRulesOutcomeCallable CwpClient::EditReverseShellRulesCallable(const EditReverseShellRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditReverseShellRulesOutcome>>();
    EditReverseShellRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const EditReverseShellRulesRequest&,
        EditReverseShellRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::EditTagsOutcome CwpClient::EditTags(const EditTagsRequest &request)
{
    auto outcome = MakeRequest(request, "EditTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EditTagsResponse rsp = EditTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EditTagsOutcome(rsp);
        else
            return EditTagsOutcome(o.GetError());
    }
    else
    {
        return EditTagsOutcome(outcome.GetError());
    }
}

void CwpClient::EditTagsAsync(const EditTagsRequest& request, const EditTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EditTagsRequest&;
    using Resp = EditTagsResponse;

    DoRequestAsync<Req, Resp>(
        "EditTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::EditTagsOutcomeCallable CwpClient::EditTagsCallable(const EditTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<EditTagsOutcome>>();
    EditTagsAsync(
    request,
    [prom](
        const CwpClient*,
        const EditTagsRequest&,
        EditTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetAppListOutcome CwpClient::ExportAssetAppList(const ExportAssetAppListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetAppListResponse rsp = ExportAssetAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetAppListOutcome(rsp);
        else
            return ExportAssetAppListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetAppListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetAppListAsync(const ExportAssetAppListRequest& request, const ExportAssetAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetAppListRequest&;
    using Resp = ExportAssetAppListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetAppList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetAppListOutcomeCallable CwpClient::ExportAssetAppListCallable(const ExportAssetAppListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetAppListOutcome>>();
    ExportAssetAppListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetAppListRequest&,
        ExportAssetAppListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetCoreModuleListOutcome CwpClient::ExportAssetCoreModuleList(const ExportAssetCoreModuleListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetCoreModuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetCoreModuleListResponse rsp = ExportAssetCoreModuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetCoreModuleListOutcome(rsp);
        else
            return ExportAssetCoreModuleListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetCoreModuleListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetCoreModuleListAsync(const ExportAssetCoreModuleListRequest& request, const ExportAssetCoreModuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetCoreModuleListRequest&;
    using Resp = ExportAssetCoreModuleListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetCoreModuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetCoreModuleListOutcomeCallable CwpClient::ExportAssetCoreModuleListCallable(const ExportAssetCoreModuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetCoreModuleListOutcome>>();
    ExportAssetCoreModuleListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetCoreModuleListRequest&,
        ExportAssetCoreModuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetDatabaseListOutcome CwpClient::ExportAssetDatabaseList(const ExportAssetDatabaseListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetDatabaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetDatabaseListResponse rsp = ExportAssetDatabaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetDatabaseListOutcome(rsp);
        else
            return ExportAssetDatabaseListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetDatabaseListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetDatabaseListAsync(const ExportAssetDatabaseListRequest& request, const ExportAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetDatabaseListRequest&;
    using Resp = ExportAssetDatabaseListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetDatabaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetDatabaseListOutcomeCallable CwpClient::ExportAssetDatabaseListCallable(const ExportAssetDatabaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetDatabaseListOutcome>>();
    ExportAssetDatabaseListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetDatabaseListRequest&,
        ExportAssetDatabaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetEnvListOutcome CwpClient::ExportAssetEnvList(const ExportAssetEnvListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetEnvList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetEnvListResponse rsp = ExportAssetEnvListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetEnvListOutcome(rsp);
        else
            return ExportAssetEnvListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetEnvListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetEnvListAsync(const ExportAssetEnvListRequest& request, const ExportAssetEnvListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetEnvListRequest&;
    using Resp = ExportAssetEnvListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetEnvList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetEnvListOutcomeCallable CwpClient::ExportAssetEnvListCallable(const ExportAssetEnvListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetEnvListOutcome>>();
    ExportAssetEnvListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetEnvListRequest&,
        ExportAssetEnvListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetInitServiceListOutcome CwpClient::ExportAssetInitServiceList(const ExportAssetInitServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetInitServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetInitServiceListResponse rsp = ExportAssetInitServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetInitServiceListOutcome(rsp);
        else
            return ExportAssetInitServiceListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetInitServiceListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetInitServiceListAsync(const ExportAssetInitServiceListRequest& request, const ExportAssetInitServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetInitServiceListRequest&;
    using Resp = ExportAssetInitServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetInitServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetInitServiceListOutcomeCallable CwpClient::ExportAssetInitServiceListCallable(const ExportAssetInitServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetInitServiceListOutcome>>();
    ExportAssetInitServiceListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetInitServiceListRequest&,
        ExportAssetInitServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetJarListOutcome CwpClient::ExportAssetJarList(const ExportAssetJarListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetJarList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetJarListResponse rsp = ExportAssetJarListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetJarListOutcome(rsp);
        else
            return ExportAssetJarListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetJarListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetJarListAsync(const ExportAssetJarListRequest& request, const ExportAssetJarListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetJarListRequest&;
    using Resp = ExportAssetJarListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetJarList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetJarListOutcomeCallable CwpClient::ExportAssetJarListCallable(const ExportAssetJarListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetJarListOutcome>>();
    ExportAssetJarListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetJarListRequest&,
        ExportAssetJarListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetMachineDetailOutcome CwpClient::ExportAssetMachineDetail(const ExportAssetMachineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetMachineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetMachineDetailResponse rsp = ExportAssetMachineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetMachineDetailOutcome(rsp);
        else
            return ExportAssetMachineDetailOutcome(o.GetError());
    }
    else
    {
        return ExportAssetMachineDetailOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetMachineDetailAsync(const ExportAssetMachineDetailRequest& request, const ExportAssetMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetMachineDetailRequest&;
    using Resp = ExportAssetMachineDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetMachineDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetMachineDetailOutcomeCallable CwpClient::ExportAssetMachineDetailCallable(const ExportAssetMachineDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetMachineDetailOutcome>>();
    ExportAssetMachineDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetMachineDetailRequest&,
        ExportAssetMachineDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetMachineListOutcome CwpClient::ExportAssetMachineList(const ExportAssetMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetMachineListResponse rsp = ExportAssetMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetMachineListOutcome(rsp);
        else
            return ExportAssetMachineListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetMachineListAsync(const ExportAssetMachineListRequest& request, const ExportAssetMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetMachineListRequest&;
    using Resp = ExportAssetMachineListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetMachineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetMachineListOutcomeCallable CwpClient::ExportAssetMachineListCallable(const ExportAssetMachineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetMachineListOutcome>>();
    ExportAssetMachineListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetMachineListRequest&,
        ExportAssetMachineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetPlanTaskListOutcome CwpClient::ExportAssetPlanTaskList(const ExportAssetPlanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetPlanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetPlanTaskListResponse rsp = ExportAssetPlanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetPlanTaskListOutcome(rsp);
        else
            return ExportAssetPlanTaskListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetPlanTaskListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetPlanTaskListAsync(const ExportAssetPlanTaskListRequest& request, const ExportAssetPlanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetPlanTaskListRequest&;
    using Resp = ExportAssetPlanTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetPlanTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetPlanTaskListOutcomeCallable CwpClient::ExportAssetPlanTaskListCallable(const ExportAssetPlanTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetPlanTaskListOutcome>>();
    ExportAssetPlanTaskListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetPlanTaskListRequest&,
        ExportAssetPlanTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetPortInfoListOutcome CwpClient::ExportAssetPortInfoList(const ExportAssetPortInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetPortInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetPortInfoListResponse rsp = ExportAssetPortInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetPortInfoListOutcome(rsp);
        else
            return ExportAssetPortInfoListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetPortInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetPortInfoListAsync(const ExportAssetPortInfoListRequest& request, const ExportAssetPortInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetPortInfoListRequest&;
    using Resp = ExportAssetPortInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetPortInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetPortInfoListOutcomeCallable CwpClient::ExportAssetPortInfoListCallable(const ExportAssetPortInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetPortInfoListOutcome>>();
    ExportAssetPortInfoListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetPortInfoListRequest&,
        ExportAssetPortInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetProcessInfoListOutcome CwpClient::ExportAssetProcessInfoList(const ExportAssetProcessInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetProcessInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetProcessInfoListResponse rsp = ExportAssetProcessInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetProcessInfoListOutcome(rsp);
        else
            return ExportAssetProcessInfoListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetProcessInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetProcessInfoListAsync(const ExportAssetProcessInfoListRequest& request, const ExportAssetProcessInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetProcessInfoListRequest&;
    using Resp = ExportAssetProcessInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetProcessInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetProcessInfoListOutcomeCallable CwpClient::ExportAssetProcessInfoListCallable(const ExportAssetProcessInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetProcessInfoListOutcome>>();
    ExportAssetProcessInfoListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetProcessInfoListRequest&,
        ExportAssetProcessInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetRecentMachineInfoOutcome CwpClient::ExportAssetRecentMachineInfo(const ExportAssetRecentMachineInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetRecentMachineInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetRecentMachineInfoResponse rsp = ExportAssetRecentMachineInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetRecentMachineInfoOutcome(rsp);
        else
            return ExportAssetRecentMachineInfoOutcome(o.GetError());
    }
    else
    {
        return ExportAssetRecentMachineInfoOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetRecentMachineInfoAsync(const ExportAssetRecentMachineInfoRequest& request, const ExportAssetRecentMachineInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetRecentMachineInfoRequest&;
    using Resp = ExportAssetRecentMachineInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetRecentMachineInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetRecentMachineInfoOutcomeCallable CwpClient::ExportAssetRecentMachineInfoCallable(const ExportAssetRecentMachineInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetRecentMachineInfoOutcome>>();
    ExportAssetRecentMachineInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetRecentMachineInfoRequest&,
        ExportAssetRecentMachineInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetSystemPackageListOutcome CwpClient::ExportAssetSystemPackageList(const ExportAssetSystemPackageListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetSystemPackageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetSystemPackageListResponse rsp = ExportAssetSystemPackageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetSystemPackageListOutcome(rsp);
        else
            return ExportAssetSystemPackageListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetSystemPackageListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetSystemPackageListAsync(const ExportAssetSystemPackageListRequest& request, const ExportAssetSystemPackageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetSystemPackageListRequest&;
    using Resp = ExportAssetSystemPackageListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetSystemPackageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetSystemPackageListOutcomeCallable CwpClient::ExportAssetSystemPackageListCallable(const ExportAssetSystemPackageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetSystemPackageListOutcome>>();
    ExportAssetSystemPackageListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetSystemPackageListRequest&,
        ExportAssetSystemPackageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetUserListOutcome CwpClient::ExportAssetUserList(const ExportAssetUserListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetUserListResponse rsp = ExportAssetUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetUserListOutcome(rsp);
        else
            return ExportAssetUserListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetUserListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetUserListAsync(const ExportAssetUserListRequest& request, const ExportAssetUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetUserListRequest&;
    using Resp = ExportAssetUserListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetUserListOutcomeCallable CwpClient::ExportAssetUserListCallable(const ExportAssetUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetUserListOutcome>>();
    ExportAssetUserListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetUserListRequest&,
        ExportAssetUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetWebAppListOutcome CwpClient::ExportAssetWebAppList(const ExportAssetWebAppListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebAppList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebAppListResponse rsp = ExportAssetWebAppListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebAppListOutcome(rsp);
        else
            return ExportAssetWebAppListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebAppListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebAppListAsync(const ExportAssetWebAppListRequest& request, const ExportAssetWebAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetWebAppListRequest&;
    using Resp = ExportAssetWebAppListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetWebAppList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetWebAppListOutcomeCallable CwpClient::ExportAssetWebAppListCallable(const ExportAssetWebAppListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetWebAppListOutcome>>();
    ExportAssetWebAppListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetWebAppListRequest&,
        ExportAssetWebAppListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetWebFrameListOutcome CwpClient::ExportAssetWebFrameList(const ExportAssetWebFrameListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebFrameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebFrameListResponse rsp = ExportAssetWebFrameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebFrameListOutcome(rsp);
        else
            return ExportAssetWebFrameListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebFrameListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebFrameListAsync(const ExportAssetWebFrameListRequest& request, const ExportAssetWebFrameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetWebFrameListRequest&;
    using Resp = ExportAssetWebFrameListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetWebFrameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetWebFrameListOutcomeCallable CwpClient::ExportAssetWebFrameListCallable(const ExportAssetWebFrameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetWebFrameListOutcome>>();
    ExportAssetWebFrameListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetWebFrameListRequest&,
        ExportAssetWebFrameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetWebLocationListOutcome CwpClient::ExportAssetWebLocationList(const ExportAssetWebLocationListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebLocationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebLocationListResponse rsp = ExportAssetWebLocationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebLocationListOutcome(rsp);
        else
            return ExportAssetWebLocationListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebLocationListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebLocationListAsync(const ExportAssetWebLocationListRequest& request, const ExportAssetWebLocationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetWebLocationListRequest&;
    using Resp = ExportAssetWebLocationListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetWebLocationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetWebLocationListOutcomeCallable CwpClient::ExportAssetWebLocationListCallable(const ExportAssetWebLocationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetWebLocationListOutcome>>();
    ExportAssetWebLocationListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetWebLocationListRequest&,
        ExportAssetWebLocationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAssetWebServiceInfoListOutcome CwpClient::ExportAssetWebServiceInfoList(const ExportAssetWebServiceInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAssetWebServiceInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAssetWebServiceInfoListResponse rsp = ExportAssetWebServiceInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAssetWebServiceInfoListOutcome(rsp);
        else
            return ExportAssetWebServiceInfoListOutcome(o.GetError());
    }
    else
    {
        return ExportAssetWebServiceInfoListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAssetWebServiceInfoListAsync(const ExportAssetWebServiceInfoListRequest& request, const ExportAssetWebServiceInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAssetWebServiceInfoListRequest&;
    using Resp = ExportAssetWebServiceInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAssetWebServiceInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAssetWebServiceInfoListOutcomeCallable CwpClient::ExportAssetWebServiceInfoListCallable(const ExportAssetWebServiceInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAssetWebServiceInfoListOutcome>>();
    ExportAssetWebServiceInfoListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAssetWebServiceInfoListRequest&,
        ExportAssetWebServiceInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportAttackEventsOutcome CwpClient::ExportAttackEvents(const ExportAttackEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportAttackEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportAttackEventsResponse rsp = ExportAttackEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportAttackEventsOutcome(rsp);
        else
            return ExportAttackEventsOutcome(o.GetError());
    }
    else
    {
        return ExportAttackEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportAttackEventsAsync(const ExportAttackEventsRequest& request, const ExportAttackEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportAttackEventsRequest&;
    using Resp = ExportAttackEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportAttackEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportAttackEventsOutcomeCallable CwpClient::ExportAttackEventsCallable(const ExportAttackEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportAttackEventsOutcome>>();
    ExportAttackEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportAttackEventsRequest&,
        ExportAttackEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineEffectHostListOutcome CwpClient::ExportBaselineEffectHostList(const ExportBaselineEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineEffectHostListResponse rsp = ExportBaselineEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineEffectHostListOutcome(rsp);
        else
            return ExportBaselineEffectHostListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineEffectHostListAsync(const ExportBaselineEffectHostListRequest& request, const ExportBaselineEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineEffectHostListRequest&;
    using Resp = ExportBaselineEffectHostListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineEffectHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineEffectHostListOutcomeCallable CwpClient::ExportBaselineEffectHostListCallable(const ExportBaselineEffectHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineEffectHostListOutcome>>();
    ExportBaselineEffectHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineEffectHostListRequest&,
        ExportBaselineEffectHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineFixListOutcome CwpClient::ExportBaselineFixList(const ExportBaselineFixListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineFixList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineFixListResponse rsp = ExportBaselineFixListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineFixListOutcome(rsp);
        else
            return ExportBaselineFixListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineFixListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineFixListAsync(const ExportBaselineFixListRequest& request, const ExportBaselineFixListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineFixListRequest&;
    using Resp = ExportBaselineFixListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineFixList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineFixListOutcomeCallable CwpClient::ExportBaselineFixListCallable(const ExportBaselineFixListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineFixListOutcome>>();
    ExportBaselineFixListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineFixListRequest&,
        ExportBaselineFixListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineHostDetectListOutcome CwpClient::ExportBaselineHostDetectList(const ExportBaselineHostDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineHostDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineHostDetectListResponse rsp = ExportBaselineHostDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineHostDetectListOutcome(rsp);
        else
            return ExportBaselineHostDetectListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineHostDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineHostDetectListAsync(const ExportBaselineHostDetectListRequest& request, const ExportBaselineHostDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineHostDetectListRequest&;
    using Resp = ExportBaselineHostDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineHostDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineHostDetectListOutcomeCallable CwpClient::ExportBaselineHostDetectListCallable(const ExportBaselineHostDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineHostDetectListOutcome>>();
    ExportBaselineHostDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineHostDetectListRequest&,
        ExportBaselineHostDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineItemDetectListOutcome CwpClient::ExportBaselineItemDetectList(const ExportBaselineItemDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineItemDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineItemDetectListResponse rsp = ExportBaselineItemDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineItemDetectListOutcome(rsp);
        else
            return ExportBaselineItemDetectListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineItemDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineItemDetectListAsync(const ExportBaselineItemDetectListRequest& request, const ExportBaselineItemDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineItemDetectListRequest&;
    using Resp = ExportBaselineItemDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineItemDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineItemDetectListOutcomeCallable CwpClient::ExportBaselineItemDetectListCallable(const ExportBaselineItemDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineItemDetectListOutcome>>();
    ExportBaselineItemDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineItemDetectListRequest&,
        ExportBaselineItemDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineItemListOutcome CwpClient::ExportBaselineItemList(const ExportBaselineItemListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineItemListResponse rsp = ExportBaselineItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineItemListOutcome(rsp);
        else
            return ExportBaselineItemListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineItemListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineItemListAsync(const ExportBaselineItemListRequest& request, const ExportBaselineItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineItemListRequest&;
    using Resp = ExportBaselineItemListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineItemListOutcomeCallable CwpClient::ExportBaselineItemListCallable(const ExportBaselineItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineItemListOutcome>>();
    ExportBaselineItemListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineItemListRequest&,
        ExportBaselineItemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineListOutcome CwpClient::ExportBaselineList(const ExportBaselineListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineListResponse rsp = ExportBaselineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineListOutcome(rsp);
        else
            return ExportBaselineListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineListAsync(const ExportBaselineListRequest& request, const ExportBaselineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineListRequest&;
    using Resp = ExportBaselineListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineListOutcomeCallable CwpClient::ExportBaselineListCallable(const ExportBaselineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineListOutcome>>();
    ExportBaselineListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineListRequest&,
        ExportBaselineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineRuleDetectListOutcome CwpClient::ExportBaselineRuleDetectList(const ExportBaselineRuleDetectListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineRuleDetectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineRuleDetectListResponse rsp = ExportBaselineRuleDetectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineRuleDetectListOutcome(rsp);
        else
            return ExportBaselineRuleDetectListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineRuleDetectListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineRuleDetectListAsync(const ExportBaselineRuleDetectListRequest& request, const ExportBaselineRuleDetectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineRuleDetectListRequest&;
    using Resp = ExportBaselineRuleDetectListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineRuleDetectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineRuleDetectListOutcomeCallable CwpClient::ExportBaselineRuleDetectListCallable(const ExportBaselineRuleDetectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineRuleDetectListOutcome>>();
    ExportBaselineRuleDetectListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineRuleDetectListRequest&,
        ExportBaselineRuleDetectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBaselineWeakPasswordListOutcome CwpClient::ExportBaselineWeakPasswordList(const ExportBaselineWeakPasswordListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBaselineWeakPasswordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBaselineWeakPasswordListResponse rsp = ExportBaselineWeakPasswordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBaselineWeakPasswordListOutcome(rsp);
        else
            return ExportBaselineWeakPasswordListOutcome(o.GetError());
    }
    else
    {
        return ExportBaselineWeakPasswordListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBaselineWeakPasswordListAsync(const ExportBaselineWeakPasswordListRequest& request, const ExportBaselineWeakPasswordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBaselineWeakPasswordListRequest&;
    using Resp = ExportBaselineWeakPasswordListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBaselineWeakPasswordList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBaselineWeakPasswordListOutcomeCallable CwpClient::ExportBaselineWeakPasswordListCallable(const ExportBaselineWeakPasswordListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBaselineWeakPasswordListOutcome>>();
    ExportBaselineWeakPasswordListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBaselineWeakPasswordListRequest&,
        ExportBaselineWeakPasswordListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBashEventsOutcome CwpClient::ExportBashEvents(const ExportBashEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashEventsResponse rsp = ExportBashEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashEventsOutcome(rsp);
        else
            return ExportBashEventsOutcome(o.GetError());
    }
    else
    {
        return ExportBashEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBashEventsAsync(const ExportBashEventsRequest& request, const ExportBashEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBashEventsRequest&;
    using Resp = ExportBashEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBashEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBashEventsOutcomeCallable CwpClient::ExportBashEventsCallable(const ExportBashEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBashEventsOutcome>>();
    ExportBashEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBashEventsRequest&,
        ExportBashEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBashEventsNewOutcome CwpClient::ExportBashEventsNew(const ExportBashEventsNewRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashEventsNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashEventsNewResponse rsp = ExportBashEventsNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashEventsNewOutcome(rsp);
        else
            return ExportBashEventsNewOutcome(o.GetError());
    }
    else
    {
        return ExportBashEventsNewOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBashEventsNewAsync(const ExportBashEventsNewRequest& request, const ExportBashEventsNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBashEventsNewRequest&;
    using Resp = ExportBashEventsNewResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBashEventsNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBashEventsNewOutcomeCallable CwpClient::ExportBashEventsNewCallable(const ExportBashEventsNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBashEventsNewOutcome>>();
    ExportBashEventsNewAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBashEventsNewRequest&,
        ExportBashEventsNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBashPoliciesOutcome CwpClient::ExportBashPolicies(const ExportBashPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBashPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBashPoliciesResponse rsp = ExportBashPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBashPoliciesOutcome(rsp);
        else
            return ExportBashPoliciesOutcome(o.GetError());
    }
    else
    {
        return ExportBashPoliciesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBashPoliciesAsync(const ExportBashPoliciesRequest& request, const ExportBashPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBashPoliciesRequest&;
    using Resp = ExportBashPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBashPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBashPoliciesOutcomeCallable CwpClient::ExportBashPoliciesCallable(const ExportBashPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBashPoliciesOutcome>>();
    ExportBashPoliciesAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBashPoliciesRequest&,
        ExportBashPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportBruteAttacksOutcome CwpClient::ExportBruteAttacks(const ExportBruteAttacksRequest &request)
{
    auto outcome = MakeRequest(request, "ExportBruteAttacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportBruteAttacksResponse rsp = ExportBruteAttacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportBruteAttacksOutcome(rsp);
        else
            return ExportBruteAttacksOutcome(o.GetError());
    }
    else
    {
        return ExportBruteAttacksOutcome(outcome.GetError());
    }
}

void CwpClient::ExportBruteAttacksAsync(const ExportBruteAttacksRequest& request, const ExportBruteAttacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportBruteAttacksRequest&;
    using Resp = ExportBruteAttacksResponse;

    DoRequestAsync<Req, Resp>(
        "ExportBruteAttacks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportBruteAttacksOutcomeCallable CwpClient::ExportBruteAttacksCallable(const ExportBruteAttacksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportBruteAttacksOutcome>>();
    ExportBruteAttacksAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportBruteAttacksRequest&,
        ExportBruteAttacksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportFileTamperEventsOutcome CwpClient::ExportFileTamperEvents(const ExportFileTamperEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportFileTamperEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportFileTamperEventsResponse rsp = ExportFileTamperEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportFileTamperEventsOutcome(rsp);
        else
            return ExportFileTamperEventsOutcome(o.GetError());
    }
    else
    {
        return ExportFileTamperEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportFileTamperEventsAsync(const ExportFileTamperEventsRequest& request, const ExportFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportFileTamperEventsRequest&;
    using Resp = ExportFileTamperEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportFileTamperEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportFileTamperEventsOutcomeCallable CwpClient::ExportFileTamperEventsCallable(const ExportFileTamperEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportFileTamperEventsOutcome>>();
    ExportFileTamperEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportFileTamperEventsRequest&,
        ExportFileTamperEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportFileTamperRulesOutcome CwpClient::ExportFileTamperRules(const ExportFileTamperRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportFileTamperRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportFileTamperRulesResponse rsp = ExportFileTamperRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportFileTamperRulesOutcome(rsp);
        else
            return ExportFileTamperRulesOutcome(o.GetError());
    }
    else
    {
        return ExportFileTamperRulesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportFileTamperRulesAsync(const ExportFileTamperRulesRequest& request, const ExportFileTamperRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportFileTamperRulesRequest&;
    using Resp = ExportFileTamperRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportFileTamperRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportFileTamperRulesOutcomeCallable CwpClient::ExportFileTamperRulesCallable(const ExportFileTamperRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportFileTamperRulesOutcome>>();
    ExportFileTamperRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportFileTamperRulesRequest&,
        ExportFileTamperRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportIgnoreBaselineRuleOutcome CwpClient::ExportIgnoreBaselineRule(const ExportIgnoreBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ExportIgnoreBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportIgnoreBaselineRuleResponse rsp = ExportIgnoreBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportIgnoreBaselineRuleOutcome(rsp);
        else
            return ExportIgnoreBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return ExportIgnoreBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ExportIgnoreBaselineRuleAsync(const ExportIgnoreBaselineRuleRequest& request, const ExportIgnoreBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportIgnoreBaselineRuleRequest&;
    using Resp = ExportIgnoreBaselineRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ExportIgnoreBaselineRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportIgnoreBaselineRuleOutcomeCallable CwpClient::ExportIgnoreBaselineRuleCallable(const ExportIgnoreBaselineRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportIgnoreBaselineRuleOutcome>>();
    ExportIgnoreBaselineRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportIgnoreBaselineRuleRequest&,
        ExportIgnoreBaselineRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportIgnoreRuleEffectHostListOutcome CwpClient::ExportIgnoreRuleEffectHostList(const ExportIgnoreRuleEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportIgnoreRuleEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportIgnoreRuleEffectHostListResponse rsp = ExportIgnoreRuleEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportIgnoreRuleEffectHostListOutcome(rsp);
        else
            return ExportIgnoreRuleEffectHostListOutcome(o.GetError());
    }
    else
    {
        return ExportIgnoreRuleEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportIgnoreRuleEffectHostListAsync(const ExportIgnoreRuleEffectHostListRequest& request, const ExportIgnoreRuleEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportIgnoreRuleEffectHostListRequest&;
    using Resp = ExportIgnoreRuleEffectHostListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportIgnoreRuleEffectHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportIgnoreRuleEffectHostListOutcomeCallable CwpClient::ExportIgnoreRuleEffectHostListCallable(const ExportIgnoreRuleEffectHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportIgnoreRuleEffectHostListOutcome>>();
    ExportIgnoreRuleEffectHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportIgnoreRuleEffectHostListRequest&,
        ExportIgnoreRuleEffectHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportJavaMemShellPluginsOutcome CwpClient::ExportJavaMemShellPlugins(const ExportJavaMemShellPluginsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportJavaMemShellPlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportJavaMemShellPluginsResponse rsp = ExportJavaMemShellPluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportJavaMemShellPluginsOutcome(rsp);
        else
            return ExportJavaMemShellPluginsOutcome(o.GetError());
    }
    else
    {
        return ExportJavaMemShellPluginsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportJavaMemShellPluginsAsync(const ExportJavaMemShellPluginsRequest& request, const ExportJavaMemShellPluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportJavaMemShellPluginsRequest&;
    using Resp = ExportJavaMemShellPluginsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportJavaMemShellPlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportJavaMemShellPluginsOutcomeCallable CwpClient::ExportJavaMemShellPluginsCallable(const ExportJavaMemShellPluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportJavaMemShellPluginsOutcome>>();
    ExportJavaMemShellPluginsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportJavaMemShellPluginsRequest&,
        ExportJavaMemShellPluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportJavaMemShellsOutcome CwpClient::ExportJavaMemShells(const ExportJavaMemShellsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportJavaMemShells");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportJavaMemShellsResponse rsp = ExportJavaMemShellsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportJavaMemShellsOutcome(rsp);
        else
            return ExportJavaMemShellsOutcome(o.GetError());
    }
    else
    {
        return ExportJavaMemShellsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportJavaMemShellsAsync(const ExportJavaMemShellsRequest& request, const ExportJavaMemShellsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportJavaMemShellsRequest&;
    using Resp = ExportJavaMemShellsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportJavaMemShells", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportJavaMemShellsOutcomeCallable CwpClient::ExportJavaMemShellsCallable(const ExportJavaMemShellsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportJavaMemShellsOutcome>>();
    ExportJavaMemShellsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportJavaMemShellsRequest&,
        ExportJavaMemShellsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportLicenseDetailOutcome CwpClient::ExportLicenseDetail(const ExportLicenseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "ExportLicenseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportLicenseDetailResponse rsp = ExportLicenseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportLicenseDetailOutcome(rsp);
        else
            return ExportLicenseDetailOutcome(o.GetError());
    }
    else
    {
        return ExportLicenseDetailOutcome(outcome.GetError());
    }
}

void CwpClient::ExportLicenseDetailAsync(const ExportLicenseDetailRequest& request, const ExportLicenseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportLicenseDetailRequest&;
    using Resp = ExportLicenseDetailResponse;

    DoRequestAsync<Req, Resp>(
        "ExportLicenseDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportLicenseDetailOutcomeCallable CwpClient::ExportLicenseDetailCallable(const ExportLicenseDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportLicenseDetailOutcome>>();
    ExportLicenseDetailAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportLicenseDetailRequest&,
        ExportLicenseDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportMaliciousRequestsOutcome CwpClient::ExportMaliciousRequests(const ExportMaliciousRequestsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportMaliciousRequests");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportMaliciousRequestsResponse rsp = ExportMaliciousRequestsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportMaliciousRequestsOutcome(rsp);
        else
            return ExportMaliciousRequestsOutcome(o.GetError());
    }
    else
    {
        return ExportMaliciousRequestsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportMaliciousRequestsAsync(const ExportMaliciousRequestsRequest& request, const ExportMaliciousRequestsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportMaliciousRequestsRequest&;
    using Resp = ExportMaliciousRequestsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportMaliciousRequests", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportMaliciousRequestsOutcomeCallable CwpClient::ExportMaliciousRequestsCallable(const ExportMaliciousRequestsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportMaliciousRequestsOutcome>>();
    ExportMaliciousRequestsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportMaliciousRequestsRequest&,
        ExportMaliciousRequestsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportMalwaresOutcome CwpClient::ExportMalwares(const ExportMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "ExportMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportMalwaresResponse rsp = ExportMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportMalwaresOutcome(rsp);
        else
            return ExportMalwaresOutcome(o.GetError());
    }
    else
    {
        return ExportMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::ExportMalwaresAsync(const ExportMalwaresRequest& request, const ExportMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportMalwaresRequest&;
    using Resp = ExportMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "ExportMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportMalwaresOutcomeCallable CwpClient::ExportMalwaresCallable(const ExportMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportMalwaresOutcome>>();
    ExportMalwaresAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportMalwaresRequest&,
        ExportMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportNonlocalLoginPlacesOutcome CwpClient::ExportNonlocalLoginPlaces(const ExportNonlocalLoginPlacesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportNonlocalLoginPlaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportNonlocalLoginPlacesResponse rsp = ExportNonlocalLoginPlacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportNonlocalLoginPlacesOutcome(rsp);
        else
            return ExportNonlocalLoginPlacesOutcome(o.GetError());
    }
    else
    {
        return ExportNonlocalLoginPlacesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportNonlocalLoginPlacesAsync(const ExportNonlocalLoginPlacesRequest& request, const ExportNonlocalLoginPlacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportNonlocalLoginPlacesRequest&;
    using Resp = ExportNonlocalLoginPlacesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportNonlocalLoginPlaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportNonlocalLoginPlacesOutcomeCallable CwpClient::ExportNonlocalLoginPlacesCallable(const ExportNonlocalLoginPlacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportNonlocalLoginPlacesOutcome>>();
    ExportNonlocalLoginPlacesAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportNonlocalLoginPlacesRequest&,
        ExportNonlocalLoginPlacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportPrivilegeEventsOutcome CwpClient::ExportPrivilegeEvents(const ExportPrivilegeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportPrivilegeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportPrivilegeEventsResponse rsp = ExportPrivilegeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportPrivilegeEventsOutcome(rsp);
        else
            return ExportPrivilegeEventsOutcome(o.GetError());
    }
    else
    {
        return ExportPrivilegeEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportPrivilegeEventsAsync(const ExportPrivilegeEventsRequest& request, const ExportPrivilegeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportPrivilegeEventsRequest&;
    using Resp = ExportPrivilegeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportPrivilegeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportPrivilegeEventsOutcomeCallable CwpClient::ExportPrivilegeEventsCallable(const ExportPrivilegeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportPrivilegeEventsOutcome>>();
    ExportPrivilegeEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportPrivilegeEventsRequest&,
        ExportPrivilegeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportProtectDirListOutcome CwpClient::ExportProtectDirList(const ExportProtectDirListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportProtectDirList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportProtectDirListResponse rsp = ExportProtectDirListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportProtectDirListOutcome(rsp);
        else
            return ExportProtectDirListOutcome(o.GetError());
    }
    else
    {
        return ExportProtectDirListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportProtectDirListAsync(const ExportProtectDirListRequest& request, const ExportProtectDirListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportProtectDirListRequest&;
    using Resp = ExportProtectDirListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportProtectDirList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportProtectDirListOutcomeCallable CwpClient::ExportProtectDirListCallable(const ExportProtectDirListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportProtectDirListOutcome>>();
    ExportProtectDirListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportProtectDirListRequest&,
        ExportProtectDirListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRansomDefenseBackupListOutcome CwpClient::ExportRansomDefenseBackupList(const ExportRansomDefenseBackupListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseBackupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseBackupListResponse rsp = ExportRansomDefenseBackupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseBackupListOutcome(rsp);
        else
            return ExportRansomDefenseBackupListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseBackupListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseBackupListAsync(const ExportRansomDefenseBackupListRequest& request, const ExportRansomDefenseBackupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRansomDefenseBackupListRequest&;
    using Resp = ExportRansomDefenseBackupListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRansomDefenseBackupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRansomDefenseBackupListOutcomeCallable CwpClient::ExportRansomDefenseBackupListCallable(const ExportRansomDefenseBackupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRansomDefenseBackupListOutcome>>();
    ExportRansomDefenseBackupListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRansomDefenseBackupListRequest&,
        ExportRansomDefenseBackupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRansomDefenseEventsListOutcome CwpClient::ExportRansomDefenseEventsList(const ExportRansomDefenseEventsListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseEventsList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseEventsListResponse rsp = ExportRansomDefenseEventsListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseEventsListOutcome(rsp);
        else
            return ExportRansomDefenseEventsListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseEventsListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseEventsListAsync(const ExportRansomDefenseEventsListRequest& request, const ExportRansomDefenseEventsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRansomDefenseEventsListRequest&;
    using Resp = ExportRansomDefenseEventsListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRansomDefenseEventsList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRansomDefenseEventsListOutcomeCallable CwpClient::ExportRansomDefenseEventsListCallable(const ExportRansomDefenseEventsListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRansomDefenseEventsListOutcome>>();
    ExportRansomDefenseEventsListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRansomDefenseEventsListRequest&,
        ExportRansomDefenseEventsListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRansomDefenseMachineListOutcome CwpClient::ExportRansomDefenseMachineList(const ExportRansomDefenseMachineListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseMachineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseMachineListResponse rsp = ExportRansomDefenseMachineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseMachineListOutcome(rsp);
        else
            return ExportRansomDefenseMachineListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseMachineListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseMachineListAsync(const ExportRansomDefenseMachineListRequest& request, const ExportRansomDefenseMachineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRansomDefenseMachineListRequest&;
    using Resp = ExportRansomDefenseMachineListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRansomDefenseMachineList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRansomDefenseMachineListOutcomeCallable CwpClient::ExportRansomDefenseMachineListCallable(const ExportRansomDefenseMachineListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRansomDefenseMachineListOutcome>>();
    ExportRansomDefenseMachineListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRansomDefenseMachineListRequest&,
        ExportRansomDefenseMachineListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRansomDefenseStrategyListOutcome CwpClient::ExportRansomDefenseStrategyList(const ExportRansomDefenseStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseStrategyListResponse rsp = ExportRansomDefenseStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseStrategyListOutcome(rsp);
        else
            return ExportRansomDefenseStrategyListOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseStrategyListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseStrategyListAsync(const ExportRansomDefenseStrategyListRequest& request, const ExportRansomDefenseStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRansomDefenseStrategyListRequest&;
    using Resp = ExportRansomDefenseStrategyListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRansomDefenseStrategyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRansomDefenseStrategyListOutcomeCallable CwpClient::ExportRansomDefenseStrategyListCallable(const ExportRansomDefenseStrategyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRansomDefenseStrategyListOutcome>>();
    ExportRansomDefenseStrategyListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRansomDefenseStrategyListRequest&,
        ExportRansomDefenseStrategyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRansomDefenseStrategyMachinesOutcome CwpClient::ExportRansomDefenseStrategyMachines(const ExportRansomDefenseStrategyMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRansomDefenseStrategyMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRansomDefenseStrategyMachinesResponse rsp = ExportRansomDefenseStrategyMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRansomDefenseStrategyMachinesOutcome(rsp);
        else
            return ExportRansomDefenseStrategyMachinesOutcome(o.GetError());
    }
    else
    {
        return ExportRansomDefenseStrategyMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRansomDefenseStrategyMachinesAsync(const ExportRansomDefenseStrategyMachinesRequest& request, const ExportRansomDefenseStrategyMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRansomDefenseStrategyMachinesRequest&;
    using Resp = ExportRansomDefenseStrategyMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRansomDefenseStrategyMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRansomDefenseStrategyMachinesOutcomeCallable CwpClient::ExportRansomDefenseStrategyMachinesCallable(const ExportRansomDefenseStrategyMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRansomDefenseStrategyMachinesOutcome>>();
    ExportRansomDefenseStrategyMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRansomDefenseStrategyMachinesRequest&,
        ExportRansomDefenseStrategyMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportReverseShellEventsOutcome CwpClient::ExportReverseShellEvents(const ExportReverseShellEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportReverseShellEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportReverseShellEventsResponse rsp = ExportReverseShellEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportReverseShellEventsOutcome(rsp);
        else
            return ExportReverseShellEventsOutcome(o.GetError());
    }
    else
    {
        return ExportReverseShellEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportReverseShellEventsAsync(const ExportReverseShellEventsRequest& request, const ExportReverseShellEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportReverseShellEventsRequest&;
    using Resp = ExportReverseShellEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportReverseShellEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportReverseShellEventsOutcomeCallable CwpClient::ExportReverseShellEventsCallable(const ExportReverseShellEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportReverseShellEventsOutcome>>();
    ExportReverseShellEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportReverseShellEventsRequest&,
        ExportReverseShellEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRiskDnsEventListOutcome CwpClient::ExportRiskDnsEventList(const ExportRiskDnsEventListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRiskDnsEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRiskDnsEventListResponse rsp = ExportRiskDnsEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRiskDnsEventListOutcome(rsp);
        else
            return ExportRiskDnsEventListOutcome(o.GetError());
    }
    else
    {
        return ExportRiskDnsEventListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRiskDnsEventListAsync(const ExportRiskDnsEventListRequest& request, const ExportRiskDnsEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRiskDnsEventListRequest&;
    using Resp = ExportRiskDnsEventListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRiskDnsEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRiskDnsEventListOutcomeCallable CwpClient::ExportRiskDnsEventListCallable(const ExportRiskDnsEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRiskDnsEventListOutcome>>();
    ExportRiskDnsEventListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRiskDnsEventListRequest&,
        ExportRiskDnsEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRiskDnsPolicyListOutcome CwpClient::ExportRiskDnsPolicyList(const ExportRiskDnsPolicyListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRiskDnsPolicyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRiskDnsPolicyListResponse rsp = ExportRiskDnsPolicyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRiskDnsPolicyListOutcome(rsp);
        else
            return ExportRiskDnsPolicyListOutcome(o.GetError());
    }
    else
    {
        return ExportRiskDnsPolicyListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRiskDnsPolicyListAsync(const ExportRiskDnsPolicyListRequest& request, const ExportRiskDnsPolicyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRiskDnsPolicyListRequest&;
    using Resp = ExportRiskDnsPolicyListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRiskDnsPolicyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRiskDnsPolicyListOutcomeCallable CwpClient::ExportRiskDnsPolicyListCallable(const ExportRiskDnsPolicyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRiskDnsPolicyListOutcome>>();
    ExportRiskDnsPolicyListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRiskDnsPolicyListRequest&,
        ExportRiskDnsPolicyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportRiskProcessEventsOutcome CwpClient::ExportRiskProcessEvents(const ExportRiskProcessEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportRiskProcessEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportRiskProcessEventsResponse rsp = ExportRiskProcessEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportRiskProcessEventsOutcome(rsp);
        else
            return ExportRiskProcessEventsOutcome(o.GetError());
    }
    else
    {
        return ExportRiskProcessEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportRiskProcessEventsAsync(const ExportRiskProcessEventsRequest& request, const ExportRiskProcessEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportRiskProcessEventsRequest&;
    using Resp = ExportRiskProcessEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportRiskProcessEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportRiskProcessEventsOutcomeCallable CwpClient::ExportRiskProcessEventsCallable(const ExportRiskProcessEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportRiskProcessEventsOutcome>>();
    ExportRiskProcessEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportRiskProcessEventsRequest&,
        ExportRiskProcessEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportScanTaskDetailsOutcome CwpClient::ExportScanTaskDetails(const ExportScanTaskDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportScanTaskDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportScanTaskDetailsResponse rsp = ExportScanTaskDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportScanTaskDetailsOutcome(rsp);
        else
            return ExportScanTaskDetailsOutcome(o.GetError());
    }
    else
    {
        return ExportScanTaskDetailsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportScanTaskDetailsAsync(const ExportScanTaskDetailsRequest& request, const ExportScanTaskDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportScanTaskDetailsRequest&;
    using Resp = ExportScanTaskDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportScanTaskDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportScanTaskDetailsOutcomeCallable CwpClient::ExportScanTaskDetailsCallable(const ExportScanTaskDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportScanTaskDetailsOutcome>>();
    ExportScanTaskDetailsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportScanTaskDetailsRequest&,
        ExportScanTaskDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportSecurityTrendsOutcome CwpClient::ExportSecurityTrends(const ExportSecurityTrendsRequest &request)
{
    auto outcome = MakeRequest(request, "ExportSecurityTrends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportSecurityTrendsResponse rsp = ExportSecurityTrendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportSecurityTrendsOutcome(rsp);
        else
            return ExportSecurityTrendsOutcome(o.GetError());
    }
    else
    {
        return ExportSecurityTrendsOutcome(outcome.GetError());
    }
}

void CwpClient::ExportSecurityTrendsAsync(const ExportSecurityTrendsRequest& request, const ExportSecurityTrendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportSecurityTrendsRequest&;
    using Resp = ExportSecurityTrendsResponse;

    DoRequestAsync<Req, Resp>(
        "ExportSecurityTrends", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportSecurityTrendsOutcomeCallable CwpClient::ExportSecurityTrendsCallable(const ExportSecurityTrendsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportSecurityTrendsOutcome>>();
    ExportSecurityTrendsAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportSecurityTrendsRequest&,
        ExportSecurityTrendsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportTasksOutcome CwpClient::ExportTasks(const ExportTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ExportTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportTasksResponse rsp = ExportTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportTasksOutcome(rsp);
        else
            return ExportTasksOutcome(o.GetError());
    }
    else
    {
        return ExportTasksOutcome(outcome.GetError());
    }
}

void CwpClient::ExportTasksAsync(const ExportTasksRequest& request, const ExportTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportTasksRequest&;
    using Resp = ExportTasksResponse;

    DoRequestAsync<Req, Resp>(
        "ExportTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportTasksOutcomeCallable CwpClient::ExportTasksCallable(const ExportTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportTasksOutcome>>();
    ExportTasksAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportTasksRequest&,
        ExportTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulDefenceEventOutcome CwpClient::ExportVulDefenceEvent(const ExportVulDefenceEventRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDefenceEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDefenceEventResponse rsp = ExportVulDefenceEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDefenceEventOutcome(rsp);
        else
            return ExportVulDefenceEventOutcome(o.GetError());
    }
    else
    {
        return ExportVulDefenceEventOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDefenceEventAsync(const ExportVulDefenceEventRequest& request, const ExportVulDefenceEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulDefenceEventRequest&;
    using Resp = ExportVulDefenceEventResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulDefenceEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulDefenceEventOutcomeCallable CwpClient::ExportVulDefenceEventCallable(const ExportVulDefenceEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulDefenceEventOutcome>>();
    ExportVulDefenceEventAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulDefenceEventRequest&,
        ExportVulDefenceEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulDefenceListOutcome CwpClient::ExportVulDefenceList(const ExportVulDefenceListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDefenceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDefenceListResponse rsp = ExportVulDefenceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDefenceListOutcome(rsp);
        else
            return ExportVulDefenceListOutcome(o.GetError());
    }
    else
    {
        return ExportVulDefenceListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDefenceListAsync(const ExportVulDefenceListRequest& request, const ExportVulDefenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulDefenceListRequest&;
    using Resp = ExportVulDefenceListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulDefenceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulDefenceListOutcomeCallable CwpClient::ExportVulDefenceListCallable(const ExportVulDefenceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulDefenceListOutcome>>();
    ExportVulDefenceListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulDefenceListRequest&,
        ExportVulDefenceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulDefencePluginEventOutcome CwpClient::ExportVulDefencePluginEvent(const ExportVulDefencePluginEventRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDefencePluginEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDefencePluginEventResponse rsp = ExportVulDefencePluginEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDefencePluginEventOutcome(rsp);
        else
            return ExportVulDefencePluginEventOutcome(o.GetError());
    }
    else
    {
        return ExportVulDefencePluginEventOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDefencePluginEventAsync(const ExportVulDefencePluginEventRequest& request, const ExportVulDefencePluginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulDefencePluginEventRequest&;
    using Resp = ExportVulDefencePluginEventResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulDefencePluginEvent", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulDefencePluginEventOutcomeCallable CwpClient::ExportVulDefencePluginEventCallable(const ExportVulDefencePluginEventRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulDefencePluginEventOutcome>>();
    ExportVulDefencePluginEventAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulDefencePluginEventRequest&,
        ExportVulDefencePluginEventOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulDetectionExcelOutcome CwpClient::ExportVulDetectionExcel(const ExportVulDetectionExcelRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDetectionExcel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDetectionExcelResponse rsp = ExportVulDetectionExcelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDetectionExcelOutcome(rsp);
        else
            return ExportVulDetectionExcelOutcome(o.GetError());
    }
    else
    {
        return ExportVulDetectionExcelOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDetectionExcelAsync(const ExportVulDetectionExcelRequest& request, const ExportVulDetectionExcelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulDetectionExcelRequest&;
    using Resp = ExportVulDetectionExcelResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulDetectionExcel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulDetectionExcelOutcomeCallable CwpClient::ExportVulDetectionExcelCallable(const ExportVulDetectionExcelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulDetectionExcelOutcome>>();
    ExportVulDetectionExcelAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulDetectionExcelRequest&,
        ExportVulDetectionExcelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulDetectionReportOutcome CwpClient::ExportVulDetectionReport(const ExportVulDetectionReportRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulDetectionReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulDetectionReportResponse rsp = ExportVulDetectionReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulDetectionReportOutcome(rsp);
        else
            return ExportVulDetectionReportOutcome(o.GetError());
    }
    else
    {
        return ExportVulDetectionReportOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulDetectionReportAsync(const ExportVulDetectionReportRequest& request, const ExportVulDetectionReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulDetectionReportRequest&;
    using Resp = ExportVulDetectionReportResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulDetectionReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulDetectionReportOutcomeCallable CwpClient::ExportVulDetectionReportCallable(const ExportVulDetectionReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulDetectionReportOutcome>>();
    ExportVulDetectionReportAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulDetectionReportRequest&,
        ExportVulDetectionReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulEffectHostListOutcome CwpClient::ExportVulEffectHostList(const ExportVulEffectHostListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulEffectHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulEffectHostListResponse rsp = ExportVulEffectHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulEffectHostListOutcome(rsp);
        else
            return ExportVulEffectHostListOutcome(o.GetError());
    }
    else
    {
        return ExportVulEffectHostListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulEffectHostListAsync(const ExportVulEffectHostListRequest& request, const ExportVulEffectHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulEffectHostListRequest&;
    using Resp = ExportVulEffectHostListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulEffectHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulEffectHostListOutcomeCallable CwpClient::ExportVulEffectHostListCallable(const ExportVulEffectHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulEffectHostListOutcome>>();
    ExportVulEffectHostListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulEffectHostListRequest&,
        ExportVulEffectHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulInfoOutcome CwpClient::ExportVulInfo(const ExportVulInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulInfoResponse rsp = ExportVulInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulInfoOutcome(rsp);
        else
            return ExportVulInfoOutcome(o.GetError());
    }
    else
    {
        return ExportVulInfoOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulInfoAsync(const ExportVulInfoRequest& request, const ExportVulInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulInfoRequest&;
    using Resp = ExportVulInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulInfoOutcomeCallable CwpClient::ExportVulInfoCallable(const ExportVulInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulInfoOutcome>>();
    ExportVulInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulInfoRequest&,
        ExportVulInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportVulListOutcome CwpClient::ExportVulList(const ExportVulListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportVulListResponse rsp = ExportVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportVulListOutcome(rsp);
        else
            return ExportVulListOutcome(o.GetError());
    }
    else
    {
        return ExportVulListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportVulListAsync(const ExportVulListRequest& request, const ExportVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportVulListRequest&;
    using Resp = ExportVulListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportVulListOutcomeCallable CwpClient::ExportVulListCallable(const ExportVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportVulListOutcome>>();
    ExportVulListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportVulListRequest&,
        ExportVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ExportWebPageEventListOutcome CwpClient::ExportWebPageEventList(const ExportWebPageEventListRequest &request)
{
    auto outcome = MakeRequest(request, "ExportWebPageEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportWebPageEventListResponse rsp = ExportWebPageEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportWebPageEventListOutcome(rsp);
        else
            return ExportWebPageEventListOutcome(o.GetError());
    }
    else
    {
        return ExportWebPageEventListOutcome(outcome.GetError());
    }
}

void CwpClient::ExportWebPageEventListAsync(const ExportWebPageEventListRequest& request, const ExportWebPageEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportWebPageEventListRequest&;
    using Resp = ExportWebPageEventListResponse;

    DoRequestAsync<Req, Resp>(
        "ExportWebPageEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ExportWebPageEventListOutcomeCallable CwpClient::ExportWebPageEventListCallable(const ExportWebPageEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportWebPageEventListOutcome>>();
    ExportWebPageEventListAsync(
    request,
    [prom](
        const CwpClient*,
        const ExportWebPageEventListRequest&,
        ExportWebPageEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::FixBaselineDetectOutcome CwpClient::FixBaselineDetect(const FixBaselineDetectRequest &request)
{
    auto outcome = MakeRequest(request, "FixBaselineDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FixBaselineDetectResponse rsp = FixBaselineDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FixBaselineDetectOutcome(rsp);
        else
            return FixBaselineDetectOutcome(o.GetError());
    }
    else
    {
        return FixBaselineDetectOutcome(outcome.GetError());
    }
}

void CwpClient::FixBaselineDetectAsync(const FixBaselineDetectRequest& request, const FixBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FixBaselineDetectRequest&;
    using Resp = FixBaselineDetectResponse;

    DoRequestAsync<Req, Resp>(
        "FixBaselineDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::FixBaselineDetectOutcomeCallable CwpClient::FixBaselineDetectCallable(const FixBaselineDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<FixBaselineDetectOutcome>>();
    FixBaselineDetectAsync(
    request,
    [prom](
        const CwpClient*,
        const FixBaselineDetectRequest&,
        FixBaselineDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::GetLocalStorageItemOutcome CwpClient::GetLocalStorageItem(const GetLocalStorageItemRequest &request)
{
    auto outcome = MakeRequest(request, "GetLocalStorageItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLocalStorageItemResponse rsp = GetLocalStorageItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLocalStorageItemOutcome(rsp);
        else
            return GetLocalStorageItemOutcome(o.GetError());
    }
    else
    {
        return GetLocalStorageItemOutcome(outcome.GetError());
    }
}

void CwpClient::GetLocalStorageItemAsync(const GetLocalStorageItemRequest& request, const GetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLocalStorageItemRequest&;
    using Resp = GetLocalStorageItemResponse;

    DoRequestAsync<Req, Resp>(
        "GetLocalStorageItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::GetLocalStorageItemOutcomeCallable CwpClient::GetLocalStorageItemCallable(const GetLocalStorageItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLocalStorageItemOutcome>>();
    GetLocalStorageItemAsync(
    request,
    [prom](
        const CwpClient*,
        const GetLocalStorageItemRequest&,
        GetLocalStorageItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::KeysLocalStorageOutcome CwpClient::KeysLocalStorage(const KeysLocalStorageRequest &request)
{
    auto outcome = MakeRequest(request, "KeysLocalStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KeysLocalStorageResponse rsp = KeysLocalStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KeysLocalStorageOutcome(rsp);
        else
            return KeysLocalStorageOutcome(o.GetError());
    }
    else
    {
        return KeysLocalStorageOutcome(outcome.GetError());
    }
}

void CwpClient::KeysLocalStorageAsync(const KeysLocalStorageRequest& request, const KeysLocalStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KeysLocalStorageRequest&;
    using Resp = KeysLocalStorageResponse;

    DoRequestAsync<Req, Resp>(
        "KeysLocalStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::KeysLocalStorageOutcomeCallable CwpClient::KeysLocalStorageCallable(const KeysLocalStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<KeysLocalStorageOutcome>>();
    KeysLocalStorageAsync(
    request,
    [prom](
        const CwpClient*,
        const KeysLocalStorageRequest&,
        KeysLocalStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyAutoOpenProVersionConfigOutcome CwpClient::ModifyAutoOpenProVersionConfig(const ModifyAutoOpenProVersionConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAutoOpenProVersionConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAutoOpenProVersionConfigResponse rsp = ModifyAutoOpenProVersionConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAutoOpenProVersionConfigOutcome(rsp);
        else
            return ModifyAutoOpenProVersionConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAutoOpenProVersionConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyAutoOpenProVersionConfigAsync(const ModifyAutoOpenProVersionConfigRequest& request, const ModifyAutoOpenProVersionConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAutoOpenProVersionConfigRequest&;
    using Resp = ModifyAutoOpenProVersionConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAutoOpenProVersionConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyAutoOpenProVersionConfigOutcomeCallable CwpClient::ModifyAutoOpenProVersionConfigCallable(const ModifyAutoOpenProVersionConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAutoOpenProVersionConfigOutcome>>();
    ModifyAutoOpenProVersionConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyAutoOpenProVersionConfigRequest&,
        ModifyAutoOpenProVersionConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBanModeOutcome CwpClient::ModifyBanMode(const ModifyBanModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBanMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBanModeResponse rsp = ModifyBanModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBanModeOutcome(rsp);
        else
            return ModifyBanModeOutcome(o.GetError());
    }
    else
    {
        return ModifyBanModeOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBanModeAsync(const ModifyBanModeRequest& request, const ModifyBanModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBanModeRequest&;
    using Resp = ModifyBanModeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBanMode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBanModeOutcomeCallable CwpClient::ModifyBanModeCallable(const ModifyBanModeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBanModeOutcome>>();
    ModifyBanModeAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBanModeRequest&,
        ModifyBanModeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBanStatusOutcome CwpClient::ModifyBanStatus(const ModifyBanStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBanStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBanStatusResponse rsp = ModifyBanStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBanStatusOutcome(rsp);
        else
            return ModifyBanStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBanStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBanStatusAsync(const ModifyBanStatusRequest& request, const ModifyBanStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBanStatusRequest&;
    using Resp = ModifyBanStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBanStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBanStatusOutcomeCallable CwpClient::ModifyBanStatusCallable(const ModifyBanStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBanStatusOutcome>>();
    ModifyBanStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBanStatusRequest&,
        ModifyBanStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBanWhiteListOutcome CwpClient::ModifyBanWhiteList(const ModifyBanWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBanWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBanWhiteListResponse rsp = ModifyBanWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBanWhiteListOutcome(rsp);
        else
            return ModifyBanWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyBanWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBanWhiteListAsync(const ModifyBanWhiteListRequest& request, const ModifyBanWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBanWhiteListRequest&;
    using Resp = ModifyBanWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBanWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBanWhiteListOutcomeCallable CwpClient::ModifyBanWhiteListCallable(const ModifyBanWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBanWhiteListOutcome>>();
    ModifyBanWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBanWhiteListRequest&,
        ModifyBanWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBaselinePolicyOutcome CwpClient::ModifyBaselinePolicy(const ModifyBaselinePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselinePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselinePolicyResponse rsp = ModifyBaselinePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselinePolicyOutcome(rsp);
        else
            return ModifyBaselinePolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselinePolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselinePolicyAsync(const ModifyBaselinePolicyRequest& request, const ModifyBaselinePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBaselinePolicyRequest&;
    using Resp = ModifyBaselinePolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBaselinePolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBaselinePolicyOutcomeCallable CwpClient::ModifyBaselinePolicyCallable(const ModifyBaselinePolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBaselinePolicyOutcome>>();
    ModifyBaselinePolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBaselinePolicyRequest&,
        ModifyBaselinePolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBaselinePolicyStateOutcome CwpClient::ModifyBaselinePolicyState(const ModifyBaselinePolicyStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselinePolicyState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselinePolicyStateResponse rsp = ModifyBaselinePolicyStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselinePolicyStateOutcome(rsp);
        else
            return ModifyBaselinePolicyStateOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselinePolicyStateOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselinePolicyStateAsync(const ModifyBaselinePolicyStateRequest& request, const ModifyBaselinePolicyStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBaselinePolicyStateRequest&;
    using Resp = ModifyBaselinePolicyStateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBaselinePolicyState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBaselinePolicyStateOutcomeCallable CwpClient::ModifyBaselinePolicyStateCallable(const ModifyBaselinePolicyStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBaselinePolicyStateOutcome>>();
    ModifyBaselinePolicyStateAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBaselinePolicyStateRequest&,
        ModifyBaselinePolicyStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBaselineRuleOutcome CwpClient::ModifyBaselineRule(const ModifyBaselineRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineRuleResponse rsp = ModifyBaselineRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineRuleOutcome(rsp);
        else
            return ModifyBaselineRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselineRuleAsync(const ModifyBaselineRuleRequest& request, const ModifyBaselineRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBaselineRuleRequest&;
    using Resp = ModifyBaselineRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBaselineRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBaselineRuleOutcomeCallable CwpClient::ModifyBaselineRuleCallable(const ModifyBaselineRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBaselineRuleOutcome>>();
    ModifyBaselineRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBaselineRuleRequest&,
        ModifyBaselineRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBaselineRuleIgnoreOutcome CwpClient::ModifyBaselineRuleIgnore(const ModifyBaselineRuleIgnoreRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineRuleIgnore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineRuleIgnoreResponse rsp = ModifyBaselineRuleIgnoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineRuleIgnoreOutcome(rsp);
        else
            return ModifyBaselineRuleIgnoreOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineRuleIgnoreOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselineRuleIgnoreAsync(const ModifyBaselineRuleIgnoreRequest& request, const ModifyBaselineRuleIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBaselineRuleIgnoreRequest&;
    using Resp = ModifyBaselineRuleIgnoreResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBaselineRuleIgnore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBaselineRuleIgnoreOutcomeCallable CwpClient::ModifyBaselineRuleIgnoreCallable(const ModifyBaselineRuleIgnoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBaselineRuleIgnoreOutcome>>();
    ModifyBaselineRuleIgnoreAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBaselineRuleIgnoreRequest&,
        ModifyBaselineRuleIgnoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBaselineWeakPasswordOutcome CwpClient::ModifyBaselineWeakPassword(const ModifyBaselineWeakPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBaselineWeakPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBaselineWeakPasswordResponse rsp = ModifyBaselineWeakPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBaselineWeakPasswordOutcome(rsp);
        else
            return ModifyBaselineWeakPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyBaselineWeakPasswordOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBaselineWeakPasswordAsync(const ModifyBaselineWeakPasswordRequest& request, const ModifyBaselineWeakPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBaselineWeakPasswordRequest&;
    using Resp = ModifyBaselineWeakPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBaselineWeakPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBaselineWeakPasswordOutcomeCallable CwpClient::ModifyBaselineWeakPasswordCallable(const ModifyBaselineWeakPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBaselineWeakPasswordOutcome>>();
    ModifyBaselineWeakPasswordAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBaselineWeakPasswordRequest&,
        ModifyBaselineWeakPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBashPolicyOutcome CwpClient::ModifyBashPolicy(const ModifyBashPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBashPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBashPolicyResponse rsp = ModifyBashPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBashPolicyOutcome(rsp);
        else
            return ModifyBashPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyBashPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBashPolicyAsync(const ModifyBashPolicyRequest& request, const ModifyBashPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBashPolicyRequest&;
    using Resp = ModifyBashPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBashPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBashPolicyOutcomeCallable CwpClient::ModifyBashPolicyCallable(const ModifyBashPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBashPolicyOutcome>>();
    ModifyBashPolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBashPolicyRequest&,
        ModifyBashPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBashPolicyStatusOutcome CwpClient::ModifyBashPolicyStatus(const ModifyBashPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBashPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBashPolicyStatusResponse rsp = ModifyBashPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBashPolicyStatusOutcome(rsp);
        else
            return ModifyBashPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyBashPolicyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBashPolicyStatusAsync(const ModifyBashPolicyStatusRequest& request, const ModifyBashPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBashPolicyStatusRequest&;
    using Resp = ModifyBashPolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBashPolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBashPolicyStatusOutcomeCallable CwpClient::ModifyBashPolicyStatusCallable(const ModifyBashPolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBashPolicyStatusOutcome>>();
    ModifyBashPolicyStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBashPolicyStatusRequest&,
        ModifyBashPolicyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyBruteAttackRulesOutcome CwpClient::ModifyBruteAttackRules(const ModifyBruteAttackRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBruteAttackRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBruteAttackRulesResponse rsp = ModifyBruteAttackRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBruteAttackRulesOutcome(rsp);
        else
            return ModifyBruteAttackRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyBruteAttackRulesOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyBruteAttackRulesAsync(const ModifyBruteAttackRulesRequest& request, const ModifyBruteAttackRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBruteAttackRulesRequest&;
    using Resp = ModifyBruteAttackRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBruteAttackRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyBruteAttackRulesOutcomeCallable CwpClient::ModifyBruteAttackRulesCallable(const ModifyBruteAttackRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBruteAttackRulesOutcome>>();
    ModifyBruteAttackRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyBruteAttackRulesRequest&,
        ModifyBruteAttackRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyEventAttackStatusOutcome CwpClient::ModifyEventAttackStatus(const ModifyEventAttackStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEventAttackStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEventAttackStatusResponse rsp = ModifyEventAttackStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEventAttackStatusOutcome(rsp);
        else
            return ModifyEventAttackStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyEventAttackStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyEventAttackStatusAsync(const ModifyEventAttackStatusRequest& request, const ModifyEventAttackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEventAttackStatusRequest&;
    using Resp = ModifyEventAttackStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEventAttackStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyEventAttackStatusOutcomeCallable CwpClient::ModifyEventAttackStatusCallable(const ModifyEventAttackStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEventAttackStatusOutcome>>();
    ModifyEventAttackStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyEventAttackStatusRequest&,
        ModifyEventAttackStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyFileTamperEventsOutcome CwpClient::ModifyFileTamperEvents(const ModifyFileTamperEventsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileTamperEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileTamperEventsResponse rsp = ModifyFileTamperEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileTamperEventsOutcome(rsp);
        else
            return ModifyFileTamperEventsOutcome(o.GetError());
    }
    else
    {
        return ModifyFileTamperEventsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyFileTamperEventsAsync(const ModifyFileTamperEventsRequest& request, const ModifyFileTamperEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileTamperEventsRequest&;
    using Resp = ModifyFileTamperEventsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileTamperEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyFileTamperEventsOutcomeCallable CwpClient::ModifyFileTamperEventsCallable(const ModifyFileTamperEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileTamperEventsOutcome>>();
    ModifyFileTamperEventsAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyFileTamperEventsRequest&,
        ModifyFileTamperEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyFileTamperRuleOutcome CwpClient::ModifyFileTamperRule(const ModifyFileTamperRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileTamperRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileTamperRuleResponse rsp = ModifyFileTamperRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileTamperRuleOutcome(rsp);
        else
            return ModifyFileTamperRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyFileTamperRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyFileTamperRuleAsync(const ModifyFileTamperRuleRequest& request, const ModifyFileTamperRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileTamperRuleRequest&;
    using Resp = ModifyFileTamperRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileTamperRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyFileTamperRuleOutcomeCallable CwpClient::ModifyFileTamperRuleCallable(const ModifyFileTamperRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileTamperRuleOutcome>>();
    ModifyFileTamperRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyFileTamperRuleRequest&,
        ModifyFileTamperRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyFileTamperRuleStatusOutcome CwpClient::ModifyFileTamperRuleStatus(const ModifyFileTamperRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileTamperRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileTamperRuleStatusResponse rsp = ModifyFileTamperRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileTamperRuleStatusOutcome(rsp);
        else
            return ModifyFileTamperRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyFileTamperRuleStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyFileTamperRuleStatusAsync(const ModifyFileTamperRuleStatusRequest& request, const ModifyFileTamperRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileTamperRuleStatusRequest&;
    using Resp = ModifyFileTamperRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileTamperRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyFileTamperRuleStatusOutcomeCallable CwpClient::ModifyFileTamperRuleStatusCallable(const ModifyFileTamperRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileTamperRuleStatusOutcome>>();
    ModifyFileTamperRuleStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyFileTamperRuleStatusRequest&,
        ModifyFileTamperRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyJavaMemShellPluginSwitchOutcome CwpClient::ModifyJavaMemShellPluginSwitch(const ModifyJavaMemShellPluginSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJavaMemShellPluginSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJavaMemShellPluginSwitchResponse rsp = ModifyJavaMemShellPluginSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJavaMemShellPluginSwitchOutcome(rsp);
        else
            return ModifyJavaMemShellPluginSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyJavaMemShellPluginSwitchOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyJavaMemShellPluginSwitchAsync(const ModifyJavaMemShellPluginSwitchRequest& request, const ModifyJavaMemShellPluginSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyJavaMemShellPluginSwitchRequest&;
    using Resp = ModifyJavaMemShellPluginSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyJavaMemShellPluginSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyJavaMemShellPluginSwitchOutcomeCallable CwpClient::ModifyJavaMemShellPluginSwitchCallable(const ModifyJavaMemShellPluginSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyJavaMemShellPluginSwitchOutcome>>();
    ModifyJavaMemShellPluginSwitchAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyJavaMemShellPluginSwitchRequest&,
        ModifyJavaMemShellPluginSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyJavaMemShellsStatusOutcome CwpClient::ModifyJavaMemShellsStatus(const ModifyJavaMemShellsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJavaMemShellsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJavaMemShellsStatusResponse rsp = ModifyJavaMemShellsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJavaMemShellsStatusOutcome(rsp);
        else
            return ModifyJavaMemShellsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyJavaMemShellsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyJavaMemShellsStatusAsync(const ModifyJavaMemShellsStatusRequest& request, const ModifyJavaMemShellsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyJavaMemShellsStatusRequest&;
    using Resp = ModifyJavaMemShellsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyJavaMemShellsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyJavaMemShellsStatusOutcomeCallable CwpClient::ModifyJavaMemShellsStatusCallable(const ModifyJavaMemShellsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyJavaMemShellsStatusOutcome>>();
    ModifyJavaMemShellsStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyJavaMemShellsStatusRequest&,
        ModifyJavaMemShellsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLicenseBindsOutcome CwpClient::ModifyLicenseBinds(const ModifyLicenseBindsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicenseBinds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseBindsResponse rsp = ModifyLicenseBindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseBindsOutcome(rsp);
        else
            return ModifyLicenseBindsOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseBindsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLicenseBindsAsync(const ModifyLicenseBindsRequest& request, const ModifyLicenseBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLicenseBindsRequest&;
    using Resp = ModifyLicenseBindsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLicenseBinds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLicenseBindsOutcomeCallable CwpClient::ModifyLicenseBindsCallable(const ModifyLicenseBindsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLicenseBindsOutcome>>();
    ModifyLicenseBindsAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLicenseBindsRequest&,
        ModifyLicenseBindsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLicenseOrderOutcome CwpClient::ModifyLicenseOrder(const ModifyLicenseOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicenseOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseOrderResponse rsp = ModifyLicenseOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseOrderOutcome(rsp);
        else
            return ModifyLicenseOrderOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseOrderOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLicenseOrderAsync(const ModifyLicenseOrderRequest& request, const ModifyLicenseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLicenseOrderRequest&;
    using Resp = ModifyLicenseOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLicenseOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLicenseOrderOutcomeCallable CwpClient::ModifyLicenseOrderCallable(const ModifyLicenseOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLicenseOrderOutcome>>();
    ModifyLicenseOrderAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLicenseOrderRequest&,
        ModifyLicenseOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLicenseUnBindsOutcome CwpClient::ModifyLicenseUnBinds(const ModifyLicenseUnBindsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLicenseUnBinds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLicenseUnBindsResponse rsp = ModifyLicenseUnBindsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLicenseUnBindsOutcome(rsp);
        else
            return ModifyLicenseUnBindsOutcome(o.GetError());
    }
    else
    {
        return ModifyLicenseUnBindsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLicenseUnBindsAsync(const ModifyLicenseUnBindsRequest& request, const ModifyLicenseUnBindsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLicenseUnBindsRequest&;
    using Resp = ModifyLicenseUnBindsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLicenseUnBinds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLicenseUnBindsOutcomeCallable CwpClient::ModifyLicenseUnBindsCallable(const ModifyLicenseUnBindsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLicenseUnBindsOutcome>>();
    ModifyLicenseUnBindsAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLicenseUnBindsRequest&,
        ModifyLicenseUnBindsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLogKafkaAccessOutcome CwpClient::ModifyLogKafkaAccess(const ModifyLogKafkaAccessRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogKafkaAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogKafkaAccessResponse rsp = ModifyLogKafkaAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogKafkaAccessOutcome(rsp);
        else
            return ModifyLogKafkaAccessOutcome(o.GetError());
    }
    else
    {
        return ModifyLogKafkaAccessOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogKafkaAccessAsync(const ModifyLogKafkaAccessRequest& request, const ModifyLogKafkaAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogKafkaAccessRequest&;
    using Resp = ModifyLogKafkaAccessResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogKafkaAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLogKafkaAccessOutcomeCallable CwpClient::ModifyLogKafkaAccessCallable(const ModifyLogKafkaAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogKafkaAccessOutcome>>();
    ModifyLogKafkaAccessAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLogKafkaAccessRequest&,
        ModifyLogKafkaAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLogKafkaDeliverTypeOutcome CwpClient::ModifyLogKafkaDeliverType(const ModifyLogKafkaDeliverTypeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogKafkaDeliverType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogKafkaDeliverTypeResponse rsp = ModifyLogKafkaDeliverTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogKafkaDeliverTypeOutcome(rsp);
        else
            return ModifyLogKafkaDeliverTypeOutcome(o.GetError());
    }
    else
    {
        return ModifyLogKafkaDeliverTypeOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogKafkaDeliverTypeAsync(const ModifyLogKafkaDeliverTypeRequest& request, const ModifyLogKafkaDeliverTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogKafkaDeliverTypeRequest&;
    using Resp = ModifyLogKafkaDeliverTypeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogKafkaDeliverType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLogKafkaDeliverTypeOutcomeCallable CwpClient::ModifyLogKafkaDeliverTypeCallable(const ModifyLogKafkaDeliverTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogKafkaDeliverTypeOutcome>>();
    ModifyLogKafkaDeliverTypeAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLogKafkaDeliverTypeRequest&,
        ModifyLogKafkaDeliverTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLogKafkaStateOutcome CwpClient::ModifyLogKafkaState(const ModifyLogKafkaStateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogKafkaState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogKafkaStateResponse rsp = ModifyLogKafkaStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogKafkaStateOutcome(rsp);
        else
            return ModifyLogKafkaStateOutcome(o.GetError());
    }
    else
    {
        return ModifyLogKafkaStateOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogKafkaStateAsync(const ModifyLogKafkaStateRequest& request, const ModifyLogKafkaStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogKafkaStateRequest&;
    using Resp = ModifyLogKafkaStateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogKafkaState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLogKafkaStateOutcomeCallable CwpClient::ModifyLogKafkaStateCallable(const ModifyLogKafkaStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogKafkaStateOutcome>>();
    ModifyLogKafkaStateAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLogKafkaStateRequest&,
        ModifyLogKafkaStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLogStorageConfigOutcome CwpClient::ModifyLogStorageConfig(const ModifyLogStorageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogStorageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogStorageConfigResponse rsp = ModifyLogStorageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogStorageConfigOutcome(rsp);
        else
            return ModifyLogStorageConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyLogStorageConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLogStorageConfigAsync(const ModifyLogStorageConfigRequest& request, const ModifyLogStorageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogStorageConfigRequest&;
    using Resp = ModifyLogStorageConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogStorageConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLogStorageConfigOutcomeCallable CwpClient::ModifyLogStorageConfigCallable(const ModifyLogStorageConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogStorageConfigOutcome>>();
    ModifyLogStorageConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLogStorageConfigRequest&,
        ModifyLogStorageConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLoginWhiteInfoOutcome CwpClient::ModifyLoginWhiteInfo(const ModifyLoginWhiteInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginWhiteInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginWhiteInfoResponse rsp = ModifyLoginWhiteInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginWhiteInfoOutcome(rsp);
        else
            return ModifyLoginWhiteInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginWhiteInfoOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLoginWhiteInfoAsync(const ModifyLoginWhiteInfoRequest& request, const ModifyLoginWhiteInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoginWhiteInfoRequest&;
    using Resp = ModifyLoginWhiteInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoginWhiteInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLoginWhiteInfoOutcomeCallable CwpClient::ModifyLoginWhiteInfoCallable(const ModifyLoginWhiteInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoginWhiteInfoOutcome>>();
    ModifyLoginWhiteInfoAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLoginWhiteInfoRequest&,
        ModifyLoginWhiteInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyLoginWhiteRecordOutcome CwpClient::ModifyLoginWhiteRecord(const ModifyLoginWhiteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoginWhiteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoginWhiteRecordResponse rsp = ModifyLoginWhiteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoginWhiteRecordOutcome(rsp);
        else
            return ModifyLoginWhiteRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyLoginWhiteRecordOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyLoginWhiteRecordAsync(const ModifyLoginWhiteRecordRequest& request, const ModifyLoginWhiteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLoginWhiteRecordRequest&;
    using Resp = ModifyLoginWhiteRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLoginWhiteRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyLoginWhiteRecordOutcomeCallable CwpClient::ModifyLoginWhiteRecordCallable(const ModifyLoginWhiteRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLoginWhiteRecordOutcome>>();
    ModifyLoginWhiteRecordAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyLoginWhiteRecordRequest&,
        ModifyLoginWhiteRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyMachineAutoClearConfigOutcome CwpClient::ModifyMachineAutoClearConfig(const ModifyMachineAutoClearConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineAutoClearConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineAutoClearConfigResponse rsp = ModifyMachineAutoClearConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineAutoClearConfigOutcome(rsp);
        else
            return ModifyMachineAutoClearConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineAutoClearConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMachineAutoClearConfigAsync(const ModifyMachineAutoClearConfigRequest& request, const ModifyMachineAutoClearConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMachineAutoClearConfigRequest&;
    using Resp = ModifyMachineAutoClearConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMachineAutoClearConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyMachineAutoClearConfigOutcomeCallable CwpClient::ModifyMachineAutoClearConfigCallable(const ModifyMachineAutoClearConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMachineAutoClearConfigOutcome>>();
    ModifyMachineAutoClearConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyMachineAutoClearConfigRequest&,
        ModifyMachineAutoClearConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyMachineRemarkOutcome CwpClient::ModifyMachineRemark(const ModifyMachineRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMachineRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMachineRemarkResponse rsp = ModifyMachineRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMachineRemarkOutcome(rsp);
        else
            return ModifyMachineRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyMachineRemarkOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMachineRemarkAsync(const ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMachineRemarkRequest&;
    using Resp = ModifyMachineRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMachineRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyMachineRemarkOutcomeCallable CwpClient::ModifyMachineRemarkCallable(const ModifyMachineRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMachineRemarkOutcome>>();
    ModifyMachineRemarkAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyMachineRemarkRequest&,
        ModifyMachineRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyMaliciousRequestWhiteListOutcome CwpClient::ModifyMaliciousRequestWhiteList(const ModifyMaliciousRequestWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMaliciousRequestWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMaliciousRequestWhiteListResponse rsp = ModifyMaliciousRequestWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMaliciousRequestWhiteListOutcome(rsp);
        else
            return ModifyMaliciousRequestWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyMaliciousRequestWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMaliciousRequestWhiteListAsync(const ModifyMaliciousRequestWhiteListRequest& request, const ModifyMaliciousRequestWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMaliciousRequestWhiteListRequest&;
    using Resp = ModifyMaliciousRequestWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMaliciousRequestWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyMaliciousRequestWhiteListOutcomeCallable CwpClient::ModifyMaliciousRequestWhiteListCallable(const ModifyMaliciousRequestWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMaliciousRequestWhiteListOutcome>>();
    ModifyMaliciousRequestWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyMaliciousRequestWhiteListRequest&,
        ModifyMaliciousRequestWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyMalwareTimingScanSettingsOutcome CwpClient::ModifyMalwareTimingScanSettings(const ModifyMalwareTimingScanSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMalwareTimingScanSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMalwareTimingScanSettingsResponse rsp = ModifyMalwareTimingScanSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMalwareTimingScanSettingsOutcome(rsp);
        else
            return ModifyMalwareTimingScanSettingsOutcome(o.GetError());
    }
    else
    {
        return ModifyMalwareTimingScanSettingsOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMalwareTimingScanSettingsAsync(const ModifyMalwareTimingScanSettingsRequest& request, const ModifyMalwareTimingScanSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMalwareTimingScanSettingsRequest&;
    using Resp = ModifyMalwareTimingScanSettingsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMalwareTimingScanSettings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyMalwareTimingScanSettingsOutcomeCallable CwpClient::ModifyMalwareTimingScanSettingsCallable(const ModifyMalwareTimingScanSettingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMalwareTimingScanSettingsOutcome>>();
    ModifyMalwareTimingScanSettingsAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyMalwareTimingScanSettingsRequest&,
        ModifyMalwareTimingScanSettingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyMalwareWhiteListOutcome CwpClient::ModifyMalwareWhiteList(const ModifyMalwareWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMalwareWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMalwareWhiteListResponse rsp = ModifyMalwareWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMalwareWhiteListOutcome(rsp);
        else
            return ModifyMalwareWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyMalwareWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyMalwareWhiteListAsync(const ModifyMalwareWhiteListRequest& request, const ModifyMalwareWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMalwareWhiteListRequest&;
    using Resp = ModifyMalwareWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMalwareWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyMalwareWhiteListOutcomeCallable CwpClient::ModifyMalwareWhiteListCallable(const ModifyMalwareWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMalwareWhiteListOutcome>>();
    ModifyMalwareWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyMalwareWhiteListRequest&,
        ModifyMalwareWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyNetAttackSettingOutcome CwpClient::ModifyNetAttackSetting(const ModifyNetAttackSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetAttackSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetAttackSettingResponse rsp = ModifyNetAttackSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetAttackSettingOutcome(rsp);
        else
            return ModifyNetAttackSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyNetAttackSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyNetAttackSettingAsync(const ModifyNetAttackSettingRequest& request, const ModifyNetAttackSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetAttackSettingRequest&;
    using Resp = ModifyNetAttackSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetAttackSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyNetAttackSettingOutcomeCallable CwpClient::ModifyNetAttackSettingCallable(const ModifyNetAttackSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetAttackSettingOutcome>>();
    ModifyNetAttackSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyNetAttackSettingRequest&,
        ModifyNetAttackSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyNetAttackWhiteListOutcome CwpClient::ModifyNetAttackWhiteList(const ModifyNetAttackWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNetAttackWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNetAttackWhiteListResponse rsp = ModifyNetAttackWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNetAttackWhiteListOutcome(rsp);
        else
            return ModifyNetAttackWhiteListOutcome(o.GetError());
    }
    else
    {
        return ModifyNetAttackWhiteListOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyNetAttackWhiteListAsync(const ModifyNetAttackWhiteListRequest& request, const ModifyNetAttackWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNetAttackWhiteListRequest&;
    using Resp = ModifyNetAttackWhiteListResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNetAttackWhiteList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyNetAttackWhiteListOutcomeCallable CwpClient::ModifyNetAttackWhiteListCallable(const ModifyNetAttackWhiteListRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNetAttackWhiteListOutcome>>();
    ModifyNetAttackWhiteListAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyNetAttackWhiteListRequest&,
        ModifyNetAttackWhiteListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyOrderAttributeOutcome CwpClient::ModifyOrderAttribute(const ModifyOrderAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOrderAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOrderAttributeResponse rsp = ModifyOrderAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOrderAttributeOutcome(rsp);
        else
            return ModifyOrderAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyOrderAttributeOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyOrderAttributeAsync(const ModifyOrderAttributeRequest& request, const ModifyOrderAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOrderAttributeRequest&;
    using Resp = ModifyOrderAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOrderAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyOrderAttributeOutcomeCallable CwpClient::ModifyOrderAttributeCallable(const ModifyOrderAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOrderAttributeOutcome>>();
    ModifyOrderAttributeAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyOrderAttributeRequest&,
        ModifyOrderAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRansomDefenseEventsStatusOutcome CwpClient::ModifyRansomDefenseEventsStatus(const ModifyRansomDefenseEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRansomDefenseEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRansomDefenseEventsStatusResponse rsp = ModifyRansomDefenseEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRansomDefenseEventsStatusOutcome(rsp);
        else
            return ModifyRansomDefenseEventsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRansomDefenseEventsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRansomDefenseEventsStatusAsync(const ModifyRansomDefenseEventsStatusRequest& request, const ModifyRansomDefenseEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRansomDefenseEventsStatusRequest&;
    using Resp = ModifyRansomDefenseEventsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRansomDefenseEventsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRansomDefenseEventsStatusOutcomeCallable CwpClient::ModifyRansomDefenseEventsStatusCallable(const ModifyRansomDefenseEventsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRansomDefenseEventsStatusOutcome>>();
    ModifyRansomDefenseEventsStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRansomDefenseEventsStatusRequest&,
        ModifyRansomDefenseEventsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRansomDefenseStrategyStatusOutcome CwpClient::ModifyRansomDefenseStrategyStatus(const ModifyRansomDefenseStrategyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRansomDefenseStrategyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRansomDefenseStrategyStatusResponse rsp = ModifyRansomDefenseStrategyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRansomDefenseStrategyStatusOutcome(rsp);
        else
            return ModifyRansomDefenseStrategyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRansomDefenseStrategyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRansomDefenseStrategyStatusAsync(const ModifyRansomDefenseStrategyStatusRequest& request, const ModifyRansomDefenseStrategyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRansomDefenseStrategyStatusRequest&;
    using Resp = ModifyRansomDefenseStrategyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRansomDefenseStrategyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRansomDefenseStrategyStatusOutcomeCallable CwpClient::ModifyRansomDefenseStrategyStatusCallable(const ModifyRansomDefenseStrategyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRansomDefenseStrategyStatusOutcome>>();
    ModifyRansomDefenseStrategyStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRansomDefenseStrategyStatusRequest&,
        ModifyRansomDefenseStrategyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRaspMaxCpuOutcome CwpClient::ModifyRaspMaxCpu(const ModifyRaspMaxCpuRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRaspMaxCpu");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRaspMaxCpuResponse rsp = ModifyRaspMaxCpuResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRaspMaxCpuOutcome(rsp);
        else
            return ModifyRaspMaxCpuOutcome(o.GetError());
    }
    else
    {
        return ModifyRaspMaxCpuOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRaspMaxCpuAsync(const ModifyRaspMaxCpuRequest& request, const ModifyRaspMaxCpuAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRaspMaxCpuRequest&;
    using Resp = ModifyRaspMaxCpuResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRaspMaxCpu", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRaspMaxCpuOutcomeCallable CwpClient::ModifyRaspMaxCpuCallable(const ModifyRaspMaxCpuRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRaspMaxCpuOutcome>>();
    ModifyRaspMaxCpuAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRaspMaxCpuRequest&,
        ModifyRaspMaxCpuOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRaspRulesOutcome CwpClient::ModifyRaspRules(const ModifyRaspRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRaspRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRaspRulesResponse rsp = ModifyRaspRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRaspRulesOutcome(rsp);
        else
            return ModifyRaspRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyRaspRulesOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRaspRulesAsync(const ModifyRaspRulesRequest& request, const ModifyRaspRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRaspRulesRequest&;
    using Resp = ModifyRaspRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRaspRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRaspRulesOutcomeCallable CwpClient::ModifyRaspRulesCallable(const ModifyRaspRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRaspRulesOutcome>>();
    ModifyRaspRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRaspRulesRequest&,
        ModifyRaspRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyReverseShellRulesAggregationOutcome CwpClient::ModifyReverseShellRulesAggregation(const ModifyReverseShellRulesAggregationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyReverseShellRulesAggregation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyReverseShellRulesAggregationResponse rsp = ModifyReverseShellRulesAggregationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyReverseShellRulesAggregationOutcome(rsp);
        else
            return ModifyReverseShellRulesAggregationOutcome(o.GetError());
    }
    else
    {
        return ModifyReverseShellRulesAggregationOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyReverseShellRulesAggregationAsync(const ModifyReverseShellRulesAggregationRequest& request, const ModifyReverseShellRulesAggregationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyReverseShellRulesAggregationRequest&;
    using Resp = ModifyReverseShellRulesAggregationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyReverseShellRulesAggregation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyReverseShellRulesAggregationOutcomeCallable CwpClient::ModifyReverseShellRulesAggregationCallable(const ModifyReverseShellRulesAggregationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyReverseShellRulesAggregationOutcome>>();
    ModifyReverseShellRulesAggregationAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyReverseShellRulesAggregationRequest&,
        ModifyReverseShellRulesAggregationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRiskDnsPolicyOutcome CwpClient::ModifyRiskDnsPolicy(const ModifyRiskDnsPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskDnsPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskDnsPolicyResponse rsp = ModifyRiskDnsPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskDnsPolicyOutcome(rsp);
        else
            return ModifyRiskDnsPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskDnsPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRiskDnsPolicyAsync(const ModifyRiskDnsPolicyRequest& request, const ModifyRiskDnsPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskDnsPolicyRequest&;
    using Resp = ModifyRiskDnsPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskDnsPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRiskDnsPolicyOutcomeCallable CwpClient::ModifyRiskDnsPolicyCallable(const ModifyRiskDnsPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskDnsPolicyOutcome>>();
    ModifyRiskDnsPolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRiskDnsPolicyRequest&,
        ModifyRiskDnsPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRiskDnsPolicyStatusOutcome CwpClient::ModifyRiskDnsPolicyStatus(const ModifyRiskDnsPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskDnsPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskDnsPolicyStatusResponse rsp = ModifyRiskDnsPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskDnsPolicyStatusOutcome(rsp);
        else
            return ModifyRiskDnsPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskDnsPolicyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRiskDnsPolicyStatusAsync(const ModifyRiskDnsPolicyStatusRequest& request, const ModifyRiskDnsPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskDnsPolicyStatusRequest&;
    using Resp = ModifyRiskDnsPolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskDnsPolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRiskDnsPolicyStatusOutcomeCallable CwpClient::ModifyRiskDnsPolicyStatusCallable(const ModifyRiskDnsPolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskDnsPolicyStatusOutcome>>();
    ModifyRiskDnsPolicyStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRiskDnsPolicyStatusRequest&,
        ModifyRiskDnsPolicyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyRiskEventsStatusOutcome CwpClient::ModifyRiskEventsStatus(const ModifyRiskEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskEventsStatusResponse rsp = ModifyRiskEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskEventsStatusOutcome(rsp);
        else
            return ModifyRiskEventsStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskEventsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyRiskEventsStatusAsync(const ModifyRiskEventsStatusRequest& request, const ModifyRiskEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskEventsStatusRequest&;
    using Resp = ModifyRiskEventsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskEventsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyRiskEventsStatusOutcomeCallable CwpClient::ModifyRiskEventsStatusCallable(const ModifyRiskEventsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskEventsStatusOutcome>>();
    ModifyRiskEventsStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyRiskEventsStatusRequest&,
        ModifyRiskEventsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyUsersConfigOutcome CwpClient::ModifyUsersConfig(const ModifyUsersConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUsersConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUsersConfigResponse rsp = ModifyUsersConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUsersConfigOutcome(rsp);
        else
            return ModifyUsersConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyUsersConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyUsersConfigAsync(const ModifyUsersConfigRequest& request, const ModifyUsersConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUsersConfigRequest&;
    using Resp = ModifyUsersConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUsersConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyUsersConfigOutcomeCallable CwpClient::ModifyUsersConfigCallable(const ModifyUsersConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUsersConfigOutcome>>();
    ModifyUsersConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyUsersConfigRequest&,
        ModifyUsersConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyVulDefenceEventStatusOutcome CwpClient::ModifyVulDefenceEventStatus(const ModifyVulDefenceEventStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVulDefenceEventStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVulDefenceEventStatusResponse rsp = ModifyVulDefenceEventStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVulDefenceEventStatusOutcome(rsp);
        else
            return ModifyVulDefenceEventStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyVulDefenceEventStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyVulDefenceEventStatusAsync(const ModifyVulDefenceEventStatusRequest& request, const ModifyVulDefenceEventStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVulDefenceEventStatusRequest&;
    using Resp = ModifyVulDefenceEventStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVulDefenceEventStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyVulDefenceEventStatusOutcomeCallable CwpClient::ModifyVulDefenceEventStatusCallable(const ModifyVulDefenceEventStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVulDefenceEventStatusOutcome>>();
    ModifyVulDefenceEventStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyVulDefenceEventStatusRequest&,
        ModifyVulDefenceEventStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyVulDefenceSettingOutcome CwpClient::ModifyVulDefenceSetting(const ModifyVulDefenceSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVulDefenceSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVulDefenceSettingResponse rsp = ModifyVulDefenceSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVulDefenceSettingOutcome(rsp);
        else
            return ModifyVulDefenceSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyVulDefenceSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyVulDefenceSettingAsync(const ModifyVulDefenceSettingRequest& request, const ModifyVulDefenceSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyVulDefenceSettingRequest&;
    using Resp = ModifyVulDefenceSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyVulDefenceSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyVulDefenceSettingOutcomeCallable CwpClient::ModifyVulDefenceSettingCallable(const ModifyVulDefenceSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyVulDefenceSettingOutcome>>();
    ModifyVulDefenceSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyVulDefenceSettingRequest&,
        ModifyVulDefenceSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWarningHostConfigOutcome CwpClient::ModifyWarningHostConfig(const ModifyWarningHostConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWarningHostConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWarningHostConfigResponse rsp = ModifyWarningHostConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWarningHostConfigOutcome(rsp);
        else
            return ModifyWarningHostConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyWarningHostConfigOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWarningHostConfigAsync(const ModifyWarningHostConfigRequest& request, const ModifyWarningHostConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWarningHostConfigRequest&;
    using Resp = ModifyWarningHostConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWarningHostConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWarningHostConfigOutcomeCallable CwpClient::ModifyWarningHostConfigCallable(const ModifyWarningHostConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWarningHostConfigOutcome>>();
    ModifyWarningHostConfigAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWarningHostConfigRequest&,
        ModifyWarningHostConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWarningSettingOutcome CwpClient::ModifyWarningSetting(const ModifyWarningSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWarningSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWarningSettingResponse rsp = ModifyWarningSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWarningSettingOutcome(rsp);
        else
            return ModifyWarningSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyWarningSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWarningSettingAsync(const ModifyWarningSettingRequest& request, const ModifyWarningSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWarningSettingRequest&;
    using Resp = ModifyWarningSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWarningSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWarningSettingOutcomeCallable CwpClient::ModifyWarningSettingCallable(const ModifyWarningSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWarningSettingOutcome>>();
    ModifyWarningSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWarningSettingRequest&,
        ModifyWarningSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebHookPolicyOutcome CwpClient::ModifyWebHookPolicy(const ModifyWebHookPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookPolicyResponse rsp = ModifyWebHookPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookPolicyOutcome(rsp);
        else
            return ModifyWebHookPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookPolicyOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookPolicyAsync(const ModifyWebHookPolicyRequest& request, const ModifyWebHookPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebHookPolicyRequest&;
    using Resp = ModifyWebHookPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebHookPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebHookPolicyOutcomeCallable CwpClient::ModifyWebHookPolicyCallable(const ModifyWebHookPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebHookPolicyOutcome>>();
    ModifyWebHookPolicyAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebHookPolicyRequest&,
        ModifyWebHookPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebHookPolicyStatusOutcome CwpClient::ModifyWebHookPolicyStatus(const ModifyWebHookPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookPolicyStatusResponse rsp = ModifyWebHookPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookPolicyStatusOutcome(rsp);
        else
            return ModifyWebHookPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookPolicyStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookPolicyStatusAsync(const ModifyWebHookPolicyStatusRequest& request, const ModifyWebHookPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebHookPolicyStatusRequest&;
    using Resp = ModifyWebHookPolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebHookPolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebHookPolicyStatusOutcomeCallable CwpClient::ModifyWebHookPolicyStatusCallable(const ModifyWebHookPolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebHookPolicyStatusOutcome>>();
    ModifyWebHookPolicyStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebHookPolicyStatusRequest&,
        ModifyWebHookPolicyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebHookReceiverOutcome CwpClient::ModifyWebHookReceiver(const ModifyWebHookReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookReceiverResponse rsp = ModifyWebHookReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookReceiverOutcome(rsp);
        else
            return ModifyWebHookReceiverOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookReceiverOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookReceiverAsync(const ModifyWebHookReceiverRequest& request, const ModifyWebHookReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebHookReceiverRequest&;
    using Resp = ModifyWebHookReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebHookReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebHookReceiverOutcomeCallable CwpClient::ModifyWebHookReceiverCallable(const ModifyWebHookReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebHookReceiverOutcome>>();
    ModifyWebHookReceiverAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebHookReceiverRequest&,
        ModifyWebHookReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebHookRuleOutcome CwpClient::ModifyWebHookRule(const ModifyWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookRuleResponse rsp = ModifyWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookRuleOutcome(rsp);
        else
            return ModifyWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookRuleAsync(const ModifyWebHookRuleRequest& request, const ModifyWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebHookRuleRequest&;
    using Resp = ModifyWebHookRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebHookRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebHookRuleOutcomeCallable CwpClient::ModifyWebHookRuleCallable(const ModifyWebHookRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebHookRuleOutcome>>();
    ModifyWebHookRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebHookRuleRequest&,
        ModifyWebHookRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebHookRuleStatusOutcome CwpClient::ModifyWebHookRuleStatus(const ModifyWebHookRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebHookRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebHookRuleStatusResponse rsp = ModifyWebHookRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebHookRuleStatusOutcome(rsp);
        else
            return ModifyWebHookRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWebHookRuleStatusOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebHookRuleStatusAsync(const ModifyWebHookRuleStatusRequest& request, const ModifyWebHookRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebHookRuleStatusRequest&;
    using Resp = ModifyWebHookRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebHookRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebHookRuleStatusOutcomeCallable CwpClient::ModifyWebHookRuleStatusCallable(const ModifyWebHookRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebHookRuleStatusOutcome>>();
    ModifyWebHookRuleStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebHookRuleStatusRequest&,
        ModifyWebHookRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebPageProtectDirOutcome CwpClient::ModifyWebPageProtectDir(const ModifyWebPageProtectDirRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebPageProtectDir");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebPageProtectDirResponse rsp = ModifyWebPageProtectDirResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebPageProtectDirOutcome(rsp);
        else
            return ModifyWebPageProtectDirOutcome(o.GetError());
    }
    else
    {
        return ModifyWebPageProtectDirOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebPageProtectDirAsync(const ModifyWebPageProtectDirRequest& request, const ModifyWebPageProtectDirAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebPageProtectDirRequest&;
    using Resp = ModifyWebPageProtectDirResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebPageProtectDir", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebPageProtectDirOutcomeCallable CwpClient::ModifyWebPageProtectDirCallable(const ModifyWebPageProtectDirRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebPageProtectDirOutcome>>();
    ModifyWebPageProtectDirAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebPageProtectDirRequest&,
        ModifyWebPageProtectDirOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebPageProtectSettingOutcome CwpClient::ModifyWebPageProtectSetting(const ModifyWebPageProtectSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebPageProtectSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebPageProtectSettingResponse rsp = ModifyWebPageProtectSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebPageProtectSettingOutcome(rsp);
        else
            return ModifyWebPageProtectSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyWebPageProtectSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebPageProtectSettingAsync(const ModifyWebPageProtectSettingRequest& request, const ModifyWebPageProtectSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebPageProtectSettingRequest&;
    using Resp = ModifyWebPageProtectSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebPageProtectSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebPageProtectSettingOutcomeCallable CwpClient::ModifyWebPageProtectSettingCallable(const ModifyWebPageProtectSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebPageProtectSettingOutcome>>();
    ModifyWebPageProtectSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebPageProtectSettingRequest&,
        ModifyWebPageProtectSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ModifyWebPageProtectSwitchOutcome CwpClient::ModifyWebPageProtectSwitch(const ModifyWebPageProtectSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWebPageProtectSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWebPageProtectSwitchResponse rsp = ModifyWebPageProtectSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWebPageProtectSwitchOutcome(rsp);
        else
            return ModifyWebPageProtectSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyWebPageProtectSwitchOutcome(outcome.GetError());
    }
}

void CwpClient::ModifyWebPageProtectSwitchAsync(const ModifyWebPageProtectSwitchRequest& request, const ModifyWebPageProtectSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWebPageProtectSwitchRequest&;
    using Resp = ModifyWebPageProtectSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWebPageProtectSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ModifyWebPageProtectSwitchOutcomeCallable CwpClient::ModifyWebPageProtectSwitchCallable(const ModifyWebPageProtectSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWebPageProtectSwitchOutcome>>();
    ModifyWebPageProtectSwitchAsync(
    request,
    [prom](
        const CwpClient*,
        const ModifyWebPageProtectSwitchRequest&,
        ModifyWebPageProtectSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::RansomDefenseRollbackOutcome CwpClient::RansomDefenseRollback(const RansomDefenseRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "RansomDefenseRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RansomDefenseRollbackResponse rsp = RansomDefenseRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RansomDefenseRollbackOutcome(rsp);
        else
            return RansomDefenseRollbackOutcome(o.GetError());
    }
    else
    {
        return RansomDefenseRollbackOutcome(outcome.GetError());
    }
}

void CwpClient::RansomDefenseRollbackAsync(const RansomDefenseRollbackRequest& request, const RansomDefenseRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RansomDefenseRollbackRequest&;
    using Resp = RansomDefenseRollbackResponse;

    DoRequestAsync<Req, Resp>(
        "RansomDefenseRollback", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::RansomDefenseRollbackOutcomeCallable CwpClient::RansomDefenseRollbackCallable(const RansomDefenseRollbackRequest &request)
{
    const auto prom = std::make_shared<std::promise<RansomDefenseRollbackOutcome>>();
    RansomDefenseRollbackAsync(
    request,
    [prom](
        const CwpClient*,
        const RansomDefenseRollbackRequest&,
        RansomDefenseRollbackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::RecoverMalwaresOutcome CwpClient::RecoverMalwares(const RecoverMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverMalwaresResponse rsp = RecoverMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverMalwaresOutcome(rsp);
        else
            return RecoverMalwaresOutcome(o.GetError());
    }
    else
    {
        return RecoverMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::RecoverMalwaresAsync(const RecoverMalwaresRequest& request, const RecoverMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverMalwaresRequest&;
    using Resp = RecoverMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::RecoverMalwaresOutcomeCallable CwpClient::RecoverMalwaresCallable(const RecoverMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverMalwaresOutcome>>();
    RecoverMalwaresAsync(
    request,
    [prom](
        const CwpClient*,
        const RecoverMalwaresRequest&,
        RecoverMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::RemoveLocalStorageItemOutcome CwpClient::RemoveLocalStorageItem(const RemoveLocalStorageItemRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveLocalStorageItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveLocalStorageItemResponse rsp = RemoveLocalStorageItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveLocalStorageItemOutcome(rsp);
        else
            return RemoveLocalStorageItemOutcome(o.GetError());
    }
    else
    {
        return RemoveLocalStorageItemOutcome(outcome.GetError());
    }
}

void CwpClient::RemoveLocalStorageItemAsync(const RemoveLocalStorageItemRequest& request, const RemoveLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveLocalStorageItemRequest&;
    using Resp = RemoveLocalStorageItemResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveLocalStorageItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::RemoveLocalStorageItemOutcomeCallable CwpClient::RemoveLocalStorageItemCallable(const RemoveLocalStorageItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveLocalStorageItemOutcome>>();
    RemoveLocalStorageItemAsync(
    request,
    [prom](
        const CwpClient*,
        const RemoveLocalStorageItemRequest&,
        RemoveLocalStorageItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::RemoveMachineOutcome CwpClient::RemoveMachine(const RemoveMachineRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveMachine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveMachineResponse rsp = RemoveMachineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveMachineOutcome(rsp);
        else
            return RemoveMachineOutcome(o.GetError());
    }
    else
    {
        return RemoveMachineOutcome(outcome.GetError());
    }
}

void CwpClient::RemoveMachineAsync(const RemoveMachineRequest& request, const RemoveMachineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveMachineRequest&;
    using Resp = RemoveMachineResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveMachine", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::RemoveMachineOutcomeCallable CwpClient::RemoveMachineCallable(const RemoveMachineRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveMachineOutcome>>();
    RemoveMachineAsync(
    request,
    [prom](
        const CwpClient*,
        const RemoveMachineRequest&,
        RemoveMachineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::RetryCreateSnapshotOutcome CwpClient::RetryCreateSnapshot(const RetryCreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RetryCreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryCreateSnapshotResponse rsp = RetryCreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryCreateSnapshotOutcome(rsp);
        else
            return RetryCreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return RetryCreateSnapshotOutcome(outcome.GetError());
    }
}

void CwpClient::RetryCreateSnapshotAsync(const RetryCreateSnapshotRequest& request, const RetryCreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryCreateSnapshotRequest&;
    using Resp = RetryCreateSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "RetryCreateSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::RetryCreateSnapshotOutcomeCallable CwpClient::RetryCreateSnapshotCallable(const RetryCreateSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryCreateSnapshotOutcome>>();
    RetryCreateSnapshotAsync(
    request,
    [prom](
        const CwpClient*,
        const RetryCreateSnapshotRequest&,
        RetryCreateSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::RetryVulFixOutcome CwpClient::RetryVulFix(const RetryVulFixRequest &request)
{
    auto outcome = MakeRequest(request, "RetryVulFix");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryVulFixResponse rsp = RetryVulFixResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryVulFixOutcome(rsp);
        else
            return RetryVulFixOutcome(o.GetError());
    }
    else
    {
        return RetryVulFixOutcome(outcome.GetError());
    }
}

void CwpClient::RetryVulFixAsync(const RetryVulFixRequest& request, const RetryVulFixAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryVulFixRequest&;
    using Resp = RetryVulFixResponse;

    DoRequestAsync<Req, Resp>(
        "RetryVulFix", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::RetryVulFixOutcomeCallable CwpClient::RetryVulFixCallable(const RetryVulFixRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryVulFixOutcome>>();
    RetryVulFixAsync(
    request,
    [prom](
        const CwpClient*,
        const RetryVulFixRequest&,
        RetryVulFixOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ScanAssetOutcome CwpClient::ScanAsset(const ScanAssetRequest &request)
{
    auto outcome = MakeRequest(request, "ScanAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanAssetResponse rsp = ScanAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanAssetOutcome(rsp);
        else
            return ScanAssetOutcome(o.GetError());
    }
    else
    {
        return ScanAssetOutcome(outcome.GetError());
    }
}

void CwpClient::ScanAssetAsync(const ScanAssetRequest& request, const ScanAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanAssetRequest&;
    using Resp = ScanAssetResponse;

    DoRequestAsync<Req, Resp>(
        "ScanAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ScanAssetOutcomeCallable CwpClient::ScanAssetCallable(const ScanAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanAssetOutcome>>();
    ScanAssetAsync(
    request,
    [prom](
        const CwpClient*,
        const ScanAssetRequest&,
        ScanAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ScanBaselineOutcome CwpClient::ScanBaseline(const ScanBaselineRequest &request)
{
    auto outcome = MakeRequest(request, "ScanBaseline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanBaselineResponse rsp = ScanBaselineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanBaselineOutcome(rsp);
        else
            return ScanBaselineOutcome(o.GetError());
    }
    else
    {
        return ScanBaselineOutcome(outcome.GetError());
    }
}

void CwpClient::ScanBaselineAsync(const ScanBaselineRequest& request, const ScanBaselineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanBaselineRequest&;
    using Resp = ScanBaselineResponse;

    DoRequestAsync<Req, Resp>(
        "ScanBaseline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ScanBaselineOutcomeCallable CwpClient::ScanBaselineCallable(const ScanBaselineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanBaselineOutcome>>();
    ScanBaselineAsync(
    request,
    [prom](
        const CwpClient*,
        const ScanBaselineRequest&,
        ScanBaselineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ScanTaskAgainOutcome CwpClient::ScanTaskAgain(const ScanTaskAgainRequest &request)
{
    auto outcome = MakeRequest(request, "ScanTaskAgain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanTaskAgainResponse rsp = ScanTaskAgainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanTaskAgainOutcome(rsp);
        else
            return ScanTaskAgainOutcome(o.GetError());
    }
    else
    {
        return ScanTaskAgainOutcome(outcome.GetError());
    }
}

void CwpClient::ScanTaskAgainAsync(const ScanTaskAgainRequest& request, const ScanTaskAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanTaskAgainRequest&;
    using Resp = ScanTaskAgainResponse;

    DoRequestAsync<Req, Resp>(
        "ScanTaskAgain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ScanTaskAgainOutcomeCallable CwpClient::ScanTaskAgainCallable(const ScanTaskAgainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanTaskAgainOutcome>>();
    ScanTaskAgainAsync(
    request,
    [prom](
        const CwpClient*,
        const ScanTaskAgainRequest&,
        ScanTaskAgainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ScanVulOutcome CwpClient::ScanVul(const ScanVulRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVul");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVulResponse rsp = ScanVulResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVulOutcome(rsp);
        else
            return ScanVulOutcome(o.GetError());
    }
    else
    {
        return ScanVulOutcome(outcome.GetError());
    }
}

void CwpClient::ScanVulAsync(const ScanVulRequest& request, const ScanVulAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanVulRequest&;
    using Resp = ScanVulResponse;

    DoRequestAsync<Req, Resp>(
        "ScanVul", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ScanVulOutcomeCallable CwpClient::ScanVulCallable(const ScanVulRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanVulOutcome>>();
    ScanVulAsync(
    request,
    [prom](
        const CwpClient*,
        const ScanVulRequest&,
        ScanVulOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ScanVulAgainOutcome CwpClient::ScanVulAgain(const ScanVulAgainRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVulAgain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVulAgainResponse rsp = ScanVulAgainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVulAgainOutcome(rsp);
        else
            return ScanVulAgainOutcome(o.GetError());
    }
    else
    {
        return ScanVulAgainOutcome(outcome.GetError());
    }
}

void CwpClient::ScanVulAgainAsync(const ScanVulAgainRequest& request, const ScanVulAgainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanVulAgainRequest&;
    using Resp = ScanVulAgainResponse;

    DoRequestAsync<Req, Resp>(
        "ScanVulAgain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ScanVulAgainOutcomeCallable CwpClient::ScanVulAgainCallable(const ScanVulAgainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanVulAgainOutcome>>();
    ScanVulAgainAsync(
    request,
    [prom](
        const CwpClient*,
        const ScanVulAgainRequest&,
        ScanVulAgainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::ScanVulSettingOutcome CwpClient::ScanVulSetting(const ScanVulSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ScanVulSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanVulSettingResponse rsp = ScanVulSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanVulSettingOutcome(rsp);
        else
            return ScanVulSettingOutcome(o.GetError());
    }
    else
    {
        return ScanVulSettingOutcome(outcome.GetError());
    }
}

void CwpClient::ScanVulSettingAsync(const ScanVulSettingRequest& request, const ScanVulSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScanVulSettingRequest&;
    using Resp = ScanVulSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ScanVulSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::ScanVulSettingOutcomeCallable CwpClient::ScanVulSettingCallable(const ScanVulSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScanVulSettingOutcome>>();
    ScanVulSettingAsync(
    request,
    [prom](
        const CwpClient*,
        const ScanVulSettingRequest&,
        ScanVulSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SearchLogOutcome CwpClient::SearchLog(const SearchLogRequest &request)
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

void CwpClient::SearchLogAsync(const SearchLogRequest& request, const SearchLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CwpClient::SearchLogOutcomeCallable CwpClient::SearchLogCallable(const SearchLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchLogOutcome>>();
    SearchLogAsync(
    request,
    [prom](
        const CwpClient*,
        const SearchLogRequest&,
        SearchLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SeparateMalwaresOutcome CwpClient::SeparateMalwares(const SeparateMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "SeparateMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SeparateMalwaresResponse rsp = SeparateMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SeparateMalwaresOutcome(rsp);
        else
            return SeparateMalwaresOutcome(o.GetError());
    }
    else
    {
        return SeparateMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::SeparateMalwaresAsync(const SeparateMalwaresRequest& request, const SeparateMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SeparateMalwaresRequest&;
    using Resp = SeparateMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "SeparateMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SeparateMalwaresOutcomeCallable CwpClient::SeparateMalwaresCallable(const SeparateMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<SeparateMalwaresOutcome>>();
    SeparateMalwaresAsync(
    request,
    [prom](
        const CwpClient*,
        const SeparateMalwaresRequest&,
        SeparateMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SetBashEventsStatusOutcome CwpClient::SetBashEventsStatus(const SetBashEventsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "SetBashEventsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetBashEventsStatusResponse rsp = SetBashEventsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetBashEventsStatusOutcome(rsp);
        else
            return SetBashEventsStatusOutcome(o.GetError());
    }
    else
    {
        return SetBashEventsStatusOutcome(outcome.GetError());
    }
}

void CwpClient::SetBashEventsStatusAsync(const SetBashEventsStatusRequest& request, const SetBashEventsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetBashEventsStatusRequest&;
    using Resp = SetBashEventsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "SetBashEventsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SetBashEventsStatusOutcomeCallable CwpClient::SetBashEventsStatusCallable(const SetBashEventsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetBashEventsStatusOutcome>>();
    SetBashEventsStatusAsync(
    request,
    [prom](
        const CwpClient*,
        const SetBashEventsStatusRequest&,
        SetBashEventsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SetLocalStorageExpireOutcome CwpClient::SetLocalStorageExpire(const SetLocalStorageExpireRequest &request)
{
    auto outcome = MakeRequest(request, "SetLocalStorageExpire");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLocalStorageExpireResponse rsp = SetLocalStorageExpireResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLocalStorageExpireOutcome(rsp);
        else
            return SetLocalStorageExpireOutcome(o.GetError());
    }
    else
    {
        return SetLocalStorageExpireOutcome(outcome.GetError());
    }
}

void CwpClient::SetLocalStorageExpireAsync(const SetLocalStorageExpireRequest& request, const SetLocalStorageExpireAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLocalStorageExpireRequest&;
    using Resp = SetLocalStorageExpireResponse;

    DoRequestAsync<Req, Resp>(
        "SetLocalStorageExpire", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SetLocalStorageExpireOutcomeCallable CwpClient::SetLocalStorageExpireCallable(const SetLocalStorageExpireRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLocalStorageExpireOutcome>>();
    SetLocalStorageExpireAsync(
    request,
    [prom](
        const CwpClient*,
        const SetLocalStorageExpireRequest&,
        SetLocalStorageExpireOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SetLocalStorageItemOutcome CwpClient::SetLocalStorageItem(const SetLocalStorageItemRequest &request)
{
    auto outcome = MakeRequest(request, "SetLocalStorageItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetLocalStorageItemResponse rsp = SetLocalStorageItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetLocalStorageItemOutcome(rsp);
        else
            return SetLocalStorageItemOutcome(o.GetError());
    }
    else
    {
        return SetLocalStorageItemOutcome(outcome.GetError());
    }
}

void CwpClient::SetLocalStorageItemAsync(const SetLocalStorageItemRequest& request, const SetLocalStorageItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetLocalStorageItemRequest&;
    using Resp = SetLocalStorageItemResponse;

    DoRequestAsync<Req, Resp>(
        "SetLocalStorageItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SetLocalStorageItemOutcomeCallable CwpClient::SetLocalStorageItemCallable(const SetLocalStorageItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetLocalStorageItemOutcome>>();
    SetLocalStorageItemAsync(
    request,
    [prom](
        const CwpClient*,
        const SetLocalStorageItemRequest&,
        SetLocalStorageItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::StartBaselineDetectOutcome CwpClient::StartBaselineDetect(const StartBaselineDetectRequest &request)
{
    auto outcome = MakeRequest(request, "StartBaselineDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBaselineDetectResponse rsp = StartBaselineDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBaselineDetectOutcome(rsp);
        else
            return StartBaselineDetectOutcome(o.GetError());
    }
    else
    {
        return StartBaselineDetectOutcome(outcome.GetError());
    }
}

void CwpClient::StartBaselineDetectAsync(const StartBaselineDetectRequest& request, const StartBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartBaselineDetectRequest&;
    using Resp = StartBaselineDetectResponse;

    DoRequestAsync<Req, Resp>(
        "StartBaselineDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::StartBaselineDetectOutcomeCallable CwpClient::StartBaselineDetectCallable(const StartBaselineDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartBaselineDetectOutcome>>();
    StartBaselineDetectAsync(
    request,
    [prom](
        const CwpClient*,
        const StartBaselineDetectRequest&,
        StartBaselineDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::StopAssetScanOutcome CwpClient::StopAssetScan(const StopAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "StopAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopAssetScanResponse rsp = StopAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopAssetScanOutcome(rsp);
        else
            return StopAssetScanOutcome(o.GetError());
    }
    else
    {
        return StopAssetScanOutcome(outcome.GetError());
    }
}

void CwpClient::StopAssetScanAsync(const StopAssetScanRequest& request, const StopAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopAssetScanRequest&;
    using Resp = StopAssetScanResponse;

    DoRequestAsync<Req, Resp>(
        "StopAssetScan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::StopAssetScanOutcomeCallable CwpClient::StopAssetScanCallable(const StopAssetScanRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopAssetScanOutcome>>();
    StopAssetScanAsync(
    request,
    [prom](
        const CwpClient*,
        const StopAssetScanRequest&,
        StopAssetScanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::StopBaselineDetectOutcome CwpClient::StopBaselineDetect(const StopBaselineDetectRequest &request)
{
    auto outcome = MakeRequest(request, "StopBaselineDetect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopBaselineDetectResponse rsp = StopBaselineDetectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopBaselineDetectOutcome(rsp);
        else
            return StopBaselineDetectOutcome(o.GetError());
    }
    else
    {
        return StopBaselineDetectOutcome(outcome.GetError());
    }
}

void CwpClient::StopBaselineDetectAsync(const StopBaselineDetectRequest& request, const StopBaselineDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopBaselineDetectRequest&;
    using Resp = StopBaselineDetectResponse;

    DoRequestAsync<Req, Resp>(
        "StopBaselineDetect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::StopBaselineDetectOutcomeCallable CwpClient::StopBaselineDetectCallable(const StopBaselineDetectRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopBaselineDetectOutcome>>();
    StopBaselineDetectAsync(
    request,
    [prom](
        const CwpClient*,
        const StopBaselineDetectRequest&,
        StopBaselineDetectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::StopNoticeBanTipsOutcome CwpClient::StopNoticeBanTips(const StopNoticeBanTipsRequest &request)
{
    auto outcome = MakeRequest(request, "StopNoticeBanTips");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopNoticeBanTipsResponse rsp = StopNoticeBanTipsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopNoticeBanTipsOutcome(rsp);
        else
            return StopNoticeBanTipsOutcome(o.GetError());
    }
    else
    {
        return StopNoticeBanTipsOutcome(outcome.GetError());
    }
}

void CwpClient::StopNoticeBanTipsAsync(const StopNoticeBanTipsRequest& request, const StopNoticeBanTipsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopNoticeBanTipsRequest&;
    using Resp = StopNoticeBanTipsResponse;

    DoRequestAsync<Req, Resp>(
        "StopNoticeBanTips", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::StopNoticeBanTipsOutcomeCallable CwpClient::StopNoticeBanTipsCallable(const StopNoticeBanTipsRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopNoticeBanTipsOutcome>>();
    StopNoticeBanTipsAsync(
    request,
    [prom](
        const CwpClient*,
        const StopNoticeBanTipsRequest&,
        StopNoticeBanTipsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SwitchBashRulesOutcome CwpClient::SwitchBashRules(const SwitchBashRulesRequest &request)
{
    auto outcome = MakeRequest(request, "SwitchBashRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SwitchBashRulesResponse rsp = SwitchBashRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SwitchBashRulesOutcome(rsp);
        else
            return SwitchBashRulesOutcome(o.GetError());
    }
    else
    {
        return SwitchBashRulesOutcome(outcome.GetError());
    }
}

void CwpClient::SwitchBashRulesAsync(const SwitchBashRulesRequest& request, const SwitchBashRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SwitchBashRulesRequest&;
    using Resp = SwitchBashRulesResponse;

    DoRequestAsync<Req, Resp>(
        "SwitchBashRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SwitchBashRulesOutcomeCallable CwpClient::SwitchBashRulesCallable(const SwitchBashRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SwitchBashRulesOutcome>>();
    SwitchBashRulesAsync(
    request,
    [prom](
        const CwpClient*,
        const SwitchBashRulesRequest&,
        SwitchBashRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SyncAssetScanOutcome CwpClient::SyncAssetScan(const SyncAssetScanRequest &request)
{
    auto outcome = MakeRequest(request, "SyncAssetScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncAssetScanResponse rsp = SyncAssetScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncAssetScanOutcome(rsp);
        else
            return SyncAssetScanOutcome(o.GetError());
    }
    else
    {
        return SyncAssetScanOutcome(outcome.GetError());
    }
}

void CwpClient::SyncAssetScanAsync(const SyncAssetScanRequest& request, const SyncAssetScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncAssetScanRequest&;
    using Resp = SyncAssetScanResponse;

    DoRequestAsync<Req, Resp>(
        "SyncAssetScan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SyncAssetScanOutcomeCallable CwpClient::SyncAssetScanCallable(const SyncAssetScanRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncAssetScanOutcome>>();
    SyncAssetScanAsync(
    request,
    [prom](
        const CwpClient*,
        const SyncAssetScanRequest&,
        SyncAssetScanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SyncBaselineDetectSummaryOutcome CwpClient::SyncBaselineDetectSummary(const SyncBaselineDetectSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "SyncBaselineDetectSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncBaselineDetectSummaryResponse rsp = SyncBaselineDetectSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncBaselineDetectSummaryOutcome(rsp);
        else
            return SyncBaselineDetectSummaryOutcome(o.GetError());
    }
    else
    {
        return SyncBaselineDetectSummaryOutcome(outcome.GetError());
    }
}

void CwpClient::SyncBaselineDetectSummaryAsync(const SyncBaselineDetectSummaryRequest& request, const SyncBaselineDetectSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncBaselineDetectSummaryRequest&;
    using Resp = SyncBaselineDetectSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "SyncBaselineDetectSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SyncBaselineDetectSummaryOutcomeCallable CwpClient::SyncBaselineDetectSummaryCallable(const SyncBaselineDetectSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncBaselineDetectSummaryOutcome>>();
    SyncBaselineDetectSummaryAsync(
    request,
    [prom](
        const CwpClient*,
        const SyncBaselineDetectSummaryRequest&,
        SyncBaselineDetectSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::SyncMachinesOutcome CwpClient::SyncMachines(const SyncMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "SyncMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncMachinesResponse rsp = SyncMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncMachinesOutcome(rsp);
        else
            return SyncMachinesOutcome(o.GetError());
    }
    else
    {
        return SyncMachinesOutcome(outcome.GetError());
    }
}

void CwpClient::SyncMachinesAsync(const SyncMachinesRequest& request, const SyncMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncMachinesRequest&;
    using Resp = SyncMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "SyncMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::SyncMachinesOutcomeCallable CwpClient::SyncMachinesCallable(const SyncMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncMachinesOutcome>>();
    SyncMachinesAsync(
    request,
    [prom](
        const CwpClient*,
        const SyncMachinesRequest&,
        SyncMachinesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::TestWebHookRuleOutcome CwpClient::TestWebHookRule(const TestWebHookRuleRequest &request)
{
    auto outcome = MakeRequest(request, "TestWebHookRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TestWebHookRuleResponse rsp = TestWebHookRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TestWebHookRuleOutcome(rsp);
        else
            return TestWebHookRuleOutcome(o.GetError());
    }
    else
    {
        return TestWebHookRuleOutcome(outcome.GetError());
    }
}

void CwpClient::TestWebHookRuleAsync(const TestWebHookRuleRequest& request, const TestWebHookRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TestWebHookRuleRequest&;
    using Resp = TestWebHookRuleResponse;

    DoRequestAsync<Req, Resp>(
        "TestWebHookRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::TestWebHookRuleOutcomeCallable CwpClient::TestWebHookRuleCallable(const TestWebHookRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<TestWebHookRuleOutcome>>();
    TestWebHookRuleAsync(
    request,
    [prom](
        const CwpClient*,
        const TestWebHookRuleRequest&,
        TestWebHookRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::TrustMalwaresOutcome CwpClient::TrustMalwares(const TrustMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "TrustMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TrustMalwaresResponse rsp = TrustMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TrustMalwaresOutcome(rsp);
        else
            return TrustMalwaresOutcome(o.GetError());
    }
    else
    {
        return TrustMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::TrustMalwaresAsync(const TrustMalwaresRequest& request, const TrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TrustMalwaresRequest&;
    using Resp = TrustMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "TrustMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::TrustMalwaresOutcomeCallable CwpClient::TrustMalwaresCallable(const TrustMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<TrustMalwaresOutcome>>();
    TrustMalwaresAsync(
    request,
    [prom](
        const CwpClient*,
        const TrustMalwaresRequest&,
        TrustMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::UntrustMalwaresOutcome CwpClient::UntrustMalwares(const UntrustMalwaresRequest &request)
{
    auto outcome = MakeRequest(request, "UntrustMalwares");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UntrustMalwaresResponse rsp = UntrustMalwaresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UntrustMalwaresOutcome(rsp);
        else
            return UntrustMalwaresOutcome(o.GetError());
    }
    else
    {
        return UntrustMalwaresOutcome(outcome.GetError());
    }
}

void CwpClient::UntrustMalwaresAsync(const UntrustMalwaresRequest& request, const UntrustMalwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UntrustMalwaresRequest&;
    using Resp = UntrustMalwaresResponse;

    DoRequestAsync<Req, Resp>(
        "UntrustMalwares", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::UntrustMalwaresOutcomeCallable CwpClient::UntrustMalwaresCallable(const UntrustMalwaresRequest &request)
{
    const auto prom = std::make_shared<std::promise<UntrustMalwaresOutcome>>();
    UntrustMalwaresAsync(
    request,
    [prom](
        const CwpClient*,
        const UntrustMalwaresRequest&,
        UntrustMalwaresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::UpdateBaselineStrategyOutcome CwpClient::UpdateBaselineStrategy(const UpdateBaselineStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateBaselineStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateBaselineStrategyResponse rsp = UpdateBaselineStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateBaselineStrategyOutcome(rsp);
        else
            return UpdateBaselineStrategyOutcome(o.GetError());
    }
    else
    {
        return UpdateBaselineStrategyOutcome(outcome.GetError());
    }
}

void CwpClient::UpdateBaselineStrategyAsync(const UpdateBaselineStrategyRequest& request, const UpdateBaselineStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateBaselineStrategyRequest&;
    using Resp = UpdateBaselineStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateBaselineStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::UpdateBaselineStrategyOutcomeCallable CwpClient::UpdateBaselineStrategyCallable(const UpdateBaselineStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateBaselineStrategyOutcome>>();
    UpdateBaselineStrategyAsync(
    request,
    [prom](
        const CwpClient*,
        const UpdateBaselineStrategyRequest&,
        UpdateBaselineStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CwpClient::UpdateMachineTagsOutcome CwpClient::UpdateMachineTags(const UpdateMachineTagsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateMachineTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateMachineTagsResponse rsp = UpdateMachineTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateMachineTagsOutcome(rsp);
        else
            return UpdateMachineTagsOutcome(o.GetError());
    }
    else
    {
        return UpdateMachineTagsOutcome(outcome.GetError());
    }
}

void CwpClient::UpdateMachineTagsAsync(const UpdateMachineTagsRequest& request, const UpdateMachineTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateMachineTagsRequest&;
    using Resp = UpdateMachineTagsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateMachineTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CwpClient::UpdateMachineTagsOutcomeCallable CwpClient::UpdateMachineTagsCallable(const UpdateMachineTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateMachineTagsOutcome>>();
    UpdateMachineTagsAsync(
    request,
    [prom](
        const CwpClient*,
        const UpdateMachineTagsRequest&,
        UpdateMachineTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

