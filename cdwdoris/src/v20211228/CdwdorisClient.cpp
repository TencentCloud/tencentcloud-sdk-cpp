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

#include <tencentcloud/cdwdoris/v20211228/CdwdorisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdwdoris::V20211228;
using namespace TencentCloud::Cdwdoris::V20211228::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-12-28";
    const string ENDPOINT = "cdwdoris.tencentcloudapi.com";
}

CdwdorisClient::CdwdorisClient(const Credential &credential, const string &region) :
    CdwdorisClient(credential, region, ClientProfile())
{
}

CdwdorisClient::CdwdorisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdwdorisClient::ActionAlterUserOutcome CdwdorisClient::ActionAlterUser(const ActionAlterUserRequest &request)
{
    auto outcome = MakeRequest(request, "ActionAlterUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActionAlterUserResponse rsp = ActionAlterUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActionAlterUserOutcome(rsp);
        else
            return ActionAlterUserOutcome(o.GetError());
    }
    else
    {
        return ActionAlterUserOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ActionAlterUserAsync(const ActionAlterUserRequest& request, const ActionAlterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ActionAlterUserRequest&;
    using Resp = ActionAlterUserResponse;

    DoRequestAsync<Req, Resp>(
        "ActionAlterUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ActionAlterUserOutcomeCallable CdwdorisClient::ActionAlterUserCallable(const ActionAlterUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActionAlterUserOutcome>>();
    ActionAlterUserAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ActionAlterUserRequest&,
        ActionAlterUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::CancelBackupJobOutcome CdwdorisClient::CancelBackupJob(const CancelBackupJobRequest &request)
{
    auto outcome = MakeRequest(request, "CancelBackupJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelBackupJobResponse rsp = CancelBackupJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelBackupJobOutcome(rsp);
        else
            return CancelBackupJobOutcome(o.GetError());
    }
    else
    {
        return CancelBackupJobOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CancelBackupJobAsync(const CancelBackupJobRequest& request, const CancelBackupJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CancelBackupJobRequest&;
    using Resp = CancelBackupJobResponse;

    DoRequestAsync<Req, Resp>(
        "CancelBackupJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::CancelBackupJobOutcomeCallable CdwdorisClient::CancelBackupJobCallable(const CancelBackupJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CancelBackupJobOutcome>>();
    CancelBackupJobAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const CancelBackupJobRequest&,
        CancelBackupJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::CheckCoolDownWorkingVariableConfigCorrectOutcome CdwdorisClient::CheckCoolDownWorkingVariableConfigCorrect(const CheckCoolDownWorkingVariableConfigCorrectRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCoolDownWorkingVariableConfigCorrect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCoolDownWorkingVariableConfigCorrectResponse rsp = CheckCoolDownWorkingVariableConfigCorrectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCoolDownWorkingVariableConfigCorrectOutcome(rsp);
        else
            return CheckCoolDownWorkingVariableConfigCorrectOutcome(o.GetError());
    }
    else
    {
        return CheckCoolDownWorkingVariableConfigCorrectOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CheckCoolDownWorkingVariableConfigCorrectAsync(const CheckCoolDownWorkingVariableConfigCorrectRequest& request, const CheckCoolDownWorkingVariableConfigCorrectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckCoolDownWorkingVariableConfigCorrectRequest&;
    using Resp = CheckCoolDownWorkingVariableConfigCorrectResponse;

    DoRequestAsync<Req, Resp>(
        "CheckCoolDownWorkingVariableConfigCorrect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::CheckCoolDownWorkingVariableConfigCorrectOutcomeCallable CdwdorisClient::CheckCoolDownWorkingVariableConfigCorrectCallable(const CheckCoolDownWorkingVariableConfigCorrectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckCoolDownWorkingVariableConfigCorrectOutcome>>();
    CheckCoolDownWorkingVariableConfigCorrectAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const CheckCoolDownWorkingVariableConfigCorrectRequest&,
        CheckCoolDownWorkingVariableConfigCorrectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::CreateBackUpScheduleOutcome CdwdorisClient::CreateBackUpSchedule(const CreateBackUpScheduleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackUpSchedule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackUpScheduleResponse rsp = CreateBackUpScheduleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackUpScheduleOutcome(rsp);
        else
            return CreateBackUpScheduleOutcome(o.GetError());
    }
    else
    {
        return CreateBackUpScheduleOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateBackUpScheduleAsync(const CreateBackUpScheduleRequest& request, const CreateBackUpScheduleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackUpScheduleRequest&;
    using Resp = CreateBackUpScheduleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackUpSchedule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::CreateBackUpScheduleOutcomeCallable CdwdorisClient::CreateBackUpScheduleCallable(const CreateBackUpScheduleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackUpScheduleOutcome>>();
    CreateBackUpScheduleAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const CreateBackUpScheduleRequest&,
        CreateBackUpScheduleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::CreateCoolDownPolicyOutcome CdwdorisClient::CreateCoolDownPolicy(const CreateCoolDownPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCoolDownPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCoolDownPolicyResponse rsp = CreateCoolDownPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCoolDownPolicyOutcome(rsp);
        else
            return CreateCoolDownPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCoolDownPolicyOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateCoolDownPolicyAsync(const CreateCoolDownPolicyRequest& request, const CreateCoolDownPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCoolDownPolicyRequest&;
    using Resp = CreateCoolDownPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCoolDownPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::CreateCoolDownPolicyOutcomeCallable CdwdorisClient::CreateCoolDownPolicyCallable(const CreateCoolDownPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCoolDownPolicyOutcome>>();
    CreateCoolDownPolicyAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const CreateCoolDownPolicyRequest&,
        CreateCoolDownPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::CreateInstanceNewOutcome CdwdorisClient::CreateInstanceNew(const CreateInstanceNewRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstanceNew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceNewResponse rsp = CreateInstanceNewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceNewOutcome(rsp);
        else
            return CreateInstanceNewOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceNewOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateInstanceNewAsync(const CreateInstanceNewRequest& request, const CreateInstanceNewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstanceNewRequest&;
    using Resp = CreateInstanceNewResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstanceNew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::CreateInstanceNewOutcomeCallable CdwdorisClient::CreateInstanceNewCallable(const CreateInstanceNewRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceNewOutcome>>();
    CreateInstanceNewAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const CreateInstanceNewRequest&,
        CreateInstanceNewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::CreateWorkloadGroupOutcome CdwdorisClient::CreateWorkloadGroup(const CreateWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkloadGroupResponse rsp = CreateWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkloadGroupOutcome(rsp);
        else
            return CreateWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return CreateWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::CreateWorkloadGroupAsync(const CreateWorkloadGroupRequest& request, const CreateWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkloadGroupRequest&;
    using Resp = CreateWorkloadGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkloadGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::CreateWorkloadGroupOutcomeCallable CdwdorisClient::CreateWorkloadGroupCallable(const CreateWorkloadGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkloadGroupOutcome>>();
    CreateWorkloadGroupAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const CreateWorkloadGroupRequest&,
        CreateWorkloadGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DeleteBackUpDataOutcome CdwdorisClient::DeleteBackUpData(const DeleteBackUpDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackUpData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackUpDataResponse rsp = DeleteBackUpDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackUpDataOutcome(rsp);
        else
            return DeleteBackUpDataOutcome(o.GetError());
    }
    else
    {
        return DeleteBackUpDataOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DeleteBackUpDataAsync(const DeleteBackUpDataRequest& request, const DeleteBackUpDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackUpDataRequest&;
    using Resp = DeleteBackUpDataResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackUpData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DeleteBackUpDataOutcomeCallable CdwdorisClient::DeleteBackUpDataCallable(const DeleteBackUpDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackUpDataOutcome>>();
    DeleteBackUpDataAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DeleteBackUpDataRequest&,
        DeleteBackUpDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DeleteWorkloadGroupOutcome CdwdorisClient::DeleteWorkloadGroup(const DeleteWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkloadGroupResponse rsp = DeleteWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkloadGroupOutcome(rsp);
        else
            return DeleteWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DeleteWorkloadGroupAsync(const DeleteWorkloadGroupRequest& request, const DeleteWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkloadGroupRequest&;
    using Resp = DeleteWorkloadGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkloadGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DeleteWorkloadGroupOutcomeCallable CdwdorisClient::DeleteWorkloadGroupCallable(const DeleteWorkloadGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkloadGroupOutcome>>();
    DeleteWorkloadGroupAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DeleteWorkloadGroupRequest&,
        DeleteWorkloadGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeAreaRegionOutcome CdwdorisClient::DescribeAreaRegion(const DescribeAreaRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAreaRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAreaRegionResponse rsp = DescribeAreaRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAreaRegionOutcome(rsp);
        else
            return DescribeAreaRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeAreaRegionOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeAreaRegionAsync(const DescribeAreaRegionRequest& request, const DescribeAreaRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAreaRegionRequest&;
    using Resp = DescribeAreaRegionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAreaRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeAreaRegionOutcomeCallable CdwdorisClient::DescribeAreaRegionCallable(const DescribeAreaRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAreaRegionOutcome>>();
    DescribeAreaRegionAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeAreaRegionRequest&,
        DescribeAreaRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeBackUpJobOutcome CdwdorisClient::DescribeBackUpJob(const DescribeBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobResponse rsp = DescribeBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobOutcome(rsp);
        else
            return DescribeBackUpJobOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpJobAsync(const DescribeBackUpJobRequest& request, const DescribeBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpJobRequest&;
    using Resp = DescribeBackUpJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeBackUpJobOutcomeCallable CdwdorisClient::DescribeBackUpJobCallable(const DescribeBackUpJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpJobOutcome>>();
    DescribeBackUpJobAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeBackUpJobRequest&,
        DescribeBackUpJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeBackUpJobDetailOutcome CdwdorisClient::DescribeBackUpJobDetail(const DescribeBackUpJobDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpJobDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpJobDetailResponse rsp = DescribeBackUpJobDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpJobDetailOutcome(rsp);
        else
            return DescribeBackUpJobDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpJobDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpJobDetailAsync(const DescribeBackUpJobDetailRequest& request, const DescribeBackUpJobDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpJobDetailRequest&;
    using Resp = DescribeBackUpJobDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpJobDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeBackUpJobDetailOutcomeCallable CdwdorisClient::DescribeBackUpJobDetailCallable(const DescribeBackUpJobDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpJobDetailOutcome>>();
    DescribeBackUpJobDetailAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeBackUpJobDetailRequest&,
        DescribeBackUpJobDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeBackUpSchedulesOutcome CdwdorisClient::DescribeBackUpSchedules(const DescribeBackUpSchedulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpSchedules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpSchedulesResponse rsp = DescribeBackUpSchedulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpSchedulesOutcome(rsp);
        else
            return DescribeBackUpSchedulesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpSchedulesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpSchedulesAsync(const DescribeBackUpSchedulesRequest& request, const DescribeBackUpSchedulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpSchedulesRequest&;
    using Resp = DescribeBackUpSchedulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpSchedules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeBackUpSchedulesOutcomeCallable CdwdorisClient::DescribeBackUpSchedulesCallable(const DescribeBackUpSchedulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpSchedulesOutcome>>();
    DescribeBackUpSchedulesAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeBackUpSchedulesRequest&,
        DescribeBackUpSchedulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeBackUpTablesOutcome CdwdorisClient::DescribeBackUpTables(const DescribeBackUpTablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpTables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpTablesResponse rsp = DescribeBackUpTablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpTablesOutcome(rsp);
        else
            return DescribeBackUpTablesOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpTablesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpTablesAsync(const DescribeBackUpTablesRequest& request, const DescribeBackUpTablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpTablesRequest&;
    using Resp = DescribeBackUpTablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpTables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeBackUpTablesOutcomeCallable CdwdorisClient::DescribeBackUpTablesCallable(const DescribeBackUpTablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpTablesOutcome>>();
    DescribeBackUpTablesAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeBackUpTablesRequest&,
        DescribeBackUpTablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeBackUpTaskDetailOutcome CdwdorisClient::DescribeBackUpTaskDetail(const DescribeBackUpTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackUpTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackUpTaskDetailResponse rsp = DescribeBackUpTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackUpTaskDetailOutcome(rsp);
        else
            return DescribeBackUpTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackUpTaskDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeBackUpTaskDetailAsync(const DescribeBackUpTaskDetailRequest& request, const DescribeBackUpTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackUpTaskDetailRequest&;
    using Resp = DescribeBackUpTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackUpTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeBackUpTaskDetailOutcomeCallable CdwdorisClient::DescribeBackUpTaskDetailCallable(const DescribeBackUpTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackUpTaskDetailOutcome>>();
    DescribeBackUpTaskDetailAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeBackUpTaskDetailRequest&,
        DescribeBackUpTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeClusterConfigsOutcome CdwdorisClient::DescribeClusterConfigs(const DescribeClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsResponse rsp = DescribeClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsOutcome(rsp);
        else
            return DescribeClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeClusterConfigsAsync(const DescribeClusterConfigsRequest& request, const DescribeClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterConfigsRequest&;
    using Resp = DescribeClusterConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeClusterConfigsOutcomeCallable CdwdorisClient::DescribeClusterConfigsCallable(const DescribeClusterConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterConfigsOutcome>>();
    DescribeClusterConfigsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeClusterConfigsRequest&,
        DescribeClusterConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeClusterConfigsHistoryOutcome CdwdorisClient::DescribeClusterConfigsHistory(const DescribeClusterConfigsHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterConfigsHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterConfigsHistoryResponse rsp = DescribeClusterConfigsHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterConfigsHistoryOutcome(rsp);
        else
            return DescribeClusterConfigsHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterConfigsHistoryOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeClusterConfigsHistoryAsync(const DescribeClusterConfigsHistoryRequest& request, const DescribeClusterConfigsHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterConfigsHistoryRequest&;
    using Resp = DescribeClusterConfigsHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterConfigsHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeClusterConfigsHistoryOutcomeCallable CdwdorisClient::DescribeClusterConfigsHistoryCallable(const DescribeClusterConfigsHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterConfigsHistoryOutcome>>();
    DescribeClusterConfigsHistoryAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeClusterConfigsHistoryRequest&,
        DescribeClusterConfigsHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeCoolDownBackendsOutcome CdwdorisClient::DescribeCoolDownBackends(const DescribeCoolDownBackendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCoolDownBackends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCoolDownBackendsResponse rsp = DescribeCoolDownBackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCoolDownBackendsOutcome(rsp);
        else
            return DescribeCoolDownBackendsOutcome(o.GetError());
    }
    else
    {
        return DescribeCoolDownBackendsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeCoolDownBackendsAsync(const DescribeCoolDownBackendsRequest& request, const DescribeCoolDownBackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCoolDownBackendsRequest&;
    using Resp = DescribeCoolDownBackendsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCoolDownBackends", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeCoolDownBackendsOutcomeCallable CdwdorisClient::DescribeCoolDownBackendsCallable(const DescribeCoolDownBackendsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCoolDownBackendsOutcome>>();
    DescribeCoolDownBackendsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeCoolDownBackendsRequest&,
        DescribeCoolDownBackendsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeCoolDownPoliciesOutcome CdwdorisClient::DescribeCoolDownPolicies(const DescribeCoolDownPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCoolDownPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCoolDownPoliciesResponse rsp = DescribeCoolDownPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCoolDownPoliciesOutcome(rsp);
        else
            return DescribeCoolDownPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeCoolDownPoliciesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeCoolDownPoliciesAsync(const DescribeCoolDownPoliciesRequest& request, const DescribeCoolDownPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCoolDownPoliciesRequest&;
    using Resp = DescribeCoolDownPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCoolDownPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeCoolDownPoliciesOutcomeCallable CdwdorisClient::DescribeCoolDownPoliciesCallable(const DescribeCoolDownPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCoolDownPoliciesOutcome>>();
    DescribeCoolDownPoliciesAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeCoolDownPoliciesRequest&,
        DescribeCoolDownPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeCoolDownTableDataOutcome CdwdorisClient::DescribeCoolDownTableData(const DescribeCoolDownTableDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCoolDownTableData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCoolDownTableDataResponse rsp = DescribeCoolDownTableDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCoolDownTableDataOutcome(rsp);
        else
            return DescribeCoolDownTableDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCoolDownTableDataOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeCoolDownTableDataAsync(const DescribeCoolDownTableDataRequest& request, const DescribeCoolDownTableDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCoolDownTableDataRequest&;
    using Resp = DescribeCoolDownTableDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCoolDownTableData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeCoolDownTableDataOutcomeCallable CdwdorisClient::DescribeCoolDownTableDataCallable(const DescribeCoolDownTableDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCoolDownTableDataOutcome>>();
    DescribeCoolDownTableDataAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeCoolDownTableDataRequest&,
        DescribeCoolDownTableDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeDatabaseAuditDownloadOutcome CdwdorisClient::DescribeDatabaseAuditDownload(const DescribeDatabaseAuditDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseAuditDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseAuditDownloadResponse rsp = DescribeDatabaseAuditDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseAuditDownloadOutcome(rsp);
        else
            return DescribeDatabaseAuditDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseAuditDownloadOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAuditDownloadAsync(const DescribeDatabaseAuditDownloadRequest& request, const DescribeDatabaseAuditDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseAuditDownloadRequest&;
    using Resp = DescribeDatabaseAuditDownloadResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseAuditDownload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeDatabaseAuditDownloadOutcomeCallable CdwdorisClient::DescribeDatabaseAuditDownloadCallable(const DescribeDatabaseAuditDownloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseAuditDownloadOutcome>>();
    DescribeDatabaseAuditDownloadAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeDatabaseAuditDownloadRequest&,
        DescribeDatabaseAuditDownloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeDatabaseAuditRecordsOutcome CdwdorisClient::DescribeDatabaseAuditRecords(const DescribeDatabaseAuditRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatabaseAuditRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatabaseAuditRecordsResponse rsp = DescribeDatabaseAuditRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatabaseAuditRecordsOutcome(rsp);
        else
            return DescribeDatabaseAuditRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatabaseAuditRecordsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeDatabaseAuditRecordsAsync(const DescribeDatabaseAuditRecordsRequest& request, const DescribeDatabaseAuditRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatabaseAuditRecordsRequest&;
    using Resp = DescribeDatabaseAuditRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatabaseAuditRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeDatabaseAuditRecordsOutcomeCallable CdwdorisClient::DescribeDatabaseAuditRecordsCallable(const DescribeDatabaseAuditRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatabaseAuditRecordsOutcome>>();
    DescribeDatabaseAuditRecordsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeDatabaseAuditRecordsRequest&,
        DescribeDatabaseAuditRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceOutcome CdwdorisClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceRequest&;
    using Resp = DescribeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceOutcomeCallable CdwdorisClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceNodesOutcome CdwdorisClient::DescribeInstanceNodes(const DescribeInstanceNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesResponse rsp = DescribeInstanceNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesOutcome(rsp);
        else
            return DescribeInstanceNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesAsync(const DescribeInstanceNodesRequest& request, const DescribeInstanceNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodesRequest&;
    using Resp = DescribeInstanceNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceNodesOutcomeCallable CdwdorisClient::DescribeInstanceNodesCallable(const DescribeInstanceNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodesOutcome>>();
    DescribeInstanceNodesAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceNodesRequest&,
        DescribeInstanceNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceNodesInfoOutcome CdwdorisClient::DescribeInstanceNodesInfo(const DescribeInstanceNodesInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodesInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesInfoResponse rsp = DescribeInstanceNodesInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesInfoOutcome(rsp);
        else
            return DescribeInstanceNodesInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesInfoOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesInfoAsync(const DescribeInstanceNodesInfoRequest& request, const DescribeInstanceNodesInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodesInfoRequest&;
    using Resp = DescribeInstanceNodesInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodesInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceNodesInfoOutcomeCallable CdwdorisClient::DescribeInstanceNodesInfoCallable(const DescribeInstanceNodesInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodesInfoOutcome>>();
    DescribeInstanceNodesInfoAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceNodesInfoRequest&,
        DescribeInstanceNodesInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceNodesRoleOutcome CdwdorisClient::DescribeInstanceNodesRole(const DescribeInstanceNodesRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceNodesRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceNodesRoleResponse rsp = DescribeInstanceNodesRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceNodesRoleOutcome(rsp);
        else
            return DescribeInstanceNodesRoleOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceNodesRoleOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceNodesRoleAsync(const DescribeInstanceNodesRoleRequest& request, const DescribeInstanceNodesRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceNodesRoleRequest&;
    using Resp = DescribeInstanceNodesRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceNodesRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceNodesRoleOutcomeCallable CdwdorisClient::DescribeInstanceNodesRoleCallable(const DescribeInstanceNodesRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceNodesRoleOutcome>>();
    DescribeInstanceNodesRoleAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceNodesRoleRequest&,
        DescribeInstanceNodesRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceOperationsOutcome CdwdorisClient::DescribeInstanceOperations(const DescribeInstanceOperationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceOperations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceOperationsResponse rsp = DescribeInstanceOperationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOperationsOutcome(rsp);
        else
            return DescribeInstanceOperationsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOperationsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceOperationsAsync(const DescribeInstanceOperationsRequest& request, const DescribeInstanceOperationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceOperationsRequest&;
    using Resp = DescribeInstanceOperationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceOperations", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceOperationsOutcomeCallable CdwdorisClient::DescribeInstanceOperationsCallable(const DescribeInstanceOperationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOperationsOutcome>>();
    DescribeInstanceOperationsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceOperationsRequest&,
        DescribeInstanceOperationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceStateOutcome CdwdorisClient::DescribeInstanceState(const DescribeInstanceStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceStateResponse rsp = DescribeInstanceStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceStateOutcome(rsp);
        else
            return DescribeInstanceStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceStateOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceStateAsync(const DescribeInstanceStateRequest& request, const DescribeInstanceStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceStateRequest&;
    using Resp = DescribeInstanceStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceStateOutcomeCallable CdwdorisClient::DescribeInstanceStateCallable(const DescribeInstanceStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceStateOutcome>>();
    DescribeInstanceStateAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceStateRequest&,
        DescribeInstanceStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstanceUsedSubnetsOutcome CdwdorisClient::DescribeInstanceUsedSubnets(const DescribeInstanceUsedSubnetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceUsedSubnets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceUsedSubnetsResponse rsp = DescribeInstanceUsedSubnetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceUsedSubnetsOutcome(rsp);
        else
            return DescribeInstanceUsedSubnetsOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceUsedSubnetsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstanceUsedSubnetsAsync(const DescribeInstanceUsedSubnetsRequest& request, const DescribeInstanceUsedSubnetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceUsedSubnetsRequest&;
    using Resp = DescribeInstanceUsedSubnetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceUsedSubnets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstanceUsedSubnetsOutcomeCallable CdwdorisClient::DescribeInstanceUsedSubnetsCallable(const DescribeInstanceUsedSubnetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceUsedSubnetsOutcome>>();
    DescribeInstanceUsedSubnetsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstanceUsedSubnetsRequest&,
        DescribeInstanceUsedSubnetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstancesOutcome CdwdorisClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstancesOutcomeCallable CdwdorisClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeInstancesHealthStateOutcome CdwdorisClient::DescribeInstancesHealthState(const DescribeInstancesHealthStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesHealthState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesHealthStateResponse rsp = DescribeInstancesHealthStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesHealthStateOutcome(rsp);
        else
            return DescribeInstancesHealthStateOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesHealthStateOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeInstancesHealthStateAsync(const DescribeInstancesHealthStateRequest& request, const DescribeInstancesHealthStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesHealthStateRequest&;
    using Resp = DescribeInstancesHealthStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesHealthState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeInstancesHealthStateOutcomeCallable CdwdorisClient::DescribeInstancesHealthStateCallable(const DescribeInstancesHealthStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesHealthStateOutcome>>();
    DescribeInstancesHealthStateAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeInstancesHealthStateRequest&,
        DescribeInstancesHealthStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeRestoreTaskDetailOutcome CdwdorisClient::DescribeRestoreTaskDetail(const DescribeRestoreTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTaskDetailResponse rsp = DescribeRestoreTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTaskDetailOutcome(rsp);
        else
            return DescribeRestoreTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTaskDetailOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeRestoreTaskDetailAsync(const DescribeRestoreTaskDetailRequest& request, const DescribeRestoreTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRestoreTaskDetailRequest&;
    using Resp = DescribeRestoreTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRestoreTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeRestoreTaskDetailOutcomeCallable CdwdorisClient::DescribeRestoreTaskDetailCallable(const DescribeRestoreTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRestoreTaskDetailOutcome>>();
    DescribeRestoreTaskDetailAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeRestoreTaskDetailRequest&,
        DescribeRestoreTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeSlowQueryRecordsOutcome CdwdorisClient::DescribeSlowQueryRecords(const DescribeSlowQueryRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryRecordsResponse rsp = DescribeSlowQueryRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryRecordsOutcome(rsp);
        else
            return DescribeSlowQueryRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryRecordsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSlowQueryRecordsAsync(const DescribeSlowQueryRecordsRequest& request, const DescribeSlowQueryRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowQueryRecordsRequest&;
    using Resp = DescribeSlowQueryRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowQueryRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeSlowQueryRecordsOutcomeCallable CdwdorisClient::DescribeSlowQueryRecordsCallable(const DescribeSlowQueryRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowQueryRecordsOutcome>>();
    DescribeSlowQueryRecordsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeSlowQueryRecordsRequest&,
        DescribeSlowQueryRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeSlowQueryRecordsDownloadOutcome CdwdorisClient::DescribeSlowQueryRecordsDownload(const DescribeSlowQueryRecordsDownloadRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSlowQueryRecordsDownload");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSlowQueryRecordsDownloadResponse rsp = DescribeSlowQueryRecordsDownloadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSlowQueryRecordsDownloadOutcome(rsp);
        else
            return DescribeSlowQueryRecordsDownloadOutcome(o.GetError());
    }
    else
    {
        return DescribeSlowQueryRecordsDownloadOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSlowQueryRecordsDownloadAsync(const DescribeSlowQueryRecordsDownloadRequest& request, const DescribeSlowQueryRecordsDownloadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSlowQueryRecordsDownloadRequest&;
    using Resp = DescribeSlowQueryRecordsDownloadResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSlowQueryRecordsDownload", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeSlowQueryRecordsDownloadOutcomeCallable CdwdorisClient::DescribeSlowQueryRecordsDownloadCallable(const DescribeSlowQueryRecordsDownloadRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSlowQueryRecordsDownloadOutcome>>();
    DescribeSlowQueryRecordsDownloadAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeSlowQueryRecordsDownloadRequest&,
        DescribeSlowQueryRecordsDownloadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeSpecOutcome CdwdorisClient::DescribeSpec(const DescribeSpecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSpec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSpecResponse rsp = DescribeSpecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSpecOutcome(rsp);
        else
            return DescribeSpecOutcome(o.GetError());
    }
    else
    {
        return DescribeSpecOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSpecAsync(const DescribeSpecRequest& request, const DescribeSpecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSpecRequest&;
    using Resp = DescribeSpecResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSpec", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeSpecOutcomeCallable CdwdorisClient::DescribeSpecCallable(const DescribeSpecRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSpecOutcome>>();
    DescribeSpecAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeSpecRequest&,
        DescribeSpecOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeSqlApisOutcome CdwdorisClient::DescribeSqlApis(const DescribeSqlApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSqlApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSqlApisResponse rsp = DescribeSqlApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSqlApisOutcome(rsp);
        else
            return DescribeSqlApisOutcome(o.GetError());
    }
    else
    {
        return DescribeSqlApisOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeSqlApisAsync(const DescribeSqlApisRequest& request, const DescribeSqlApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSqlApisRequest&;
    using Resp = DescribeSqlApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSqlApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeSqlApisOutcomeCallable CdwdorisClient::DescribeSqlApisCallable(const DescribeSqlApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSqlApisOutcome>>();
    DescribeSqlApisAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeSqlApisRequest&,
        DescribeSqlApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeTableListOutcome CdwdorisClient::DescribeTableList(const DescribeTableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTableListResponse rsp = DescribeTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTableListOutcome(rsp);
        else
            return DescribeTableListOutcome(o.GetError());
    }
    else
    {
        return DescribeTableListOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeTableListAsync(const DescribeTableListRequest& request, const DescribeTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTableListRequest&;
    using Resp = DescribeTableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeTableListOutcomeCallable CdwdorisClient::DescribeTableListCallable(const DescribeTableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTableListOutcome>>();
    DescribeTableListAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeTableListRequest&,
        DescribeTableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeUserBindWorkloadGroupOutcome CdwdorisClient::DescribeUserBindWorkloadGroup(const DescribeUserBindWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserBindWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserBindWorkloadGroupResponse rsp = DescribeUserBindWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserBindWorkloadGroupOutcome(rsp);
        else
            return DescribeUserBindWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeUserBindWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeUserBindWorkloadGroupAsync(const DescribeUserBindWorkloadGroupRequest& request, const DescribeUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserBindWorkloadGroupRequest&;
    using Resp = DescribeUserBindWorkloadGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserBindWorkloadGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeUserBindWorkloadGroupOutcomeCallable CdwdorisClient::DescribeUserBindWorkloadGroupCallable(const DescribeUserBindWorkloadGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserBindWorkloadGroupOutcome>>();
    DescribeUserBindWorkloadGroupAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeUserBindWorkloadGroupRequest&,
        DescribeUserBindWorkloadGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DescribeWorkloadGroupOutcome CdwdorisClient::DescribeWorkloadGroup(const DescribeWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkloadGroupResponse rsp = DescribeWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkloadGroupOutcome(rsp);
        else
            return DescribeWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DescribeWorkloadGroupAsync(const DescribeWorkloadGroupRequest& request, const DescribeWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkloadGroupRequest&;
    using Resp = DescribeWorkloadGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkloadGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DescribeWorkloadGroupOutcomeCallable CdwdorisClient::DescribeWorkloadGroupCallable(const DescribeWorkloadGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkloadGroupOutcome>>();
    DescribeWorkloadGroupAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DescribeWorkloadGroupRequest&,
        DescribeWorkloadGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::DestroyInstanceOutcome CdwdorisClient::DestroyInstance(const DestroyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyInstanceResponse rsp = DestroyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyInstanceOutcome(rsp);
        else
            return DestroyInstanceOutcome(o.GetError());
    }
    else
    {
        return DestroyInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::DestroyInstanceAsync(const DestroyInstanceRequest& request, const DestroyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyInstanceRequest&;
    using Resp = DestroyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::DestroyInstanceOutcomeCallable CdwdorisClient::DestroyInstanceCallable(const DestroyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyInstanceOutcome>>();
    DestroyInstanceAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const DestroyInstanceRequest&,
        DestroyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyClusterConfigsOutcome CdwdorisClient::ModifyClusterConfigs(const ModifyClusterConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterConfigsResponse rsp = ModifyClusterConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterConfigsOutcome(rsp);
        else
            return ModifyClusterConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyClusterConfigsAsync(const ModifyClusterConfigsRequest& request, const ModifyClusterConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterConfigsRequest&;
    using Resp = ModifyClusterConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyClusterConfigsOutcomeCallable CdwdorisClient::ModifyClusterConfigsCallable(const ModifyClusterConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterConfigsOutcome>>();
    ModifyClusterConfigsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyClusterConfigsRequest&,
        ModifyClusterConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyCoolDownPolicyOutcome CdwdorisClient::ModifyCoolDownPolicy(const ModifyCoolDownPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCoolDownPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCoolDownPolicyResponse rsp = ModifyCoolDownPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCoolDownPolicyOutcome(rsp);
        else
            return ModifyCoolDownPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyCoolDownPolicyOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyCoolDownPolicyAsync(const ModifyCoolDownPolicyRequest& request, const ModifyCoolDownPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCoolDownPolicyRequest&;
    using Resp = ModifyCoolDownPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCoolDownPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyCoolDownPolicyOutcomeCallable CdwdorisClient::ModifyCoolDownPolicyCallable(const ModifyCoolDownPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCoolDownPolicyOutcome>>();
    ModifyCoolDownPolicyAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyCoolDownPolicyRequest&,
        ModifyCoolDownPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyInstanceOutcome CdwdorisClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyInstanceOutcomeCallable CdwdorisClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyInstanceKeyValConfigsOutcome CdwdorisClient::ModifyInstanceKeyValConfigs(const ModifyInstanceKeyValConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceKeyValConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceKeyValConfigsResponse rsp = ModifyInstanceKeyValConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceKeyValConfigsOutcome(rsp);
        else
            return ModifyInstanceKeyValConfigsOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceKeyValConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyInstanceKeyValConfigsAsync(const ModifyInstanceKeyValConfigsRequest& request, const ModifyInstanceKeyValConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceKeyValConfigsRequest&;
    using Resp = ModifyInstanceKeyValConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceKeyValConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyInstanceKeyValConfigsOutcomeCallable CdwdorisClient::ModifyInstanceKeyValConfigsCallable(const ModifyInstanceKeyValConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceKeyValConfigsOutcome>>();
    ModifyInstanceKeyValConfigsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyInstanceKeyValConfigsRequest&,
        ModifyInstanceKeyValConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyNodeStatusOutcome CdwdorisClient::ModifyNodeStatus(const ModifyNodeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodeStatusResponse rsp = ModifyNodeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodeStatusOutcome(rsp);
        else
            return ModifyNodeStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyNodeStatusOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyNodeStatusAsync(const ModifyNodeStatusRequest& request, const ModifyNodeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNodeStatusRequest&;
    using Resp = ModifyNodeStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNodeStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyNodeStatusOutcomeCallable CdwdorisClient::ModifyNodeStatusCallable(const ModifyNodeStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNodeStatusOutcome>>();
    ModifyNodeStatusAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyNodeStatusRequest&,
        ModifyNodeStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifySecurityGroupsOutcome CdwdorisClient::ModifySecurityGroups(const ModifySecurityGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySecurityGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySecurityGroupsResponse rsp = ModifySecurityGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySecurityGroupsOutcome(rsp);
        else
            return ModifySecurityGroupsOutcome(o.GetError());
    }
    else
    {
        return ModifySecurityGroupsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifySecurityGroupsAsync(const ModifySecurityGroupsRequest& request, const ModifySecurityGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySecurityGroupsRequest&;
    using Resp = ModifySecurityGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySecurityGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifySecurityGroupsOutcomeCallable CdwdorisClient::ModifySecurityGroupsCallable(const ModifySecurityGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySecurityGroupsOutcome>>();
    ModifySecurityGroupsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifySecurityGroupsRequest&,
        ModifySecurityGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyUserBindWorkloadGroupOutcome CdwdorisClient::ModifyUserBindWorkloadGroup(const ModifyUserBindWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserBindWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserBindWorkloadGroupResponse rsp = ModifyUserBindWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserBindWorkloadGroupOutcome(rsp);
        else
            return ModifyUserBindWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyUserBindWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyUserBindWorkloadGroupAsync(const ModifyUserBindWorkloadGroupRequest& request, const ModifyUserBindWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserBindWorkloadGroupRequest&;
    using Resp = ModifyUserBindWorkloadGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserBindWorkloadGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyUserBindWorkloadGroupOutcomeCallable CdwdorisClient::ModifyUserBindWorkloadGroupCallable(const ModifyUserBindWorkloadGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserBindWorkloadGroupOutcome>>();
    ModifyUserBindWorkloadGroupAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyUserBindWorkloadGroupRequest&,
        ModifyUserBindWorkloadGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyUserPrivilegesV3Outcome CdwdorisClient::ModifyUserPrivilegesV3(const ModifyUserPrivilegesV3Request &request)
{
    auto outcome = MakeRequest(request, "ModifyUserPrivilegesV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserPrivilegesV3Response rsp = ModifyUserPrivilegesV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserPrivilegesV3Outcome(rsp);
        else
            return ModifyUserPrivilegesV3Outcome(o.GetError());
    }
    else
    {
        return ModifyUserPrivilegesV3Outcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyUserPrivilegesV3Async(const ModifyUserPrivilegesV3Request& request, const ModifyUserPrivilegesV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserPrivilegesV3Request&;
    using Resp = ModifyUserPrivilegesV3Response;

    DoRequestAsync<Req, Resp>(
        "ModifyUserPrivilegesV3", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyUserPrivilegesV3OutcomeCallable CdwdorisClient::ModifyUserPrivilegesV3Callable(const ModifyUserPrivilegesV3Request &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserPrivilegesV3Outcome>>();
    ModifyUserPrivilegesV3Async(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyUserPrivilegesV3Request&,
        ModifyUserPrivilegesV3Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyWorkloadGroupOutcome CdwdorisClient::ModifyWorkloadGroup(const ModifyWorkloadGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkloadGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkloadGroupResponse rsp = ModifyWorkloadGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkloadGroupOutcome(rsp);
        else
            return ModifyWorkloadGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkloadGroupOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyWorkloadGroupAsync(const ModifyWorkloadGroupRequest& request, const ModifyWorkloadGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkloadGroupRequest&;
    using Resp = ModifyWorkloadGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkloadGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyWorkloadGroupOutcomeCallable CdwdorisClient::ModifyWorkloadGroupCallable(const ModifyWorkloadGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkloadGroupOutcome>>();
    ModifyWorkloadGroupAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyWorkloadGroupRequest&,
        ModifyWorkloadGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ModifyWorkloadGroupStatusOutcome CdwdorisClient::ModifyWorkloadGroupStatus(const ModifyWorkloadGroupStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkloadGroupStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkloadGroupStatusResponse rsp = ModifyWorkloadGroupStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkloadGroupStatusOutcome(rsp);
        else
            return ModifyWorkloadGroupStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkloadGroupStatusOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ModifyWorkloadGroupStatusAsync(const ModifyWorkloadGroupStatusRequest& request, const ModifyWorkloadGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkloadGroupStatusRequest&;
    using Resp = ModifyWorkloadGroupStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkloadGroupStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ModifyWorkloadGroupStatusOutcomeCallable CdwdorisClient::ModifyWorkloadGroupStatusCallable(const ModifyWorkloadGroupStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkloadGroupStatusOutcome>>();
    ModifyWorkloadGroupStatusAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ModifyWorkloadGroupStatusRequest&,
        ModifyWorkloadGroupStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::OpenCoolDownOutcome CdwdorisClient::OpenCoolDown(const OpenCoolDownRequest &request)
{
    auto outcome = MakeRequest(request, "OpenCoolDown");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenCoolDownResponse rsp = OpenCoolDownResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenCoolDownOutcome(rsp);
        else
            return OpenCoolDownOutcome(o.GetError());
    }
    else
    {
        return OpenCoolDownOutcome(outcome.GetError());
    }
}

void CdwdorisClient::OpenCoolDownAsync(const OpenCoolDownRequest& request, const OpenCoolDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenCoolDownRequest&;
    using Resp = OpenCoolDownResponse;

    DoRequestAsync<Req, Resp>(
        "OpenCoolDown", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::OpenCoolDownOutcomeCallable CdwdorisClient::OpenCoolDownCallable(const OpenCoolDownRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenCoolDownOutcome>>();
    OpenCoolDownAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const OpenCoolDownRequest&,
        OpenCoolDownOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::OpenCoolDownPolicyOutcome CdwdorisClient::OpenCoolDownPolicy(const OpenCoolDownPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "OpenCoolDownPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OpenCoolDownPolicyResponse rsp = OpenCoolDownPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OpenCoolDownPolicyOutcome(rsp);
        else
            return OpenCoolDownPolicyOutcome(o.GetError());
    }
    else
    {
        return OpenCoolDownPolicyOutcome(outcome.GetError());
    }
}

void CdwdorisClient::OpenCoolDownPolicyAsync(const OpenCoolDownPolicyRequest& request, const OpenCoolDownPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OpenCoolDownPolicyRequest&;
    using Resp = OpenCoolDownPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "OpenCoolDownPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::OpenCoolDownPolicyOutcomeCallable CdwdorisClient::OpenCoolDownPolicyCallable(const OpenCoolDownPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<OpenCoolDownPolicyOutcome>>();
    OpenCoolDownPolicyAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const OpenCoolDownPolicyRequest&,
        OpenCoolDownPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::RecoverBackUpJobOutcome CdwdorisClient::RecoverBackUpJob(const RecoverBackUpJobRequest &request)
{
    auto outcome = MakeRequest(request, "RecoverBackUpJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecoverBackUpJobResponse rsp = RecoverBackUpJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecoverBackUpJobOutcome(rsp);
        else
            return RecoverBackUpJobOutcome(o.GetError());
    }
    else
    {
        return RecoverBackUpJobOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RecoverBackUpJobAsync(const RecoverBackUpJobRequest& request, const RecoverBackUpJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RecoverBackUpJobRequest&;
    using Resp = RecoverBackUpJobResponse;

    DoRequestAsync<Req, Resp>(
        "RecoverBackUpJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::RecoverBackUpJobOutcomeCallable CdwdorisClient::RecoverBackUpJobCallable(const RecoverBackUpJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<RecoverBackUpJobOutcome>>();
    RecoverBackUpJobAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const RecoverBackUpJobRequest&,
        RecoverBackUpJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ReduceInstanceOutcome CdwdorisClient::ReduceInstance(const ReduceInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ReduceInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReduceInstanceResponse rsp = ReduceInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReduceInstanceOutcome(rsp);
        else
            return ReduceInstanceOutcome(o.GetError());
    }
    else
    {
        return ReduceInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ReduceInstanceAsync(const ReduceInstanceRequest& request, const ReduceInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReduceInstanceRequest&;
    using Resp = ReduceInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ReduceInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ReduceInstanceOutcomeCallable CdwdorisClient::ReduceInstanceCallable(const ReduceInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReduceInstanceOutcome>>();
    ReduceInstanceAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ReduceInstanceRequest&,
        ReduceInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ResizeDiskOutcome CdwdorisClient::ResizeDisk(const ResizeDiskRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeDisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeDiskResponse rsp = ResizeDiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeDiskOutcome(rsp);
        else
            return ResizeDiskOutcome(o.GetError());
    }
    else
    {
        return ResizeDiskOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ResizeDiskAsync(const ResizeDiskRequest& request, const ResizeDiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeDiskRequest&;
    using Resp = ResizeDiskResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeDisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ResizeDiskOutcomeCallable CdwdorisClient::ResizeDiskCallable(const ResizeDiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeDiskOutcome>>();
    ResizeDiskAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ResizeDiskRequest&,
        ResizeDiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::RestartClusterForConfigsOutcome CdwdorisClient::RestartClusterForConfigs(const RestartClusterForConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterForConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterForConfigsResponse rsp = RestartClusterForConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterForConfigsOutcome(rsp);
        else
            return RestartClusterForConfigsOutcome(o.GetError());
    }
    else
    {
        return RestartClusterForConfigsOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RestartClusterForConfigsAsync(const RestartClusterForConfigsRequest& request, const RestartClusterForConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartClusterForConfigsRequest&;
    using Resp = RestartClusterForConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "RestartClusterForConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::RestartClusterForConfigsOutcomeCallable CdwdorisClient::RestartClusterForConfigsCallable(const RestartClusterForConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartClusterForConfigsOutcome>>();
    RestartClusterForConfigsAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const RestartClusterForConfigsRequest&,
        RestartClusterForConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::RestartClusterForNodeOutcome CdwdorisClient::RestartClusterForNode(const RestartClusterForNodeRequest &request)
{
    auto outcome = MakeRequest(request, "RestartClusterForNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartClusterForNodeResponse rsp = RestartClusterForNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartClusterForNodeOutcome(rsp);
        else
            return RestartClusterForNodeOutcome(o.GetError());
    }
    else
    {
        return RestartClusterForNodeOutcome(outcome.GetError());
    }
}

void CdwdorisClient::RestartClusterForNodeAsync(const RestartClusterForNodeRequest& request, const RestartClusterForNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartClusterForNodeRequest&;
    using Resp = RestartClusterForNodeResponse;

    DoRequestAsync<Req, Resp>(
        "RestartClusterForNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::RestartClusterForNodeOutcomeCallable CdwdorisClient::RestartClusterForNodeCallable(const RestartClusterForNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartClusterForNodeOutcome>>();
    RestartClusterForNodeAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const RestartClusterForNodeRequest&,
        RestartClusterForNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ScaleOutInstanceOutcome CdwdorisClient::ScaleOutInstance(const ScaleOutInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleOutInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleOutInstanceResponse rsp = ScaleOutInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleOutInstanceOutcome(rsp);
        else
            return ScaleOutInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleOutInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ScaleOutInstanceAsync(const ScaleOutInstanceRequest& request, const ScaleOutInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleOutInstanceRequest&;
    using Resp = ScaleOutInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleOutInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ScaleOutInstanceOutcomeCallable CdwdorisClient::ScaleOutInstanceCallable(const ScaleOutInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleOutInstanceOutcome>>();
    ScaleOutInstanceAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ScaleOutInstanceRequest&,
        ScaleOutInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::ScaleUpInstanceOutcome CdwdorisClient::ScaleUpInstance(const ScaleUpInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ScaleUpInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScaleUpInstanceResponse rsp = ScaleUpInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScaleUpInstanceOutcome(rsp);
        else
            return ScaleUpInstanceOutcome(o.GetError());
    }
    else
    {
        return ScaleUpInstanceOutcome(outcome.GetError());
    }
}

void CdwdorisClient::ScaleUpInstanceAsync(const ScaleUpInstanceRequest& request, const ScaleUpInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ScaleUpInstanceRequest&;
    using Resp = ScaleUpInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ScaleUpInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::ScaleUpInstanceOutcomeCallable CdwdorisClient::ScaleUpInstanceCallable(const ScaleUpInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ScaleUpInstanceOutcome>>();
    ScaleUpInstanceAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const ScaleUpInstanceRequest&,
        ScaleUpInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CdwdorisClient::UpdateCoolDownOutcome CdwdorisClient::UpdateCoolDown(const UpdateCoolDownRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateCoolDown");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateCoolDownResponse rsp = UpdateCoolDownResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateCoolDownOutcome(rsp);
        else
            return UpdateCoolDownOutcome(o.GetError());
    }
    else
    {
        return UpdateCoolDownOutcome(outcome.GetError());
    }
}

void CdwdorisClient::UpdateCoolDownAsync(const UpdateCoolDownRequest& request, const UpdateCoolDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateCoolDownRequest&;
    using Resp = UpdateCoolDownResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateCoolDown", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CdwdorisClient::UpdateCoolDownOutcomeCallable CdwdorisClient::UpdateCoolDownCallable(const UpdateCoolDownRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateCoolDownOutcome>>();
    UpdateCoolDownAsync(
    request,
    [prom](
        const CdwdorisClient*,
        const UpdateCoolDownRequest&,
        UpdateCoolDownOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

