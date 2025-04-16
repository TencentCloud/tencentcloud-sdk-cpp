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

#include <tencentcloud/bh/v20230418/BhClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bh::V20230418;
using namespace TencentCloud::Bh::V20230418::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-18";
    const string ENDPOINT = "bh.tencentcloudapi.com";
}

BhClient::BhClient(const Credential &credential, const string &region) :
    BhClient(credential, region, ClientProfile())
{
}

BhClient::BhClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BhClient::AccessDevicesOutcome BhClient::AccessDevices(const AccessDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "AccessDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AccessDevicesResponse rsp = AccessDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AccessDevicesOutcome(rsp);
        else
            return AccessDevicesOutcome(o.GetError());
    }
    else
    {
        return AccessDevicesOutcome(outcome.GetError());
    }
}

void BhClient::AccessDevicesAsync(const AccessDevicesRequest& request, const AccessDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AccessDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::AccessDevicesOutcomeCallable BhClient::AccessDevicesCallable(const AccessDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AccessDevicesOutcome()>>(
        [this, request]()
        {
            return this->AccessDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::AddDeviceGroupMembersOutcome BhClient::AddDeviceGroupMembers(const AddDeviceGroupMembersRequest &request)
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

void BhClient::AddDeviceGroupMembersAsync(const AddDeviceGroupMembersRequest& request, const AddDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddDeviceGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::AddDeviceGroupMembersOutcomeCallable BhClient::AddDeviceGroupMembersCallable(const AddDeviceGroupMembersRequest &request)
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

BhClient::AddUserGroupMembersOutcome BhClient::AddUserGroupMembers(const AddUserGroupMembersRequest &request)
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

void BhClient::AddUserGroupMembersAsync(const AddUserGroupMembersRequest& request, const AddUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddUserGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::AddUserGroupMembersOutcomeCallable BhClient::AddUserGroupMembersCallable(const AddUserGroupMembersRequest &request)
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

BhClient::BindDeviceAccountPasswordOutcome BhClient::BindDeviceAccountPassword(const BindDeviceAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "BindDeviceAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDeviceAccountPasswordResponse rsp = BindDeviceAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDeviceAccountPasswordOutcome(rsp);
        else
            return BindDeviceAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return BindDeviceAccountPasswordOutcome(outcome.GetError());
    }
}

void BhClient::BindDeviceAccountPasswordAsync(const BindDeviceAccountPasswordRequest& request, const BindDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDeviceAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::BindDeviceAccountPasswordOutcomeCallable BhClient::BindDeviceAccountPasswordCallable(const BindDeviceAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDeviceAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->BindDeviceAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::BindDeviceAccountPrivateKeyOutcome BhClient::BindDeviceAccountPrivateKey(const BindDeviceAccountPrivateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "BindDeviceAccountPrivateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDeviceAccountPrivateKeyResponse rsp = BindDeviceAccountPrivateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDeviceAccountPrivateKeyOutcome(rsp);
        else
            return BindDeviceAccountPrivateKeyOutcome(o.GetError());
    }
    else
    {
        return BindDeviceAccountPrivateKeyOutcome(outcome.GetError());
    }
}

void BhClient::BindDeviceAccountPrivateKeyAsync(const BindDeviceAccountPrivateKeyRequest& request, const BindDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDeviceAccountPrivateKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::BindDeviceAccountPrivateKeyOutcomeCallable BhClient::BindDeviceAccountPrivateKeyCallable(const BindDeviceAccountPrivateKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDeviceAccountPrivateKeyOutcome()>>(
        [this, request]()
        {
            return this->BindDeviceAccountPrivateKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::BindDeviceResourceOutcome BhClient::BindDeviceResource(const BindDeviceResourceRequest &request)
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

void BhClient::BindDeviceResourceAsync(const BindDeviceResourceRequest& request, const BindDeviceResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDeviceResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::BindDeviceResourceOutcomeCallable BhClient::BindDeviceResourceCallable(const BindDeviceResourceRequest &request)
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

BhClient::CreateAccessWhiteListRuleOutcome BhClient::CreateAccessWhiteListRule(const CreateAccessWhiteListRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccessWhiteListRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccessWhiteListRuleResponse rsp = CreateAccessWhiteListRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccessWhiteListRuleOutcome(rsp);
        else
            return CreateAccessWhiteListRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAccessWhiteListRuleOutcome(outcome.GetError());
    }
}

void BhClient::CreateAccessWhiteListRuleAsync(const CreateAccessWhiteListRuleRequest& request, const CreateAccessWhiteListRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccessWhiteListRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateAccessWhiteListRuleOutcomeCallable BhClient::CreateAccessWhiteListRuleCallable(const CreateAccessWhiteListRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccessWhiteListRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateAccessWhiteListRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateAclOutcome BhClient::CreateAcl(const CreateAclRequest &request)
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

void BhClient::CreateAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateAclOutcomeCallable BhClient::CreateAclCallable(const CreateAclRequest &request)
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

BhClient::CreateAssetSyncJobOutcome BhClient::CreateAssetSyncJob(const CreateAssetSyncJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAssetSyncJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAssetSyncJobResponse rsp = CreateAssetSyncJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAssetSyncJobOutcome(rsp);
        else
            return CreateAssetSyncJobOutcome(o.GetError());
    }
    else
    {
        return CreateAssetSyncJobOutcome(outcome.GetError());
    }
}

void BhClient::CreateAssetSyncJobAsync(const CreateAssetSyncJobRequest& request, const CreateAssetSyncJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAssetSyncJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateAssetSyncJobOutcomeCallable BhClient::CreateAssetSyncJobCallable(const CreateAssetSyncJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAssetSyncJobOutcome()>>(
        [this, request]()
        {
            return this->CreateAssetSyncJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateChangePwdTaskOutcome BhClient::CreateChangePwdTask(const CreateChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChangePwdTaskResponse rsp = CreateChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChangePwdTaskOutcome(rsp);
        else
            return CreateChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return CreateChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::CreateChangePwdTaskAsync(const CreateChangePwdTaskRequest& request, const CreateChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateChangePwdTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateChangePwdTaskOutcomeCallable BhClient::CreateChangePwdTaskCallable(const CreateChangePwdTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateChangePwdTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateChangePwdTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateCmdTemplateOutcome BhClient::CreateCmdTemplate(const CreateCmdTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCmdTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCmdTemplateResponse rsp = CreateCmdTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCmdTemplateOutcome(rsp);
        else
            return CreateCmdTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateCmdTemplateOutcome(outcome.GetError());
    }
}

void BhClient::CreateCmdTemplateAsync(const CreateCmdTemplateRequest& request, const CreateCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCmdTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateCmdTemplateOutcomeCallable BhClient::CreateCmdTemplateCallable(const CreateCmdTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCmdTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateCmdTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateDeviceAccountOutcome BhClient::CreateDeviceAccount(const CreateDeviceAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceAccountResponse rsp = CreateDeviceAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceAccountOutcome(rsp);
        else
            return CreateDeviceAccountOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceAccountOutcome(outcome.GetError());
    }
}

void BhClient::CreateDeviceAccountAsync(const CreateDeviceAccountRequest& request, const CreateDeviceAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeviceAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateDeviceAccountOutcomeCallable BhClient::CreateDeviceAccountCallable(const CreateDeviceAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDeviceAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateDeviceAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateDeviceGroupOutcome BhClient::CreateDeviceGroup(const CreateDeviceGroupRequest &request)
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

void BhClient::CreateDeviceGroupAsync(const CreateDeviceGroupRequest& request, const CreateDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateDeviceGroupOutcomeCallable BhClient::CreateDeviceGroupCallable(const CreateDeviceGroupRequest &request)
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

BhClient::CreateOperationTaskOutcome BhClient::CreateOperationTask(const CreateOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOperationTaskResponse rsp = CreateOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOperationTaskOutcome(rsp);
        else
            return CreateOperationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::CreateOperationTaskAsync(const CreateOperationTaskRequest& request, const CreateOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOperationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateOperationTaskOutcomeCallable BhClient::CreateOperationTaskCallable(const CreateOperationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOperationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateOperationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateResourceOutcome BhClient::CreateResource(const CreateResourceRequest &request)
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

void BhClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateResourceOutcomeCallable BhClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::CreateUserOutcome BhClient::CreateUser(const CreateUserRequest &request)
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

void BhClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateUserOutcomeCallable BhClient::CreateUserCallable(const CreateUserRequest &request)
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

BhClient::CreateUserGroupOutcome BhClient::CreateUserGroup(const CreateUserGroupRequest &request)
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

void BhClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::CreateUserGroupOutcomeCallable BhClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
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

BhClient::DeleteAccessWhiteListRulesOutcome BhClient::DeleteAccessWhiteListRules(const DeleteAccessWhiteListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAccessWhiteListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAccessWhiteListRulesResponse rsp = DeleteAccessWhiteListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAccessWhiteListRulesOutcome(rsp);
        else
            return DeleteAccessWhiteListRulesOutcome(o.GetError());
    }
    else
    {
        return DeleteAccessWhiteListRulesOutcome(outcome.GetError());
    }
}

void BhClient::DeleteAccessWhiteListRulesAsync(const DeleteAccessWhiteListRulesRequest& request, const DeleteAccessWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAccessWhiteListRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteAccessWhiteListRulesOutcomeCallable BhClient::DeleteAccessWhiteListRulesCallable(const DeleteAccessWhiteListRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAccessWhiteListRulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteAccessWhiteListRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DeleteAclsOutcome BhClient::DeleteAcls(const DeleteAclsRequest &request)
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

void BhClient::DeleteAclsAsync(const DeleteAclsRequest& request, const DeleteAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteAclsOutcomeCallable BhClient::DeleteAclsCallable(const DeleteAclsRequest &request)
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

BhClient::DeleteChangePwdTaskOutcome BhClient::DeleteChangePwdTask(const DeleteChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteChangePwdTaskResponse rsp = DeleteChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteChangePwdTaskOutcome(rsp);
        else
            return DeleteChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::DeleteChangePwdTaskAsync(const DeleteChangePwdTaskRequest& request, const DeleteChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteChangePwdTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteChangePwdTaskOutcomeCallable BhClient::DeleteChangePwdTaskCallable(const DeleteChangePwdTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteChangePwdTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteChangePwdTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DeleteCmdTemplatesOutcome BhClient::DeleteCmdTemplates(const DeleteCmdTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCmdTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCmdTemplatesResponse rsp = DeleteCmdTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCmdTemplatesOutcome(rsp);
        else
            return DeleteCmdTemplatesOutcome(o.GetError());
    }
    else
    {
        return DeleteCmdTemplatesOutcome(outcome.GetError());
    }
}

void BhClient::DeleteCmdTemplatesAsync(const DeleteCmdTemplatesRequest& request, const DeleteCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCmdTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteCmdTemplatesOutcomeCallable BhClient::DeleteCmdTemplatesCallable(const DeleteCmdTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCmdTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DeleteCmdTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DeleteDeviceAccountsOutcome BhClient::DeleteDeviceAccounts(const DeleteDeviceAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceAccountsResponse rsp = DeleteDeviceAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceAccountsOutcome(rsp);
        else
            return DeleteDeviceAccountsOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceAccountsOutcome(outcome.GetError());
    }
}

void BhClient::DeleteDeviceAccountsAsync(const DeleteDeviceAccountsRequest& request, const DeleteDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteDeviceAccountsOutcomeCallable BhClient::DeleteDeviceAccountsCallable(const DeleteDeviceAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceAccountsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DeleteDeviceGroupMembersOutcome BhClient::DeleteDeviceGroupMembers(const DeleteDeviceGroupMembersRequest &request)
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

void BhClient::DeleteDeviceGroupMembersAsync(const DeleteDeviceGroupMembersRequest& request, const DeleteDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteDeviceGroupMembersOutcomeCallable BhClient::DeleteDeviceGroupMembersCallable(const DeleteDeviceGroupMembersRequest &request)
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

BhClient::DeleteDeviceGroupsOutcome BhClient::DeleteDeviceGroups(const DeleteDeviceGroupsRequest &request)
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

void BhClient::DeleteDeviceGroupsAsync(const DeleteDeviceGroupsRequest& request, const DeleteDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteDeviceGroupsOutcomeCallable BhClient::DeleteDeviceGroupsCallable(const DeleteDeviceGroupsRequest &request)
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

BhClient::DeleteDevicesOutcome BhClient::DeleteDevices(const DeleteDevicesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDevices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDevicesResponse rsp = DeleteDevicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDevicesOutcome(rsp);
        else
            return DeleteDevicesOutcome(o.GetError());
    }
    else
    {
        return DeleteDevicesOutcome(outcome.GetError());
    }
}

void BhClient::DeleteDevicesAsync(const DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteDevicesOutcomeCallable BhClient::DeleteDevicesCallable(const DeleteDevicesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDevicesOutcome()>>(
        [this, request]()
        {
            return this->DeleteDevices(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DeleteOperationTasksOutcome BhClient::DeleteOperationTasks(const DeleteOperationTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteOperationTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteOperationTasksResponse rsp = DeleteOperationTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteOperationTasksOutcome(rsp);
        else
            return DeleteOperationTasksOutcome(o.GetError());
    }
    else
    {
        return DeleteOperationTasksOutcome(outcome.GetError());
    }
}

void BhClient::DeleteOperationTasksAsync(const DeleteOperationTasksRequest& request, const DeleteOperationTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteOperationTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteOperationTasksOutcomeCallable BhClient::DeleteOperationTasksCallable(const DeleteOperationTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteOperationTasksOutcome()>>(
        [this, request]()
        {
            return this->DeleteOperationTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DeleteUserGroupMembersOutcome BhClient::DeleteUserGroupMembers(const DeleteUserGroupMembersRequest &request)
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

void BhClient::DeleteUserGroupMembersAsync(const DeleteUserGroupMembersRequest& request, const DeleteUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteUserGroupMembersOutcomeCallable BhClient::DeleteUserGroupMembersCallable(const DeleteUserGroupMembersRequest &request)
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

BhClient::DeleteUserGroupsOutcome BhClient::DeleteUserGroups(const DeleteUserGroupsRequest &request)
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

void BhClient::DeleteUserGroupsAsync(const DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteUserGroupsOutcomeCallable BhClient::DeleteUserGroupsCallable(const DeleteUserGroupsRequest &request)
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

BhClient::DeleteUsersOutcome BhClient::DeleteUsers(const DeleteUsersRequest &request)
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

void BhClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeleteUsersOutcomeCallable BhClient::DeleteUsersCallable(const DeleteUsersRequest &request)
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

BhClient::DeployResourceOutcome BhClient::DeployResource(const DeployResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeployResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployResourceResponse rsp = DeployResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployResourceOutcome(rsp);
        else
            return DeployResourceOutcome(o.GetError());
    }
    else
    {
        return DeployResourceOutcome(outcome.GetError());
    }
}

void BhClient::DeployResourceAsync(const DeployResourceRequest& request, const DeployResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeployResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DeployResourceOutcomeCallable BhClient::DeployResourceCallable(const DeployResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeployResourceOutcome()>>(
        [this, request]()
        {
            return this->DeployResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeAccessWhiteListRulesOutcome BhClient::DescribeAccessWhiteListRules(const DescribeAccessWhiteListRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessWhiteListRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessWhiteListRulesResponse rsp = DescribeAccessWhiteListRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessWhiteListRulesOutcome(rsp);
        else
            return DescribeAccessWhiteListRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessWhiteListRulesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAccessWhiteListRulesAsync(const DescribeAccessWhiteListRulesRequest& request, const DescribeAccessWhiteListRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessWhiteListRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeAccessWhiteListRulesOutcomeCallable BhClient::DescribeAccessWhiteListRulesCallable(const DescribeAccessWhiteListRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessWhiteListRulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessWhiteListRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeAclsOutcome BhClient::DescribeAcls(const DescribeAclsRequest &request)
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

void BhClient::DescribeAclsAsync(const DescribeAclsRequest& request, const DescribeAclsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAcls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeAclsOutcomeCallable BhClient::DescribeAclsCallable(const DescribeAclsRequest &request)
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

BhClient::DescribeAssetSyncStatusOutcome BhClient::DescribeAssetSyncStatus(const DescribeAssetSyncStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetSyncStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetSyncStatusResponse rsp = DescribeAssetSyncStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetSyncStatusOutcome(rsp);
        else
            return DescribeAssetSyncStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetSyncStatusOutcome(outcome.GetError());
    }
}

void BhClient::DescribeAssetSyncStatusAsync(const DescribeAssetSyncStatusRequest& request, const DescribeAssetSyncStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetSyncStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeAssetSyncStatusOutcomeCallable BhClient::DescribeAssetSyncStatusCallable(const DescribeAssetSyncStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetSyncStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetSyncStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeChangePwdTaskOutcome BhClient::DescribeChangePwdTask(const DescribeChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChangePwdTaskResponse rsp = DescribeChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChangePwdTaskOutcome(rsp);
        else
            return DescribeChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::DescribeChangePwdTaskAsync(const DescribeChangePwdTaskRequest& request, const DescribeChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChangePwdTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeChangePwdTaskOutcomeCallable BhClient::DescribeChangePwdTaskCallable(const DescribeChangePwdTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChangePwdTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeChangePwdTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeChangePwdTaskDetailOutcome BhClient::DescribeChangePwdTaskDetail(const DescribeChangePwdTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChangePwdTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChangePwdTaskDetailResponse rsp = DescribeChangePwdTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChangePwdTaskDetailOutcome(rsp);
        else
            return DescribeChangePwdTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeChangePwdTaskDetailOutcome(outcome.GetError());
    }
}

void BhClient::DescribeChangePwdTaskDetailAsync(const DescribeChangePwdTaskDetailRequest& request, const DescribeChangePwdTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChangePwdTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeChangePwdTaskDetailOutcomeCallable BhClient::DescribeChangePwdTaskDetailCallable(const DescribeChangePwdTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChangePwdTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeChangePwdTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeCmdTemplatesOutcome BhClient::DescribeCmdTemplates(const DescribeCmdTemplatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCmdTemplates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCmdTemplatesResponse rsp = DescribeCmdTemplatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCmdTemplatesOutcome(rsp);
        else
            return DescribeCmdTemplatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCmdTemplatesOutcome(outcome.GetError());
    }
}

void BhClient::DescribeCmdTemplatesAsync(const DescribeCmdTemplatesRequest& request, const DescribeCmdTemplatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCmdTemplates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeCmdTemplatesOutcomeCallable BhClient::DescribeCmdTemplatesCallable(const DescribeCmdTemplatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCmdTemplatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCmdTemplates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeDeviceAccountsOutcome BhClient::DescribeDeviceAccounts(const DescribeDeviceAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceAccountsResponse rsp = DescribeDeviceAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceAccountsOutcome(rsp);
        else
            return DescribeDeviceAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceAccountsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDeviceAccountsAsync(const DescribeDeviceAccountsRequest& request, const DescribeDeviceAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeDeviceAccountsOutcomeCallable BhClient::DescribeDeviceAccountsCallable(const DescribeDeviceAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeDeviceGroupMembersOutcome BhClient::DescribeDeviceGroupMembers(const DescribeDeviceGroupMembersRequest &request)
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

void BhClient::DescribeDeviceGroupMembersAsync(const DescribeDeviceGroupMembersRequest& request, const DescribeDeviceGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeDeviceGroupMembersOutcomeCallable BhClient::DescribeDeviceGroupMembersCallable(const DescribeDeviceGroupMembersRequest &request)
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

BhClient::DescribeDeviceGroupsOutcome BhClient::DescribeDeviceGroups(const DescribeDeviceGroupsRequest &request)
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

void BhClient::DescribeDeviceGroupsAsync(const DescribeDeviceGroupsRequest& request, const DescribeDeviceGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeDeviceGroupsOutcomeCallable BhClient::DescribeDeviceGroupsCallable(const DescribeDeviceGroupsRequest &request)
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

BhClient::DescribeDevicesOutcome BhClient::DescribeDevices(const DescribeDevicesRequest &request)
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

void BhClient::DescribeDevicesAsync(const DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevices(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeDevicesOutcomeCallable BhClient::DescribeDevicesCallable(const DescribeDevicesRequest &request)
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

BhClient::DescribeDomainsOutcome BhClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void BhClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeDomainsOutcomeCallable BhClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeLoginEventOutcome BhClient::DescribeLoginEvent(const DescribeLoginEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoginEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoginEventResponse rsp = DescribeLoginEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoginEventOutcome(rsp);
        else
            return DescribeLoginEventOutcome(o.GetError());
    }
    else
    {
        return DescribeLoginEventOutcome(outcome.GetError());
    }
}

void BhClient::DescribeLoginEventAsync(const DescribeLoginEventRequest& request, const DescribeLoginEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoginEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeLoginEventOutcomeCallable BhClient::DescribeLoginEventCallable(const DescribeLoginEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoginEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoginEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeOperationEventOutcome BhClient::DescribeOperationEvent(const DescribeOperationEventRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperationEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperationEventResponse rsp = DescribeOperationEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperationEventOutcome(rsp);
        else
            return DescribeOperationEventOutcome(o.GetError());
    }
    else
    {
        return DescribeOperationEventOutcome(outcome.GetError());
    }
}

void BhClient::DescribeOperationEventAsync(const DescribeOperationEventRequest& request, const DescribeOperationEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperationEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeOperationEventOutcomeCallable BhClient::DescribeOperationEventCallable(const DescribeOperationEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperationEventOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperationEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeOperationTaskOutcome BhClient::DescribeOperationTask(const DescribeOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOperationTaskResponse rsp = DescribeOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOperationTaskOutcome(rsp);
        else
            return DescribeOperationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::DescribeOperationTaskAsync(const DescribeOperationTaskRequest& request, const DescribeOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOperationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeOperationTaskOutcomeCallable BhClient::DescribeOperationTaskCallable(const DescribeOperationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOperationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeOperationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::DescribeResourcesOutcome BhClient::DescribeResources(const DescribeResourcesRequest &request)
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

void BhClient::DescribeResourcesAsync(const DescribeResourcesRequest& request, const DescribeResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeResourcesOutcomeCallable BhClient::DescribeResourcesCallable(const DescribeResourcesRequest &request)
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

BhClient::DescribeUserGroupMembersOutcome BhClient::DescribeUserGroupMembers(const DescribeUserGroupMembersRequest &request)
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

void BhClient::DescribeUserGroupMembersAsync(const DescribeUserGroupMembersRequest& request, const DescribeUserGroupMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserGroupMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeUserGroupMembersOutcomeCallable BhClient::DescribeUserGroupMembersCallable(const DescribeUserGroupMembersRequest &request)
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

BhClient::DescribeUserGroupsOutcome BhClient::DescribeUserGroups(const DescribeUserGroupsRequest &request)
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

void BhClient::DescribeUserGroupsAsync(const DescribeUserGroupsRequest& request, const DescribeUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeUserGroupsOutcomeCallable BhClient::DescribeUserGroupsCallable(const DescribeUserGroupsRequest &request)
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

BhClient::DescribeUsersOutcome BhClient::DescribeUsers(const DescribeUsersRequest &request)
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

void BhClient::DescribeUsersAsync(const DescribeUsersRequest& request, const DescribeUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::DescribeUsersOutcomeCallable BhClient::DescribeUsersCallable(const DescribeUsersRequest &request)
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

BhClient::ImportExternalDeviceOutcome BhClient::ImportExternalDevice(const ImportExternalDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ImportExternalDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportExternalDeviceResponse rsp = ImportExternalDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportExternalDeviceOutcome(rsp);
        else
            return ImportExternalDeviceOutcome(o.GetError());
    }
    else
    {
        return ImportExternalDeviceOutcome(outcome.GetError());
    }
}

void BhClient::ImportExternalDeviceAsync(const ImportExternalDeviceRequest& request, const ImportExternalDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportExternalDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ImportExternalDeviceOutcomeCallable BhClient::ImportExternalDeviceCallable(const ImportExternalDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportExternalDeviceOutcome()>>(
        [this, request]()
        {
            return this->ImportExternalDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyAclOutcome BhClient::ModifyAcl(const ModifyAclRequest &request)
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

void BhClient::ModifyAclAsync(const ModifyAclRequest& request, const ModifyAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyAclOutcomeCallable BhClient::ModifyAclCallable(const ModifyAclRequest &request)
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

BhClient::ModifyChangePwdTaskOutcome BhClient::ModifyChangePwdTask(const ModifyChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyChangePwdTaskResponse rsp = ModifyChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyChangePwdTaskOutcome(rsp);
        else
            return ModifyChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::ModifyChangePwdTaskAsync(const ModifyChangePwdTaskRequest& request, const ModifyChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyChangePwdTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyChangePwdTaskOutcomeCallable BhClient::ModifyChangePwdTaskCallable(const ModifyChangePwdTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyChangePwdTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyChangePwdTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyCmdTemplateOutcome BhClient::ModifyCmdTemplate(const ModifyCmdTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCmdTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCmdTemplateResponse rsp = ModifyCmdTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCmdTemplateOutcome(rsp);
        else
            return ModifyCmdTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyCmdTemplateOutcome(outcome.GetError());
    }
}

void BhClient::ModifyCmdTemplateAsync(const ModifyCmdTemplateRequest& request, const ModifyCmdTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCmdTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyCmdTemplateOutcomeCallable BhClient::ModifyCmdTemplateCallable(const ModifyCmdTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCmdTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyCmdTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyDeviceOutcome BhClient::ModifyDevice(const ModifyDeviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDevice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceResponse rsp = ModifyDeviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceOutcome(rsp);
        else
            return ModifyDeviceOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceOutcome(outcome.GetError());
    }
}

void BhClient::ModifyDeviceAsync(const ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDevice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyDeviceOutcomeCallable BhClient::ModifyDeviceCallable(const ModifyDeviceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceOutcome()>>(
        [this, request]()
        {
            return this->ModifyDevice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyDeviceGroupOutcome BhClient::ModifyDeviceGroup(const ModifyDeviceGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceGroupResponse rsp = ModifyDeviceGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceGroupOutcome(rsp);
        else
            return ModifyDeviceGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceGroupOutcome(outcome.GetError());
    }
}

void BhClient::ModifyDeviceGroupAsync(const ModifyDeviceGroupRequest& request, const ModifyDeviceGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDeviceGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyDeviceGroupOutcomeCallable BhClient::ModifyDeviceGroupCallable(const ModifyDeviceGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDeviceGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyDeviceGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyOAuthSettingOutcome BhClient::ModifyOAuthSetting(const ModifyOAuthSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOAuthSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOAuthSettingResponse rsp = ModifyOAuthSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOAuthSettingOutcome(rsp);
        else
            return ModifyOAuthSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyOAuthSettingOutcome(outcome.GetError());
    }
}

void BhClient::ModifyOAuthSettingAsync(const ModifyOAuthSettingRequest& request, const ModifyOAuthSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOAuthSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyOAuthSettingOutcomeCallable BhClient::ModifyOAuthSettingCallable(const ModifyOAuthSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOAuthSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyOAuthSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyOperationTaskOutcome BhClient::ModifyOperationTask(const ModifyOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyOperationTaskResponse rsp = ModifyOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyOperationTaskOutcome(rsp);
        else
            return ModifyOperationTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::ModifyOperationTaskAsync(const ModifyOperationTaskRequest& request, const ModifyOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyOperationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyOperationTaskOutcomeCallable BhClient::ModifyOperationTaskCallable(const ModifyOperationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyOperationTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyOperationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyResourceOutcome BhClient::ModifyResource(const ModifyResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyResourceResponse rsp = ModifyResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyResourceOutcome(rsp);
        else
            return ModifyResourceOutcome(o.GetError());
    }
    else
    {
        return ModifyResourceOutcome(outcome.GetError());
    }
}

void BhClient::ModifyResourceAsync(const ModifyResourceRequest& request, const ModifyResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyResourceOutcomeCallable BhClient::ModifyResourceCallable(const ModifyResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyResourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ModifyUserOutcome BhClient::ModifyUser(const ModifyUserRequest &request)
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

void BhClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyUserOutcomeCallable BhClient::ModifyUserCallable(const ModifyUserRequest &request)
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

BhClient::ModifyUserGroupOutcome BhClient::ModifyUserGroup(const ModifyUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserGroupResponse rsp = ModifyUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserGroupOutcome(rsp);
        else
            return ModifyUserGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyUserGroupOutcome(outcome.GetError());
    }
}

void BhClient::ModifyUserGroupAsync(const ModifyUserGroupRequest& request, const ModifyUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ModifyUserGroupOutcomeCallable BhClient::ModifyUserGroupCallable(const ModifyUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ResetDeviceAccountPasswordOutcome BhClient::ResetDeviceAccountPassword(const ResetDeviceAccountPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDeviceAccountPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceAccountPasswordResponse rsp = ResetDeviceAccountPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceAccountPasswordOutcome(rsp);
        else
            return ResetDeviceAccountPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceAccountPasswordOutcome(outcome.GetError());
    }
}

void BhClient::ResetDeviceAccountPasswordAsync(const ResetDeviceAccountPasswordRequest& request, const ResetDeviceAccountPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetDeviceAccountPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ResetDeviceAccountPasswordOutcomeCallable BhClient::ResetDeviceAccountPasswordCallable(const ResetDeviceAccountPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetDeviceAccountPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetDeviceAccountPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ResetDeviceAccountPrivateKeyOutcome BhClient::ResetDeviceAccountPrivateKey(const ResetDeviceAccountPrivateKeyRequest &request)
{
    auto outcome = MakeRequest(request, "ResetDeviceAccountPrivateKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetDeviceAccountPrivateKeyResponse rsp = ResetDeviceAccountPrivateKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetDeviceAccountPrivateKeyOutcome(rsp);
        else
            return ResetDeviceAccountPrivateKeyOutcome(o.GetError());
    }
    else
    {
        return ResetDeviceAccountPrivateKeyOutcome(outcome.GetError());
    }
}

void BhClient::ResetDeviceAccountPrivateKeyAsync(const ResetDeviceAccountPrivateKeyRequest& request, const ResetDeviceAccountPrivateKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetDeviceAccountPrivateKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ResetDeviceAccountPrivateKeyOutcomeCallable BhClient::ResetDeviceAccountPrivateKeyCallable(const ResetDeviceAccountPrivateKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetDeviceAccountPrivateKeyOutcome()>>(
        [this, request]()
        {
            return this->ResetDeviceAccountPrivateKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::ResetUserOutcome BhClient::ResetUser(const ResetUserRequest &request)
{
    auto outcome = MakeRequest(request, "ResetUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetUserResponse rsp = ResetUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetUserOutcome(rsp);
        else
            return ResetUserOutcome(o.GetError());
    }
    else
    {
        return ResetUserOutcome(outcome.GetError());
    }
}

void BhClient::ResetUserAsync(const ResetUserRequest& request, const ResetUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::ResetUserOutcomeCallable BhClient::ResetUserCallable(const ResetUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetUserOutcome()>>(
        [this, request]()
        {
            return this->ResetUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::RunChangePwdTaskOutcome BhClient::RunChangePwdTask(const RunChangePwdTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RunChangePwdTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunChangePwdTaskResponse rsp = RunChangePwdTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunChangePwdTaskOutcome(rsp);
        else
            return RunChangePwdTaskOutcome(o.GetError());
    }
    else
    {
        return RunChangePwdTaskOutcome(outcome.GetError());
    }
}

void BhClient::RunChangePwdTaskAsync(const RunChangePwdTaskRequest& request, const RunChangePwdTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunChangePwdTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::RunChangePwdTaskOutcomeCallable BhClient::RunChangePwdTaskCallable(const RunChangePwdTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunChangePwdTaskOutcome()>>(
        [this, request]()
        {
            return this->RunChangePwdTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::RunOperationTaskOutcome BhClient::RunOperationTask(const RunOperationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RunOperationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RunOperationTaskResponse rsp = RunOperationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RunOperationTaskOutcome(rsp);
        else
            return RunOperationTaskOutcome(o.GetError());
    }
    else
    {
        return RunOperationTaskOutcome(outcome.GetError());
    }
}

void BhClient::RunOperationTaskAsync(const RunOperationTaskRequest& request, const RunOperationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RunOperationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::RunOperationTaskOutcomeCallable BhClient::RunOperationTaskCallable(const RunOperationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RunOperationTaskOutcome()>>(
        [this, request]()
        {
            return this->RunOperationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchAuditLogOutcome BhClient::SearchAuditLog(const SearchAuditLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchAuditLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchAuditLogResponse rsp = SearchAuditLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchAuditLogOutcome(rsp);
        else
            return SearchAuditLogOutcome(o.GetError());
    }
    else
    {
        return SearchAuditLogOutcome(outcome.GetError());
    }
}

void BhClient::SearchAuditLogAsync(const SearchAuditLogRequest& request, const SearchAuditLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchAuditLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchAuditLogOutcomeCallable BhClient::SearchAuditLogCallable(const SearchAuditLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchAuditLogOutcome()>>(
        [this, request]()
        {
            return this->SearchAuditLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchCommandOutcome BhClient::SearchCommand(const SearchCommandRequest &request)
{
    auto outcome = MakeRequest(request, "SearchCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchCommandResponse rsp = SearchCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchCommandOutcome(rsp);
        else
            return SearchCommandOutcome(o.GetError());
    }
    else
    {
        return SearchCommandOutcome(outcome.GetError());
    }
}

void BhClient::SearchCommandAsync(const SearchCommandRequest& request, const SearchCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchCommandOutcomeCallable BhClient::SearchCommandCallable(const SearchCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchCommandOutcome()>>(
        [this, request]()
        {
            return this->SearchCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchCommandBySidOutcome BhClient::SearchCommandBySid(const SearchCommandBySidRequest &request)
{
    auto outcome = MakeRequest(request, "SearchCommandBySid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchCommandBySidResponse rsp = SearchCommandBySidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchCommandBySidOutcome(rsp);
        else
            return SearchCommandBySidOutcome(o.GetError());
    }
    else
    {
        return SearchCommandBySidOutcome(outcome.GetError());
    }
}

void BhClient::SearchCommandBySidAsync(const SearchCommandBySidRequest& request, const SearchCommandBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchCommandBySid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchCommandBySidOutcomeCallable BhClient::SearchCommandBySidCallable(const SearchCommandBySidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchCommandBySidOutcome()>>(
        [this, request]()
        {
            return this->SearchCommandBySid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchFileOutcome BhClient::SearchFile(const SearchFileRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFileResponse rsp = SearchFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFileOutcome(rsp);
        else
            return SearchFileOutcome(o.GetError());
    }
    else
    {
        return SearchFileOutcome(outcome.GetError());
    }
}

void BhClient::SearchFileAsync(const SearchFileRequest& request, const SearchFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchFileOutcomeCallable BhClient::SearchFileCallable(const SearchFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchFileOutcome()>>(
        [this, request]()
        {
            return this->SearchFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchFileBySidOutcome BhClient::SearchFileBySid(const SearchFileBySidRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFileBySid");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFileBySidResponse rsp = SearchFileBySidResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFileBySidOutcome(rsp);
        else
            return SearchFileBySidOutcome(o.GetError());
    }
    else
    {
        return SearchFileBySidOutcome(outcome.GetError());
    }
}

void BhClient::SearchFileBySidAsync(const SearchFileBySidRequest& request, const SearchFileBySidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchFileBySid(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchFileBySidOutcomeCallable BhClient::SearchFileBySidCallable(const SearchFileBySidRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchFileBySidOutcome()>>(
        [this, request]()
        {
            return this->SearchFileBySid(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchSessionOutcome BhClient::SearchSession(const SearchSessionRequest &request)
{
    auto outcome = MakeRequest(request, "SearchSession");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchSessionResponse rsp = SearchSessionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchSessionOutcome(rsp);
        else
            return SearchSessionOutcome(o.GetError());
    }
    else
    {
        return SearchSessionOutcome(outcome.GetError());
    }
}

void BhClient::SearchSessionAsync(const SearchSessionRequest& request, const SearchSessionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchSession(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchSessionOutcomeCallable BhClient::SearchSessionCallable(const SearchSessionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchSessionOutcome()>>(
        [this, request]()
        {
            return this->SearchSession(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchSessionCommandOutcome BhClient::SearchSessionCommand(const SearchSessionCommandRequest &request)
{
    auto outcome = MakeRequest(request, "SearchSessionCommand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchSessionCommandResponse rsp = SearchSessionCommandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchSessionCommandOutcome(rsp);
        else
            return SearchSessionCommandOutcome(o.GetError());
    }
    else
    {
        return SearchSessionCommandOutcome(outcome.GetError());
    }
}

void BhClient::SearchSessionCommandAsync(const SearchSessionCommandRequest& request, const SearchSessionCommandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchSessionCommand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchSessionCommandOutcomeCallable BhClient::SearchSessionCommandCallable(const SearchSessionCommandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchSessionCommandOutcome()>>(
        [this, request]()
        {
            return this->SearchSessionCommand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchSubtaskResultByIdOutcome BhClient::SearchSubtaskResultById(const SearchSubtaskResultByIdRequest &request)
{
    auto outcome = MakeRequest(request, "SearchSubtaskResultById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchSubtaskResultByIdResponse rsp = SearchSubtaskResultByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchSubtaskResultByIdOutcome(rsp);
        else
            return SearchSubtaskResultByIdOutcome(o.GetError());
    }
    else
    {
        return SearchSubtaskResultByIdOutcome(outcome.GetError());
    }
}

void BhClient::SearchSubtaskResultByIdAsync(const SearchSubtaskResultByIdRequest& request, const SearchSubtaskResultByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchSubtaskResultById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchSubtaskResultByIdOutcomeCallable BhClient::SearchSubtaskResultByIdCallable(const SearchSubtaskResultByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchSubtaskResultByIdOutcome()>>(
        [this, request]()
        {
            return this->SearchSubtaskResultById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BhClient::SearchTaskResultOutcome BhClient::SearchTaskResult(const SearchTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "SearchTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchTaskResultResponse rsp = SearchTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchTaskResultOutcome(rsp);
        else
            return SearchTaskResultOutcome(o.GetError());
    }
    else
    {
        return SearchTaskResultOutcome(outcome.GetError());
    }
}

void BhClient::SearchTaskResultAsync(const SearchTaskResultRequest& request, const SearchTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BhClient::SearchTaskResultOutcomeCallable BhClient::SearchTaskResultCallable(const SearchTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchTaskResultOutcome()>>(
        [this, request]()
        {
            return this->SearchTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

