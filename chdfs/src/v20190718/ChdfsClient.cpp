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

#include <tencentcloud/chdfs/v20190718/ChdfsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Chdfs::V20190718;
using namespace TencentCloud::Chdfs::V20190718::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-07-18";
    const string ENDPOINT = "chdfs.tencentcloudapi.com";
}

ChdfsClient::ChdfsClient(const Credential &credential, const string &region) :
    ChdfsClient(credential, region, ClientProfile())
{
}

ChdfsClient::ChdfsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ChdfsClient::CreateAccessGroupOutcome ChdfsClient::CreateAccessGroup(const CreateAccessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessGroupResponse rsp = CreateAccessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessGroupOutcome(rsp);
        else
            return CreateAccessGroupOutcome(o.GetError());
    }
    else
    {
        return CreateAccessGroupOutcome(outcome.GetError());
    }
}

void ChdfsClient::CreateAccessGroupAsync(const CreateAccessGroupRequest& request, const CreateAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessGroupRequest&;
    using Resp = CreateAccessGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::CreateAccessGroupOutcomeCallable ChdfsClient::CreateAccessGroupCallable(const CreateAccessGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessGroupOutcome>>();
    CreateAccessGroupAsync(
    request,
    [prom](
        const ChdfsClient*,
        const CreateAccessGroupRequest&,
        CreateAccessGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::CreateAccessRulesOutcome ChdfsClient::CreateAccessRules(const CreateAccessRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessRulesResponse rsp = CreateAccessRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessRulesOutcome(rsp);
        else
            return CreateAccessRulesOutcome(o.GetError());
    }
    else
    {
        return CreateAccessRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::CreateAccessRulesAsync(const CreateAccessRulesRequest& request, const CreateAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAccessRulesRequest&;
    using Resp = CreateAccessRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAccessRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::CreateAccessRulesOutcomeCallable ChdfsClient::CreateAccessRulesCallable(const CreateAccessRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAccessRulesOutcome>>();
    CreateAccessRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const CreateAccessRulesRequest&,
        CreateAccessRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::CreateFileSystemOutcome ChdfsClient::CreateFileSystem(const CreateFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileSystemResponse rsp = CreateFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileSystemOutcome(rsp);
        else
            return CreateFileSystemOutcome(o.GetError());
    }
    else
    {
        return CreateFileSystemOutcome(outcome.GetError());
    }
}

void ChdfsClient::CreateFileSystemAsync(const CreateFileSystemRequest& request, const CreateFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileSystemRequest&;
    using Resp = CreateFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::CreateFileSystemOutcomeCallable ChdfsClient::CreateFileSystemCallable(const CreateFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileSystemOutcome>>();
    CreateFileSystemAsync(
    request,
    [prom](
        const ChdfsClient*,
        const CreateFileSystemRequest&,
        CreateFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::CreateLifeCycleRulesOutcome ChdfsClient::CreateLifeCycleRules(const CreateLifeCycleRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLifeCycleRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLifeCycleRulesResponse rsp = CreateLifeCycleRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLifeCycleRulesOutcome(rsp);
        else
            return CreateLifeCycleRulesOutcome(o.GetError());
    }
    else
    {
        return CreateLifeCycleRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::CreateLifeCycleRulesAsync(const CreateLifeCycleRulesRequest& request, const CreateLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLifeCycleRulesRequest&;
    using Resp = CreateLifeCycleRulesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLifeCycleRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::CreateLifeCycleRulesOutcomeCallable ChdfsClient::CreateLifeCycleRulesCallable(const CreateLifeCycleRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLifeCycleRulesOutcome>>();
    CreateLifeCycleRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const CreateLifeCycleRulesRequest&,
        CreateLifeCycleRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::CreateMountPointOutcome ChdfsClient::CreateMountPoint(const CreateMountPointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMountPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMountPointResponse rsp = CreateMountPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMountPointOutcome(rsp);
        else
            return CreateMountPointOutcome(o.GetError());
    }
    else
    {
        return CreateMountPointOutcome(outcome.GetError());
    }
}

void ChdfsClient::CreateMountPointAsync(const CreateMountPointRequest& request, const CreateMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMountPointRequest&;
    using Resp = CreateMountPointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMountPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::CreateMountPointOutcomeCallable ChdfsClient::CreateMountPointCallable(const CreateMountPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMountPointOutcome>>();
    CreateMountPointAsync(
    request,
    [prom](
        const ChdfsClient*,
        const CreateMountPointRequest&,
        CreateMountPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::CreateRestoreTasksOutcome ChdfsClient::CreateRestoreTasks(const CreateRestoreTasksRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRestoreTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRestoreTasksResponse rsp = CreateRestoreTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRestoreTasksOutcome(rsp);
        else
            return CreateRestoreTasksOutcome(o.GetError());
    }
    else
    {
        return CreateRestoreTasksOutcome(outcome.GetError());
    }
}

void ChdfsClient::CreateRestoreTasksAsync(const CreateRestoreTasksRequest& request, const CreateRestoreTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRestoreTasksRequest&;
    using Resp = CreateRestoreTasksResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRestoreTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::CreateRestoreTasksOutcomeCallable ChdfsClient::CreateRestoreTasksCallable(const CreateRestoreTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRestoreTasksOutcome>>();
    CreateRestoreTasksAsync(
    request,
    [prom](
        const ChdfsClient*,
        const CreateRestoreTasksRequest&,
        CreateRestoreTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DeleteAccessGroupOutcome ChdfsClient::DeleteAccessGroup(const DeleteAccessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessGroupResponse rsp = DeleteAccessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessGroupOutcome(rsp);
        else
            return DeleteAccessGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessGroupOutcome(outcome.GetError());
    }
}

void ChdfsClient::DeleteAccessGroupAsync(const DeleteAccessGroupRequest& request, const DeleteAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccessGroupRequest&;
    using Resp = DeleteAccessGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccessGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DeleteAccessGroupOutcomeCallable ChdfsClient::DeleteAccessGroupCallable(const DeleteAccessGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccessGroupOutcome>>();
    DeleteAccessGroupAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DeleteAccessGroupRequest&,
        DeleteAccessGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DeleteAccessRulesOutcome ChdfsClient::DeleteAccessRules(const DeleteAccessRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessRulesResponse rsp = DeleteAccessRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessRulesOutcome(rsp);
        else
            return DeleteAccessRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::DeleteAccessRulesAsync(const DeleteAccessRulesRequest& request, const DeleteAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAccessRulesRequest&;
    using Resp = DeleteAccessRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAccessRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DeleteAccessRulesOutcomeCallable ChdfsClient::DeleteAccessRulesCallable(const DeleteAccessRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAccessRulesOutcome>>();
    DeleteAccessRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DeleteAccessRulesRequest&,
        DeleteAccessRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DeleteFileSystemOutcome ChdfsClient::DeleteFileSystem(const DeleteFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileSystemResponse rsp = DeleteFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileSystemOutcome(rsp);
        else
            return DeleteFileSystemOutcome(o.GetError());
    }
    else
    {
        return DeleteFileSystemOutcome(outcome.GetError());
    }
}

void ChdfsClient::DeleteFileSystemAsync(const DeleteFileSystemRequest& request, const DeleteFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileSystemRequest&;
    using Resp = DeleteFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DeleteFileSystemOutcomeCallable ChdfsClient::DeleteFileSystemCallable(const DeleteFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileSystemOutcome>>();
    DeleteFileSystemAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DeleteFileSystemRequest&,
        DeleteFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DeleteLifeCycleRulesOutcome ChdfsClient::DeleteLifeCycleRules(const DeleteLifeCycleRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLifeCycleRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLifeCycleRulesResponse rsp = DeleteLifeCycleRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLifeCycleRulesOutcome(rsp);
        else
            return DeleteLifeCycleRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteLifeCycleRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::DeleteLifeCycleRulesAsync(const DeleteLifeCycleRulesRequest& request, const DeleteLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLifeCycleRulesRequest&;
    using Resp = DeleteLifeCycleRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLifeCycleRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DeleteLifeCycleRulesOutcomeCallable ChdfsClient::DeleteLifeCycleRulesCallable(const DeleteLifeCycleRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLifeCycleRulesOutcome>>();
    DeleteLifeCycleRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DeleteLifeCycleRulesRequest&,
        DeleteLifeCycleRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DeleteMountPointOutcome ChdfsClient::DeleteMountPoint(const DeleteMountPointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMountPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMountPointResponse rsp = DeleteMountPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMountPointOutcome(rsp);
        else
            return DeleteMountPointOutcome(o.GetError());
    }
    else
    {
        return DeleteMountPointOutcome(outcome.GetError());
    }
}

void ChdfsClient::DeleteMountPointAsync(const DeleteMountPointRequest& request, const DeleteMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMountPointRequest&;
    using Resp = DeleteMountPointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMountPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DeleteMountPointOutcomeCallable ChdfsClient::DeleteMountPointCallable(const DeleteMountPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMountPointOutcome>>();
    DeleteMountPointAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DeleteMountPointRequest&,
        DeleteMountPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeAccessGroupsOutcome ChdfsClient::DescribeAccessGroups(const DescribeAccessGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessGroupsResponse rsp = DescribeAccessGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessGroupsOutcome(rsp);
        else
            return DescribeAccessGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessGroupsOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeAccessGroupsAsync(const DescribeAccessGroupsRequest& request, const DescribeAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessGroupsRequest&;
    using Resp = DescribeAccessGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeAccessGroupsOutcomeCallable ChdfsClient::DescribeAccessGroupsCallable(const DescribeAccessGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessGroupsOutcome>>();
    DescribeAccessGroupsAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeAccessGroupsRequest&,
        DescribeAccessGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeAccessRulesOutcome ChdfsClient::DescribeAccessRules(const DescribeAccessRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessRulesResponse rsp = DescribeAccessRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessRulesOutcome(rsp);
        else
            return DescribeAccessRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeAccessRulesAsync(const DescribeAccessRulesRequest& request, const DescribeAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessRulesRequest&;
    using Resp = DescribeAccessRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeAccessRulesOutcomeCallable ChdfsClient::DescribeAccessRulesCallable(const DescribeAccessRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessRulesOutcome>>();
    DescribeAccessRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeAccessRulesRequest&,
        DescribeAccessRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeFileSystemOutcome ChdfsClient::DescribeFileSystem(const DescribeFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileSystemResponse rsp = DescribeFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileSystemOutcome(rsp);
        else
            return DescribeFileSystemOutcome(o.GetError());
    }
    else
    {
        return DescribeFileSystemOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeFileSystemAsync(const DescribeFileSystemRequest& request, const DescribeFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileSystemRequest&;
    using Resp = DescribeFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeFileSystemOutcomeCallable ChdfsClient::DescribeFileSystemCallable(const DescribeFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileSystemOutcome>>();
    DescribeFileSystemAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeFileSystemRequest&,
        DescribeFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeFileSystemsOutcome ChdfsClient::DescribeFileSystems(const DescribeFileSystemsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileSystems");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileSystemsResponse rsp = DescribeFileSystemsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileSystemsOutcome(rsp);
        else
            return DescribeFileSystemsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileSystemsOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeFileSystemsAsync(const DescribeFileSystemsRequest& request, const DescribeFileSystemsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileSystemsRequest&;
    using Resp = DescribeFileSystemsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileSystems", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeFileSystemsOutcomeCallable ChdfsClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileSystemsOutcome>>();
    DescribeFileSystemsAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeFileSystemsRequest&,
        DescribeFileSystemsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeLifeCycleRulesOutcome ChdfsClient::DescribeLifeCycleRules(const DescribeLifeCycleRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLifeCycleRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLifeCycleRulesResponse rsp = DescribeLifeCycleRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLifeCycleRulesOutcome(rsp);
        else
            return DescribeLifeCycleRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLifeCycleRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeLifeCycleRulesAsync(const DescribeLifeCycleRulesRequest& request, const DescribeLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLifeCycleRulesRequest&;
    using Resp = DescribeLifeCycleRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLifeCycleRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeLifeCycleRulesOutcomeCallable ChdfsClient::DescribeLifeCycleRulesCallable(const DescribeLifeCycleRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLifeCycleRulesOutcome>>();
    DescribeLifeCycleRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeLifeCycleRulesRequest&,
        DescribeLifeCycleRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeMountPointOutcome ChdfsClient::DescribeMountPoint(const DescribeMountPointRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMountPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMountPointResponse rsp = DescribeMountPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMountPointOutcome(rsp);
        else
            return DescribeMountPointOutcome(o.GetError());
    }
    else
    {
        return DescribeMountPointOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeMountPointAsync(const DescribeMountPointRequest& request, const DescribeMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMountPointRequest&;
    using Resp = DescribeMountPointResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMountPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeMountPointOutcomeCallable ChdfsClient::DescribeMountPointCallable(const DescribeMountPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMountPointOutcome>>();
    DescribeMountPointAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeMountPointRequest&,
        DescribeMountPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeMountPointsOutcome ChdfsClient::DescribeMountPoints(const DescribeMountPointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMountPoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMountPointsResponse rsp = DescribeMountPointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMountPointsOutcome(rsp);
        else
            return DescribeMountPointsOutcome(o.GetError());
    }
    else
    {
        return DescribeMountPointsOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeMountPointsAsync(const DescribeMountPointsRequest& request, const DescribeMountPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMountPointsRequest&;
    using Resp = DescribeMountPointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMountPoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeMountPointsOutcomeCallable ChdfsClient::DescribeMountPointsCallable(const DescribeMountPointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMountPointsOutcome>>();
    DescribeMountPointsAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeMountPointsRequest&,
        DescribeMountPointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeResourceTagsOutcome ChdfsClient::DescribeResourceTags(const DescribeResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTagsResponse rsp = DescribeResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTagsOutcome(rsp);
        else
            return DescribeResourceTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTagsOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeResourceTagsAsync(const DescribeResourceTagsRequest& request, const DescribeResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTagsRequest&;
    using Resp = DescribeResourceTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeResourceTagsOutcomeCallable ChdfsClient::DescribeResourceTagsCallable(const DescribeResourceTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTagsOutcome>>();
    DescribeResourceTagsAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeResourceTagsRequest&,
        DescribeResourceTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::DescribeRestoreTasksOutcome ChdfsClient::DescribeRestoreTasks(const DescribeRestoreTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRestoreTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRestoreTasksResponse rsp = DescribeRestoreTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRestoreTasksOutcome(rsp);
        else
            return DescribeRestoreTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeRestoreTasksOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeRestoreTasksAsync(const DescribeRestoreTasksRequest& request, const DescribeRestoreTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRestoreTasksRequest&;
    using Resp = DescribeRestoreTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRestoreTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::DescribeRestoreTasksOutcomeCallable ChdfsClient::DescribeRestoreTasksCallable(const DescribeRestoreTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRestoreTasksOutcome>>();
    DescribeRestoreTasksAsync(
    request,
    [prom](
        const ChdfsClient*,
        const DescribeRestoreTasksRequest&,
        DescribeRestoreTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::ModifyAccessGroupOutcome ChdfsClient::ModifyAccessGroup(const ModifyAccessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessGroupResponse rsp = ModifyAccessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessGroupOutcome(rsp);
        else
            return ModifyAccessGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessGroupOutcome(outcome.GetError());
    }
}

void ChdfsClient::ModifyAccessGroupAsync(const ModifyAccessGroupRequest& request, const ModifyAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessGroupRequest&;
    using Resp = ModifyAccessGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::ModifyAccessGroupOutcomeCallable ChdfsClient::ModifyAccessGroupCallable(const ModifyAccessGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessGroupOutcome>>();
    ModifyAccessGroupAsync(
    request,
    [prom](
        const ChdfsClient*,
        const ModifyAccessGroupRequest&,
        ModifyAccessGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::ModifyAccessRulesOutcome ChdfsClient::ModifyAccessRules(const ModifyAccessRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessRulesResponse rsp = ModifyAccessRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessRulesOutcome(rsp);
        else
            return ModifyAccessRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::ModifyAccessRulesAsync(const ModifyAccessRulesRequest& request, const ModifyAccessRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessRulesRequest&;
    using Resp = ModifyAccessRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::ModifyAccessRulesOutcomeCallable ChdfsClient::ModifyAccessRulesCallable(const ModifyAccessRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessRulesOutcome>>();
    ModifyAccessRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const ModifyAccessRulesRequest&,
        ModifyAccessRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::ModifyFileSystemOutcome ChdfsClient::ModifyFileSystem(const ModifyFileSystemRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFileSystem");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFileSystemResponse rsp = ModifyFileSystemResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFileSystemOutcome(rsp);
        else
            return ModifyFileSystemOutcome(o.GetError());
    }
    else
    {
        return ModifyFileSystemOutcome(outcome.GetError());
    }
}

void ChdfsClient::ModifyFileSystemAsync(const ModifyFileSystemRequest& request, const ModifyFileSystemAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFileSystemRequest&;
    using Resp = ModifyFileSystemResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFileSystem", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::ModifyFileSystemOutcomeCallable ChdfsClient::ModifyFileSystemCallable(const ModifyFileSystemRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFileSystemOutcome>>();
    ModifyFileSystemAsync(
    request,
    [prom](
        const ChdfsClient*,
        const ModifyFileSystemRequest&,
        ModifyFileSystemOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::ModifyLifeCycleRulesOutcome ChdfsClient::ModifyLifeCycleRules(const ModifyLifeCycleRulesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLifeCycleRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLifeCycleRulesResponse rsp = ModifyLifeCycleRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLifeCycleRulesOutcome(rsp);
        else
            return ModifyLifeCycleRulesOutcome(o.GetError());
    }
    else
    {
        return ModifyLifeCycleRulesOutcome(outcome.GetError());
    }
}

void ChdfsClient::ModifyLifeCycleRulesAsync(const ModifyLifeCycleRulesRequest& request, const ModifyLifeCycleRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLifeCycleRulesRequest&;
    using Resp = ModifyLifeCycleRulesResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLifeCycleRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::ModifyLifeCycleRulesOutcomeCallable ChdfsClient::ModifyLifeCycleRulesCallable(const ModifyLifeCycleRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLifeCycleRulesOutcome>>();
    ModifyLifeCycleRulesAsync(
    request,
    [prom](
        const ChdfsClient*,
        const ModifyLifeCycleRulesRequest&,
        ModifyLifeCycleRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::ModifyMountPointOutcome ChdfsClient::ModifyMountPoint(const ModifyMountPointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMountPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMountPointResponse rsp = ModifyMountPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMountPointOutcome(rsp);
        else
            return ModifyMountPointOutcome(o.GetError());
    }
    else
    {
        return ModifyMountPointOutcome(outcome.GetError());
    }
}

void ChdfsClient::ModifyMountPointAsync(const ModifyMountPointRequest& request, const ModifyMountPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMountPointRequest&;
    using Resp = ModifyMountPointResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMountPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::ModifyMountPointOutcomeCallable ChdfsClient::ModifyMountPointCallable(const ModifyMountPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMountPointOutcome>>();
    ModifyMountPointAsync(
    request,
    [prom](
        const ChdfsClient*,
        const ModifyMountPointRequest&,
        ModifyMountPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ChdfsClient::ModifyResourceTagsOutcome ChdfsClient::ModifyResourceTags(const ModifyResourceTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResourceTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceTagsResponse rsp = ModifyResourceTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceTagsOutcome(rsp);
        else
            return ModifyResourceTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceTagsOutcome(outcome.GetError());
    }
}

void ChdfsClient::ModifyResourceTagsAsync(const ModifyResourceTagsRequest& request, const ModifyResourceTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyResourceTagsRequest&;
    using Resp = ModifyResourceTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyResourceTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ChdfsClient::ModifyResourceTagsOutcomeCallable ChdfsClient::ModifyResourceTagsCallable(const ModifyResourceTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyResourceTagsOutcome>>();
    ModifyResourceTagsAsync(
    request,
    [prom](
        const ChdfsClient*,
        const ModifyResourceTagsRequest&,
        ModifyResourceTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

