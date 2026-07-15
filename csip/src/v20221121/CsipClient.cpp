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


CsipClient::AddDspmAssetManagerOutcome CsipClient::AddDspmAssetManager(const AddDspmAssetManagerRequest &request)
{
    auto outcome = MakeRequest(request, "AddDspmAssetManager");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDspmAssetManagerResponse rsp = AddDspmAssetManagerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDspmAssetManagerOutcome(rsp);
        else
            return AddDspmAssetManagerOutcome(o.GetError());
    }
    else
    {
        return AddDspmAssetManagerOutcome(outcome.GetError());
    }
}

void CsipClient::AddDspmAssetManagerAsync(const AddDspmAssetManagerRequest& request, const AddDspmAssetManagerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddDspmAssetManagerRequest&;
    using Resp = AddDspmAssetManagerResponse;

    DoRequestAsync<Req, Resp>(
        "AddDspmAssetManager", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::AddDspmAssetManagerOutcomeCallable CsipClient::AddDspmAssetManagerCallable(const AddDspmAssetManagerRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddDspmAssetManagerOutcome>>();
    AddDspmAssetManagerAsync(
    request,
    [prom](
        const CsipClient*,
        const AddDspmAssetManagerRequest&,
        AddDspmAssetManagerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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

CsipClient::CreateCosAssetSyncTaskOutcome CsipClient::CreateCosAssetSyncTask(const CreateCosAssetSyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosAssetSyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosAssetSyncTaskResponse rsp = CreateCosAssetSyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosAssetSyncTaskOutcome(rsp);
        else
            return CreateCosAssetSyncTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCosAssetSyncTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateCosAssetSyncTaskAsync(const CreateCosAssetSyncTaskRequest& request, const CreateCosAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosAssetSyncTaskRequest&;
    using Resp = CreateCosAssetSyncTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosAssetSyncTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateCosAssetSyncTaskOutcomeCallable CsipClient::CreateCosAssetSyncTaskCallable(const CreateCosAssetSyncTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosAssetSyncTaskOutcome>>();
    CreateCosAssetSyncTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateCosAssetSyncTaskRequest&,
        CreateCosAssetSyncTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateCosObjectScanTaskOutcome CsipClient::CreateCosObjectScanTask(const CreateCosObjectScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosObjectScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosObjectScanTaskResponse rsp = CreateCosObjectScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosObjectScanTaskOutcome(rsp);
        else
            return CreateCosObjectScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCosObjectScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateCosObjectScanTaskAsync(const CreateCosObjectScanTaskRequest& request, const CreateCosObjectScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosObjectScanTaskRequest&;
    using Resp = CreateCosObjectScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosObjectScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateCosObjectScanTaskOutcomeCallable CsipClient::CreateCosObjectScanTaskCallable(const CreateCosObjectScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosObjectScanTaskOutcome>>();
    CreateCosObjectScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateCosObjectScanTaskRequest&,
        CreateCosObjectScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateCosPolicyOutcome CsipClient::CreateCosPolicy(const CreateCosPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosPolicyResponse rsp = CreateCosPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosPolicyOutcome(rsp);
        else
            return CreateCosPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateCosPolicyOutcome(outcome.GetError());
    }
}

void CsipClient::CreateCosPolicyAsync(const CreateCosPolicyRequest& request, const CreateCosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosPolicyRequest&;
    using Resp = CreateCosPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateCosPolicyOutcomeCallable CsipClient::CreateCosPolicyCallable(const CreateCosPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosPolicyOutcome>>();
    CreateCosPolicyAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateCosPolicyRequest&,
        CreateCosPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateCosRiskScanTaskOutcome CsipClient::CreateCosRiskScanTask(const CreateCosRiskScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosRiskScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosRiskScanTaskResponse rsp = CreateCosRiskScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosRiskScanTaskOutcome(rsp);
        else
            return CreateCosRiskScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateCosRiskScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateCosRiskScanTaskAsync(const CreateCosRiskScanTaskRequest& request, const CreateCosRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosRiskScanTaskRequest&;
    using Resp = CreateCosRiskScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosRiskScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateCosRiskScanTaskOutcomeCallable CsipClient::CreateCosRiskScanTaskCallable(const CreateCosRiskScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosRiskScanTaskOutcome>>();
    CreateCosRiskScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateCosRiskScanTaskRequest&,
        CreateCosRiskScanTaskOutcome resp,
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

CsipClient::CreateDspmAccessExportJobOutcome CsipClient::CreateDspmAccessExportJob(const CreateDspmAccessExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmAccessExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmAccessExportJobResponse rsp = CreateDspmAccessExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmAccessExportJobOutcome(rsp);
        else
            return CreateDspmAccessExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmAccessExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmAccessExportJobAsync(const CreateDspmAccessExportJobRequest& request, const CreateDspmAccessExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmAccessExportJobRequest&;
    using Resp = CreateDspmAccessExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmAccessExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmAccessExportJobOutcomeCallable CsipClient::CreateDspmAccessExportJobCallable(const CreateDspmAccessExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmAccessExportJobOutcome>>();
    CreateDspmAccessExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmAccessExportJobRequest&,
        CreateDspmAccessExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmApplyOrderOutcome CsipClient::CreateDspmApplyOrder(const CreateDspmApplyOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmApplyOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmApplyOrderResponse rsp = CreateDspmApplyOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmApplyOrderOutcome(rsp);
        else
            return CreateDspmApplyOrderOutcome(o.GetError());
    }
    else
    {
        return CreateDspmApplyOrderOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmApplyOrderAsync(const CreateDspmApplyOrderRequest& request, const CreateDspmApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmApplyOrderRequest&;
    using Resp = CreateDspmApplyOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmApplyOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmApplyOrderOutcomeCallable CsipClient::CreateDspmApplyOrderCallable(const CreateDspmApplyOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmApplyOrderOutcome>>();
    CreateDspmApplyOrderAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmApplyOrderRequest&,
        CreateDspmApplyOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmApproveHistoryExportJobOutcome CsipClient::CreateDspmApproveHistoryExportJob(const CreateDspmApproveHistoryExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmApproveHistoryExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmApproveHistoryExportJobResponse rsp = CreateDspmApproveHistoryExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmApproveHistoryExportJobOutcome(rsp);
        else
            return CreateDspmApproveHistoryExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmApproveHistoryExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmApproveHistoryExportJobAsync(const CreateDspmApproveHistoryExportJobRequest& request, const CreateDspmApproveHistoryExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmApproveHistoryExportJobRequest&;
    using Resp = CreateDspmApproveHistoryExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmApproveHistoryExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmApproveHistoryExportJobOutcomeCallable CsipClient::CreateDspmApproveHistoryExportJobCallable(const CreateDspmApproveHistoryExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmApproveHistoryExportJobOutcome>>();
    CreateDspmApproveHistoryExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmApproveHistoryExportJobRequest&,
        CreateDspmApproveHistoryExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmAssetAccessTopologyExportJobOutcome CsipClient::CreateDspmAssetAccessTopologyExportJob(const CreateDspmAssetAccessTopologyExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmAssetAccessTopologyExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmAssetAccessTopologyExportJobResponse rsp = CreateDspmAssetAccessTopologyExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmAssetAccessTopologyExportJobOutcome(rsp);
        else
            return CreateDspmAssetAccessTopologyExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmAssetAccessTopologyExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmAssetAccessTopologyExportJobAsync(const CreateDspmAssetAccessTopologyExportJobRequest& request, const CreateDspmAssetAccessTopologyExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmAssetAccessTopologyExportJobRequest&;
    using Resp = CreateDspmAssetAccessTopologyExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmAssetAccessTopologyExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmAssetAccessTopologyExportJobOutcomeCallable CsipClient::CreateDspmAssetAccessTopologyExportJobCallable(const CreateDspmAssetAccessTopologyExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmAssetAccessTopologyExportJobOutcome>>();
    CreateDspmAssetAccessTopologyExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmAssetAccessTopologyExportJobRequest&,
        CreateDspmAssetAccessTopologyExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmAssetIdentifyInfoExportJobOutcome CsipClient::CreateDspmAssetIdentifyInfoExportJob(const CreateDspmAssetIdentifyInfoExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmAssetIdentifyInfoExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmAssetIdentifyInfoExportJobResponse rsp = CreateDspmAssetIdentifyInfoExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmAssetIdentifyInfoExportJobOutcome(rsp);
        else
            return CreateDspmAssetIdentifyInfoExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmAssetIdentifyInfoExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmAssetIdentifyInfoExportJobAsync(const CreateDspmAssetIdentifyInfoExportJobRequest& request, const CreateDspmAssetIdentifyInfoExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmAssetIdentifyInfoExportJobRequest&;
    using Resp = CreateDspmAssetIdentifyInfoExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmAssetIdentifyInfoExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmAssetIdentifyInfoExportJobOutcomeCallable CsipClient::CreateDspmAssetIdentifyInfoExportJobCallable(const CreateDspmAssetIdentifyInfoExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmAssetIdentifyInfoExportJobOutcome>>();
    CreateDspmAssetIdentifyInfoExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmAssetIdentifyInfoExportJobRequest&,
        CreateDspmAssetIdentifyInfoExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmAssetsExportJobOutcome CsipClient::CreateDspmAssetsExportJob(const CreateDspmAssetsExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmAssetsExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmAssetsExportJobResponse rsp = CreateDspmAssetsExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmAssetsExportJobOutcome(rsp);
        else
            return CreateDspmAssetsExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmAssetsExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmAssetsExportJobAsync(const CreateDspmAssetsExportJobRequest& request, const CreateDspmAssetsExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmAssetsExportJobRequest&;
    using Resp = CreateDspmAssetsExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmAssetsExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmAssetsExportJobOutcomeCallable CsipClient::CreateDspmAssetsExportJobCallable(const CreateDspmAssetsExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmAssetsExportJobOutcome>>();
    CreateDspmAssetsExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmAssetsExportJobRequest&,
        CreateDspmAssetsExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmExportTaskOutcome CsipClient::CreateDspmExportTask(const CreateDspmExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmExportTaskResponse rsp = CreateDspmExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmExportTaskOutcome(rsp);
        else
            return CreateDspmExportTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDspmExportTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmExportTaskAsync(const CreateDspmExportTaskRequest& request, const CreateDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmExportTaskRequest&;
    using Resp = CreateDspmExportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmExportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmExportTaskOutcomeCallable CsipClient::CreateDspmExportTaskCallable(const CreateDspmExportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmExportTaskOutcome>>();
    CreateDspmExportTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmExportTaskRequest&,
        CreateDspmExportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyCategoryOutcome CsipClient::CreateDspmIdentifyCategory(const CreateDspmIdentifyCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyCategoryResponse rsp = CreateDspmIdentifyCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyCategoryOutcome(rsp);
        else
            return CreateDspmIdentifyCategoryOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyCategoryOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyCategoryAsync(const CreateDspmIdentifyCategoryRequest& request, const CreateDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyCategoryRequest&;
    using Resp = CreateDspmIdentifyCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyCategoryOutcomeCallable CsipClient::CreateDspmIdentifyCategoryCallable(const CreateDspmIdentifyCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyCategoryOutcome>>();
    CreateDspmIdentifyCategoryAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyCategoryRequest&,
        CreateDspmIdentifyCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyComplianceCategoryRelationOutcome CsipClient::CreateDspmIdentifyComplianceCategoryRelation(const CreateDspmIdentifyComplianceCategoryRelationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyComplianceCategoryRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyComplianceCategoryRelationResponse rsp = CreateDspmIdentifyComplianceCategoryRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyComplianceCategoryRelationOutcome(rsp);
        else
            return CreateDspmIdentifyComplianceCategoryRelationOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyComplianceCategoryRelationOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyComplianceCategoryRelationAsync(const CreateDspmIdentifyComplianceCategoryRelationRequest& request, const CreateDspmIdentifyComplianceCategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyComplianceCategoryRelationRequest&;
    using Resp = CreateDspmIdentifyComplianceCategoryRelationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyComplianceCategoryRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyComplianceCategoryRelationOutcomeCallable CsipClient::CreateDspmIdentifyComplianceCategoryRelationCallable(const CreateDspmIdentifyComplianceCategoryRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyComplianceCategoryRelationOutcome>>();
    CreateDspmIdentifyComplianceCategoryRelationAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyComplianceCategoryRelationRequest&,
        CreateDspmIdentifyComplianceCategoryRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyComplianceGroupOutcome CsipClient::CreateDspmIdentifyComplianceGroup(const CreateDspmIdentifyComplianceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyComplianceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyComplianceGroupResponse rsp = CreateDspmIdentifyComplianceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyComplianceGroupOutcome(rsp);
        else
            return CreateDspmIdentifyComplianceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyComplianceGroupOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyComplianceGroupAsync(const CreateDspmIdentifyComplianceGroupRequest& request, const CreateDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyComplianceGroupRequest&;
    using Resp = CreateDspmIdentifyComplianceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyComplianceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyComplianceGroupOutcomeCallable CsipClient::CreateDspmIdentifyComplianceGroupCallable(const CreateDspmIdentifyComplianceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyComplianceGroupOutcome>>();
    CreateDspmIdentifyComplianceGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyComplianceGroupRequest&,
        CreateDspmIdentifyComplianceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyComplianceGroupCopyOutcome CsipClient::CreateDspmIdentifyComplianceGroupCopy(const CreateDspmIdentifyComplianceGroupCopyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyComplianceGroupCopy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyComplianceGroupCopyResponse rsp = CreateDspmIdentifyComplianceGroupCopyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyComplianceGroupCopyOutcome(rsp);
        else
            return CreateDspmIdentifyComplianceGroupCopyOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyComplianceGroupCopyOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyComplianceGroupCopyAsync(const CreateDspmIdentifyComplianceGroupCopyRequest& request, const CreateDspmIdentifyComplianceGroupCopyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyComplianceGroupCopyRequest&;
    using Resp = CreateDspmIdentifyComplianceGroupCopyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyComplianceGroupCopy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyComplianceGroupCopyOutcomeCallable CsipClient::CreateDspmIdentifyComplianceGroupCopyCallable(const CreateDspmIdentifyComplianceGroupCopyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyComplianceGroupCopyOutcome>>();
    CreateDspmIdentifyComplianceGroupCopyAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyComplianceGroupCopyRequest&,
        CreateDspmIdentifyComplianceGroupCopyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyComplianceRuleRelationOutcome CsipClient::CreateDspmIdentifyComplianceRuleRelation(const CreateDspmIdentifyComplianceRuleRelationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyComplianceRuleRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyComplianceRuleRelationResponse rsp = CreateDspmIdentifyComplianceRuleRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyComplianceRuleRelationOutcome(rsp);
        else
            return CreateDspmIdentifyComplianceRuleRelationOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyComplianceRuleRelationOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyComplianceRuleRelationAsync(const CreateDspmIdentifyComplianceRuleRelationRequest& request, const CreateDspmIdentifyComplianceRuleRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyComplianceRuleRelationRequest&;
    using Resp = CreateDspmIdentifyComplianceRuleRelationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyComplianceRuleRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyComplianceRuleRelationOutcomeCallable CsipClient::CreateDspmIdentifyComplianceRuleRelationCallable(const CreateDspmIdentifyComplianceRuleRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyComplianceRuleRelationOutcome>>();
    CreateDspmIdentifyComplianceRuleRelationAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyComplianceRuleRelationRequest&,
        CreateDspmIdentifyComplianceRuleRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyInfoListExportJobOutcome CsipClient::CreateDspmIdentifyInfoListExportJob(const CreateDspmIdentifyInfoListExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyInfoListExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyInfoListExportJobResponse rsp = CreateDspmIdentifyInfoListExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyInfoListExportJobOutcome(rsp);
        else
            return CreateDspmIdentifyInfoListExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyInfoListExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyInfoListExportJobAsync(const CreateDspmIdentifyInfoListExportJobRequest& request, const CreateDspmIdentifyInfoListExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyInfoListExportJobRequest&;
    using Resp = CreateDspmIdentifyInfoListExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyInfoListExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyInfoListExportJobOutcomeCallable CsipClient::CreateDspmIdentifyInfoListExportJobCallable(const CreateDspmIdentifyInfoListExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyInfoListExportJobOutcome>>();
    CreateDspmIdentifyInfoListExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyInfoListExportJobRequest&,
        CreateDspmIdentifyInfoListExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyLevelGroupOutcome CsipClient::CreateDspmIdentifyLevelGroup(const CreateDspmIdentifyLevelGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyLevelGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyLevelGroupResponse rsp = CreateDspmIdentifyLevelGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyLevelGroupOutcome(rsp);
        else
            return CreateDspmIdentifyLevelGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyLevelGroupOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyLevelGroupAsync(const CreateDspmIdentifyLevelGroupRequest& request, const CreateDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyLevelGroupRequest&;
    using Resp = CreateDspmIdentifyLevelGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyLevelGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyLevelGroupOutcomeCallable CsipClient::CreateDspmIdentifyLevelGroupCallable(const CreateDspmIdentifyLevelGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyLevelGroupOutcome>>();
    CreateDspmIdentifyLevelGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyLevelGroupRequest&,
        CreateDspmIdentifyLevelGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmIdentifyRuleOutcome CsipClient::CreateDspmIdentifyRule(const CreateDspmIdentifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmIdentifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmIdentifyRuleResponse rsp = CreateDspmIdentifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmIdentifyRuleOutcome(rsp);
        else
            return CreateDspmIdentifyRuleOutcome(o.GetError());
    }
    else
    {
        return CreateDspmIdentifyRuleOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmIdentifyRuleAsync(const CreateDspmIdentifyRuleRequest& request, const CreateDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmIdentifyRuleRequest&;
    using Resp = CreateDspmIdentifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmIdentifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmIdentifyRuleOutcomeCallable CsipClient::CreateDspmIdentifyRuleCallable(const CreateDspmIdentifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmIdentifyRuleOutcome>>();
    CreateDspmIdentifyRuleAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmIdentifyRuleRequest&,
        CreateDspmIdentifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmPersonalIdentifyOutcome CsipClient::CreateDspmPersonalIdentify(const CreateDspmPersonalIdentifyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmPersonalIdentify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmPersonalIdentifyResponse rsp = CreateDspmPersonalIdentifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmPersonalIdentifyOutcome(rsp);
        else
            return CreateDspmPersonalIdentifyOutcome(o.GetError());
    }
    else
    {
        return CreateDspmPersonalIdentifyOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmPersonalIdentifyAsync(const CreateDspmPersonalIdentifyRequest& request, const CreateDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmPersonalIdentifyRequest&;
    using Resp = CreateDspmPersonalIdentifyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmPersonalIdentify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmPersonalIdentifyOutcomeCallable CsipClient::CreateDspmPersonalIdentifyCallable(const CreateDspmPersonalIdentifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmPersonalIdentifyOutcome>>();
    CreateDspmPersonalIdentifyAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmPersonalIdentifyRequest&,
        CreateDspmPersonalIdentifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmRiskExportJobOutcome CsipClient::CreateDspmRiskExportJob(const CreateDspmRiskExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmRiskExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmRiskExportJobResponse rsp = CreateDspmRiskExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmRiskExportJobOutcome(rsp);
        else
            return CreateDspmRiskExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateDspmRiskExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmRiskExportJobAsync(const CreateDspmRiskExportJobRequest& request, const CreateDspmRiskExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmRiskExportJobRequest&;
    using Resp = CreateDspmRiskExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmRiskExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmRiskExportJobOutcomeCallable CsipClient::CreateDspmRiskExportJobCallable(const CreateDspmRiskExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmRiskExportJobOutcome>>();
    CreateDspmRiskExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmRiskExportJobRequest&,
        CreateDspmRiskExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateDspmWhitelistStrategyOutcome CsipClient::CreateDspmWhitelistStrategy(const CreateDspmWhitelistStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDspmWhitelistStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDspmWhitelistStrategyResponse rsp = CreateDspmWhitelistStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDspmWhitelistStrategyOutcome(rsp);
        else
            return CreateDspmWhitelistStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateDspmWhitelistStrategyOutcome(outcome.GetError());
    }
}

void CsipClient::CreateDspmWhitelistStrategyAsync(const CreateDspmWhitelistStrategyRequest& request, const CreateDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDspmWhitelistStrategyRequest&;
    using Resp = CreateDspmWhitelistStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDspmWhitelistStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateDspmWhitelistStrategyOutcomeCallable CsipClient::CreateDspmWhitelistStrategyCallable(const CreateDspmWhitelistStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDspmWhitelistStrategyOutcome>>();
    CreateDspmWhitelistStrategyAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateDspmWhitelistStrategyRequest&,
        CreateDspmWhitelistStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateIaCAccessTokenOutcome CsipClient::CreateIaCAccessToken(const CreateIaCAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIaCAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIaCAccessTokenResponse rsp = CreateIaCAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIaCAccessTokenOutcome(rsp);
        else
            return CreateIaCAccessTokenOutcome(o.GetError());
    }
    else
    {
        return CreateIaCAccessTokenOutcome(outcome.GetError());
    }
}

void CsipClient::CreateIaCAccessTokenAsync(const CreateIaCAccessTokenRequest& request, const CreateIaCAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIaCAccessTokenRequest&;
    using Resp = CreateIaCAccessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIaCAccessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateIaCAccessTokenOutcomeCallable CsipClient::CreateIaCAccessTokenCallable(const CreateIaCAccessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIaCAccessTokenOutcome>>();
    CreateIaCAccessTokenAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateIaCAccessTokenRequest&,
        CreateIaCAccessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateIaCFileExportJobOutcome CsipClient::CreateIaCFileExportJob(const CreateIaCFileExportJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIaCFileExportJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIaCFileExportJobResponse rsp = CreateIaCFileExportJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIaCFileExportJobOutcome(rsp);
        else
            return CreateIaCFileExportJobOutcome(o.GetError());
    }
    else
    {
        return CreateIaCFileExportJobOutcome(outcome.GetError());
    }
}

void CsipClient::CreateIaCFileExportJobAsync(const CreateIaCFileExportJobRequest& request, const CreateIaCFileExportJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIaCFileExportJobRequest&;
    using Resp = CreateIaCFileExportJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIaCFileExportJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateIaCFileExportJobOutcomeCallable CsipClient::CreateIaCFileExportJobCallable(const CreateIaCFileExportJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIaCFileExportJobOutcome>>();
    CreateIaCFileExportJobAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateIaCFileExportJobRequest&,
        CreateIaCFileExportJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::CreateIaCFileReScanTaskOutcome CsipClient::CreateIaCFileReScanTask(const CreateIaCFileReScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIaCFileReScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIaCFileReScanTaskResponse rsp = CreateIaCFileReScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIaCFileReScanTaskOutcome(rsp);
        else
            return CreateIaCFileReScanTaskOutcome(o.GetError());
    }
    else
    {
        return CreateIaCFileReScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::CreateIaCFileReScanTaskAsync(const CreateIaCFileReScanTaskRequest& request, const CreateIaCFileReScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIaCFileReScanTaskRequest&;
    using Resp = CreateIaCFileReScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIaCFileReScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateIaCFileReScanTaskOutcomeCallable CsipClient::CreateIaCFileReScanTaskCallable(const CreateIaCFileReScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIaCFileReScanTaskOutcome>>();
    CreateIaCFileReScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateIaCFileReScanTaskRequest&,
        CreateIaCFileReScanTaskOutcome resp,
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

CsipClient::CreateSkillScanOutcome CsipClient::CreateSkillScan(const CreateSkillScanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSkillScan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSkillScanResponse rsp = CreateSkillScanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSkillScanOutcome(rsp);
        else
            return CreateSkillScanOutcome(o.GetError());
    }
    else
    {
        return CreateSkillScanOutcome(outcome.GetError());
    }
}

void CsipClient::CreateSkillScanAsync(const CreateSkillScanRequest& request, const CreateSkillScanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSkillScanRequest&;
    using Resp = CreateSkillScanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSkillScan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::CreateSkillScanOutcomeCallable CsipClient::CreateSkillScanCallable(const CreateSkillScanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSkillScanOutcome>>();
    CreateSkillScanAsync(
    request,
    [prom](
        const CsipClient*,
        const CreateSkillScanRequest&,
        CreateSkillScanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteCosAkAssetOutcome CsipClient::DeleteCosAkAsset(const DeleteCosAkAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCosAkAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCosAkAssetResponse rsp = DeleteCosAkAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCosAkAssetOutcome(rsp);
        else
            return DeleteCosAkAssetOutcome(o.GetError());
    }
    else
    {
        return DeleteCosAkAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteCosAkAssetAsync(const DeleteCosAkAssetRequest& request, const DeleteCosAkAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCosAkAssetRequest&;
    using Resp = DeleteCosAkAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCosAkAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteCosAkAssetOutcomeCallable CsipClient::DeleteCosAkAssetCallable(const DeleteCosAkAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCosAkAssetOutcome>>();
    DeleteCosAkAssetAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteCosAkAssetRequest&,
        DeleteCosAkAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteCosPolicyOutcome CsipClient::DeleteCosPolicy(const DeleteCosPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCosPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCosPolicyResponse rsp = DeleteCosPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCosPolicyOutcome(rsp);
        else
            return DeleteCosPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteCosPolicyOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteCosPolicyAsync(const DeleteCosPolicyRequest& request, const DeleteCosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCosPolicyRequest&;
    using Resp = DeleteCosPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCosPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteCosPolicyOutcomeCallable CsipClient::DeleteCosPolicyCallable(const DeleteCosPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCosPolicyOutcome>>();
    DeleteCosPolicyAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteCosPolicyRequest&,
        DeleteCosPolicyOutcome resp,
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

CsipClient::DeleteDspmApplyOrderOutcome CsipClient::DeleteDspmApplyOrder(const DeleteDspmApplyOrderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmApplyOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmApplyOrderResponse rsp = DeleteDspmApplyOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmApplyOrderOutcome(rsp);
        else
            return DeleteDspmApplyOrderOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmApplyOrderOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmApplyOrderAsync(const DeleteDspmApplyOrderRequest& request, const DeleteDspmApplyOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmApplyOrderRequest&;
    using Resp = DeleteDspmApplyOrderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmApplyOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmApplyOrderOutcomeCallable CsipClient::DeleteDspmApplyOrderCallable(const DeleteDspmApplyOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmApplyOrderOutcome>>();
    DeleteDspmApplyOrderAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmApplyOrderRequest&,
        DeleteDspmApplyOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmAssetAccountOutcome CsipClient::DeleteDspmAssetAccount(const DeleteDspmAssetAccountRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmAssetAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmAssetAccountResponse rsp = DeleteDspmAssetAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmAssetAccountOutcome(rsp);
        else
            return DeleteDspmAssetAccountOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmAssetAccountOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmAssetAccountAsync(const DeleteDspmAssetAccountRequest& request, const DeleteDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmAssetAccountRequest&;
    using Resp = DeleteDspmAssetAccountResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmAssetAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmAssetAccountOutcomeCallable CsipClient::DeleteDspmAssetAccountCallable(const DeleteDspmAssetAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmAssetAccountOutcome>>();
    DeleteDspmAssetAccountAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmAssetAccountRequest&,
        DeleteDspmAssetAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmBackupLogListOutcome CsipClient::DeleteDspmBackupLogList(const DeleteDspmBackupLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmBackupLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmBackupLogListResponse rsp = DeleteDspmBackupLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmBackupLogListOutcome(rsp);
        else
            return DeleteDspmBackupLogListOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmBackupLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmBackupLogListAsync(const DeleteDspmBackupLogListRequest& request, const DeleteDspmBackupLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmBackupLogListRequest&;
    using Resp = DeleteDspmBackupLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmBackupLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmBackupLogListOutcomeCallable CsipClient::DeleteDspmBackupLogListCallable(const DeleteDspmBackupLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmBackupLogListOutcome>>();
    DeleteDspmBackupLogListAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmBackupLogListRequest&,
        DeleteDspmBackupLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmExportTaskOutcome CsipClient::DeleteDspmExportTask(const DeleteDspmExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmExportTaskResponse rsp = DeleteDspmExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmExportTaskOutcome(rsp);
        else
            return DeleteDspmExportTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmExportTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmExportTaskAsync(const DeleteDspmExportTaskRequest& request, const DeleteDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmExportTaskRequest&;
    using Resp = DeleteDspmExportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmExportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmExportTaskOutcomeCallable CsipClient::DeleteDspmExportTaskCallable(const DeleteDspmExportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmExportTaskOutcome>>();
    DeleteDspmExportTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmExportTaskRequest&,
        DeleteDspmExportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmIdentifyCategoryOutcome CsipClient::DeleteDspmIdentifyCategory(const DeleteDspmIdentifyCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmIdentifyCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmIdentifyCategoryResponse rsp = DeleteDspmIdentifyCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmIdentifyCategoryOutcome(rsp);
        else
            return DeleteDspmIdentifyCategoryOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmIdentifyCategoryOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmIdentifyCategoryAsync(const DeleteDspmIdentifyCategoryRequest& request, const DeleteDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmIdentifyCategoryRequest&;
    using Resp = DeleteDspmIdentifyCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmIdentifyCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmIdentifyCategoryOutcomeCallable CsipClient::DeleteDspmIdentifyCategoryCallable(const DeleteDspmIdentifyCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmIdentifyCategoryOutcome>>();
    DeleteDspmIdentifyCategoryAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmIdentifyCategoryRequest&,
        DeleteDspmIdentifyCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmIdentifyComplianceCategoryRelationOutcome CsipClient::DeleteDspmIdentifyComplianceCategoryRelation(const DeleteDspmIdentifyComplianceCategoryRelationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmIdentifyComplianceCategoryRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmIdentifyComplianceCategoryRelationResponse rsp = DeleteDspmIdentifyComplianceCategoryRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmIdentifyComplianceCategoryRelationOutcome(rsp);
        else
            return DeleteDspmIdentifyComplianceCategoryRelationOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmIdentifyComplianceCategoryRelationOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmIdentifyComplianceCategoryRelationAsync(const DeleteDspmIdentifyComplianceCategoryRelationRequest& request, const DeleteDspmIdentifyComplianceCategoryRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmIdentifyComplianceCategoryRelationRequest&;
    using Resp = DeleteDspmIdentifyComplianceCategoryRelationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmIdentifyComplianceCategoryRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmIdentifyComplianceCategoryRelationOutcomeCallable CsipClient::DeleteDspmIdentifyComplianceCategoryRelationCallable(const DeleteDspmIdentifyComplianceCategoryRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmIdentifyComplianceCategoryRelationOutcome>>();
    DeleteDspmIdentifyComplianceCategoryRelationAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmIdentifyComplianceCategoryRelationRequest&,
        DeleteDspmIdentifyComplianceCategoryRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmIdentifyComplianceGroupOutcome CsipClient::DeleteDspmIdentifyComplianceGroup(const DeleteDspmIdentifyComplianceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmIdentifyComplianceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmIdentifyComplianceGroupResponse rsp = DeleteDspmIdentifyComplianceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmIdentifyComplianceGroupOutcome(rsp);
        else
            return DeleteDspmIdentifyComplianceGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmIdentifyComplianceGroupOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmIdentifyComplianceGroupAsync(const DeleteDspmIdentifyComplianceGroupRequest& request, const DeleteDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmIdentifyComplianceGroupRequest&;
    using Resp = DeleteDspmIdentifyComplianceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmIdentifyComplianceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmIdentifyComplianceGroupOutcomeCallable CsipClient::DeleteDspmIdentifyComplianceGroupCallable(const DeleteDspmIdentifyComplianceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmIdentifyComplianceGroupOutcome>>();
    DeleteDspmIdentifyComplianceGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmIdentifyComplianceGroupRequest&,
        DeleteDspmIdentifyComplianceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmIdentifyComplianceRuleRelationOutcome CsipClient::DeleteDspmIdentifyComplianceRuleRelation(const DeleteDspmIdentifyComplianceRuleRelationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmIdentifyComplianceRuleRelation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmIdentifyComplianceRuleRelationResponse rsp = DeleteDspmIdentifyComplianceRuleRelationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmIdentifyComplianceRuleRelationOutcome(rsp);
        else
            return DeleteDspmIdentifyComplianceRuleRelationOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmIdentifyComplianceRuleRelationOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmIdentifyComplianceRuleRelationAsync(const DeleteDspmIdentifyComplianceRuleRelationRequest& request, const DeleteDspmIdentifyComplianceRuleRelationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmIdentifyComplianceRuleRelationRequest&;
    using Resp = DeleteDspmIdentifyComplianceRuleRelationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmIdentifyComplianceRuleRelation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmIdentifyComplianceRuleRelationOutcomeCallable CsipClient::DeleteDspmIdentifyComplianceRuleRelationCallable(const DeleteDspmIdentifyComplianceRuleRelationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmIdentifyComplianceRuleRelationOutcome>>();
    DeleteDspmIdentifyComplianceRuleRelationAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmIdentifyComplianceRuleRelationRequest&,
        DeleteDspmIdentifyComplianceRuleRelationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmIdentifyLevelGroupOutcome CsipClient::DeleteDspmIdentifyLevelGroup(const DeleteDspmIdentifyLevelGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmIdentifyLevelGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmIdentifyLevelGroupResponse rsp = DeleteDspmIdentifyLevelGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmIdentifyLevelGroupOutcome(rsp);
        else
            return DeleteDspmIdentifyLevelGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmIdentifyLevelGroupOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmIdentifyLevelGroupAsync(const DeleteDspmIdentifyLevelGroupRequest& request, const DeleteDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmIdentifyLevelGroupRequest&;
    using Resp = DeleteDspmIdentifyLevelGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmIdentifyLevelGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmIdentifyLevelGroupOutcomeCallable CsipClient::DeleteDspmIdentifyLevelGroupCallable(const DeleteDspmIdentifyLevelGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmIdentifyLevelGroupOutcome>>();
    DeleteDspmIdentifyLevelGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmIdentifyLevelGroupRequest&,
        DeleteDspmIdentifyLevelGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmIdentifyRuleOutcome CsipClient::DeleteDspmIdentifyRule(const DeleteDspmIdentifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmIdentifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmIdentifyRuleResponse rsp = DeleteDspmIdentifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmIdentifyRuleOutcome(rsp);
        else
            return DeleteDspmIdentifyRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmIdentifyRuleOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmIdentifyRuleAsync(const DeleteDspmIdentifyRuleRequest& request, const DeleteDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmIdentifyRuleRequest&;
    using Resp = DeleteDspmIdentifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmIdentifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmIdentifyRuleOutcomeCallable CsipClient::DeleteDspmIdentifyRuleCallable(const DeleteDspmIdentifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmIdentifyRuleOutcome>>();
    DeleteDspmIdentifyRuleAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmIdentifyRuleRequest&,
        DeleteDspmIdentifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmPersonalIdentifyOutcome CsipClient::DeleteDspmPersonalIdentify(const DeleteDspmPersonalIdentifyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmPersonalIdentify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmPersonalIdentifyResponse rsp = DeleteDspmPersonalIdentifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmPersonalIdentifyOutcome(rsp);
        else
            return DeleteDspmPersonalIdentifyOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmPersonalIdentifyOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmPersonalIdentifyAsync(const DeleteDspmPersonalIdentifyRequest& request, const DeleteDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmPersonalIdentifyRequest&;
    using Resp = DeleteDspmPersonalIdentifyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmPersonalIdentify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmPersonalIdentifyOutcomeCallable CsipClient::DeleteDspmPersonalIdentifyCallable(const DeleteDspmPersonalIdentifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmPersonalIdentifyOutcome>>();
    DeleteDspmPersonalIdentifyAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmPersonalIdentifyRequest&,
        DeleteDspmPersonalIdentifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmRestoreLogListOutcome CsipClient::DeleteDspmRestoreLogList(const DeleteDspmRestoreLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmRestoreLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmRestoreLogListResponse rsp = DeleteDspmRestoreLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmRestoreLogListOutcome(rsp);
        else
            return DeleteDspmRestoreLogListOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmRestoreLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmRestoreLogListAsync(const DeleteDspmRestoreLogListRequest& request, const DeleteDspmRestoreLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmRestoreLogListRequest&;
    using Resp = DeleteDspmRestoreLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmRestoreLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmRestoreLogListOutcomeCallable CsipClient::DeleteDspmRestoreLogListCallable(const DeleteDspmRestoreLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmRestoreLogListOutcome>>();
    DeleteDspmRestoreLogListAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmRestoreLogListRequest&,
        DeleteDspmRestoreLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteDspmWhitelistStrategyOutcome CsipClient::DeleteDspmWhitelistStrategy(const DeleteDspmWhitelistStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDspmWhitelistStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDspmWhitelistStrategyResponse rsp = DeleteDspmWhitelistStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDspmWhitelistStrategyOutcome(rsp);
        else
            return DeleteDspmWhitelistStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteDspmWhitelistStrategyOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteDspmWhitelistStrategyAsync(const DeleteDspmWhitelistStrategyRequest& request, const DeleteDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDspmWhitelistStrategyRequest&;
    using Resp = DeleteDspmWhitelistStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDspmWhitelistStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteDspmWhitelistStrategyOutcomeCallable CsipClient::DeleteDspmWhitelistStrategyCallable(const DeleteDspmWhitelistStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDspmWhitelistStrategyOutcome>>();
    DeleteDspmWhitelistStrategyAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteDspmWhitelistStrategyRequest&,
        DeleteDspmWhitelistStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteIaCAccessTokenOutcome CsipClient::DeleteIaCAccessToken(const DeleteIaCAccessTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIaCAccessToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIaCAccessTokenResponse rsp = DeleteIaCAccessTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIaCAccessTokenOutcome(rsp);
        else
            return DeleteIaCAccessTokenOutcome(o.GetError());
    }
    else
    {
        return DeleteIaCAccessTokenOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteIaCAccessTokenAsync(const DeleteIaCAccessTokenRequest& request, const DeleteIaCAccessTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIaCAccessTokenRequest&;
    using Resp = DeleteIaCAccessTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIaCAccessToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteIaCAccessTokenOutcomeCallable CsipClient::DeleteIaCAccessTokenCallable(const DeleteIaCAccessTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIaCAccessTokenOutcome>>();
    DeleteIaCAccessTokenAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteIaCAccessTokenRequest&,
        DeleteIaCAccessTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DeleteIaCFileOutcome CsipClient::DeleteIaCFile(const DeleteIaCFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIaCFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIaCFileResponse rsp = DeleteIaCFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIaCFileOutcome(rsp);
        else
            return DeleteIaCFileOutcome(o.GetError());
    }
    else
    {
        return DeleteIaCFileOutcome(outcome.GetError());
    }
}

void CsipClient::DeleteIaCFileAsync(const DeleteIaCFileRequest& request, const DeleteIaCFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIaCFileRequest&;
    using Resp = DeleteIaCFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIaCFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DeleteIaCFileOutcomeCallable CsipClient::DeleteIaCFileCallable(const DeleteIaCFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIaCFileOutcome>>();
    DeleteIaCFileAsync(
    request,
    [prom](
        const CsipClient*,
        const DeleteIaCFileRequest&,
        DeleteIaCFileOutcome resp,
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

CsipClient::DescribeAIAgentAssetListOutcome CsipClient::DescribeAIAgentAssetList(const DescribeAIAgentAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAIAgentAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAIAgentAssetListResponse rsp = DescribeAIAgentAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAIAgentAssetListOutcome(rsp);
        else
            return DescribeAIAgentAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeAIAgentAssetListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAIAgentAssetListAsync(const DescribeAIAgentAssetListRequest& request, const DescribeAIAgentAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAIAgentAssetListRequest&;
    using Resp = DescribeAIAgentAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAIAgentAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAIAgentAssetListOutcomeCallable CsipClient::DescribeAIAgentAssetListCallable(const DescribeAIAgentAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAIAgentAssetListOutcome>>();
    DescribeAIAgentAssetListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAIAgentAssetListRequest&,
        DescribeAIAgentAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAILinkSettingOutcome CsipClient::DescribeAILinkSetting(const DescribeAILinkSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAILinkSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAILinkSettingResponse rsp = DescribeAILinkSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAILinkSettingOutcome(rsp);
        else
            return DescribeAILinkSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeAILinkSettingOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAILinkSettingAsync(const DescribeAILinkSettingRequest& request, const DescribeAILinkSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAILinkSettingRequest&;
    using Resp = DescribeAILinkSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAILinkSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAILinkSettingOutcomeCallable CsipClient::DescribeAILinkSettingCallable(const DescribeAILinkSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAILinkSettingOutcome>>();
    DescribeAILinkSettingAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAILinkSettingRequest&,
        DescribeAILinkSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeAKAnalysisDetailOutcome CsipClient::DescribeAKAnalysisDetail(const DescribeAKAnalysisDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAKAnalysisDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAKAnalysisDetailResponse rsp = DescribeAKAnalysisDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAKAnalysisDetailOutcome(rsp);
        else
            return DescribeAKAnalysisDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAKAnalysisDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAKAnalysisDetailAsync(const DescribeAKAnalysisDetailRequest& request, const DescribeAKAnalysisDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAKAnalysisDetailRequest&;
    using Resp = DescribeAKAnalysisDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAKAnalysisDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAKAnalysisDetailOutcomeCallable CsipClient::DescribeAKAnalysisDetailCallable(const DescribeAKAnalysisDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAKAnalysisDetailOutcome>>();
    DescribeAKAnalysisDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAKAnalysisDetailRequest&,
        DescribeAKAnalysisDetailOutcome resp,
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

CsipClient::DescribeAssumeRoleOutcome CsipClient::DescribeAssumeRole(const DescribeAssumeRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssumeRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssumeRoleResponse rsp = DescribeAssumeRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssumeRoleOutcome(rsp);
        else
            return DescribeAssumeRoleOutcome(o.GetError());
    }
    else
    {
        return DescribeAssumeRoleOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeAssumeRoleAsync(const DescribeAssumeRoleRequest& request, const DescribeAssumeRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssumeRoleRequest&;
    using Resp = DescribeAssumeRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssumeRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeAssumeRoleOutcomeCallable CsipClient::DescribeAssumeRoleCallable(const DescribeAssumeRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssumeRoleOutcome>>();
    DescribeAssumeRoleAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeAssumeRoleRequest&,
        DescribeAssumeRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeBucketInvokeIpListOutcome CsipClient::DescribeBucketInvokeIpList(const DescribeBucketInvokeIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBucketInvokeIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBucketInvokeIpListResponse rsp = DescribeBucketInvokeIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBucketInvokeIpListOutcome(rsp);
        else
            return DescribeBucketInvokeIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeBucketInvokeIpListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeBucketInvokeIpListAsync(const DescribeBucketInvokeIpListRequest& request, const DescribeBucketInvokeIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBucketInvokeIpListRequest&;
    using Resp = DescribeBucketInvokeIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBucketInvokeIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeBucketInvokeIpListOutcomeCallable CsipClient::DescribeBucketInvokeIpListCallable(const DescribeBucketInvokeIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBucketInvokeIpListOutcome>>();
    DescribeBucketInvokeIpListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeBucketInvokeIpListRequest&,
        DescribeBucketInvokeIpListOutcome resp,
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

CsipClient::DescribeCLSLogIndexV3Outcome CsipClient::DescribeCLSLogIndexV3(const DescribeCLSLogIndexV3Request &request)
{
    auto outcome = MakeRequest(request, "DescribeCLSLogIndexV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCLSLogIndexV3Response rsp = DescribeCLSLogIndexV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCLSLogIndexV3Outcome(rsp);
        else
            return DescribeCLSLogIndexV3Outcome(o.GetError());
    }
    else
    {
        return DescribeCLSLogIndexV3Outcome(outcome.GetError());
    }
}

void CsipClient::DescribeCLSLogIndexV3Async(const DescribeCLSLogIndexV3Request& request, const DescribeCLSLogIndexV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCLSLogIndexV3Request&;
    using Resp = DescribeCLSLogIndexV3Response;

    DoRequestAsync<Req, Resp>(
        "DescribeCLSLogIndexV3", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCLSLogIndexV3OutcomeCallable CsipClient::DescribeCLSLogIndexV3Callable(const DescribeCLSLogIndexV3Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCLSLogIndexV3Outcome>>();
    DescribeCLSLogIndexV3Async(
    request,
    [prom](
        const CsipClient*,
        const DescribeCLSLogIndexV3Request&,
        DescribeCLSLogIndexV3Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCLSLogListV3Outcome CsipClient::DescribeCLSLogListV3(const DescribeCLSLogListV3Request &request)
{
    auto outcome = MakeRequest(request, "DescribeCLSLogListV3");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCLSLogListV3Response rsp = DescribeCLSLogListV3Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCLSLogListV3Outcome(rsp);
        else
            return DescribeCLSLogListV3Outcome(o.GetError());
    }
    else
    {
        return DescribeCLSLogListV3Outcome(outcome.GetError());
    }
}

void CsipClient::DescribeCLSLogListV3Async(const DescribeCLSLogListV3Request& request, const DescribeCLSLogListV3AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCLSLogListV3Request&;
    using Resp = DescribeCLSLogListV3Response;

    DoRequestAsync<Req, Resp>(
        "DescribeCLSLogListV3", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCLSLogListV3OutcomeCallable CsipClient::DescribeCLSLogListV3Callable(const DescribeCLSLogListV3Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCLSLogListV3Outcome>>();
    DescribeCLSLogListV3Async(
    request,
    [prom](
        const CsipClient*,
        const DescribeCLSLogListV3Request&,
        DescribeCLSLogListV3Outcome resp,
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

CsipClient::DescribeCWPMachineDetailOutcome CsipClient::DescribeCWPMachineDetail(const DescribeCWPMachineDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCWPMachineDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCWPMachineDetailResponse rsp = DescribeCWPMachineDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCWPMachineDetailOutcome(rsp);
        else
            return DescribeCWPMachineDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCWPMachineDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCWPMachineDetailAsync(const DescribeCWPMachineDetailRequest& request, const DescribeCWPMachineDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCWPMachineDetailRequest&;
    using Resp = DescribeCWPMachineDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCWPMachineDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCWPMachineDetailOutcomeCallable CsipClient::DescribeCWPMachineDetailCallable(const DescribeCWPMachineDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCWPMachineDetailOutcome>>();
    DescribeCWPMachineDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCWPMachineDetailRequest&,
        DescribeCWPMachineDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCWPMachinesOutcome CsipClient::DescribeCWPMachines(const DescribeCWPMachinesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCWPMachines");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCWPMachinesResponse rsp = DescribeCWPMachinesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCWPMachinesOutcome(rsp);
        else
            return DescribeCWPMachinesOutcome(o.GetError());
    }
    else
    {
        return DescribeCWPMachinesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCWPMachinesAsync(const DescribeCWPMachinesRequest& request, const DescribeCWPMachinesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCWPMachinesRequest&;
    using Resp = DescribeCWPMachinesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCWPMachines", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCWPMachinesOutcomeCallable CsipClient::DescribeCWPMachinesCallable(const DescribeCWPMachinesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCWPMachinesOutcome>>();
    DescribeCWPMachinesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCWPMachinesRequest&,
        DescribeCWPMachinesOutcome resp,
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

CsipClient::DescribeCosAccessPermissionOutcome CsipClient::DescribeCosAccessPermission(const DescribeCosAccessPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAccessPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAccessPermissionResponse rsp = DescribeCosAccessPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAccessPermissionOutcome(rsp);
        else
            return DescribeCosAccessPermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAccessPermissionOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAccessPermissionAsync(const DescribeCosAccessPermissionRequest& request, const DescribeCosAccessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAccessPermissionRequest&;
    using Resp = DescribeCosAccessPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAccessPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAccessPermissionOutcomeCallable CsipClient::DescribeCosAccessPermissionCallable(const DescribeCosAccessPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAccessPermissionOutcome>>();
    DescribeCosAccessPermissionAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAccessPermissionRequest&,
        DescribeCosAccessPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAccessPermissionsOutcome CsipClient::DescribeCosAccessPermissions(const DescribeCosAccessPermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAccessPermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAccessPermissionsResponse rsp = DescribeCosAccessPermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAccessPermissionsOutcome(rsp);
        else
            return DescribeCosAccessPermissionsOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAccessPermissionsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAccessPermissionsAsync(const DescribeCosAccessPermissionsRequest& request, const DescribeCosAccessPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAccessPermissionsRequest&;
    using Resp = DescribeCosAccessPermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAccessPermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAccessPermissionsOutcomeCallable CsipClient::DescribeCosAccessPermissionsCallable(const DescribeCosAccessPermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAccessPermissionsOutcome>>();
    DescribeCosAccessPermissionsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAccessPermissionsRequest&,
        DescribeCosAccessPermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosActionListOutcome CsipClient::DescribeCosActionList(const DescribeCosActionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosActionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosActionListResponse rsp = DescribeCosActionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosActionListOutcome(rsp);
        else
            return DescribeCosActionListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosActionListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosActionListAsync(const DescribeCosActionListRequest& request, const DescribeCosActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosActionListRequest&;
    using Resp = DescribeCosActionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosActionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosActionListOutcomeCallable CsipClient::DescribeCosActionListCallable(const DescribeCosActionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosActionListOutcome>>();
    DescribeCosActionListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosActionListRequest&,
        DescribeCosActionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAkAssetOutcome CsipClient::DescribeCosAkAsset(const DescribeCosAkAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAkAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAkAssetResponse rsp = DescribeCosAkAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAkAssetOutcome(rsp);
        else
            return DescribeCosAkAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAkAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAkAssetAsync(const DescribeCosAkAssetRequest& request, const DescribeCosAkAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAkAssetRequest&;
    using Resp = DescribeCosAkAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAkAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAkAssetOutcomeCallable CsipClient::DescribeCosAkAssetCallable(const DescribeCosAkAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAkAssetOutcome>>();
    DescribeCosAkAssetAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAkAssetRequest&,
        DescribeCosAkAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAkInvokeIpListOutcome CsipClient::DescribeCosAkInvokeIpList(const DescribeCosAkInvokeIpListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAkInvokeIpList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAkInvokeIpListResponse rsp = DescribeCosAkInvokeIpListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAkInvokeIpListOutcome(rsp);
        else
            return DescribeCosAkInvokeIpListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAkInvokeIpListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAkInvokeIpListAsync(const DescribeCosAkInvokeIpListRequest& request, const DescribeCosAkInvokeIpListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAkInvokeIpListRequest&;
    using Resp = DescribeCosAkInvokeIpListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAkInvokeIpList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAkInvokeIpListOutcomeCallable CsipClient::DescribeCosAkInvokeIpListCallable(const DescribeCosAkInvokeIpListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAkInvokeIpListOutcome>>();
    DescribeCosAkInvokeIpListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAkInvokeIpListRequest&,
        DescribeCosAkInvokeIpListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAlarmListOutcome CsipClient::DescribeCosAlarmList(const DescribeCosAlarmListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAlarmList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAlarmListResponse rsp = DescribeCosAlarmListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAlarmListOutcome(rsp);
        else
            return DescribeCosAlarmListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAlarmListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAlarmListAsync(const DescribeCosAlarmListRequest& request, const DescribeCosAlarmListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAlarmListRequest&;
    using Resp = DescribeCosAlarmListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAlarmList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAlarmListOutcomeCallable CsipClient::DescribeCosAlarmListCallable(const DescribeCosAlarmListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAlarmListOutcome>>();
    DescribeCosAlarmListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAlarmListRequest&,
        DescribeCosAlarmListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAlarmTrendDataOutcome CsipClient::DescribeCosAlarmTrendData(const DescribeCosAlarmTrendDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAlarmTrendData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAlarmTrendDataResponse rsp = DescribeCosAlarmTrendDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAlarmTrendDataOutcome(rsp);
        else
            return DescribeCosAlarmTrendDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAlarmTrendDataOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAlarmTrendDataAsync(const DescribeCosAlarmTrendDataRequest& request, const DescribeCosAlarmTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAlarmTrendDataRequest&;
    using Resp = DescribeCosAlarmTrendDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAlarmTrendData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAlarmTrendDataOutcomeCallable CsipClient::DescribeCosAlarmTrendDataCallable(const DescribeCosAlarmTrendDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAlarmTrendDataOutcome>>();
    DescribeCosAlarmTrendDataAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAlarmTrendDataRequest&,
        DescribeCosAlarmTrendDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAssetOutcome CsipClient::DescribeCosAsset(const DescribeCosAssetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAssetResponse rsp = DescribeCosAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAssetOutcome(rsp);
        else
            return DescribeCosAssetOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAssetOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAssetAsync(const DescribeCosAssetRequest& request, const DescribeCosAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAssetRequest&;
    using Resp = DescribeCosAssetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAssetOutcomeCallable CsipClient::DescribeCosAssetCallable(const DescribeCosAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAssetOutcome>>();
    DescribeCosAssetAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAssetRequest&,
        DescribeCosAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAssetSyncTaskOutcome CsipClient::DescribeCosAssetSyncTask(const DescribeCosAssetSyncTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAssetSyncTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAssetSyncTaskResponse rsp = DescribeCosAssetSyncTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAssetSyncTaskOutcome(rsp);
        else
            return DescribeCosAssetSyncTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAssetSyncTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAssetSyncTaskAsync(const DescribeCosAssetSyncTaskRequest& request, const DescribeCosAssetSyncTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAssetSyncTaskRequest&;
    using Resp = DescribeCosAssetSyncTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAssetSyncTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAssetSyncTaskOutcomeCallable CsipClient::DescribeCosAssetSyncTaskCallable(const DescribeCosAssetSyncTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAssetSyncTaskOutcome>>();
    DescribeCosAssetSyncTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAssetSyncTaskRequest&,
        DescribeCosAssetSyncTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAuditAppIdListOutcome CsipClient::DescribeCosAuditAppIdList(const DescribeCosAuditAppIdListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAuditAppIdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAuditAppIdListResponse rsp = DescribeCosAuditAppIdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAuditAppIdListOutcome(rsp);
        else
            return DescribeCosAuditAppIdListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAuditAppIdListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAuditAppIdListAsync(const DescribeCosAuditAppIdListRequest& request, const DescribeCosAuditAppIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAuditAppIdListRequest&;
    using Resp = DescribeCosAuditAppIdListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAuditAppIdList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAuditAppIdListOutcomeCallable CsipClient::DescribeCosAuditAppIdListCallable(const DescribeCosAuditAppIdListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAuditAppIdListOutcome>>();
    DescribeCosAuditAppIdListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAuditAppIdListRequest&,
        DescribeCosAuditAppIdListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAuditDictionaryListOutcome CsipClient::DescribeCosAuditDictionaryList(const DescribeCosAuditDictionaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAuditDictionaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAuditDictionaryListResponse rsp = DescribeCosAuditDictionaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAuditDictionaryListOutcome(rsp);
        else
            return DescribeCosAuditDictionaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAuditDictionaryListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAuditDictionaryListAsync(const DescribeCosAuditDictionaryListRequest& request, const DescribeCosAuditDictionaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAuditDictionaryListRequest&;
    using Resp = DescribeCosAuditDictionaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAuditDictionaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAuditDictionaryListOutcomeCallable CsipClient::DescribeCosAuditDictionaryListCallable(const DescribeCosAuditDictionaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAuditDictionaryListOutcome>>();
    DescribeCosAuditDictionaryListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAuditDictionaryListRequest&,
        DescribeCosAuditDictionaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosAuditPayInfoOutcome CsipClient::DescribeCosAuditPayInfo(const DescribeCosAuditPayInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosAuditPayInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosAuditPayInfoResponse rsp = DescribeCosAuditPayInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosAuditPayInfoOutcome(rsp);
        else
            return DescribeCosAuditPayInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCosAuditPayInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosAuditPayInfoAsync(const DescribeCosAuditPayInfoRequest& request, const DescribeCosAuditPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosAuditPayInfoRequest&;
    using Resp = DescribeCosAuditPayInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosAuditPayInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosAuditPayInfoOutcomeCallable CsipClient::DescribeCosAuditPayInfoCallable(const DescribeCosAuditPayInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosAuditPayInfoOutcome>>();
    DescribeCosAuditPayInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosAuditPayInfoRequest&,
        DescribeCosAuditPayInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosBucketBillingInfoOutcome CsipClient::DescribeCosBucketBillingInfo(const DescribeCosBucketBillingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosBucketBillingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosBucketBillingInfoResponse rsp = DescribeCosBucketBillingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosBucketBillingInfoOutcome(rsp);
        else
            return DescribeCosBucketBillingInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCosBucketBillingInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosBucketBillingInfoAsync(const DescribeCosBucketBillingInfoRequest& request, const DescribeCosBucketBillingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosBucketBillingInfoRequest&;
    using Resp = DescribeCosBucketBillingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosBucketBillingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosBucketBillingInfoOutcomeCallable CsipClient::DescribeCosBucketBillingInfoCallable(const DescribeCosBucketBillingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosBucketBillingInfoOutcome>>();
    DescribeCosBucketBillingInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosBucketBillingInfoRequest&,
        DescribeCosBucketBillingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosBucketListOutcome CsipClient::DescribeCosBucketList(const DescribeCosBucketListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosBucketList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosBucketListResponse rsp = DescribeCosBucketListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosBucketListOutcome(rsp);
        else
            return DescribeCosBucketListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosBucketListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosBucketListAsync(const DescribeCosBucketListRequest& request, const DescribeCosBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosBucketListRequest&;
    using Resp = DescribeCosBucketListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosBucketList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosBucketListOutcomeCallable CsipClient::DescribeCosBucketListCallable(const DescribeCosBucketListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosBucketListOutcome>>();
    DescribeCosBucketListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosBucketListRequest&,
        DescribeCosBucketListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosBucketRiskOutcome CsipClient::DescribeCosBucketRisk(const DescribeCosBucketRiskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosBucketRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosBucketRiskResponse rsp = DescribeCosBucketRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosBucketRiskOutcome(rsp);
        else
            return DescribeCosBucketRiskOutcome(o.GetError());
    }
    else
    {
        return DescribeCosBucketRiskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosBucketRiskAsync(const DescribeCosBucketRiskRequest& request, const DescribeCosBucketRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosBucketRiskRequest&;
    using Resp = DescribeCosBucketRiskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosBucketRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosBucketRiskOutcomeCallable CsipClient::DescribeCosBucketRiskCallable(const DescribeCosBucketRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosBucketRiskOutcome>>();
    DescribeCosBucketRiskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosBucketRiskRequest&,
        DescribeCosBucketRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosIdentifyFileListOutcome CsipClient::DescribeCosIdentifyFileList(const DescribeCosIdentifyFileListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosIdentifyFileList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosIdentifyFileListResponse rsp = DescribeCosIdentifyFileListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosIdentifyFileListOutcome(rsp);
        else
            return DescribeCosIdentifyFileListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosIdentifyFileListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosIdentifyFileListAsync(const DescribeCosIdentifyFileListRequest& request, const DescribeCosIdentifyFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosIdentifyFileListRequest&;
    using Resp = DescribeCosIdentifyFileListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosIdentifyFileList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosIdentifyFileListOutcomeCallable CsipClient::DescribeCosIdentifyFileListCallable(const DescribeCosIdentifyFileListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosIdentifyFileListOutcome>>();
    DescribeCosIdentifyFileListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosIdentifyFileListRequest&,
        DescribeCosIdentifyFileListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosInvokeUaOutcome CsipClient::DescribeCosInvokeUa(const DescribeCosInvokeUaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosInvokeUa");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosInvokeUaResponse rsp = DescribeCosInvokeUaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosInvokeUaOutcome(rsp);
        else
            return DescribeCosInvokeUaOutcome(o.GetError());
    }
    else
    {
        return DescribeCosInvokeUaOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosInvokeUaAsync(const DescribeCosInvokeUaRequest& request, const DescribeCosInvokeUaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosInvokeUaRequest&;
    using Resp = DescribeCosInvokeUaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosInvokeUa", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosInvokeUaOutcomeCallable CsipClient::DescribeCosInvokeUaCallable(const DescribeCosInvokeUaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosInvokeUaOutcome>>();
    DescribeCosInvokeUaAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosInvokeUaRequest&,
        DescribeCosInvokeUaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosIpInvokeLogOutcome CsipClient::DescribeCosIpInvokeLog(const DescribeCosIpInvokeLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosIpInvokeLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosIpInvokeLogResponse rsp = DescribeCosIpInvokeLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosIpInvokeLogOutcome(rsp);
        else
            return DescribeCosIpInvokeLogOutcome(o.GetError());
    }
    else
    {
        return DescribeCosIpInvokeLogOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosIpInvokeLogAsync(const DescribeCosIpInvokeLogRequest& request, const DescribeCosIpInvokeLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosIpInvokeLogRequest&;
    using Resp = DescribeCosIpInvokeLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosIpInvokeLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosIpInvokeLogOutcomeCallable CsipClient::DescribeCosIpInvokeLogCallable(const DescribeCosIpInvokeLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosIpInvokeLogOutcome>>();
    DescribeCosIpInvokeLogAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosIpInvokeLogRequest&,
        DescribeCosIpInvokeLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosIpInvokeRecordFileOutcome CsipClient::DescribeCosIpInvokeRecordFile(const DescribeCosIpInvokeRecordFileRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosIpInvokeRecordFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosIpInvokeRecordFileResponse rsp = DescribeCosIpInvokeRecordFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosIpInvokeRecordFileOutcome(rsp);
        else
            return DescribeCosIpInvokeRecordFileOutcome(o.GetError());
    }
    else
    {
        return DescribeCosIpInvokeRecordFileOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosIpInvokeRecordFileAsync(const DescribeCosIpInvokeRecordFileRequest& request, const DescribeCosIpInvokeRecordFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosIpInvokeRecordFileRequest&;
    using Resp = DescribeCosIpInvokeRecordFileResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosIpInvokeRecordFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosIpInvokeRecordFileOutcomeCallable CsipClient::DescribeCosIpInvokeRecordFileCallable(const DescribeCosIpInvokeRecordFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosIpInvokeRecordFileOutcome>>();
    DescribeCosIpInvokeRecordFileAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosIpInvokeRecordFileRequest&,
        DescribeCosIpInvokeRecordFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosObjectScanTaskOutcome CsipClient::DescribeCosObjectScanTask(const DescribeCosObjectScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosObjectScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosObjectScanTaskResponse rsp = DescribeCosObjectScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosObjectScanTaskOutcome(rsp);
        else
            return DescribeCosObjectScanTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCosObjectScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosObjectScanTaskAsync(const DescribeCosObjectScanTaskRequest& request, const DescribeCosObjectScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosObjectScanTaskRequest&;
    using Resp = DescribeCosObjectScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosObjectScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosObjectScanTaskOutcomeCallable CsipClient::DescribeCosObjectScanTaskCallable(const DescribeCosObjectScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosObjectScanTaskOutcome>>();
    DescribeCosObjectScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosObjectScanTaskRequest&,
        DescribeCosObjectScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosOverviewOutcome CsipClient::DescribeCosOverview(const DescribeCosOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosOverviewResponse rsp = DescribeCosOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosOverviewOutcome(rsp);
        else
            return DescribeCosOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeCosOverviewOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosOverviewAsync(const DescribeCosOverviewRequest& request, const DescribeCosOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosOverviewRequest&;
    using Resp = DescribeCosOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosOverviewOutcomeCallable CsipClient::DescribeCosOverviewCallable(const DescribeCosOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosOverviewOutcome>>();
    DescribeCosOverviewAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosOverviewRequest&,
        DescribeCosOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosPolicyOutcome CsipClient::DescribeCosPolicy(const DescribeCosPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosPolicyResponse rsp = DescribeCosPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosPolicyOutcome(rsp);
        else
            return DescribeCosPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeCosPolicyOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosPolicyAsync(const DescribeCosPolicyRequest& request, const DescribeCosPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosPolicyRequest&;
    using Resp = DescribeCosPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosPolicyOutcomeCallable CsipClient::DescribeCosPolicyCallable(const DescribeCosPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosPolicyOutcome>>();
    DescribeCosPolicyAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosPolicyRequest&,
        DescribeCosPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosRiskActionListOutcome CsipClient::DescribeCosRiskActionList(const DescribeCosRiskActionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRiskActionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRiskActionListResponse rsp = DescribeCosRiskActionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRiskActionListOutcome(rsp);
        else
            return DescribeCosRiskActionListOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRiskActionListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosRiskActionListAsync(const DescribeCosRiskActionListRequest& request, const DescribeCosRiskActionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosRiskActionListRequest&;
    using Resp = DescribeCosRiskActionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosRiskActionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosRiskActionListOutcomeCallable CsipClient::DescribeCosRiskActionListCallable(const DescribeCosRiskActionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosRiskActionListOutcome>>();
    DescribeCosRiskActionListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosRiskActionListRequest&,
        DescribeCosRiskActionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosRiskEvidenceOutcome CsipClient::DescribeCosRiskEvidence(const DescribeCosRiskEvidenceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRiskEvidence");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRiskEvidenceResponse rsp = DescribeCosRiskEvidenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRiskEvidenceOutcome(rsp);
        else
            return DescribeCosRiskEvidenceOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRiskEvidenceOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosRiskEvidenceAsync(const DescribeCosRiskEvidenceRequest& request, const DescribeCosRiskEvidenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosRiskEvidenceRequest&;
    using Resp = DescribeCosRiskEvidenceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosRiskEvidence", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosRiskEvidenceOutcomeCallable CsipClient::DescribeCosRiskEvidenceCallable(const DescribeCosRiskEvidenceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosRiskEvidenceOutcome>>();
    DescribeCosRiskEvidenceAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosRiskEvidenceRequest&,
        DescribeCosRiskEvidenceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosRiskScanTaskOutcome CsipClient::DescribeCosRiskScanTask(const DescribeCosRiskScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRiskScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRiskScanTaskResponse rsp = DescribeCosRiskScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRiskScanTaskOutcome(rsp);
        else
            return DescribeCosRiskScanTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRiskScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosRiskScanTaskAsync(const DescribeCosRiskScanTaskRequest& request, const DescribeCosRiskScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosRiskScanTaskRequest&;
    using Resp = DescribeCosRiskScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosRiskScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosRiskScanTaskOutcomeCallable CsipClient::DescribeCosRiskScanTaskCallable(const DescribeCosRiskScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosRiskScanTaskOutcome>>();
    DescribeCosRiskScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosRiskScanTaskRequest&,
        DescribeCosRiskScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosRoleAccessPermissionOutcome CsipClient::DescribeCosRoleAccessPermission(const DescribeCosRoleAccessPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRoleAccessPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRoleAccessPermissionResponse rsp = DescribeCosRoleAccessPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRoleAccessPermissionOutcome(rsp);
        else
            return DescribeCosRoleAccessPermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRoleAccessPermissionOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosRoleAccessPermissionAsync(const DescribeCosRoleAccessPermissionRequest& request, const DescribeCosRoleAccessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosRoleAccessPermissionRequest&;
    using Resp = DescribeCosRoleAccessPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosRoleAccessPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosRoleAccessPermissionOutcomeCallable CsipClient::DescribeCosRoleAccessPermissionCallable(const DescribeCosRoleAccessPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosRoleAccessPermissionOutcome>>();
    DescribeCosRoleAccessPermissionAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosRoleAccessPermissionRequest&,
        DescribeCosRoleAccessPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosRoleAccessPermissionsOutcome CsipClient::DescribeCosRoleAccessPermissions(const DescribeCosRoleAccessPermissionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosRoleAccessPermissions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosRoleAccessPermissionsResponse rsp = DescribeCosRoleAccessPermissionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosRoleAccessPermissionsOutcome(rsp);
        else
            return DescribeCosRoleAccessPermissionsOutcome(o.GetError());
    }
    else
    {
        return DescribeCosRoleAccessPermissionsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosRoleAccessPermissionsAsync(const DescribeCosRoleAccessPermissionsRequest& request, const DescribeCosRoleAccessPermissionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosRoleAccessPermissionsRequest&;
    using Resp = DescribeCosRoleAccessPermissionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosRoleAccessPermissions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosRoleAccessPermissionsOutcomeCallable CsipClient::DescribeCosRoleAccessPermissionsCallable(const DescribeCosRoleAccessPermissionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosRoleAccessPermissionsOutcome>>();
    DescribeCosRoleAccessPermissionsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosRoleAccessPermissionsRequest&,
        DescribeCosRoleAccessPermissionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeCosSourceIpOutcome CsipClient::DescribeCosSourceIp(const DescribeCosSourceIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosSourceIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosSourceIpResponse rsp = DescribeCosSourceIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosSourceIpOutcome(rsp);
        else
            return DescribeCosSourceIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCosSourceIpOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeCosSourceIpAsync(const DescribeCosSourceIpRequest& request, const DescribeCosSourceIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosSourceIpRequest&;
    using Resp = DescribeCosSourceIpResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosSourceIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeCosSourceIpOutcomeCallable CsipClient::DescribeCosSourceIpCallable(const DescribeCosSourceIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosSourceIpOutcome>>();
    DescribeCosSourceIpAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeCosSourceIpRequest&,
        DescribeCosSourceIpOutcome resp,
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

CsipClient::DescribeDspmAccessRecordOutcome CsipClient::DescribeDspmAccessRecord(const DescribeDspmAccessRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAccessRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAccessRecordResponse rsp = DescribeDspmAccessRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAccessRecordOutcome(rsp);
        else
            return DescribeDspmAccessRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAccessRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAccessRecordAsync(const DescribeDspmAccessRecordRequest& request, const DescribeDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAccessRecordRequest&;
    using Resp = DescribeDspmAccessRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAccessRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAccessRecordOutcomeCallable CsipClient::DescribeDspmAccessRecordCallable(const DescribeDspmAccessRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAccessRecordOutcome>>();
    DescribeDspmAccessRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAccessRecordRequest&,
        DescribeDspmAccessRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAccessTopologyAccountsOutcome CsipClient::DescribeDspmAccessTopologyAccounts(const DescribeDspmAccessTopologyAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAccessTopologyAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAccessTopologyAccountsResponse rsp = DescribeDspmAccessTopologyAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAccessTopologyAccountsOutcome(rsp);
        else
            return DescribeDspmAccessTopologyAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAccessTopologyAccountsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAccessTopologyAccountsAsync(const DescribeDspmAccessTopologyAccountsRequest& request, const DescribeDspmAccessTopologyAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAccessTopologyAccountsRequest&;
    using Resp = DescribeDspmAccessTopologyAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAccessTopologyAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAccessTopologyAccountsOutcomeCallable CsipClient::DescribeDspmAccessTopologyAccountsCallable(const DescribeDspmAccessTopologyAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAccessTopologyAccountsOutcome>>();
    DescribeDspmAccessTopologyAccountsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAccessTopologyAccountsRequest&,
        DescribeDspmAccessTopologyAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAccessTopologyAssetsOutcome CsipClient::DescribeDspmAccessTopologyAssets(const DescribeDspmAccessTopologyAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAccessTopologyAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAccessTopologyAssetsResponse rsp = DescribeDspmAccessTopologyAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAccessTopologyAssetsOutcome(rsp);
        else
            return DescribeDspmAccessTopologyAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAccessTopologyAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAccessTopologyAssetsAsync(const DescribeDspmAccessTopologyAssetsRequest& request, const DescribeDspmAccessTopologyAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAccessTopologyAssetsRequest&;
    using Resp = DescribeDspmAccessTopologyAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAccessTopologyAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAccessTopologyAssetsOutcomeCallable CsipClient::DescribeDspmAccessTopologyAssetsCallable(const DescribeDspmAccessTopologyAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAccessTopologyAssetsOutcome>>();
    DescribeDspmAccessTopologyAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAccessTopologyAssetsRequest&,
        DescribeDspmAccessTopologyAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAccessTopologyIpsOutcome CsipClient::DescribeDspmAccessTopologyIps(const DescribeDspmAccessTopologyIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAccessTopologyIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAccessTopologyIpsResponse rsp = DescribeDspmAccessTopologyIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAccessTopologyIpsOutcome(rsp);
        else
            return DescribeDspmAccessTopologyIpsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAccessTopologyIpsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAccessTopologyIpsAsync(const DescribeDspmAccessTopologyIpsRequest& request, const DescribeDspmAccessTopologyIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAccessTopologyIpsRequest&;
    using Resp = DescribeDspmAccessTopologyIpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAccessTopologyIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAccessTopologyIpsOutcomeCallable CsipClient::DescribeDspmAccessTopologyIpsCallable(const DescribeDspmAccessTopologyIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAccessTopologyIpsOutcome>>();
    DescribeDspmAccessTopologyIpsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAccessTopologyIpsRequest&,
        DescribeDspmAccessTopologyIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmApplyHistoryOutcome CsipClient::DescribeDspmApplyHistory(const DescribeDspmApplyHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmApplyHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmApplyHistoryResponse rsp = DescribeDspmApplyHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmApplyHistoryOutcome(rsp);
        else
            return DescribeDspmApplyHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmApplyHistoryOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmApplyHistoryAsync(const DescribeDspmApplyHistoryRequest& request, const DescribeDspmApplyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmApplyHistoryRequest&;
    using Resp = DescribeDspmApplyHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmApplyHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmApplyHistoryOutcomeCallable CsipClient::DescribeDspmApplyHistoryCallable(const DescribeDspmApplyHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmApplyHistoryOutcome>>();
    DescribeDspmApplyHistoryAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmApplyHistoryRequest&,
        DescribeDspmApplyHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmApplyOrderListOutcome CsipClient::DescribeDspmApplyOrderList(const DescribeDspmApplyOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmApplyOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmApplyOrderListResponse rsp = DescribeDspmApplyOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmApplyOrderListOutcome(rsp);
        else
            return DescribeDspmApplyOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmApplyOrderListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmApplyOrderListAsync(const DescribeDspmApplyOrderListRequest& request, const DescribeDspmApplyOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmApplyOrderListRequest&;
    using Resp = DescribeDspmApplyOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmApplyOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmApplyOrderListOutcomeCallable CsipClient::DescribeDspmApplyOrderListCallable(const DescribeDspmApplyOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmApplyOrderListOutcome>>();
    DescribeDspmApplyOrderListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmApplyOrderListRequest&,
        DescribeDspmApplyOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmApproveHistoryOutcome CsipClient::DescribeDspmApproveHistory(const DescribeDspmApproveHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmApproveHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmApproveHistoryResponse rsp = DescribeDspmApproveHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmApproveHistoryOutcome(rsp);
        else
            return DescribeDspmApproveHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmApproveHistoryOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmApproveHistoryAsync(const DescribeDspmApproveHistoryRequest& request, const DescribeDspmApproveHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmApproveHistoryRequest&;
    using Resp = DescribeDspmApproveHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmApproveHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmApproveHistoryOutcomeCallable CsipClient::DescribeDspmApproveHistoryCallable(const DescribeDspmApproveHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmApproveHistoryOutcome>>();
    DescribeDspmApproveHistoryAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmApproveHistoryRequest&,
        DescribeDspmApproveHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmApproveOrderListOutcome CsipClient::DescribeDspmApproveOrderList(const DescribeDspmApproveOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmApproveOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmApproveOrderListResponse rsp = DescribeDspmApproveOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmApproveOrderListOutcome(rsp);
        else
            return DescribeDspmApproveOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmApproveOrderListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmApproveOrderListAsync(const DescribeDspmApproveOrderListRequest& request, const DescribeDspmApproveOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmApproveOrderListRequest&;
    using Resp = DescribeDspmApproveOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmApproveOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmApproveOrderListOutcomeCallable CsipClient::DescribeDspmApproveOrderListCallable(const DescribeDspmApproveOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmApproveOrderListOutcome>>();
    DescribeDspmApproveOrderListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmApproveOrderListRequest&,
        DescribeDspmApproveOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetAccessTopologyOutcome CsipClient::DescribeDspmAssetAccessTopology(const DescribeDspmAssetAccessTopologyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetAccessTopology");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetAccessTopologyResponse rsp = DescribeDspmAssetAccessTopologyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetAccessTopologyOutcome(rsp);
        else
            return DescribeDspmAssetAccessTopologyOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetAccessTopologyOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetAccessTopologyAsync(const DescribeDspmAssetAccessTopologyRequest& request, const DescribeDspmAssetAccessTopologyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetAccessTopologyRequest&;
    using Resp = DescribeDspmAssetAccessTopologyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetAccessTopology", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetAccessTopologyOutcomeCallable CsipClient::DescribeDspmAssetAccessTopologyCallable(const DescribeDspmAssetAccessTopologyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetAccessTopologyOutcome>>();
    DescribeDspmAssetAccessTopologyAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetAccessTopologyRequest&,
        DescribeDspmAssetAccessTopologyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetAccountIdentifyOutcome CsipClient::DescribeDspmAssetAccountIdentify(const DescribeDspmAssetAccountIdentifyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetAccountIdentify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetAccountIdentifyResponse rsp = DescribeDspmAssetAccountIdentifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetAccountIdentifyOutcome(rsp);
        else
            return DescribeDspmAssetAccountIdentifyOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetAccountIdentifyOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetAccountIdentifyAsync(const DescribeDspmAssetAccountIdentifyRequest& request, const DescribeDspmAssetAccountIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetAccountIdentifyRequest&;
    using Resp = DescribeDspmAssetAccountIdentifyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetAccountIdentify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetAccountIdentifyOutcomeCallable CsipClient::DescribeDspmAssetAccountIdentifyCallable(const DescribeDspmAssetAccountIdentifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetAccountIdentifyOutcome>>();
    DescribeDspmAssetAccountIdentifyAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetAccountIdentifyRequest&,
        DescribeDspmAssetAccountIdentifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetAccountPresetPrivilegesOutcome CsipClient::DescribeDspmAssetAccountPresetPrivileges(const DescribeDspmAssetAccountPresetPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetAccountPresetPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetAccountPresetPrivilegesResponse rsp = DescribeDspmAssetAccountPresetPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetAccountPresetPrivilegesOutcome(rsp);
        else
            return DescribeDspmAssetAccountPresetPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetAccountPresetPrivilegesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetAccountPresetPrivilegesAsync(const DescribeDspmAssetAccountPresetPrivilegesRequest& request, const DescribeDspmAssetAccountPresetPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetAccountPresetPrivilegesRequest&;
    using Resp = DescribeDspmAssetAccountPresetPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetAccountPresetPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetAccountPresetPrivilegesOutcomeCallable CsipClient::DescribeDspmAssetAccountPresetPrivilegesCallable(const DescribeDspmAssetAccountPresetPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetAccountPresetPrivilegesOutcome>>();
    DescribeDspmAssetAccountPresetPrivilegesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetAccountPresetPrivilegesRequest&,
        DescribeDspmAssetAccountPresetPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetAccountRecycledPrivilegesOutcome CsipClient::DescribeDspmAssetAccountRecycledPrivileges(const DescribeDspmAssetAccountRecycledPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetAccountRecycledPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetAccountRecycledPrivilegesResponse rsp = DescribeDspmAssetAccountRecycledPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetAccountRecycledPrivilegesOutcome(rsp);
        else
            return DescribeDspmAssetAccountRecycledPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetAccountRecycledPrivilegesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetAccountRecycledPrivilegesAsync(const DescribeDspmAssetAccountRecycledPrivilegesRequest& request, const DescribeDspmAssetAccountRecycledPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetAccountRecycledPrivilegesRequest&;
    using Resp = DescribeDspmAssetAccountRecycledPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetAccountRecycledPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetAccountRecycledPrivilegesOutcomeCallable CsipClient::DescribeDspmAssetAccountRecycledPrivilegesCallable(const DescribeDspmAssetAccountRecycledPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetAccountRecycledPrivilegesOutcome>>();
    DescribeDspmAssetAccountRecycledPrivilegesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetAccountRecycledPrivilegesRequest&,
        DescribeDspmAssetAccountRecycledPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetAccountsOutcome CsipClient::DescribeDspmAssetAccounts(const DescribeDspmAssetAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetAccountsResponse rsp = DescribeDspmAssetAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetAccountsOutcome(rsp);
        else
            return DescribeDspmAssetAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetAccountsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetAccountsAsync(const DescribeDspmAssetAccountsRequest& request, const DescribeDspmAssetAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetAccountsRequest&;
    using Resp = DescribeDspmAssetAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetAccountsOutcomeCallable CsipClient::DescribeDspmAssetAccountsCallable(const DescribeDspmAssetAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetAccountsOutcome>>();
    DescribeDspmAssetAccountsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetAccountsRequest&,
        DescribeDspmAssetAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetDatabaseListOutcome CsipClient::DescribeDspmAssetDatabaseList(const DescribeDspmAssetDatabaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetDatabaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetDatabaseListResponse rsp = DescribeDspmAssetDatabaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetDatabaseListOutcome(rsp);
        else
            return DescribeDspmAssetDatabaseListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetDatabaseListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetDatabaseListAsync(const DescribeDspmAssetDatabaseListRequest& request, const DescribeDspmAssetDatabaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetDatabaseListRequest&;
    using Resp = DescribeDspmAssetDatabaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetDatabaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetDatabaseListOutcomeCallable CsipClient::DescribeDspmAssetDatabaseListCallable(const DescribeDspmAssetDatabaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetDatabaseListOutcome>>();
    DescribeDspmAssetDatabaseListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetDatabaseListRequest&,
        DescribeDspmAssetDatabaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetDatabasesOutcome CsipClient::DescribeDspmAssetDatabases(const DescribeDspmAssetDatabasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetDatabases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetDatabasesResponse rsp = DescribeDspmAssetDatabasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetDatabasesOutcome(rsp);
        else
            return DescribeDspmAssetDatabasesOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetDatabasesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetDatabasesAsync(const DescribeDspmAssetDatabasesRequest& request, const DescribeDspmAssetDatabasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetDatabasesRequest&;
    using Resp = DescribeDspmAssetDatabasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetDatabases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetDatabasesOutcomeCallable CsipClient::DescribeDspmAssetDatabasesCallable(const DescribeDspmAssetDatabasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetDatabasesOutcome>>();
    DescribeDspmAssetDatabasesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetDatabasesRequest&,
        DescribeDspmAssetDatabasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetFieldListOutcome CsipClient::DescribeDspmAssetFieldList(const DescribeDspmAssetFieldListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetFieldList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetFieldListResponse rsp = DescribeDspmAssetFieldListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetFieldListOutcome(rsp);
        else
            return DescribeDspmAssetFieldListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetFieldListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetFieldListAsync(const DescribeDspmAssetFieldListRequest& request, const DescribeDspmAssetFieldListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetFieldListRequest&;
    using Resp = DescribeDspmAssetFieldListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetFieldList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetFieldListOutcomeCallable CsipClient::DescribeDspmAssetFieldListCallable(const DescribeDspmAssetFieldListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetFieldListOutcome>>();
    DescribeDspmAssetFieldListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetFieldListRequest&,
        DescribeDspmAssetFieldListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetFieldSamplesOutcome CsipClient::DescribeDspmAssetFieldSamples(const DescribeDspmAssetFieldSamplesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetFieldSamples");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetFieldSamplesResponse rsp = DescribeDspmAssetFieldSamplesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetFieldSamplesOutcome(rsp);
        else
            return DescribeDspmAssetFieldSamplesOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetFieldSamplesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetFieldSamplesAsync(const DescribeDspmAssetFieldSamplesRequest& request, const DescribeDspmAssetFieldSamplesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetFieldSamplesRequest&;
    using Resp = DescribeDspmAssetFieldSamplesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetFieldSamples", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetFieldSamplesOutcomeCallable CsipClient::DescribeDspmAssetFieldSamplesCallable(const DescribeDspmAssetFieldSamplesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetFieldSamplesOutcome>>();
    DescribeDspmAssetFieldSamplesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetFieldSamplesRequest&,
        DescribeDspmAssetFieldSamplesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetIdentifyInfoListOutcome CsipClient::DescribeDspmAssetIdentifyInfoList(const DescribeDspmAssetIdentifyInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetIdentifyInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetIdentifyInfoListResponse rsp = DescribeDspmAssetIdentifyInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetIdentifyInfoListOutcome(rsp);
        else
            return DescribeDspmAssetIdentifyInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetIdentifyInfoListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetIdentifyInfoListAsync(const DescribeDspmAssetIdentifyInfoListRequest& request, const DescribeDspmAssetIdentifyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetIdentifyInfoListRequest&;
    using Resp = DescribeDspmAssetIdentifyInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetIdentifyInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetIdentifyInfoListOutcomeCallable CsipClient::DescribeDspmAssetIdentifyInfoListCallable(const DescribeDspmAssetIdentifyInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetIdentifyInfoListOutcome>>();
    DescribeDspmAssetIdentifyInfoListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetIdentifyInfoListRequest&,
        DescribeDspmAssetIdentifyInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetIdsOutcome CsipClient::DescribeDspmAssetIds(const DescribeDspmAssetIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetIdsResponse rsp = DescribeDspmAssetIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetIdsOutcome(rsp);
        else
            return DescribeDspmAssetIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetIdsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetIdsAsync(const DescribeDspmAssetIdsRequest& request, const DescribeDspmAssetIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetIdsRequest&;
    using Resp = DescribeDspmAssetIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetIdsOutcomeCallable CsipClient::DescribeDspmAssetIdsCallable(const DescribeDspmAssetIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetIdsOutcome>>();
    DescribeDspmAssetIdsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetIdsRequest&,
        DescribeDspmAssetIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetLoginCredentialOutcome CsipClient::DescribeDspmAssetLoginCredential(const DescribeDspmAssetLoginCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetLoginCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetLoginCredentialResponse rsp = DescribeDspmAssetLoginCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetLoginCredentialOutcome(rsp);
        else
            return DescribeDspmAssetLoginCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetLoginCredentialOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetLoginCredentialAsync(const DescribeDspmAssetLoginCredentialRequest& request, const DescribeDspmAssetLoginCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetLoginCredentialRequest&;
    using Resp = DescribeDspmAssetLoginCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetLoginCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetLoginCredentialOutcomeCallable CsipClient::DescribeDspmAssetLoginCredentialCallable(const DescribeDspmAssetLoginCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetLoginCredentialOutcome>>();
    DescribeDspmAssetLoginCredentialAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetLoginCredentialRequest&,
        DescribeDspmAssetLoginCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetSecurityAnalyseStatusOutcome CsipClient::DescribeDspmAssetSecurityAnalyseStatus(const DescribeDspmAssetSecurityAnalyseStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetSecurityAnalyseStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetSecurityAnalyseStatusResponse rsp = DescribeDspmAssetSecurityAnalyseStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetSecurityAnalyseStatusOutcome(rsp);
        else
            return DescribeDspmAssetSecurityAnalyseStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetSecurityAnalyseStatusOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetSecurityAnalyseStatusAsync(const DescribeDspmAssetSecurityAnalyseStatusRequest& request, const DescribeDspmAssetSecurityAnalyseStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetSecurityAnalyseStatusRequest&;
    using Resp = DescribeDspmAssetSecurityAnalyseStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetSecurityAnalyseStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetSecurityAnalyseStatusOutcomeCallable CsipClient::DescribeDspmAssetSecurityAnalyseStatusCallable(const DescribeDspmAssetSecurityAnalyseStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetSecurityAnalyseStatusOutcome>>();
    DescribeDspmAssetSecurityAnalyseStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetSecurityAnalyseStatusRequest&,
        DescribeDspmAssetSecurityAnalyseStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetSupportedPrivilegesOutcome CsipClient::DescribeDspmAssetSupportedPrivileges(const DescribeDspmAssetSupportedPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetSupportedPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetSupportedPrivilegesResponse rsp = DescribeDspmAssetSupportedPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetSupportedPrivilegesOutcome(rsp);
        else
            return DescribeDspmAssetSupportedPrivilegesOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetSupportedPrivilegesOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetSupportedPrivilegesAsync(const DescribeDspmAssetSupportedPrivilegesRequest& request, const DescribeDspmAssetSupportedPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetSupportedPrivilegesRequest&;
    using Resp = DescribeDspmAssetSupportedPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetSupportedPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetSupportedPrivilegesOutcomeCallable CsipClient::DescribeDspmAssetSupportedPrivilegesCallable(const DescribeDspmAssetSupportedPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetSupportedPrivilegesOutcome>>();
    DescribeDspmAssetSupportedPrivilegesAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetSupportedPrivilegesRequest&,
        DescribeDspmAssetSupportedPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetTableListOutcome CsipClient::DescribeDspmAssetTableList(const DescribeDspmAssetTableListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssetTableList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetTableListResponse rsp = DescribeDspmAssetTableListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetTableListOutcome(rsp);
        else
            return DescribeDspmAssetTableListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetTableListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetTableListAsync(const DescribeDspmAssetTableListRequest& request, const DescribeDspmAssetTableListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetTableListRequest&;
    using Resp = DescribeDspmAssetTableListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssetTableList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetTableListOutcomeCallable CsipClient::DescribeDspmAssetTableListCallable(const DescribeDspmAssetTableListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetTableListOutcome>>();
    DescribeDspmAssetTableListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetTableListRequest&,
        DescribeDspmAssetTableListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmAssetsOutcome CsipClient::DescribeDspmAssets(const DescribeDspmAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmAssetsResponse rsp = DescribeDspmAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmAssetsOutcome(rsp);
        else
            return DescribeDspmAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmAssetsAsync(const DescribeDspmAssetsRequest& request, const DescribeDspmAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmAssetsRequest&;
    using Resp = DescribeDspmAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmAssetsOutcomeCallable CsipClient::DescribeDspmAssetsCallable(const DescribeDspmAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmAssetsOutcome>>();
    DescribeDspmAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmAssetsRequest&,
        DescribeDspmAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmBackupLogListOutcome CsipClient::DescribeDspmBackupLogList(const DescribeDspmBackupLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmBackupLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmBackupLogListResponse rsp = DescribeDspmBackupLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmBackupLogListOutcome(rsp);
        else
            return DescribeDspmBackupLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmBackupLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmBackupLogListAsync(const DescribeDspmBackupLogListRequest& request, const DescribeDspmBackupLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmBackupLogListRequest&;
    using Resp = DescribeDspmBackupLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmBackupLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmBackupLogListOutcomeCallable CsipClient::DescribeDspmBackupLogListCallable(const DescribeDspmBackupLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmBackupLogListOutcome>>();
    DescribeDspmBackupLogListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmBackupLogListRequest&,
        DescribeDspmBackupLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmBackupSettingOutcome CsipClient::DescribeDspmBackupSetting(const DescribeDspmBackupSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmBackupSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmBackupSettingResponse rsp = DescribeDspmBackupSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmBackupSettingOutcome(rsp);
        else
            return DescribeDspmBackupSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmBackupSettingOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmBackupSettingAsync(const DescribeDspmBackupSettingRequest& request, const DescribeDspmBackupSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmBackupSettingRequest&;
    using Resp = DescribeDspmBackupSettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmBackupSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmBackupSettingOutcomeCallable CsipClient::DescribeDspmBackupSettingCallable(const DescribeDspmBackupSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmBackupSettingOutcome>>();
    DescribeDspmBackupSettingAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmBackupSettingRequest&,
        DescribeDspmBackupSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmDictionaryListOutcome CsipClient::DescribeDspmDictionaryList(const DescribeDspmDictionaryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmDictionaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmDictionaryListResponse rsp = DescribeDspmDictionaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmDictionaryListOutcome(rsp);
        else
            return DescribeDspmDictionaryListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmDictionaryListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmDictionaryListAsync(const DescribeDspmDictionaryListRequest& request, const DescribeDspmDictionaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmDictionaryListRequest&;
    using Resp = DescribeDspmDictionaryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmDictionaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmDictionaryListOutcomeCallable CsipClient::DescribeDspmDictionaryListCallable(const DescribeDspmDictionaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmDictionaryListOutcome>>();
    DescribeDspmDictionaryListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmDictionaryListRequest&,
        DescribeDspmDictionaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmExportTaskOutcome CsipClient::DescribeDspmExportTask(const DescribeDspmExportTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmExportTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmExportTaskResponse rsp = DescribeDspmExportTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmExportTaskOutcome(rsp);
        else
            return DescribeDspmExportTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmExportTaskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmExportTaskAsync(const DescribeDspmExportTaskRequest& request, const DescribeDspmExportTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmExportTaskRequest&;
    using Resp = DescribeDspmExportTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmExportTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmExportTaskOutcomeCallable CsipClient::DescribeDspmExportTaskCallable(const DescribeDspmExportTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmExportTaskOutcome>>();
    DescribeDspmExportTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmExportTaskRequest&,
        DescribeDspmExportTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyCategoryListOutcome CsipClient::DescribeDspmIdentifyCategoryList(const DescribeDspmIdentifyCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyCategoryListResponse rsp = DescribeDspmIdentifyCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyCategoryListOutcome(rsp);
        else
            return DescribeDspmIdentifyCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyCategoryListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyCategoryListAsync(const DescribeDspmIdentifyCategoryListRequest& request, const DescribeDspmIdentifyCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyCategoryListRequest&;
    using Resp = DescribeDspmIdentifyCategoryListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyCategoryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyCategoryListOutcomeCallable CsipClient::DescribeDspmIdentifyCategoryListCallable(const DescribeDspmIdentifyCategoryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyCategoryListOutcome>>();
    DescribeDspmIdentifyCategoryListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyCategoryListRequest&,
        DescribeDspmIdentifyCategoryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyComplianceCategoryRuleListOutcome CsipClient::DescribeDspmIdentifyComplianceCategoryRuleList(const DescribeDspmIdentifyComplianceCategoryRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyComplianceCategoryRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyComplianceCategoryRuleListResponse rsp = DescribeDspmIdentifyComplianceCategoryRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyComplianceCategoryRuleListOutcome(rsp);
        else
            return DescribeDspmIdentifyComplianceCategoryRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyComplianceCategoryRuleListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyComplianceCategoryRuleListAsync(const DescribeDspmIdentifyComplianceCategoryRuleListRequest& request, const DescribeDspmIdentifyComplianceCategoryRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyComplianceCategoryRuleListRequest&;
    using Resp = DescribeDspmIdentifyComplianceCategoryRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyComplianceCategoryRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyComplianceCategoryRuleListOutcomeCallable CsipClient::DescribeDspmIdentifyComplianceCategoryRuleListCallable(const DescribeDspmIdentifyComplianceCategoryRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyComplianceCategoryRuleListOutcome>>();
    DescribeDspmIdentifyComplianceCategoryRuleListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyComplianceCategoryRuleListRequest&,
        DescribeDspmIdentifyComplianceCategoryRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyComplianceGroupDetailOutcome CsipClient::DescribeDspmIdentifyComplianceGroupDetail(const DescribeDspmIdentifyComplianceGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyComplianceGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyComplianceGroupDetailResponse rsp = DescribeDspmIdentifyComplianceGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyComplianceGroupDetailOutcome(rsp);
        else
            return DescribeDspmIdentifyComplianceGroupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyComplianceGroupDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyComplianceGroupDetailAsync(const DescribeDspmIdentifyComplianceGroupDetailRequest& request, const DescribeDspmIdentifyComplianceGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyComplianceGroupDetailRequest&;
    using Resp = DescribeDspmIdentifyComplianceGroupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyComplianceGroupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyComplianceGroupDetailOutcomeCallable CsipClient::DescribeDspmIdentifyComplianceGroupDetailCallable(const DescribeDspmIdentifyComplianceGroupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyComplianceGroupDetailOutcome>>();
    DescribeDspmIdentifyComplianceGroupDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyComplianceGroupDetailRequest&,
        DescribeDspmIdentifyComplianceGroupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyComplianceGroupListOutcome CsipClient::DescribeDspmIdentifyComplianceGroupList(const DescribeDspmIdentifyComplianceGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyComplianceGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyComplianceGroupListResponse rsp = DescribeDspmIdentifyComplianceGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyComplianceGroupListOutcome(rsp);
        else
            return DescribeDspmIdentifyComplianceGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyComplianceGroupListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyComplianceGroupListAsync(const DescribeDspmIdentifyComplianceGroupListRequest& request, const DescribeDspmIdentifyComplianceGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyComplianceGroupListRequest&;
    using Resp = DescribeDspmIdentifyComplianceGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyComplianceGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyComplianceGroupListOutcomeCallable CsipClient::DescribeDspmIdentifyComplianceGroupListCallable(const DescribeDspmIdentifyComplianceGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyComplianceGroupListOutcome>>();
    DescribeDspmIdentifyComplianceGroupListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyComplianceGroupListRequest&,
        DescribeDspmIdentifyComplianceGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyDistributionStatisticsOutcome CsipClient::DescribeDspmIdentifyDistributionStatistics(const DescribeDspmIdentifyDistributionStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyDistributionStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyDistributionStatisticsResponse rsp = DescribeDspmIdentifyDistributionStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyDistributionStatisticsOutcome(rsp);
        else
            return DescribeDspmIdentifyDistributionStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyDistributionStatisticsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyDistributionStatisticsAsync(const DescribeDspmIdentifyDistributionStatisticsRequest& request, const DescribeDspmIdentifyDistributionStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyDistributionStatisticsRequest&;
    using Resp = DescribeDspmIdentifyDistributionStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyDistributionStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyDistributionStatisticsOutcomeCallable CsipClient::DescribeDspmIdentifyDistributionStatisticsCallable(const DescribeDspmIdentifyDistributionStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyDistributionStatisticsOutcome>>();
    DescribeDspmIdentifyDistributionStatisticsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyDistributionStatisticsRequest&,
        DescribeDspmIdentifyDistributionStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyIdListOutcome CsipClient::DescribeDspmIdentifyIdList(const DescribeDspmIdentifyIdListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyIdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyIdListResponse rsp = DescribeDspmIdentifyIdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyIdListOutcome(rsp);
        else
            return DescribeDspmIdentifyIdListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyIdListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyIdListAsync(const DescribeDspmIdentifyIdListRequest& request, const DescribeDspmIdentifyIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyIdListRequest&;
    using Resp = DescribeDspmIdentifyIdListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyIdList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyIdListOutcomeCallable CsipClient::DescribeDspmIdentifyIdListCallable(const DescribeDspmIdentifyIdListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyIdListOutcome>>();
    DescribeDspmIdentifyIdListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyIdListRequest&,
        DescribeDspmIdentifyIdListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyInfoOutcome CsipClient::DescribeDspmIdentifyInfo(const DescribeDspmIdentifyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyInfoResponse rsp = DescribeDspmIdentifyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyInfoOutcome(rsp);
        else
            return DescribeDspmIdentifyInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyInfoAsync(const DescribeDspmIdentifyInfoRequest& request, const DescribeDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyInfoRequest&;
    using Resp = DescribeDspmIdentifyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyInfoOutcomeCallable CsipClient::DescribeDspmIdentifyInfoCallable(const DescribeDspmIdentifyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyInfoOutcome>>();
    DescribeDspmIdentifyInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyInfoRequest&,
        DescribeDspmIdentifyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyInfoListOutcome CsipClient::DescribeDspmIdentifyInfoList(const DescribeDspmIdentifyInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyInfoListResponse rsp = DescribeDspmIdentifyInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyInfoListOutcome(rsp);
        else
            return DescribeDspmIdentifyInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyInfoListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyInfoListAsync(const DescribeDspmIdentifyInfoListRequest& request, const DescribeDspmIdentifyInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyInfoListRequest&;
    using Resp = DescribeDspmIdentifyInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyInfoListOutcomeCallable CsipClient::DescribeDspmIdentifyInfoListCallable(const DescribeDspmIdentifyInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyInfoListOutcome>>();
    DescribeDspmIdentifyInfoListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyInfoListRequest&,
        DescribeDspmIdentifyInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyLevelGroupListOutcome CsipClient::DescribeDspmIdentifyLevelGroupList(const DescribeDspmIdentifyLevelGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyLevelGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyLevelGroupListResponse rsp = DescribeDspmIdentifyLevelGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyLevelGroupListOutcome(rsp);
        else
            return DescribeDspmIdentifyLevelGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyLevelGroupListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyLevelGroupListAsync(const DescribeDspmIdentifyLevelGroupListRequest& request, const DescribeDspmIdentifyLevelGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyLevelGroupListRequest&;
    using Resp = DescribeDspmIdentifyLevelGroupListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyLevelGroupList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyLevelGroupListOutcomeCallable CsipClient::DescribeDspmIdentifyLevelGroupListCallable(const DescribeDspmIdentifyLevelGroupListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyLevelGroupListOutcome>>();
    DescribeDspmIdentifyLevelGroupListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyLevelGroupListRequest&,
        DescribeDspmIdentifyLevelGroupListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyRuleDetailOutcome CsipClient::DescribeDspmIdentifyRuleDetail(const DescribeDspmIdentifyRuleDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyRuleDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyRuleDetailResponse rsp = DescribeDspmIdentifyRuleDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyRuleDetailOutcome(rsp);
        else
            return DescribeDspmIdentifyRuleDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyRuleDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyRuleDetailAsync(const DescribeDspmIdentifyRuleDetailRequest& request, const DescribeDspmIdentifyRuleDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyRuleDetailRequest&;
    using Resp = DescribeDspmIdentifyRuleDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyRuleDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyRuleDetailOutcomeCallable CsipClient::DescribeDspmIdentifyRuleDetailCallable(const DescribeDspmIdentifyRuleDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyRuleDetailOutcome>>();
    DescribeDspmIdentifyRuleDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyRuleDetailRequest&,
        DescribeDspmIdentifyRuleDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyRuleListOutcome CsipClient::DescribeDspmIdentifyRuleList(const DescribeDspmIdentifyRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyRuleListResponse rsp = DescribeDspmIdentifyRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyRuleListOutcome(rsp);
        else
            return DescribeDspmIdentifyRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyRuleListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyRuleListAsync(const DescribeDspmIdentifyRuleListRequest& request, const DescribeDspmIdentifyRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyRuleListRequest&;
    using Resp = DescribeDspmIdentifyRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyRuleListOutcomeCallable CsipClient::DescribeDspmIdentifyRuleListCallable(const DescribeDspmIdentifyRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyRuleListOutcome>>();
    DescribeDspmIdentifyRuleListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyRuleListRequest&,
        DescribeDspmIdentifyRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmIdentifyRuleTestResultOutcome CsipClient::DescribeDspmIdentifyRuleTestResult(const DescribeDspmIdentifyRuleTestResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmIdentifyRuleTestResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmIdentifyRuleTestResultResponse rsp = DescribeDspmIdentifyRuleTestResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmIdentifyRuleTestResultOutcome(rsp);
        else
            return DescribeDspmIdentifyRuleTestResultOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmIdentifyRuleTestResultOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmIdentifyRuleTestResultAsync(const DescribeDspmIdentifyRuleTestResultRequest& request, const DescribeDspmIdentifyRuleTestResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmIdentifyRuleTestResultRequest&;
    using Resp = DescribeDspmIdentifyRuleTestResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmIdentifyRuleTestResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmIdentifyRuleTestResultOutcomeCallable CsipClient::DescribeDspmIdentifyRuleTestResultCallable(const DescribeDspmIdentifyRuleTestResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmIdentifyRuleTestResultOutcome>>();
    DescribeDspmIdentifyRuleTestResultAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmIdentifyRuleTestResultRequest&,
        DescribeDspmIdentifyRuleTestResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmLogListOutcome CsipClient::DescribeDspmLogList(const DescribeDspmLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmLogListResponse rsp = DescribeDspmLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmLogListOutcome(rsp);
        else
            return DescribeDspmLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmLogListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmLogListAsync(const DescribeDspmLogListRequest& request, const DescribeDspmLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmLogListRequest&;
    using Resp = DescribeDspmLogListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmLogList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmLogListOutcomeCallable CsipClient::DescribeDspmLogListCallable(const DescribeDspmLogListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmLogListOutcome>>();
    DescribeDspmLogListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmLogListRequest&,
        DescribeDspmLogListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmPayInfoOutcome CsipClient::DescribeDspmPayInfo(const DescribeDspmPayInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmPayInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmPayInfoResponse rsp = DescribeDspmPayInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmPayInfoOutcome(rsp);
        else
            return DescribeDspmPayInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmPayInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmPayInfoAsync(const DescribeDspmPayInfoRequest& request, const DescribeDspmPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmPayInfoRequest&;
    using Resp = DescribeDspmPayInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmPayInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmPayInfoOutcomeCallable CsipClient::DescribeDspmPayInfoCallable(const DescribeDspmPayInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmPayInfoOutcome>>();
    DescribeDspmPayInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmPayInfoRequest&,
        DescribeDspmPayInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmPersonApplyHistoryOutcome CsipClient::DescribeDspmPersonApplyHistory(const DescribeDspmPersonApplyHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmPersonApplyHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmPersonApplyHistoryResponse rsp = DescribeDspmPersonApplyHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmPersonApplyHistoryOutcome(rsp);
        else
            return DescribeDspmPersonApplyHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmPersonApplyHistoryOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmPersonApplyHistoryAsync(const DescribeDspmPersonApplyHistoryRequest& request, const DescribeDspmPersonApplyHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmPersonApplyHistoryRequest&;
    using Resp = DescribeDspmPersonApplyHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmPersonApplyHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmPersonApplyHistoryOutcomeCallable CsipClient::DescribeDspmPersonApplyHistoryCallable(const DescribeDspmPersonApplyHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmPersonApplyHistoryOutcome>>();
    DescribeDspmPersonApplyHistoryAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmPersonApplyHistoryRequest&,
        DescribeDspmPersonApplyHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmPersonalIdentifyListOutcome CsipClient::DescribeDspmPersonalIdentifyList(const DescribeDspmPersonalIdentifyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmPersonalIdentifyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmPersonalIdentifyListResponse rsp = DescribeDspmPersonalIdentifyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmPersonalIdentifyListOutcome(rsp);
        else
            return DescribeDspmPersonalIdentifyListOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmPersonalIdentifyListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmPersonalIdentifyListAsync(const DescribeDspmPersonalIdentifyListRequest& request, const DescribeDspmPersonalIdentifyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmPersonalIdentifyListRequest&;
    using Resp = DescribeDspmPersonalIdentifyListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmPersonalIdentifyList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmPersonalIdentifyListOutcomeCallable CsipClient::DescribeDspmPersonalIdentifyListCallable(const DescribeDspmPersonalIdentifyListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmPersonalIdentifyListOutcome>>();
    DescribeDspmPersonalIdentifyListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmPersonalIdentifyListRequest&,
        DescribeDspmPersonalIdentifyListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmRiskOutcome CsipClient::DescribeDspmRisk(const DescribeDspmRiskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmRiskResponse rsp = DescribeDspmRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmRiskOutcome(rsp);
        else
            return DescribeDspmRiskOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmRiskOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmRiskAsync(const DescribeDspmRiskRequest& request, const DescribeDspmRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmRiskRequest&;
    using Resp = DescribeDspmRiskResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmRisk", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmRiskOutcomeCallable CsipClient::DescribeDspmRiskCallable(const DescribeDspmRiskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmRiskOutcome>>();
    DescribeDspmRiskAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmRiskRequest&,
        DescribeDspmRiskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmRiskDetailOutcome CsipClient::DescribeDspmRiskDetail(const DescribeDspmRiskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmRiskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmRiskDetailResponse rsp = DescribeDspmRiskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmRiskDetailOutcome(rsp);
        else
            return DescribeDspmRiskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmRiskDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmRiskDetailAsync(const DescribeDspmRiskDetailRequest& request, const DescribeDspmRiskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmRiskDetailRequest&;
    using Resp = DescribeDspmRiskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmRiskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmRiskDetailOutcomeCallable CsipClient::DescribeDspmRiskDetailCallable(const DescribeDspmRiskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmRiskDetailOutcome>>();
    DescribeDspmRiskDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmRiskDetailRequest&,
        DescribeDspmRiskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmRiskStrategyOutcome CsipClient::DescribeDspmRiskStrategy(const DescribeDspmRiskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmRiskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmRiskStrategyResponse rsp = DescribeDspmRiskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmRiskStrategyOutcome(rsp);
        else
            return DescribeDspmRiskStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmRiskStrategyOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmRiskStrategyAsync(const DescribeDspmRiskStrategyRequest& request, const DescribeDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmRiskStrategyRequest&;
    using Resp = DescribeDspmRiskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmRiskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmRiskStrategyOutcomeCallable CsipClient::DescribeDspmRiskStrategyCallable(const DescribeDspmRiskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmRiskStrategyOutcome>>();
    DescribeDspmRiskStrategyAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmRiskStrategyRequest&,
        DescribeDspmRiskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmRiskStrategyGroupOutcome CsipClient::DescribeDspmRiskStrategyGroup(const DescribeDspmRiskStrategyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmRiskStrategyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmRiskStrategyGroupResponse rsp = DescribeDspmRiskStrategyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmRiskStrategyGroupOutcome(rsp);
        else
            return DescribeDspmRiskStrategyGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmRiskStrategyGroupOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmRiskStrategyGroupAsync(const DescribeDspmRiskStrategyGroupRequest& request, const DescribeDspmRiskStrategyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmRiskStrategyGroupRequest&;
    using Resp = DescribeDspmRiskStrategyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmRiskStrategyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmRiskStrategyGroupOutcomeCallable CsipClient::DescribeDspmRiskStrategyGroupCallable(const DescribeDspmRiskStrategyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmRiskStrategyGroupOutcome>>();
    DescribeDspmRiskStrategyGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmRiskStrategyGroupRequest&,
        DescribeDspmRiskStrategyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmRiskTendencyOutcome CsipClient::DescribeDspmRiskTendency(const DescribeDspmRiskTendencyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmRiskTendency");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmRiskTendencyResponse rsp = DescribeDspmRiskTendencyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmRiskTendencyOutcome(rsp);
        else
            return DescribeDspmRiskTendencyOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmRiskTendencyOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmRiskTendencyAsync(const DescribeDspmRiskTendencyRequest& request, const DescribeDspmRiskTendencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmRiskTendencyRequest&;
    using Resp = DescribeDspmRiskTendencyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmRiskTendency", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmRiskTendencyOutcomeCallable CsipClient::DescribeDspmRiskTendencyCallable(const DescribeDspmRiskTendencyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmRiskTendencyOutcome>>();
    DescribeDspmRiskTendencyAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmRiskTendencyRequest&,
        DescribeDspmRiskTendencyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmStatisticsOutcome CsipClient::DescribeDspmStatistics(const DescribeDspmStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmStatisticsResponse rsp = DescribeDspmStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmStatisticsOutcome(rsp);
        else
            return DescribeDspmStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmStatisticsOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmStatisticsAsync(const DescribeDspmStatisticsRequest& request, const DescribeDspmStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmStatisticsRequest&;
    using Resp = DescribeDspmStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmStatisticsOutcomeCallable CsipClient::DescribeDspmStatisticsCallable(const DescribeDspmStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmStatisticsOutcome>>();
    DescribeDspmStatisticsAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmStatisticsRequest&,
        DescribeDspmStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmSupportedAssetTypeOutcome CsipClient::DescribeDspmSupportedAssetType(const DescribeDspmSupportedAssetTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmSupportedAssetType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmSupportedAssetTypeResponse rsp = DescribeDspmSupportedAssetTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmSupportedAssetTypeOutcome(rsp);
        else
            return DescribeDspmSupportedAssetTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmSupportedAssetTypeOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmSupportedAssetTypeAsync(const DescribeDspmSupportedAssetTypeRequest& request, const DescribeDspmSupportedAssetTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmSupportedAssetTypeRequest&;
    using Resp = DescribeDspmSupportedAssetTypeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmSupportedAssetType", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmSupportedAssetTypeOutcomeCallable CsipClient::DescribeDspmSupportedAssetTypeCallable(const DescribeDspmSupportedAssetTypeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmSupportedAssetTypeOutcome>>();
    DescribeDspmSupportedAssetTypeAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmSupportedAssetTypeRequest&,
        DescribeDspmSupportedAssetTypeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmSyncAssetsStatusOutcome CsipClient::DescribeDspmSyncAssetsStatus(const DescribeDspmSyncAssetsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmSyncAssetsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmSyncAssetsStatusResponse rsp = DescribeDspmSyncAssetsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmSyncAssetsStatusOutcome(rsp);
        else
            return DescribeDspmSyncAssetsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmSyncAssetsStatusOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmSyncAssetsStatusAsync(const DescribeDspmSyncAssetsStatusRequest& request, const DescribeDspmSyncAssetsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmSyncAssetsStatusRequest&;
    using Resp = DescribeDspmSyncAssetsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmSyncAssetsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmSyncAssetsStatusOutcomeCallable CsipClient::DescribeDspmSyncAssetsStatusCallable(const DescribeDspmSyncAssetsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmSyncAssetsStatusOutcome>>();
    DescribeDspmSyncAssetsStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmSyncAssetsStatusRequest&,
        DescribeDspmSyncAssetsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmSyncUsersStatusOutcome CsipClient::DescribeDspmSyncUsersStatus(const DescribeDspmSyncUsersStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmSyncUsersStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmSyncUsersStatusResponse rsp = DescribeDspmSyncUsersStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmSyncUsersStatusOutcome(rsp);
        else
            return DescribeDspmSyncUsersStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmSyncUsersStatusOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmSyncUsersStatusAsync(const DescribeDspmSyncUsersStatusRequest& request, const DescribeDspmSyncUsersStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmSyncUsersStatusRequest&;
    using Resp = DescribeDspmSyncUsersStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmSyncUsersStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmSyncUsersStatusOutcomeCallable CsipClient::DescribeDspmSyncUsersStatusCallable(const DescribeDspmSyncUsersStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmSyncUsersStatusOutcome>>();
    DescribeDspmSyncUsersStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmSyncUsersStatusRequest&,
        DescribeDspmSyncUsersStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeDspmWhitelistStrategyOutcome CsipClient::DescribeDspmWhitelistStrategy(const DescribeDspmWhitelistStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDspmWhitelistStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDspmWhitelistStrategyResponse rsp = DescribeDspmWhitelistStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDspmWhitelistStrategyOutcome(rsp);
        else
            return DescribeDspmWhitelistStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeDspmWhitelistStrategyOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeDspmWhitelistStrategyAsync(const DescribeDspmWhitelistStrategyRequest& request, const DescribeDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDspmWhitelistStrategyRequest&;
    using Resp = DescribeDspmWhitelistStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDspmWhitelistStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeDspmWhitelistStrategyOutcomeCallable CsipClient::DescribeDspmWhitelistStrategyCallable(const DescribeDspmWhitelistStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDspmWhitelistStrategyOutcome>>();
    DescribeDspmWhitelistStrategyAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeDspmWhitelistStrategyRequest&,
        DescribeDspmWhitelistStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeEDRRuleListOutcome CsipClient::DescribeEDRRuleList(const DescribeEDRRuleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEDRRuleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEDRRuleListResponse rsp = DescribeEDRRuleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEDRRuleListOutcome(rsp);
        else
            return DescribeEDRRuleListOutcome(o.GetError());
    }
    else
    {
        return DescribeEDRRuleListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeEDRRuleListAsync(const DescribeEDRRuleListRequest& request, const DescribeEDRRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEDRRuleListRequest&;
    using Resp = DescribeEDRRuleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEDRRuleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeEDRRuleListOutcomeCallable CsipClient::DescribeEDRRuleListCallable(const DescribeEDRRuleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEDRRuleListOutcome>>();
    DescribeEDRRuleListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeEDRRuleListRequest&,
        DescribeEDRRuleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeEdrAlertInfoOutcome CsipClient::DescribeEdrAlertInfo(const DescribeEdrAlertInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdrAlertInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdrAlertInfoResponse rsp = DescribeEdrAlertInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdrAlertInfoOutcome(rsp);
        else
            return DescribeEdrAlertInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeEdrAlertInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeEdrAlertInfoAsync(const DescribeEdrAlertInfoRequest& request, const DescribeEdrAlertInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdrAlertInfoRequest&;
    using Resp = DescribeEdrAlertInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdrAlertInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeEdrAlertInfoOutcomeCallable CsipClient::DescribeEdrAlertInfoCallable(const DescribeEdrAlertInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdrAlertInfoOutcome>>();
    DescribeEdrAlertInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeEdrAlertInfoRequest&,
        DescribeEdrAlertInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeEdrAlertListOutcome CsipClient::DescribeEdrAlertList(const DescribeEdrAlertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdrAlertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdrAlertListResponse rsp = DescribeEdrAlertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdrAlertListOutcome(rsp);
        else
            return DescribeEdrAlertListOutcome(o.GetError());
    }
    else
    {
        return DescribeEdrAlertListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeEdrAlertListAsync(const DescribeEdrAlertListRequest& request, const DescribeEdrAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEdrAlertListRequest&;
    using Resp = DescribeEdrAlertListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEdrAlertList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeEdrAlertListOutcomeCallable CsipClient::DescribeEdrAlertListCallable(const DescribeEdrAlertListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEdrAlertListOutcome>>();
    DescribeEdrAlertListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeEdrAlertListRequest&,
        DescribeEdrAlertListOutcome resp,
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

CsipClient::DescribeIaCFileListOutcome CsipClient::DescribeIaCFileList(const DescribeIaCFileListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIaCFileList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIaCFileListResponse rsp = DescribeIaCFileListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIaCFileListOutcome(rsp);
        else
            return DescribeIaCFileListOutcome(o.GetError());
    }
    else
    {
        return DescribeIaCFileListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeIaCFileListAsync(const DescribeIaCFileListRequest& request, const DescribeIaCFileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIaCFileListRequest&;
    using Resp = DescribeIaCFileListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIaCFileList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeIaCFileListOutcomeCallable CsipClient::DescribeIaCFileListCallable(const DescribeIaCFileListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIaCFileListOutcome>>();
    DescribeIaCFileListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeIaCFileListRequest&,
        DescribeIaCFileListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeIaCFileOverviewOutcome CsipClient::DescribeIaCFileOverview(const DescribeIaCFileOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIaCFileOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIaCFileOverviewResponse rsp = DescribeIaCFileOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIaCFileOverviewOutcome(rsp);
        else
            return DescribeIaCFileOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeIaCFileOverviewOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeIaCFileOverviewAsync(const DescribeIaCFileOverviewRequest& request, const DescribeIaCFileOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIaCFileOverviewRequest&;
    using Resp = DescribeIaCFileOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIaCFileOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeIaCFileOverviewOutcomeCallable CsipClient::DescribeIaCFileOverviewCallable(const DescribeIaCFileOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIaCFileOverviewOutcome>>();
    DescribeIaCFileOverviewAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeIaCFileOverviewRequest&,
        DescribeIaCFileOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeIaCFileReportOutcome CsipClient::DescribeIaCFileReport(const DescribeIaCFileReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIaCFileReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIaCFileReportResponse rsp = DescribeIaCFileReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIaCFileReportOutcome(rsp);
        else
            return DescribeIaCFileReportOutcome(o.GetError());
    }
    else
    {
        return DescribeIaCFileReportOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeIaCFileReportAsync(const DescribeIaCFileReportRequest& request, const DescribeIaCFileReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIaCFileReportRequest&;
    using Resp = DescribeIaCFileReportResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIaCFileReport", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeIaCFileReportOutcomeCallable CsipClient::DescribeIaCFileReportCallable(const DescribeIaCFileReportRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIaCFileReportOutcome>>();
    DescribeIaCFileReportAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeIaCFileReportRequest&,
        DescribeIaCFileReportOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeIaCTokenListOutcome CsipClient::DescribeIaCTokenList(const DescribeIaCTokenListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIaCTokenList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIaCTokenListResponse rsp = DescribeIaCTokenListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIaCTokenListOutcome(rsp);
        else
            return DescribeIaCTokenListOutcome(o.GetError());
    }
    else
    {
        return DescribeIaCTokenListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeIaCTokenListAsync(const DescribeIaCTokenListRequest& request, const DescribeIaCTokenListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIaCTokenListRequest&;
    using Resp = DescribeIaCTokenListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIaCTokenList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeIaCTokenListOutcomeCallable CsipClient::DescribeIaCTokenListCallable(const DescribeIaCTokenListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIaCTokenListOutcome>>();
    DescribeIaCTokenListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeIaCTokenListRequest&,
        DescribeIaCTokenListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeIpInvokeRecordOutcome CsipClient::DescribeIpInvokeRecord(const DescribeIpInvokeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpInvokeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpInvokeRecordResponse rsp = DescribeIpInvokeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpInvokeRecordOutcome(rsp);
        else
            return DescribeIpInvokeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeIpInvokeRecordOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeIpInvokeRecordAsync(const DescribeIpInvokeRecordRequest& request, const DescribeIpInvokeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpInvokeRecordRequest&;
    using Resp = DescribeIpInvokeRecordResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpInvokeRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeIpInvokeRecordOutcomeCallable CsipClient::DescribeIpInvokeRecordCallable(const DescribeIpInvokeRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpInvokeRecordOutcome>>();
    DescribeIpInvokeRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeIpInvokeRecordRequest&,
        DescribeIpInvokeRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeIpInvokeRecordDetailOutcome CsipClient::DescribeIpInvokeRecordDetail(const DescribeIpInvokeRecordDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpInvokeRecordDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpInvokeRecordDetailResponse rsp = DescribeIpInvokeRecordDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpInvokeRecordDetailOutcome(rsp);
        else
            return DescribeIpInvokeRecordDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeIpInvokeRecordDetailOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeIpInvokeRecordDetailAsync(const DescribeIpInvokeRecordDetailRequest& request, const DescribeIpInvokeRecordDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIpInvokeRecordDetailRequest&;
    using Resp = DescribeIpInvokeRecordDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIpInvokeRecordDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeIpInvokeRecordDetailOutcomeCallable CsipClient::DescribeIpInvokeRecordDetailCallable(const DescribeIpInvokeRecordDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIpInvokeRecordDetailOutcome>>();
    DescribeIpInvokeRecordDetailAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeIpInvokeRecordDetailRequest&,
        DescribeIpInvokeRecordDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeKeySandboxCredentialOutcome CsipClient::DescribeKeySandboxCredential(const DescribeKeySandboxCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeySandboxCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeySandboxCredentialResponse rsp = DescribeKeySandboxCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeySandboxCredentialOutcome(rsp);
        else
            return DescribeKeySandboxCredentialOutcome(o.GetError());
    }
    else
    {
        return DescribeKeySandboxCredentialOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeKeySandboxCredentialAsync(const DescribeKeySandboxCredentialRequest& request, const DescribeKeySandboxCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKeySandboxCredentialRequest&;
    using Resp = DescribeKeySandboxCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeySandboxCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeKeySandboxCredentialOutcomeCallable CsipClient::DescribeKeySandboxCredentialCallable(const DescribeKeySandboxCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeySandboxCredentialOutcome>>();
    DescribeKeySandboxCredentialAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeKeySandboxCredentialRequest&,
        DescribeKeySandboxCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeKeySandboxCredentialListOutcome CsipClient::DescribeKeySandboxCredentialList(const DescribeKeySandboxCredentialListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKeySandboxCredentialList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKeySandboxCredentialListResponse rsp = DescribeKeySandboxCredentialListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKeySandboxCredentialListOutcome(rsp);
        else
            return DescribeKeySandboxCredentialListOutcome(o.GetError());
    }
    else
    {
        return DescribeKeySandboxCredentialListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeKeySandboxCredentialListAsync(const DescribeKeySandboxCredentialListRequest& request, const DescribeKeySandboxCredentialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKeySandboxCredentialListRequest&;
    using Resp = DescribeKeySandboxCredentialListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKeySandboxCredentialList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeKeySandboxCredentialListOutcomeCallable CsipClient::DescribeKeySandboxCredentialListCallable(const DescribeKeySandboxCredentialListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKeySandboxCredentialListOutcome>>();
    DescribeKeySandboxCredentialListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeKeySandboxCredentialListRequest&,
        DescribeKeySandboxCredentialListOutcome resp,
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

CsipClient::DescribeNotifyAssetConfigOutcome CsipClient::DescribeNotifyAssetConfig(const DescribeNotifyAssetConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotifyAssetConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotifyAssetConfigResponse rsp = DescribeNotifyAssetConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotifyAssetConfigOutcome(rsp);
        else
            return DescribeNotifyAssetConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeNotifyAssetConfigOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeNotifyAssetConfigAsync(const DescribeNotifyAssetConfigRequest& request, const DescribeNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotifyAssetConfigRequest&;
    using Resp = DescribeNotifyAssetConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotifyAssetConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeNotifyAssetConfigOutcomeCallable CsipClient::DescribeNotifyAssetConfigCallable(const DescribeNotifyAssetConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotifyAssetConfigOutcome>>();
    DescribeNotifyAssetConfigAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeNotifyAssetConfigRequest&,
        DescribeNotifyAssetConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeNotifySettingOutcome CsipClient::DescribeNotifySetting(const DescribeNotifySettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotifySetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotifySettingResponse rsp = DescribeNotifySettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotifySettingOutcome(rsp);
        else
            return DescribeNotifySettingOutcome(o.GetError());
    }
    else
    {
        return DescribeNotifySettingOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeNotifySettingAsync(const DescribeNotifySettingRequest& request, const DescribeNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotifySettingRequest&;
    using Resp = DescribeNotifySettingResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotifySetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeNotifySettingOutcomeCallable CsipClient::DescribeNotifySettingCallable(const DescribeNotifySettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotifySettingOutcome>>();
    DescribeNotifySettingAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeNotifySettingRequest&,
        DescribeNotifySettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeNotifySettingAlertOutcome CsipClient::DescribeNotifySettingAlert(const DescribeNotifySettingAlertRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNotifySettingAlert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNotifySettingAlertResponse rsp = DescribeNotifySettingAlertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNotifySettingAlertOutcome(rsp);
        else
            return DescribeNotifySettingAlertOutcome(o.GetError());
    }
    else
    {
        return DescribeNotifySettingAlertOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeNotifySettingAlertAsync(const DescribeNotifySettingAlertRequest& request, const DescribeNotifySettingAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNotifySettingAlertRequest&;
    using Resp = DescribeNotifySettingAlertResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNotifySettingAlert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeNotifySettingAlertOutcomeCallable CsipClient::DescribeNotifySettingAlertCallable(const DescribeNotifySettingAlertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNotifySettingAlertOutcome>>();
    DescribeNotifySettingAlertAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeNotifySettingAlertRequest&,
        DescribeNotifySettingAlertOutcome resp,
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

CsipClient::DescribePolicyHitDataOutcome CsipClient::DescribePolicyHitData(const DescribePolicyHitDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePolicyHitData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePolicyHitDataResponse rsp = DescribePolicyHitDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePolicyHitDataOutcome(rsp);
        else
            return DescribePolicyHitDataOutcome(o.GetError());
    }
    else
    {
        return DescribePolicyHitDataOutcome(outcome.GetError());
    }
}

void CsipClient::DescribePolicyHitDataAsync(const DescribePolicyHitDataRequest& request, const DescribePolicyHitDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePolicyHitDataRequest&;
    using Resp = DescribePolicyHitDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePolicyHitData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribePolicyHitDataOutcomeCallable CsipClient::DescribePolicyHitDataCallable(const DescribePolicyHitDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePolicyHitDataOutcome>>();
    DescribePolicyHitDataAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribePolicyHitDataRequest&,
        DescribePolicyHitDataOutcome resp,
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

CsipClient::DescribeRiskBucketListOutcome CsipClient::DescribeRiskBucketList(const DescribeRiskBucketListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskBucketList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskBucketListResponse rsp = DescribeRiskBucketListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskBucketListOutcome(rsp);
        else
            return DescribeRiskBucketListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskBucketListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskBucketListAsync(const DescribeRiskBucketListRequest& request, const DescribeRiskBucketListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskBucketListRequest&;
    using Resp = DescribeRiskBucketListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskBucketList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskBucketListOutcomeCallable CsipClient::DescribeRiskBucketListCallable(const DescribeRiskBucketListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskBucketListOutcome>>();
    DescribeRiskBucketListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskBucketListRequest&,
        DescribeRiskBucketListOutcome resp,
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

CsipClient::DescribeRiskItemListOutcome CsipClient::DescribeRiskItemList(const DescribeRiskItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskItemListResponse rsp = DescribeRiskItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskItemListOutcome(rsp);
        else
            return DescribeRiskItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskItemListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskItemListAsync(const DescribeRiskItemListRequest& request, const DescribeRiskItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskItemListRequest&;
    using Resp = DescribeRiskItemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskItemListOutcomeCallable CsipClient::DescribeRiskItemListCallable(const DescribeRiskItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskItemListOutcome>>();
    DescribeRiskItemListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskItemListRequest&,
        DescribeRiskItemListOutcome resp,
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

CsipClient::DescribeRiskTrendDataOutcome CsipClient::DescribeRiskTrendData(const DescribeRiskTrendDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRiskTrendData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRiskTrendDataResponse rsp = DescribeRiskTrendDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRiskTrendDataOutcome(rsp);
        else
            return DescribeRiskTrendDataOutcome(o.GetError());
    }
    else
    {
        return DescribeRiskTrendDataOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeRiskTrendDataAsync(const DescribeRiskTrendDataRequest& request, const DescribeRiskTrendDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRiskTrendDataRequest&;
    using Resp = DescribeRiskTrendDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRiskTrendData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeRiskTrendDataOutcomeCallable CsipClient::DescribeRiskTrendDataCallable(const DescribeRiskTrendDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRiskTrendDataOutcome>>();
    DescribeRiskTrendDataAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeRiskTrendDataRequest&,
        DescribeRiskTrendDataOutcome resp,
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

CsipClient::DescribeSkillScanPayInfoOutcome CsipClient::DescribeSkillScanPayInfo(const DescribeSkillScanPayInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillScanPayInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillScanPayInfoResponse rsp = DescribeSkillScanPayInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillScanPayInfoOutcome(rsp);
        else
            return DescribeSkillScanPayInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillScanPayInfoOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSkillScanPayInfoAsync(const DescribeSkillScanPayInfoRequest& request, const DescribeSkillScanPayInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillScanPayInfoRequest&;
    using Resp = DescribeSkillScanPayInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillScanPayInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeSkillScanPayInfoOutcomeCallable CsipClient::DescribeSkillScanPayInfoCallable(const DescribeSkillScanPayInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillScanPayInfoOutcome>>();
    DescribeSkillScanPayInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeSkillScanPayInfoRequest&,
        DescribeSkillScanPayInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::DescribeSkillScanResultOutcome CsipClient::DescribeSkillScanResult(const DescribeSkillScanResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSkillScanResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSkillScanResultResponse rsp = DescribeSkillScanResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSkillScanResultOutcome(rsp);
        else
            return DescribeSkillScanResultOutcome(o.GetError());
    }
    else
    {
        return DescribeSkillScanResultOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeSkillScanResultAsync(const DescribeSkillScanResultRequest& request, const DescribeSkillScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSkillScanResultRequest&;
    using Resp = DescribeSkillScanResultResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSkillScanResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeSkillScanResultOutcomeCallable CsipClient::DescribeSkillScanResultCallable(const DescribeSkillScanResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSkillScanResultOutcome>>();
    DescribeSkillScanResultAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeSkillScanResultRequest&,
        DescribeSkillScanResultOutcome resp,
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

CsipClient::DescribeUserDspmInfoListOutcome CsipClient::DescribeUserDspmInfoList(const DescribeUserDspmInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDspmInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDspmInfoListResponse rsp = DescribeUserDspmInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDspmInfoListOutcome(rsp);
        else
            return DescribeUserDspmInfoListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDspmInfoListOutcome(outcome.GetError());
    }
}

void CsipClient::DescribeUserDspmInfoListAsync(const DescribeUserDspmInfoListRequest& request, const DescribeUserDspmInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserDspmInfoListRequest&;
    using Resp = DescribeUserDspmInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserDspmInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DescribeUserDspmInfoListOutcomeCallable CsipClient::DescribeUserDspmInfoListCallable(const DescribeUserDspmInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserDspmInfoListOutcome>>();
    DescribeUserDspmInfoListAsync(
    request,
    [prom](
        const CsipClient*,
        const DescribeUserDspmInfoListRequest&,
        DescribeUserDspmInfoListOutcome resp,
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

CsipClient::DownloadDspmExportLogOutcome CsipClient::DownloadDspmExportLog(const DownloadDspmExportLogRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadDspmExportLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadDspmExportLogResponse rsp = DownloadDspmExportLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadDspmExportLogOutcome(rsp);
        else
            return DownloadDspmExportLogOutcome(o.GetError());
    }
    else
    {
        return DownloadDspmExportLogOutcome(outcome.GetError());
    }
}

void CsipClient::DownloadDspmExportLogAsync(const DownloadDspmExportLogRequest& request, const DownloadDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadDspmExportLogRequest&;
    using Resp = DownloadDspmExportLogResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadDspmExportLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::DownloadDspmExportLogOutcomeCallable CsipClient::DownloadDspmExportLogCallable(const DownloadDspmExportLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadDspmExportLogOutcome>>();
    DownloadDspmExportLogAsync(
    request,
    [prom](
        const CsipClient*,
        const DownloadDspmExportLogRequest&,
        DownloadDspmExportLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyAILinkSettingOutcome CsipClient::ModifyAILinkSetting(const ModifyAILinkSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAILinkSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAILinkSettingResponse rsp = ModifyAILinkSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAILinkSettingOutcome(rsp);
        else
            return ModifyAILinkSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyAILinkSettingOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyAILinkSettingAsync(const ModifyAILinkSettingRequest& request, const ModifyAILinkSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAILinkSettingRequest&;
    using Resp = ModifyAILinkSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAILinkSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyAILinkSettingOutcomeCallable CsipClient::ModifyAILinkSettingCallable(const ModifyAILinkSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAILinkSettingOutcome>>();
    ModifyAILinkSettingAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyAILinkSettingRequest&,
        ModifyAILinkSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyAlarmRiskStatusOutcome CsipClient::ModifyAlarmRiskStatus(const ModifyAlarmRiskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAlarmRiskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAlarmRiskStatusResponse rsp = ModifyAlarmRiskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAlarmRiskStatusOutcome(rsp);
        else
            return ModifyAlarmRiskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyAlarmRiskStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyAlarmRiskStatusAsync(const ModifyAlarmRiskStatusRequest& request, const ModifyAlarmRiskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAlarmRiskStatusRequest&;
    using Resp = ModifyAlarmRiskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAlarmRiskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyAlarmRiskStatusOutcomeCallable CsipClient::ModifyAlarmRiskStatusCallable(const ModifyAlarmRiskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAlarmRiskStatusOutcome>>();
    ModifyAlarmRiskStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyAlarmRiskStatusRequest&,
        ModifyAlarmRiskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyCosAuditBucketMonitorStatusOutcome CsipClient::ModifyCosAuditBucketMonitorStatus(const ModifyCosAuditBucketMonitorStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosAuditBucketMonitorStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosAuditBucketMonitorStatusResponse rsp = ModifyCosAuditBucketMonitorStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosAuditBucketMonitorStatusOutcome(rsp);
        else
            return ModifyCosAuditBucketMonitorStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCosAuditBucketMonitorStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyCosAuditBucketMonitorStatusAsync(const ModifyCosAuditBucketMonitorStatusRequest& request, const ModifyCosAuditBucketMonitorStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCosAuditBucketMonitorStatusRequest&;
    using Resp = ModifyCosAuditBucketMonitorStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCosAuditBucketMonitorStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyCosAuditBucketMonitorStatusOutcomeCallable CsipClient::ModifyCosAuditBucketMonitorStatusCallable(const ModifyCosAuditBucketMonitorStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCosAuditBucketMonitorStatusOutcome>>();
    ModifyCosAuditBucketMonitorStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyCosAuditBucketMonitorStatusRequest&,
        ModifyCosAuditBucketMonitorStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyCosAuditMonitorAccountOutcome CsipClient::ModifyCosAuditMonitorAccount(const ModifyCosAuditMonitorAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosAuditMonitorAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosAuditMonitorAccountResponse rsp = ModifyCosAuditMonitorAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosAuditMonitorAccountOutcome(rsp);
        else
            return ModifyCosAuditMonitorAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyCosAuditMonitorAccountOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyCosAuditMonitorAccountAsync(const ModifyCosAuditMonitorAccountRequest& request, const ModifyCosAuditMonitorAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCosAuditMonitorAccountRequest&;
    using Resp = ModifyCosAuditMonitorAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCosAuditMonitorAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyCosAuditMonitorAccountOutcomeCallable CsipClient::ModifyCosAuditMonitorAccountCallable(const ModifyCosAuditMonitorAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCosAuditMonitorAccountOutcome>>();
    ModifyCosAuditMonitorAccountAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyCosAuditMonitorAccountRequest&,
        ModifyCosAuditMonitorAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyCosAuditObjectIdentifyStatusOutcome CsipClient::ModifyCosAuditObjectIdentifyStatus(const ModifyCosAuditObjectIdentifyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosAuditObjectIdentifyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosAuditObjectIdentifyStatusResponse rsp = ModifyCosAuditObjectIdentifyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosAuditObjectIdentifyStatusOutcome(rsp);
        else
            return ModifyCosAuditObjectIdentifyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyCosAuditObjectIdentifyStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyCosAuditObjectIdentifyStatusAsync(const ModifyCosAuditObjectIdentifyStatusRequest& request, const ModifyCosAuditObjectIdentifyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCosAuditObjectIdentifyStatusRequest&;
    using Resp = ModifyCosAuditObjectIdentifyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCosAuditObjectIdentifyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyCosAuditObjectIdentifyStatusOutcomeCallable CsipClient::ModifyCosAuditObjectIdentifyStatusCallable(const ModifyCosAuditObjectIdentifyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCosAuditObjectIdentifyStatusOutcome>>();
    ModifyCosAuditObjectIdentifyStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyCosAuditObjectIdentifyStatusRequest&,
        ModifyCosAuditObjectIdentifyStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyCosAuditObjectSampleRateOutcome CsipClient::ModifyCosAuditObjectSampleRate(const ModifyCosAuditObjectSampleRateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosAuditObjectSampleRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosAuditObjectSampleRateResponse rsp = ModifyCosAuditObjectSampleRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosAuditObjectSampleRateOutcome(rsp);
        else
            return ModifyCosAuditObjectSampleRateOutcome(o.GetError());
    }
    else
    {
        return ModifyCosAuditObjectSampleRateOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyCosAuditObjectSampleRateAsync(const ModifyCosAuditObjectSampleRateRequest& request, const ModifyCosAuditObjectSampleRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCosAuditObjectSampleRateRequest&;
    using Resp = ModifyCosAuditObjectSampleRateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCosAuditObjectSampleRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyCosAuditObjectSampleRateOutcomeCallable CsipClient::ModifyCosAuditObjectSampleRateCallable(const ModifyCosAuditObjectSampleRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCosAuditObjectSampleRateOutcome>>();
    ModifyCosAuditObjectSampleRateAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyCosAuditObjectSampleRateRequest&,
        ModifyCosAuditObjectSampleRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyCosMarkInfoOutcome CsipClient::ModifyCosMarkInfo(const ModifyCosMarkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCosMarkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCosMarkInfoResponse rsp = ModifyCosMarkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCosMarkInfoOutcome(rsp);
        else
            return ModifyCosMarkInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyCosMarkInfoOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyCosMarkInfoAsync(const ModifyCosMarkInfoRequest& request, const ModifyCosMarkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCosMarkInfoRequest&;
    using Resp = ModifyCosMarkInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCosMarkInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyCosMarkInfoOutcomeCallable CsipClient::ModifyCosMarkInfoCallable(const ModifyCosMarkInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCosMarkInfoOutcome>>();
    ModifyCosMarkInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyCosMarkInfoRequest&,
        ModifyCosMarkInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAccessRecordOutcome CsipClient::ModifyDspmAccessRecord(const ModifyDspmAccessRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAccessRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAccessRecordResponse rsp = ModifyDspmAccessRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAccessRecordOutcome(rsp);
        else
            return ModifyDspmAccessRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAccessRecordOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAccessRecordAsync(const ModifyDspmAccessRecordRequest& request, const ModifyDspmAccessRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAccessRecordRequest&;
    using Resp = ModifyDspmAccessRecordResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAccessRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAccessRecordOutcomeCallable CsipClient::ModifyDspmAccessRecordCallable(const ModifyDspmAccessRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAccessRecordOutcome>>();
    ModifyDspmAccessRecordAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAccessRecordRequest&,
        ModifyDspmAccessRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmApplyingIdentifyComplianceGroupOutcome CsipClient::ModifyDspmApplyingIdentifyComplianceGroup(const ModifyDspmApplyingIdentifyComplianceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmApplyingIdentifyComplianceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmApplyingIdentifyComplianceGroupResponse rsp = ModifyDspmApplyingIdentifyComplianceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmApplyingIdentifyComplianceGroupOutcome(rsp);
        else
            return ModifyDspmApplyingIdentifyComplianceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmApplyingIdentifyComplianceGroupOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmApplyingIdentifyComplianceGroupAsync(const ModifyDspmApplyingIdentifyComplianceGroupRequest& request, const ModifyDspmApplyingIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmApplyingIdentifyComplianceGroupRequest&;
    using Resp = ModifyDspmApplyingIdentifyComplianceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmApplyingIdentifyComplianceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmApplyingIdentifyComplianceGroupOutcomeCallable CsipClient::ModifyDspmApplyingIdentifyComplianceGroupCallable(const ModifyDspmApplyingIdentifyComplianceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmApplyingIdentifyComplianceGroupOutcome>>();
    ModifyDspmApplyingIdentifyComplianceGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmApplyingIdentifyComplianceGroupRequest&,
        ModifyDspmApplyingIdentifyComplianceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmApproveStatusOutcome CsipClient::ModifyDspmApproveStatus(const ModifyDspmApproveStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmApproveStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmApproveStatusResponse rsp = ModifyDspmApproveStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmApproveStatusOutcome(rsp);
        else
            return ModifyDspmApproveStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmApproveStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmApproveStatusAsync(const ModifyDspmApproveStatusRequest& request, const ModifyDspmApproveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmApproveStatusRequest&;
    using Resp = ModifyDspmApproveStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmApproveStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmApproveStatusOutcomeCallable CsipClient::ModifyDspmApproveStatusCallable(const ModifyDspmApproveStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmApproveStatusOutcome>>();
    ModifyDspmApproveStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmApproveStatusRequest&,
        ModifyDspmApproveStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAssetAccountOutcome CsipClient::ModifyDspmAssetAccount(const ModifyDspmAssetAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAssetAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAssetAccountResponse rsp = ModifyDspmAssetAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAssetAccountOutcome(rsp);
        else
            return ModifyDspmAssetAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAssetAccountOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAssetAccountAsync(const ModifyDspmAssetAccountRequest& request, const ModifyDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAssetAccountRequest&;
    using Resp = ModifyDspmAssetAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAssetAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAssetAccountOutcomeCallable CsipClient::ModifyDspmAssetAccountCallable(const ModifyDspmAssetAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAssetAccountOutcome>>();
    ModifyDspmAssetAccountAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAssetAccountRequest&,
        ModifyDspmAssetAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAssetAccountPrivilegesOutcome CsipClient::ModifyDspmAssetAccountPrivileges(const ModifyDspmAssetAccountPrivilegesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAssetAccountPrivileges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAssetAccountPrivilegesResponse rsp = ModifyDspmAssetAccountPrivilegesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAssetAccountPrivilegesOutcome(rsp);
        else
            return ModifyDspmAssetAccountPrivilegesOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAssetAccountPrivilegesOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAssetAccountPrivilegesAsync(const ModifyDspmAssetAccountPrivilegesRequest& request, const ModifyDspmAssetAccountPrivilegesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAssetAccountPrivilegesRequest&;
    using Resp = ModifyDspmAssetAccountPrivilegesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAssetAccountPrivileges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAssetAccountPrivilegesOutcomeCallable CsipClient::ModifyDspmAssetAccountPrivilegesCallable(const ModifyDspmAssetAccountPrivilegesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAssetAccountPrivilegesOutcome>>();
    ModifyDspmAssetAccountPrivilegesAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAssetAccountPrivilegesRequest&,
        ModifyDspmAssetAccountPrivilegesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAssetDataScanTaskOutcome CsipClient::ModifyDspmAssetDataScanTask(const ModifyDspmAssetDataScanTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAssetDataScanTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAssetDataScanTaskResponse rsp = ModifyDspmAssetDataScanTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAssetDataScanTaskOutcome(rsp);
        else
            return ModifyDspmAssetDataScanTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAssetDataScanTaskOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAssetDataScanTaskAsync(const ModifyDspmAssetDataScanTaskRequest& request, const ModifyDspmAssetDataScanTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAssetDataScanTaskRequest&;
    using Resp = ModifyDspmAssetDataScanTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAssetDataScanTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAssetDataScanTaskOutcomeCallable CsipClient::ModifyDspmAssetDataScanTaskCallable(const ModifyDspmAssetDataScanTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAssetDataScanTaskOutcome>>();
    ModifyDspmAssetDataScanTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAssetDataScanTaskRequest&,
        ModifyDspmAssetDataScanTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAssetDataScanTaskStatusOutcome CsipClient::ModifyDspmAssetDataScanTaskStatus(const ModifyDspmAssetDataScanTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAssetDataScanTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAssetDataScanTaskStatusResponse rsp = ModifyDspmAssetDataScanTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAssetDataScanTaskStatusOutcome(rsp);
        else
            return ModifyDspmAssetDataScanTaskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAssetDataScanTaskStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAssetDataScanTaskStatusAsync(const ModifyDspmAssetDataScanTaskStatusRequest& request, const ModifyDspmAssetDataScanTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAssetDataScanTaskStatusRequest&;
    using Resp = ModifyDspmAssetDataScanTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAssetDataScanTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAssetDataScanTaskStatusOutcomeCallable CsipClient::ModifyDspmAssetDataScanTaskStatusCallable(const ModifyDspmAssetDataScanTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAssetDataScanTaskStatusOutcome>>();
    ModifyDspmAssetDataScanTaskStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAssetDataScanTaskStatusRequest&,
        ModifyDspmAssetDataScanTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAssetLogDeliverySwitchOutcome CsipClient::ModifyDspmAssetLogDeliverySwitch(const ModifyDspmAssetLogDeliverySwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAssetLogDeliverySwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAssetLogDeliverySwitchResponse rsp = ModifyDspmAssetLogDeliverySwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAssetLogDeliverySwitchOutcome(rsp);
        else
            return ModifyDspmAssetLogDeliverySwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAssetLogDeliverySwitchOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAssetLogDeliverySwitchAsync(const ModifyDspmAssetLogDeliverySwitchRequest& request, const ModifyDspmAssetLogDeliverySwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAssetLogDeliverySwitchRequest&;
    using Resp = ModifyDspmAssetLogDeliverySwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAssetLogDeliverySwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAssetLogDeliverySwitchOutcomeCallable CsipClient::ModifyDspmAssetLogDeliverySwitchCallable(const ModifyDspmAssetLogDeliverySwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAssetLogDeliverySwitchOutcome>>();
    ModifyDspmAssetLogDeliverySwitchAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAssetLogDeliverySwitchRequest&,
        ModifyDspmAssetLogDeliverySwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmAssetSecurityAnalysisSwitchOutcome CsipClient::ModifyDspmAssetSecurityAnalysisSwitch(const ModifyDspmAssetSecurityAnalysisSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmAssetSecurityAnalysisSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmAssetSecurityAnalysisSwitchResponse rsp = ModifyDspmAssetSecurityAnalysisSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmAssetSecurityAnalysisSwitchOutcome(rsp);
        else
            return ModifyDspmAssetSecurityAnalysisSwitchOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmAssetSecurityAnalysisSwitchOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmAssetSecurityAnalysisSwitchAsync(const ModifyDspmAssetSecurityAnalysisSwitchRequest& request, const ModifyDspmAssetSecurityAnalysisSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmAssetSecurityAnalysisSwitchRequest&;
    using Resp = ModifyDspmAssetSecurityAnalysisSwitchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmAssetSecurityAnalysisSwitch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmAssetSecurityAnalysisSwitchOutcomeCallable CsipClient::ModifyDspmAssetSecurityAnalysisSwitchCallable(const ModifyDspmAssetSecurityAnalysisSwitchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmAssetSecurityAnalysisSwitchOutcome>>();
    ModifyDspmAssetSecurityAnalysisSwitchAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmAssetSecurityAnalysisSwitchRequest&,
        ModifyDspmAssetSecurityAnalysisSwitchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmBackupSettingOutcome CsipClient::ModifyDspmBackupSetting(const ModifyDspmBackupSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmBackupSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmBackupSettingResponse rsp = ModifyDspmBackupSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmBackupSettingOutcome(rsp);
        else
            return ModifyDspmBackupSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmBackupSettingOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmBackupSettingAsync(const ModifyDspmBackupSettingRequest& request, const ModifyDspmBackupSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmBackupSettingRequest&;
    using Resp = ModifyDspmBackupSettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmBackupSetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmBackupSettingOutcomeCallable CsipClient::ModifyDspmBackupSettingCallable(const ModifyDspmBackupSettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmBackupSettingOutcome>>();
    ModifyDspmBackupSettingAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmBackupSettingRequest&,
        ModifyDspmBackupSettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyCategoryOutcome CsipClient::ModifyDspmIdentifyCategory(const ModifyDspmIdentifyCategoryRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyCategory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyCategoryResponse rsp = ModifyDspmIdentifyCategoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyCategoryOutcome(rsp);
        else
            return ModifyDspmIdentifyCategoryOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyCategoryOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyCategoryAsync(const ModifyDspmIdentifyCategoryRequest& request, const ModifyDspmIdentifyCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyCategoryRequest&;
    using Resp = ModifyDspmIdentifyCategoryResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyCategory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyCategoryOutcomeCallable CsipClient::ModifyDspmIdentifyCategoryCallable(const ModifyDspmIdentifyCategoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyCategoryOutcome>>();
    ModifyDspmIdentifyCategoryAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyCategoryRequest&,
        ModifyDspmIdentifyCategoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyComplianceGroupOutcome CsipClient::ModifyDspmIdentifyComplianceGroup(const ModifyDspmIdentifyComplianceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyComplianceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyComplianceGroupResponse rsp = ModifyDspmIdentifyComplianceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyComplianceGroupOutcome(rsp);
        else
            return ModifyDspmIdentifyComplianceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyComplianceGroupOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyComplianceGroupAsync(const ModifyDspmIdentifyComplianceGroupRequest& request, const ModifyDspmIdentifyComplianceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyComplianceGroupRequest&;
    using Resp = ModifyDspmIdentifyComplianceGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyComplianceGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyComplianceGroupOutcomeCallable CsipClient::ModifyDspmIdentifyComplianceGroupCallable(const ModifyDspmIdentifyComplianceGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyComplianceGroupOutcome>>();
    ModifyDspmIdentifyComplianceGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyComplianceGroupRequest&,
        ModifyDspmIdentifyComplianceGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyComplianceGroupStatusOutcome CsipClient::ModifyDspmIdentifyComplianceGroupStatus(const ModifyDspmIdentifyComplianceGroupStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyComplianceGroupStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyComplianceGroupStatusResponse rsp = ModifyDspmIdentifyComplianceGroupStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyComplianceGroupStatusOutcome(rsp);
        else
            return ModifyDspmIdentifyComplianceGroupStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyComplianceGroupStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyComplianceGroupStatusAsync(const ModifyDspmIdentifyComplianceGroupStatusRequest& request, const ModifyDspmIdentifyComplianceGroupStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyComplianceGroupStatusRequest&;
    using Resp = ModifyDspmIdentifyComplianceGroupStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyComplianceGroupStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyComplianceGroupStatusOutcomeCallable CsipClient::ModifyDspmIdentifyComplianceGroupStatusCallable(const ModifyDspmIdentifyComplianceGroupStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyComplianceGroupStatusOutcome>>();
    ModifyDspmIdentifyComplianceGroupStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyComplianceGroupStatusRequest&,
        ModifyDspmIdentifyComplianceGroupStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyComplianceRuleLevelInfoOutcome CsipClient::ModifyDspmIdentifyComplianceRuleLevelInfo(const ModifyDspmIdentifyComplianceRuleLevelInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyComplianceRuleLevelInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyComplianceRuleLevelInfoResponse rsp = ModifyDspmIdentifyComplianceRuleLevelInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyComplianceRuleLevelInfoOutcome(rsp);
        else
            return ModifyDspmIdentifyComplianceRuleLevelInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyComplianceRuleLevelInfoOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyComplianceRuleLevelInfoAsync(const ModifyDspmIdentifyComplianceRuleLevelInfoRequest& request, const ModifyDspmIdentifyComplianceRuleLevelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyComplianceRuleLevelInfoRequest&;
    using Resp = ModifyDspmIdentifyComplianceRuleLevelInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyComplianceRuleLevelInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyComplianceRuleLevelInfoOutcomeCallable CsipClient::ModifyDspmIdentifyComplianceRuleLevelInfoCallable(const ModifyDspmIdentifyComplianceRuleLevelInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyComplianceRuleLevelInfoOutcome>>();
    ModifyDspmIdentifyComplianceRuleLevelInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyComplianceRuleLevelInfoRequest&,
        ModifyDspmIdentifyComplianceRuleLevelInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyInfoOutcome CsipClient::ModifyDspmIdentifyInfo(const ModifyDspmIdentifyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyInfoResponse rsp = ModifyDspmIdentifyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyInfoOutcome(rsp);
        else
            return ModifyDspmIdentifyInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyInfoOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyInfoAsync(const ModifyDspmIdentifyInfoRequest& request, const ModifyDspmIdentifyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyInfoRequest&;
    using Resp = ModifyDspmIdentifyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyInfoOutcomeCallable CsipClient::ModifyDspmIdentifyInfoCallable(const ModifyDspmIdentifyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyInfoOutcome>>();
    ModifyDspmIdentifyInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyInfoRequest&,
        ModifyDspmIdentifyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyLevelGroupOutcome CsipClient::ModifyDspmIdentifyLevelGroup(const ModifyDspmIdentifyLevelGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyLevelGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyLevelGroupResponse rsp = ModifyDspmIdentifyLevelGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyLevelGroupOutcome(rsp);
        else
            return ModifyDspmIdentifyLevelGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyLevelGroupOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyLevelGroupAsync(const ModifyDspmIdentifyLevelGroupRequest& request, const ModifyDspmIdentifyLevelGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyLevelGroupRequest&;
    using Resp = ModifyDspmIdentifyLevelGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyLevelGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyLevelGroupOutcomeCallable CsipClient::ModifyDspmIdentifyLevelGroupCallable(const ModifyDspmIdentifyLevelGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyLevelGroupOutcome>>();
    ModifyDspmIdentifyLevelGroupAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyLevelGroupRequest&,
        ModifyDspmIdentifyLevelGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyLevelItemOutcome CsipClient::ModifyDspmIdentifyLevelItem(const ModifyDspmIdentifyLevelItemRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyLevelItem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyLevelItemResponse rsp = ModifyDspmIdentifyLevelItemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyLevelItemOutcome(rsp);
        else
            return ModifyDspmIdentifyLevelItemOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyLevelItemOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyLevelItemAsync(const ModifyDspmIdentifyLevelItemRequest& request, const ModifyDspmIdentifyLevelItemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyLevelItemRequest&;
    using Resp = ModifyDspmIdentifyLevelItemResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyLevelItem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyLevelItemOutcomeCallable CsipClient::ModifyDspmIdentifyLevelItemCallable(const ModifyDspmIdentifyLevelItemRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyLevelItemOutcome>>();
    ModifyDspmIdentifyLevelItemAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyLevelItemRequest&,
        ModifyDspmIdentifyLevelItemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyRuleOutcome CsipClient::ModifyDspmIdentifyRule(const ModifyDspmIdentifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyRuleResponse rsp = ModifyDspmIdentifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyRuleOutcome(rsp);
        else
            return ModifyDspmIdentifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyRuleOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyRuleAsync(const ModifyDspmIdentifyRuleRequest& request, const ModifyDspmIdentifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyRuleRequest&;
    using Resp = ModifyDspmIdentifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyRuleOutcomeCallable CsipClient::ModifyDspmIdentifyRuleCallable(const ModifyDspmIdentifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyRuleOutcome>>();
    ModifyDspmIdentifyRuleAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyRuleRequest&,
        ModifyDspmIdentifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIdentifyRuleStatusOutcome CsipClient::ModifyDspmIdentifyRuleStatus(const ModifyDspmIdentifyRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIdentifyRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIdentifyRuleStatusResponse rsp = ModifyDspmIdentifyRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIdentifyRuleStatusOutcome(rsp);
        else
            return ModifyDspmIdentifyRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIdentifyRuleStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIdentifyRuleStatusAsync(const ModifyDspmIdentifyRuleStatusRequest& request, const ModifyDspmIdentifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIdentifyRuleStatusRequest&;
    using Resp = ModifyDspmIdentifyRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIdentifyRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIdentifyRuleStatusOutcomeCallable CsipClient::ModifyDspmIdentifyRuleStatusCallable(const ModifyDspmIdentifyRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIdentifyRuleStatusOutcome>>();
    ModifyDspmIdentifyRuleStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIdentifyRuleStatusRequest&,
        ModifyDspmIdentifyRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmIpInfoOutcome CsipClient::ModifyDspmIpInfo(const ModifyDspmIpInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmIpInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmIpInfoResponse rsp = ModifyDspmIpInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmIpInfoOutcome(rsp);
        else
            return ModifyDspmIpInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmIpInfoOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmIpInfoAsync(const ModifyDspmIpInfoRequest& request, const ModifyDspmIpInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmIpInfoRequest&;
    using Resp = ModifyDspmIpInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmIpInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmIpInfoOutcomeCallable CsipClient::ModifyDspmIpInfoCallable(const ModifyDspmIpInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmIpInfoOutcome>>();
    ModifyDspmIpInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmIpInfoRequest&,
        ModifyDspmIpInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmPersonalIdentifyOutcome CsipClient::ModifyDspmPersonalIdentify(const ModifyDspmPersonalIdentifyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmPersonalIdentify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmPersonalIdentifyResponse rsp = ModifyDspmPersonalIdentifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmPersonalIdentifyOutcome(rsp);
        else
            return ModifyDspmPersonalIdentifyOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmPersonalIdentifyOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmPersonalIdentifyAsync(const ModifyDspmPersonalIdentifyRequest& request, const ModifyDspmPersonalIdentifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmPersonalIdentifyRequest&;
    using Resp = ModifyDspmPersonalIdentifyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmPersonalIdentify", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmPersonalIdentifyOutcomeCallable CsipClient::ModifyDspmPersonalIdentifyCallable(const ModifyDspmPersonalIdentifyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmPersonalIdentifyOutcome>>();
    ModifyDspmPersonalIdentifyAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmPersonalIdentifyRequest&,
        ModifyDspmPersonalIdentifyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmRestoreLogTaskOutcome CsipClient::ModifyDspmRestoreLogTask(const ModifyDspmRestoreLogTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmRestoreLogTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmRestoreLogTaskResponse rsp = ModifyDspmRestoreLogTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmRestoreLogTaskOutcome(rsp);
        else
            return ModifyDspmRestoreLogTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmRestoreLogTaskOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmRestoreLogTaskAsync(const ModifyDspmRestoreLogTaskRequest& request, const ModifyDspmRestoreLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmRestoreLogTaskRequest&;
    using Resp = ModifyDspmRestoreLogTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmRestoreLogTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmRestoreLogTaskOutcomeCallable CsipClient::ModifyDspmRestoreLogTaskCallable(const ModifyDspmRestoreLogTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmRestoreLogTaskOutcome>>();
    ModifyDspmRestoreLogTaskAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmRestoreLogTaskRequest&,
        ModifyDspmRestoreLogTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmRiskInfoOutcome CsipClient::ModifyDspmRiskInfo(const ModifyDspmRiskInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmRiskInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmRiskInfoResponse rsp = ModifyDspmRiskInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmRiskInfoOutcome(rsp);
        else
            return ModifyDspmRiskInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmRiskInfoOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmRiskInfoAsync(const ModifyDspmRiskInfoRequest& request, const ModifyDspmRiskInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmRiskInfoRequest&;
    using Resp = ModifyDspmRiskInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmRiskInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmRiskInfoOutcomeCallable CsipClient::ModifyDspmRiskInfoCallable(const ModifyDspmRiskInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmRiskInfoOutcome>>();
    ModifyDspmRiskInfoAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmRiskInfoRequest&,
        ModifyDspmRiskInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmRiskStrategyOutcome CsipClient::ModifyDspmRiskStrategy(const ModifyDspmRiskStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmRiskStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmRiskStrategyResponse rsp = ModifyDspmRiskStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmRiskStrategyOutcome(rsp);
        else
            return ModifyDspmRiskStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmRiskStrategyOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmRiskStrategyAsync(const ModifyDspmRiskStrategyRequest& request, const ModifyDspmRiskStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmRiskStrategyRequest&;
    using Resp = ModifyDspmRiskStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmRiskStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmRiskStrategyOutcomeCallable CsipClient::ModifyDspmRiskStrategyCallable(const ModifyDspmRiskStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmRiskStrategyOutcome>>();
    ModifyDspmRiskStrategyAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmRiskStrategyRequest&,
        ModifyDspmRiskStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyDspmWhitelistStrategyOutcome CsipClient::ModifyDspmWhitelistStrategy(const ModifyDspmWhitelistStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDspmWhitelistStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDspmWhitelistStrategyResponse rsp = ModifyDspmWhitelistStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDspmWhitelistStrategyOutcome(rsp);
        else
            return ModifyDspmWhitelistStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyDspmWhitelistStrategyOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyDspmWhitelistStrategyAsync(const ModifyDspmWhitelistStrategyRequest& request, const ModifyDspmWhitelistStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDspmWhitelistStrategyRequest&;
    using Resp = ModifyDspmWhitelistStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDspmWhitelistStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyDspmWhitelistStrategyOutcomeCallable CsipClient::ModifyDspmWhitelistStrategyCallable(const ModifyDspmWhitelistStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDspmWhitelistStrategyOutcome>>();
    ModifyDspmWhitelistStrategyAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyDspmWhitelistStrategyRequest&,
        ModifyDspmWhitelistStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyEDRRuleOutcome CsipClient::ModifyEDRRule(const ModifyEDRRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEDRRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEDRRuleResponse rsp = ModifyEDRRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEDRRuleOutcome(rsp);
        else
            return ModifyEDRRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyEDRRuleOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyEDRRuleAsync(const ModifyEDRRuleRequest& request, const ModifyEDRRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEDRRuleRequest&;
    using Resp = ModifyEDRRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEDRRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyEDRRuleOutcomeCallable CsipClient::ModifyEDRRuleCallable(const ModifyEDRRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEDRRuleOutcome>>();
    ModifyEDRRuleAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyEDRRuleRequest&,
        ModifyEDRRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyEdrAlertPermanentIgnoreOutcome CsipClient::ModifyEdrAlertPermanentIgnore(const ModifyEdrAlertPermanentIgnoreRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEdrAlertPermanentIgnore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEdrAlertPermanentIgnoreResponse rsp = ModifyEdrAlertPermanentIgnoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEdrAlertPermanentIgnoreOutcome(rsp);
        else
            return ModifyEdrAlertPermanentIgnoreOutcome(o.GetError());
    }
    else
    {
        return ModifyEdrAlertPermanentIgnoreOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyEdrAlertPermanentIgnoreAsync(const ModifyEdrAlertPermanentIgnoreRequest& request, const ModifyEdrAlertPermanentIgnoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEdrAlertPermanentIgnoreRequest&;
    using Resp = ModifyEdrAlertPermanentIgnoreResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEdrAlertPermanentIgnore", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyEdrAlertPermanentIgnoreOutcomeCallable CsipClient::ModifyEdrAlertPermanentIgnoreCallable(const ModifyEdrAlertPermanentIgnoreRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEdrAlertPermanentIgnoreOutcome>>();
    ModifyEdrAlertPermanentIgnoreAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyEdrAlertPermanentIgnoreRequest&,
        ModifyEdrAlertPermanentIgnoreOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyIaCTokenPeriodOutcome CsipClient::ModifyIaCTokenPeriod(const ModifyIaCTokenPeriodRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIaCTokenPeriod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIaCTokenPeriodResponse rsp = ModifyIaCTokenPeriodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIaCTokenPeriodOutcome(rsp);
        else
            return ModifyIaCTokenPeriodOutcome(o.GetError());
    }
    else
    {
        return ModifyIaCTokenPeriodOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyIaCTokenPeriodAsync(const ModifyIaCTokenPeriodRequest& request, const ModifyIaCTokenPeriodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIaCTokenPeriodRequest&;
    using Resp = ModifyIaCTokenPeriodResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIaCTokenPeriod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyIaCTokenPeriodOutcomeCallable CsipClient::ModifyIaCTokenPeriodCallable(const ModifyIaCTokenPeriodRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIaCTokenPeriodOutcome>>();
    ModifyIaCTokenPeriodAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyIaCTokenPeriodRequest&,
        ModifyIaCTokenPeriodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyMachineRemarkOutcome CsipClient::ModifyMachineRemark(const ModifyMachineRemarkRequest &request)
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

void CsipClient::ModifyMachineRemarkAsync(const ModifyMachineRemarkRequest& request, const ModifyMachineRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CsipClient::ModifyMachineRemarkOutcomeCallable CsipClient::ModifyMachineRemarkCallable(const ModifyMachineRemarkRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMachineRemarkOutcome>>();
    ModifyMachineRemarkAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyMachineRemarkRequest&,
        ModifyMachineRemarkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyNotifyAssetConfigOutcome CsipClient::ModifyNotifyAssetConfig(const ModifyNotifyAssetConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNotifyAssetConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNotifyAssetConfigResponse rsp = ModifyNotifyAssetConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNotifyAssetConfigOutcome(rsp);
        else
            return ModifyNotifyAssetConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyNotifyAssetConfigOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyNotifyAssetConfigAsync(const ModifyNotifyAssetConfigRequest& request, const ModifyNotifyAssetConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNotifyAssetConfigRequest&;
    using Resp = ModifyNotifyAssetConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNotifyAssetConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyNotifyAssetConfigOutcomeCallable CsipClient::ModifyNotifyAssetConfigCallable(const ModifyNotifyAssetConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNotifyAssetConfigOutcome>>();
    ModifyNotifyAssetConfigAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyNotifyAssetConfigRequest&,
        ModifyNotifyAssetConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyNotifySettingOutcome CsipClient::ModifyNotifySetting(const ModifyNotifySettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNotifySetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNotifySettingResponse rsp = ModifyNotifySettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNotifySettingOutcome(rsp);
        else
            return ModifyNotifySettingOutcome(o.GetError());
    }
    else
    {
        return ModifyNotifySettingOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyNotifySettingAsync(const ModifyNotifySettingRequest& request, const ModifyNotifySettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNotifySettingRequest&;
    using Resp = ModifyNotifySettingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNotifySetting", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyNotifySettingOutcomeCallable CsipClient::ModifyNotifySettingCallable(const ModifyNotifySettingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNotifySettingOutcome>>();
    ModifyNotifySettingAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyNotifySettingRequest&,
        ModifyNotifySettingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::ModifyNotifySettingAlertOutcome CsipClient::ModifyNotifySettingAlert(const ModifyNotifySettingAlertRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNotifySettingAlert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNotifySettingAlertResponse rsp = ModifyNotifySettingAlertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNotifySettingAlertOutcome(rsp);
        else
            return ModifyNotifySettingAlertOutcome(o.GetError());
    }
    else
    {
        return ModifyNotifySettingAlertOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyNotifySettingAlertAsync(const ModifyNotifySettingAlertRequest& request, const ModifyNotifySettingAlertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNotifySettingAlertRequest&;
    using Resp = ModifyNotifySettingAlertResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNotifySettingAlert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyNotifySettingAlertOutcomeCallable CsipClient::ModifyNotifySettingAlertCallable(const ModifyNotifySettingAlertRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNotifySettingAlertOutcome>>();
    ModifyNotifySettingAlertAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyNotifySettingAlertRequest&,
        ModifyNotifySettingAlertOutcome resp,
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

CsipClient::ModifyPolicyStatusOutcome CsipClient::ModifyPolicyStatus(const ModifyPolicyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPolicyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPolicyStatusResponse rsp = ModifyPolicyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPolicyStatusOutcome(rsp);
        else
            return ModifyPolicyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyPolicyStatusOutcome(outcome.GetError());
    }
}

void CsipClient::ModifyPolicyStatusAsync(const ModifyPolicyStatusRequest& request, const ModifyPolicyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPolicyStatusRequest&;
    using Resp = ModifyPolicyStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPolicyStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ModifyPolicyStatusOutcomeCallable CsipClient::ModifyPolicyStatusCallable(const ModifyPolicyStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPolicyStatusOutcome>>();
    ModifyPolicyStatusAsync(
    request,
    [prom](
        const CsipClient*,
        const ModifyPolicyStatusRequest&,
        ModifyPolicyStatusOutcome resp,
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

CsipClient::ResetDspmAssetAccountPasswordOutcome CsipClient::ResetDspmAssetAccountPassword(const ResetDspmAssetAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDspmAssetAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDspmAssetAccountPasswordResponse rsp = ResetDspmAssetAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDspmAssetAccountPasswordOutcome(rsp);
        else
            return ResetDspmAssetAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetDspmAssetAccountPasswordOutcome(outcome.GetError());
    }
}

void CsipClient::ResetDspmAssetAccountPasswordAsync(const ResetDspmAssetAccountPasswordRequest& request, const ResetDspmAssetAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetDspmAssetAccountPasswordRequest&;
    using Resp = ResetDspmAssetAccountPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetDspmAssetAccountPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::ResetDspmAssetAccountPasswordOutcomeCallable CsipClient::ResetDspmAssetAccountPasswordCallable(const ResetDspmAssetAccountPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetDspmAssetAccountPasswordOutcome>>();
    ResetDspmAssetAccountPasswordAsync(
    request,
    [prom](
        const CsipClient*,
        const ResetDspmAssetAccountPasswordRequest&,
        ResetDspmAssetAccountPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::RetryDspmExportLogOutcome CsipClient::RetryDspmExportLog(const RetryDspmExportLogRequest &request)
{
    auto outcome = MakeRequest(request, "RetryDspmExportLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RetryDspmExportLogResponse rsp = RetryDspmExportLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RetryDspmExportLogOutcome(rsp);
        else
            return RetryDspmExportLogOutcome(o.GetError());
    }
    else
    {
        return RetryDspmExportLogOutcome(outcome.GetError());
    }
}

void CsipClient::RetryDspmExportLogAsync(const RetryDspmExportLogRequest& request, const RetryDspmExportLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RetryDspmExportLogRequest&;
    using Resp = RetryDspmExportLogResponse;

    DoRequestAsync<Req, Resp>(
        "RetryDspmExportLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::RetryDspmExportLogOutcomeCallable CsipClient::RetryDspmExportLogCallable(const RetryDspmExportLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<RetryDspmExportLogOutcome>>();
    RetryDspmExportLogAsync(
    request,
    [prom](
        const CsipClient*,
        const RetryDspmExportLogRequest&,
        RetryDspmExportLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::RevertDspmAssetAccountOutcome CsipClient::RevertDspmAssetAccount(const RevertDspmAssetAccountRequest &request)
{
    auto outcome = MakeRequest(request, "RevertDspmAssetAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevertDspmAssetAccountResponse rsp = RevertDspmAssetAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevertDspmAssetAccountOutcome(rsp);
        else
            return RevertDspmAssetAccountOutcome(o.GetError());
    }
    else
    {
        return RevertDspmAssetAccountOutcome(outcome.GetError());
    }
}

void CsipClient::RevertDspmAssetAccountAsync(const RevertDspmAssetAccountRequest& request, const RevertDspmAssetAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevertDspmAssetAccountRequest&;
    using Resp = RevertDspmAssetAccountResponse;

    DoRequestAsync<Req, Resp>(
        "RevertDspmAssetAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::RevertDspmAssetAccountOutcomeCallable CsipClient::RevertDspmAssetAccountCallable(const RevertDspmAssetAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevertDspmAssetAccountOutcome>>();
    RevertDspmAssetAccountAsync(
    request,
    [prom](
        const CsipClient*,
        const RevertDspmAssetAccountRequest&,
        RevertDspmAssetAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::SendDspmAssetLoginSmsCodeOutcome CsipClient::SendDspmAssetLoginSmsCode(const SendDspmAssetLoginSmsCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendDspmAssetLoginSmsCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendDspmAssetLoginSmsCodeResponse rsp = SendDspmAssetLoginSmsCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendDspmAssetLoginSmsCodeOutcome(rsp);
        else
            return SendDspmAssetLoginSmsCodeOutcome(o.GetError());
    }
    else
    {
        return SendDspmAssetLoginSmsCodeOutcome(outcome.GetError());
    }
}

void CsipClient::SendDspmAssetLoginSmsCodeAsync(const SendDspmAssetLoginSmsCodeRequest& request, const SendDspmAssetLoginSmsCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendDspmAssetLoginSmsCodeRequest&;
    using Resp = SendDspmAssetLoginSmsCodeResponse;

    DoRequestAsync<Req, Resp>(
        "SendDspmAssetLoginSmsCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::SendDspmAssetLoginSmsCodeOutcomeCallable CsipClient::SendDspmAssetLoginSmsCodeCallable(const SendDspmAssetLoginSmsCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendDspmAssetLoginSmsCodeOutcome>>();
    SendDspmAssetLoginSmsCodeAsync(
    request,
    [prom](
        const CsipClient*,
        const SendDspmAssetLoginSmsCodeRequest&,
        SendDspmAssetLoginSmsCodeOutcome resp,
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

CsipClient::SyncDspmAssetsOutcome CsipClient::SyncDspmAssets(const SyncDspmAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "SyncDspmAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncDspmAssetsResponse rsp = SyncDspmAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncDspmAssetsOutcome(rsp);
        else
            return SyncDspmAssetsOutcome(o.GetError());
    }
    else
    {
        return SyncDspmAssetsOutcome(outcome.GetError());
    }
}

void CsipClient::SyncDspmAssetsAsync(const SyncDspmAssetsRequest& request, const SyncDspmAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncDspmAssetsRequest&;
    using Resp = SyncDspmAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "SyncDspmAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::SyncDspmAssetsOutcomeCallable CsipClient::SyncDspmAssetsCallable(const SyncDspmAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncDspmAssetsOutcome>>();
    SyncDspmAssetsAsync(
    request,
    [prom](
        const CsipClient*,
        const SyncDspmAssetsRequest&,
        SyncDspmAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CsipClient::SyncDspmUsersOutcome CsipClient::SyncDspmUsers(const SyncDspmUsersRequest &request)
{
    auto outcome = MakeRequest(request, "SyncDspmUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncDspmUsersResponse rsp = SyncDspmUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncDspmUsersOutcome(rsp);
        else
            return SyncDspmUsersOutcome(o.GetError());
    }
    else
    {
        return SyncDspmUsersOutcome(outcome.GetError());
    }
}

void CsipClient::SyncDspmUsersAsync(const SyncDspmUsersRequest& request, const SyncDspmUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncDspmUsersRequest&;
    using Resp = SyncDspmUsersResponse;

    DoRequestAsync<Req, Resp>(
        "SyncDspmUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::SyncDspmUsersOutcomeCallable CsipClient::SyncDspmUsersCallable(const SyncDspmUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncDspmUsersOutcome>>();
    SyncDspmUsersAsync(
    request,
    [prom](
        const CsipClient*,
        const SyncDspmUsersRequest&,
        SyncDspmUsersOutcome resp,
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

CsipClient::VerifyDspmAssetLoginCodeOutcome CsipClient::VerifyDspmAssetLoginCode(const VerifyDspmAssetLoginCodeRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDspmAssetLoginCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDspmAssetLoginCodeResponse rsp = VerifyDspmAssetLoginCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDspmAssetLoginCodeOutcome(rsp);
        else
            return VerifyDspmAssetLoginCodeOutcome(o.GetError());
    }
    else
    {
        return VerifyDspmAssetLoginCodeOutcome(outcome.GetError());
    }
}

void CsipClient::VerifyDspmAssetLoginCodeAsync(const VerifyDspmAssetLoginCodeRequest& request, const VerifyDspmAssetLoginCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyDspmAssetLoginCodeRequest&;
    using Resp = VerifyDspmAssetLoginCodeResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyDspmAssetLoginCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsipClient::VerifyDspmAssetLoginCodeOutcomeCallable CsipClient::VerifyDspmAssetLoginCodeCallable(const VerifyDspmAssetLoginCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyDspmAssetLoginCodeOutcome>>();
    VerifyDspmAssetLoginCodeAsync(
    request,
    [prom](
        const CsipClient*,
        const VerifyDspmAssetLoginCodeRequest&,
        VerifyDspmAssetLoginCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

