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

#include <tencentcloud/dbs/v20211108/DbsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dbs::V20211108;
using namespace TencentCloud::Dbs::V20211108::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-11-08";
    const string ENDPOINT = "dbs.tencentcloudapi.com";
}

DbsClient::DbsClient(const Credential &credential, const string &region) :
    DbsClient(credential, region, ClientProfile())
{
}

DbsClient::DbsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DbsClient::ConfigureBackupPlanOutcome DbsClient::ConfigureBackupPlan(const ConfigureBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ConfigureBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfigureBackupPlanResponse rsp = ConfigureBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfigureBackupPlanOutcome(rsp);
        else
            return ConfigureBackupPlanOutcome(o.GetError());
    }
    else
    {
        return ConfigureBackupPlanOutcome(outcome.GetError());
    }
}

void DbsClient::ConfigureBackupPlanAsync(const ConfigureBackupPlanRequest& request, const ConfigureBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfigureBackupPlanRequest&;
    using Resp = ConfigureBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ConfigureBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::ConfigureBackupPlanOutcomeCallable DbsClient::ConfigureBackupPlanCallable(const ConfigureBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfigureBackupPlanOutcome>>();
    ConfigureBackupPlanAsync(
    request,
    [prom](
        const DbsClient*,
        const ConfigureBackupPlanRequest&,
        ConfigureBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::CreateBackupPlanOutcome DbsClient::CreateBackupPlan(const CreateBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBackupPlanResponse rsp = CreateBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBackupPlanOutcome(rsp);
        else
            return CreateBackupPlanOutcome(o.GetError());
    }
    else
    {
        return CreateBackupPlanOutcome(outcome.GetError());
    }
}

void DbsClient::CreateBackupPlanAsync(const CreateBackupPlanRequest& request, const CreateBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBackupPlanRequest&;
    using Resp = CreateBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::CreateBackupPlanOutcomeCallable DbsClient::CreateBackupPlanCallable(const CreateBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBackupPlanOutcome>>();
    CreateBackupPlanAsync(
    request,
    [prom](
        const DbsClient*,
        const CreateBackupPlanRequest&,
        CreateBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::CreateConnectTestJobOutcome DbsClient::CreateConnectTestJob(const CreateConnectTestJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConnectTestJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConnectTestJobResponse rsp = CreateConnectTestJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConnectTestJobOutcome(rsp);
        else
            return CreateConnectTestJobOutcome(o.GetError());
    }
    else
    {
        return CreateConnectTestJobOutcome(outcome.GetError());
    }
}

void DbsClient::CreateConnectTestJobAsync(const CreateConnectTestJobRequest& request, const CreateConnectTestJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConnectTestJobRequest&;
    using Resp = CreateConnectTestJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConnectTestJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::CreateConnectTestJobOutcomeCallable DbsClient::CreateConnectTestJobCallable(const CreateConnectTestJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConnectTestJobOutcome>>();
    CreateConnectTestJobAsync(
    request,
    [prom](
        const DbsClient*,
        const CreateConnectTestJobRequest&,
        CreateConnectTestJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DeleteBackupPlanOutcome DbsClient::DeleteBackupPlan(const DeleteBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBackupPlanResponse rsp = DeleteBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBackupPlanOutcome(rsp);
        else
            return DeleteBackupPlanOutcome(o.GetError());
    }
    else
    {
        return DeleteBackupPlanOutcome(outcome.GetError());
    }
}

void DbsClient::DeleteBackupPlanAsync(const DeleteBackupPlanRequest& request, const DeleteBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBackupPlanRequest&;
    using Resp = DeleteBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DeleteBackupPlanOutcomeCallable DbsClient::DeleteBackupPlanCallable(const DeleteBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBackupPlanOutcome>>();
    DeleteBackupPlanAsync(
    request,
    [prom](
        const DbsClient*,
        const DeleteBackupPlanRequest&,
        DeleteBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeBackupCheckJobOutcome DbsClient::DescribeBackupCheckJob(const DescribeBackupCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupCheckJobResponse rsp = DescribeBackupCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupCheckJobOutcome(rsp);
        else
            return DescribeBackupCheckJobOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupCheckJobOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeBackupCheckJobAsync(const DescribeBackupCheckJobRequest& request, const DescribeBackupCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupCheckJobRequest&;
    using Resp = DescribeBackupCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeBackupCheckJobOutcomeCallable DbsClient::DescribeBackupCheckJobCallable(const DescribeBackupCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupCheckJobOutcome>>();
    DescribeBackupCheckJobAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeBackupCheckJobRequest&,
        DescribeBackupCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeBackupPlanDetailOutcome DbsClient::DescribeBackupPlanDetail(const DescribeBackupPlanDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupPlanDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupPlanDetailResponse rsp = DescribeBackupPlanDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupPlanDetailOutcome(rsp);
        else
            return DescribeBackupPlanDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupPlanDetailOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeBackupPlanDetailAsync(const DescribeBackupPlanDetailRequest& request, const DescribeBackupPlanDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupPlanDetailRequest&;
    using Resp = DescribeBackupPlanDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupPlanDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeBackupPlanDetailOutcomeCallable DbsClient::DescribeBackupPlanDetailCallable(const DescribeBackupPlanDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupPlanDetailOutcome>>();
    DescribeBackupPlanDetailAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeBackupPlanDetailRequest&,
        DescribeBackupPlanDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeBackupPlansOutcome DbsClient::DescribeBackupPlans(const DescribeBackupPlansRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBackupPlans");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBackupPlansResponse rsp = DescribeBackupPlansResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBackupPlansOutcome(rsp);
        else
            return DescribeBackupPlansOutcome(o.GetError());
    }
    else
    {
        return DescribeBackupPlansOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeBackupPlansAsync(const DescribeBackupPlansRequest& request, const DescribeBackupPlansAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBackupPlansRequest&;
    using Resp = DescribeBackupPlansResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBackupPlans", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeBackupPlansOutcomeCallable DbsClient::DescribeBackupPlansCallable(const DescribeBackupPlansRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBackupPlansOutcome>>();
    DescribeBackupPlansAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeBackupPlansRequest&,
        DescribeBackupPlansOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeConnectTestResultOutcome DbsClient::DescribeConnectTestResult(const DescribeConnectTestResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConnectTestResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConnectTestResultResponse rsp = DescribeConnectTestResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConnectTestResultOutcome(rsp);
        else
            return DescribeConnectTestResultOutcome(o.GetError());
    }
    else
    {
        return DescribeConnectTestResultOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeConnectTestResultAsync(const DescribeConnectTestResultRequest& request, const DescribeConnectTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConnectTestResultRequest&;
    using Resp = DescribeConnectTestResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConnectTestResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeConnectTestResultOutcomeCallable DbsClient::DescribeConnectTestResultCallable(const DescribeConnectTestResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConnectTestResultOutcome>>();
    DescribeConnectTestResultAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeConnectTestResultRequest&,
        DescribeConnectTestResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeFullBackupSetDetailOutcome DbsClient::DescribeFullBackupSetDetail(const DescribeFullBackupSetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFullBackupSetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFullBackupSetDetailResponse rsp = DescribeFullBackupSetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFullBackupSetDetailOutcome(rsp);
        else
            return DescribeFullBackupSetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeFullBackupSetDetailOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeFullBackupSetDetailAsync(const DescribeFullBackupSetDetailRequest& request, const DescribeFullBackupSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFullBackupSetDetailRequest&;
    using Resp = DescribeFullBackupSetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFullBackupSetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeFullBackupSetDetailOutcomeCallable DbsClient::DescribeFullBackupSetDetailCallable(const DescribeFullBackupSetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFullBackupSetDetailOutcome>>();
    DescribeFullBackupSetDetailAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeFullBackupSetDetailRequest&,
        DescribeFullBackupSetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeIncrementBackupSetFilesOutcome DbsClient::DescribeIncrementBackupSetFiles(const DescribeIncrementBackupSetFilesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIncrementBackupSetFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIncrementBackupSetFilesResponse rsp = DescribeIncrementBackupSetFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIncrementBackupSetFilesOutcome(rsp);
        else
            return DescribeIncrementBackupSetFilesOutcome(o.GetError());
    }
    else
    {
        return DescribeIncrementBackupSetFilesOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeIncrementBackupSetFilesAsync(const DescribeIncrementBackupSetFilesRequest& request, const DescribeIncrementBackupSetFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIncrementBackupSetFilesRequest&;
    using Resp = DescribeIncrementBackupSetFilesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIncrementBackupSetFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeIncrementBackupSetFilesOutcomeCallable DbsClient::DescribeIncrementBackupSetFilesCallable(const DescribeIncrementBackupSetFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIncrementBackupSetFilesOutcome>>();
    DescribeIncrementBackupSetFilesAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeIncrementBackupSetFilesRequest&,
        DescribeIncrementBackupSetFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DescribeIncrementBackupSetsOutcome DbsClient::DescribeIncrementBackupSets(const DescribeIncrementBackupSetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIncrementBackupSets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIncrementBackupSetsResponse rsp = DescribeIncrementBackupSetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIncrementBackupSetsOutcome(rsp);
        else
            return DescribeIncrementBackupSetsOutcome(o.GetError());
    }
    else
    {
        return DescribeIncrementBackupSetsOutcome(outcome.GetError());
    }
}

void DbsClient::DescribeIncrementBackupSetsAsync(const DescribeIncrementBackupSetsRequest& request, const DescribeIncrementBackupSetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIncrementBackupSetsRequest&;
    using Resp = DescribeIncrementBackupSetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIncrementBackupSets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DescribeIncrementBackupSetsOutcomeCallable DbsClient::DescribeIncrementBackupSetsCallable(const DescribeIncrementBackupSetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIncrementBackupSetsOutcome>>();
    DescribeIncrementBackupSetsAsync(
    request,
    [prom](
        const DbsClient*,
        const DescribeIncrementBackupSetsRequest&,
        DescribeIncrementBackupSetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::DestroyBackupPlanByUserOutcome DbsClient::DestroyBackupPlanByUser(const DestroyBackupPlanByUserRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyBackupPlanByUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyBackupPlanByUserResponse rsp = DestroyBackupPlanByUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyBackupPlanByUserOutcome(rsp);
        else
            return DestroyBackupPlanByUserOutcome(o.GetError());
    }
    else
    {
        return DestroyBackupPlanByUserOutcome(outcome.GetError());
    }
}

void DbsClient::DestroyBackupPlanByUserAsync(const DestroyBackupPlanByUserRequest& request, const DestroyBackupPlanByUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyBackupPlanByUserRequest&;
    using Resp = DestroyBackupPlanByUserResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyBackupPlanByUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::DestroyBackupPlanByUserOutcomeCallable DbsClient::DestroyBackupPlanByUserCallable(const DestroyBackupPlanByUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyBackupPlanByUserOutcome>>();
    DestroyBackupPlanByUserAsync(
    request,
    [prom](
        const DbsClient*,
        const DestroyBackupPlanByUserRequest&,
        DestroyBackupPlanByUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::ModifyBackupPlanSourceInfoOutcome DbsClient::ModifyBackupPlanSourceInfo(const ModifyBackupPlanSourceInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBackupPlanSourceInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBackupPlanSourceInfoResponse rsp = ModifyBackupPlanSourceInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBackupPlanSourceInfoOutcome(rsp);
        else
            return ModifyBackupPlanSourceInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyBackupPlanSourceInfoOutcome(outcome.GetError());
    }
}

void DbsClient::ModifyBackupPlanSourceInfoAsync(const ModifyBackupPlanSourceInfoRequest& request, const ModifyBackupPlanSourceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBackupPlanSourceInfoRequest&;
    using Resp = ModifyBackupPlanSourceInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBackupPlanSourceInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::ModifyBackupPlanSourceInfoOutcomeCallable DbsClient::ModifyBackupPlanSourceInfoCallable(const ModifyBackupPlanSourceInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBackupPlanSourceInfoOutcome>>();
    ModifyBackupPlanSourceInfoAsync(
    request,
    [prom](
        const DbsClient*,
        const ModifyBackupPlanSourceInfoRequest&,
        ModifyBackupPlanSourceInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::ResumeBackupPlanOutcome DbsClient::ResumeBackupPlan(const ResumeBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeBackupPlanResponse rsp = ResumeBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeBackupPlanOutcome(rsp);
        else
            return ResumeBackupPlanOutcome(o.GetError());
    }
    else
    {
        return ResumeBackupPlanOutcome(outcome.GetError());
    }
}

void DbsClient::ResumeBackupPlanAsync(const ResumeBackupPlanRequest& request, const ResumeBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeBackupPlanRequest&;
    using Resp = ResumeBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::ResumeBackupPlanOutcomeCallable DbsClient::ResumeBackupPlanCallable(const ResumeBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeBackupPlanOutcome>>();
    ResumeBackupPlanAsync(
    request,
    [prom](
        const DbsClient*,
        const ResumeBackupPlanRequest&,
        ResumeBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::StartBackupCheckJobOutcome DbsClient::StartBackupCheckJob(const StartBackupCheckJobRequest &request)
{
    auto outcome = MakeRequest(request, "StartBackupCheckJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBackupCheckJobResponse rsp = StartBackupCheckJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBackupCheckJobOutcome(rsp);
        else
            return StartBackupCheckJobOutcome(o.GetError());
    }
    else
    {
        return StartBackupCheckJobOutcome(outcome.GetError());
    }
}

void DbsClient::StartBackupCheckJobAsync(const StartBackupCheckJobRequest& request, const StartBackupCheckJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartBackupCheckJobRequest&;
    using Resp = StartBackupCheckJobResponse;

    DoRequestAsync<Req, Resp>(
        "StartBackupCheckJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::StartBackupCheckJobOutcomeCallable DbsClient::StartBackupCheckJobCallable(const StartBackupCheckJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartBackupCheckJobOutcome>>();
    StartBackupCheckJobAsync(
    request,
    [prom](
        const DbsClient*,
        const StartBackupCheckJobRequest&,
        StartBackupCheckJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::StartBackupPlanOutcome DbsClient::StartBackupPlan(const StartBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "StartBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartBackupPlanResponse rsp = StartBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartBackupPlanOutcome(rsp);
        else
            return StartBackupPlanOutcome(o.GetError());
    }
    else
    {
        return StartBackupPlanOutcome(outcome.GetError());
    }
}

void DbsClient::StartBackupPlanAsync(const StartBackupPlanRequest& request, const StartBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartBackupPlanRequest&;
    using Resp = StartBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "StartBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::StartBackupPlanOutcomeCallable DbsClient::StartBackupPlanCallable(const StartBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartBackupPlanOutcome>>();
    StartBackupPlanAsync(
    request,
    [prom](
        const DbsClient*,
        const StartBackupPlanRequest&,
        StartBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbsClient::StopBackupPlanOutcome DbsClient::StopBackupPlan(const StopBackupPlanRequest &request)
{
    auto outcome = MakeRequest(request, "StopBackupPlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopBackupPlanResponse rsp = StopBackupPlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopBackupPlanOutcome(rsp);
        else
            return StopBackupPlanOutcome(o.GetError());
    }
    else
    {
        return StopBackupPlanOutcome(outcome.GetError());
    }
}

void DbsClient::StopBackupPlanAsync(const StopBackupPlanRequest& request, const StopBackupPlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopBackupPlanRequest&;
    using Resp = StopBackupPlanResponse;

    DoRequestAsync<Req, Resp>(
        "StopBackupPlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbsClient::StopBackupPlanOutcomeCallable DbsClient::StopBackupPlanCallable(const StopBackupPlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopBackupPlanOutcome>>();
    StopBackupPlanAsync(
    request,
    [prom](
        const DbsClient*,
        const StopBackupPlanRequest&,
        StopBackupPlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

