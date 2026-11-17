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

#include <tencentcloud/makers/v20261113/MakersClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Makers::V20261113;
using namespace TencentCloud::Makers::V20261113::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-11-13";
    const string ENDPOINT = "makers.tencentcloudapi.com";
}

MakersClient::MakersClient(const Credential &credential, const string &region) :
    MakersClient(credential, region, ClientProfile())
{
}

MakersClient::MakersClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MakersClient::CreateDeploymentOutcome MakersClient::CreateDeployment(const CreateDeploymentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeployment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeploymentResponse rsp = CreateDeploymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeploymentOutcome(rsp);
        else
            return CreateDeploymentOutcome(o.GetError());
    }
    else
    {
        return CreateDeploymentOutcome(outcome.GetError());
    }
}

void MakersClient::CreateDeploymentAsync(const CreateDeploymentRequest& request, const CreateDeploymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeploymentRequest&;
    using Resp = CreateDeploymentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeployment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::CreateDeploymentOutcomeCallable MakersClient::CreateDeploymentCallable(const CreateDeploymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeploymentOutcome>>();
    CreateDeploymentAsync(
    request,
    [prom](
        const MakersClient*,
        const CreateDeploymentRequest&,
        CreateDeploymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::CreateProjectOutcome MakersClient::CreateProject(const CreateProjectRequest &request)
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

void MakersClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MakersClient::CreateProjectOutcomeCallable MakersClient::CreateProjectCallable(const CreateProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProjectOutcome>>();
    CreateProjectAsync(
    request,
    [prom](
        const MakersClient*,
        const CreateProjectRequest&,
        CreateProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::CreateZoneCustomDomainOutcome MakersClient::CreateZoneCustomDomain(const CreateZoneCustomDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateZoneCustomDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateZoneCustomDomainResponse rsp = CreateZoneCustomDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateZoneCustomDomainOutcome(rsp);
        else
            return CreateZoneCustomDomainOutcome(o.GetError());
    }
    else
    {
        return CreateZoneCustomDomainOutcome(outcome.GetError());
    }
}

void MakersClient::CreateZoneCustomDomainAsync(const CreateZoneCustomDomainRequest& request, const CreateZoneCustomDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateZoneCustomDomainRequest&;
    using Resp = CreateZoneCustomDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateZoneCustomDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::CreateZoneCustomDomainOutcomeCallable MakersClient::CreateZoneCustomDomainCallable(const CreateZoneCustomDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateZoneCustomDomainOutcome>>();
    CreateZoneCustomDomainAsync(
    request,
    [prom](
        const MakersClient*,
        const CreateZoneCustomDomainRequest&,
        CreateZoneCustomDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DeleteProjectOutcome MakersClient::DeleteProject(const DeleteProjectRequest &request)
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

void MakersClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MakersClient::DeleteProjectOutcomeCallable MakersClient::DeleteProjectCallable(const DeleteProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectOutcome>>();
    DeleteProjectAsync(
    request,
    [prom](
        const MakersClient*,
        const DeleteProjectRequest&,
        DeleteProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DeleteProjectCustomDomainsOutcome MakersClient::DeleteProjectCustomDomains(const DeleteProjectCustomDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectCustomDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectCustomDomainsResponse rsp = DeleteProjectCustomDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectCustomDomainsOutcome(rsp);
        else
            return DeleteProjectCustomDomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectCustomDomainsOutcome(outcome.GetError());
    }
}

void MakersClient::DeleteProjectCustomDomainsAsync(const DeleteProjectCustomDomainsRequest& request, const DeleteProjectCustomDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectCustomDomainsRequest&;
    using Resp = DeleteProjectCustomDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProjectCustomDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DeleteProjectCustomDomainsOutcomeCallable MakersClient::DeleteProjectCustomDomainsCallable(const DeleteProjectCustomDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectCustomDomainsOutcome>>();
    DeleteProjectCustomDomainsAsync(
    request,
    [prom](
        const MakersClient*,
        const DeleteProjectCustomDomainsRequest&,
        DeleteProjectCustomDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DeleteProjectEnvsOutcome MakersClient::DeleteProjectEnvs(const DeleteProjectEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProjectEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProjectEnvsResponse rsp = DeleteProjectEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProjectEnvsOutcome(rsp);
        else
            return DeleteProjectEnvsOutcome(o.GetError());
    }
    else
    {
        return DeleteProjectEnvsOutcome(outcome.GetError());
    }
}

void MakersClient::DeleteProjectEnvsAsync(const DeleteProjectEnvsRequest& request, const DeleteProjectEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProjectEnvsRequest&;
    using Resp = DeleteProjectEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProjectEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DeleteProjectEnvsOutcomeCallable MakersClient::DeleteProjectEnvsCallable(const DeleteProjectEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProjectEnvsOutcome>>();
    DeleteProjectEnvsAsync(
    request,
    [prom](
        const MakersClient*,
        const DeleteProjectEnvsRequest&,
        DeleteProjectEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeCosTempTokenOutcome MakersClient::DescribeCosTempToken(const DescribeCosTempTokenRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCosTempToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCosTempTokenResponse rsp = DescribeCosTempTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCosTempTokenOutcome(rsp);
        else
            return DescribeCosTempTokenOutcome(o.GetError());
    }
    else
    {
        return DescribeCosTempTokenOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeCosTempTokenAsync(const DescribeCosTempTokenRequest& request, const DescribeCosTempTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCosTempTokenRequest&;
    using Resp = DescribeCosTempTokenResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCosTempToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeCosTempTokenOutcomeCallable MakersClient::DescribeCosTempTokenCallable(const DescribeCosTempTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCosTempTokenOutcome>>();
    DescribeCosTempTokenAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeCosTempTokenRequest&,
        DescribeCosTempTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeDeploymentLogOutcome MakersClient::DescribeDeploymentLog(const DescribeDeploymentLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeploymentLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeploymentLogResponse rsp = DescribeDeploymentLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeploymentLogOutcome(rsp);
        else
            return DescribeDeploymentLogOutcome(o.GetError());
    }
    else
    {
        return DescribeDeploymentLogOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeDeploymentLogAsync(const DescribeDeploymentLogRequest& request, const DescribeDeploymentLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeploymentLogRequest&;
    using Resp = DescribeDeploymentLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeploymentLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeDeploymentLogOutcomeCallable MakersClient::DescribeDeploymentLogCallable(const DescribeDeploymentLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeploymentLogOutcome>>();
    DescribeDeploymentLogAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeDeploymentLogRequest&,
        DescribeDeploymentLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeDeploymentsOutcome MakersClient::DescribeDeployments(const DescribeDeploymentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeploymentsResponse rsp = DescribeDeploymentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeploymentsOutcome(rsp);
        else
            return DescribeDeploymentsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeploymentsOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeDeploymentsAsync(const DescribeDeploymentsRequest& request, const DescribeDeploymentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeploymentsRequest&;
    using Resp = DescribeDeploymentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeployments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeDeploymentsOutcomeCallable MakersClient::DescribeDeploymentsCallable(const DescribeDeploymentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeploymentsOutcome>>();
    DescribeDeploymentsAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeDeploymentsRequest&,
        DescribeDeploymentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeEnvironmentsOutcome MakersClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentsRequest&;
    using Resp = DescribeEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeEnvironmentsOutcomeCallable MakersClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentsOutcome>>();
    DescribeEnvironmentsAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeEnvironmentsRequest&,
        DescribeEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeProjectEnvsOutcome MakersClient::DescribeProjectEnvs(const DescribeProjectEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjectEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectEnvsResponse rsp = DescribeProjectEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectEnvsOutcome(rsp);
        else
            return DescribeProjectEnvsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectEnvsOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeProjectEnvsAsync(const DescribeProjectEnvsRequest& request, const DescribeProjectEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectEnvsRequest&;
    using Resp = DescribeProjectEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjectEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeProjectEnvsOutcomeCallable MakersClient::DescribeProjectEnvsCallable(const DescribeProjectEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectEnvsOutcome>>();
    DescribeProjectEnvsAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeProjectEnvsRequest&,
        DescribeProjectEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeProjectsOutcome MakersClient::DescribeProjects(const DescribeProjectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProjects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProjectsResponse rsp = DescribeProjectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProjectsOutcome(rsp);
        else
            return DescribeProjectsOutcome(o.GetError());
    }
    else
    {
        return DescribeProjectsOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeProjectsAsync(const DescribeProjectsRequest& request, const DescribeProjectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProjectsRequest&;
    using Resp = DescribeProjectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProjects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeProjectsOutcomeCallable MakersClient::DescribeProjectsCallable(const DescribeProjectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProjectsOutcome>>();
    DescribeProjectsAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeProjectsRequest&,
        DescribeProjectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::DescribeZoneCustomDomainsOutcome MakersClient::DescribeZoneCustomDomains(const DescribeZoneCustomDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneCustomDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneCustomDomainsResponse rsp = DescribeZoneCustomDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneCustomDomainsOutcome(rsp);
        else
            return DescribeZoneCustomDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneCustomDomainsOutcome(outcome.GetError());
    }
}

void MakersClient::DescribeZoneCustomDomainsAsync(const DescribeZoneCustomDomainsRequest& request, const DescribeZoneCustomDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZoneCustomDomainsRequest&;
    using Resp = DescribeZoneCustomDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneCustomDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::DescribeZoneCustomDomainsOutcomeCallable MakersClient::DescribeZoneCustomDomainsCallable(const DescribeZoneCustomDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneCustomDomainsOutcome>>();
    DescribeZoneCustomDomainsAsync(
    request,
    [prom](
        const MakersClient*,
        const DescribeZoneCustomDomainsRequest&,
        DescribeZoneCustomDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::ModifyProjectOutcome MakersClient::ModifyProject(const ModifyProjectRequest &request)
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

void MakersClient::ModifyProjectAsync(const ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

MakersClient::ModifyProjectOutcomeCallable MakersClient::ModifyProjectCallable(const ModifyProjectRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectOutcome>>();
    ModifyProjectAsync(
    request,
    [prom](
        const MakersClient*,
        const ModifyProjectRequest&,
        ModifyProjectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::ModifyProjectEnvsOutcome MakersClient::ModifyProjectEnvs(const ModifyProjectEnvsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProjectEnvs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProjectEnvsResponse rsp = ModifyProjectEnvsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProjectEnvsOutcome(rsp);
        else
            return ModifyProjectEnvsOutcome(o.GetError());
    }
    else
    {
        return ModifyProjectEnvsOutcome(outcome.GetError());
    }
}

void MakersClient::ModifyProjectEnvsAsync(const ModifyProjectEnvsRequest& request, const ModifyProjectEnvsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProjectEnvsRequest&;
    using Resp = ModifyProjectEnvsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProjectEnvs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::ModifyProjectEnvsOutcomeCallable MakersClient::ModifyProjectEnvsCallable(const ModifyProjectEnvsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProjectEnvsOutcome>>();
    ModifyProjectEnvsAsync(
    request,
    [prom](
        const MakersClient*,
        const ModifyProjectEnvsRequest&,
        ModifyProjectEnvsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MakersClient::ModifyZoneCustomDomainEnvOutcome MakersClient::ModifyZoneCustomDomainEnv(const ModifyZoneCustomDomainEnvRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneCustomDomainEnv");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneCustomDomainEnvResponse rsp = ModifyZoneCustomDomainEnvResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneCustomDomainEnvOutcome(rsp);
        else
            return ModifyZoneCustomDomainEnvOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneCustomDomainEnvOutcome(outcome.GetError());
    }
}

void MakersClient::ModifyZoneCustomDomainEnvAsync(const ModifyZoneCustomDomainEnvRequest& request, const ModifyZoneCustomDomainEnvAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyZoneCustomDomainEnvRequest&;
    using Resp = ModifyZoneCustomDomainEnvResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyZoneCustomDomainEnv", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MakersClient::ModifyZoneCustomDomainEnvOutcomeCallable MakersClient::ModifyZoneCustomDomainEnvCallable(const ModifyZoneCustomDomainEnvRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyZoneCustomDomainEnvOutcome>>();
    ModifyZoneCustomDomainEnvAsync(
    request,
    [prom](
        const MakersClient*,
        const ModifyZoneCustomDomainEnvRequest&,
        ModifyZoneCustomDomainEnvOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

