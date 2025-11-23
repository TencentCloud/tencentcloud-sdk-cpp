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

#include <tencentcloud/ctem/v20231128/CtemClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ctem::V20231128;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-11-28";
    const string ENDPOINT = "ctem.tencentcloudapi.com";
}

CtemClient::CtemClient(const Credential &credential, const string &region) :
    CtemClient(credential, region, ClientProfile())
{
}

CtemClient::CtemClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CtemClient::CreateAppOutcome CtemClient::CreateApp(const CreateAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAppResponse rsp = CreateAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAppOutcome(rsp);
        else
            return CreateAppOutcome(o.GetError());
    }
    else
    {
        return CreateAppOutcome(outcome.GetError());
    }
}

void CtemClient::CreateAppAsync(const CreateAppRequest& request, const CreateAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAppRequest&;
    using Resp = CreateAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateAppOutcomeCallable CtemClient::CreateAppCallable(const CreateAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAppOutcome>>();
    CreateAppAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateAppRequest&,
        CreateAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateAssetOutcome CtemClient::CreateAsset(const CreateAssetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetResponse rsp = CreateAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetOutcome(rsp);
        else
            return CreateAssetOutcome(o.GetError());
    }
    else
    {
        return CreateAssetOutcome(outcome.GetError());
    }
}

void CtemClient::CreateAssetAsync(const CreateAssetRequest& request, const CreateAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAssetRequest&;
    using Resp = CreateAssetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateAssetOutcomeCallable CtemClient::CreateAssetCallable(const CreateAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAssetOutcome>>();
    CreateAssetAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateAssetRequest&,
        CreateAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateCustomerOutcome CtemClient::CreateCustomer(const CreateCustomerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomerResponse rsp = CreateCustomerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomerOutcome(rsp);
        else
            return CreateCustomerOutcome(o.GetError());
    }
    else
    {
        return CreateCustomerOutcome(outcome.GetError());
    }
}

void CtemClient::CreateCustomerAsync(const CreateCustomerRequest& request, const CreateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomerRequest&;
    using Resp = CreateCustomerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateCustomerOutcomeCallable CtemClient::CreateCustomerCallable(const CreateCustomerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomerOutcome>>();
    CreateCustomerAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateCustomerRequest&,
        CreateCustomerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateDomainOutcome CtemClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void CtemClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainRequest&;
    using Resp = CreateDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateDomainOutcomeCallable CtemClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainOutcome>>();
    CreateDomainAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateDomainRequest&,
        CreateDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateEnterpriseOutcome CtemClient::CreateEnterprise(const CreateEnterpriseRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnterprise");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnterpriseResponse rsp = CreateEnterpriseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnterpriseOutcome(rsp);
        else
            return CreateEnterpriseOutcome(o.GetError());
    }
    else
    {
        return CreateEnterpriseOutcome(outcome.GetError());
    }
}

void CtemClient::CreateEnterpriseAsync(const CreateEnterpriseRequest& request, const CreateEnterpriseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnterpriseRequest&;
    using Resp = CreateEnterpriseResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnterprise", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateEnterpriseOutcomeCallable CtemClient::CreateEnterpriseCallable(const CreateEnterpriseRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnterpriseOutcome>>();
    CreateEnterpriseAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateEnterpriseRequest&,
        CreateEnterpriseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateHttpOutcome CtemClient::CreateHttp(const CreateHttpRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHttp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHttpResponse rsp = CreateHttpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHttpOutcome(rsp);
        else
            return CreateHttpOutcome(o.GetError());
    }
    else
    {
        return CreateHttpOutcome(outcome.GetError());
    }
}

void CtemClient::CreateHttpAsync(const CreateHttpRequest& request, const CreateHttpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateHttpRequest&;
    using Resp = CreateHttpResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHttp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateHttpOutcomeCallable CtemClient::CreateHttpCallable(const CreateHttpRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHttpOutcome>>();
    CreateHttpAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateHttpRequest&,
        CreateHttpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateJobRecordOutcome CtemClient::CreateJobRecord(const CreateJobRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJobRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobRecordResponse rsp = CreateJobRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobRecordOutcome(rsp);
        else
            return CreateJobRecordOutcome(o.GetError());
    }
    else
    {
        return CreateJobRecordOutcome(outcome.GetError());
    }
}

void CtemClient::CreateJobRecordAsync(const CreateJobRecordRequest& request, const CreateJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateJobRecordRequest&;
    using Resp = CreateJobRecordResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJobRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateJobRecordOutcomeCallable CtemClient::CreateJobRecordCallable(const CreateJobRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJobRecordOutcome>>();
    CreateJobRecordAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateJobRecordRequest&,
        CreateJobRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateManageOutcome CtemClient::CreateManage(const CreateManageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateManage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateManageResponse rsp = CreateManageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateManageOutcome(rsp);
        else
            return CreateManageOutcome(o.GetError());
    }
    else
    {
        return CreateManageOutcome(outcome.GetError());
    }
}

void CtemClient::CreateManageAsync(const CreateManageRequest& request, const CreateManageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateManageRequest&;
    using Resp = CreateManageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateManage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateManageOutcomeCallable CtemClient::CreateManageCallable(const CreateManageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateManageOutcome>>();
    CreateManageAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateManageRequest&,
        CreateManageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreatePortOutcome CtemClient::CreatePort(const CreatePortRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePortResponse rsp = CreatePortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePortOutcome(rsp);
        else
            return CreatePortOutcome(o.GetError());
    }
    else
    {
        return CreatePortOutcome(outcome.GetError());
    }
}

void CtemClient::CreatePortAsync(const CreatePortRequest& request, const CreatePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePortRequest&;
    using Resp = CreatePortResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePort", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreatePortOutcomeCallable CtemClient::CreatePortCallable(const CreatePortRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePortOutcome>>();
    CreatePortAsync(
    request,
    [prom](
        const CtemClient*,
        const CreatePortRequest&,
        CreatePortOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateSeedsOutcome CtemClient::CreateSeeds(const CreateSeedsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSeeds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSeedsResponse rsp = CreateSeedsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSeedsOutcome(rsp);
        else
            return CreateSeedsOutcome(o.GetError());
    }
    else
    {
        return CreateSeedsOutcome(outcome.GetError());
    }
}

void CtemClient::CreateSeedsAsync(const CreateSeedsRequest& request, const CreateSeedsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSeedsRequest&;
    using Resp = CreateSeedsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSeeds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateSeedsOutcomeCallable CtemClient::CreateSeedsCallable(const CreateSeedsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSeedsOutcome>>();
    CreateSeedsAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateSeedsRequest&,
        CreateSeedsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateSubDomainOutcome CtemClient::CreateSubDomain(const CreateSubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubDomainResponse rsp = CreateSubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubDomainOutcome(rsp);
        else
            return CreateSubDomainOutcome(o.GetError());
    }
    else
    {
        return CreateSubDomainOutcome(outcome.GetError());
    }
}

void CtemClient::CreateSubDomainAsync(const CreateSubDomainRequest& request, const CreateSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSubDomainRequest&;
    using Resp = CreateSubDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSubDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateSubDomainOutcomeCallable CtemClient::CreateSubDomainCallable(const CreateSubDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSubDomainOutcome>>();
    CreateSubDomainAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateSubDomainRequest&,
        CreateSubDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateSuspiciousAssetOutcome CtemClient::CreateSuspiciousAsset(const CreateSuspiciousAssetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSuspiciousAsset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSuspiciousAssetResponse rsp = CreateSuspiciousAssetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSuspiciousAssetOutcome(rsp);
        else
            return CreateSuspiciousAssetOutcome(o.GetError());
    }
    else
    {
        return CreateSuspiciousAssetOutcome(outcome.GetError());
    }
}

void CtemClient::CreateSuspiciousAssetAsync(const CreateSuspiciousAssetRequest& request, const CreateSuspiciousAssetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSuspiciousAssetRequest&;
    using Resp = CreateSuspiciousAssetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSuspiciousAsset", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateSuspiciousAssetOutcomeCallable CtemClient::CreateSuspiciousAssetCallable(const CreateSuspiciousAssetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSuspiciousAssetOutcome>>();
    CreateSuspiciousAssetAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateSuspiciousAssetRequest&,
        CreateSuspiciousAssetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateWechatAppletOutcome CtemClient::CreateWechatApplet(const CreateWechatAppletRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWechatApplet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWechatAppletResponse rsp = CreateWechatAppletResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWechatAppletOutcome(rsp);
        else
            return CreateWechatAppletOutcome(o.GetError());
    }
    else
    {
        return CreateWechatAppletOutcome(outcome.GetError());
    }
}

void CtemClient::CreateWechatAppletAsync(const CreateWechatAppletRequest& request, const CreateWechatAppletAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWechatAppletRequest&;
    using Resp = CreateWechatAppletResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWechatApplet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateWechatAppletOutcomeCallable CtemClient::CreateWechatAppletCallable(const CreateWechatAppletRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWechatAppletOutcome>>();
    CreateWechatAppletAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateWechatAppletRequest&,
        CreateWechatAppletOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::CreateWechatOfficialAccountOutcome CtemClient::CreateWechatOfficialAccount(const CreateWechatOfficialAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWechatOfficialAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWechatOfficialAccountResponse rsp = CreateWechatOfficialAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWechatOfficialAccountOutcome(rsp);
        else
            return CreateWechatOfficialAccountOutcome(o.GetError());
    }
    else
    {
        return CreateWechatOfficialAccountOutcome(outcome.GetError());
    }
}

void CtemClient::CreateWechatOfficialAccountAsync(const CreateWechatOfficialAccountRequest& request, const CreateWechatOfficialAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWechatOfficialAccountRequest&;
    using Resp = CreateWechatOfficialAccountResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWechatOfficialAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::CreateWechatOfficialAccountOutcomeCallable CtemClient::CreateWechatOfficialAccountCallable(const CreateWechatOfficialAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWechatOfficialAccountOutcome>>();
    CreateWechatOfficialAccountAsync(
    request,
    [prom](
        const CtemClient*,
        const CreateWechatOfficialAccountRequest&,
        CreateWechatOfficialAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteAppsOutcome CtemClient::DeleteApps(const DeleteAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppsResponse rsp = DeleteAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppsOutcome(rsp);
        else
            return DeleteAppsOutcome(o.GetError());
    }
    else
    {
        return DeleteAppsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteAppsAsync(const DeleteAppsRequest& request, const DeleteAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppsRequest&;
    using Resp = DeleteAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteAppsOutcomeCallable CtemClient::DeleteAppsCallable(const DeleteAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppsOutcome>>();
    DeleteAppsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteAppsRequest&,
        DeleteAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteAssetsOutcome CtemClient::DeleteAssets(const DeleteAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAssetsResponse rsp = DeleteAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAssetsOutcome(rsp);
        else
            return DeleteAssetsOutcome(o.GetError());
    }
    else
    {
        return DeleteAssetsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteAssetsAsync(const DeleteAssetsRequest& request, const DeleteAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAssetsRequest&;
    using Resp = DeleteAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteAssetsOutcomeCallable CtemClient::DeleteAssetsCallable(const DeleteAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAssetsOutcome>>();
    DeleteAssetsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteAssetsRequest&,
        DeleteAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteDomainsOutcome CtemClient::DeleteDomains(const DeleteDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainsResponse rsp = DeleteDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainsOutcome(rsp);
        else
            return DeleteDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteDomainsAsync(const DeleteDomainsRequest& request, const DeleteDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainsRequest&;
    using Resp = DeleteDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteDomainsOutcomeCallable CtemClient::DeleteDomainsCallable(const DeleteDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainsOutcome>>();
    DeleteDomainsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteDomainsRequest&,
        DeleteDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteEnterprisesOutcome CtemClient::DeleteEnterprises(const DeleteEnterprisesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnterprises");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnterprisesResponse rsp = DeleteEnterprisesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnterprisesOutcome(rsp);
        else
            return DeleteEnterprisesOutcome(o.GetError());
    }
    else
    {
        return DeleteEnterprisesOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteEnterprisesAsync(const DeleteEnterprisesRequest& request, const DeleteEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteEnterprisesRequest&;
    using Resp = DeleteEnterprisesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteEnterprises", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteEnterprisesOutcomeCallable CtemClient::DeleteEnterprisesCallable(const DeleteEnterprisesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteEnterprisesOutcome>>();
    DeleteEnterprisesAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteEnterprisesRequest&,
        DeleteEnterprisesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteHttpsOutcome CtemClient::DeleteHttps(const DeleteHttpsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteHttps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteHttpsResponse rsp = DeleteHttpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteHttpsOutcome(rsp);
        else
            return DeleteHttpsOutcome(o.GetError());
    }
    else
    {
        return DeleteHttpsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteHttpsAsync(const DeleteHttpsRequest& request, const DeleteHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteHttpsRequest&;
    using Resp = DeleteHttpsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteHttps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteHttpsOutcomeCallable CtemClient::DeleteHttpsCallable(const DeleteHttpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteHttpsOutcome>>();
    DeleteHttpsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteHttpsRequest&,
        DeleteHttpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteManagesOutcome CtemClient::DeleteManages(const DeleteManagesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteManages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteManagesResponse rsp = DeleteManagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteManagesOutcome(rsp);
        else
            return DeleteManagesOutcome(o.GetError());
    }
    else
    {
        return DeleteManagesOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteManagesAsync(const DeleteManagesRequest& request, const DeleteManagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteManagesRequest&;
    using Resp = DeleteManagesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteManages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteManagesOutcomeCallable CtemClient::DeleteManagesCallable(const DeleteManagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteManagesOutcome>>();
    DeleteManagesAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteManagesRequest&,
        DeleteManagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeletePortsOutcome CtemClient::DeletePorts(const DeletePortsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePortsResponse rsp = DeletePortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePortsOutcome(rsp);
        else
            return DeletePortsOutcome(o.GetError());
    }
    else
    {
        return DeletePortsOutcome(outcome.GetError());
    }
}

void CtemClient::DeletePortsAsync(const DeletePortsRequest& request, const DeletePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePortsRequest&;
    using Resp = DeletePortsResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePorts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeletePortsOutcomeCallable CtemClient::DeletePortsCallable(const DeletePortsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePortsOutcome>>();
    DeletePortsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeletePortsRequest&,
        DeletePortsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteSeedsOutcome CtemClient::DeleteSeeds(const DeleteSeedsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSeeds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSeedsResponse rsp = DeleteSeedsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSeedsOutcome(rsp);
        else
            return DeleteSeedsOutcome(o.GetError());
    }
    else
    {
        return DeleteSeedsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteSeedsAsync(const DeleteSeedsRequest& request, const DeleteSeedsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSeedsRequest&;
    using Resp = DeleteSeedsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSeeds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteSeedsOutcomeCallable CtemClient::DeleteSeedsCallable(const DeleteSeedsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSeedsOutcome>>();
    DeleteSeedsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteSeedsRequest&,
        DeleteSeedsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteSubDomainsOutcome CtemClient::DeleteSubDomains(const DeleteSubDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubDomainsResponse rsp = DeleteSubDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubDomainsOutcome(rsp);
        else
            return DeleteSubDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteSubDomainsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteSubDomainsAsync(const DeleteSubDomainsRequest& request, const DeleteSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSubDomainsRequest&;
    using Resp = DeleteSubDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSubDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteSubDomainsOutcomeCallable CtemClient::DeleteSubDomainsCallable(const DeleteSubDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSubDomainsOutcome>>();
    DeleteSubDomainsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteSubDomainsRequest&,
        DeleteSubDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteSuspiciousAssetsOutcome CtemClient::DeleteSuspiciousAssets(const DeleteSuspiciousAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSuspiciousAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSuspiciousAssetsResponse rsp = DeleteSuspiciousAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSuspiciousAssetsOutcome(rsp);
        else
            return DeleteSuspiciousAssetsOutcome(o.GetError());
    }
    else
    {
        return DeleteSuspiciousAssetsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteSuspiciousAssetsAsync(const DeleteSuspiciousAssetsRequest& request, const DeleteSuspiciousAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSuspiciousAssetsRequest&;
    using Resp = DeleteSuspiciousAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSuspiciousAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteSuspiciousAssetsOutcomeCallable CtemClient::DeleteSuspiciousAssetsCallable(const DeleteSuspiciousAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSuspiciousAssetsOutcome>>();
    DeleteSuspiciousAssetsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteSuspiciousAssetsRequest&,
        DeleteSuspiciousAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteWechatAppletsOutcome CtemClient::DeleteWechatApplets(const DeleteWechatAppletsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWechatApplets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWechatAppletsResponse rsp = DeleteWechatAppletsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWechatAppletsOutcome(rsp);
        else
            return DeleteWechatAppletsOutcome(o.GetError());
    }
    else
    {
        return DeleteWechatAppletsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteWechatAppletsAsync(const DeleteWechatAppletsRequest& request, const DeleteWechatAppletsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWechatAppletsRequest&;
    using Resp = DeleteWechatAppletsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWechatApplets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteWechatAppletsOutcomeCallable CtemClient::DeleteWechatAppletsCallable(const DeleteWechatAppletsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWechatAppletsOutcome>>();
    DeleteWechatAppletsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteWechatAppletsRequest&,
        DeleteWechatAppletsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DeleteWechatOfficialAccountsOutcome CtemClient::DeleteWechatOfficialAccounts(const DeleteWechatOfficialAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWechatOfficialAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWechatOfficialAccountsResponse rsp = DeleteWechatOfficialAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWechatOfficialAccountsOutcome(rsp);
        else
            return DeleteWechatOfficialAccountsOutcome(o.GetError());
    }
    else
    {
        return DeleteWechatOfficialAccountsOutcome(outcome.GetError());
    }
}

void CtemClient::DeleteWechatOfficialAccountsAsync(const DeleteWechatOfficialAccountsRequest& request, const DeleteWechatOfficialAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWechatOfficialAccountsRequest&;
    using Resp = DeleteWechatOfficialAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWechatOfficialAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DeleteWechatOfficialAccountsOutcomeCallable CtemClient::DeleteWechatOfficialAccountsCallable(const DeleteWechatOfficialAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWechatOfficialAccountsOutcome>>();
    DeleteWechatOfficialAccountsAsync(
    request,
    [prom](
        const CtemClient*,
        const DeleteWechatOfficialAccountsRequest&,
        DeleteWechatOfficialAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeApiSecsOutcome CtemClient::DescribeApiSecs(const DescribeApiSecsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiSecs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiSecsResponse rsp = DescribeApiSecsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiSecsOutcome(rsp);
        else
            return DescribeApiSecsOutcome(o.GetError());
    }
    else
    {
        return DescribeApiSecsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeApiSecsAsync(const DescribeApiSecsRequest& request, const DescribeApiSecsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiSecsRequest&;
    using Resp = DescribeApiSecsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiSecs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeApiSecsOutcomeCallable CtemClient::DescribeApiSecsCallable(const DescribeApiSecsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiSecsOutcome>>();
    DescribeApiSecsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeApiSecsRequest&,
        DescribeApiSecsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeAppsOutcome CtemClient::DescribeApps(const DescribeAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppsResponse rsp = DescribeAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppsOutcome(rsp);
        else
            return DescribeAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAppsRequest&;
    using Resp = DescribeAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeAppsOutcomeCallable CtemClient::DescribeAppsCallable(const DescribeAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppsOutcome>>();
    DescribeAppsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeAppsRequest&,
        DescribeAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeAssetsOutcome CtemClient::DescribeAssets(const DescribeAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetsResponse rsp = DescribeAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetsOutcome(rsp);
        else
            return DescribeAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeAssetsAsync(const DescribeAssetsRequest& request, const DescribeAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetsRequest&;
    using Resp = DescribeAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeAssetsOutcomeCallable CtemClient::DescribeAssetsCallable(const DescribeAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetsOutcome>>();
    DescribeAssetsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeAssetsRequest&,
        DescribeAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeConfigsOutcome CtemClient::DescribeConfigs(const DescribeConfigsRequest &request)
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

void CtemClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

CtemClient::DescribeConfigsOutcomeCallable CtemClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigsOutcome>>();
    DescribeConfigsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeConfigsRequest&,
        DescribeConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeCustomersOutcome CtemClient::DescribeCustomers(const DescribeCustomersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomersResponse rsp = DescribeCustomersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomersOutcome(rsp);
        else
            return DescribeCustomersOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomersOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeCustomersAsync(const DescribeCustomersRequest& request, const DescribeCustomersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomersRequest&;
    using Resp = DescribeCustomersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeCustomersOutcomeCallable CtemClient::DescribeCustomersCallable(const DescribeCustomersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomersOutcome>>();
    DescribeCustomersAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeCustomersRequest&,
        DescribeCustomersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeDarkWebsOutcome CtemClient::DescribeDarkWebs(const DescribeDarkWebsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDarkWebs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDarkWebsResponse rsp = DescribeDarkWebsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDarkWebsOutcome(rsp);
        else
            return DescribeDarkWebsOutcome(o.GetError());
    }
    else
    {
        return DescribeDarkWebsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeDarkWebsAsync(const DescribeDarkWebsRequest& request, const DescribeDarkWebsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDarkWebsRequest&;
    using Resp = DescribeDarkWebsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDarkWebs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeDarkWebsOutcomeCallable CtemClient::DescribeDarkWebsCallable(const DescribeDarkWebsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDarkWebsOutcome>>();
    DescribeDarkWebsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeDarkWebsRequest&,
        DescribeDarkWebsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeDomainsOutcome CtemClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsRequest&;
    using Resp = DescribeDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeDomainsOutcomeCallable CtemClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeEnterprisesOutcome CtemClient::DescribeEnterprises(const DescribeEnterprisesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterprises");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterprisesResponse rsp = DescribeEnterprisesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterprisesOutcome(rsp);
        else
            return DescribeEnterprisesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterprisesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeEnterprisesAsync(const DescribeEnterprisesRequest& request, const DescribeEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnterprisesRequest&;
    using Resp = DescribeEnterprisesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnterprises", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeEnterprisesOutcomeCallable CtemClient::DescribeEnterprisesCallable(const DescribeEnterprisesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnterprisesOutcome>>();
    DescribeEnterprisesAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeEnterprisesRequest&,
        DescribeEnterprisesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeFakeAppsOutcome CtemClient::DescribeFakeApps(const DescribeFakeAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeAppsResponse rsp = DescribeFakeAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeAppsOutcome(rsp);
        else
            return DescribeFakeAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeAppsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeAppsAsync(const DescribeFakeAppsRequest& request, const DescribeFakeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFakeAppsRequest&;
    using Resp = DescribeFakeAppsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFakeApps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeFakeAppsOutcomeCallable CtemClient::DescribeFakeAppsCallable(const DescribeFakeAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFakeAppsOutcome>>();
    DescribeFakeAppsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeFakeAppsRequest&,
        DescribeFakeAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeFakeMiniProgramsOutcome CtemClient::DescribeFakeMiniPrograms(const DescribeFakeMiniProgramsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeMiniPrograms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeMiniProgramsResponse rsp = DescribeFakeMiniProgramsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeMiniProgramsOutcome(rsp);
        else
            return DescribeFakeMiniProgramsOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeMiniProgramsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeMiniProgramsAsync(const DescribeFakeMiniProgramsRequest& request, const DescribeFakeMiniProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFakeMiniProgramsRequest&;
    using Resp = DescribeFakeMiniProgramsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFakeMiniPrograms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeFakeMiniProgramsOutcomeCallable CtemClient::DescribeFakeMiniProgramsCallable(const DescribeFakeMiniProgramsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFakeMiniProgramsOutcome>>();
    DescribeFakeMiniProgramsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeFakeMiniProgramsRequest&,
        DescribeFakeMiniProgramsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeFakeWebsitesOutcome CtemClient::DescribeFakeWebsites(const DescribeFakeWebsitesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeWebsites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeWebsitesResponse rsp = DescribeFakeWebsitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeWebsitesOutcome(rsp);
        else
            return DescribeFakeWebsitesOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeWebsitesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeWebsitesAsync(const DescribeFakeWebsitesRequest& request, const DescribeFakeWebsitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFakeWebsitesRequest&;
    using Resp = DescribeFakeWebsitesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFakeWebsites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeFakeWebsitesOutcomeCallable CtemClient::DescribeFakeWebsitesCallable(const DescribeFakeWebsitesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFakeWebsitesOutcome>>();
    DescribeFakeWebsitesAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeFakeWebsitesRequest&,
        DescribeFakeWebsitesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeFakeWechatOfficialsOutcome CtemClient::DescribeFakeWechatOfficials(const DescribeFakeWechatOfficialsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeWechatOfficials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeWechatOfficialsResponse rsp = DescribeFakeWechatOfficialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeWechatOfficialsOutcome(rsp);
        else
            return DescribeFakeWechatOfficialsOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeWechatOfficialsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeWechatOfficialsAsync(const DescribeFakeWechatOfficialsRequest& request, const DescribeFakeWechatOfficialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFakeWechatOfficialsRequest&;
    using Resp = DescribeFakeWechatOfficialsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFakeWechatOfficials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeFakeWechatOfficialsOutcomeCallable CtemClient::DescribeFakeWechatOfficialsCallable(const DescribeFakeWechatOfficialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFakeWechatOfficialsOutcome>>();
    DescribeFakeWechatOfficialsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeFakeWechatOfficialsRequest&,
        DescribeFakeWechatOfficialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeGithubsOutcome CtemClient::DescribeGithubs(const DescribeGithubsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGithubs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGithubsResponse rsp = DescribeGithubsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGithubsOutcome(rsp);
        else
            return DescribeGithubsOutcome(o.GetError());
    }
    else
    {
        return DescribeGithubsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeGithubsAsync(const DescribeGithubsRequest& request, const DescribeGithubsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGithubsRequest&;
    using Resp = DescribeGithubsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGithubs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeGithubsOutcomeCallable CtemClient::DescribeGithubsCallable(const DescribeGithubsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGithubsOutcome>>();
    DescribeGithubsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeGithubsRequest&,
        DescribeGithubsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeHttpsOutcome CtemClient::DescribeHttps(const DescribeHttpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHttps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHttpsResponse rsp = DescribeHttpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHttpsOutcome(rsp);
        else
            return DescribeHttpsOutcome(o.GetError());
    }
    else
    {
        return DescribeHttpsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeHttpsAsync(const DescribeHttpsRequest& request, const DescribeHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHttpsRequest&;
    using Resp = DescribeHttpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHttps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeHttpsOutcomeCallable CtemClient::DescribeHttpsCallable(const DescribeHttpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHttpsOutcome>>();
    DescribeHttpsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeHttpsRequest&,
        DescribeHttpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeJobRecordDetailsOutcome CtemClient::DescribeJobRecordDetails(const DescribeJobRecordDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobRecordDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobRecordDetailsResponse rsp = DescribeJobRecordDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobRecordDetailsOutcome(rsp);
        else
            return DescribeJobRecordDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobRecordDetailsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeJobRecordDetailsAsync(const DescribeJobRecordDetailsRequest& request, const DescribeJobRecordDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobRecordDetailsRequest&;
    using Resp = DescribeJobRecordDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobRecordDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeJobRecordDetailsOutcomeCallable CtemClient::DescribeJobRecordDetailsCallable(const DescribeJobRecordDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobRecordDetailsOutcome>>();
    DescribeJobRecordDetailsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeJobRecordDetailsRequest&,
        DescribeJobRecordDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeJobRecordsOutcome CtemClient::DescribeJobRecords(const DescribeJobRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobRecordsResponse rsp = DescribeJobRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobRecordsOutcome(rsp);
        else
            return DescribeJobRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobRecordsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeJobRecordsAsync(const DescribeJobRecordsRequest& request, const DescribeJobRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobRecordsRequest&;
    using Resp = DescribeJobRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeJobRecordsOutcomeCallable CtemClient::DescribeJobRecordsCallable(const DescribeJobRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobRecordsOutcome>>();
    DescribeJobRecordsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeJobRecordsRequest&,
        DescribeJobRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeLeakageCodesOutcome CtemClient::DescribeLeakageCodes(const DescribeLeakageCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakageCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakageCodesResponse rsp = DescribeLeakageCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakageCodesOutcome(rsp);
        else
            return DescribeLeakageCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakageCodesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeLeakageCodesAsync(const DescribeLeakageCodesRequest& request, const DescribeLeakageCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLeakageCodesRequest&;
    using Resp = DescribeLeakageCodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLeakageCodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeLeakageCodesOutcomeCallable CtemClient::DescribeLeakageCodesCallable(const DescribeLeakageCodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLeakageCodesOutcome>>();
    DescribeLeakageCodesAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeLeakageCodesRequest&,
        DescribeLeakageCodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeLeakageDatasOutcome CtemClient::DescribeLeakageDatas(const DescribeLeakageDatasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakageDatas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakageDatasResponse rsp = DescribeLeakageDatasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakageDatasOutcome(rsp);
        else
            return DescribeLeakageDatasOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakageDatasOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeLeakageDatasAsync(const DescribeLeakageDatasRequest& request, const DescribeLeakageDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLeakageDatasRequest&;
    using Resp = DescribeLeakageDatasResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLeakageDatas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeLeakageDatasOutcomeCallable CtemClient::DescribeLeakageDatasCallable(const DescribeLeakageDatasRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLeakageDatasOutcome>>();
    DescribeLeakageDatasAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeLeakageDatasRequest&,
        DescribeLeakageDatasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeLeakageEmailsOutcome CtemClient::DescribeLeakageEmails(const DescribeLeakageEmailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakageEmails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakageEmailsResponse rsp = DescribeLeakageEmailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakageEmailsOutcome(rsp);
        else
            return DescribeLeakageEmailsOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakageEmailsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeLeakageEmailsAsync(const DescribeLeakageEmailsRequest& request, const DescribeLeakageEmailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLeakageEmailsRequest&;
    using Resp = DescribeLeakageEmailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLeakageEmails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeLeakageEmailsOutcomeCallable CtemClient::DescribeLeakageEmailsCallable(const DescribeLeakageEmailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLeakageEmailsOutcome>>();
    DescribeLeakageEmailsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeLeakageEmailsRequest&,
        DescribeLeakageEmailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeManagesOutcome CtemClient::DescribeManages(const DescribeManagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManagesResponse rsp = DescribeManagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManagesOutcome(rsp);
        else
            return DescribeManagesOutcome(o.GetError());
    }
    else
    {
        return DescribeManagesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeManagesAsync(const DescribeManagesRequest& request, const DescribeManagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeManagesRequest&;
    using Resp = DescribeManagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeManages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeManagesOutcomeCallable CtemClient::DescribeManagesCallable(const DescribeManagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeManagesOutcome>>();
    DescribeManagesAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeManagesRequest&,
        DescribeManagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeNetDisksOutcome CtemClient::DescribeNetDisks(const DescribeNetDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetDisksResponse rsp = DescribeNetDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetDisksOutcome(rsp);
        else
            return DescribeNetDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeNetDisksOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeNetDisksAsync(const DescribeNetDisksRequest& request, const DescribeNetDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNetDisksRequest&;
    using Resp = DescribeNetDisksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNetDisks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeNetDisksOutcomeCallable CtemClient::DescribeNetDisksCallable(const DescribeNetDisksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNetDisksOutcome>>();
    DescribeNetDisksAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeNetDisksRequest&,
        DescribeNetDisksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribePortsOutcome CtemClient::DescribePorts(const DescribePortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePortsResponse rsp = DescribePortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePortsOutcome(rsp);
        else
            return DescribePortsOutcome(o.GetError());
    }
    else
    {
        return DescribePortsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribePortsAsync(const DescribePortsRequest& request, const DescribePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePortsRequest&;
    using Resp = DescribePortsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePorts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribePortsOutcomeCallable CtemClient::DescribePortsCallable(const DescribePortsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePortsOutcome>>();
    DescribePortsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribePortsRequest&,
        DescribePortsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeSeedsOutcome CtemClient::DescribeSeeds(const DescribeSeedsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSeeds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSeedsResponse rsp = DescribeSeedsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSeedsOutcome(rsp);
        else
            return DescribeSeedsOutcome(o.GetError());
    }
    else
    {
        return DescribeSeedsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSeedsAsync(const DescribeSeedsRequest& request, const DescribeSeedsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSeedsRequest&;
    using Resp = DescribeSeedsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSeeds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeSeedsOutcomeCallable CtemClient::DescribeSeedsCallable(const DescribeSeedsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSeedsOutcome>>();
    DescribeSeedsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeSeedsRequest&,
        DescribeSeedsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeSensitiveInfosOutcome CtemClient::DescribeSensitiveInfos(const DescribeSensitiveInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveInfosResponse rsp = DescribeSensitiveInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveInfosOutcome(rsp);
        else
            return DescribeSensitiveInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveInfosOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSensitiveInfosAsync(const DescribeSensitiveInfosRequest& request, const DescribeSensitiveInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSensitiveInfosRequest&;
    using Resp = DescribeSensitiveInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSensitiveInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeSensitiveInfosOutcomeCallable CtemClient::DescribeSensitiveInfosCallable(const DescribeSensitiveInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSensitiveInfosOutcome>>();
    DescribeSensitiveInfosAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeSensitiveInfosRequest&,
        DescribeSensitiveInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeSubDomainsOutcome CtemClient::DescribeSubDomains(const DescribeSubDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubDomainsResponse rsp = DescribeSubDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubDomainsOutcome(rsp);
        else
            return DescribeSubDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubDomainsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSubDomainsAsync(const DescribeSubDomainsRequest& request, const DescribeSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSubDomainsRequest&;
    using Resp = DescribeSubDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSubDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeSubDomainsOutcomeCallable CtemClient::DescribeSubDomainsCallable(const DescribeSubDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSubDomainsOutcome>>();
    DescribeSubDomainsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeSubDomainsRequest&,
        DescribeSubDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeSuspiciousAssetsOutcome CtemClient::DescribeSuspiciousAssets(const DescribeSuspiciousAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuspiciousAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuspiciousAssetsResponse rsp = DescribeSuspiciousAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuspiciousAssetsOutcome(rsp);
        else
            return DescribeSuspiciousAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSuspiciousAssetsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSuspiciousAssetsAsync(const DescribeSuspiciousAssetsRequest& request, const DescribeSuspiciousAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSuspiciousAssetsRequest&;
    using Resp = DescribeSuspiciousAssetsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSuspiciousAssets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeSuspiciousAssetsOutcomeCallable CtemClient::DescribeSuspiciousAssetsCallable(const DescribeSuspiciousAssetsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSuspiciousAssetsOutcome>>();
    DescribeSuspiciousAssetsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeSuspiciousAssetsRequest&,
        DescribeSuspiciousAssetsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeVulsOutcome CtemClient::DescribeVuls(const DescribeVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsResponse rsp = DescribeVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsOutcome(rsp);
        else
            return DescribeVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeVulsAsync(const DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulsRequest&;
    using Resp = DescribeVulsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVuls", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeVulsOutcomeCallable CtemClient::DescribeVulsCallable(const DescribeVulsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulsOutcome>>();
    DescribeVulsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeVulsRequest&,
        DescribeVulsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeWeakPasswordsOutcome CtemClient::DescribeWeakPasswords(const DescribeWeakPasswordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeakPasswords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeakPasswordsResponse rsp = DescribeWeakPasswordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeakPasswordsOutcome(rsp);
        else
            return DescribeWeakPasswordsOutcome(o.GetError());
    }
    else
    {
        return DescribeWeakPasswordsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeWeakPasswordsAsync(const DescribeWeakPasswordsRequest& request, const DescribeWeakPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWeakPasswordsRequest&;
    using Resp = DescribeWeakPasswordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWeakPasswords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeWeakPasswordsOutcomeCallable CtemClient::DescribeWeakPasswordsCallable(const DescribeWeakPasswordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWeakPasswordsOutcome>>();
    DescribeWeakPasswordsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeWeakPasswordsRequest&,
        DescribeWeakPasswordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeWechatAppletsOutcome CtemClient::DescribeWechatApplets(const DescribeWechatAppletsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWechatApplets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWechatAppletsResponse rsp = DescribeWechatAppletsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWechatAppletsOutcome(rsp);
        else
            return DescribeWechatAppletsOutcome(o.GetError());
    }
    else
    {
        return DescribeWechatAppletsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeWechatAppletsAsync(const DescribeWechatAppletsRequest& request, const DescribeWechatAppletsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWechatAppletsRequest&;
    using Resp = DescribeWechatAppletsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWechatApplets", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeWechatAppletsOutcomeCallable CtemClient::DescribeWechatAppletsCallable(const DescribeWechatAppletsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWechatAppletsOutcome>>();
    DescribeWechatAppletsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeWechatAppletsRequest&,
        DescribeWechatAppletsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::DescribeWechatOfficialAccountsOutcome CtemClient::DescribeWechatOfficialAccounts(const DescribeWechatOfficialAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWechatOfficialAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWechatOfficialAccountsResponse rsp = DescribeWechatOfficialAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWechatOfficialAccountsOutcome(rsp);
        else
            return DescribeWechatOfficialAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeWechatOfficialAccountsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeWechatOfficialAccountsAsync(const DescribeWechatOfficialAccountsRequest& request, const DescribeWechatOfficialAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWechatOfficialAccountsRequest&;
    using Resp = DescribeWechatOfficialAccountsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWechatOfficialAccounts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::DescribeWechatOfficialAccountsOutcomeCallable CtemClient::DescribeWechatOfficialAccountsCallable(const DescribeWechatOfficialAccountsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWechatOfficialAccountsOutcome>>();
    DescribeWechatOfficialAccountsAsync(
    request,
    [prom](
        const CtemClient*,
        const DescribeWechatOfficialAccountsRequest&,
        DescribeWechatOfficialAccountsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::IgnoreDataOutcome CtemClient::IgnoreData(const IgnoreDataRequest &request)
{
    auto outcome = MakeRequest(request, "IgnoreData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IgnoreDataResponse rsp = IgnoreDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IgnoreDataOutcome(rsp);
        else
            return IgnoreDataOutcome(o.GetError());
    }
    else
    {
        return IgnoreDataOutcome(outcome.GetError());
    }
}

void CtemClient::IgnoreDataAsync(const IgnoreDataRequest& request, const IgnoreDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IgnoreDataRequest&;
    using Resp = IgnoreDataResponse;

    DoRequestAsync<Req, Resp>(
        "IgnoreData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::IgnoreDataOutcomeCallable CtemClient::IgnoreDataCallable(const IgnoreDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<IgnoreDataOutcome>>();
    IgnoreDataAsync(
    request,
    [prom](
        const CtemClient*,
        const IgnoreDataRequest&,
        IgnoreDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::ModifyCustomerOutcome CtemClient::ModifyCustomer(const ModifyCustomerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomerResponse rsp = ModifyCustomerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomerOutcome(rsp);
        else
            return ModifyCustomerOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomerOutcome(outcome.GetError());
    }
}

void CtemClient::ModifyCustomerAsync(const ModifyCustomerRequest& request, const ModifyCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomerRequest&;
    using Resp = ModifyCustomerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::ModifyCustomerOutcomeCallable CtemClient::ModifyCustomerCallable(const ModifyCustomerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomerOutcome>>();
    ModifyCustomerAsync(
    request,
    [prom](
        const CtemClient*,
        const ModifyCustomerRequest&,
        ModifyCustomerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::ModifyLabelOutcome CtemClient::ModifyLabel(const ModifyLabelRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLabel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLabelResponse rsp = ModifyLabelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLabelOutcome(rsp);
        else
            return ModifyLabelOutcome(o.GetError());
    }
    else
    {
        return ModifyLabelOutcome(outcome.GetError());
    }
}

void CtemClient::ModifyLabelAsync(const ModifyLabelRequest& request, const ModifyLabelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLabelRequest&;
    using Resp = ModifyLabelResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLabel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::ModifyLabelOutcomeCallable CtemClient::ModifyLabelCallable(const ModifyLabelRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLabelOutcome>>();
    ModifyLabelAsync(
    request,
    [prom](
        const CtemClient*,
        const ModifyLabelRequest&,
        ModifyLabelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::ModifySeedStatusOutcome CtemClient::ModifySeedStatus(const ModifySeedStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySeedStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySeedStatusResponse rsp = ModifySeedStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySeedStatusOutcome(rsp);
        else
            return ModifySeedStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySeedStatusOutcome(outcome.GetError());
    }
}

void CtemClient::ModifySeedStatusAsync(const ModifySeedStatusRequest& request, const ModifySeedStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySeedStatusRequest&;
    using Resp = ModifySeedStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySeedStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::ModifySeedStatusOutcomeCallable CtemClient::ModifySeedStatusCallable(const ModifySeedStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySeedStatusOutcome>>();
    ModifySeedStatusAsync(
    request,
    [prom](
        const CtemClient*,
        const ModifySeedStatusRequest&,
        ModifySeedStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CtemClient::StopJobRecordOutcome CtemClient::StopJobRecord(const StopJobRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopJobRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopJobRecordResponse rsp = StopJobRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopJobRecordOutcome(rsp);
        else
            return StopJobRecordOutcome(o.GetError());
    }
    else
    {
        return StopJobRecordOutcome(outcome.GetError());
    }
}

void CtemClient::StopJobRecordAsync(const StopJobRecordRequest& request, const StopJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopJobRecordRequest&;
    using Resp = StopJobRecordResponse;

    DoRequestAsync<Req, Resp>(
        "StopJobRecord", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CtemClient::StopJobRecordOutcomeCallable CtemClient::StopJobRecordCallable(const StopJobRecordRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopJobRecordOutcome>>();
    StopJobRecordAsync(
    request,
    [prom](
        const CtemClient*,
        const StopJobRecordRequest&,
        StopJobRecordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

