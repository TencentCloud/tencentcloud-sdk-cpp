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

CamClient::AttachRolePolicyOutcome CamClient::AttachRolePolicy(const AttachRolePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "AttachRolePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachRolePolicyResponse rsp = AttachRolePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachRolePolicyOutcome(rsp);
        else
            return AttachRolePolicyOutcome(o.GetError());
    }
    else
    {
        return AttachRolePolicyOutcome(outcome.GetError());
    }
}

void CamClient::AttachRolePolicyAsync(const AttachRolePolicyRequest& request, const AttachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AttachRolePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::AttachRolePolicyOutcomeCallable CamClient::AttachRolePolicyCallable(const AttachRolePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AttachRolePolicyOutcome()>>(
        [this, request]()
        {
            return this->AttachRolePolicy(request);
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

CamClient::ConsumeCustomMFATokenOutcome CamClient::ConsumeCustomMFAToken(const ConsumeCustomMFATokenRequest &request)
{
    auto outcome = MakeRequest(request, "ConsumeCustomMFAToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConsumeCustomMFATokenResponse rsp = ConsumeCustomMFATokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConsumeCustomMFATokenOutcome(rsp);
        else
            return ConsumeCustomMFATokenOutcome(o.GetError());
    }
    else
    {
        return ConsumeCustomMFATokenOutcome(outcome.GetError());
    }
}

void CamClient::ConsumeCustomMFATokenAsync(const ConsumeCustomMFATokenRequest& request, const ConsumeCustomMFATokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConsumeCustomMFAToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ConsumeCustomMFATokenOutcomeCallable CamClient::ConsumeCustomMFATokenCallable(const ConsumeCustomMFATokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConsumeCustomMFATokenOutcome()>>(
        [this, request]()
        {
            return this->ConsumeCustomMFAToken(request);
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

CamClient::CreatePolicyVersionOutcome CamClient::CreatePolicyVersion(const CreatePolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePolicyVersionResponse rsp = CreatePolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePolicyVersionOutcome(rsp);
        else
            return CreatePolicyVersionOutcome(o.GetError());
    }
    else
    {
        return CreatePolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::CreatePolicyVersionAsync(const CreatePolicyVersionRequest& request, const CreatePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePolicyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::CreatePolicyVersionOutcomeCallable CamClient::CreatePolicyVersionCallable(const CreatePolicyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePolicyVersionOutcome()>>(
        [this, request]()
        {
            return this->CreatePolicyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::CreateRoleOutcome CamClient::CreateRole(const CreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleResponse rsp = CreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleOutcome(rsp);
        else
            return CreateRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRoleOutcome(outcome.GetError());
    }
}

void CamClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::CreateRoleOutcomeCallable CamClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateRole(request);
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

CamClient::CreateServiceLinkedRoleOutcome CamClient::CreateServiceLinkedRole(const CreateServiceLinkedRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateServiceLinkedRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceLinkedRoleResponse rsp = CreateServiceLinkedRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceLinkedRoleOutcome(rsp);
        else
            return CreateServiceLinkedRoleOutcome(o.GetError());
    }
    else
    {
        return CreateServiceLinkedRoleOutcome(outcome.GetError());
    }
}

void CamClient::CreateServiceLinkedRoleAsync(const CreateServiceLinkedRoleRequest& request, const CreateServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateServiceLinkedRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::CreateServiceLinkedRoleOutcomeCallable CamClient::CreateServiceLinkedRoleCallable(const CreateServiceLinkedRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateServiceLinkedRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateServiceLinkedRole(request);
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

CamClient::DeletePolicyVersionOutcome CamClient::DeletePolicyVersion(const DeletePolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePolicyVersionResponse rsp = DeletePolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePolicyVersionOutcome(rsp);
        else
            return DeletePolicyVersionOutcome(o.GetError());
    }
    else
    {
        return DeletePolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::DeletePolicyVersionAsync(const DeletePolicyVersionRequest& request, const DeletePolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePolicyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeletePolicyVersionOutcomeCallable CamClient::DeletePolicyVersionCallable(const DeletePolicyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePolicyVersionOutcome()>>(
        [this, request]()
        {
            return this->DeletePolicyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::DeleteRoleOutcome CamClient::DeleteRole(const DeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleResponse rsp = DeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleOutcome(rsp);
        else
            return DeleteRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleOutcome(outcome.GetError());
    }
}

void CamClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeleteRoleOutcomeCallable CamClient::DeleteRoleCallable(const DeleteRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRole(request);
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

CamClient::DeleteServiceLinkedRoleOutcome CamClient::DeleteServiceLinkedRole(const DeleteServiceLinkedRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceLinkedRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceLinkedRoleResponse rsp = DeleteServiceLinkedRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceLinkedRoleOutcome(rsp);
        else
            return DeleteServiceLinkedRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceLinkedRoleOutcome(outcome.GetError());
    }
}

void CamClient::DeleteServiceLinkedRoleAsync(const DeleteServiceLinkedRoleRequest& request, const DeleteServiceLinkedRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteServiceLinkedRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DeleteServiceLinkedRoleOutcomeCallable CamClient::DeleteServiceLinkedRoleCallable(const DeleteServiceLinkedRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteServiceLinkedRoleOutcome()>>(
        [this, request]()
        {
            return this->DeleteServiceLinkedRole(request);
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

CamClient::DescribeRoleListOutcome CamClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void CamClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DescribeRoleListOutcomeCallable CamClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoleList(request);
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

CamClient::DetachRolePolicyOutcome CamClient::DetachRolePolicy(const DetachRolePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DetachRolePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachRolePolicyResponse rsp = DetachRolePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachRolePolicyOutcome(rsp);
        else
            return DetachRolePolicyOutcome(o.GetError());
    }
    else
    {
        return DetachRolePolicyOutcome(outcome.GetError());
    }
}

void CamClient::DetachRolePolicyAsync(const DetachRolePolicyRequest& request, const DetachRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetachRolePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::DetachRolePolicyOutcomeCallable CamClient::DetachRolePolicyCallable(const DetachRolePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetachRolePolicyOutcome()>>(
        [this, request]()
        {
            return this->DetachRolePolicy(request);
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

CamClient::GetCustomMFATokenInfoOutcome CamClient::GetCustomMFATokenInfo(const GetCustomMFATokenInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetCustomMFATokenInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCustomMFATokenInfoResponse rsp = GetCustomMFATokenInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCustomMFATokenInfoOutcome(rsp);
        else
            return GetCustomMFATokenInfoOutcome(o.GetError());
    }
    else
    {
        return GetCustomMFATokenInfoOutcome(outcome.GetError());
    }
}

void CamClient::GetCustomMFATokenInfoAsync(const GetCustomMFATokenInfoRequest& request, const GetCustomMFATokenInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCustomMFATokenInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetCustomMFATokenInfoOutcomeCallable CamClient::GetCustomMFATokenInfoCallable(const GetCustomMFATokenInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCustomMFATokenInfoOutcome()>>(
        [this, request]()
        {
            return this->GetCustomMFATokenInfo(request);
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

CamClient::GetPolicyVersionOutcome CamClient::GetPolicyVersion(const GetPolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "GetPolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPolicyVersionResponse rsp = GetPolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPolicyVersionOutcome(rsp);
        else
            return GetPolicyVersionOutcome(o.GetError());
    }
    else
    {
        return GetPolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::GetPolicyVersionAsync(const GetPolicyVersionRequest& request, const GetPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPolicyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetPolicyVersionOutcomeCallable CamClient::GetPolicyVersionCallable(const GetPolicyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPolicyVersionOutcome()>>(
        [this, request]()
        {
            return this->GetPolicyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::GetRoleOutcome CamClient::GetRole(const GetRoleRequest &request)
{
    auto outcome = MakeRequest(request, "GetRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoleResponse rsp = GetRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoleOutcome(rsp);
        else
            return GetRoleOutcome(o.GetError());
    }
    else
    {
        return GetRoleOutcome(outcome.GetError());
    }
}

void CamClient::GetRoleAsync(const GetRoleRequest& request, const GetRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetRoleOutcomeCallable CamClient::GetRoleCallable(const GetRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRoleOutcome()>>(
        [this, request]()
        {
            return this->GetRole(request);
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

CamClient::GetServiceLinkedRoleDeletionStatusOutcome CamClient::GetServiceLinkedRoleDeletionStatus(const GetServiceLinkedRoleDeletionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "GetServiceLinkedRoleDeletionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetServiceLinkedRoleDeletionStatusResponse rsp = GetServiceLinkedRoleDeletionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetServiceLinkedRoleDeletionStatusOutcome(rsp);
        else
            return GetServiceLinkedRoleDeletionStatusOutcome(o.GetError());
    }
    else
    {
        return GetServiceLinkedRoleDeletionStatusOutcome(outcome.GetError());
    }
}

void CamClient::GetServiceLinkedRoleDeletionStatusAsync(const GetServiceLinkedRoleDeletionStatusRequest& request, const GetServiceLinkedRoleDeletionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetServiceLinkedRoleDeletionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::GetServiceLinkedRoleDeletionStatusOutcomeCallable CamClient::GetServiceLinkedRoleDeletionStatusCallable(const GetServiceLinkedRoleDeletionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetServiceLinkedRoleDeletionStatusOutcome()>>(
        [this, request]()
        {
            return this->GetServiceLinkedRoleDeletionStatus(request);
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

CamClient::ListAccessKeysOutcome CamClient::ListAccessKeys(const ListAccessKeysRequest &request)
{
    auto outcome = MakeRequest(request, "ListAccessKeys");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAccessKeysResponse rsp = ListAccessKeysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAccessKeysOutcome(rsp);
        else
            return ListAccessKeysOutcome(o.GetError());
    }
    else
    {
        return ListAccessKeysOutcome(outcome.GetError());
    }
}

void CamClient::ListAccessKeysAsync(const ListAccessKeysRequest& request, const ListAccessKeysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAccessKeys(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListAccessKeysOutcomeCallable CamClient::ListAccessKeysCallable(const ListAccessKeysRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAccessKeysOutcome()>>(
        [this, request]()
        {
            return this->ListAccessKeys(request);
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

CamClient::ListAttachedRolePoliciesOutcome CamClient::ListAttachedRolePolicies(const ListAttachedRolePoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "ListAttachedRolePolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAttachedRolePoliciesResponse rsp = ListAttachedRolePoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAttachedRolePoliciesOutcome(rsp);
        else
            return ListAttachedRolePoliciesOutcome(o.GetError());
    }
    else
    {
        return ListAttachedRolePoliciesOutcome(outcome.GetError());
    }
}

void CamClient::ListAttachedRolePoliciesAsync(const ListAttachedRolePoliciesRequest& request, const ListAttachedRolePoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAttachedRolePolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListAttachedRolePoliciesOutcomeCallable CamClient::ListAttachedRolePoliciesCallable(const ListAttachedRolePoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAttachedRolePoliciesOutcome()>>(
        [this, request]()
        {
            return this->ListAttachedRolePolicies(request);
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

CamClient::ListCollaboratorsOutcome CamClient::ListCollaborators(const ListCollaboratorsRequest &request)
{
    auto outcome = MakeRequest(request, "ListCollaborators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCollaboratorsResponse rsp = ListCollaboratorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCollaboratorsOutcome(rsp);
        else
            return ListCollaboratorsOutcome(o.GetError());
    }
    else
    {
        return ListCollaboratorsOutcome(outcome.GetError());
    }
}

void CamClient::ListCollaboratorsAsync(const ListCollaboratorsRequest& request, const ListCollaboratorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListCollaborators(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListCollaboratorsOutcomeCallable CamClient::ListCollaboratorsCallable(const ListCollaboratorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListCollaboratorsOutcome()>>(
        [this, request]()
        {
            return this->ListCollaborators(request);
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

CamClient::ListPolicyVersionsOutcome CamClient::ListPolicyVersions(const ListPolicyVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "ListPolicyVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListPolicyVersionsResponse rsp = ListPolicyVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListPolicyVersionsOutcome(rsp);
        else
            return ListPolicyVersionsOutcome(o.GetError());
    }
    else
    {
        return ListPolicyVersionsOutcome(outcome.GetError());
    }
}

void CamClient::ListPolicyVersionsAsync(const ListPolicyVersionsRequest& request, const ListPolicyVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListPolicyVersions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::ListPolicyVersionsOutcomeCallable CamClient::ListPolicyVersionsCallable(const ListPolicyVersionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListPolicyVersionsOutcome()>>(
        [this, request]()
        {
            return this->ListPolicyVersions(request);
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

CamClient::SetDefaultPolicyVersionOutcome CamClient::SetDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request)
{
    auto outcome = MakeRequest(request, "SetDefaultPolicyVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDefaultPolicyVersionResponse rsp = SetDefaultPolicyVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDefaultPolicyVersionOutcome(rsp);
        else
            return SetDefaultPolicyVersionOutcome(o.GetError());
    }
    else
    {
        return SetDefaultPolicyVersionOutcome(outcome.GetError());
    }
}

void CamClient::SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetDefaultPolicyVersion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::SetDefaultPolicyVersionOutcomeCallable CamClient::SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetDefaultPolicyVersionOutcome()>>(
        [this, request]()
        {
            return this->SetDefaultPolicyVersion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::SetMfaFlagOutcome CamClient::SetMfaFlag(const SetMfaFlagRequest &request)
{
    auto outcome = MakeRequest(request, "SetMfaFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetMfaFlagResponse rsp = SetMfaFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetMfaFlagOutcome(rsp);
        else
            return SetMfaFlagOutcome(o.GetError());
    }
    else
    {
        return SetMfaFlagOutcome(outcome.GetError());
    }
}

void CamClient::SetMfaFlagAsync(const SetMfaFlagRequest& request, const SetMfaFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetMfaFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::SetMfaFlagOutcomeCallable CamClient::SetMfaFlagCallable(const SetMfaFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetMfaFlagOutcome()>>(
        [this, request]()
        {
            return this->SetMfaFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::UpdateAssumeRolePolicyOutcome CamClient::UpdateAssumeRolePolicy(const UpdateAssumeRolePolicyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAssumeRolePolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAssumeRolePolicyResponse rsp = UpdateAssumeRolePolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAssumeRolePolicyOutcome(rsp);
        else
            return UpdateAssumeRolePolicyOutcome(o.GetError());
    }
    else
    {
        return UpdateAssumeRolePolicyOutcome(outcome.GetError());
    }
}

void CamClient::UpdateAssumeRolePolicyAsync(const UpdateAssumeRolePolicyRequest& request, const UpdateAssumeRolePolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAssumeRolePolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdateAssumeRolePolicyOutcomeCallable CamClient::UpdateAssumeRolePolicyCallable(const UpdateAssumeRolePolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAssumeRolePolicyOutcome()>>(
        [this, request]()
        {
            return this->UpdateAssumeRolePolicy(request);
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

CamClient::UpdateRoleConsoleLoginOutcome CamClient::UpdateRoleConsoleLogin(const UpdateRoleConsoleLoginRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleConsoleLogin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleConsoleLoginResponse rsp = UpdateRoleConsoleLoginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleConsoleLoginOutcome(rsp);
        else
            return UpdateRoleConsoleLoginOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleConsoleLoginOutcome(outcome.GetError());
    }
}

void CamClient::UpdateRoleConsoleLoginAsync(const UpdateRoleConsoleLoginRequest& request, const UpdateRoleConsoleLoginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRoleConsoleLogin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdateRoleConsoleLoginOutcomeCallable CamClient::UpdateRoleConsoleLoginCallable(const UpdateRoleConsoleLoginRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRoleConsoleLoginOutcome()>>(
        [this, request]()
        {
            return this->UpdateRoleConsoleLogin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CamClient::UpdateRoleDescriptionOutcome CamClient::UpdateRoleDescription(const UpdateRoleDescriptionRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRoleDescription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRoleDescriptionResponse rsp = UpdateRoleDescriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRoleDescriptionOutcome(rsp);
        else
            return UpdateRoleDescriptionOutcome(o.GetError());
    }
    else
    {
        return UpdateRoleDescriptionOutcome(outcome.GetError());
    }
}

void CamClient::UpdateRoleDescriptionAsync(const UpdateRoleDescriptionRequest& request, const UpdateRoleDescriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateRoleDescription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CamClient::UpdateRoleDescriptionOutcomeCallable CamClient::UpdateRoleDescriptionCallable(const UpdateRoleDescriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateRoleDescriptionOutcome()>>(
        [this, request]()
        {
            return this->UpdateRoleDescription(request);
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

