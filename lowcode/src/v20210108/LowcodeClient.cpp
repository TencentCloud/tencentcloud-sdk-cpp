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

#include <tencentcloud/lowcode/v20210108/LowcodeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lowcode::V20210108;
using namespace TencentCloud::Lowcode::V20210108::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-08";
    const string ENDPOINT = "lowcode.tencentcloudapi.com";
}

LowcodeClient::LowcodeClient(const Credential &credential, const string &region) :
    LowcodeClient(credential, region, ClientProfile())
{
}

LowcodeClient::LowcodeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LowcodeClient::CheckDeployAppOutcome LowcodeClient::CheckDeployApp(const CheckDeployAppRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDeployApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDeployAppResponse rsp = CheckDeployAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDeployAppOutcome(rsp);
        else
            return CheckDeployAppOutcome(o.GetError());
    }
    else
    {
        return CheckDeployAppOutcome(outcome.GetError());
    }
}

void LowcodeClient::CheckDeployAppAsync(const CheckDeployAppRequest& request, const CheckDeployAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckDeployAppRequest&;
    using Resp = CheckDeployAppResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDeployApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::CheckDeployAppOutcomeCallable LowcodeClient::CheckDeployAppCallable(const CheckDeployAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDeployAppOutcome>>();
    CheckDeployAppAsync(
    request,
    [prom](
        const LowcodeClient*,
        const CheckDeployAppRequest&,
        CheckDeployAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::CreateKnowledgeSetOutcome LowcodeClient::CreateKnowledgeSet(const CreateKnowledgeSetRequest &request)
{
    auto outcome = MakeRequest(request, "CreateKnowledgeSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateKnowledgeSetResponse rsp = CreateKnowledgeSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateKnowledgeSetOutcome(rsp);
        else
            return CreateKnowledgeSetOutcome(o.GetError());
    }
    else
    {
        return CreateKnowledgeSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::CreateKnowledgeSetAsync(const CreateKnowledgeSetRequest& request, const CreateKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateKnowledgeSetRequest&;
    using Resp = CreateKnowledgeSetResponse;

    DoRequestAsync<Req, Resp>(
        "CreateKnowledgeSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::CreateKnowledgeSetOutcomeCallable LowcodeClient::CreateKnowledgeSetCallable(const CreateKnowledgeSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateKnowledgeSetOutcome>>();
    CreateKnowledgeSetAsync(
    request,
    [prom](
        const LowcodeClient*,
        const CreateKnowledgeSetRequest&,
        CreateKnowledgeSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DeleteAppBindWxAppOutcome LowcodeClient::DeleteAppBindWxApp(const DeleteAppBindWxAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppBindWxApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppBindWxAppResponse rsp = DeleteAppBindWxAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppBindWxAppOutcome(rsp);
        else
            return DeleteAppBindWxAppOutcome(o.GetError());
    }
    else
    {
        return DeleteAppBindWxAppOutcome(outcome.GetError());
    }
}

void LowcodeClient::DeleteAppBindWxAppAsync(const DeleteAppBindWxAppRequest& request, const DeleteAppBindWxAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAppBindWxAppRequest&;
    using Resp = DeleteAppBindWxAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAppBindWxApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DeleteAppBindWxAppOutcomeCallable LowcodeClient::DeleteAppBindWxAppCallable(const DeleteAppBindWxAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAppBindWxAppOutcome>>();
    DeleteAppBindWxAppAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DeleteAppBindWxAppRequest&,
        DeleteAppBindWxAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DeleteKnowledgeDocumentSetOutcome LowcodeClient::DeleteKnowledgeDocumentSet(const DeleteKnowledgeDocumentSetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKnowledgeDocumentSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKnowledgeDocumentSetResponse rsp = DeleteKnowledgeDocumentSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKnowledgeDocumentSetOutcome(rsp);
        else
            return DeleteKnowledgeDocumentSetOutcome(o.GetError());
    }
    else
    {
        return DeleteKnowledgeDocumentSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::DeleteKnowledgeDocumentSetAsync(const DeleteKnowledgeDocumentSetRequest& request, const DeleteKnowledgeDocumentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteKnowledgeDocumentSetRequest&;
    using Resp = DeleteKnowledgeDocumentSetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKnowledgeDocumentSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DeleteKnowledgeDocumentSetOutcomeCallable LowcodeClient::DeleteKnowledgeDocumentSetCallable(const DeleteKnowledgeDocumentSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKnowledgeDocumentSetOutcome>>();
    DeleteKnowledgeDocumentSetAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DeleteKnowledgeDocumentSetRequest&,
        DeleteKnowledgeDocumentSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DeleteKnowledgeSetOutcome LowcodeClient::DeleteKnowledgeSet(const DeleteKnowledgeSetRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteKnowledgeSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteKnowledgeSetResponse rsp = DeleteKnowledgeSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteKnowledgeSetOutcome(rsp);
        else
            return DeleteKnowledgeSetOutcome(o.GetError());
    }
    else
    {
        return DeleteKnowledgeSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::DeleteKnowledgeSetAsync(const DeleteKnowledgeSetRequest& request, const DeleteKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteKnowledgeSetRequest&;
    using Resp = DeleteKnowledgeSetResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteKnowledgeSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DeleteKnowledgeSetOutcomeCallable LowcodeClient::DeleteKnowledgeSetCallable(const DeleteKnowledgeSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteKnowledgeSetOutcome>>();
    DeleteKnowledgeSetAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DeleteKnowledgeSetRequest&,
        DeleteKnowledgeSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DeployAppOutcome LowcodeClient::DeployApp(const DeployAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeployApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployAppResponse rsp = DeployAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployAppOutcome(rsp);
        else
            return DeployAppOutcome(o.GetError());
    }
    else
    {
        return DeployAppOutcome(outcome.GetError());
    }
}

void LowcodeClient::DeployAppAsync(const DeployAppRequest& request, const DeployAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployAppRequest&;
    using Resp = DeployAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeployApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DeployAppOutcomeCallable LowcodeClient::DeployAppCallable(const DeployAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployAppOutcome>>();
    DeployAppAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DeployAppRequest&,
        DeployAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeAppsOutcome LowcodeClient::DescribeApps(const DescribeAppsRequest &request)
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

void LowcodeClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

LowcodeClient::DescribeAppsOutcomeCallable LowcodeClient::DescribeAppsCallable(const DescribeAppsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAppsOutcome>>();
    DescribeAppsAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeAppsRequest&,
        DescribeAppsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeDataSourceListOutcome LowcodeClient::DescribeDataSourceList(const DescribeDataSourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDataSourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDataSourceListResponse rsp = DescribeDataSourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDataSourceListOutcome(rsp);
        else
            return DescribeDataSourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDataSourceListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeDataSourceListAsync(const DescribeDataSourceListRequest& request, const DescribeDataSourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDataSourceListRequest&;
    using Resp = DescribeDataSourceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDataSourceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DescribeDataSourceListOutcomeCallable LowcodeClient::DescribeDataSourceListCallable(const DescribeDataSourceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDataSourceListOutcome>>();
    DescribeDataSourceListAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeDataSourceListRequest&,
        DescribeDataSourceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeKnowledgeDocumentSetDetailOutcome LowcodeClient::DescribeKnowledgeDocumentSetDetail(const DescribeKnowledgeDocumentSetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeDocumentSetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeDocumentSetDetailResponse rsp = DescribeKnowledgeDocumentSetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeDocumentSetDetailOutcome(rsp);
        else
            return DescribeKnowledgeDocumentSetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeDocumentSetDetailOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeKnowledgeDocumentSetDetailAsync(const DescribeKnowledgeDocumentSetDetailRequest& request, const DescribeKnowledgeDocumentSetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKnowledgeDocumentSetDetailRequest&;
    using Resp = DescribeKnowledgeDocumentSetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKnowledgeDocumentSetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DescribeKnowledgeDocumentSetDetailOutcomeCallable LowcodeClient::DescribeKnowledgeDocumentSetDetailCallable(const DescribeKnowledgeDocumentSetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKnowledgeDocumentSetDetailOutcome>>();
    DescribeKnowledgeDocumentSetDetailAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeKnowledgeDocumentSetDetailRequest&,
        DescribeKnowledgeDocumentSetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeKnowledgeDocumentSetListOutcome LowcodeClient::DescribeKnowledgeDocumentSetList(const DescribeKnowledgeDocumentSetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeDocumentSetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeDocumentSetListResponse rsp = DescribeKnowledgeDocumentSetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeDocumentSetListOutcome(rsp);
        else
            return DescribeKnowledgeDocumentSetListOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeDocumentSetListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeKnowledgeDocumentSetListAsync(const DescribeKnowledgeDocumentSetListRequest& request, const DescribeKnowledgeDocumentSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKnowledgeDocumentSetListRequest&;
    using Resp = DescribeKnowledgeDocumentSetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKnowledgeDocumentSetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DescribeKnowledgeDocumentSetListOutcomeCallable LowcodeClient::DescribeKnowledgeDocumentSetListCallable(const DescribeKnowledgeDocumentSetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKnowledgeDocumentSetListOutcome>>();
    DescribeKnowledgeDocumentSetListAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeKnowledgeDocumentSetListRequest&,
        DescribeKnowledgeDocumentSetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeKnowledgeSetListOutcome LowcodeClient::DescribeKnowledgeSetList(const DescribeKnowledgeSetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeKnowledgeSetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeKnowledgeSetListResponse rsp = DescribeKnowledgeSetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeKnowledgeSetListOutcome(rsp);
        else
            return DescribeKnowledgeSetListOutcome(o.GetError());
    }
    else
    {
        return DescribeKnowledgeSetListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeKnowledgeSetListAsync(const DescribeKnowledgeSetListRequest& request, const DescribeKnowledgeSetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeKnowledgeSetListRequest&;
    using Resp = DescribeKnowledgeSetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeKnowledgeSetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DescribeKnowledgeSetListOutcomeCallable LowcodeClient::DescribeKnowledgeSetListCallable(const DescribeKnowledgeSetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeKnowledgeSetListOutcome>>();
    DescribeKnowledgeSetListAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeKnowledgeSetListRequest&,
        DescribeKnowledgeSetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeRelatedUsersOutcome LowcodeClient::DescribeRelatedUsers(const DescribeRelatedUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedUsersResponse rsp = DescribeRelatedUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedUsersOutcome(rsp);
        else
            return DescribeRelatedUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedUsersOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeRelatedUsersAsync(const DescribeRelatedUsersRequest& request, const DescribeRelatedUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRelatedUsersRequest&;
    using Resp = DescribeRelatedUsersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRelatedUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DescribeRelatedUsersOutcomeCallable LowcodeClient::DescribeRelatedUsersCallable(const DescribeRelatedUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRelatedUsersOutcome>>();
    DescribeRelatedUsersAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeRelatedUsersRequest&,
        DescribeRelatedUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::DescribeResourceRoleListOutcome LowcodeClient::DescribeResourceRoleList(const DescribeResourceRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceRoleListResponse rsp = DescribeResourceRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceRoleListOutcome(rsp);
        else
            return DescribeResourceRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceRoleListOutcome(outcome.GetError());
    }
}

void LowcodeClient::DescribeResourceRoleListAsync(const DescribeResourceRoleListRequest& request, const DescribeResourceRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceRoleListRequest&;
    using Resp = DescribeResourceRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::DescribeResourceRoleListOutcomeCallable LowcodeClient::DescribeResourceRoleListCallable(const DescribeResourceRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceRoleListOutcome>>();
    DescribeResourceRoleListAsync(
    request,
    [prom](
        const LowcodeClient*,
        const DescribeResourceRoleListRequest&,
        DescribeResourceRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::PutWxAppIdToWeAppOutcome LowcodeClient::PutWxAppIdToWeApp(const PutWxAppIdToWeAppRequest &request)
{
    auto outcome = MakeRequest(request, "PutWxAppIdToWeApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PutWxAppIdToWeAppResponse rsp = PutWxAppIdToWeAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PutWxAppIdToWeAppOutcome(rsp);
        else
            return PutWxAppIdToWeAppOutcome(o.GetError());
    }
    else
    {
        return PutWxAppIdToWeAppOutcome(outcome.GetError());
    }
}

void LowcodeClient::PutWxAppIdToWeAppAsync(const PutWxAppIdToWeAppRequest& request, const PutWxAppIdToWeAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const PutWxAppIdToWeAppRequest&;
    using Resp = PutWxAppIdToWeAppResponse;

    DoRequestAsync<Req, Resp>(
        "PutWxAppIdToWeApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::PutWxAppIdToWeAppOutcomeCallable LowcodeClient::PutWxAppIdToWeAppCallable(const PutWxAppIdToWeAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<PutWxAppIdToWeAppOutcome>>();
    PutWxAppIdToWeAppAsync(
    request,
    [prom](
        const LowcodeClient*,
        const PutWxAppIdToWeAppRequest&,
        PutWxAppIdToWeAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::SearchDocListOutcome LowcodeClient::SearchDocList(const SearchDocListRequest &request)
{
    auto outcome = MakeRequest(request, "SearchDocList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchDocListResponse rsp = SearchDocListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchDocListOutcome(rsp);
        else
            return SearchDocListOutcome(o.GetError());
    }
    else
    {
        return SearchDocListOutcome(outcome.GetError());
    }
}

void LowcodeClient::SearchDocListAsync(const SearchDocListRequest& request, const SearchDocListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchDocListRequest&;
    using Resp = SearchDocListResponse;

    DoRequestAsync<Req, Resp>(
        "SearchDocList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::SearchDocListOutcomeCallable LowcodeClient::SearchDocListCallable(const SearchDocListRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchDocListOutcome>>();
    SearchDocListAsync(
    request,
    [prom](
        const LowcodeClient*,
        const SearchDocListRequest&,
        SearchDocListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::UpdateKnowledgeSetOutcome LowcodeClient::UpdateKnowledgeSet(const UpdateKnowledgeSetRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateKnowledgeSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateKnowledgeSetResponse rsp = UpdateKnowledgeSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateKnowledgeSetOutcome(rsp);
        else
            return UpdateKnowledgeSetOutcome(o.GetError());
    }
    else
    {
        return UpdateKnowledgeSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::UpdateKnowledgeSetAsync(const UpdateKnowledgeSetRequest& request, const UpdateKnowledgeSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateKnowledgeSetRequest&;
    using Resp = UpdateKnowledgeSetResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateKnowledgeSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::UpdateKnowledgeSetOutcomeCallable LowcodeClient::UpdateKnowledgeSetCallable(const UpdateKnowledgeSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateKnowledgeSetOutcome>>();
    UpdateKnowledgeSetAsync(
    request,
    [prom](
        const LowcodeClient*,
        const UpdateKnowledgeSetRequest&,
        UpdateKnowledgeSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

LowcodeClient::UploadKnowledgeDocumentSetOutcome LowcodeClient::UploadKnowledgeDocumentSet(const UploadKnowledgeDocumentSetRequest &request)
{
    auto outcome = MakeRequest(request, "UploadKnowledgeDocumentSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadKnowledgeDocumentSetResponse rsp = UploadKnowledgeDocumentSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadKnowledgeDocumentSetOutcome(rsp);
        else
            return UploadKnowledgeDocumentSetOutcome(o.GetError());
    }
    else
    {
        return UploadKnowledgeDocumentSetOutcome(outcome.GetError());
    }
}

void LowcodeClient::UploadKnowledgeDocumentSetAsync(const UploadKnowledgeDocumentSetRequest& request, const UploadKnowledgeDocumentSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadKnowledgeDocumentSetRequest&;
    using Resp = UploadKnowledgeDocumentSetResponse;

    DoRequestAsync<Req, Resp>(
        "UploadKnowledgeDocumentSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

LowcodeClient::UploadKnowledgeDocumentSetOutcomeCallable LowcodeClient::UploadKnowledgeDocumentSetCallable(const UploadKnowledgeDocumentSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadKnowledgeDocumentSetOutcome>>();
    UploadKnowledgeDocumentSetAsync(
    request,
    [prom](
        const LowcodeClient*,
        const UploadKnowledgeDocumentSetRequest&,
        UploadKnowledgeDocumentSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

