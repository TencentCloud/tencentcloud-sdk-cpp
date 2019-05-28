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

#include <tencentcloud/cam/v20190116/CamClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cam::V20190116;
using namespace TencentCloud::Cam::V20190116::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-01-16";
    const string ENDPOINT = "cam.tencentcloudapi.com";
}

CamClient::CamClient(const Credential &credential, const string &region) :
    CamClient(credential, region, ClientProfile())
{
}

CamClient::CamClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CamClient::AddUserOutcome CamClient::AddUser(const AddUserRequest &request)
{
    auto outcome = MakeRequest(request, "AddUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserResponse rsp = AddUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserOutcome(rsp);
        else
            return AddUserOutcome(o.GetError());
    }
    else
    {
        return AddUserOutcome(outcome.GetError());
    }
}

void CamClient::AddUserAsync(const AddUserRequest& request, const AddUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::AddUserOutcomeCallable CamClient::AddUserCallable(const AddUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserOutcome()>>(
        [this, request]()
        {
            return this->AddUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::AddUserToGroupOutcome CamClient::AddUserToGroup(const AddUserToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AddUserToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddUserToGroupResponse rsp = AddUserToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddUserToGroupOutcome(rsp);
        else
            return AddUserToGroupOutcome(o.GetError());
    }
    else
    {
        return AddUserToGroupOutcome(outcome.GetError());
    }
}

void CamClient::AddUserToGroupAsync(const AddUserToGroupRequest& request, const AddUserToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserToGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::AddUserToGroupOutcomeCallable CamClient::AddUserToGroupCallable(const AddUserToGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddUserToGroupOutcome()>>(
        [this, request]()
        {
            return this->AddUserToGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::AttachGroupPolicyOutcome CamClient::AttachGroupPolicy(const AttachGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachGroupPolicyResponse rsp = AttachGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachGroupPolicyOutcome(rsp);
        else
            return AttachGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachGroupPolicyOutcome(outcome.GetError());
    }
}

void CamClient::AttachGroupPolicyAsync(const AttachGroupPolicyRequest& request, const AttachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::AttachGroupPolicyOutcomeCallable CamClient::AttachGroupPolicyCallable(const AttachGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::AttachUserPolicyOutcome CamClient::AttachUserPolicy(const AttachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachUserPolicyResponse rsp = AttachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachUserPolicyOutcome(rsp);
        else
            return AttachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return AttachUserPolicyOutcome(outcome.GetError());
    }
}

void CamClient::AttachUserPolicyAsync(const AttachUserPolicyRequest& request, const AttachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::AttachUserPolicyOutcomeCallable CamClient::AttachUserPolicyCallable(const AttachUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::CreateGroupOutcome CamClient::CreateGroup(const CreateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupResponse rsp = CreateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupOutcome(rsp);
        else
            return CreateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupOutcome(outcome.GetError());
    }
}

void CamClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::CreateGroupOutcomeCallable CamClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::CreatePolicyOutcome CamClient::CreatePolicy(const CreatePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyResponse rsp = CreatePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyOutcome(rsp);
        else
            return CreatePolicyOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyOutcome(outcome.GetError());
    }
}

void CamClient::CreatePolicyAsync(const CreatePolicyRequest& request, const CreatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::CreatePolicyOutcomeCallable CamClient::CreatePolicyCallable(const CreatePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePolicyOutcome()>>(
        [this, request]()
        {
            return this->CreatePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::CreateSAMLProviderOutcome CamClient::CreateSAMLProvider(const CreateSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSAMLProviderResponse rsp = CreateSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSAMLProviderOutcome(rsp);
        else
            return CreateSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return CreateSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::CreateSAMLProviderAsync(const CreateSAMLProviderRequest& request, const CreateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSAMLProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::CreateSAMLProviderOutcomeCallable CamClient::CreateSAMLProviderCallable(const CreateSAMLProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSAMLProviderOutcome()>>(
        [this, request]()
        {
            return this->CreateSAMLProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DeleteGroupOutcome CamClient::DeleteGroup(const DeleteGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupResponse rsp = DeleteGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupOutcome(rsp);
        else
            return DeleteGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupOutcome(outcome.GetError());
    }
}

void CamClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeleteGroupOutcomeCallable CamClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DeletePolicyOutcome CamClient::DeletePolicy(const DeletePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePolicyResponse rsp = DeletePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePolicyOutcome(rsp);
        else
            return DeletePolicyOutcome(o.GetError());
    }
    else
    {
        return DeletePolicyOutcome(outcome.GetError());
    }
}

void CamClient::DeletePolicyAsync(const DeletePolicyRequest& request, const DeletePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeletePolicyOutcomeCallable CamClient::DeletePolicyCallable(const DeletePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePolicyOutcome()>>(
        [this, request]()
        {
            return this->DeletePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DeleteSAMLProviderOutcome CamClient::DeleteSAMLProvider(const DeleteSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSAMLProviderResponse rsp = DeleteSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSAMLProviderOutcome(rsp);
        else
            return DeleteSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return DeleteSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::DeleteSAMLProviderAsync(const DeleteSAMLProviderRequest& request, const DeleteSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSAMLProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeleteSAMLProviderOutcomeCallable CamClient::DeleteSAMLProviderCallable(const DeleteSAMLProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSAMLProviderOutcome()>>(
        [this, request]()
        {
            return this->DeleteSAMLProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DeleteUserOutcome CamClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void CamClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeleteUserOutcomeCallable CamClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DetachGroupPolicyOutcome CamClient::DetachGroupPolicy(const DetachGroupPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachGroupPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachGroupPolicyResponse rsp = DetachGroupPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachGroupPolicyOutcome(rsp);
        else
            return DetachGroupPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachGroupPolicyOutcome(outcome.GetError());
    }
}

void CamClient::DetachGroupPolicyAsync(const DetachGroupPolicyRequest& request, const DetachGroupPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachGroupPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DetachGroupPolicyOutcomeCallable CamClient::DetachGroupPolicyCallable(const DetachGroupPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachGroupPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachGroupPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DetachUserPolicyOutcome CamClient::DetachUserPolicy(const DetachUserPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachUserPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachUserPolicyResponse rsp = DetachUserPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachUserPolicyOutcome(rsp);
        else
            return DetachUserPolicyOutcome(o.GetError());
    }
    else
    {
        return DetachUserPolicyOutcome(outcome.GetError());
    }
}

void CamClient::DetachUserPolicyAsync(const DetachUserPolicyRequest& request, const DetachUserPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachUserPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DetachUserPolicyOutcomeCallable CamClient::DetachUserPolicyCallable(const DetachUserPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachUserPolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachUserPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::GetGroupOutcome CamClient::GetGroup(const GetGroupRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupResponse rsp = GetGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupOutcome(rsp);
        else
            return GetGroupOutcome(o.GetError());
    }
    else
    {
        return GetGroupOutcome(outcome.GetError());
    }
}

void CamClient::GetGroupAsync(const GetGroupRequest& request, const GetGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetGroupOutcomeCallable CamClient::GetGroupCallable(const GetGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupOutcome()>>(
        [this, request]()
        {
            return this->GetGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::GetPolicyOutcome CamClient::GetPolicy(const GetPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "GetPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPolicyResponse rsp = GetPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPolicyOutcome(rsp);
        else
            return GetPolicyOutcome(o.GetError());
    }
    else
    {
        return GetPolicyOutcome(outcome.GetError());
    }
}

void CamClient::GetPolicyAsync(const GetPolicyRequest& request, const GetPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetPolicyOutcomeCallable CamClient::GetPolicyCallable(const GetPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPolicyOutcome()>>(
        [this, request]()
        {
            return this->GetPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::GetSAMLProviderOutcome CamClient::GetSAMLProvider(const GetSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "GetSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSAMLProviderResponse rsp = GetSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSAMLProviderOutcome(rsp);
        else
            return GetSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return GetSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::GetSAMLProviderAsync(const GetSAMLProviderRequest& request, const GetSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSAMLProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetSAMLProviderOutcomeCallable CamClient::GetSAMLProviderCallable(const GetSAMLProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSAMLProviderOutcome()>>(
        [this, request]()
        {
            return this->GetSAMLProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::GetUserOutcome CamClient::GetUser(const GetUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetUserResponse rsp = GetUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetUserOutcome(rsp);
        else
            return GetUserOutcome(o.GetError());
    }
    else
    {
        return GetUserOutcome(outcome.GetError());
    }
}

void CamClient::GetUserAsync(const GetUserRequest& request, const GetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetUserOutcomeCallable CamClient::GetUserCallable(const GetUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetUserOutcome()>>(
        [this, request]()
        {
            return this->GetUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListAttachedGroupPoliciesOutcome CamClient::ListAttachedGroupPolicies(const ListAttachedGroupPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedGroupPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedGroupPoliciesResponse rsp = ListAttachedGroupPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedGroupPoliciesOutcome(rsp);
        else
            return ListAttachedGroupPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedGroupPoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedGroupPoliciesAsync(const ListAttachedGroupPoliciesRequest& request, const ListAttachedGroupPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAttachedGroupPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListAttachedGroupPoliciesOutcomeCallable CamClient::ListAttachedGroupPoliciesCallable(const ListAttachedGroupPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAttachedGroupPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ListAttachedGroupPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListAttachedUserPoliciesOutcome CamClient::ListAttachedUserPolicies(const ListAttachedUserPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedUserPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedUserPoliciesResponse rsp = ListAttachedUserPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedUserPoliciesOutcome(rsp);
        else
            return ListAttachedUserPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedUserPoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedUserPoliciesAsync(const ListAttachedUserPoliciesRequest& request, const ListAttachedUserPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAttachedUserPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListAttachedUserPoliciesOutcomeCallable CamClient::ListAttachedUserPoliciesCallable(const ListAttachedUserPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAttachedUserPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ListAttachedUserPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListEntitiesForPolicyOutcome CamClient::ListEntitiesForPolicy(const ListEntitiesForPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ListEntitiesForPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListEntitiesForPolicyResponse rsp = ListEntitiesForPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListEntitiesForPolicyOutcome(rsp);
        else
            return ListEntitiesForPolicyOutcome(o.GetError());
    }
    else
    {
        return ListEntitiesForPolicyOutcome(outcome.GetError());
    }
}

void CamClient::ListEntitiesForPolicyAsync(const ListEntitiesForPolicyRequest& request, const ListEntitiesForPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListEntitiesForPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListEntitiesForPolicyOutcomeCallable CamClient::ListEntitiesForPolicyCallable(const ListEntitiesForPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListEntitiesForPolicyOutcome()>>(
        [this, request]()
        {
            return this->ListEntitiesForPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListGroupsOutcome CamClient::ListGroups(const ListGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupsResponse rsp = ListGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupsOutcome(rsp);
        else
            return ListGroupsOutcome(o.GetError());
    }
    else
    {
        return ListGroupsOutcome(outcome.GetError());
    }
}

void CamClient::ListGroupsAsync(const ListGroupsRequest& request, const ListGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListGroupsOutcomeCallable CamClient::ListGroupsCallable(const ListGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListGroupsOutcome()>>(
        [this, request]()
        {
            return this->ListGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListGroupsForUserOutcome CamClient::ListGroupsForUser(const ListGroupsForUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListGroupsForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListGroupsForUserResponse rsp = ListGroupsForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListGroupsForUserOutcome(rsp);
        else
            return ListGroupsForUserOutcome(o.GetError());
    }
    else
    {
        return ListGroupsForUserOutcome(outcome.GetError());
    }
}

void CamClient::ListGroupsForUserAsync(const ListGroupsForUserRequest& request, const ListGroupsForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListGroupsForUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListGroupsForUserOutcomeCallable CamClient::ListGroupsForUserCallable(const ListGroupsForUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListGroupsForUserOutcome()>>(
        [this, request]()
        {
            return this->ListGroupsForUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListPoliciesOutcome CamClient::ListPolicies(const ListPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPoliciesResponse rsp = ListPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPoliciesOutcome(rsp);
        else
            return ListPoliciesOutcome(o.GetError());
    }
    else
    {
        return ListPoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListPoliciesAsync(const ListPoliciesRequest& request, const ListPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListPoliciesOutcomeCallable CamClient::ListPoliciesCallable(const ListPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListPoliciesOutcome()>>(
        [this, request]()
        {
            return this->ListPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListSAMLProvidersOutcome CamClient::ListSAMLProviders(const ListSAMLProvidersRequest &request)
{
    auto outcome = MakeRequest(request, "ListSAMLProviders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListSAMLProvidersResponse rsp = ListSAMLProvidersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListSAMLProvidersOutcome(rsp);
        else
            return ListSAMLProvidersOutcome(o.GetError());
    }
    else
    {
        return ListSAMLProvidersOutcome(outcome.GetError());
    }
}

void CamClient::ListSAMLProvidersAsync(const ListSAMLProvidersRequest& request, const ListSAMLProvidersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListSAMLProviders(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListSAMLProvidersOutcomeCallable CamClient::ListSAMLProvidersCallable(const ListSAMLProvidersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListSAMLProvidersOutcome()>>(
        [this, request]()
        {
            return this->ListSAMLProviders(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListUsersOutcome CamClient::ListUsers(const ListUsersRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersResponse rsp = ListUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersOutcome(rsp);
        else
            return ListUsersOutcome(o.GetError());
    }
    else
    {
        return ListUsersOutcome(outcome.GetError());
    }
}

void CamClient::ListUsersAsync(const ListUsersRequest& request, const ListUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListUsersOutcomeCallable CamClient::ListUsersCallable(const ListUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsersOutcome()>>(
        [this, request]()
        {
            return this->ListUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::ListUsersForGroupOutcome CamClient::ListUsersForGroup(const ListUsersForGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ListUsersForGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUsersForGroupResponse rsp = ListUsersForGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUsersForGroupOutcome(rsp);
        else
            return ListUsersForGroupOutcome(o.GetError());
    }
    else
    {
        return ListUsersForGroupOutcome(outcome.GetError());
    }
}

void CamClient::ListUsersForGroupAsync(const ListUsersForGroupRequest& request, const ListUsersForGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUsersForGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListUsersForGroupOutcomeCallable CamClient::ListUsersForGroupCallable(const ListUsersForGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUsersForGroupOutcome()>>(
        [this, request]()
        {
            return this->ListUsersForGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::RemoveUserFromGroupOutcome CamClient::RemoveUserFromGroup(const RemoveUserFromGroupRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveUserFromGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveUserFromGroupResponse rsp = RemoveUserFromGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveUserFromGroupOutcome(rsp);
        else
            return RemoveUserFromGroupOutcome(o.GetError());
    }
    else
    {
        return RemoveUserFromGroupOutcome(outcome.GetError());
    }
}

void CamClient::RemoveUserFromGroupAsync(const RemoveUserFromGroupRequest& request, const RemoveUserFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RemoveUserFromGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::RemoveUserFromGroupOutcomeCallable CamClient::RemoveUserFromGroupCallable(const RemoveUserFromGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RemoveUserFromGroupOutcome()>>(
        [this, request]()
        {
            return this->RemoveUserFromGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::UpdateGroupOutcome CamClient::UpdateGroup(const UpdateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGroupResponse rsp = UpdateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGroupOutcome(rsp);
        else
            return UpdateGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateGroupOutcome(outcome.GetError());
    }
}

void CamClient::UpdateGroupAsync(const UpdateGroupRequest& request, const UpdateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdateGroupOutcomeCallable CamClient::UpdateGroupCallable(const UpdateGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::UpdatePolicyOutcome CamClient::UpdatePolicy(const UpdatePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePolicyResponse rsp = UpdatePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePolicyOutcome(rsp);
        else
            return UpdatePolicyOutcome(o.GetError());
    }
    else
    {
        return UpdatePolicyOutcome(outcome.GetError());
    }
}

void CamClient::UpdatePolicyAsync(const UpdatePolicyRequest& request, const UpdatePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdatePolicyOutcomeCallable CamClient::UpdatePolicyCallable(const UpdatePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePolicyOutcome()>>(
        [this, request]()
        {
            return this->UpdatePolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::UpdateSAMLProviderOutcome CamClient::UpdateSAMLProvider(const UpdateSAMLProviderRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateSAMLProvider");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateSAMLProviderResponse rsp = UpdateSAMLProviderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateSAMLProviderOutcome(rsp);
        else
            return UpdateSAMLProviderOutcome(o.GetError());
    }
    else
    {
        return UpdateSAMLProviderOutcome(outcome.GetError());
    }
}

void CamClient::UpdateSAMLProviderAsync(const UpdateSAMLProviderRequest& request, const UpdateSAMLProviderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateSAMLProvider(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdateSAMLProviderOutcomeCallable CamClient::UpdateSAMLProviderCallable(const UpdateSAMLProviderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateSAMLProviderOutcome()>>(
        [this, request]()
        {
            return this->UpdateSAMLProvider(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::UpdateUserOutcome CamClient::UpdateUser(const UpdateUserRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserResponse rsp = UpdateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserOutcome(rsp);
        else
            return UpdateUserOutcome(o.GetError());
    }
    else
    {
        return UpdateUserOutcome(outcome.GetError());
    }
}

void CamClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdateUserOutcomeCallable CamClient::UpdateUserCallable(const UpdateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserOutcome()>>(
        [this, request]()
        {
            return this->UpdateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

