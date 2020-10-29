/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::CreateAccessGroupOutcomeCallable ChdfsClient::CreateAccessGroupCallable(const CreateAccessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::CreateAccessRulesOutcomeCallable ChdfsClient::CreateAccessRulesCallable(const CreateAccessRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::CreateFileSystemOutcomeCallable ChdfsClient::CreateFileSystemCallable(const CreateFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileSystemOutcome()>>(
        [this, request]()
        {
            return this->CreateFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLifeCycleRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::CreateLifeCycleRulesOutcomeCallable ChdfsClient::CreateLifeCycleRulesCallable(const CreateLifeCycleRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLifeCycleRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateLifeCycleRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMountPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::CreateMountPointOutcomeCallable ChdfsClient::CreateMountPointCallable(const CreateMountPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMountPointOutcome()>>(
        [this, request]()
        {
            return this->CreateMountPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRestoreTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::CreateRestoreTasksOutcomeCallable ChdfsClient::CreateRestoreTasksCallable(const CreateRestoreTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRestoreTasksOutcome()>>(
        [this, request]()
        {
            return this->CreateRestoreTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DeleteAccessGroupOutcomeCallable ChdfsClient::DeleteAccessGroupCallable(const DeleteAccessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccessGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccessRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DeleteAccessRulesOutcomeCallable ChdfsClient::DeleteAccessRulesCallable(const DeleteAccessRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccessRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccessRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DeleteFileSystemOutcomeCallable ChdfsClient::DeleteFileSystemCallable(const DeleteFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFileSystemOutcome()>>(
        [this, request]()
        {
            return this->DeleteFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLifeCycleRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DeleteLifeCycleRulesOutcomeCallable ChdfsClient::DeleteLifeCycleRulesCallable(const DeleteLifeCycleRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLifeCycleRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteLifeCycleRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMountPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DeleteMountPointOutcomeCallable ChdfsClient::DeleteMountPointCallable(const DeleteMountPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMountPointOutcome()>>(
        [this, request]()
        {
            return this->DeleteMountPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeAccessGroupsOutcomeCallable ChdfsClient::DescribeAccessGroupsCallable(const DescribeAccessGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeAccessRulesOutcomeCallable ChdfsClient::DescribeAccessRulesCallable(const DescribeAccessRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeFileSystemOutcomeCallable ChdfsClient::DescribeFileSystemCallable(const DescribeFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileSystemOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileSystems(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeFileSystemsOutcomeCallable ChdfsClient::DescribeFileSystemsCallable(const DescribeFileSystemsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileSystemsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileSystems(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLifeCycleRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeLifeCycleRulesOutcomeCallable ChdfsClient::DescribeLifeCycleRulesCallable(const DescribeLifeCycleRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLifeCycleRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLifeCycleRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMountPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeMountPointOutcomeCallable ChdfsClient::DescribeMountPointCallable(const DescribeMountPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMountPointOutcome()>>(
        [this, request]()
        {
            return this->DescribeMountPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMountPoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeMountPointsOutcomeCallable ChdfsClient::DescribeMountPointsCallable(const DescribeMountPointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMountPointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMountPoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResourceTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeResourceTagsOutcomeCallable ChdfsClient::DescribeResourceTagsCallable(const DescribeResourceTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourceTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeResourceTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRestoreTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeRestoreTasksOutcomeCallable ChdfsClient::DescribeRestoreTasksCallable(const DescribeRestoreTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRestoreTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeRestoreTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::ModifyAccessGroupOutcomeCallable ChdfsClient::ModifyAccessGroupCallable(const ModifyAccessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAccessRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::ModifyAccessRulesOutcomeCallable ChdfsClient::ModifyAccessRulesCallable(const ModifyAccessRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAccessRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyAccessRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFileSystem(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::ModifyFileSystemOutcomeCallable ChdfsClient::ModifyFileSystemCallable(const ModifyFileSystemRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFileSystemOutcome()>>(
        [this, request]()
        {
            return this->ModifyFileSystem(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLifeCycleRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::ModifyLifeCycleRulesOutcomeCallable ChdfsClient::ModifyLifeCycleRulesCallable(const ModifyLifeCycleRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLifeCycleRulesOutcome()>>(
        [this, request]()
        {
            return this->ModifyLifeCycleRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMountPoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::ModifyMountPointOutcomeCallable ChdfsClient::ModifyMountPointCallable(const ModifyMountPointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMountPointOutcome()>>(
        [this, request]()
        {
            return this->ModifyMountPoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResourceTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::ModifyResourceTagsOutcomeCallable ChdfsClient::ModifyResourceTagsCallable(const ModifyResourceTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyResourceTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

