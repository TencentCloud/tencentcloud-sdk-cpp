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

#include <tencentcloud/chdfs/v20201112/ChdfsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Chdfs::V20201112;
using namespace TencentCloud::Chdfs::V20201112::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-12";
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


ChdfsClient::AssociateAccessGroupsOutcome ChdfsClient::AssociateAccessGroups(const AssociateAccessGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateAccessGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateAccessGroupsResponse rsp = AssociateAccessGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateAccessGroupsOutcome(rsp);
        else
            return AssociateAccessGroupsOutcome(o.GetError());
    }
    else
    {
        return AssociateAccessGroupsOutcome(outcome.GetError());
    }
}

void ChdfsClient::AssociateAccessGroupsAsync(const AssociateAccessGroupsRequest& request, const AssociateAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AssociateAccessGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::AssociateAccessGroupsOutcomeCallable ChdfsClient::AssociateAccessGroupsCallable(const AssociateAccessGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AssociateAccessGroupsOutcome()>>(
        [this, request]()
        {
            return this->AssociateAccessGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

ChdfsClient::DescribeAccessGroupOutcome ChdfsClient::DescribeAccessGroup(const DescribeAccessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessGroupResponse rsp = DescribeAccessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessGroupOutcome(rsp);
        else
            return DescribeAccessGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessGroupOutcome(outcome.GetError());
    }
}

void ChdfsClient::DescribeAccessGroupAsync(const DescribeAccessGroupRequest& request, const DescribeAccessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DescribeAccessGroupOutcomeCallable ChdfsClient::DescribeAccessGroupCallable(const DescribeAccessGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessGroup(request);
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

ChdfsClient::DisassociateAccessGroupsOutcome ChdfsClient::DisassociateAccessGroups(const DisassociateAccessGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateAccessGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateAccessGroupsResponse rsp = DisassociateAccessGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateAccessGroupsOutcome(rsp);
        else
            return DisassociateAccessGroupsOutcome(o.GetError());
    }
    else
    {
        return DisassociateAccessGroupsOutcome(outcome.GetError());
    }
}

void ChdfsClient::DisassociateAccessGroupsAsync(const DisassociateAccessGroupsRequest& request, const DisassociateAccessGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisassociateAccessGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ChdfsClient::DisassociateAccessGroupsOutcomeCallable ChdfsClient::DisassociateAccessGroupsCallable(const DisassociateAccessGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisassociateAccessGroupsOutcome()>>(
        [this, request]()
        {
            return this->DisassociateAccessGroups(request);
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

