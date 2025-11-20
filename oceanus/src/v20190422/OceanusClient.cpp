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

#include <tencentcloud/oceanus/v20190422/OceanusClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Oceanus::V20190422;
using namespace TencentCloud::Oceanus::V20190422::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-04-22";
    const string ENDPOINT = "oceanus.tencentcloudapi.com";
}

OceanusClient::OceanusClient(const Credential &credential, const string &region) :
    OceanusClient(credential, region, ClientProfile())
{
}

OceanusClient::OceanusClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


OceanusClient::CheckConnectorNameOutcome OceanusClient::CheckConnectorName(const CheckConnectorNameRequest &request)
{
    auto outcome = MakeRequest(request, "CheckConnectorName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckConnectorNameResponse rsp = CheckConnectorNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckConnectorNameOutcome(rsp);
        else
            return CheckConnectorNameOutcome(o.GetError());
    }
    else
    {
        return CheckConnectorNameOutcome(outcome.GetError());
    }
}

void OceanusClient::CheckConnectorNameAsync(const CheckConnectorNameRequest& request, const CheckConnectorNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckConnectorNameRequest&;
    using Resp = CheckConnectorNameResponse;

    DoRequestAsync<Req, Resp>(
        "CheckConnectorName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CheckConnectorNameOutcomeCallable OceanusClient::CheckConnectorNameCallable(const CheckConnectorNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckConnectorNameOutcome>>();
    CheckConnectorNameAsync(
    request,
    [prom](
        const OceanusClient*,
        const CheckConnectorNameRequest&,
        CheckConnectorNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CheckSavepointOutcome OceanusClient::CheckSavepoint(const CheckSavepointRequest &request)
{
    auto outcome = MakeRequest(request, "CheckSavepoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckSavepointResponse rsp = CheckSavepointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckSavepointOutcome(rsp);
        else
            return CheckSavepointOutcome(o.GetError());
    }
    else
    {
        return CheckSavepointOutcome(outcome.GetError());
    }
}

void OceanusClient::CheckSavepointAsync(const CheckSavepointRequest& request, const CheckSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckSavepointRequest&;
    using Resp = CheckSavepointResponse;

    DoRequestAsync<Req, Resp>(
        "CheckSavepoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CheckSavepointOutcomeCallable OceanusClient::CheckSavepointCallable(const CheckSavepointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckSavepointOutcome>>();
    CheckSavepointAsync(
    request,
    [prom](
        const OceanusClient*,
        const CheckSavepointRequest&,
        CheckSavepointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CopyJobsOutcome OceanusClient::CopyJobs(const CopyJobsRequest &request)
{
    auto outcome = MakeRequest(request, "CopyJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyJobsResponse rsp = CopyJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyJobsOutcome(rsp);
        else
            return CopyJobsOutcome(o.GetError());
    }
    else
    {
        return CopyJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::CopyJobsAsync(const CopyJobsRequest& request, const CopyJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CopyJobsRequest&;
    using Resp = CopyJobsResponse;

    DoRequestAsync<Req, Resp>(
        "CopyJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CopyJobsOutcomeCallable OceanusClient::CopyJobsCallable(const CopyJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CopyJobsOutcome>>();
    CopyJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const CopyJobsRequest&,
        CopyJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateConnectorOutcome OceanusClient::CreateConnector(const CreateConnectorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConnector");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConnectorResponse rsp = CreateConnectorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConnectorOutcome(rsp);
        else
            return CreateConnectorOutcome(o.GetError());
    }
    else
    {
        return CreateConnectorOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateConnectorAsync(const CreateConnectorRequest& request, const CreateConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConnectorRequest&;
    using Resp = CreateConnectorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConnector", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateConnectorOutcomeCallable OceanusClient::CreateConnectorCallable(const CreateConnectorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConnectorOutcome>>();
    CreateConnectorAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateConnectorRequest&,
        CreateConnectorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateFolderOutcome OceanusClient::CreateFolder(const CreateFolderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFolderResponse rsp = CreateFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFolderOutcome(rsp);
        else
            return CreateFolderOutcome(o.GetError());
    }
    else
    {
        return CreateFolderOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFolderRequest&;
    using Resp = CreateFolderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateFolderOutcomeCallable OceanusClient::CreateFolderCallable(const CreateFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFolderOutcome>>();
    CreateFolderAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateFolderRequest&,
        CreateFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateJobOutcome OceanusClient::CreateJob(const CreateJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobResponse rsp = CreateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobOutcome(rsp);
        else
            return CreateJobOutcome(o.GetError());
    }
    else
    {
        return CreateJobOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateJobAsync(const CreateJobRequest& request, const CreateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateJobRequest&;
    using Resp = CreateJobResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateJobOutcomeCallable OceanusClient::CreateJobCallable(const CreateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJobOutcome>>();
    CreateJobAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateJobRequest&,
        CreateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateJobConfigOutcome OceanusClient::CreateJobConfig(const CreateJobConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJobConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobConfigResponse rsp = CreateJobConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobConfigOutcome(rsp);
        else
            return CreateJobConfigOutcome(o.GetError());
    }
    else
    {
        return CreateJobConfigOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateJobConfigAsync(const CreateJobConfigRequest& request, const CreateJobConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateJobConfigRequest&;
    using Resp = CreateJobConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJobConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateJobConfigOutcomeCallable OceanusClient::CreateJobConfigCallable(const CreateJobConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJobConfigOutcome>>();
    CreateJobConfigAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateJobConfigRequest&,
        CreateJobConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateResourceOutcome OceanusClient::CreateResource(const CreateResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceResponse rsp = CreateResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceOutcome(rsp);
        else
            return CreateResourceOutcome(o.GetError());
    }
    else
    {
        return CreateResourceOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceRequest&;
    using Resp = CreateResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateResourceOutcomeCallable OceanusClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceOutcome>>();
    CreateResourceAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateResourceRequest&,
        CreateResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateResourceConfigOutcome OceanusClient::CreateResourceConfig(const CreateResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceConfigResponse rsp = CreateResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceConfigOutcome(rsp);
        else
            return CreateResourceConfigOutcome(o.GetError());
    }
    else
    {
        return CreateResourceConfigOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateResourceConfigAsync(const CreateResourceConfigRequest& request, const CreateResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceConfigRequest&;
    using Resp = CreateResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateResourceConfigOutcomeCallable OceanusClient::CreateResourceConfigCallable(const CreateResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceConfigOutcome>>();
    CreateResourceConfigAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateResourceConfigRequest&,
        CreateResourceConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateVariableOutcome OceanusClient::CreateVariable(const CreateVariableRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVariable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVariableResponse rsp = CreateVariableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVariableOutcome(rsp);
        else
            return CreateVariableOutcome(o.GetError());
    }
    else
    {
        return CreateVariableOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateVariableAsync(const CreateVariableRequest& request, const CreateVariableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateVariableRequest&;
    using Resp = CreateVariableResponse;

    DoRequestAsync<Req, Resp>(
        "CreateVariable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateVariableOutcomeCallable OceanusClient::CreateVariableCallable(const CreateVariableRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateVariableOutcome>>();
    CreateVariableAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateVariableRequest&,
        CreateVariableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::CreateWorkSpaceOutcome OceanusClient::CreateWorkSpace(const CreateWorkSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkSpaceResponse rsp = CreateWorkSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkSpaceOutcome(rsp);
        else
            return CreateWorkSpaceOutcome(o.GetError());
    }
    else
    {
        return CreateWorkSpaceOutcome(outcome.GetError());
    }
}

void OceanusClient::CreateWorkSpaceAsync(const CreateWorkSpaceRequest& request, const CreateWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkSpaceRequest&;
    using Resp = CreateWorkSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::CreateWorkSpaceOutcomeCallable OceanusClient::CreateWorkSpaceCallable(const CreateWorkSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkSpaceOutcome>>();
    CreateWorkSpaceAsync(
    request,
    [prom](
        const OceanusClient*,
        const CreateWorkSpaceRequest&,
        CreateWorkSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteFoldersOutcome OceanusClient::DeleteFolders(const DeleteFoldersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFolders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFoldersResponse rsp = DeleteFoldersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFoldersOutcome(rsp);
        else
            return DeleteFoldersOutcome(o.GetError());
    }
    else
    {
        return DeleteFoldersOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteFoldersAsync(const DeleteFoldersRequest& request, const DeleteFoldersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFoldersRequest&;
    using Resp = DeleteFoldersResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFolders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteFoldersOutcomeCallable OceanusClient::DeleteFoldersCallable(const DeleteFoldersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFoldersOutcome>>();
    DeleteFoldersAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteFoldersRequest&,
        DeleteFoldersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteJobConfigsOutcome OceanusClient::DeleteJobConfigs(const DeleteJobConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobConfigsResponse rsp = DeleteJobConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobConfigsOutcome(rsp);
        else
            return DeleteJobConfigsOutcome(o.GetError());
    }
    else
    {
        return DeleteJobConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteJobConfigsAsync(const DeleteJobConfigsRequest& request, const DeleteJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobConfigsRequest&;
    using Resp = DeleteJobConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJobConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteJobConfigsOutcomeCallable OceanusClient::DeleteJobConfigsCallable(const DeleteJobConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobConfigsOutcome>>();
    DeleteJobConfigsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteJobConfigsRequest&,
        DeleteJobConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteJobsOutcome OceanusClient::DeleteJobs(const DeleteJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobsResponse rsp = DeleteJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobsOutcome(rsp);
        else
            return DeleteJobsOutcome(o.GetError());
    }
    else
    {
        return DeleteJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteJobsAsync(const DeleteJobsRequest& request, const DeleteJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobsRequest&;
    using Resp = DeleteJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteJobsOutcomeCallable OceanusClient::DeleteJobsCallable(const DeleteJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobsOutcome>>();
    DeleteJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteJobsRequest&,
        DeleteJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteResourceConfigsOutcome OceanusClient::DeleteResourceConfigs(const DeleteResourceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResourceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourceConfigsResponse rsp = DeleteResourceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourceConfigsOutcome(rsp);
        else
            return DeleteResourceConfigsOutcome(o.GetError());
    }
    else
    {
        return DeleteResourceConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteResourceConfigsAsync(const DeleteResourceConfigsRequest& request, const DeleteResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourceConfigsRequest&;
    using Resp = DeleteResourceConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResourceConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteResourceConfigsOutcomeCallable OceanusClient::DeleteResourceConfigsCallable(const DeleteResourceConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourceConfigsOutcome>>();
    DeleteResourceConfigsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteResourceConfigsRequest&,
        DeleteResourceConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteResourcesOutcome OceanusClient::DeleteResources(const DeleteResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteResourcesResponse rsp = DeleteResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteResourcesOutcome(rsp);
        else
            return DeleteResourcesOutcome(o.GetError());
    }
    else
    {
        return DeleteResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteResourcesAsync(const DeleteResourcesRequest& request, const DeleteResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteResourcesRequest&;
    using Resp = DeleteResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteResourcesOutcomeCallable OceanusClient::DeleteResourcesCallable(const DeleteResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteResourcesOutcome>>();
    DeleteResourcesAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteResourcesRequest&,
        DeleteResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteTableConfigOutcome OceanusClient::DeleteTableConfig(const DeleteTableConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTableConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTableConfigResponse rsp = DeleteTableConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTableConfigOutcome(rsp);
        else
            return DeleteTableConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteTableConfigOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteTableConfigAsync(const DeleteTableConfigRequest& request, const DeleteTableConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTableConfigRequest&;
    using Resp = DeleteTableConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTableConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteTableConfigOutcomeCallable OceanusClient::DeleteTableConfigCallable(const DeleteTableConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTableConfigOutcome>>();
    DeleteTableConfigAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteTableConfigRequest&,
        DeleteTableConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DeleteWorkSpaceOutcome OceanusClient::DeleteWorkSpace(const DeleteWorkSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkSpaceResponse rsp = DeleteWorkSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkSpaceOutcome(rsp);
        else
            return DeleteWorkSpaceOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkSpaceOutcome(outcome.GetError());
    }
}

void OceanusClient::DeleteWorkSpaceAsync(const DeleteWorkSpaceRequest& request, const DeleteWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkSpaceRequest&;
    using Resp = DeleteWorkSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DeleteWorkSpaceOutcomeCallable OceanusClient::DeleteWorkSpaceCallable(const DeleteWorkSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkSpaceOutcome>>();
    DeleteWorkSpaceAsync(
    request,
    [prom](
        const OceanusClient*,
        const DeleteWorkSpaceRequest&,
        DeleteWorkSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeClustersOutcome OceanusClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClustersRequest&;
    using Resp = DescribeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeClustersOutcomeCallable OceanusClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeFolderOutcome OceanusClient::DescribeFolder(const DescribeFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFolderResponse rsp = DescribeFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFolderOutcome(rsp);
        else
            return DescribeFolderOutcome(o.GetError());
    }
    else
    {
        return DescribeFolderOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeFolderAsync(const DescribeFolderRequest& request, const DescribeFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFolderRequest&;
    using Resp = DescribeFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeFolderOutcomeCallable OceanusClient::DescribeFolderCallable(const DescribeFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFolderOutcome>>();
    DescribeFolderAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeFolderRequest&,
        DescribeFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeJobConfigsOutcome OceanusClient::DescribeJobConfigs(const DescribeJobConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobConfigsResponse rsp = DescribeJobConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobConfigsOutcome(rsp);
        else
            return DescribeJobConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobConfigsAsync(const DescribeJobConfigsRequest& request, const DescribeJobConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobConfigsRequest&;
    using Resp = DescribeJobConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeJobConfigsOutcomeCallable OceanusClient::DescribeJobConfigsCallable(const DescribeJobConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobConfigsOutcome>>();
    DescribeJobConfigsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeJobConfigsRequest&,
        DescribeJobConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeJobEventsOutcome OceanusClient::DescribeJobEvents(const DescribeJobEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobEventsResponse rsp = DescribeJobEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobEventsOutcome(rsp);
        else
            return DescribeJobEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobEventsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobEventsAsync(const DescribeJobEventsRequest& request, const DescribeJobEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobEventsRequest&;
    using Resp = DescribeJobEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeJobEventsOutcomeCallable OceanusClient::DescribeJobEventsCallable(const DescribeJobEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobEventsOutcome>>();
    DescribeJobEventsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeJobEventsRequest&,
        DescribeJobEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeJobRuntimeInfoOutcome OceanusClient::DescribeJobRuntimeInfo(const DescribeJobRuntimeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobRuntimeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobRuntimeInfoResponse rsp = DescribeJobRuntimeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobRuntimeInfoOutcome(rsp);
        else
            return DescribeJobRuntimeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJobRuntimeInfoOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobRuntimeInfoAsync(const DescribeJobRuntimeInfoRequest& request, const DescribeJobRuntimeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobRuntimeInfoRequest&;
    using Resp = DescribeJobRuntimeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobRuntimeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeJobRuntimeInfoOutcomeCallable OceanusClient::DescribeJobRuntimeInfoCallable(const DescribeJobRuntimeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobRuntimeInfoOutcome>>();
    DescribeJobRuntimeInfoAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeJobRuntimeInfoRequest&,
        DescribeJobRuntimeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeJobSavepointOutcome OceanusClient::DescribeJobSavepoint(const DescribeJobSavepointRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSavepoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSavepointResponse rsp = DescribeJobSavepointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSavepointOutcome(rsp);
        else
            return DescribeJobSavepointOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSavepointOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobSavepointAsync(const DescribeJobSavepointRequest& request, const DescribeJobSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobSavepointRequest&;
    using Resp = DescribeJobSavepointResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobSavepoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeJobSavepointOutcomeCallable OceanusClient::DescribeJobSavepointCallable(const DescribeJobSavepointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobSavepointOutcome>>();
    DescribeJobSavepointAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeJobSavepointRequest&,
        DescribeJobSavepointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeJobSubmissionLogOutcome OceanusClient::DescribeJobSubmissionLog(const DescribeJobSubmissionLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSubmissionLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSubmissionLogResponse rsp = DescribeJobSubmissionLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSubmissionLogOutcome(rsp);
        else
            return DescribeJobSubmissionLogOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSubmissionLogOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobSubmissionLogAsync(const DescribeJobSubmissionLogRequest& request, const DescribeJobSubmissionLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobSubmissionLogRequest&;
    using Resp = DescribeJobSubmissionLogResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobSubmissionLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeJobSubmissionLogOutcomeCallable OceanusClient::DescribeJobSubmissionLogCallable(const DescribeJobSubmissionLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobSubmissionLogOutcome>>();
    DescribeJobSubmissionLogAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeJobSubmissionLogRequest&,
        DescribeJobSubmissionLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeJobsOutcome OceanusClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobsRequest&;
    using Resp = DescribeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeJobsOutcomeCallable OceanusClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOutcome>>();
    DescribeJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeJobsRequest&,
        DescribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeResourceConfigsOutcome OceanusClient::DescribeResourceConfigs(const DescribeResourceConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceConfigsResponse rsp = DescribeResourceConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceConfigsOutcome(rsp);
        else
            return DescribeResourceConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceConfigsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeResourceConfigsAsync(const DescribeResourceConfigsRequest& request, const DescribeResourceConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceConfigsRequest&;
    using Resp = DescribeResourceConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeResourceConfigsOutcomeCallable OceanusClient::DescribeResourceConfigsCallable(const DescribeResourceConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceConfigsOutcome>>();
    DescribeResourceConfigsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeResourceConfigsRequest&,
        DescribeResourceConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeResourceRelatedJobsOutcome OceanusClient::DescribeResourceRelatedJobs(const DescribeResourceRelatedJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceRelatedJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceRelatedJobsResponse rsp = DescribeResourceRelatedJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceRelatedJobsOutcome(rsp);
        else
            return DescribeResourceRelatedJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceRelatedJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeResourceRelatedJobsAsync(const DescribeResourceRelatedJobsRequest& request, const DescribeResourceRelatedJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceRelatedJobsRequest&;
    using Resp = DescribeResourceRelatedJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceRelatedJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeResourceRelatedJobsOutcomeCallable OceanusClient::DescribeResourceRelatedJobsCallable(const DescribeResourceRelatedJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceRelatedJobsOutcome>>();
    DescribeResourceRelatedJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeResourceRelatedJobsRequest&,
        DescribeResourceRelatedJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeResourcesOutcome OceanusClient::DescribeResources(const DescribeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourcesResponse rsp = DescribeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourcesOutcome(rsp);
        else
            return DescribeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourcesRequest&;
    using Resp = DescribeResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeResourcesOutcomeCallable OceanusClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourcesOutcome>>();
    DescribeResourcesAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeResourcesRequest&,
        DescribeResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeSystemResourcesOutcome OceanusClient::DescribeSystemResources(const DescribeSystemResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSystemResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSystemResourcesResponse rsp = DescribeSystemResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSystemResourcesOutcome(rsp);
        else
            return DescribeSystemResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeSystemResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeSystemResourcesAsync(const DescribeSystemResourcesRequest& request, const DescribeSystemResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSystemResourcesRequest&;
    using Resp = DescribeSystemResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSystemResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeSystemResourcesOutcomeCallable OceanusClient::DescribeSystemResourcesCallable(const DescribeSystemResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSystemResourcesOutcome>>();
    DescribeSystemResourcesAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeSystemResourcesRequest&,
        DescribeSystemResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeTreeJobsOutcome OceanusClient::DescribeTreeJobs(const DescribeTreeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTreeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTreeJobsResponse rsp = DescribeTreeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTreeJobsOutcome(rsp);
        else
            return DescribeTreeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeTreeJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeTreeJobsAsync(const DescribeTreeJobsRequest& request, const DescribeTreeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTreeJobsRequest&;
    using Resp = DescribeTreeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTreeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeTreeJobsOutcomeCallable OceanusClient::DescribeTreeJobsCallable(const DescribeTreeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTreeJobsOutcome>>();
    DescribeTreeJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeTreeJobsRequest&,
        DescribeTreeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeTreeResourcesOutcome OceanusClient::DescribeTreeResources(const DescribeTreeResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTreeResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTreeResourcesResponse rsp = DescribeTreeResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTreeResourcesOutcome(rsp);
        else
            return DescribeTreeResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeTreeResourcesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeTreeResourcesAsync(const DescribeTreeResourcesRequest& request, const DescribeTreeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTreeResourcesRequest&;
    using Resp = DescribeTreeResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTreeResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeTreeResourcesOutcomeCallable OceanusClient::DescribeTreeResourcesCallable(const DescribeTreeResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTreeResourcesOutcome>>();
    DescribeTreeResourcesAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeTreeResourcesRequest&,
        DescribeTreeResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeVariablesOutcome OceanusClient::DescribeVariables(const DescribeVariablesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVariables");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVariablesResponse rsp = DescribeVariablesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVariablesOutcome(rsp);
        else
            return DescribeVariablesOutcome(o.GetError());
    }
    else
    {
        return DescribeVariablesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeVariablesAsync(const DescribeVariablesRequest& request, const DescribeVariablesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVariablesRequest&;
    using Resp = DescribeVariablesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVariables", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeVariablesOutcomeCallable OceanusClient::DescribeVariablesCallable(const DescribeVariablesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVariablesOutcome>>();
    DescribeVariablesAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeVariablesRequest&,
        DescribeVariablesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::DescribeWorkSpacesOutcome OceanusClient::DescribeWorkSpaces(const DescribeWorkSpacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkSpaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkSpacesResponse rsp = DescribeWorkSpacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkSpacesOutcome(rsp);
        else
            return DescribeWorkSpacesOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkSpacesOutcome(outcome.GetError());
    }
}

void OceanusClient::DescribeWorkSpacesAsync(const DescribeWorkSpacesRequest& request, const DescribeWorkSpacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkSpacesRequest&;
    using Resp = DescribeWorkSpacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkSpaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::DescribeWorkSpacesOutcomeCallable OceanusClient::DescribeWorkSpacesCallable(const DescribeWorkSpacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkSpacesOutcome>>();
    DescribeWorkSpacesAsync(
    request,
    [prom](
        const OceanusClient*,
        const DescribeWorkSpacesRequest&,
        DescribeWorkSpacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::FetchSqlGatewayStatementResultOutcome OceanusClient::FetchSqlGatewayStatementResult(const FetchSqlGatewayStatementResultRequest &request)
{
    auto outcome = MakeRequest(request, "FetchSqlGatewayStatementResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchSqlGatewayStatementResultResponse rsp = FetchSqlGatewayStatementResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchSqlGatewayStatementResultOutcome(rsp);
        else
            return FetchSqlGatewayStatementResultOutcome(o.GetError());
    }
    else
    {
        return FetchSqlGatewayStatementResultOutcome(outcome.GetError());
    }
}

void OceanusClient::FetchSqlGatewayStatementResultAsync(const FetchSqlGatewayStatementResultRequest& request, const FetchSqlGatewayStatementResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FetchSqlGatewayStatementResultRequest&;
    using Resp = FetchSqlGatewayStatementResultResponse;

    DoRequestAsync<Req, Resp>(
        "FetchSqlGatewayStatementResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::FetchSqlGatewayStatementResultOutcomeCallable OceanusClient::FetchSqlGatewayStatementResultCallable(const FetchSqlGatewayStatementResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<FetchSqlGatewayStatementResultOutcome>>();
    FetchSqlGatewayStatementResultAsync(
    request,
    [prom](
        const OceanusClient*,
        const FetchSqlGatewayStatementResultRequest&,
        FetchSqlGatewayStatementResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::GetMetaTableOutcome OceanusClient::GetMetaTable(const GetMetaTableRequest &request)
{
    auto outcome = MakeRequest(request, "GetMetaTable");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetMetaTableResponse rsp = GetMetaTableResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetMetaTableOutcome(rsp);
        else
            return GetMetaTableOutcome(o.GetError());
    }
    else
    {
        return GetMetaTableOutcome(outcome.GetError());
    }
}

void OceanusClient::GetMetaTableAsync(const GetMetaTableRequest& request, const GetMetaTableAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetMetaTableRequest&;
    using Resp = GetMetaTableResponse;

    DoRequestAsync<Req, Resp>(
        "GetMetaTable", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::GetMetaTableOutcomeCallable OceanusClient::GetMetaTableCallable(const GetMetaTableRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetMetaTableOutcome>>();
    GetMetaTableAsync(
    request,
    [prom](
        const OceanusClient*,
        const GetMetaTableRequest&,
        GetMetaTableOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::ModifyConnectorOutcome OceanusClient::ModifyConnector(const ModifyConnectorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConnector");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConnectorResponse rsp = ModifyConnectorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConnectorOutcome(rsp);
        else
            return ModifyConnectorOutcome(o.GetError());
    }
    else
    {
        return ModifyConnectorOutcome(outcome.GetError());
    }
}

void OceanusClient::ModifyConnectorAsync(const ModifyConnectorRequest& request, const ModifyConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConnectorRequest&;
    using Resp = ModifyConnectorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConnector", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::ModifyConnectorOutcomeCallable OceanusClient::ModifyConnectorCallable(const ModifyConnectorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConnectorOutcome>>();
    ModifyConnectorAsync(
    request,
    [prom](
        const OceanusClient*,
        const ModifyConnectorRequest&,
        ModifyConnectorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::ModifyFolderOutcome OceanusClient::ModifyFolder(const ModifyFolderRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFolderResponse rsp = ModifyFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFolderOutcome(rsp);
        else
            return ModifyFolderOutcome(o.GetError());
    }
    else
    {
        return ModifyFolderOutcome(outcome.GetError());
    }
}

void OceanusClient::ModifyFolderAsync(const ModifyFolderRequest& request, const ModifyFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFolderRequest&;
    using Resp = ModifyFolderResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::ModifyFolderOutcomeCallable OceanusClient::ModifyFolderCallable(const ModifyFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFolderOutcome>>();
    ModifyFolderAsync(
    request,
    [prom](
        const OceanusClient*,
        const ModifyFolderRequest&,
        ModifyFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::ModifyJobOutcome OceanusClient::ModifyJob(const ModifyJobRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJobResponse rsp = ModifyJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJobOutcome(rsp);
        else
            return ModifyJobOutcome(o.GetError());
    }
    else
    {
        return ModifyJobOutcome(outcome.GetError());
    }
}

void OceanusClient::ModifyJobAsync(const ModifyJobRequest& request, const ModifyJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyJobRequest&;
    using Resp = ModifyJobResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::ModifyJobOutcomeCallable OceanusClient::ModifyJobCallable(const ModifyJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyJobOutcome>>();
    ModifyJobAsync(
    request,
    [prom](
        const OceanusClient*,
        const ModifyJobRequest&,
        ModifyJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::ModifyWorkSpaceOutcome OceanusClient::ModifyWorkSpace(const ModifyWorkSpaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkSpace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkSpaceResponse rsp = ModifyWorkSpaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkSpaceOutcome(rsp);
        else
            return ModifyWorkSpaceOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkSpaceOutcome(outcome.GetError());
    }
}

void OceanusClient::ModifyWorkSpaceAsync(const ModifyWorkSpaceRequest& request, const ModifyWorkSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkSpaceRequest&;
    using Resp = ModifyWorkSpaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkSpace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::ModifyWorkSpaceOutcomeCallable OceanusClient::ModifyWorkSpaceCallable(const ModifyWorkSpaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkSpaceOutcome>>();
    ModifyWorkSpaceAsync(
    request,
    [prom](
        const OceanusClient*,
        const ModifyWorkSpaceRequest&,
        ModifyWorkSpaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::ParseConnectorOutcome OceanusClient::ParseConnector(const ParseConnectorRequest &request)
{
    auto outcome = MakeRequest(request, "ParseConnector");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ParseConnectorResponse rsp = ParseConnectorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ParseConnectorOutcome(rsp);
        else
            return ParseConnectorOutcome(o.GetError());
    }
    else
    {
        return ParseConnectorOutcome(outcome.GetError());
    }
}

void OceanusClient::ParseConnectorAsync(const ParseConnectorRequest& request, const ParseConnectorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ParseConnectorRequest&;
    using Resp = ParseConnectorResponse;

    DoRequestAsync<Req, Resp>(
        "ParseConnector", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::ParseConnectorOutcomeCallable OceanusClient::ParseConnectorCallable(const ParseConnectorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ParseConnectorOutcome>>();
    ParseConnectorAsync(
    request,
    [prom](
        const OceanusClient*,
        const ParseConnectorRequest&,
        ParseConnectorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::RunJobsOutcome OceanusClient::RunJobs(const RunJobsRequest &request)
{
    auto outcome = MakeRequest(request, "RunJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunJobsResponse rsp = RunJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunJobsOutcome(rsp);
        else
            return RunJobsOutcome(o.GetError());
    }
    else
    {
        return RunJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::RunJobsAsync(const RunJobsRequest& request, const RunJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunJobsRequest&;
    using Resp = RunJobsResponse;

    DoRequestAsync<Req, Resp>(
        "RunJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::RunJobsOutcomeCallable OceanusClient::RunJobsCallable(const RunJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunJobsOutcome>>();
    RunJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const RunJobsRequest&,
        RunJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::RunSqlGatewayStatementOutcome OceanusClient::RunSqlGatewayStatement(const RunSqlGatewayStatementRequest &request)
{
    auto outcome = MakeRequest(request, "RunSqlGatewayStatement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunSqlGatewayStatementResponse rsp = RunSqlGatewayStatementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunSqlGatewayStatementOutcome(rsp);
        else
            return RunSqlGatewayStatementOutcome(o.GetError());
    }
    else
    {
        return RunSqlGatewayStatementOutcome(outcome.GetError());
    }
}

void OceanusClient::RunSqlGatewayStatementAsync(const RunSqlGatewayStatementRequest& request, const RunSqlGatewayStatementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunSqlGatewayStatementRequest&;
    using Resp = RunSqlGatewayStatementResponse;

    DoRequestAsync<Req, Resp>(
        "RunSqlGatewayStatement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::RunSqlGatewayStatementOutcomeCallable OceanusClient::RunSqlGatewayStatementCallable(const RunSqlGatewayStatementRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunSqlGatewayStatementOutcome>>();
    RunSqlGatewayStatementAsync(
    request,
    [prom](
        const OceanusClient*,
        const RunSqlGatewayStatementRequest&,
        RunSqlGatewayStatementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::StopJobsOutcome OceanusClient::StopJobs(const StopJobsRequest &request)
{
    auto outcome = MakeRequest(request, "StopJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopJobsResponse rsp = StopJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopJobsOutcome(rsp);
        else
            return StopJobsOutcome(o.GetError());
    }
    else
    {
        return StopJobsOutcome(outcome.GetError());
    }
}

void OceanusClient::StopJobsAsync(const StopJobsRequest& request, const StopJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopJobsRequest&;
    using Resp = StopJobsResponse;

    DoRequestAsync<Req, Resp>(
        "StopJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::StopJobsOutcomeCallable OceanusClient::StopJobsCallable(const StopJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopJobsOutcome>>();
    StopJobsAsync(
    request,
    [prom](
        const OceanusClient*,
        const StopJobsRequest&,
        StopJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

OceanusClient::TriggerJobSavepointOutcome OceanusClient::TriggerJobSavepoint(const TriggerJobSavepointRequest &request)
{
    auto outcome = MakeRequest(request, "TriggerJobSavepoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TriggerJobSavepointResponse rsp = TriggerJobSavepointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TriggerJobSavepointOutcome(rsp);
        else
            return TriggerJobSavepointOutcome(o.GetError());
    }
    else
    {
        return TriggerJobSavepointOutcome(outcome.GetError());
    }
}

void OceanusClient::TriggerJobSavepointAsync(const TriggerJobSavepointRequest& request, const TriggerJobSavepointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TriggerJobSavepointRequest&;
    using Resp = TriggerJobSavepointResponse;

    DoRequestAsync<Req, Resp>(
        "TriggerJobSavepoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

OceanusClient::TriggerJobSavepointOutcomeCallable OceanusClient::TriggerJobSavepointCallable(const TriggerJobSavepointRequest &request)
{
    const auto prom = std::make_shared<std::promise<TriggerJobSavepointOutcome>>();
    TriggerJobSavepointAsync(
    request,
    [prom](
        const OceanusClient*,
        const TriggerJobSavepointRequest&,
        TriggerJobSavepointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

