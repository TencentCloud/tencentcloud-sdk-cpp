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

#include <tencentcloud/dasb/v20191018/DasbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dasb::V20191018;
using namespace TencentCloud::Dasb::V20191018::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-10-18";
    const string ENDPOINT = "dasb.tencentcloudapi.com";
}

DasbClient::DasbClient(const Credential &credential, const string &region) :
    DasbClient(credential, region, ClientProfile())
{
}

DasbClient::DasbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DasbClient::AddDeviceGroupMembersOutcome DasbClient::AddDeviceGroupMembers(const AddDeviceGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "AddDeviceGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddDeviceGroupMembersResponse rsp = AddDeviceGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddDeviceGroupMembersOutcome(rsp);
        else
            return AddDeviceGroupMembersOutcome(o.GetError());
    }
    else
    {
        return AddDeviceGroupMembersOutcome(outcome.GetError());
    }
}

void DasbClient::AddDeviceGroupMembersAsync(const AddDeviceGroupMembersRequest& request, const AddDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDeviceGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::AddDeviceGroupMembersOutcomeCallable DasbClient::AddDeviceGroupMembersCallable(const AddDeviceGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddDeviceGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->AddDeviceGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::AddUserGroupMembersOutcome DasbClient::AddUserGroupMembers(const AddUserGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserGroupMembersResponse rsp = AddUserGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserGroupMembersOutcome(rsp);
        else
            return AddUserGroupMembersOutcome(o.GetError());
    }
    else
    {
        return AddUserGroupMembersOutcome(outcome.GetError());
    }
}

void DasbClient::AddUserGroupMembersAsync(const AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::AddUserGroupMembersOutcomeCallable DasbClient::AddUserGroupMembersCallable(const AddUserGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->AddUserGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::BindDeviceResourceOutcome DasbClient::BindDeviceResource(const BindDeviceResourceRequest &request)
{
    auto outcome = MakeRequest(request, "BindDeviceResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDeviceResourceResponse rsp = BindDeviceResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDeviceResourceOutcome(rsp);
        else
            return BindDeviceResourceOutcome(o.GetError());
    }
    else
    {
        return BindDeviceResourceOutcome(outcome.GetError());
    }
}

void DasbClient::BindDeviceResourceAsync(const BindDeviceResourceRequest& request, const BindDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDeviceResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::BindDeviceResourceOutcomeCallable DasbClient::BindDeviceResourceCallable(const BindDeviceResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDeviceResourceOutcome()>>(
        [this, request]()
        {
            return this->BindDeviceResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::CreateAclOutcome DasbClient::CreateAcl(const CreateAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAclResponse rsp = CreateAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAclOutcome(rsp);
        else
            return CreateAclOutcome(o.GetError());
    }
    else
    {
        return CreateAclOutcome(outcome.GetError());
    }
}

void DasbClient::CreateAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::CreateAclOutcomeCallable DasbClient::CreateAclCallable(const CreateAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAclOutcome()>>(
        [this, request]()
        {
            return this->CreateAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::CreateDeviceGroupOutcome DasbClient::CreateDeviceGroup(const CreateDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceGroupResponse rsp = CreateDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceGroupOutcome(rsp);
        else
            return CreateDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceGroupOutcome(outcome.GetError());
    }
}

void DasbClient::CreateDeviceGroupAsync(const CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::CreateDeviceGroupOutcomeCallable DasbClient::CreateDeviceGroupCallable(const CreateDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::CreateUserOutcome DasbClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void DasbClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::CreateUserOutcomeCallable DasbClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::CreateUserGroupOutcome DasbClient::CreateUserGroup(const CreateUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserGroupResponse rsp = CreateUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserGroupOutcome(rsp);
        else
            return CreateUserGroupOutcome(o.GetError());
    }
    else
    {
        return CreateUserGroupOutcome(outcome.GetError());
    }
}

void DasbClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::CreateUserGroupOutcomeCallable DasbClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DeleteAclsOutcome DasbClient::DeleteAcls(const DeleteAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAclsResponse rsp = DeleteAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAclsOutcome(rsp);
        else
            return DeleteAclsOutcome(o.GetError());
    }
    else
    {
        return DeleteAclsOutcome(outcome.GetError());
    }
}

void DasbClient::DeleteAclsAsync(const DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DeleteAclsOutcomeCallable DasbClient::DeleteAclsCallable(const DeleteAclsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAclsOutcome()>>(
        [this, request]()
        {
            return this->DeleteAcls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DeleteDeviceGroupMembersOutcome DasbClient::DeleteDeviceGroupMembers(const DeleteDeviceGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceGroupMembersResponse rsp = DeleteDeviceGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceGroupMembersOutcome(rsp);
        else
            return DeleteDeviceGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceGroupMembersOutcome(outcome.GetError());
    }
}

void DasbClient::DeleteDeviceGroupMembersAsync(const DeleteDeviceGroupMembersRequest& request, const DeleteDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DeleteDeviceGroupMembersOutcomeCallable DasbClient::DeleteDeviceGroupMembersCallable(const DeleteDeviceGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DeleteDeviceGroupsOutcome DasbClient::DeleteDeviceGroups(const DeleteDeviceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceGroupsResponse rsp = DeleteDeviceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceGroupsOutcome(rsp);
        else
            return DeleteDeviceGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceGroupsOutcome(outcome.GetError());
    }
}

void DasbClient::DeleteDeviceGroupsAsync(const DeleteDeviceGroupsRequest& request, const DeleteDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DeleteDeviceGroupsOutcomeCallable DasbClient::DeleteDeviceGroupsCallable(const DeleteDeviceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DeleteUserGroupMembersOutcome DasbClient::DeleteUserGroupMembers(const DeleteUserGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserGroupMembersResponse rsp = DeleteUserGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserGroupMembersOutcome(rsp);
        else
            return DeleteUserGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DeleteUserGroupMembersOutcome(outcome.GetError());
    }
}

void DasbClient::DeleteUserGroupMembersAsync(const DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DeleteUserGroupMembersOutcomeCallable DasbClient::DeleteUserGroupMembersCallable(const DeleteUserGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DeleteUserGroupsOutcome DasbClient::DeleteUserGroups(const DeleteUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserGroupsResponse rsp = DeleteUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserGroupsOutcome(rsp);
        else
            return DeleteUserGroupsOutcome(o.GetError());
    }
    else
    {
        return DeleteUserGroupsOutcome(outcome.GetError());
    }
}

void DasbClient::DeleteUserGroupsAsync(const DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DeleteUserGroupsOutcomeCallable DasbClient::DeleteUserGroupsCallable(const DeleteUserGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserGroupsOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DeleteUsersOutcome DasbClient::DeleteUsers(const DeleteUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsersResponse rsp = DeleteUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsersOutcome(rsp);
        else
            return DeleteUsersOutcome(o.GetError());
    }
    else
    {
        return DeleteUsersOutcome(outcome.GetError());
    }
}

void DasbClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DeleteUsersOutcomeCallable DasbClient::DeleteUsersCallable(const DeleteUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUsersOutcome()>>(
        [this, request]()
        {
            return this->DeleteUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeAclsOutcome DasbClient::DescribeAcls(const DescribeAclsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAcls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAclsResponse rsp = DescribeAclsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAclsOutcome(rsp);
        else
            return DescribeAclsOutcome(o.GetError());
    }
    else
    {
        return DescribeAclsOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeAclsAsync(const DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeAclsOutcomeCallable DasbClient::DescribeAclsCallable(const DescribeAclsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAclsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAcls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeDasbImageIdsOutcome DasbClient::DescribeDasbImageIds(const DescribeDasbImageIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDasbImageIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDasbImageIdsResponse rsp = DescribeDasbImageIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDasbImageIdsOutcome(rsp);
        else
            return DescribeDasbImageIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeDasbImageIdsOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeDasbImageIdsAsync(const DescribeDasbImageIdsRequest& request, const DescribeDasbImageIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDasbImageIds(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeDasbImageIdsOutcomeCallable DasbClient::DescribeDasbImageIdsCallable(const DescribeDasbImageIdsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDasbImageIdsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDasbImageIds(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeDeviceGroupMembersOutcome DasbClient::DescribeDeviceGroupMembers(const DescribeDeviceGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupMembersResponse rsp = DescribeDeviceGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupMembersOutcome(rsp);
        else
            return DescribeDeviceGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupMembersOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeDeviceGroupMembersAsync(const DescribeDeviceGroupMembersRequest& request, const DescribeDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeDeviceGroupMembersOutcomeCallable DasbClient::DescribeDeviceGroupMembersCallable(const DescribeDeviceGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeDeviceGroupsOutcome DasbClient::DescribeDeviceGroups(const DescribeDeviceGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceGroupsResponse rsp = DescribeDeviceGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceGroupsOutcome(rsp);
        else
            return DescribeDeviceGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceGroupsOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeDeviceGroupsAsync(const DescribeDeviceGroupsRequest& request, const DescribeDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeDeviceGroupsOutcomeCallable DasbClient::DescribeDeviceGroupsCallable(const DescribeDeviceGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeDevicesOutcome DasbClient::DescribeDevices(const DescribeDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesResponse rsp = DescribeDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesOutcome(rsp);
        else
            return DescribeDevicesOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeDevicesOutcomeCallable DasbClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeResourcesOutcome DasbClient::DescribeResources(const DescribeResourcesRequest &request)
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

void DasbClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeResourcesOutcomeCallable DasbClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeUserGroupMembersOutcome DasbClient::DescribeUserGroupMembers(const DescribeUserGroupMembersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroupMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupMembersResponse rsp = DescribeUserGroupMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupMembersOutcome(rsp);
        else
            return DescribeUserGroupMembersOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupMembersOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeUserGroupMembersAsync(const DescribeUserGroupMembersRequest& request, const DescribeUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeUserGroupMembersOutcomeCallable DasbClient::DescribeUserGroupMembersCallable(const DescribeUserGroupMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserGroupMembersOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserGroupMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeUserGroupsOutcome DasbClient::DescribeUserGroups(const DescribeUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserGroupsResponse rsp = DescribeUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserGroupsOutcome(rsp);
        else
            return DescribeUserGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeUserGroupsOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeUserGroupsAsync(const DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeUserGroupsOutcomeCallable DasbClient::DescribeUserGroupsCallable(const DescribeUserGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserGroupsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::DescribeUsersOutcome DasbClient::DescribeUsers(const DescribeUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsersResponse rsp = DescribeUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsersOutcome(rsp);
        else
            return DescribeUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeUsersOutcome(outcome.GetError());
    }
}

void DasbClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::DescribeUsersOutcomeCallable DasbClient::DescribeUsersCallable(const DescribeUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::ModifyAclOutcome DasbClient::ModifyAcl(const ModifyAclRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAclResponse rsp = ModifyAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAclOutcome(rsp);
        else
            return ModifyAclOutcome(o.GetError());
    }
    else
    {
        return ModifyAclOutcome(outcome.GetError());
    }
}

void DasbClient::ModifyAclAsync(const ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::ModifyAclOutcomeCallable DasbClient::ModifyAclCallable(const ModifyAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAclOutcome()>>(
        [this, request]()
        {
            return this->ModifyAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DasbClient::ModifyUserOutcome DasbClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void DasbClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DasbClient::ModifyUserOutcomeCallable DasbClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

