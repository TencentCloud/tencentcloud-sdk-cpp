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

#include <tencentcloud/databuddy/v20260715/DatabuddyClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Databuddy::V20260715;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-07-15";
    const string ENDPOINT = "databuddy.tencentcloudapi.com";
}

DatabuddyClient::DatabuddyClient(const Credential &credential, const string &region) :
    DatabuddyClient(credential, region, ClientProfile())
{
}

DatabuddyClient::DatabuddyClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DatabuddyClient::AddConsoleUsersOutcome DatabuddyClient::AddConsoleUsers(const AddConsoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "AddConsoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddConsoleUsersResponse rsp = AddConsoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddConsoleUsersOutcome(rsp);
        else
            return AddConsoleUsersOutcome(o.GetError());
    }
    else
    {
        return AddConsoleUsersOutcome(outcome.GetError());
    }
}

void DatabuddyClient::AddConsoleUsersAsync(const AddConsoleUsersRequest& request, const AddConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddConsoleUsersRequest&;
    using Resp = AddConsoleUsersResponse;

    DoRequestAsync<Req, Resp>(
        "AddConsoleUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::AddConsoleUsersOutcomeCallable DatabuddyClient::AddConsoleUsersCallable(const AddConsoleUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddConsoleUsersOutcome>>();
    AddConsoleUsersAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const AddConsoleUsersRequest&,
        AddConsoleUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateCatalogOutcome DatabuddyClient::CreateCatalog(const CreateCatalogRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCatalog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCatalogResponse rsp = CreateCatalogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCatalogOutcome(rsp);
        else
            return CreateCatalogOutcome(o.GetError());
    }
    else
    {
        return CreateCatalogOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateCatalogAsync(const CreateCatalogRequest& request, const CreateCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCatalogRequest&;
    using Resp = CreateCatalogResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCatalog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateCatalogOutcomeCallable DatabuddyClient::CreateCatalogCallable(const CreateCatalogRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCatalogOutcome>>();
    CreateCatalogAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateCatalogRequest&,
        CreateCatalogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateConsoleGroupOutcome DatabuddyClient::CreateConsoleGroup(const CreateConsoleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsoleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsoleGroupResponse rsp = CreateConsoleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsoleGroupOutcome(rsp);
        else
            return CreateConsoleGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConsoleGroupOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateConsoleGroupAsync(const CreateConsoleGroupRequest& request, const CreateConsoleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConsoleGroupRequest&;
    using Resp = CreateConsoleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConsoleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateConsoleGroupOutcomeCallable DatabuddyClient::CreateConsoleGroupCallable(const CreateConsoleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConsoleGroupOutcome>>();
    CreateConsoleGroupAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateConsoleGroupRequest&,
        CreateConsoleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateFileOutcome DatabuddyClient::CreateFile(const CreateFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileResponse rsp = CreateFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileOutcome(rsp);
        else
            return CreateFileOutcome(o.GetError());
    }
    else
    {
        return CreateFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateFileAsync(const CreateFileRequest& request, const CreateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileRequest&;
    using Resp = CreateFileResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateFileOutcomeCallable DatabuddyClient::CreateFileCallable(const CreateFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileOutcome>>();
    CreateFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateFileRequest&,
        CreateFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateFolderOutcome DatabuddyClient::CreateFolder(const CreateFolderRequest &request)
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

void DatabuddyClient::CreateFolderAsync(const CreateFolderRequest& request, const CreateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DatabuddyClient::CreateFolderOutcomeCallable DatabuddyClient::CreateFolderCallable(const CreateFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFolderOutcome>>();
    CreateFolderAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateFolderRequest&,
        CreateFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateSchemaOutcome DatabuddyClient::CreateSchema(const CreateSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSchemaResponse rsp = CreateSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSchemaOutcome(rsp);
        else
            return CreateSchemaOutcome(o.GetError());
    }
    else
    {
        return CreateSchemaOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateSchemaAsync(const CreateSchemaRequest& request, const CreateSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSchemaRequest&;
    using Resp = CreateSchemaResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSchema", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateSchemaOutcomeCallable DatabuddyClient::CreateSchemaCallable(const CreateSchemaRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSchemaOutcome>>();
    CreateSchemaAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateSchemaRequest&,
        CreateSchemaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateWorkflowOutcome DatabuddyClient::CreateWorkflow(const CreateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkflowResponse rsp = CreateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkflowOutcome(rsp);
        else
            return CreateWorkflowOutcome(o.GetError());
    }
    else
    {
        return CreateWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateWorkflowAsync(const CreateWorkflowRequest& request, const CreateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkflowRequest&;
    using Resp = CreateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateWorkflowOutcomeCallable DatabuddyClient::CreateWorkflowCallable(const CreateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkflowOutcome>>();
    CreateWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateWorkflowRequest&,
        CreateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateWorkspaceOutcome DatabuddyClient::CreateWorkspace(const CreateWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceResponse rsp = CreateWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceOutcome(rsp);
        else
            return CreateWorkspaceOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateWorkspaceAsync(const CreateWorkspaceRequest& request, const CreateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkspaceRequest&;
    using Resp = CreateWorkspaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkspace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateWorkspaceOutcomeCallable DatabuddyClient::CreateWorkspaceCallable(const CreateWorkspaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkspaceOutcome>>();
    CreateWorkspaceAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateWorkspaceRequest&,
        CreateWorkspaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::CreateWorkspaceRoleOutcome DatabuddyClient::CreateWorkspaceRole(const CreateWorkspaceRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaceRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspaceRoleResponse rsp = CreateWorkspaceRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspaceRoleOutcome(rsp);
        else
            return CreateWorkspaceRoleOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspaceRoleOutcome(outcome.GetError());
    }
}

void DatabuddyClient::CreateWorkspaceRoleAsync(const CreateWorkspaceRoleRequest& request, const CreateWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkspaceRoleRequest&;
    using Resp = CreateWorkspaceRoleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkspaceRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::CreateWorkspaceRoleOutcomeCallable DatabuddyClient::CreateWorkspaceRoleCallable(const CreateWorkspaceRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkspaceRoleOutcome>>();
    CreateWorkspaceRoleAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const CreateWorkspaceRoleRequest&,
        CreateWorkspaceRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteCatalogOutcome DatabuddyClient::DeleteCatalog(const DeleteCatalogRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCatalog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCatalogResponse rsp = DeleteCatalogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCatalogOutcome(rsp);
        else
            return DeleteCatalogOutcome(o.GetError());
    }
    else
    {
        return DeleteCatalogOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteCatalogAsync(const DeleteCatalogRequest& request, const DeleteCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCatalogRequest&;
    using Resp = DeleteCatalogResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCatalog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteCatalogOutcomeCallable DatabuddyClient::DeleteCatalogCallable(const DeleteCatalogRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCatalogOutcome>>();
    DeleteCatalogAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteCatalogRequest&,
        DeleteCatalogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteConsoleGroupsOutcome DatabuddyClient::DeleteConsoleGroups(const DeleteConsoleGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsoleGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsoleGroupsResponse rsp = DeleteConsoleGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsoleGroupsOutcome(rsp);
        else
            return DeleteConsoleGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteConsoleGroupsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteConsoleGroupsAsync(const DeleteConsoleGroupsRequest& request, const DeleteConsoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConsoleGroupsRequest&;
    using Resp = DeleteConsoleGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConsoleGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteConsoleGroupsOutcomeCallable DatabuddyClient::DeleteConsoleGroupsCallable(const DeleteConsoleGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConsoleGroupsOutcome>>();
    DeleteConsoleGroupsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteConsoleGroupsRequest&,
        DeleteConsoleGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteFileOutcome DatabuddyClient::DeleteFile(const DeleteFileRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileResponse rsp = DeleteFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileOutcome(rsp);
        else
            return DeleteFileOutcome(o.GetError());
    }
    else
    {
        return DeleteFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteFileAsync(const DeleteFileRequest& request, const DeleteFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileRequest&;
    using Resp = DeleteFileResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteFileOutcomeCallable DatabuddyClient::DeleteFileCallable(const DeleteFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileOutcome>>();
    DeleteFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteFileRequest&,
        DeleteFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteFolderOutcome DatabuddyClient::DeleteFolder(const DeleteFolderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFolderResponse rsp = DeleteFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFolderOutcome(rsp);
        else
            return DeleteFolderOutcome(o.GetError());
    }
    else
    {
        return DeleteFolderOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteFolderAsync(const DeleteFolderRequest& request, const DeleteFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFolderRequest&;
    using Resp = DeleteFolderResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteFolderOutcomeCallable DatabuddyClient::DeleteFolderCallable(const DeleteFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFolderOutcome>>();
    DeleteFolderAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteFolderRequest&,
        DeleteFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteSchemaOutcome DatabuddyClient::DeleteSchema(const DeleteSchemaRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSchema");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSchemaResponse rsp = DeleteSchemaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSchemaOutcome(rsp);
        else
            return DeleteSchemaOutcome(o.GetError());
    }
    else
    {
        return DeleteSchemaOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteSchemaAsync(const DeleteSchemaRequest& request, const DeleteSchemaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteSchemaRequest&;
    using Resp = DeleteSchemaResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteSchema", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteSchemaOutcomeCallable DatabuddyClient::DeleteSchemaCallable(const DeleteSchemaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteSchemaOutcome>>();
    DeleteSchemaAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteSchemaRequest&,
        DeleteSchemaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteWorkflowOutcome DatabuddyClient::DeleteWorkflow(const DeleteWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkflowResponse rsp = DeleteWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkflowOutcome(rsp);
        else
            return DeleteWorkflowOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteWorkflowAsync(const DeleteWorkflowRequest& request, const DeleteWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkflowRequest&;
    using Resp = DeleteWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteWorkflowOutcomeCallable DatabuddyClient::DeleteWorkflowCallable(const DeleteWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkflowOutcome>>();
    DeleteWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteWorkflowRequest&,
        DeleteWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteWorkspaceOutcome DatabuddyClient::DeleteWorkspace(const DeleteWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkspaceResponse rsp = DeleteWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkspaceOutcome(rsp);
        else
            return DeleteWorkspaceOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkspaceOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteWorkspaceAsync(const DeleteWorkspaceRequest& request, const DeleteWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkspaceRequest&;
    using Resp = DeleteWorkspaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkspace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteWorkspaceOutcomeCallable DatabuddyClient::DeleteWorkspaceCallable(const DeleteWorkspaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkspaceOutcome>>();
    DeleteWorkspaceAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteWorkspaceRequest&,
        DeleteWorkspaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::DeleteWorkspaceRoleOutcome DatabuddyClient::DeleteWorkspaceRole(const DeleteWorkspaceRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWorkspaceRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWorkspaceRoleResponse rsp = DeleteWorkspaceRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWorkspaceRoleOutcome(rsp);
        else
            return DeleteWorkspaceRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteWorkspaceRoleOutcome(outcome.GetError());
    }
}

void DatabuddyClient::DeleteWorkspaceRoleAsync(const DeleteWorkspaceRoleRequest& request, const DeleteWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteWorkspaceRoleRequest&;
    using Resp = DeleteWorkspaceRoleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteWorkspaceRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::DeleteWorkspaceRoleOutcomeCallable DatabuddyClient::DeleteWorkspaceRoleCallable(const DeleteWorkspaceRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteWorkspaceRoleOutcome>>();
    DeleteWorkspaceRoleAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const DeleteWorkspaceRoleRequest&,
        DeleteWorkspaceRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetFileOutcome DatabuddyClient::GetFile(const GetFileRequest &request)
{
    auto outcome = MakeRequest(request, "GetFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFileResponse rsp = GetFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFileOutcome(rsp);
        else
            return GetFileOutcome(o.GetError());
    }
    else
    {
        return GetFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetFileAsync(const GetFileRequest& request, const GetFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFileRequest&;
    using Resp = GetFileResponse;

    DoRequestAsync<Req, Resp>(
        "GetFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetFileOutcomeCallable DatabuddyClient::GetFileCallable(const GetFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFileOutcome>>();
    GetFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetFileRequest&,
        GetFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetFolderOutcome DatabuddyClient::GetFolder(const GetFolderRequest &request)
{
    auto outcome = MakeRequest(request, "GetFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFolderResponse rsp = GetFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFolderOutcome(rsp);
        else
            return GetFolderOutcome(o.GetError());
    }
    else
    {
        return GetFolderOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetFolderAsync(const GetFolderRequest& request, const GetFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFolderRequest&;
    using Resp = GetFolderResponse;

    DoRequestAsync<Req, Resp>(
        "GetFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetFolderOutcomeCallable DatabuddyClient::GetFolderCallable(const GetFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFolderOutcome>>();
    GetFolderAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetFolderRequest&,
        GetFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkflowOutcome DatabuddyClient::GetWorkflow(const GetWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowResponse rsp = GetWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowOutcome(rsp);
        else
            return GetWorkflowOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkflowAsync(const GetWorkflowRequest& request, const GetWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowRequest&;
    using Resp = GetWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkflowOutcomeCallable DatabuddyClient::GetWorkflowCallable(const GetWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowOutcome>>();
    GetWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkflowRequest&,
        GetWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkflowRunOutcome DatabuddyClient::GetWorkflowRun(const GetWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowRunResponse rsp = GetWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowRunOutcome(rsp);
        else
            return GetWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkflowRunAsync(const GetWorkflowRunRequest& request, const GetWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowRunRequest&;
    using Resp = GetWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkflowRunOutcomeCallable DatabuddyClient::GetWorkflowRunCallable(const GetWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowRunOutcome>>();
    GetWorkflowRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkflowRunRequest&,
        GetWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkflowTaskRunOutcome DatabuddyClient::GetWorkflowTaskRun(const GetWorkflowTaskRunRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkflowTaskRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkflowTaskRunResponse rsp = GetWorkflowTaskRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkflowTaskRunOutcome(rsp);
        else
            return GetWorkflowTaskRunOutcome(o.GetError());
    }
    else
    {
        return GetWorkflowTaskRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkflowTaskRunAsync(const GetWorkflowTaskRunRequest& request, const GetWorkflowTaskRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkflowTaskRunRequest&;
    using Resp = GetWorkflowTaskRunResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkflowTaskRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkflowTaskRunOutcomeCallable DatabuddyClient::GetWorkflowTaskRunCallable(const GetWorkflowTaskRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkflowTaskRunOutcome>>();
    GetWorkflowTaskRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkflowTaskRunRequest&,
        GetWorkflowTaskRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::GetWorkspaceOutcome DatabuddyClient::GetWorkspace(const GetWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "GetWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWorkspaceResponse rsp = GetWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWorkspaceOutcome(rsp);
        else
            return GetWorkspaceOutcome(o.GetError());
    }
    else
    {
        return GetWorkspaceOutcome(outcome.GetError());
    }
}

void DatabuddyClient::GetWorkspaceAsync(const GetWorkspaceRequest& request, const GetWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetWorkspaceRequest&;
    using Resp = GetWorkspaceResponse;

    DoRequestAsync<Req, Resp>(
        "GetWorkspace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::GetWorkspaceOutcomeCallable DatabuddyClient::GetWorkspaceCallable(const GetWorkspaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetWorkspaceOutcome>>();
    GetWorkspaceAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const GetWorkspaceRequest&,
        GetWorkspaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::KillWorkflowRunOutcome DatabuddyClient::KillWorkflowRun(const KillWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "KillWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KillWorkflowRunResponse rsp = KillWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KillWorkflowRunOutcome(rsp);
        else
            return KillWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return KillWorkflowRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::KillWorkflowRunAsync(const KillWorkflowRunRequest& request, const KillWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KillWorkflowRunRequest&;
    using Resp = KillWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "KillWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::KillWorkflowRunOutcomeCallable DatabuddyClient::KillWorkflowRunCallable(const KillWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<KillWorkflowRunOutcome>>();
    KillWorkflowRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const KillWorkflowRunRequest&,
        KillWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListConsoleGroupUsersOutcome DatabuddyClient::ListConsoleGroupUsers(const ListConsoleGroupUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ListConsoleGroupUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConsoleGroupUsersResponse rsp = ListConsoleGroupUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConsoleGroupUsersOutcome(rsp);
        else
            return ListConsoleGroupUsersOutcome(o.GetError());
    }
    else
    {
        return ListConsoleGroupUsersOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListConsoleGroupUsersAsync(const ListConsoleGroupUsersRequest& request, const ListConsoleGroupUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConsoleGroupUsersRequest&;
    using Resp = ListConsoleGroupUsersResponse;

    DoRequestAsync<Req, Resp>(
        "ListConsoleGroupUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListConsoleGroupUsersOutcomeCallable DatabuddyClient::ListConsoleGroupUsersCallable(const ListConsoleGroupUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConsoleGroupUsersOutcome>>();
    ListConsoleGroupUsersAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListConsoleGroupUsersRequest&,
        ListConsoleGroupUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListConsoleGroupsOutcome DatabuddyClient::ListConsoleGroups(const ListConsoleGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListConsoleGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConsoleGroupsResponse rsp = ListConsoleGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConsoleGroupsOutcome(rsp);
        else
            return ListConsoleGroupsOutcome(o.GetError());
    }
    else
    {
        return ListConsoleGroupsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListConsoleGroupsAsync(const ListConsoleGroupsRequest& request, const ListConsoleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConsoleGroupsRequest&;
    using Resp = ListConsoleGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "ListConsoleGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListConsoleGroupsOutcomeCallable DatabuddyClient::ListConsoleGroupsCallable(const ListConsoleGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConsoleGroupsOutcome>>();
    ListConsoleGroupsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListConsoleGroupsRequest&,
        ListConsoleGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListConsoleRolesOutcome DatabuddyClient::ListConsoleRoles(const ListConsoleRolesRequest &request)
{
    auto outcome = MakeRequest(request, "ListConsoleRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConsoleRolesResponse rsp = ListConsoleRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConsoleRolesOutcome(rsp);
        else
            return ListConsoleRolesOutcome(o.GetError());
    }
    else
    {
        return ListConsoleRolesOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListConsoleRolesAsync(const ListConsoleRolesRequest& request, const ListConsoleRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConsoleRolesRequest&;
    using Resp = ListConsoleRolesResponse;

    DoRequestAsync<Req, Resp>(
        "ListConsoleRoles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListConsoleRolesOutcomeCallable DatabuddyClient::ListConsoleRolesCallable(const ListConsoleRolesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConsoleRolesOutcome>>();
    ListConsoleRolesAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListConsoleRolesRequest&,
        ListConsoleRolesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListConsoleUsersOutcome DatabuddyClient::ListConsoleUsers(const ListConsoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ListConsoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListConsoleUsersResponse rsp = ListConsoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListConsoleUsersOutcome(rsp);
        else
            return ListConsoleUsersOutcome(o.GetError());
    }
    else
    {
        return ListConsoleUsersOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListConsoleUsersAsync(const ListConsoleUsersRequest& request, const ListConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListConsoleUsersRequest&;
    using Resp = ListConsoleUsersResponse;

    DoRequestAsync<Req, Resp>(
        "ListConsoleUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListConsoleUsersOutcomeCallable DatabuddyClient::ListConsoleUsersCallable(const ListConsoleUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListConsoleUsersOutcome>>();
    ListConsoleUsersAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListConsoleUsersRequest&,
        ListConsoleUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListFilesOutcome DatabuddyClient::ListFiles(const ListFilesRequest &request)
{
    auto outcome = MakeRequest(request, "ListFiles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListFilesResponse rsp = ListFilesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListFilesOutcome(rsp);
        else
            return ListFilesOutcome(o.GetError());
    }
    else
    {
        return ListFilesOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListFilesAsync(const ListFilesRequest& request, const ListFilesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListFilesRequest&;
    using Resp = ListFilesResponse;

    DoRequestAsync<Req, Resp>(
        "ListFiles", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListFilesOutcomeCallable DatabuddyClient::ListFilesCallable(const ListFilesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListFilesOutcome>>();
    ListFilesAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListFilesRequest&,
        ListFilesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListSchemasOutcome DatabuddyClient::ListSchemas(const ListSchemasRequest &request)
{
    auto outcome = MakeRequest(request, "ListSchemas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSchemasResponse rsp = ListSchemasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSchemasOutcome(rsp);
        else
            return ListSchemasOutcome(o.GetError());
    }
    else
    {
        return ListSchemasOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListSchemasAsync(const ListSchemasRequest& request, const ListSchemasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListSchemasRequest&;
    using Resp = ListSchemasResponse;

    DoRequestAsync<Req, Resp>(
        "ListSchemas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListSchemasOutcomeCallable DatabuddyClient::ListSchemasCallable(const ListSchemasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListSchemasOutcome>>();
    ListSchemasAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListSchemasRequest&,
        ListSchemasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkflowRunsOutcome DatabuddyClient::ListWorkflowRuns(const ListWorkflowRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowRunsResponse rsp = ListWorkflowRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowRunsOutcome(rsp);
        else
            return ListWorkflowRunsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowRunsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkflowRunsAsync(const ListWorkflowRunsRequest& request, const ListWorkflowRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowRunsRequest&;
    using Resp = ListWorkflowRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkflowRunsOutcomeCallable DatabuddyClient::ListWorkflowRunsCallable(const ListWorkflowRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowRunsOutcome>>();
    ListWorkflowRunsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkflowRunsRequest&,
        ListWorkflowRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkflowTaskRunsOutcome DatabuddyClient::ListWorkflowTaskRuns(const ListWorkflowTaskRunsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflowTaskRuns");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowTaskRunsResponse rsp = ListWorkflowTaskRunsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowTaskRunsOutcome(rsp);
        else
            return ListWorkflowTaskRunsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowTaskRunsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkflowTaskRunsAsync(const ListWorkflowTaskRunsRequest& request, const ListWorkflowTaskRunsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowTaskRunsRequest&;
    using Resp = ListWorkflowTaskRunsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflowTaskRuns", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkflowTaskRunsOutcomeCallable DatabuddyClient::ListWorkflowTaskRunsCallable(const ListWorkflowTaskRunsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowTaskRunsOutcome>>();
    ListWorkflowTaskRunsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkflowTaskRunsRequest&,
        ListWorkflowTaskRunsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkflowsOutcome DatabuddyClient::ListWorkflows(const ListWorkflowsRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkflows");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkflowsResponse rsp = ListWorkflowsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkflowsOutcome(rsp);
        else
            return ListWorkflowsOutcome(o.GetError());
    }
    else
    {
        return ListWorkflowsOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkflowsAsync(const ListWorkflowsRequest& request, const ListWorkflowsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkflowsRequest&;
    using Resp = ListWorkflowsResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkflows", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkflowsOutcomeCallable DatabuddyClient::ListWorkflowsCallable(const ListWorkflowsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkflowsOutcome>>();
    ListWorkflowsAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkflowsRequest&,
        ListWorkflowsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::ListWorkspacesOutcome DatabuddyClient::ListWorkspaces(const ListWorkspacesRequest &request)
{
    auto outcome = MakeRequest(request, "ListWorkspaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListWorkspacesResponse rsp = ListWorkspacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListWorkspacesOutcome(rsp);
        else
            return ListWorkspacesOutcome(o.GetError());
    }
    else
    {
        return ListWorkspacesOutcome(outcome.GetError());
    }
}

void DatabuddyClient::ListWorkspacesAsync(const ListWorkspacesRequest& request, const ListWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListWorkspacesRequest&;
    using Resp = ListWorkspacesResponse;

    DoRequestAsync<Req, Resp>(
        "ListWorkspaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::ListWorkspacesOutcomeCallable DatabuddyClient::ListWorkspacesCallable(const ListWorkspacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListWorkspacesOutcome>>();
    ListWorkspacesAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const ListWorkspacesRequest&,
        ListWorkspacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::RemoveConsoleUsersOutcome DatabuddyClient::RemoveConsoleUsers(const RemoveConsoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveConsoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveConsoleUsersResponse rsp = RemoveConsoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveConsoleUsersOutcome(rsp);
        else
            return RemoveConsoleUsersOutcome(o.GetError());
    }
    else
    {
        return RemoveConsoleUsersOutcome(outcome.GetError());
    }
}

void DatabuddyClient::RemoveConsoleUsersAsync(const RemoveConsoleUsersRequest& request, const RemoveConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveConsoleUsersRequest&;
    using Resp = RemoveConsoleUsersResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveConsoleUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::RemoveConsoleUsersOutcomeCallable DatabuddyClient::RemoveConsoleUsersCallable(const RemoveConsoleUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveConsoleUsersOutcome>>();
    RemoveConsoleUsersAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const RemoveConsoleUsersRequest&,
        RemoveConsoleUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::RerunWorkflowRunOutcome DatabuddyClient::RerunWorkflowRun(const RerunWorkflowRunRequest &request)
{
    auto outcome = MakeRequest(request, "RerunWorkflowRun");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RerunWorkflowRunResponse rsp = RerunWorkflowRunResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RerunWorkflowRunOutcome(rsp);
        else
            return RerunWorkflowRunOutcome(o.GetError());
    }
    else
    {
        return RerunWorkflowRunOutcome(outcome.GetError());
    }
}

void DatabuddyClient::RerunWorkflowRunAsync(const RerunWorkflowRunRequest& request, const RerunWorkflowRunAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RerunWorkflowRunRequest&;
    using Resp = RerunWorkflowRunResponse;

    DoRequestAsync<Req, Resp>(
        "RerunWorkflowRun", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::RerunWorkflowRunOutcomeCallable DatabuddyClient::RerunWorkflowRunCallable(const RerunWorkflowRunRequest &request)
{
    const auto prom = std::make_shared<std::promise<RerunWorkflowRunOutcome>>();
    RerunWorkflowRunAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const RerunWorkflowRunRequest&,
        RerunWorkflowRunOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::RunWorkflowOutcome DatabuddyClient::RunWorkflow(const RunWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "RunWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunWorkflowResponse rsp = RunWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunWorkflowOutcome(rsp);
        else
            return RunWorkflowOutcome(o.GetError());
    }
    else
    {
        return RunWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::RunWorkflowAsync(const RunWorkflowRequest& request, const RunWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RunWorkflowRequest&;
    using Resp = RunWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "RunWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::RunWorkflowOutcomeCallable DatabuddyClient::RunWorkflowCallable(const RunWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<RunWorkflowOutcome>>();
    RunWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const RunWorkflowRequest&,
        RunWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::StartComputeOutcome DatabuddyClient::StartCompute(const StartComputeRequest &request)
{
    auto outcome = MakeRequest(request, "StartCompute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartComputeResponse rsp = StartComputeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartComputeOutcome(rsp);
        else
            return StartComputeOutcome(o.GetError());
    }
    else
    {
        return StartComputeOutcome(outcome.GetError());
    }
}

void DatabuddyClient::StartComputeAsync(const StartComputeRequest& request, const StartComputeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartComputeRequest&;
    using Resp = StartComputeResponse;

    DoRequestAsync<Req, Resp>(
        "StartCompute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::StartComputeOutcomeCallable DatabuddyClient::StartComputeCallable(const StartComputeRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartComputeOutcome>>();
    StartComputeAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const StartComputeRequest&,
        StartComputeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::StopComputeOutcome DatabuddyClient::StopCompute(const StopComputeRequest &request)
{
    auto outcome = MakeRequest(request, "StopCompute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopComputeResponse rsp = StopComputeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopComputeOutcome(rsp);
        else
            return StopComputeOutcome(o.GetError());
    }
    else
    {
        return StopComputeOutcome(outcome.GetError());
    }
}

void DatabuddyClient::StopComputeAsync(const StopComputeRequest& request, const StopComputeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopComputeRequest&;
    using Resp = StopComputeResponse;

    DoRequestAsync<Req, Resp>(
        "StopCompute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::StopComputeOutcomeCallable DatabuddyClient::StopComputeCallable(const StopComputeRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopComputeOutcome>>();
    StopComputeAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const StopComputeRequest&,
        StopComputeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UnbindWorkflowBundleOutcome DatabuddyClient::UnbindWorkflowBundle(const UnbindWorkflowBundleRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindWorkflowBundle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindWorkflowBundleResponse rsp = UnbindWorkflowBundleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindWorkflowBundleOutcome(rsp);
        else
            return UnbindWorkflowBundleOutcome(o.GetError());
    }
    else
    {
        return UnbindWorkflowBundleOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UnbindWorkflowBundleAsync(const UnbindWorkflowBundleRequest& request, const UnbindWorkflowBundleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindWorkflowBundleRequest&;
    using Resp = UnbindWorkflowBundleResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindWorkflowBundle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UnbindWorkflowBundleOutcomeCallable DatabuddyClient::UnbindWorkflowBundleCallable(const UnbindWorkflowBundleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindWorkflowBundleOutcome>>();
    UnbindWorkflowBundleAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UnbindWorkflowBundleRequest&,
        UnbindWorkflowBundleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateConsoleGroupOutcome DatabuddyClient::UpdateConsoleGroup(const UpdateConsoleGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConsoleGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConsoleGroupResponse rsp = UpdateConsoleGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConsoleGroupOutcome(rsp);
        else
            return UpdateConsoleGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateConsoleGroupOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateConsoleGroupAsync(const UpdateConsoleGroupRequest& request, const UpdateConsoleGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConsoleGroupRequest&;
    using Resp = UpdateConsoleGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConsoleGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateConsoleGroupOutcomeCallable DatabuddyClient::UpdateConsoleGroupCallable(const UpdateConsoleGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConsoleGroupOutcome>>();
    UpdateConsoleGroupAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateConsoleGroupRequest&,
        UpdateConsoleGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateConsoleUsersOutcome DatabuddyClient::UpdateConsoleUsers(const UpdateConsoleUsersRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConsoleUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConsoleUsersResponse rsp = UpdateConsoleUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConsoleUsersOutcome(rsp);
        else
            return UpdateConsoleUsersOutcome(o.GetError());
    }
    else
    {
        return UpdateConsoleUsersOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateConsoleUsersAsync(const UpdateConsoleUsersRequest& request, const UpdateConsoleUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConsoleUsersRequest&;
    using Resp = UpdateConsoleUsersResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConsoleUsers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateConsoleUsersOutcomeCallable DatabuddyClient::UpdateConsoleUsersCallable(const UpdateConsoleUsersRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConsoleUsersOutcome>>();
    UpdateConsoleUsersAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateConsoleUsersRequest&,
        UpdateConsoleUsersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateFileOutcome DatabuddyClient::UpdateFile(const UpdateFileRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFileResponse rsp = UpdateFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFileOutcome(rsp);
        else
            return UpdateFileOutcome(o.GetError());
    }
    else
    {
        return UpdateFileOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateFileAsync(const UpdateFileRequest& request, const UpdateFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFileRequest&;
    using Resp = UpdateFileResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateFileOutcomeCallable DatabuddyClient::UpdateFileCallable(const UpdateFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFileOutcome>>();
    UpdateFileAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateFileRequest&,
        UpdateFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateFolderOutcome DatabuddyClient::UpdateFolder(const UpdateFolderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateFolder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateFolderResponse rsp = UpdateFolderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateFolderOutcome(rsp);
        else
            return UpdateFolderOutcome(o.GetError());
    }
    else
    {
        return UpdateFolderOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateFolderAsync(const UpdateFolderRequest& request, const UpdateFolderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateFolderRequest&;
    using Resp = UpdateFolderResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateFolder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateFolderOutcomeCallable DatabuddyClient::UpdateFolderCallable(const UpdateFolderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateFolderOutcome>>();
    UpdateFolderAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateFolderRequest&,
        UpdateFolderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateWorkflowOutcome DatabuddyClient::UpdateWorkflow(const UpdateWorkflowRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkflow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkflowResponse rsp = UpdateWorkflowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkflowOutcome(rsp);
        else
            return UpdateWorkflowOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkflowOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateWorkflowAsync(const UpdateWorkflowRequest& request, const UpdateWorkflowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkflowRequest&;
    using Resp = UpdateWorkflowResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkflow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateWorkflowOutcomeCallable DatabuddyClient::UpdateWorkflowCallable(const UpdateWorkflowRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkflowOutcome>>();
    UpdateWorkflowAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateWorkflowRequest&,
        UpdateWorkflowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateWorkspaceOutcome DatabuddyClient::UpdateWorkspace(const UpdateWorkspaceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkspace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkspaceResponse rsp = UpdateWorkspaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkspaceOutcome(rsp);
        else
            return UpdateWorkspaceOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkspaceOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateWorkspaceAsync(const UpdateWorkspaceRequest& request, const UpdateWorkspaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkspaceRequest&;
    using Resp = UpdateWorkspaceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkspace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateWorkspaceOutcomeCallable DatabuddyClient::UpdateWorkspaceCallable(const UpdateWorkspaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkspaceOutcome>>();
    UpdateWorkspaceAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateWorkspaceRequest&,
        UpdateWorkspaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DatabuddyClient::UpdateWorkspaceRoleOutcome DatabuddyClient::UpdateWorkspaceRole(const UpdateWorkspaceRoleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateWorkspaceRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateWorkspaceRoleResponse rsp = UpdateWorkspaceRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateWorkspaceRoleOutcome(rsp);
        else
            return UpdateWorkspaceRoleOutcome(o.GetError());
    }
    else
    {
        return UpdateWorkspaceRoleOutcome(outcome.GetError());
    }
}

void DatabuddyClient::UpdateWorkspaceRoleAsync(const UpdateWorkspaceRoleRequest& request, const UpdateWorkspaceRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateWorkspaceRoleRequest&;
    using Resp = UpdateWorkspaceRoleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateWorkspaceRole", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DatabuddyClient::UpdateWorkspaceRoleOutcomeCallable DatabuddyClient::UpdateWorkspaceRoleCallable(const UpdateWorkspaceRoleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateWorkspaceRoleOutcome>>();
    UpdateWorkspaceRoleAsync(
    request,
    [prom](
        const DatabuddyClient*,
        const UpdateWorkspaceRoleRequest&,
        UpdateWorkspaceRoleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

