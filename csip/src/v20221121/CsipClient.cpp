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

#include <tencentcloud/csip/v20221121/CsipClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Csip::V20221121;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-21";
    const string ENDPOINT = "csip.tencentcloudapi.com";
}

CsipClient::CsipClient(const Credential &credential, const string &region) :
    CsipClient(credential, region, ClientProfile())
{
}

CsipClient::CsipClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CsipClient::AddNewBindRoleUserOutcome CsipClient::AddNewBindRoleUser(const AddNewBindRoleUserRequest &request)
{
    auto outcome = MakeRequest(request, "AddNewBindRoleUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNewBindRoleUserResponse rsp = AddNewBindRoleUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNewBindRoleUserOutcome(rsp);
        else
            return AddNewBindRoleUserOutcome(o.GetError());
    }
    else
    {
        return AddNewBindRoleUserOutcome(outcome.GetError());
    }
}

void CsipClient::AddNewBindRoleUserAsync(const AddNewBindRoleUserRequest& request, const AddNewBindRoleUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNewBindRoleUserRequest&;
    using Resp = AddNewBindRoleUserResponse;

    DoRequestAsync<Req, Resp>(
        "AddNewBindRoleUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::AddNewBindRoleUserOutcomeCallable CsipClient::AddNewBindRoleUserCallable(const AddNewBindRoleUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNewBindRoleUserOutcome>>();
    AddNewBindRoleUserAsync(
    request,
    [prom](
        const CsipClient*,
        const AddNewBindRoleUserRequest&,
        AddNewBindRoleUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateAccessKeyCheckTaskOutcome CsipClient::CreateAccessKeyCheckTask(const CreateAccessKeyCheckTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessKeyCheckTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessKeyCheckTaskResponse rsp = CreateAccessKeyCheckTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessKeyCheckTaskOutcome(rsp);
        else
            return CreateAccessKeyCheckTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAccessKeyCheckTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateAccessKeyCheckTaskAsync(const CreateAccessKeyCheckTaskRequest& request, const CreateAccessKeyCheckTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessKeyCheckTaskRequest&;
    using Resp = CreateAccessKeyCheckTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessKeyCheckTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateAccessKeyCheckTaskOutcomeCallable CsipClient::CreateAccessKeyCheckTaskCallable(const CreateAccessKeyCheckTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessKeyCheckTaskOutcome>>();
    CreateAccessKeyCheckTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateAccessKeyCheckTaskRequest&,
        CreateAccessKeyCheckTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateAccessKeySyncTaskOutcome CsipClient::CreateAccessKeySyncTask(const CreateAccessKeySyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessKeySyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessKeySyncTaskResponse rsp = CreateAccessKeySyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessKeySyncTaskOutcome(rsp);
        else
            return CreateAccessKeySyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAccessKeySyncTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateAccessKeySyncTaskAsync(const CreateAccessKeySyncTaskRequest& request, const CreateAccessKeySyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessKeySyncTaskRequest&;
    using Resp = CreateAccessKeySyncTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessKeySyncTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateAccessKeySyncTaskOutcomeCallable CsipClient::CreateAccessKeySyncTaskCallable(const CreateAccessKeySyncTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessKeySyncTaskOutcome>>();
    CreateAccessKeySyncTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateAccessKeySyncTaskRequest&,
        CreateAccessKeySyncTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDomainAndIpOutcome CsipClient::CreateDomainAndIp(const CreateDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAndIpResponse rsp = CreateDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAndIpOutcome(rsp);
        else
            return CreateDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDomainAndIpAsync(const CreateDomainAndIpRequest& request, const CreateDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainAndIpRequest&;
    using Resp = CreateDomainAndIpResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainAndIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDomainAndIpOutcomeCallable CsipClient::CreateDomainAndIpCallable(const CreateDomainAndIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainAndIpOutcome>>();
    CreateDomainAndIpAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDomainAndIpRequest&,
        CreateDomainAndIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateRiskCenterScanTaskOutcome CsipClient::CreateRiskCenterScanTask(const CreateRiskCenterScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRiskCenterScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRiskCenterScanTaskResponse rsp = CreateRiskCenterScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRiskCenterScanTaskOutcome(rsp);
        else
            return CreateRiskCenterScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateRiskCenterScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateRiskCenterScanTaskAsync(const CreateRiskCenterScanTaskRequest& request, const CreateRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRiskCenterScanTaskRequest&;
    using Resp = CreateRiskCenterScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRiskCenterScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateRiskCenterScanTaskOutcomeCallable CsipClient::CreateRiskCenterScanTaskCallable(const CreateRiskCenterScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRiskCenterScanTaskOutcome>>();
    CreateRiskCenterScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateRiskCenterScanTaskRequest&,
        CreateRiskCenterScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDomainAndIpOutcome CsipClient::DeleteDomainAndIp(const DeleteDomainAndIpRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAndIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAndIpResponse rsp = DeleteDomainAndIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAndIpOutcome(rsp);
        else
            return DeleteDomainAndIpOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAndIpOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDomainAndIpAsync(const DeleteDomainAndIpRequest& request, const DeleteDomainAndIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainAndIpRequest&;
    using Resp = DeleteDomainAndIpResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomainAndIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDomainAndIpOutcomeCallable CsipClient::DeleteDomainAndIpCallable(const DeleteDomainAndIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainAndIpOutcome>>();
    DeleteDomainAndIpAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDomainAndIpRequest&,
        DeleteDomainAndIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteRiskScanTaskOutcome CsipClient::DeleteRiskScanTask(const DeleteRiskScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRiskScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRiskScanTaskResponse rsp = DeleteRiskScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRiskScanTaskOutcome(rsp);
        else
            return DeleteRiskScanTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteRiskScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteRiskScanTaskAsync(const DeleteRiskScanTaskRequest& request, const DeleteRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRiskScanTaskRequest&;
    using Resp = DeleteRiskScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRiskScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteRiskScanTaskOutcomeCallable CsipClient::DeleteRiskScanTaskCallable(const DeleteRiskScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRiskScanTaskOutcome>>();
    DeleteRiskScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteRiskScanTaskRequest&,
        DeleteRiskScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAbnormalCallRecordOutcome CsipClient::DescribeAbnormalCallRecord(const DescribeAbnormalCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAbnormalCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAbnormalCallRecordResponse rsp = DescribeAbnormalCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAbnormalCallRecordOutcome(rsp);
        else
            return DescribeAbnormalCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeAbnormalCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAbnormalCallRecordAsync(const DescribeAbnormalCallRecordRequest& request, const DescribeAbnormalCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAbnormalCallRecordRequest&;
    using Resp = DescribeAbnormalCallRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAbnormalCallRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAbnormalCallRecordOutcomeCallable CsipClient::DescribeAbnormalCallRecordCallable(const DescribeAbnormalCallRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAbnormalCallRecordOutcome>>();
    DescribeAbnormalCallRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAbnormalCallRecordRequest&,
        DescribeAbnormalCallRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyAlarmOutcome CsipClient::DescribeAccessKeyAlarm(const DescribeAccessKeyAlarmRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyAlarm");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyAlarmResponse rsp = DescribeAccessKeyAlarmResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyAlarmOutcome(rsp);
        else
            return DescribeAccessKeyAlarmOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyAlarmOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyAlarmAsync(const DescribeAccessKeyAlarmRequest& request, const DescribeAccessKeyAlarmAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyAlarmRequest&;
    using Resp = DescribeAccessKeyAlarmResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyAlarm", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyAlarmOutcomeCallable CsipClient::DescribeAccessKeyAlarmCallable(const DescribeAccessKeyAlarmRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyAlarmOutcome>>();
    DescribeAccessKeyAlarmAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyAlarmRequest&,
        DescribeAccessKeyAlarmOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyAlarmDetailOutcome CsipClient::DescribeAccessKeyAlarmDetail(const DescribeAccessKeyAlarmDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyAlarmDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyAlarmDetailResponse rsp = DescribeAccessKeyAlarmDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyAlarmDetailOutcome(rsp);
        else
            return DescribeAccessKeyAlarmDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyAlarmDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyAlarmDetailAsync(const DescribeAccessKeyAlarmDetailRequest& request, const DescribeAccessKeyAlarmDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyAlarmDetailRequest&;
    using Resp = DescribeAccessKeyAlarmDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyAlarmDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyAlarmDetailOutcomeCallable CsipClient::DescribeAccessKeyAlarmDetailCallable(const DescribeAccessKeyAlarmDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyAlarmDetailOutcome>>();
    DescribeAccessKeyAlarmDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyAlarmDetailRequest&,
        DescribeAccessKeyAlarmDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyAssetOutcome CsipClient::DescribeAccessKeyAsset(const DescribeAccessKeyAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyAssetResponse rsp = DescribeAccessKeyAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyAssetOutcome(rsp);
        else
            return DescribeAccessKeyAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyAssetAsync(const DescribeAccessKeyAssetRequest& request, const DescribeAccessKeyAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyAssetRequest&;
    using Resp = DescribeAccessKeyAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyAssetOutcomeCallable CsipClient::DescribeAccessKeyAssetCallable(const DescribeAccessKeyAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyAssetOutcome>>();
    DescribeAccessKeyAssetAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyAssetRequest&,
        DescribeAccessKeyAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyRiskOutcome CsipClient::DescribeAccessKeyRisk(const DescribeAccessKeyRiskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyRiskResponse rsp = DescribeAccessKeyRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyRiskOutcome(rsp);
        else
            return DescribeAccessKeyRiskOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyRiskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyRiskAsync(const DescribeAccessKeyRiskRequest& request, const DescribeAccessKeyRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyRiskRequest&;
    using Resp = DescribeAccessKeyRiskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyRiskOutcomeCallable CsipClient::DescribeAccessKeyRiskCallable(const DescribeAccessKeyRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyRiskOutcome>>();
    DescribeAccessKeyRiskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyRiskRequest&,
        DescribeAccessKeyRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyRiskDetailOutcome CsipClient::DescribeAccessKeyRiskDetail(const DescribeAccessKeyRiskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyRiskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyRiskDetailResponse rsp = DescribeAccessKeyRiskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyRiskDetailOutcome(rsp);
        else
            return DescribeAccessKeyRiskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyRiskDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyRiskDetailAsync(const DescribeAccessKeyRiskDetailRequest& request, const DescribeAccessKeyRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyRiskDetailRequest&;
    using Resp = DescribeAccessKeyRiskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyRiskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyRiskDetailOutcomeCallable CsipClient::DescribeAccessKeyRiskDetailCallable(const DescribeAccessKeyRiskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyRiskDetailOutcome>>();
    DescribeAccessKeyRiskDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyRiskDetailRequest&,
        DescribeAccessKeyRiskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyUserDetailOutcome CsipClient::DescribeAccessKeyUserDetail(const DescribeAccessKeyUserDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyUserDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyUserDetailResponse rsp = DescribeAccessKeyUserDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyUserDetailOutcome(rsp);
        else
            return DescribeAccessKeyUserDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyUserDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyUserDetailAsync(const DescribeAccessKeyUserDetailRequest& request, const DescribeAccessKeyUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyUserDetailRequest&;
    using Resp = DescribeAccessKeyUserDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyUserDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyUserDetailOutcomeCallable CsipClient::DescribeAccessKeyUserDetailCallable(const DescribeAccessKeyUserDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyUserDetailOutcome>>();
    DescribeAccessKeyUserDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyUserDetailRequest&,
        DescribeAccessKeyUserDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAccessKeyUserListOutcome CsipClient::DescribeAccessKeyUserList(const DescribeAccessKeyUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessKeyUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessKeyUserListResponse rsp = DescribeAccessKeyUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessKeyUserListOutcome(rsp);
        else
            return DescribeAccessKeyUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessKeyUserListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAccessKeyUserListAsync(const DescribeAccessKeyUserListRequest& request, const DescribeAccessKeyUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessKeyUserListRequest&;
    using Resp = DescribeAccessKeyUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessKeyUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAccessKeyUserListOutcomeCallable CsipClient::DescribeAccessKeyUserListCallable(const DescribeAccessKeyUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessKeyUserListOutcome>>();
    DescribeAccessKeyUserListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAccessKeyUserListRequest&,
        DescribeAccessKeyUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAlertListOutcome CsipClient::DescribeAlertList(const DescribeAlertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlertListResponse rsp = DescribeAlertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlertListOutcome(rsp);
        else
            return DescribeAlertListOutcome(o.GetError());
    }
    else
    {
        return DescribeAlertListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAlertListAsync(const DescribeAlertListRequest& request, const DescribeAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlertListRequest&;
    using Resp = DescribeAlertListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlertList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAlertListOutcomeCallable CsipClient::DescribeAlertListCallable(const DescribeAlertListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlertListOutcome>>();
    DescribeAlertListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAlertListRequest&,
        DescribeAlertListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAssetProcessListOutcome CsipClient::DescribeAssetProcessList(const DescribeAssetProcessListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetProcessList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetProcessListResponse rsp = DescribeAssetProcessListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetProcessListOutcome(rsp);
        else
            return DescribeAssetProcessListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetProcessListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssetProcessListAsync(const DescribeAssetProcessListRequest& request, const DescribeAssetProcessListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetProcessListRequest&;
    using Resp = DescribeAssetProcessListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetProcessList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAssetProcessListOutcomeCallable CsipClient::DescribeAssetProcessListCallable(const DescribeAssetProcessListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetProcessListOutcome>>();
    DescribeAssetProcessListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAssetProcessListRequest&,
        DescribeAssetProcessListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAssetRiskListOutcome CsipClient::DescribeAssetRiskList(const DescribeAssetRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetRiskListResponse rsp = DescribeAssetRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetRiskListOutcome(rsp);
        else
            return DescribeAssetRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssetRiskListAsync(const DescribeAssetRiskListRequest& request, const DescribeAssetRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetRiskListRequest&;
    using Resp = DescribeAssetRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAssetRiskListOutcomeCallable CsipClient::DescribeAssetRiskListCallable(const DescribeAssetRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetRiskListOutcome>>();
    DescribeAssetRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAssetRiskListRequest&,
        DescribeAssetRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAssetViewVulRiskListOutcome CsipClient::DescribeAssetViewVulRiskList(const DescribeAssetViewVulRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetViewVulRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetViewVulRiskListResponse rsp = DescribeAssetViewVulRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetViewVulRiskListOutcome(rsp);
        else
            return DescribeAssetViewVulRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetViewVulRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssetViewVulRiskListAsync(const DescribeAssetViewVulRiskListRequest& request, const DescribeAssetViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetViewVulRiskListRequest&;
    using Resp = DescribeAssetViewVulRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetViewVulRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAssetViewVulRiskListOutcomeCallable CsipClient::DescribeAssetViewVulRiskListCallable(const DescribeAssetViewVulRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetViewVulRiskListOutcome>>();
    DescribeAssetViewVulRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAssetViewVulRiskListRequest&,
        DescribeAssetViewVulRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCFWAssetStatisticsOutcome CsipClient::DescribeCFWAssetStatistics(const DescribeCFWAssetStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCFWAssetStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCFWAssetStatisticsResponse rsp = DescribeCFWAssetStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCFWAssetStatisticsOutcome(rsp);
        else
            return DescribeCFWAssetStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeCFWAssetStatisticsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCFWAssetStatisticsAsync(const DescribeCFWAssetStatisticsRequest& request, const DescribeCFWAssetStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCFWAssetStatisticsRequest&;
    using Resp = DescribeCFWAssetStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCFWAssetStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCFWAssetStatisticsOutcomeCallable CsipClient::DescribeCFWAssetStatisticsCallable(const DescribeCFWAssetStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCFWAssetStatisticsOutcome>>();
    DescribeCFWAssetStatisticsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCFWAssetStatisticsRequest&,
        DescribeCFWAssetStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCSIPRiskStatisticsOutcome CsipClient::DescribeCSIPRiskStatistics(const DescribeCSIPRiskStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCSIPRiskStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCSIPRiskStatisticsResponse rsp = DescribeCSIPRiskStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCSIPRiskStatisticsOutcome(rsp);
        else
            return DescribeCSIPRiskStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeCSIPRiskStatisticsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCSIPRiskStatisticsAsync(const DescribeCSIPRiskStatisticsRequest& request, const DescribeCSIPRiskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCSIPRiskStatisticsRequest&;
    using Resp = DescribeCSIPRiskStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCSIPRiskStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCSIPRiskStatisticsOutcomeCallable CsipClient::DescribeCSIPRiskStatisticsCallable(const DescribeCSIPRiskStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCSIPRiskStatisticsOutcome>>();
    DescribeCSIPRiskStatisticsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCSIPRiskStatisticsRequest&,
        DescribeCSIPRiskStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCVMAssetInfoOutcome CsipClient::DescribeCVMAssetInfo(const DescribeCVMAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetInfoResponse rsp = DescribeCVMAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetInfoOutcome(rsp);
        else
            return DescribeCVMAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetInfoAsync(const DescribeCVMAssetInfoRequest& request, const DescribeCVMAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCVMAssetInfoRequest&;
    using Resp = DescribeCVMAssetInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCVMAssetInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCVMAssetInfoOutcomeCallable CsipClient::DescribeCVMAssetInfoCallable(const DescribeCVMAssetInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCVMAssetInfoOutcome>>();
    DescribeCVMAssetInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCVMAssetInfoRequest&,
        DescribeCVMAssetInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCVMAssetsOutcome CsipClient::DescribeCVMAssets(const DescribeCVMAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCVMAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCVMAssetsResponse rsp = DescribeCVMAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCVMAssetsOutcome(rsp);
        else
            return DescribeCVMAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeCVMAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCVMAssetsAsync(const DescribeCVMAssetsRequest& request, const DescribeCVMAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCVMAssetsRequest&;
    using Resp = DescribeCVMAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCVMAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCVMAssetsOutcomeCallable CsipClient::DescribeCVMAssetsCallable(const DescribeCVMAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCVMAssetsOutcome>>();
    DescribeCVMAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCVMAssetsRequest&,
        DescribeCVMAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCallRecordOutcome CsipClient::DescribeCallRecord(const DescribeCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCallRecordResponse rsp = DescribeCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCallRecordOutcome(rsp);
        else
            return DescribeCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCallRecordAsync(const DescribeCallRecordRequest& request, const DescribeCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCallRecordRequest&;
    using Resp = DescribeCallRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCallRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCallRecordOutcomeCallable CsipClient::DescribeCallRecordCallable(const DescribeCallRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCallRecordOutcome>>();
    DescribeCallRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCallRecordRequest&,
        DescribeCallRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCheckViewRisksOutcome CsipClient::DescribeCheckViewRisks(const DescribeCheckViewRisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckViewRisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckViewRisksResponse rsp = DescribeCheckViewRisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckViewRisksOutcome(rsp);
        else
            return DescribeCheckViewRisksOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckViewRisksOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCheckViewRisksAsync(const DescribeCheckViewRisksRequest& request, const DescribeCheckViewRisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCheckViewRisksRequest&;
    using Resp = DescribeCheckViewRisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCheckViewRisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCheckViewRisksOutcomeCallable CsipClient::DescribeCheckViewRisksCallable(const DescribeCheckViewRisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCheckViewRisksOutcome>>();
    DescribeCheckViewRisksAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCheckViewRisksRequest&,
        DescribeCheckViewRisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeClusterAssetsOutcome CsipClient::DescribeClusterAssets(const DescribeClusterAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterAssetsResponse rsp = DescribeClusterAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterAssetsOutcome(rsp);
        else
            return DescribeClusterAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeClusterAssetsAsync(const DescribeClusterAssetsRequest& request, const DescribeClusterAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterAssetsRequest&;
    using Resp = DescribeClusterAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeClusterAssetsOutcomeCallable CsipClient::DescribeClusterAssetsCallable(const DescribeClusterAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterAssetsOutcome>>();
    DescribeClusterAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeClusterAssetsRequest&,
        DescribeClusterAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeClusterPodAssetsOutcome CsipClient::DescribeClusterPodAssets(const DescribeClusterPodAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterPodAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterPodAssetsResponse rsp = DescribeClusterPodAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterPodAssetsOutcome(rsp);
        else
            return DescribeClusterPodAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterPodAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeClusterPodAssetsAsync(const DescribeClusterPodAssetsRequest& request, const DescribeClusterPodAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterPodAssetsRequest&;
    using Resp = DescribeClusterPodAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterPodAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeClusterPodAssetsOutcomeCallable CsipClient::DescribeClusterPodAssetsCallable(const DescribeClusterPodAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterPodAssetsOutcome>>();
    DescribeClusterPodAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeClusterPodAssetsRequest&,
        DescribeClusterPodAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeConfigCheckRulesOutcome CsipClient::DescribeConfigCheckRules(const DescribeConfigCheckRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigCheckRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigCheckRulesResponse rsp = DescribeConfigCheckRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigCheckRulesOutcome(rsp);
        else
            return DescribeConfigCheckRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigCheckRulesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeConfigCheckRulesAsync(const DescribeConfigCheckRulesRequest& request, const DescribeConfigCheckRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigCheckRulesRequest&;
    using Resp = DescribeConfigCheckRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigCheckRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeConfigCheckRulesOutcomeCallable CsipClient::DescribeConfigCheckRulesCallable(const DescribeConfigCheckRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigCheckRulesOutcome>>();
    DescribeConfigCheckRulesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeConfigCheckRulesRequest&,
        DescribeConfigCheckRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDbAssetInfoOutcome CsipClient::DescribeDbAssetInfo(const DescribeDbAssetInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssetInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetInfoResponse rsp = DescribeDbAssetInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetInfoOutcome(rsp);
        else
            return DescribeDbAssetInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetInfoAsync(const DescribeDbAssetInfoRequest& request, const DescribeDbAssetInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDbAssetInfoRequest&;
    using Resp = DescribeDbAssetInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDbAssetInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDbAssetInfoOutcomeCallable CsipClient::DescribeDbAssetInfoCallable(const DescribeDbAssetInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDbAssetInfoOutcome>>();
    DescribeDbAssetInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDbAssetInfoRequest&,
        DescribeDbAssetInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDbAssetsOutcome CsipClient::DescribeDbAssets(const DescribeDbAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbAssetsResponse rsp = DescribeDbAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbAssetsOutcome(rsp);
        else
            return DescribeDbAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDbAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDbAssetsAsync(const DescribeDbAssetsRequest& request, const DescribeDbAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDbAssetsRequest&;
    using Resp = DescribeDbAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDbAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDbAssetsOutcomeCallable CsipClient::DescribeDbAssetsCallable(const DescribeDbAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDbAssetsOutcome>>();
    DescribeDbAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDbAssetsRequest&,
        DescribeDbAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDomainAssetsOutcome CsipClient::DescribeDomainAssets(const DescribeDomainAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAssetsResponse rsp = DescribeDomainAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAssetsOutcome(rsp);
        else
            return DescribeDomainAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDomainAssetsAsync(const DescribeDomainAssetsRequest& request, const DescribeDomainAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainAssetsRequest&;
    using Resp = DescribeDomainAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDomainAssetsOutcomeCallable CsipClient::DescribeDomainAssetsCallable(const DescribeDomainAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainAssetsOutcome>>();
    DescribeDomainAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDomainAssetsRequest&,
        DescribeDomainAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeExposeAssetCategoryOutcome CsipClient::DescribeExposeAssetCategory(const DescribeExposeAssetCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExposeAssetCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExposeAssetCategoryResponse rsp = DescribeExposeAssetCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExposeAssetCategoryOutcome(rsp);
        else
            return DescribeExposeAssetCategoryOutcome(o.GetError());
    }
    else
    {
        return DescribeExposeAssetCategoryOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeExposeAssetCategoryAsync(const DescribeExposeAssetCategoryRequest& request, const DescribeExposeAssetCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExposeAssetCategoryRequest&;
    using Resp = DescribeExposeAssetCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExposeAssetCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeExposeAssetCategoryOutcomeCallable CsipClient::DescribeExposeAssetCategoryCallable(const DescribeExposeAssetCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExposeAssetCategoryOutcome>>();
    DescribeExposeAssetCategoryAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeExposeAssetCategoryRequest&,
        DescribeExposeAssetCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeExposePathOutcome CsipClient::DescribeExposePath(const DescribeExposePathRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExposePath");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExposePathResponse rsp = DescribeExposePathResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExposePathOutcome(rsp);
        else
            return DescribeExposePathOutcome(o.GetError());
    }
    else
    {
        return DescribeExposePathOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeExposePathAsync(const DescribeExposePathRequest& request, const DescribeExposePathAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExposePathRequest&;
    using Resp = DescribeExposePathResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExposePath", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeExposePathOutcomeCallable CsipClient::DescribeExposePathCallable(const DescribeExposePathRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExposePathOutcome>>();
    DescribeExposePathAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeExposePathRequest&,
        DescribeExposePathOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeExposuresOutcome CsipClient::DescribeExposures(const DescribeExposuresRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExposures");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExposuresResponse rsp = DescribeExposuresResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExposuresOutcome(rsp);
        else
            return DescribeExposuresOutcome(o.GetError());
    }
    else
    {
        return DescribeExposuresOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeExposuresAsync(const DescribeExposuresRequest& request, const DescribeExposuresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExposuresRequest&;
    using Resp = DescribeExposuresResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExposures", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeExposuresOutcomeCallable CsipClient::DescribeExposuresCallable(const DescribeExposuresRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExposuresOutcome>>();
    DescribeExposuresAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeExposuresRequest&,
        DescribeExposuresOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeGatewayAssetsOutcome CsipClient::DescribeGatewayAssets(const DescribeGatewayAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayAssetsResponse rsp = DescribeGatewayAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayAssetsOutcome(rsp);
        else
            return DescribeGatewayAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeGatewayAssetsAsync(const DescribeGatewayAssetsRequest& request, const DescribeGatewayAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayAssetsRequest&;
    using Resp = DescribeGatewayAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeGatewayAssetsOutcomeCallable CsipClient::DescribeGatewayAssetsCallable(const DescribeGatewayAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayAssetsOutcome>>();
    DescribeGatewayAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeGatewayAssetsRequest&,
        DescribeGatewayAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeHighBaseLineRiskListOutcome CsipClient::DescribeHighBaseLineRiskList(const DescribeHighBaseLineRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHighBaseLineRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHighBaseLineRiskListResponse rsp = DescribeHighBaseLineRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHighBaseLineRiskListOutcome(rsp);
        else
            return DescribeHighBaseLineRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeHighBaseLineRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeHighBaseLineRiskListAsync(const DescribeHighBaseLineRiskListRequest& request, const DescribeHighBaseLineRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHighBaseLineRiskListRequest&;
    using Resp = DescribeHighBaseLineRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHighBaseLineRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeHighBaseLineRiskListOutcomeCallable CsipClient::DescribeHighBaseLineRiskListCallable(const DescribeHighBaseLineRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHighBaseLineRiskListOutcome>>();
    DescribeHighBaseLineRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeHighBaseLineRiskListRequest&,
        DescribeHighBaseLineRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeListenerListOutcome CsipClient::DescribeListenerList(const DescribeListenerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeListenerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeListenerListResponse rsp = DescribeListenerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeListenerListOutcome(rsp);
        else
            return DescribeListenerListOutcome(o.GetError());
    }
    else
    {
        return DescribeListenerListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeListenerListAsync(const DescribeListenerListRequest& request, const DescribeListenerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeListenerListRequest&;
    using Resp = DescribeListenerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeListenerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeListenerListOutcomeCallable CsipClient::DescribeListenerListCallable(const DescribeListenerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeListenerListOutcome>>();
    DescribeListenerListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeListenerListRequest&,
        DescribeListenerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeNICAssetsOutcome CsipClient::DescribeNICAssets(const DescribeNICAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNICAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNICAssetsResponse rsp = DescribeNICAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNICAssetsOutcome(rsp);
        else
            return DescribeNICAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeNICAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeNICAssetsAsync(const DescribeNICAssetsRequest& request, const DescribeNICAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNICAssetsRequest&;
    using Resp = DescribeNICAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNICAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeNICAssetsOutcomeCallable CsipClient::DescribeNICAssetsCallable(const DescribeNICAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNICAssetsOutcome>>();
    DescribeNICAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeNICAssetsRequest&,
        DescribeNICAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeOrganizationInfoOutcome CsipClient::DescribeOrganizationInfo(const DescribeOrganizationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationInfoResponse rsp = DescribeOrganizationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationInfoOutcome(rsp);
        else
            return DescribeOrganizationInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeOrganizationInfoAsync(const DescribeOrganizationInfoRequest& request, const DescribeOrganizationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationInfoRequest&;
    using Resp = DescribeOrganizationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeOrganizationInfoOutcomeCallable CsipClient::DescribeOrganizationInfoCallable(const DescribeOrganizationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationInfoOutcome>>();
    DescribeOrganizationInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeOrganizationInfoRequest&,
        DescribeOrganizationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeOrganizationUserInfoOutcome CsipClient::DescribeOrganizationUserInfo(const DescribeOrganizationUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrganizationUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrganizationUserInfoResponse rsp = DescribeOrganizationUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrganizationUserInfoOutcome(rsp);
        else
            return DescribeOrganizationUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeOrganizationUserInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeOrganizationUserInfoAsync(const DescribeOrganizationUserInfoRequest& request, const DescribeOrganizationUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrganizationUserInfoRequest&;
    using Resp = DescribeOrganizationUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrganizationUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeOrganizationUserInfoOutcomeCallable CsipClient::DescribeOrganizationUserInfoCallable(const DescribeOrganizationUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrganizationUserInfoOutcome>>();
    DescribeOrganizationUserInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeOrganizationUserInfoRequest&,
        DescribeOrganizationUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeOtherCloudAssetsOutcome CsipClient::DescribeOtherCloudAssets(const DescribeOtherCloudAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOtherCloudAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOtherCloudAssetsResponse rsp = DescribeOtherCloudAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOtherCloudAssetsOutcome(rsp);
        else
            return DescribeOtherCloudAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeOtherCloudAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeOtherCloudAssetsAsync(const DescribeOtherCloudAssetsRequest& request, const DescribeOtherCloudAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOtherCloudAssetsRequest&;
    using Resp = DescribeOtherCloudAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOtherCloudAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeOtherCloudAssetsOutcomeCallable CsipClient::DescribeOtherCloudAssetsCallable(const DescribeOtherCloudAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOtherCloudAssetsOutcome>>();
    DescribeOtherCloudAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeOtherCloudAssetsRequest&,
        DescribeOtherCloudAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribePublicIpAssetsOutcome CsipClient::DescribePublicIpAssets(const DescribePublicIpAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicIpAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicIpAssetsResponse rsp = DescribePublicIpAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicIpAssetsOutcome(rsp);
        else
            return DescribePublicIpAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicIpAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribePublicIpAssetsAsync(const DescribePublicIpAssetsRequest& request, const DescribePublicIpAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicIpAssetsRequest&;
    using Resp = DescribePublicIpAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicIpAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribePublicIpAssetsOutcomeCallable CsipClient::DescribePublicIpAssetsCallable(const DescribePublicIpAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicIpAssetsOutcome>>();
    DescribePublicIpAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribePublicIpAssetsRequest&,
        DescribePublicIpAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRepositoryImageAssetsOutcome CsipClient::DescribeRepositoryImageAssets(const DescribeRepositoryImageAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositoryImageAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryImageAssetsResponse rsp = DescribeRepositoryImageAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryImageAssetsOutcome(rsp);
        else
            return DescribeRepositoryImageAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryImageAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRepositoryImageAssetsAsync(const DescribeRepositoryImageAssetsRequest& request, const DescribeRepositoryImageAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRepositoryImageAssetsRequest&;
    using Resp = DescribeRepositoryImageAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRepositoryImageAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRepositoryImageAssetsOutcomeCallable CsipClient::DescribeRepositoryImageAssetsCallable(const DescribeRepositoryImageAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRepositoryImageAssetsOutcome>>();
    DescribeRepositoryImageAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRepositoryImageAssetsRequest&,
        DescribeRepositoryImageAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCallRecordOutcome CsipClient::DescribeRiskCallRecord(const DescribeRiskCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCallRecordResponse rsp = DescribeRiskCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCallRecordOutcome(rsp);
        else
            return DescribeRiskCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCallRecordAsync(const DescribeRiskCallRecordRequest& request, const DescribeRiskCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCallRecordRequest&;
    using Resp = DescribeRiskCallRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCallRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCallRecordOutcomeCallable CsipClient::DescribeRiskCallRecordCallable(const DescribeRiskCallRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCallRecordOutcome>>();
    DescribeRiskCallRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCallRecordRequest&,
        DescribeRiskCallRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterAssetViewCFGRiskListOutcome CsipClient::DescribeRiskCenterAssetViewCFGRiskList(const DescribeRiskCenterAssetViewCFGRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewCFGRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewCFGRiskListResponse rsp = DescribeRiskCenterAssetViewCFGRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewCFGRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewCFGRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewCFGRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewCFGRiskListAsync(const DescribeRiskCenterAssetViewCFGRiskListRequest& request, const DescribeRiskCenterAssetViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterAssetViewCFGRiskListRequest&;
    using Resp = DescribeRiskCenterAssetViewCFGRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterAssetViewCFGRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterAssetViewCFGRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewCFGRiskListCallable(const DescribeRiskCenterAssetViewCFGRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterAssetViewCFGRiskListOutcome>>();
    DescribeRiskCenterAssetViewCFGRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterAssetViewCFGRiskListRequest&,
        DescribeRiskCenterAssetViewCFGRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcome CsipClient::DescribeRiskCenterAssetViewPortRiskList(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewPortRiskListResponse rsp = DescribeRiskCenterAssetViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewPortRiskListAsync(const DescribeRiskCenterAssetViewPortRiskListRequest& request, const DescribeRiskCenterAssetViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterAssetViewPortRiskListRequest&;
    using Resp = DescribeRiskCenterAssetViewPortRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterAssetViewPortRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterAssetViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewPortRiskListCallable(const DescribeRiskCenterAssetViewPortRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterAssetViewPortRiskListOutcome>>();
    DescribeRiskCenterAssetViewPortRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterAssetViewPortRiskListRequest&,
        DescribeRiskCenterAssetViewPortRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcome CsipClient::DescribeRiskCenterAssetViewVULRiskList(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewVULRiskListResponse rsp = DescribeRiskCenterAssetViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewVULRiskListAsync(const DescribeRiskCenterAssetViewVULRiskListRequest& request, const DescribeRiskCenterAssetViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterAssetViewVULRiskListRequest&;
    using Resp = DescribeRiskCenterAssetViewVULRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterAssetViewVULRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterAssetViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewVULRiskListCallable(const DescribeRiskCenterAssetViewVULRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterAssetViewVULRiskListOutcome>>();
    DescribeRiskCenterAssetViewVULRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterAssetViewVULRiskListRequest&,
        DescribeRiskCenterAssetViewVULRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskList(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterAssetViewWeakPasswordRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterAssetViewWeakPasswordRiskListResponse rsp = DescribeRiskCenterAssetViewWeakPasswordRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(rsp);
        else
            return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest& request, const DescribeRiskCenterAssetViewWeakPasswordRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest&;
    using Resp = DescribeRiskCenterAssetViewWeakPasswordRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterAssetViewWeakPasswordRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListOutcomeCallable CsipClient::DescribeRiskCenterAssetViewWeakPasswordRiskListCallable(const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome>>();
    DescribeRiskCenterAssetViewWeakPasswordRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterAssetViewWeakPasswordRiskListRequest&,
        DescribeRiskCenterAssetViewWeakPasswordRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterCFGViewCFGRiskListOutcome CsipClient::DescribeRiskCenterCFGViewCFGRiskList(const DescribeRiskCenterCFGViewCFGRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterCFGViewCFGRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterCFGViewCFGRiskListResponse rsp = DescribeRiskCenterCFGViewCFGRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterCFGViewCFGRiskListOutcome(rsp);
        else
            return DescribeRiskCenterCFGViewCFGRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterCFGViewCFGRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterCFGViewCFGRiskListAsync(const DescribeRiskCenterCFGViewCFGRiskListRequest& request, const DescribeRiskCenterCFGViewCFGRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterCFGViewCFGRiskListRequest&;
    using Resp = DescribeRiskCenterCFGViewCFGRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterCFGViewCFGRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterCFGViewCFGRiskListOutcomeCallable CsipClient::DescribeRiskCenterCFGViewCFGRiskListCallable(const DescribeRiskCenterCFGViewCFGRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterCFGViewCFGRiskListOutcome>>();
    DescribeRiskCenterCFGViewCFGRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterCFGViewCFGRiskListRequest&,
        DescribeRiskCenterCFGViewCFGRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterPortViewPortRiskListOutcome CsipClient::DescribeRiskCenterPortViewPortRiskList(const DescribeRiskCenterPortViewPortRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterPortViewPortRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterPortViewPortRiskListResponse rsp = DescribeRiskCenterPortViewPortRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterPortViewPortRiskListOutcome(rsp);
        else
            return DescribeRiskCenterPortViewPortRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterPortViewPortRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterPortViewPortRiskListAsync(const DescribeRiskCenterPortViewPortRiskListRequest& request, const DescribeRiskCenterPortViewPortRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterPortViewPortRiskListRequest&;
    using Resp = DescribeRiskCenterPortViewPortRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterPortViewPortRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterPortViewPortRiskListOutcomeCallable CsipClient::DescribeRiskCenterPortViewPortRiskListCallable(const DescribeRiskCenterPortViewPortRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterPortViewPortRiskListOutcome>>();
    DescribeRiskCenterPortViewPortRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterPortViewPortRiskListRequest&,
        DescribeRiskCenterPortViewPortRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterServerRiskListOutcome CsipClient::DescribeRiskCenterServerRiskList(const DescribeRiskCenterServerRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterServerRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterServerRiskListResponse rsp = DescribeRiskCenterServerRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterServerRiskListOutcome(rsp);
        else
            return DescribeRiskCenterServerRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterServerRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterServerRiskListAsync(const DescribeRiskCenterServerRiskListRequest& request, const DescribeRiskCenterServerRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterServerRiskListRequest&;
    using Resp = DescribeRiskCenterServerRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterServerRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterServerRiskListOutcomeCallable CsipClient::DescribeRiskCenterServerRiskListCallable(const DescribeRiskCenterServerRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterServerRiskListOutcome>>();
    DescribeRiskCenterServerRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterServerRiskListRequest&,
        DescribeRiskCenterServerRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterVULViewVULRiskListOutcome CsipClient::DescribeRiskCenterVULViewVULRiskList(const DescribeRiskCenterVULViewVULRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterVULViewVULRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterVULViewVULRiskListResponse rsp = DescribeRiskCenterVULViewVULRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterVULViewVULRiskListOutcome(rsp);
        else
            return DescribeRiskCenterVULViewVULRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterVULViewVULRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterVULViewVULRiskListAsync(const DescribeRiskCenterVULViewVULRiskListRequest& request, const DescribeRiskCenterVULViewVULRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterVULViewVULRiskListRequest&;
    using Resp = DescribeRiskCenterVULViewVULRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterVULViewVULRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterVULViewVULRiskListOutcomeCallable CsipClient::DescribeRiskCenterVULViewVULRiskListCallable(const DescribeRiskCenterVULViewVULRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterVULViewVULRiskListOutcome>>();
    DescribeRiskCenterVULViewVULRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterVULViewVULRiskListRequest&,
        DescribeRiskCenterVULViewVULRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskCenterWebsiteRiskListOutcome CsipClient::DescribeRiskCenterWebsiteRiskList(const DescribeRiskCenterWebsiteRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskCenterWebsiteRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskCenterWebsiteRiskListResponse rsp = DescribeRiskCenterWebsiteRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskCenterWebsiteRiskListOutcome(rsp);
        else
            return DescribeRiskCenterWebsiteRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskCenterWebsiteRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskCenterWebsiteRiskListAsync(const DescribeRiskCenterWebsiteRiskListRequest& request, const DescribeRiskCenterWebsiteRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskCenterWebsiteRiskListRequest&;
    using Resp = DescribeRiskCenterWebsiteRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskCenterWebsiteRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskCenterWebsiteRiskListOutcomeCallable CsipClient::DescribeRiskCenterWebsiteRiskListCallable(const DescribeRiskCenterWebsiteRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskCenterWebsiteRiskListOutcome>>();
    DescribeRiskCenterWebsiteRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskCenterWebsiteRiskListRequest&,
        DescribeRiskCenterWebsiteRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskDetailListOutcome CsipClient::DescribeRiskDetailList(const DescribeRiskDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskDetailListResponse rsp = DescribeRiskDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskDetailListOutcome(rsp);
        else
            return DescribeRiskDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskDetailListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskDetailListAsync(const DescribeRiskDetailListRequest& request, const DescribeRiskDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskDetailListRequest&;
    using Resp = DescribeRiskDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskDetailListOutcomeCallable CsipClient::DescribeRiskDetailListCallable(const DescribeRiskDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskDetailListOutcome>>();
    DescribeRiskDetailListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskDetailListRequest&,
        DescribeRiskDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskRuleDetailOutcome CsipClient::DescribeRiskRuleDetail(const DescribeRiskRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskRuleDetailResponse rsp = DescribeRiskRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskRuleDetailOutcome(rsp);
        else
            return DescribeRiskRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskRuleDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskRuleDetailAsync(const DescribeRiskRuleDetailRequest& request, const DescribeRiskRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskRuleDetailRequest&;
    using Resp = DescribeRiskRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskRuleDetailOutcomeCallable CsipClient::DescribeRiskRuleDetailCallable(const DescribeRiskRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskRuleDetailOutcome>>();
    DescribeRiskRuleDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskRuleDetailRequest&,
        DescribeRiskRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeRiskRulesOutcome CsipClient::DescribeRiskRules(const DescribeRiskRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskRulesResponse rsp = DescribeRiskRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskRulesOutcome(rsp);
        else
            return DescribeRiskRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskRulesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskRulesAsync(const DescribeRiskRulesRequest& request, const DescribeRiskRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskRulesRequest&;
    using Resp = DescribeRiskRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskRulesOutcomeCallable CsipClient::DescribeRiskRulesCallable(const DescribeRiskRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskRulesOutcome>>();
    DescribeRiskRulesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskRulesRequest&,
        DescribeRiskRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeScanReportListOutcome CsipClient::DescribeScanReportList(const DescribeScanReportListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanReportList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanReportListResponse rsp = DescribeScanReportListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanReportListOutcome(rsp);
        else
            return DescribeScanReportListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanReportListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanReportListAsync(const DescribeScanReportListRequest& request, const DescribeScanReportListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanReportListRequest&;
    using Resp = DescribeScanReportListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanReportList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeScanReportListOutcomeCallable CsipClient::DescribeScanReportListCallable(const DescribeScanReportListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanReportListOutcome>>();
    DescribeScanReportListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeScanReportListRequest&,
        DescribeScanReportListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeScanStatisticOutcome CsipClient::DescribeScanStatistic(const DescribeScanStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanStatisticResponse rsp = DescribeScanStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanStatisticOutcome(rsp);
        else
            return DescribeScanStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeScanStatisticOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanStatisticAsync(const DescribeScanStatisticRequest& request, const DescribeScanStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanStatisticRequest&;
    using Resp = DescribeScanStatisticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanStatistic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeScanStatisticOutcomeCallable CsipClient::DescribeScanStatisticCallable(const DescribeScanStatisticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanStatisticOutcome>>();
    DescribeScanStatisticAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeScanStatisticRequest&,
        DescribeScanStatisticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeScanTaskListOutcome CsipClient::DescribeScanTaskList(const DescribeScanTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScanTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScanTaskListResponse rsp = DescribeScanTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScanTaskListOutcome(rsp);
        else
            return DescribeScanTaskListOutcome(o.GetError());
    }
    else
    {
        return DescribeScanTaskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeScanTaskListAsync(const DescribeScanTaskListRequest& request, const DescribeScanTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeScanTaskListRequest&;
    using Resp = DescribeScanTaskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeScanTaskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeScanTaskListOutcomeCallable CsipClient::DescribeScanTaskListCallable(const DescribeScanTaskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeScanTaskListOutcome>>();
    DescribeScanTaskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeScanTaskListRequest&,
        DescribeScanTaskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeSearchBugInfoOutcome CsipClient::DescribeSearchBugInfo(const DescribeSearchBugInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSearchBugInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSearchBugInfoResponse rsp = DescribeSearchBugInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSearchBugInfoOutcome(rsp);
        else
            return DescribeSearchBugInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSearchBugInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSearchBugInfoAsync(const DescribeSearchBugInfoRequest& request, const DescribeSearchBugInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSearchBugInfoRequest&;
    using Resp = DescribeSearchBugInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSearchBugInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeSearchBugInfoOutcomeCallable CsipClient::DescribeSearchBugInfoCallable(const DescribeSearchBugInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSearchBugInfoOutcome>>();
    DescribeSearchBugInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeSearchBugInfoRequest&,
        DescribeSearchBugInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeSourceIPAssetOutcome CsipClient::DescribeSourceIPAsset(const DescribeSourceIPAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSourceIPAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSourceIPAssetResponse rsp = DescribeSourceIPAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSourceIPAssetOutcome(rsp);
        else
            return DescribeSourceIPAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeSourceIPAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSourceIPAssetAsync(const DescribeSourceIPAssetRequest& request, const DescribeSourceIPAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSourceIPAssetRequest&;
    using Resp = DescribeSourceIPAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSourceIPAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeSourceIPAssetOutcomeCallable CsipClient::DescribeSourceIPAssetCallable(const DescribeSourceIPAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSourceIPAssetOutcome>>();
    DescribeSourceIPAssetAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeSourceIPAssetRequest&,
        DescribeSourceIPAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeSubUserInfoOutcome CsipClient::DescribeSubUserInfo(const DescribeSubUserInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubUserInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubUserInfoResponse rsp = DescribeSubUserInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubUserInfoOutcome(rsp);
        else
            return DescribeSubUserInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSubUserInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSubUserInfoAsync(const DescribeSubUserInfoRequest& request, const DescribeSubUserInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubUserInfoRequest&;
    using Resp = DescribeSubUserInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubUserInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeSubUserInfoOutcomeCallable CsipClient::DescribeSubUserInfoCallable(const DescribeSubUserInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubUserInfoOutcome>>();
    DescribeSubUserInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeSubUserInfoRequest&,
        DescribeSubUserInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeSubnetAssetsOutcome CsipClient::DescribeSubnetAssets(const DescribeSubnetAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubnetAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubnetAssetsResponse rsp = DescribeSubnetAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubnetAssetsOutcome(rsp);
        else
            return DescribeSubnetAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubnetAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSubnetAssetsAsync(const DescribeSubnetAssetsRequest& request, const DescribeSubnetAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubnetAssetsRequest&;
    using Resp = DescribeSubnetAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubnetAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeSubnetAssetsOutcomeCallable CsipClient::DescribeSubnetAssetsCallable(const DescribeSubnetAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubnetAssetsOutcome>>();
    DescribeSubnetAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeSubnetAssetsRequest&,
        DescribeSubnetAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeTaskLogListOutcome CsipClient::DescribeTaskLogList(const DescribeTaskLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogListResponse rsp = DescribeTaskLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogListOutcome(rsp);
        else
            return DescribeTaskLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTaskLogListAsync(const DescribeTaskLogListRequest& request, const DescribeTaskLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLogListRequest&;
    using Resp = DescribeTaskLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeTaskLogListOutcomeCallable CsipClient::DescribeTaskLogListCallable(const DescribeTaskLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLogListOutcome>>();
    DescribeTaskLogListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeTaskLogListRequest&,
        DescribeTaskLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeTaskLogURLOutcome CsipClient::DescribeTaskLogURL(const DescribeTaskLogURLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLogURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLogURLResponse rsp = DescribeTaskLogURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLogURLOutcome(rsp);
        else
            return DescribeTaskLogURLOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLogURLOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTaskLogURLAsync(const DescribeTaskLogURLRequest& request, const DescribeTaskLogURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLogURLRequest&;
    using Resp = DescribeTaskLogURLResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLogURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeTaskLogURLOutcomeCallable CsipClient::DescribeTaskLogURLCallable(const DescribeTaskLogURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLogURLOutcome>>();
    DescribeTaskLogURLAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeTaskLogURLRequest&,
        DescribeTaskLogURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeTopAttackInfoOutcome CsipClient::DescribeTopAttackInfo(const DescribeTopAttackInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopAttackInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopAttackInfoResponse rsp = DescribeTopAttackInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopAttackInfoOutcome(rsp);
        else
            return DescribeTopAttackInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeTopAttackInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeTopAttackInfoAsync(const DescribeTopAttackInfoRequest& request, const DescribeTopAttackInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTopAttackInfoRequest&;
    using Resp = DescribeTopAttackInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopAttackInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeTopAttackInfoOutcomeCallable CsipClient::DescribeTopAttackInfoCallable(const DescribeTopAttackInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopAttackInfoOutcome>>();
    DescribeTopAttackInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeTopAttackInfoRequest&,
        DescribeTopAttackInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeUebaRuleOutcome CsipClient::DescribeUebaRule(const DescribeUebaRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUebaRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUebaRuleResponse rsp = DescribeUebaRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUebaRuleOutcome(rsp);
        else
            return DescribeUebaRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeUebaRuleOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeUebaRuleAsync(const DescribeUebaRuleRequest& request, const DescribeUebaRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUebaRuleRequest&;
    using Resp = DescribeUebaRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUebaRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeUebaRuleOutcomeCallable CsipClient::DescribeUebaRuleCallable(const DescribeUebaRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUebaRuleOutcome>>();
    DescribeUebaRuleAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeUebaRuleRequest&,
        DescribeUebaRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeUserCallRecordOutcome CsipClient::DescribeUserCallRecord(const DescribeUserCallRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserCallRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserCallRecordResponse rsp = DescribeUserCallRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserCallRecordOutcome(rsp);
        else
            return DescribeUserCallRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeUserCallRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeUserCallRecordAsync(const DescribeUserCallRecordRequest& request, const DescribeUserCallRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserCallRecordRequest&;
    using Resp = DescribeUserCallRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserCallRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeUserCallRecordOutcomeCallable CsipClient::DescribeUserCallRecordCallable(const DescribeUserCallRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserCallRecordOutcome>>();
    DescribeUserCallRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeUserCallRecordRequest&,
        DescribeUserCallRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeVULListOutcome CsipClient::DescribeVULList(const DescribeVULListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULListResponse rsp = DescribeVULListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULListOutcome(rsp);
        else
            return DescribeVULListOutcome(o.GetError());
    }
    else
    {
        return DescribeVULListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULListAsync(const DescribeVULListRequest& request, const DescribeVULListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVULListRequest&;
    using Resp = DescribeVULListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVULList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeVULListOutcomeCallable CsipClient::DescribeVULListCallable(const DescribeVULListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVULListOutcome>>();
    DescribeVULListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeVULListRequest&,
        DescribeVULListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeVULRiskAdvanceCFGListOutcome CsipClient::DescribeVULRiskAdvanceCFGList(const DescribeVULRiskAdvanceCFGListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULRiskAdvanceCFGList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULRiskAdvanceCFGListResponse rsp = DescribeVULRiskAdvanceCFGListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULRiskAdvanceCFGListOutcome(rsp);
        else
            return DescribeVULRiskAdvanceCFGListOutcome(o.GetError());
    }
    else
    {
        return DescribeVULRiskAdvanceCFGListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULRiskAdvanceCFGListAsync(const DescribeVULRiskAdvanceCFGListRequest& request, const DescribeVULRiskAdvanceCFGListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVULRiskAdvanceCFGListRequest&;
    using Resp = DescribeVULRiskAdvanceCFGListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVULRiskAdvanceCFGList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeVULRiskAdvanceCFGListOutcomeCallable CsipClient::DescribeVULRiskAdvanceCFGListCallable(const DescribeVULRiskAdvanceCFGListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVULRiskAdvanceCFGListOutcome>>();
    DescribeVULRiskAdvanceCFGListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeVULRiskAdvanceCFGListRequest&,
        DescribeVULRiskAdvanceCFGListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeVULRiskDetailOutcome CsipClient::DescribeVULRiskDetail(const DescribeVULRiskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVULRiskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVULRiskDetailResponse rsp = DescribeVULRiskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVULRiskDetailOutcome(rsp);
        else
            return DescribeVULRiskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVULRiskDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVULRiskDetailAsync(const DescribeVULRiskDetailRequest& request, const DescribeVULRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVULRiskDetailRequest&;
    using Resp = DescribeVULRiskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVULRiskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeVULRiskDetailOutcomeCallable CsipClient::DescribeVULRiskDetailCallable(const DescribeVULRiskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVULRiskDetailOutcome>>();
    DescribeVULRiskDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeVULRiskDetailRequest&,
        DescribeVULRiskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeVpcAssetsOutcome CsipClient::DescribeVpcAssets(const DescribeVpcAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVpcAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVpcAssetsResponse rsp = DescribeVpcAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVpcAssetsOutcome(rsp);
        else
            return DescribeVpcAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeVpcAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVpcAssetsAsync(const DescribeVpcAssetsRequest& request, const DescribeVpcAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVpcAssetsRequest&;
    using Resp = DescribeVpcAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVpcAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeVpcAssetsOutcomeCallable CsipClient::DescribeVpcAssetsCallable(const DescribeVpcAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVpcAssetsOutcome>>();
    DescribeVpcAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeVpcAssetsRequest&,
        DescribeVpcAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeVulRiskListOutcome CsipClient::DescribeVulRiskList(const DescribeVulRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulRiskListResponse rsp = DescribeVulRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulRiskListOutcome(rsp);
        else
            return DescribeVulRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVulRiskListAsync(const DescribeVulRiskListRequest& request, const DescribeVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulRiskListRequest&;
    using Resp = DescribeVulRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeVulRiskListOutcomeCallable CsipClient::DescribeVulRiskListCallable(const DescribeVulRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulRiskListOutcome>>();
    DescribeVulRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeVulRiskListRequest&,
        DescribeVulRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeVulViewVulRiskListOutcome CsipClient::DescribeVulViewVulRiskList(const DescribeVulViewVulRiskListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulViewVulRiskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulViewVulRiskListResponse rsp = DescribeVulViewVulRiskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulViewVulRiskListOutcome(rsp);
        else
            return DescribeVulViewVulRiskListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulViewVulRiskListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeVulViewVulRiskListAsync(const DescribeVulViewVulRiskListRequest& request, const DescribeVulViewVulRiskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulViewVulRiskListRequest&;
    using Resp = DescribeVulViewVulRiskListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulViewVulRiskList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeVulViewVulRiskListOutcomeCallable CsipClient::DescribeVulViewVulRiskListCallable(const DescribeVulViewVulRiskListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulViewVulRiskListOutcome>>();
    DescribeVulViewVulRiskListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeVulViewVulRiskListRequest&,
        DescribeVulViewVulRiskListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyOrganizationAccountStatusOutcome CsipClient::ModifyOrganizationAccountStatus(const ModifyOrganizationAccountStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOrganizationAccountStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOrganizationAccountStatusResponse rsp = ModifyOrganizationAccountStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOrganizationAccountStatusOutcome(rsp);
        else
            return ModifyOrganizationAccountStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyOrganizationAccountStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyOrganizationAccountStatusAsync(const ModifyOrganizationAccountStatusRequest& request, const ModifyOrganizationAccountStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyOrganizationAccountStatusRequest&;
    using Resp = ModifyOrganizationAccountStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyOrganizationAccountStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyOrganizationAccountStatusOutcomeCallable CsipClient::ModifyOrganizationAccountStatusCallable(const ModifyOrganizationAccountStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyOrganizationAccountStatusOutcome>>();
    ModifyOrganizationAccountStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyOrganizationAccountStatusRequest&,
        ModifyOrganizationAccountStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyRiskCenterRiskStatusOutcome CsipClient::ModifyRiskCenterRiskStatus(const ModifyRiskCenterRiskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskCenterRiskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskCenterRiskStatusResponse rsp = ModifyRiskCenterRiskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskCenterRiskStatusOutcome(rsp);
        else
            return ModifyRiskCenterRiskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskCenterRiskStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyRiskCenterRiskStatusAsync(const ModifyRiskCenterRiskStatusRequest& request, const ModifyRiskCenterRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskCenterRiskStatusRequest&;
    using Resp = ModifyRiskCenterRiskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskCenterRiskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyRiskCenterRiskStatusOutcomeCallable CsipClient::ModifyRiskCenterRiskStatusCallable(const ModifyRiskCenterRiskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskCenterRiskStatusOutcome>>();
    ModifyRiskCenterRiskStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyRiskCenterRiskStatusRequest&,
        ModifyRiskCenterRiskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyRiskCenterScanTaskOutcome CsipClient::ModifyRiskCenterScanTask(const ModifyRiskCenterScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRiskCenterScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRiskCenterScanTaskResponse rsp = ModifyRiskCenterScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRiskCenterScanTaskOutcome(rsp);
        else
            return ModifyRiskCenterScanTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyRiskCenterScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyRiskCenterScanTaskAsync(const ModifyRiskCenterScanTaskRequest& request, const ModifyRiskCenterScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRiskCenterScanTaskRequest&;
    using Resp = ModifyRiskCenterScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRiskCenterScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyRiskCenterScanTaskOutcomeCallable CsipClient::ModifyRiskCenterScanTaskCallable(const ModifyRiskCenterScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRiskCenterScanTaskOutcome>>();
    ModifyRiskCenterScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyRiskCenterScanTaskRequest&,
        ModifyRiskCenterScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyUebaRuleSwitchOutcome CsipClient::ModifyUebaRuleSwitch(const ModifyUebaRuleSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUebaRuleSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUebaRuleSwitchResponse rsp = ModifyUebaRuleSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUebaRuleSwitchOutcome(rsp);
        else
            return ModifyUebaRuleSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyUebaRuleSwitchOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyUebaRuleSwitchAsync(const ModifyUebaRuleSwitchRequest& request, const ModifyUebaRuleSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUebaRuleSwitchRequest&;
    using Resp = ModifyUebaRuleSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUebaRuleSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyUebaRuleSwitchOutcomeCallable CsipClient::ModifyUebaRuleSwitchCallable(const ModifyUebaRuleSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUebaRuleSwitchOutcome>>();
    ModifyUebaRuleSwitchAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyUebaRuleSwitchRequest&,
        ModifyUebaRuleSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::StopRiskCenterTaskOutcome CsipClient::StopRiskCenterTask(const StopRiskCenterTaskRequest &request)
{
    auto outcome = MakeRequest(request, "StopRiskCenterTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRiskCenterTaskResponse rsp = StopRiskCenterTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRiskCenterTaskOutcome(rsp);
        else
            return StopRiskCenterTaskOutcome(o.GetError());
    }
    else
    {
        return StopRiskCenterTaskOutcome(outcome.GetError());
    }
}

void CsipClient::StopRiskCenterTaskAsync(const StopRiskCenterTaskRequest& request, const StopRiskCenterTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopRiskCenterTaskRequest&;
    using Resp = StopRiskCenterTaskResponse;

    DoRequestAsync<Req, Resp>(
        "StopRiskCenterTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::StopRiskCenterTaskOutcomeCallable CsipClient::StopRiskCenterTaskCallable(const StopRiskCenterTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopRiskCenterTaskOutcome>>();
    StopRiskCenterTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const StopRiskCenterTaskRequest&,
        StopRiskCenterTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::UpdateAccessKeyAlarmStatusOutcome CsipClient::UpdateAccessKeyAlarmStatus(const UpdateAccessKeyAlarmStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAccessKeyAlarmStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAccessKeyAlarmStatusResponse rsp = UpdateAccessKeyAlarmStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAccessKeyAlarmStatusOutcome(rsp);
        else
            return UpdateAccessKeyAlarmStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateAccessKeyAlarmStatusOutcome(outcome.GetError());
    }
}

void CsipClient::UpdateAccessKeyAlarmStatusAsync(const UpdateAccessKeyAlarmStatusRequest& request, const UpdateAccessKeyAlarmStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAccessKeyAlarmStatusRequest&;
    using Resp = UpdateAccessKeyAlarmStatusResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAccessKeyAlarmStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::UpdateAccessKeyAlarmStatusOutcomeCallable CsipClient::UpdateAccessKeyAlarmStatusCallable(const UpdateAccessKeyAlarmStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAccessKeyAlarmStatusOutcome>>();
    UpdateAccessKeyAlarmStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const UpdateAccessKeyAlarmStatusRequest&,
        UpdateAccessKeyAlarmStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::UpdateAccessKeyRemarkOutcome CsipClient::UpdateAccessKeyRemark(const UpdateAccessKeyRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAccessKeyRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAccessKeyRemarkResponse rsp = UpdateAccessKeyRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAccessKeyRemarkOutcome(rsp);
        else
            return UpdateAccessKeyRemarkOutcome(o.GetError());
    }
    else
    {
        return UpdateAccessKeyRemarkOutcome(outcome.GetError());
    }
}

void CsipClient::UpdateAccessKeyRemarkAsync(const UpdateAccessKeyRemarkRequest& request, const UpdateAccessKeyRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAccessKeyRemarkRequest&;
    using Resp = UpdateAccessKeyRemarkResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAccessKeyRemark", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::UpdateAccessKeyRemarkOutcomeCallable CsipClient::UpdateAccessKeyRemarkCallable(const UpdateAccessKeyRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAccessKeyRemarkOutcome>>();
    UpdateAccessKeyRemarkAsync(
    request,
    [prom](
        const CsipClient*,
        const UpdateAccessKeyRemarkRequest&,
        UpdateAccessKeyRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::UpdateAlertStatusListOutcome CsipClient::UpdateAlertStatusList(const UpdateAlertStatusListRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAlertStatusList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAlertStatusListResponse rsp = UpdateAlertStatusListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAlertStatusListOutcome(rsp);
        else
            return UpdateAlertStatusListOutcome(o.GetError());
    }
    else
    {
        return UpdateAlertStatusListOutcome(outcome.GetError());
    }
}

void CsipClient::UpdateAlertStatusListAsync(const UpdateAlertStatusListRequest& request, const UpdateAlertStatusListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAlertStatusListRequest&;
    using Resp = UpdateAlertStatusListResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAlertStatusList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::UpdateAlertStatusListOutcomeCallable CsipClient::UpdateAlertStatusListCallable(const UpdateAlertStatusListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAlertStatusListOutcome>>();
    UpdateAlertStatusListAsync(
    request,
    [prom](
        const CsipClient*,
        const UpdateAlertStatusListRequest&,
        UpdateAlertStatusListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

