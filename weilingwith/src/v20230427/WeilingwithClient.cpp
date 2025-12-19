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

#include <tencentcloud/weilingwith/v20230427/WeilingwithClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Weilingwith::V20230427;
using namespace TencentCloud::Weilingwith::V20230427::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-27";
    const string ENDPOINT = "weilingwith.tencentcloudapi.com";
}

WeilingwithClient::WeilingwithClient(const Credential &credential, const string &region) :
    WeilingwithClient(credential, region, ClientProfile())
{
}

WeilingwithClient::WeilingwithClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WeilingwithClient::AddAlarmProcessRecordOutcome WeilingwithClient::AddAlarmProcessRecord(const AddAlarmProcessRecordRequest &request)
{
    auto outcome = MakeRequest(request, "AddAlarmProcessRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddAlarmProcessRecordResponse rsp = AddAlarmProcessRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddAlarmProcessRecordOutcome(rsp);
        else
            return AddAlarmProcessRecordOutcome(o.GetError());
    }
    else
    {
        return AddAlarmProcessRecordOutcome(outcome.GetError());
    }
}

void WeilingwithClient::AddAlarmProcessRecordAsync(const AddAlarmProcessRecordRequest& request, const AddAlarmProcessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddAlarmProcessRecordRequest&;
    using Resp = AddAlarmProcessRecordResponse;

    DoRequestAsync<Req, Resp>(
        "AddAlarmProcessRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::AddAlarmProcessRecordOutcomeCallable WeilingwithClient::AddAlarmProcessRecordCallable(const AddAlarmProcessRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddAlarmProcessRecordOutcome>>();
    AddAlarmProcessRecordAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const AddAlarmProcessRecordRequest&,
        AddAlarmProcessRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::BatchCreateDeviceOutcome WeilingwithClient::BatchCreateDevice(const BatchCreateDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateDeviceResponse rsp = BatchCreateDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateDeviceOutcome(rsp);
        else
            return BatchCreateDeviceOutcome(o.GetError());
    }
    else
    {
        return BatchCreateDeviceOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchCreateDeviceAsync(const BatchCreateDeviceRequest& request, const BatchCreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchCreateDeviceRequest&;
    using Resp = BatchCreateDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "BatchCreateDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::BatchCreateDeviceOutcomeCallable WeilingwithClient::BatchCreateDeviceCallable(const BatchCreateDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchCreateDeviceOutcome>>();
    BatchCreateDeviceAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const BatchCreateDeviceRequest&,
        BatchCreateDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::BatchDeleteDeviceOutcome WeilingwithClient::BatchDeleteDevice(const BatchDeleteDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteDeviceResponse rsp = BatchDeleteDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteDeviceOutcome(rsp);
        else
            return BatchDeleteDeviceOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteDeviceOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchDeleteDeviceAsync(const BatchDeleteDeviceRequest& request, const BatchDeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchDeleteDeviceRequest&;
    using Resp = BatchDeleteDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "BatchDeleteDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::BatchDeleteDeviceOutcomeCallable WeilingwithClient::BatchDeleteDeviceCallable(const BatchDeleteDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchDeleteDeviceOutcome>>();
    BatchDeleteDeviceAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const BatchDeleteDeviceRequest&,
        BatchDeleteDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::BatchKillAlarmOutcome WeilingwithClient::BatchKillAlarm(const BatchKillAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "BatchKillAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchKillAlarmResponse rsp = BatchKillAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchKillAlarmOutcome(rsp);
        else
            return BatchKillAlarmOutcome(o.GetError());
    }
    else
    {
        return BatchKillAlarmOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchKillAlarmAsync(const BatchKillAlarmRequest& request, const BatchKillAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchKillAlarmRequest&;
    using Resp = BatchKillAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "BatchKillAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::BatchKillAlarmOutcomeCallable WeilingwithClient::BatchKillAlarmCallable(const BatchKillAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchKillAlarmOutcome>>();
    BatchKillAlarmAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const BatchKillAlarmRequest&,
        BatchKillAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::BatchReportAppMessageOutcome WeilingwithClient::BatchReportAppMessage(const BatchReportAppMessageRequest &request)
{
    auto outcome = MakeRequest(request, "BatchReportAppMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchReportAppMessageResponse rsp = BatchReportAppMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchReportAppMessageOutcome(rsp);
        else
            return BatchReportAppMessageOutcome(o.GetError());
    }
    else
    {
        return BatchReportAppMessageOutcome(outcome.GetError());
    }
}

void WeilingwithClient::BatchReportAppMessageAsync(const BatchReportAppMessageRequest& request, const BatchReportAppMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchReportAppMessageRequest&;
    using Resp = BatchReportAppMessageResponse;

    DoRequestAsync<Req, Resp>(
        "BatchReportAppMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::BatchReportAppMessageOutcomeCallable WeilingwithClient::BatchReportAppMessageCallable(const BatchReportAppMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchReportAppMessageOutcome>>();
    BatchReportAppMessageAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const BatchReportAppMessageRequest&,
        BatchReportAppMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ChangeAlarmStatusOutcome WeilingwithClient::ChangeAlarmStatus(const ChangeAlarmStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeAlarmStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeAlarmStatusResponse rsp = ChangeAlarmStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeAlarmStatusOutcome(rsp);
        else
            return ChangeAlarmStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeAlarmStatusOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ChangeAlarmStatusAsync(const ChangeAlarmStatusRequest& request, const ChangeAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeAlarmStatusRequest&;
    using Resp = ChangeAlarmStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeAlarmStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ChangeAlarmStatusOutcomeCallable WeilingwithClient::ChangeAlarmStatusCallable(const ChangeAlarmStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeAlarmStatusOutcome>>();
    ChangeAlarmStatusAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ChangeAlarmStatusRequest&,
        ChangeAlarmStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ControlCameraPTZOutcome WeilingwithClient::ControlCameraPTZ(const ControlCameraPTZRequest &request)
{
    auto outcome = MakeRequest(request, "ControlCameraPTZ");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlCameraPTZResponse rsp = ControlCameraPTZResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlCameraPTZOutcome(rsp);
        else
            return ControlCameraPTZOutcome(o.GetError());
    }
    else
    {
        return ControlCameraPTZOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ControlCameraPTZAsync(const ControlCameraPTZRequest& request, const ControlCameraPTZAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlCameraPTZRequest&;
    using Resp = ControlCameraPTZResponse;

    DoRequestAsync<Req, Resp>(
        "ControlCameraPTZ", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ControlCameraPTZOutcomeCallable WeilingwithClient::ControlCameraPTZCallable(const ControlCameraPTZRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlCameraPTZOutcome>>();
    ControlCameraPTZAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ControlCameraPTZRequest&,
        ControlCameraPTZOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ControlDeviceOutcome WeilingwithClient::ControlDevice(const ControlDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ControlDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ControlDeviceResponse rsp = ControlDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ControlDeviceOutcome(rsp);
        else
            return ControlDeviceOutcome(o.GetError());
    }
    else
    {
        return ControlDeviceOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ControlDeviceAsync(const ControlDeviceRequest& request, const ControlDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ControlDeviceRequest&;
    using Resp = ControlDeviceResponse;

    DoRequestAsync<Req, Resp>(
        "ControlDevice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ControlDeviceOutcomeCallable WeilingwithClient::ControlDeviceCallable(const ControlDeviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ControlDeviceOutcome>>();
    ControlDeviceAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ControlDeviceRequest&,
        ControlDeviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::CreateApplicationTokenOutcome WeilingwithClient::CreateApplicationToken(const CreateApplicationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationTokenResponse rsp = CreateApplicationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationTokenOutcome(rsp);
        else
            return CreateApplicationTokenOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationTokenOutcome(outcome.GetError());
    }
}

void WeilingwithClient::CreateApplicationTokenAsync(const CreateApplicationTokenRequest& request, const CreateApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationTokenRequest&;
    using Resp = CreateApplicationTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::CreateApplicationTokenOutcomeCallable WeilingwithClient::CreateApplicationTokenCallable(const CreateApplicationTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationTokenOutcome>>();
    CreateApplicationTokenAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const CreateApplicationTokenRequest&,
        CreateApplicationTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DeleteDeviceGroupOutcome WeilingwithClient::DeleteDeviceGroup(const DeleteDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceGroupResponse rsp = DeleteDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceGroupOutcome(rsp);
        else
            return DeleteDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceGroupOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DeleteDeviceGroupAsync(const DeleteDeviceGroupRequest& request, const DeleteDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceGroupRequest&;
    using Resp = DeleteDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DeleteDeviceGroupOutcomeCallable WeilingwithClient::DeleteDeviceGroupCallable(const DeleteDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceGroupOutcome>>();
    DeleteDeviceGroupAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DeleteDeviceGroupRequest&,
        DeleteDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeActionListOutcome WeilingwithClient::DescribeActionList(const DescribeActionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeActionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeActionListResponse rsp = DescribeActionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeActionListOutcome(rsp);
        else
            return DescribeActionListOutcome(o.GetError());
    }
    else
    {
        return DescribeActionListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeActionListAsync(const DescribeActionListRequest& request, const DescribeActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeActionListRequest&;
    using Resp = DescribeActionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeActionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeActionListOutcomeCallable WeilingwithClient::DescribeActionListCallable(const DescribeActionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeActionListOutcome>>();
    DescribeActionListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeActionListRequest&,
        DescribeActionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeAdministrationByTagOutcome WeilingwithClient::DescribeAdministrationByTag(const DescribeAdministrationByTagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAdministrationByTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAdministrationByTagResponse rsp = DescribeAdministrationByTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAdministrationByTagOutcome(rsp);
        else
            return DescribeAdministrationByTagOutcome(o.GetError());
    }
    else
    {
        return DescribeAdministrationByTagOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAdministrationByTagAsync(const DescribeAdministrationByTagRequest& request, const DescribeAdministrationByTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAdministrationByTagRequest&;
    using Resp = DescribeAdministrationByTagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAdministrationByTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeAdministrationByTagOutcomeCallable WeilingwithClient::DescribeAdministrationByTagCallable(const DescribeAdministrationByTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAdministrationByTagOutcome>>();
    DescribeAdministrationByTagAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeAdministrationByTagRequest&,
        DescribeAdministrationByTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeAlarmLevelListOutcome WeilingwithClient::DescribeAlarmLevelList(const DescribeAlarmLevelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmLevelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmLevelListResponse rsp = DescribeAlarmLevelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmLevelListOutcome(rsp);
        else
            return DescribeAlarmLevelListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmLevelListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmLevelListAsync(const DescribeAlarmLevelListRequest& request, const DescribeAlarmLevelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmLevelListRequest&;
    using Resp = DescribeAlarmLevelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmLevelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeAlarmLevelListOutcomeCallable WeilingwithClient::DescribeAlarmLevelListCallable(const DescribeAlarmLevelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmLevelListOutcome>>();
    DescribeAlarmLevelListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeAlarmLevelListRequest&,
        DescribeAlarmLevelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeAlarmListOutcome WeilingwithClient::DescribeAlarmList(const DescribeAlarmListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmListResponse rsp = DescribeAlarmListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmListOutcome(rsp);
        else
            return DescribeAlarmListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmListAsync(const DescribeAlarmListRequest& request, const DescribeAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmListRequest&;
    using Resp = DescribeAlarmListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeAlarmListOutcomeCallable WeilingwithClient::DescribeAlarmListCallable(const DescribeAlarmListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmListOutcome>>();
    DescribeAlarmListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeAlarmListRequest&,
        DescribeAlarmListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeAlarmStatusListOutcome WeilingwithClient::DescribeAlarmStatusList(const DescribeAlarmStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmStatusListResponse rsp = DescribeAlarmStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmStatusListOutcome(rsp);
        else
            return DescribeAlarmStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmStatusListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmStatusListAsync(const DescribeAlarmStatusListRequest& request, const DescribeAlarmStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmStatusListRequest&;
    using Resp = DescribeAlarmStatusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmStatusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeAlarmStatusListOutcomeCallable WeilingwithClient::DescribeAlarmStatusListCallable(const DescribeAlarmStatusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmStatusListOutcome>>();
    DescribeAlarmStatusListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeAlarmStatusListRequest&,
        DescribeAlarmStatusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeAlarmTypeListOutcome WeilingwithClient::DescribeAlarmTypeList(const DescribeAlarmTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmTypeListResponse rsp = DescribeAlarmTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmTypeListOutcome(rsp);
        else
            return DescribeAlarmTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmTypeListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeAlarmTypeListAsync(const DescribeAlarmTypeListRequest& request, const DescribeAlarmTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmTypeListRequest&;
    using Resp = DescribeAlarmTypeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmTypeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeAlarmTypeListOutcomeCallable WeilingwithClient::DescribeAlarmTypeListCallable(const DescribeAlarmTypeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmTypeListOutcome>>();
    DescribeAlarmTypeListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeAlarmTypeListRequest&,
        DescribeAlarmTypeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeApplicationListOutcome WeilingwithClient::DescribeApplicationList(const DescribeApplicationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationListResponse rsp = DescribeApplicationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationListOutcome(rsp);
        else
            return DescribeApplicationListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeApplicationListAsync(const DescribeApplicationListRequest& request, const DescribeApplicationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationListRequest&;
    using Resp = DescribeApplicationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeApplicationListOutcomeCallable WeilingwithClient::DescribeApplicationListCallable(const DescribeApplicationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationListOutcome>>();
    DescribeApplicationListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeApplicationListRequest&,
        DescribeApplicationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeBuildingListOutcome WeilingwithClient::DescribeBuildingList(const DescribeBuildingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildingListResponse rsp = DescribeBuildingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildingListOutcome(rsp);
        else
            return DescribeBuildingListOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildingListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeBuildingListAsync(const DescribeBuildingListRequest& request, const DescribeBuildingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBuildingListRequest&;
    using Resp = DescribeBuildingListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBuildingList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeBuildingListOutcomeCallable WeilingwithClient::DescribeBuildingListCallable(const DescribeBuildingListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBuildingListOutcome>>();
    DescribeBuildingListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeBuildingListRequest&,
        DescribeBuildingListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeBuildingModelOutcome WeilingwithClient::DescribeBuildingModel(const DescribeBuildingModelRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildingModel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildingModelResponse rsp = DescribeBuildingModelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildingModelOutcome(rsp);
        else
            return DescribeBuildingModelOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildingModelOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeBuildingModelAsync(const DescribeBuildingModelRequest& request, const DescribeBuildingModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBuildingModelRequest&;
    using Resp = DescribeBuildingModelResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBuildingModel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeBuildingModelOutcomeCallable WeilingwithClient::DescribeBuildingModelCallable(const DescribeBuildingModelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBuildingModelOutcome>>();
    DescribeBuildingModelAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeBuildingModelRequest&,
        DescribeBuildingModelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeBuildingProfileOutcome WeilingwithClient::DescribeBuildingProfile(const DescribeBuildingProfileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBuildingProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBuildingProfileResponse rsp = DescribeBuildingProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBuildingProfileOutcome(rsp);
        else
            return DescribeBuildingProfileOutcome(o.GetError());
    }
    else
    {
        return DescribeBuildingProfileOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeBuildingProfileAsync(const DescribeBuildingProfileRequest& request, const DescribeBuildingProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBuildingProfileRequest&;
    using Resp = DescribeBuildingProfileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBuildingProfile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeBuildingProfileOutcomeCallable WeilingwithClient::DescribeBuildingProfileCallable(const DescribeBuildingProfileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBuildingProfileOutcome>>();
    DescribeBuildingProfileAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeBuildingProfileRequest&,
        DescribeBuildingProfileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeCameraExtendInfoOutcome WeilingwithClient::DescribeCameraExtendInfo(const DescribeCameraExtendInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCameraExtendInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCameraExtendInfoResponse rsp = DescribeCameraExtendInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCameraExtendInfoOutcome(rsp);
        else
            return DescribeCameraExtendInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCameraExtendInfoOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeCameraExtendInfoAsync(const DescribeCameraExtendInfoRequest& request, const DescribeCameraExtendInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCameraExtendInfoRequest&;
    using Resp = DescribeCameraExtendInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCameraExtendInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeCameraExtendInfoOutcomeCallable WeilingwithClient::DescribeCameraExtendInfoCallable(const DescribeCameraExtendInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCameraExtendInfoOutcome>>();
    DescribeCameraExtendInfoAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeCameraExtendInfoRequest&,
        DescribeCameraExtendInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceGroupListOutcome WeilingwithClient::DescribeDeviceGroupList(const DescribeDeviceGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupListResponse rsp = DescribeDeviceGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupListOutcome(rsp);
        else
            return DescribeDeviceGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceGroupListAsync(const DescribeDeviceGroupListRequest& request, const DescribeDeviceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceGroupListRequest&;
    using Resp = DescribeDeviceGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeDeviceGroupListOutcomeCallable WeilingwithClient::DescribeDeviceGroupListCallable(const DescribeDeviceGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceGroupListOutcome>>();
    DescribeDeviceGroupListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceGroupListRequest&,
        DescribeDeviceGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceListOutcome WeilingwithClient::DescribeDeviceList(const DescribeDeviceListRequest &request)
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

void WeilingwithClient::DescribeDeviceListAsync(const DescribeDeviceListRequest& request, const DescribeDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

WeilingwithClient::DescribeDeviceListOutcomeCallable WeilingwithClient::DescribeDeviceListCallable(const DescribeDeviceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceListOutcome>>();
    DescribeDeviceListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceListRequest&,
        DescribeDeviceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceShadowListOutcome WeilingwithClient::DescribeDeviceShadowList(const DescribeDeviceShadowListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceShadowList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceShadowListResponse rsp = DescribeDeviceShadowListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceShadowListOutcome(rsp);
        else
            return DescribeDeviceShadowListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceShadowListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceShadowListAsync(const DescribeDeviceShadowListRequest& request, const DescribeDeviceShadowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceShadowListRequest&;
    using Resp = DescribeDeviceShadowListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceShadowList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeDeviceShadowListOutcomeCallable WeilingwithClient::DescribeDeviceShadowListCallable(const DescribeDeviceShadowListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceShadowListOutcome>>();
    DescribeDeviceShadowListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceShadowListRequest&,
        DescribeDeviceShadowListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceStatusListOutcome WeilingwithClient::DescribeDeviceStatusList(const DescribeDeviceStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceStatusListResponse rsp = DescribeDeviceStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceStatusListOutcome(rsp);
        else
            return DescribeDeviceStatusListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceStatusListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceStatusListAsync(const DescribeDeviceStatusListRequest& request, const DescribeDeviceStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceStatusListRequest&;
    using Resp = DescribeDeviceStatusListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceStatusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeDeviceStatusListOutcomeCallable WeilingwithClient::DescribeDeviceStatusListCallable(const DescribeDeviceStatusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceStatusListOutcome>>();
    DescribeDeviceStatusListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceStatusListRequest&,
        DescribeDeviceStatusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceStatusStatOutcome WeilingwithClient::DescribeDeviceStatusStat(const DescribeDeviceStatusStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceStatusStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceStatusStatResponse rsp = DescribeDeviceStatusStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceStatusStatOutcome(rsp);
        else
            return DescribeDeviceStatusStatOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceStatusStatOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceStatusStatAsync(const DescribeDeviceStatusStatRequest& request, const DescribeDeviceStatusStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceStatusStatRequest&;
    using Resp = DescribeDeviceStatusStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceStatusStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeDeviceStatusStatOutcomeCallable WeilingwithClient::DescribeDeviceStatusStatCallable(const DescribeDeviceStatusStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceStatusStatOutcome>>();
    DescribeDeviceStatusStatAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceStatusStatRequest&,
        DescribeDeviceStatusStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceTagListOutcome WeilingwithClient::DescribeDeviceTagList(const DescribeDeviceTagListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceTagList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceTagListResponse rsp = DescribeDeviceTagListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceTagListOutcome(rsp);
        else
            return DescribeDeviceTagListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceTagListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceTagListAsync(const DescribeDeviceTagListRequest& request, const DescribeDeviceTagListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceTagListRequest&;
    using Resp = DescribeDeviceTagListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceTagList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeDeviceTagListOutcomeCallable WeilingwithClient::DescribeDeviceTagListCallable(const DescribeDeviceTagListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceTagListOutcome>>();
    DescribeDeviceTagListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceTagListRequest&,
        DescribeDeviceTagListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeDeviceTypeListOutcome WeilingwithClient::DescribeDeviceTypeList(const DescribeDeviceTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceTypeListResponse rsp = DescribeDeviceTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceTypeListOutcome(rsp);
        else
            return DescribeDeviceTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceTypeListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeDeviceTypeListAsync(const DescribeDeviceTypeListRequest& request, const DescribeDeviceTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceTypeListRequest&;
    using Resp = DescribeDeviceTypeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceTypeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeDeviceTypeListOutcomeCallable WeilingwithClient::DescribeDeviceTypeListCallable(const DescribeDeviceTypeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceTypeListOutcome>>();
    DescribeDeviceTypeListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeDeviceTypeListRequest&,
        DescribeDeviceTypeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeEdgeApplicationTokenOutcome WeilingwithClient::DescribeEdgeApplicationToken(const DescribeEdgeApplicationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgeApplicationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgeApplicationTokenResponse rsp = DescribeEdgeApplicationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgeApplicationTokenOutcome(rsp);
        else
            return DescribeEdgeApplicationTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgeApplicationTokenOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeEdgeApplicationTokenAsync(const DescribeEdgeApplicationTokenRequest& request, const DescribeEdgeApplicationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdgeApplicationTokenRequest&;
    using Resp = DescribeEdgeApplicationTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdgeApplicationToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeEdgeApplicationTokenOutcomeCallable WeilingwithClient::DescribeEdgeApplicationTokenCallable(const DescribeEdgeApplicationTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdgeApplicationTokenOutcome>>();
    DescribeEdgeApplicationTokenAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeEdgeApplicationTokenRequest&,
        DescribeEdgeApplicationTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeElementProfilePageOutcome WeilingwithClient::DescribeElementProfilePage(const DescribeElementProfilePageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeElementProfilePage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeElementProfilePageResponse rsp = DescribeElementProfilePageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeElementProfilePageOutcome(rsp);
        else
            return DescribeElementProfilePageOutcome(o.GetError());
    }
    else
    {
        return DescribeElementProfilePageOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeElementProfilePageAsync(const DescribeElementProfilePageRequest& request, const DescribeElementProfilePageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeElementProfilePageRequest&;
    using Resp = DescribeElementProfilePageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeElementProfilePage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeElementProfilePageOutcomeCallable WeilingwithClient::DescribeElementProfilePageCallable(const DescribeElementProfilePageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeElementProfilePageOutcome>>();
    DescribeElementProfilePageAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeElementProfilePageRequest&,
        DescribeElementProfilePageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeElementProfileTreeOutcome WeilingwithClient::DescribeElementProfileTree(const DescribeElementProfileTreeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeElementProfileTree");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeElementProfileTreeResponse rsp = DescribeElementProfileTreeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeElementProfileTreeOutcome(rsp);
        else
            return DescribeElementProfileTreeOutcome(o.GetError());
    }
    else
    {
        return DescribeElementProfileTreeOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeElementProfileTreeAsync(const DescribeElementProfileTreeRequest& request, const DescribeElementProfileTreeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeElementProfileTreeRequest&;
    using Resp = DescribeElementProfileTreeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeElementProfileTree", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeElementProfileTreeOutcomeCallable WeilingwithClient::DescribeElementProfileTreeCallable(const DescribeElementProfileTreeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeElementProfileTreeOutcome>>();
    DescribeElementProfileTreeAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeElementProfileTreeRequest&,
        DescribeElementProfileTreeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeEventListOutcome WeilingwithClient::DescribeEventList(const DescribeEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventListResponse rsp = DescribeEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventListOutcome(rsp);
        else
            return DescribeEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeEventListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeEventListAsync(const DescribeEventListRequest& request, const DescribeEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventListRequest&;
    using Resp = DescribeEventListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeEventListOutcomeCallable WeilingwithClient::DescribeEventListCallable(const DescribeEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventListOutcome>>();
    DescribeEventListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeEventListRequest&,
        DescribeEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeFileDownloadURLOutcome WeilingwithClient::DescribeFileDownloadURL(const DescribeFileDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileDownloadURLResponse rsp = DescribeFileDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileDownloadURLOutcome(rsp);
        else
            return DescribeFileDownloadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeFileDownloadURLOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeFileDownloadURLAsync(const DescribeFileDownloadURLRequest& request, const DescribeFileDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileDownloadURLRequest&;
    using Resp = DescribeFileDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeFileDownloadURLOutcomeCallable WeilingwithClient::DescribeFileDownloadURLCallable(const DescribeFileDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileDownloadURLOutcome>>();
    DescribeFileDownloadURLAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeFileDownloadURLRequest&,
        DescribeFileDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeFileUploadURLOutcome WeilingwithClient::DescribeFileUploadURL(const DescribeFileUploadURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileUploadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileUploadURLResponse rsp = DescribeFileUploadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileUploadURLOutcome(rsp);
        else
            return DescribeFileUploadURLOutcome(o.GetError());
    }
    else
    {
        return DescribeFileUploadURLOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeFileUploadURLAsync(const DescribeFileUploadURLRequest& request, const DescribeFileUploadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileUploadURLRequest&;
    using Resp = DescribeFileUploadURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileUploadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeFileUploadURLOutcomeCallable WeilingwithClient::DescribeFileUploadURLCallable(const DescribeFileUploadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileUploadURLOutcome>>();
    DescribeFileUploadURLAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeFileUploadURLRequest&,
        DescribeFileUploadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeInterfaceListOutcome WeilingwithClient::DescribeInterfaceList(const DescribeInterfaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInterfaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInterfaceListResponse rsp = DescribeInterfaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInterfaceListOutcome(rsp);
        else
            return DescribeInterfaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInterfaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeInterfaceListAsync(const DescribeInterfaceListRequest& request, const DescribeInterfaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInterfaceListRequest&;
    using Resp = DescribeInterfaceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInterfaceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeInterfaceListOutcomeCallable WeilingwithClient::DescribeInterfaceListCallable(const DescribeInterfaceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInterfaceListOutcome>>();
    DescribeInterfaceListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeInterfaceListRequest&,
        DescribeInterfaceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeLinkRuleListOutcome WeilingwithClient::DescribeLinkRuleList(const DescribeLinkRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLinkRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLinkRuleListResponse rsp = DescribeLinkRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLinkRuleListOutcome(rsp);
        else
            return DescribeLinkRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeLinkRuleListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeLinkRuleListAsync(const DescribeLinkRuleListRequest& request, const DescribeLinkRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLinkRuleListRequest&;
    using Resp = DescribeLinkRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLinkRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeLinkRuleListOutcomeCallable WeilingwithClient::DescribeLinkRuleListCallable(const DescribeLinkRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLinkRuleListOutcome>>();
    DescribeLinkRuleListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeLinkRuleListRequest&,
        DescribeLinkRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeModelListOutcome WeilingwithClient::DescribeModelList(const DescribeModelListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeModelList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeModelListResponse rsp = DescribeModelListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeModelListOutcome(rsp);
        else
            return DescribeModelListOutcome(o.GetError());
    }
    else
    {
        return DescribeModelListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeModelListAsync(const DescribeModelListRequest& request, const DescribeModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeModelListRequest&;
    using Resp = DescribeModelListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeModelList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeModelListOutcomeCallable WeilingwithClient::DescribeModelListCallable(const DescribeModelListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeModelListOutcome>>();
    DescribeModelListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeModelListRequest&,
        DescribeModelListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeProductListOutcome WeilingwithClient::DescribeProductList(const DescribeProductListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductListResponse rsp = DescribeProductListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductListOutcome(rsp);
        else
            return DescribeProductListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeProductListAsync(const DescribeProductListRequest& request, const DescribeProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProductListRequest&;
    using Resp = DescribeProductListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeProductListOutcomeCallable WeilingwithClient::DescribeProductListCallable(const DescribeProductListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductListOutcome>>();
    DescribeProductListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeProductListRequest&,
        DescribeProductListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribePropertyListOutcome WeilingwithClient::DescribePropertyList(const DescribePropertyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePropertyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePropertyListResponse rsp = DescribePropertyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePropertyListOutcome(rsp);
        else
            return DescribePropertyListOutcome(o.GetError());
    }
    else
    {
        return DescribePropertyListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribePropertyListAsync(const DescribePropertyListRequest& request, const DescribePropertyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePropertyListRequest&;
    using Resp = DescribePropertyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePropertyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribePropertyListOutcomeCallable WeilingwithClient::DescribePropertyListCallable(const DescribePropertyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePropertyListOutcome>>();
    DescribePropertyListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribePropertyListRequest&,
        DescribePropertyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeRuleDetailOutcome WeilingwithClient::DescribeRuleDetail(const DescribeRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleDetailResponse rsp = DescribeRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleDetailOutcome(rsp);
        else
            return DescribeRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleDetailOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeRuleDetailAsync(const DescribeRuleDetailRequest& request, const DescribeRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleDetailRequest&;
    using Resp = DescribeRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeRuleDetailOutcomeCallable WeilingwithClient::DescribeRuleDetailCallable(const DescribeRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleDetailOutcome>>();
    DescribeRuleDetailAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeRuleDetailRequest&,
        DescribeRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeSceneListOutcome WeilingwithClient::DescribeSceneList(const DescribeSceneListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSceneList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSceneListResponse rsp = DescribeSceneListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSceneListOutcome(rsp);
        else
            return DescribeSceneListOutcome(o.GetError());
    }
    else
    {
        return DescribeSceneListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSceneListAsync(const DescribeSceneListRequest& request, const DescribeSceneListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSceneListRequest&;
    using Resp = DescribeSceneListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSceneList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeSceneListOutcomeCallable WeilingwithClient::DescribeSceneListCallable(const DescribeSceneListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSceneListOutcome>>();
    DescribeSceneListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeSceneListRequest&,
        DescribeSceneListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeSpaceDeviceIdListOutcome WeilingwithClient::DescribeSpaceDeviceIdList(const DescribeSpaceDeviceIdListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceDeviceIdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceDeviceIdListResponse rsp = DescribeSpaceDeviceIdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceDeviceIdListOutcome(rsp);
        else
            return DescribeSpaceDeviceIdListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceDeviceIdListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceDeviceIdListAsync(const DescribeSpaceDeviceIdListRequest& request, const DescribeSpaceDeviceIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceDeviceIdListRequest&;
    using Resp = DescribeSpaceDeviceIdListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceDeviceIdList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeSpaceDeviceIdListOutcomeCallable WeilingwithClient::DescribeSpaceDeviceIdListCallable(const DescribeSpaceDeviceIdListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceDeviceIdListOutcome>>();
    DescribeSpaceDeviceIdListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeSpaceDeviceIdListRequest&,
        DescribeSpaceDeviceIdListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeSpaceDeviceRelationListOutcome WeilingwithClient::DescribeSpaceDeviceRelationList(const DescribeSpaceDeviceRelationListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceDeviceRelationList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceDeviceRelationListResponse rsp = DescribeSpaceDeviceRelationListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceDeviceRelationListOutcome(rsp);
        else
            return DescribeSpaceDeviceRelationListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceDeviceRelationListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceDeviceRelationListAsync(const DescribeSpaceDeviceRelationListRequest& request, const DescribeSpaceDeviceRelationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceDeviceRelationListRequest&;
    using Resp = DescribeSpaceDeviceRelationListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceDeviceRelationList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeSpaceDeviceRelationListOutcomeCallable WeilingwithClient::DescribeSpaceDeviceRelationListCallable(const DescribeSpaceDeviceRelationListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceDeviceRelationListOutcome>>();
    DescribeSpaceDeviceRelationListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeSpaceDeviceRelationListRequest&,
        DescribeSpaceDeviceRelationListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeSpaceInfoByDeviceIdOutcome WeilingwithClient::DescribeSpaceInfoByDeviceId(const DescribeSpaceInfoByDeviceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceInfoByDeviceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceInfoByDeviceIdResponse rsp = DescribeSpaceInfoByDeviceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceInfoByDeviceIdOutcome(rsp);
        else
            return DescribeSpaceInfoByDeviceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceInfoByDeviceIdOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceInfoByDeviceIdAsync(const DescribeSpaceInfoByDeviceIdRequest& request, const DescribeSpaceInfoByDeviceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceInfoByDeviceIdRequest&;
    using Resp = DescribeSpaceInfoByDeviceIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceInfoByDeviceId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeSpaceInfoByDeviceIdOutcomeCallable WeilingwithClient::DescribeSpaceInfoByDeviceIdCallable(const DescribeSpaceInfoByDeviceIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceInfoByDeviceIdOutcome>>();
    DescribeSpaceInfoByDeviceIdAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeSpaceInfoByDeviceIdRequest&,
        DescribeSpaceInfoByDeviceIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeSpaceRelationByDeviceIdOutcome WeilingwithClient::DescribeSpaceRelationByDeviceId(const DescribeSpaceRelationByDeviceIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceRelationByDeviceId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceRelationByDeviceIdResponse rsp = DescribeSpaceRelationByDeviceIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceRelationByDeviceIdOutcome(rsp);
        else
            return DescribeSpaceRelationByDeviceIdOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceRelationByDeviceIdOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceRelationByDeviceIdAsync(const DescribeSpaceRelationByDeviceIdRequest& request, const DescribeSpaceRelationByDeviceIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceRelationByDeviceIdRequest&;
    using Resp = DescribeSpaceRelationByDeviceIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceRelationByDeviceId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeSpaceRelationByDeviceIdOutcomeCallable WeilingwithClient::DescribeSpaceRelationByDeviceIdCallable(const DescribeSpaceRelationByDeviceIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceRelationByDeviceIdOutcome>>();
    DescribeSpaceRelationByDeviceIdAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeSpaceRelationByDeviceIdRequest&,
        DescribeSpaceRelationByDeviceIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeSpaceTypeListOutcome WeilingwithClient::DescribeSpaceTypeList(const DescribeSpaceTypeListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpaceTypeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpaceTypeListResponse rsp = DescribeSpaceTypeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpaceTypeListOutcome(rsp);
        else
            return DescribeSpaceTypeListOutcome(o.GetError());
    }
    else
    {
        return DescribeSpaceTypeListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeSpaceTypeListAsync(const DescribeSpaceTypeListRequest& request, const DescribeSpaceTypeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpaceTypeListRequest&;
    using Resp = DescribeSpaceTypeListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpaceTypeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeSpaceTypeListOutcomeCallable WeilingwithClient::DescribeSpaceTypeListCallable(const DescribeSpaceTypeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpaceTypeListOutcome>>();
    DescribeSpaceTypeListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeSpaceTypeListRequest&,
        DescribeSpaceTypeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeTenantBuildingCountAndAreaOutcome WeilingwithClient::DescribeTenantBuildingCountAndArea(const DescribeTenantBuildingCountAndAreaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantBuildingCountAndArea");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantBuildingCountAndAreaResponse rsp = DescribeTenantBuildingCountAndAreaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantBuildingCountAndAreaOutcome(rsp);
        else
            return DescribeTenantBuildingCountAndAreaOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantBuildingCountAndAreaOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeTenantBuildingCountAndAreaAsync(const DescribeTenantBuildingCountAndAreaRequest& request, const DescribeTenantBuildingCountAndAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTenantBuildingCountAndAreaRequest&;
    using Resp = DescribeTenantBuildingCountAndAreaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTenantBuildingCountAndArea", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeTenantBuildingCountAndAreaOutcomeCallable WeilingwithClient::DescribeTenantBuildingCountAndAreaCallable(const DescribeTenantBuildingCountAndAreaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTenantBuildingCountAndAreaOutcome>>();
    DescribeTenantBuildingCountAndAreaAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeTenantBuildingCountAndAreaRequest&,
        DescribeTenantBuildingCountAndAreaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeTenantDepartmentListOutcome WeilingwithClient::DescribeTenantDepartmentList(const DescribeTenantDepartmentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantDepartmentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantDepartmentListResponse rsp = DescribeTenantDepartmentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantDepartmentListOutcome(rsp);
        else
            return DescribeTenantDepartmentListOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantDepartmentListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeTenantDepartmentListAsync(const DescribeTenantDepartmentListRequest& request, const DescribeTenantDepartmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTenantDepartmentListRequest&;
    using Resp = DescribeTenantDepartmentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTenantDepartmentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeTenantDepartmentListOutcomeCallable WeilingwithClient::DescribeTenantDepartmentListCallable(const DescribeTenantDepartmentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTenantDepartmentListOutcome>>();
    DescribeTenantDepartmentListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeTenantDepartmentListRequest&,
        DescribeTenantDepartmentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeTenantUserListOutcome WeilingwithClient::DescribeTenantUserList(const DescribeTenantUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTenantUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTenantUserListResponse rsp = DescribeTenantUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTenantUserListOutcome(rsp);
        else
            return DescribeTenantUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeTenantUserListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeTenantUserListAsync(const DescribeTenantUserListRequest& request, const DescribeTenantUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTenantUserListRequest&;
    using Resp = DescribeTenantUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTenantUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeTenantUserListOutcomeCallable WeilingwithClient::DescribeTenantUserListCallable(const DescribeTenantUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTenantUserListOutcome>>();
    DescribeTenantUserListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeTenantUserListRequest&,
        DescribeTenantUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeVideoCloudRecordOutcome WeilingwithClient::DescribeVideoCloudRecord(const DescribeVideoCloudRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoCloudRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoCloudRecordResponse rsp = DescribeVideoCloudRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoCloudRecordOutcome(rsp);
        else
            return DescribeVideoCloudRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoCloudRecordOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeVideoCloudRecordAsync(const DescribeVideoCloudRecordRequest& request, const DescribeVideoCloudRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoCloudRecordRequest&;
    using Resp = DescribeVideoCloudRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoCloudRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeVideoCloudRecordOutcomeCallable WeilingwithClient::DescribeVideoCloudRecordCallable(const DescribeVideoCloudRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoCloudRecordOutcome>>();
    DescribeVideoCloudRecordAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeVideoCloudRecordRequest&,
        DescribeVideoCloudRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeVideoLiveStreamOutcome WeilingwithClient::DescribeVideoLiveStream(const DescribeVideoLiveStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoLiveStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoLiveStreamResponse rsp = DescribeVideoLiveStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoLiveStreamOutcome(rsp);
        else
            return DescribeVideoLiveStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoLiveStreamOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeVideoLiveStreamAsync(const DescribeVideoLiveStreamRequest& request, const DescribeVideoLiveStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoLiveStreamRequest&;
    using Resp = DescribeVideoLiveStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoLiveStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeVideoLiveStreamOutcomeCallable WeilingwithClient::DescribeVideoLiveStreamCallable(const DescribeVideoLiveStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoLiveStreamOutcome>>();
    DescribeVideoLiveStreamAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeVideoLiveStreamRequest&,
        DescribeVideoLiveStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeVideoRecordStreamOutcome WeilingwithClient::DescribeVideoRecordStream(const DescribeVideoRecordStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoRecordStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoRecordStreamResponse rsp = DescribeVideoRecordStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoRecordStreamOutcome(rsp);
        else
            return DescribeVideoRecordStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoRecordStreamOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeVideoRecordStreamAsync(const DescribeVideoRecordStreamRequest& request, const DescribeVideoRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVideoRecordStreamRequest&;
    using Resp = DescribeVideoRecordStreamResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVideoRecordStream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeVideoRecordStreamOutcomeCallable WeilingwithClient::DescribeVideoRecordStreamCallable(const DescribeVideoRecordStreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVideoRecordStreamOutcome>>();
    DescribeVideoRecordStreamAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeVideoRecordStreamRequest&,
        DescribeVideoRecordStreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaOutcome WeilingwithClient::DescribeWorkSpaceBuildingCountAndArea(const DescribeWorkSpaceBuildingCountAndAreaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkSpaceBuildingCountAndArea");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkSpaceBuildingCountAndAreaResponse rsp = DescribeWorkSpaceBuildingCountAndAreaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkSpaceBuildingCountAndAreaOutcome(rsp);
        else
            return DescribeWorkSpaceBuildingCountAndAreaOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkSpaceBuildingCountAndAreaOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaAsync(const DescribeWorkSpaceBuildingCountAndAreaRequest& request, const DescribeWorkSpaceBuildingCountAndAreaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkSpaceBuildingCountAndAreaRequest&;
    using Resp = DescribeWorkSpaceBuildingCountAndAreaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkSpaceBuildingCountAndArea", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaOutcomeCallable WeilingwithClient::DescribeWorkSpaceBuildingCountAndAreaCallable(const DescribeWorkSpaceBuildingCountAndAreaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkSpaceBuildingCountAndAreaOutcome>>();
    DescribeWorkSpaceBuildingCountAndAreaAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeWorkSpaceBuildingCountAndAreaRequest&,
        DescribeWorkSpaceBuildingCountAndAreaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeWorkspaceListOutcome WeilingwithClient::DescribeWorkspaceList(const DescribeWorkspaceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceListResponse rsp = DescribeWorkspaceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceListOutcome(rsp);
        else
            return DescribeWorkspaceListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkspaceListAsync(const DescribeWorkspaceListRequest& request, const DescribeWorkspaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkspaceListRequest&;
    using Resp = DescribeWorkspaceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkspaceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeWorkspaceListOutcomeCallable WeilingwithClient::DescribeWorkspaceListCallable(const DescribeWorkspaceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkspaceListOutcome>>();
    DescribeWorkspaceListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeWorkspaceListRequest&,
        DescribeWorkspaceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::DescribeWorkspaceUserListOutcome WeilingwithClient::DescribeWorkspaceUserList(const DescribeWorkspaceUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaceUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspaceUserListResponse rsp = DescribeWorkspaceUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspaceUserListOutcome(rsp);
        else
            return DescribeWorkspaceUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspaceUserListOutcome(outcome.GetError());
    }
}

void WeilingwithClient::DescribeWorkspaceUserListAsync(const DescribeWorkspaceUserListRequest& request, const DescribeWorkspaceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkspaceUserListRequest&;
    using Resp = DescribeWorkspaceUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkspaceUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::DescribeWorkspaceUserListOutcomeCallable WeilingwithClient::DescribeWorkspaceUserListCallable(const DescribeWorkspaceUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkspaceUserListOutcome>>();
    DescribeWorkspaceUserListAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const DescribeWorkspaceUserListRequest&,
        DescribeWorkspaceUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ModifyDeviceFieldOutcome WeilingwithClient::ModifyDeviceField(const ModifyDeviceFieldRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceField");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceFieldResponse rsp = ModifyDeviceFieldResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceFieldOutcome(rsp);
        else
            return ModifyDeviceFieldOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceFieldOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceFieldAsync(const ModifyDeviceFieldRequest& request, const ModifyDeviceFieldAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceFieldRequest&;
    using Resp = ModifyDeviceFieldResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceField", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ModifyDeviceFieldOutcomeCallable WeilingwithClient::ModifyDeviceFieldCallable(const ModifyDeviceFieldRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceFieldOutcome>>();
    ModifyDeviceFieldAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ModifyDeviceFieldRequest&,
        ModifyDeviceFieldOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ModifyDeviceGroupOutcome WeilingwithClient::ModifyDeviceGroup(const ModifyDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceGroupResponse rsp = ModifyDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceGroupOutcome(rsp);
        else
            return ModifyDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceGroupOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceGroupAsync(const ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceGroupRequest&;
    using Resp = ModifyDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ModifyDeviceGroupOutcomeCallable WeilingwithClient::ModifyDeviceGroupCallable(const ModifyDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceGroupOutcome>>();
    ModifyDeviceGroupAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ModifyDeviceGroupRequest&,
        ModifyDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ModifyDeviceNameOutcome WeilingwithClient::ModifyDeviceName(const ModifyDeviceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceNameResponse rsp = ModifyDeviceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceNameOutcome(rsp);
        else
            return ModifyDeviceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceNameOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceNameAsync(const ModifyDeviceNameRequest& request, const ModifyDeviceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceNameRequest&;
    using Resp = ModifyDeviceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ModifyDeviceNameOutcomeCallable WeilingwithClient::ModifyDeviceNameCallable(const ModifyDeviceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceNameOutcome>>();
    ModifyDeviceNameAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ModifyDeviceNameRequest&,
        ModifyDeviceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ModifyDeviceTagOutcome WeilingwithClient::ModifyDeviceTag(const ModifyDeviceTagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceTagResponse rsp = ModifyDeviceTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceTagOutcome(rsp);
        else
            return ModifyDeviceTagOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceTagOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ModifyDeviceTagAsync(const ModifyDeviceTagRequest& request, const ModifyDeviceTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceTagRequest&;
    using Resp = ModifyDeviceTagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ModifyDeviceTagOutcomeCallable WeilingwithClient::ModifyDeviceTagCallable(const ModifyDeviceTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceTagOutcome>>();
    ModifyDeviceTagAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ModifyDeviceTagRequest&,
        ModifyDeviceTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::ReportAppMessageOutcome WeilingwithClient::ReportAppMessage(const ReportAppMessageRequest &request)
{
    auto outcome = MakeRequest(request, "ReportAppMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReportAppMessageResponse rsp = ReportAppMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReportAppMessageOutcome(rsp);
        else
            return ReportAppMessageOutcome(o.GetError());
    }
    else
    {
        return ReportAppMessageOutcome(outcome.GetError());
    }
}

void WeilingwithClient::ReportAppMessageAsync(const ReportAppMessageRequest& request, const ReportAppMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReportAppMessageRequest&;
    using Resp = ReportAppMessageResponse;

    DoRequestAsync<Req, Resp>(
        "ReportAppMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::ReportAppMessageOutcomeCallable WeilingwithClient::ReportAppMessageCallable(const ReportAppMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReportAppMessageOutcome>>();
    ReportAppMessageAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const ReportAppMessageRequest&,
        ReportAppMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::SaveDeviceGroupOutcome WeilingwithClient::SaveDeviceGroup(const SaveDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "SaveDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaveDeviceGroupResponse rsp = SaveDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaveDeviceGroupOutcome(rsp);
        else
            return SaveDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return SaveDeviceGroupOutcome(outcome.GetError());
    }
}

void WeilingwithClient::SaveDeviceGroupAsync(const SaveDeviceGroupRequest& request, const SaveDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaveDeviceGroupRequest&;
    using Resp = SaveDeviceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "SaveDeviceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::SaveDeviceGroupOutcomeCallable WeilingwithClient::SaveDeviceGroupCallable(const SaveDeviceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaveDeviceGroupOutcome>>();
    SaveDeviceGroupAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const SaveDeviceGroupRequest&,
        SaveDeviceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::StopVideoStreamingOutcome WeilingwithClient::StopVideoStreaming(const StopVideoStreamingRequest &request)
{
    auto outcome = MakeRequest(request, "StopVideoStreaming");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopVideoStreamingResponse rsp = StopVideoStreamingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopVideoStreamingOutcome(rsp);
        else
            return StopVideoStreamingOutcome(o.GetError());
    }
    else
    {
        return StopVideoStreamingOutcome(outcome.GetError());
    }
}

void WeilingwithClient::StopVideoStreamingAsync(const StopVideoStreamingRequest& request, const StopVideoStreamingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopVideoStreamingRequest&;
    using Resp = StopVideoStreamingResponse;

    DoRequestAsync<Req, Resp>(
        "StopVideoStreaming", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::StopVideoStreamingOutcomeCallable WeilingwithClient::StopVideoStreamingCallable(const StopVideoStreamingRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopVideoStreamingOutcome>>();
    StopVideoStreamingAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const StopVideoStreamingRequest&,
        StopVideoStreamingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WeilingwithClient::UpdateWorkspaceParkAttributesOutcome WeilingwithClient::UpdateWorkspaceParkAttributes(const UpdateWorkspaceParkAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkspaceParkAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkspaceParkAttributesResponse rsp = UpdateWorkspaceParkAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkspaceParkAttributesOutcome(rsp);
        else
            return UpdateWorkspaceParkAttributesOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkspaceParkAttributesOutcome(outcome.GetError());
    }
}

void WeilingwithClient::UpdateWorkspaceParkAttributesAsync(const UpdateWorkspaceParkAttributesRequest& request, const UpdateWorkspaceParkAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkspaceParkAttributesRequest&;
    using Resp = UpdateWorkspaceParkAttributesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkspaceParkAttributes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WeilingwithClient::UpdateWorkspaceParkAttributesOutcomeCallable WeilingwithClient::UpdateWorkspaceParkAttributesCallable(const UpdateWorkspaceParkAttributesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkspaceParkAttributesOutcome>>();
    UpdateWorkspaceParkAttributesAsync(
    request,
    [prom](
        const WeilingwithClient*,
        const UpdateWorkspaceParkAttributesRequest&,
        UpdateWorkspaceParkAttributesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

