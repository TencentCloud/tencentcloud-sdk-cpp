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

#include <tencentcloud/bi/v20220105/BiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bi::V20220105;
using namespace TencentCloud::Bi::V20220105::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-05";
    const string ENDPOINT = "bi.tencentcloudapi.com";
}

BiClient::BiClient(const Credential &credential, const string &region) :
    BiClient(credential, region, ClientProfile())
{
}

BiClient::BiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BiClient::ApplyEmbedIntervalOutcome BiClient::ApplyEmbedInterval(const ApplyEmbedIntervalRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyEmbedInterval");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyEmbedIntervalResponse rsp = ApplyEmbedIntervalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyEmbedIntervalOutcome(rsp);
        else
            return ApplyEmbedIntervalOutcome(o.GetError());
    }
    else
    {
        return ApplyEmbedIntervalOutcome(outcome.GetError());
    }
}

void BiClient::ApplyEmbedIntervalAsync(const ApplyEmbedIntervalRequest& request, const ApplyEmbedIntervalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyEmbedIntervalRequest&;
    using Resp = ApplyEmbedIntervalResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyEmbedInterval", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ApplyEmbedIntervalOutcomeCallable BiClient::ApplyEmbedIntervalCallable(const ApplyEmbedIntervalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyEmbedIntervalOutcome>>();
    ApplyEmbedIntervalAsync(
    request,
    [prom](
        const BiClient*,
        const ApplyEmbedIntervalRequest&,
        ApplyEmbedIntervalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ClearEmbedTokenOutcome BiClient::ClearEmbedToken(const ClearEmbedTokenRequest &request)
{
    auto outcome = MakeRequest(request, "ClearEmbedToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ClearEmbedTokenResponse rsp = ClearEmbedTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ClearEmbedTokenOutcome(rsp);
        else
            return ClearEmbedTokenOutcome(o.GetError());
    }
    else
    {
        return ClearEmbedTokenOutcome(outcome.GetError());
    }
}

void BiClient::ClearEmbedTokenAsync(const ClearEmbedTokenRequest& request, const ClearEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ClearEmbedTokenRequest&;
    using Resp = ClearEmbedTokenResponse;

    DoRequestAsync<Req, Resp>(
        "ClearEmbedToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ClearEmbedTokenOutcomeCallable BiClient::ClearEmbedTokenCallable(const ClearEmbedTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<ClearEmbedTokenOutcome>>();
    ClearEmbedTokenAsync(
    request,
    [prom](
        const BiClient*,
        const ClearEmbedTokenRequest&,
        ClearEmbedTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreateDatasourceOutcome BiClient::CreateDatasource(const CreateDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasourceResponse rsp = CreateDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasourceOutcome(rsp);
        else
            return CreateDatasourceOutcome(o.GetError());
    }
    else
    {
        return CreateDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::CreateDatasourceAsync(const CreateDatasourceRequest& request, const CreateDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatasourceRequest&;
    using Resp = CreateDatasourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatasource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreateDatasourceOutcomeCallable BiClient::CreateDatasourceCallable(const CreateDatasourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatasourceOutcome>>();
    CreateDatasourceAsync(
    request,
    [prom](
        const BiClient*,
        const CreateDatasourceRequest&,
        CreateDatasourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreateDatasourceCloudOutcome BiClient::CreateDatasourceCloud(const CreateDatasourceCloudRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatasourceCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatasourceCloudResponse rsp = CreateDatasourceCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatasourceCloudOutcome(rsp);
        else
            return CreateDatasourceCloudOutcome(o.GetError());
    }
    else
    {
        return CreateDatasourceCloudOutcome(outcome.GetError());
    }
}

void BiClient::CreateDatasourceCloudAsync(const CreateDatasourceCloudRequest& request, const CreateDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDatasourceCloudRequest&;
    using Resp = CreateDatasourceCloudResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDatasourceCloud", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreateDatasourceCloudOutcomeCallable BiClient::CreateDatasourceCloudCallable(const CreateDatasourceCloudRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDatasourceCloudOutcome>>();
    CreateDatasourceCloudAsync(
    request,
    [prom](
        const BiClient*,
        const CreateDatasourceCloudRequest&,
        CreateDatasourceCloudOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreateEmbedTokenOutcome BiClient::CreateEmbedToken(const CreateEmbedTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEmbedToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEmbedTokenResponse rsp = CreateEmbedTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEmbedTokenOutcome(rsp);
        else
            return CreateEmbedTokenOutcome(o.GetError());
    }
    else
    {
        return CreateEmbedTokenOutcome(outcome.GetError());
    }
}

void BiClient::CreateEmbedTokenAsync(const CreateEmbedTokenRequest& request, const CreateEmbedTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEmbedTokenRequest&;
    using Resp = CreateEmbedTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEmbedToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreateEmbedTokenOutcomeCallable BiClient::CreateEmbedTokenCallable(const CreateEmbedTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEmbedTokenOutcome>>();
    CreateEmbedTokenAsync(
    request,
    [prom](
        const BiClient*,
        const CreateEmbedTokenRequest&,
        CreateEmbedTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreatePermissionRanksOutcome BiClient::CreatePermissionRanks(const CreatePermissionRanksRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePermissionRanks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePermissionRanksResponse rsp = CreatePermissionRanksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePermissionRanksOutcome(rsp);
        else
            return CreatePermissionRanksOutcome(o.GetError());
    }
    else
    {
        return CreatePermissionRanksOutcome(outcome.GetError());
    }
}

void BiClient::CreatePermissionRanksAsync(const CreatePermissionRanksRequest& request, const CreatePermissionRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePermissionRanksRequest&;
    using Resp = CreatePermissionRanksResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePermissionRanks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreatePermissionRanksOutcomeCallable BiClient::CreatePermissionRanksCallable(const CreatePermissionRanksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePermissionRanksOutcome>>();
    CreatePermissionRanksAsync(
    request,
    [prom](
        const BiClient*,
        const CreatePermissionRanksRequest&,
        CreatePermissionRanksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreateProjectOutcome BiClient::CreateProject(const CreateProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProjectResponse rsp = CreateProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProjectOutcome(rsp);
        else
            return CreateProjectOutcome(o.GetError());
    }
    else
    {
        return CreateProjectOutcome(outcome.GetError());
    }
}

void BiClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProjectRequest&;
    using Resp = CreateProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreateProjectOutcomeCallable BiClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const BiClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreateUserRoleOutcome BiClient::CreateUserRole(const CreateUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserRoleResponse rsp = CreateUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserRoleOutcome(rsp);
        else
            return CreateUserRoleOutcome(o.GetError());
    }
    else
    {
        return CreateUserRoleOutcome(outcome.GetError());
    }
}

void BiClient::CreateUserRoleAsync(const CreateUserRoleRequest& request, const CreateUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRoleRequest&;
    using Resp = CreateUserRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreateUserRoleOutcomeCallable BiClient::CreateUserRoleCallable(const CreateUserRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserRoleOutcome>>();
    CreateUserRoleAsync(
    request,
    [prom](
        const BiClient*,
        const CreateUserRoleRequest&,
        CreateUserRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::CreateUserRoleProjectOutcome BiClient::CreateUserRoleProject(const CreateUserRoleProjectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserRoleProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserRoleProjectResponse rsp = CreateUserRoleProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserRoleProjectOutcome(rsp);
        else
            return CreateUserRoleProjectOutcome(o.GetError());
    }
    else
    {
        return CreateUserRoleProjectOutcome(outcome.GetError());
    }
}

void BiClient::CreateUserRoleProjectAsync(const CreateUserRoleProjectRequest& request, const CreateUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUserRoleProjectRequest&;
    using Resp = CreateUserRoleProjectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUserRoleProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::CreateUserRoleProjectOutcomeCallable BiClient::CreateUserRoleProjectCallable(const CreateUserRoleProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserRoleProjectOutcome>>();
    CreateUserRoleProjectAsync(
    request,
    [prom](
        const BiClient*,
        const CreateUserRoleProjectRequest&,
        CreateUserRoleProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DeleteDatasourceOutcome BiClient::DeleteDatasource(const DeleteDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatasourceResponse rsp = DeleteDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatasourceOutcome(rsp);
        else
            return DeleteDatasourceOutcome(o.GetError());
    }
    else
    {
        return DeleteDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::DeleteDatasourceAsync(const DeleteDatasourceRequest& request, const DeleteDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDatasourceRequest&;
    using Resp = DeleteDatasourceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDatasource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DeleteDatasourceOutcomeCallable BiClient::DeleteDatasourceCallable(const DeleteDatasourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDatasourceOutcome>>();
    DeleteDatasourceAsync(
    request,
    [prom](
        const BiClient*,
        const DeleteDatasourceRequest&,
        DeleteDatasourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DeleteProjectOutcome BiClient::DeleteProject(const DeleteProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectResponse rsp = DeleteProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectOutcome(rsp);
        else
            return DeleteProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectOutcome(outcome.GetError());
    }
}

void BiClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectRequest&;
    using Resp = DeleteProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DeleteProjectOutcomeCallable BiClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const BiClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DeleteUserRoleOutcome BiClient::DeleteUserRole(const DeleteUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserRoleResponse rsp = DeleteUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserRoleOutcome(rsp);
        else
            return DeleteUserRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteUserRoleOutcome(outcome.GetError());
    }
}

void BiClient::DeleteUserRoleAsync(const DeleteUserRoleRequest& request, const DeleteUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRoleRequest&;
    using Resp = DeleteUserRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DeleteUserRoleOutcomeCallable BiClient::DeleteUserRoleCallable(const DeleteUserRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserRoleOutcome>>();
    DeleteUserRoleAsync(
    request,
    [prom](
        const BiClient*,
        const DeleteUserRoleRequest&,
        DeleteUserRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DeleteUserRoleProjectOutcome BiClient::DeleteUserRoleProject(const DeleteUserRoleProjectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserRoleProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserRoleProjectResponse rsp = DeleteUserRoleProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserRoleProjectOutcome(rsp);
        else
            return DeleteUserRoleProjectOutcome(o.GetError());
    }
    else
    {
        return DeleteUserRoleProjectOutcome(outcome.GetError());
    }
}

void BiClient::DeleteUserRoleProjectAsync(const DeleteUserRoleProjectRequest& request, const DeleteUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUserRoleProjectRequest&;
    using Resp = DeleteUserRoleProjectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUserRoleProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DeleteUserRoleProjectOutcomeCallable BiClient::DeleteUserRoleProjectCallable(const DeleteUserRoleProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserRoleProjectOutcome>>();
    DeleteUserRoleProjectAsync(
    request,
    [prom](
        const BiClient*,
        const DeleteUserRoleProjectRequest&,
        DeleteUserRoleProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribeDatasourceListOutcome BiClient::DescribeDatasourceList(const DescribeDatasourceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatasourceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatasourceListResponse rsp = DescribeDatasourceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatasourceListOutcome(rsp);
        else
            return DescribeDatasourceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDatasourceListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeDatasourceListAsync(const DescribeDatasourceListRequest& request, const DescribeDatasourceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDatasourceListRequest&;
    using Resp = DescribeDatasourceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDatasourceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribeDatasourceListOutcomeCallable BiClient::DescribeDatasourceListCallable(const DescribeDatasourceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDatasourceListOutcome>>();
    DescribeDatasourceListAsync(
    request,
    [prom](
        const BiClient*,
        const DescribeDatasourceListRequest&,
        DescribeDatasourceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribePageWidgetListOutcome BiClient::DescribePageWidgetList(const DescribePageWidgetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePageWidgetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePageWidgetListResponse rsp = DescribePageWidgetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePageWidgetListOutcome(rsp);
        else
            return DescribePageWidgetListOutcome(o.GetError());
    }
    else
    {
        return DescribePageWidgetListOutcome(outcome.GetError());
    }
}

void BiClient::DescribePageWidgetListAsync(const DescribePageWidgetListRequest& request, const DescribePageWidgetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePageWidgetListRequest&;
    using Resp = DescribePageWidgetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePageWidgetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribePageWidgetListOutcomeCallable BiClient::DescribePageWidgetListCallable(const DescribePageWidgetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePageWidgetListOutcome>>();
    DescribePageWidgetListAsync(
    request,
    [prom](
        const BiClient*,
        const DescribePageWidgetListRequest&,
        DescribePageWidgetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribePermissionRanksInfoOutcome BiClient::DescribePermissionRanksInfo(const DescribePermissionRanksInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePermissionRanksInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePermissionRanksInfoResponse rsp = DescribePermissionRanksInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePermissionRanksInfoOutcome(rsp);
        else
            return DescribePermissionRanksInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePermissionRanksInfoOutcome(outcome.GetError());
    }
}

void BiClient::DescribePermissionRanksInfoAsync(const DescribePermissionRanksInfoRequest& request, const DescribePermissionRanksInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePermissionRanksInfoRequest&;
    using Resp = DescribePermissionRanksInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePermissionRanksInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribePermissionRanksInfoOutcomeCallable BiClient::DescribePermissionRanksInfoCallable(const DescribePermissionRanksInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePermissionRanksInfoOutcome>>();
    DescribePermissionRanksInfoAsync(
    request,
    [prom](
        const BiClient*,
        const DescribePermissionRanksInfoRequest&,
        DescribePermissionRanksInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribePermissionRoleInfoOutcome BiClient::DescribePermissionRoleInfo(const DescribePermissionRoleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePermissionRoleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePermissionRoleInfoResponse rsp = DescribePermissionRoleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePermissionRoleInfoOutcome(rsp);
        else
            return DescribePermissionRoleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePermissionRoleInfoOutcome(outcome.GetError());
    }
}

void BiClient::DescribePermissionRoleInfoAsync(const DescribePermissionRoleInfoRequest& request, const DescribePermissionRoleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePermissionRoleInfoRequest&;
    using Resp = DescribePermissionRoleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePermissionRoleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribePermissionRoleInfoOutcomeCallable BiClient::DescribePermissionRoleInfoCallable(const DescribePermissionRoleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePermissionRoleInfoOutcome>>();
    DescribePermissionRoleInfoAsync(
    request,
    [prom](
        const BiClient*,
        const DescribePermissionRoleInfoRequest&,
        DescribePermissionRoleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribePermissionStatusInfoOutcome BiClient::DescribePermissionStatusInfo(const DescribePermissionStatusInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePermissionStatusInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePermissionStatusInfoResponse rsp = DescribePermissionStatusInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePermissionStatusInfoOutcome(rsp);
        else
            return DescribePermissionStatusInfoOutcome(o.GetError());
    }
    else
    {
        return DescribePermissionStatusInfoOutcome(outcome.GetError());
    }
}

void BiClient::DescribePermissionStatusInfoAsync(const DescribePermissionStatusInfoRequest& request, const DescribePermissionStatusInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePermissionStatusInfoRequest&;
    using Resp = DescribePermissionStatusInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePermissionStatusInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribePermissionStatusInfoOutcomeCallable BiClient::DescribePermissionStatusInfoCallable(const DescribePermissionStatusInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePermissionStatusInfoOutcome>>();
    DescribePermissionStatusInfoAsync(
    request,
    [prom](
        const BiClient*,
        const DescribePermissionStatusInfoRequest&,
        DescribePermissionStatusInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribeProjectInfoOutcome BiClient::DescribeProjectInfo(const DescribeProjectInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectInfoResponse rsp = DescribeProjectInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectInfoOutcome(rsp);
        else
            return DescribeProjectInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectInfoOutcome(outcome.GetError());
    }
}

void BiClient::DescribeProjectInfoAsync(const DescribeProjectInfoRequest& request, const DescribeProjectInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectInfoRequest&;
    using Resp = DescribeProjectInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribeProjectInfoOutcomeCallable BiClient::DescribeProjectInfoCallable(const DescribeProjectInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectInfoOutcome>>();
    DescribeProjectInfoAsync(
    request,
    [prom](
        const BiClient*,
        const DescribeProjectInfoRequest&,
        DescribeProjectInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribeProjectListOutcome BiClient::DescribeProjectList(const DescribeProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectListResponse rsp = DescribeProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectListOutcome(rsp);
        else
            return DescribeProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeProjectListAsync(const DescribeProjectListRequest& request, const DescribeProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectListRequest&;
    using Resp = DescribeProjectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribeProjectListOutcomeCallable BiClient::DescribeProjectListCallable(const DescribeProjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectListOutcome>>();
    DescribeProjectListAsync(
    request,
    [prom](
        const BiClient*,
        const DescribeProjectListRequest&,
        DescribeProjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribeUserProjectListOutcome BiClient::DescribeUserProjectList(const DescribeUserProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserProjectListResponse rsp = DescribeUserProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserProjectListOutcome(rsp);
        else
            return DescribeUserProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserProjectListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeUserProjectListAsync(const DescribeUserProjectListRequest& request, const DescribeUserProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserProjectListRequest&;
    using Resp = DescribeUserProjectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserProjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribeUserProjectListOutcomeCallable BiClient::DescribeUserProjectListCallable(const DescribeUserProjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserProjectListOutcome>>();
    DescribeUserProjectListAsync(
    request,
    [prom](
        const BiClient*,
        const DescribeUserProjectListRequest&,
        DescribeUserProjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribeUserRoleListOutcome BiClient::DescribeUserRoleList(const DescribeUserRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRoleListResponse rsp = DescribeUserRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRoleListOutcome(rsp);
        else
            return DescribeUserRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRoleListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeUserRoleListAsync(const DescribeUserRoleListRequest& request, const DescribeUserRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRoleListRequest&;
    using Resp = DescribeUserRoleListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserRoleList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribeUserRoleListOutcomeCallable BiClient::DescribeUserRoleListCallable(const DescribeUserRoleListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserRoleListOutcome>>();
    DescribeUserRoleListAsync(
    request,
    [prom](
        const BiClient*,
        const DescribeUserRoleListRequest&,
        DescribeUserRoleListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::DescribeUserRoleProjectListOutcome BiClient::DescribeUserRoleProjectList(const DescribeUserRoleProjectListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserRoleProjectList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserRoleProjectListResponse rsp = DescribeUserRoleProjectListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserRoleProjectListOutcome(rsp);
        else
            return DescribeUserRoleProjectListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserRoleProjectListOutcome(outcome.GetError());
    }
}

void BiClient::DescribeUserRoleProjectListAsync(const DescribeUserRoleProjectListRequest& request, const DescribeUserRoleProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUserRoleProjectListRequest&;
    using Resp = DescribeUserRoleProjectListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserRoleProjectList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::DescribeUserRoleProjectListOutcomeCallable BiClient::DescribeUserRoleProjectListCallable(const DescribeUserRoleProjectListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserRoleProjectListOutcome>>();
    DescribeUserRoleProjectListAsync(
    request,
    [prom](
        const BiClient*,
        const DescribeUserRoleProjectListRequest&,
        DescribeUserRoleProjectListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ExportScreenPageOutcome BiClient::ExportScreenPage(const ExportScreenPageRequest &request)
{
    auto outcome = MakeRequest(request, "ExportScreenPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExportScreenPageResponse rsp = ExportScreenPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExportScreenPageOutcome(rsp);
        else
            return ExportScreenPageOutcome(o.GetError());
    }
    else
    {
        return ExportScreenPageOutcome(outcome.GetError());
    }
}

void BiClient::ExportScreenPageAsync(const ExportScreenPageRequest& request, const ExportScreenPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExportScreenPageRequest&;
    using Resp = ExportScreenPageResponse;

    DoRequestAsync<Req, Resp>(
        "ExportScreenPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ExportScreenPageOutcomeCallable BiClient::ExportScreenPageCallable(const ExportScreenPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExportScreenPageOutcome>>();
    ExportScreenPageAsync(
    request,
    [prom](
        const BiClient*,
        const ExportScreenPageRequest&,
        ExportScreenPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ModifyDatasourceOutcome BiClient::ModifyDatasource(const ModifyDatasourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatasource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatasourceResponse rsp = ModifyDatasourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatasourceOutcome(rsp);
        else
            return ModifyDatasourceOutcome(o.GetError());
    }
    else
    {
        return ModifyDatasourceOutcome(outcome.GetError());
    }
}

void BiClient::ModifyDatasourceAsync(const ModifyDatasourceRequest& request, const ModifyDatasourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatasourceRequest&;
    using Resp = ModifyDatasourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatasource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ModifyDatasourceOutcomeCallable BiClient::ModifyDatasourceCallable(const ModifyDatasourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatasourceOutcome>>();
    ModifyDatasourceAsync(
    request,
    [prom](
        const BiClient*,
        const ModifyDatasourceRequest&,
        ModifyDatasourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ModifyDatasourceCloudOutcome BiClient::ModifyDatasourceCloud(const ModifyDatasourceCloudRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatasourceCloud");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatasourceCloudResponse rsp = ModifyDatasourceCloudResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatasourceCloudOutcome(rsp);
        else
            return ModifyDatasourceCloudOutcome(o.GetError());
    }
    else
    {
        return ModifyDatasourceCloudOutcome(outcome.GetError());
    }
}

void BiClient::ModifyDatasourceCloudAsync(const ModifyDatasourceCloudRequest& request, const ModifyDatasourceCloudAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDatasourceCloudRequest&;
    using Resp = ModifyDatasourceCloudResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDatasourceCloud", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ModifyDatasourceCloudOutcomeCallable BiClient::ModifyDatasourceCloudCallable(const ModifyDatasourceCloudRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDatasourceCloudOutcome>>();
    ModifyDatasourceCloudAsync(
    request,
    [prom](
        const BiClient*,
        const ModifyDatasourceCloudRequest&,
        ModifyDatasourceCloudOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ModifyProjectOutcome BiClient::ModifyProject(const ModifyProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectResponse rsp = ModifyProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectOutcome(rsp);
        else
            return ModifyProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectOutcome(outcome.GetError());
    }
}

void BiClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectRequest&;
    using Resp = ModifyProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ModifyProjectOutcomeCallable BiClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const BiClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ModifyUserRoleOutcome BiClient::ModifyUserRole(const ModifyUserRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserRoleResponse rsp = ModifyUserRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserRoleOutcome(rsp);
        else
            return ModifyUserRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyUserRoleOutcome(outcome.GetError());
    }
}

void BiClient::ModifyUserRoleAsync(const ModifyUserRoleRequest& request, const ModifyUserRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRoleRequest&;
    using Resp = ModifyUserRoleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ModifyUserRoleOutcomeCallable BiClient::ModifyUserRoleCallable(const ModifyUserRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserRoleOutcome>>();
    ModifyUserRoleAsync(
    request,
    [prom](
        const BiClient*,
        const ModifyUserRoleRequest&,
        ModifyUserRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

BiClient::ModifyUserRoleProjectOutcome BiClient::ModifyUserRoleProject(const ModifyUserRoleProjectRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserRoleProject");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserRoleProjectResponse rsp = ModifyUserRoleProjectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserRoleProjectOutcome(rsp);
        else
            return ModifyUserRoleProjectOutcome(o.GetError());
    }
    else
    {
        return ModifyUserRoleProjectOutcome(outcome.GetError());
    }
}

void BiClient::ModifyUserRoleProjectAsync(const ModifyUserRoleProjectRequest& request, const ModifyUserRoleProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUserRoleProjectRequest&;
    using Resp = ModifyUserRoleProjectResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUserRoleProject", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

BiClient::ModifyUserRoleProjectOutcomeCallable BiClient::ModifyUserRoleProjectCallable(const ModifyUserRoleProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserRoleProjectOutcome>>();
    ModifyUserRoleProjectAsync(
    request,
    [prom](
        const BiClient*,
        const ModifyUserRoleProjectRequest&,
        ModifyUserRoleProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

