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

#include <tencentcloud/ciam/v20220331/CiamClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ciam::V20220331;
using namespace TencentCloud::Ciam::V20220331::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-03-31";
    const string ENDPOINT = "ciam.tencentcloudapi.com";
}

CiamClient::CiamClient(const Credential &credential, const string &region) :
    CiamClient(credential, region, ClientProfile())
{
}

CiamClient::CiamClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CiamClient::CreateApiImportUserJobOutcome CiamClient::CreateApiImportUserJob(const CreateApiImportUserJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiImportUserJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiImportUserJobResponse rsp = CreateApiImportUserJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiImportUserJobOutcome(rsp);
        else
            return CreateApiImportUserJobOutcome(o.GetError());
    }
    else
    {
        return CreateApiImportUserJobOutcome(outcome.GetError());
    }
}

void CiamClient::CreateApiImportUserJobAsync(const CreateApiImportUserJobRequest& request, const CreateApiImportUserJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApiImportUserJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::CreateApiImportUserJobOutcomeCallable CiamClient::CreateApiImportUserJobCallable(const CreateApiImportUserJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApiImportUserJobOutcome()>>(
        [this, request]()
        {
            return this->CreateApiImportUserJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::CreateFileExportUserJobOutcome CiamClient::CreateFileExportUserJob(const CreateFileExportUserJobRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileExportUserJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileExportUserJobResponse rsp = CreateFileExportUserJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileExportUserJobOutcome(rsp);
        else
            return CreateFileExportUserJobOutcome(o.GetError());
    }
    else
    {
        return CreateFileExportUserJobOutcome(outcome.GetError());
    }
}

void CiamClient::CreateFileExportUserJobAsync(const CreateFileExportUserJobRequest& request, const CreateFileExportUserJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFileExportUserJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::CreateFileExportUserJobOutcomeCallable CiamClient::CreateFileExportUserJobCallable(const CreateFileExportUserJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFileExportUserJobOutcome()>>(
        [this, request]()
        {
            return this->CreateFileExportUserJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::CreateUserOutcome CiamClient::CreateUser(const CreateUserRequest &request)
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

void CiamClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::CreateUserOutcomeCallable CiamClient::CreateUserCallable(const CreateUserRequest &request)
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

CiamClient::CreateUserGroupOutcome CiamClient::CreateUserGroup(const CreateUserGroupRequest &request)
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

void CiamClient::CreateUserGroupAsync(const CreateUserGroupRequest& request, const CreateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::CreateUserGroupOutcomeCallable CiamClient::CreateUserGroupCallable(const CreateUserGroupRequest &request)
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

CiamClient::CreateUserStoreOutcome CiamClient::CreateUserStore(const CreateUserStoreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUserStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserStoreResponse rsp = CreateUserStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserStoreOutcome(rsp);
        else
            return CreateUserStoreOutcome(o.GetError());
    }
    else
    {
        return CreateUserStoreOutcome(outcome.GetError());
    }
}

void CiamClient::CreateUserStoreAsync(const CreateUserStoreRequest& request, const CreateUserStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUserStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::CreateUserStoreOutcomeCallable CiamClient::CreateUserStoreCallable(const CreateUserStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserStoreOutcome()>>(
        [this, request]()
        {
            return this->CreateUserStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::DeleteUserGroupsOutcome CiamClient::DeleteUserGroups(const DeleteUserGroupsRequest &request)
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

void CiamClient::DeleteUserGroupsAsync(const DeleteUserGroupsRequest& request, const DeleteUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::DeleteUserGroupsOutcomeCallable CiamClient::DeleteUserGroupsCallable(const DeleteUserGroupsRequest &request)
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

CiamClient::DeleteUserStoreOutcome CiamClient::DeleteUserStore(const DeleteUserStoreRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUserStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserStoreResponse rsp = DeleteUserStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserStoreOutcome(rsp);
        else
            return DeleteUserStoreOutcome(o.GetError());
    }
    else
    {
        return DeleteUserStoreOutcome(outcome.GetError());
    }
}

void CiamClient::DeleteUserStoreAsync(const DeleteUserStoreRequest& request, const DeleteUserStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUserStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::DeleteUserStoreOutcomeCallable CiamClient::DeleteUserStoreCallable(const DeleteUserStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserStoreOutcome()>>(
        [this, request]()
        {
            return this->DeleteUserStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::DeleteUsersOutcome CiamClient::DeleteUsers(const DeleteUsersRequest &request)
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

void CiamClient::DeleteUsersAsync(const DeleteUsersRequest& request, const DeleteUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::DeleteUsersOutcomeCallable CiamClient::DeleteUsersCallable(const DeleteUsersRequest &request)
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

CiamClient::DescribeUserOutcome CiamClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void CiamClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::DescribeUserOutcomeCallable CiamClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::DescribeUserByIdOutcome CiamClient::DescribeUserById(const DescribeUserByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserByIdResponse rsp = DescribeUserByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserByIdOutcome(rsp);
        else
            return DescribeUserByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeUserByIdOutcome(outcome.GetError());
    }
}

void CiamClient::DescribeUserByIdAsync(const DescribeUserByIdRequest& request, const DescribeUserByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::DescribeUserByIdOutcomeCallable CiamClient::DescribeUserByIdCallable(const DescribeUserByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::LinkAccountOutcome CiamClient::LinkAccount(const LinkAccountRequest &request)
{
    auto outcome = MakeRequest(request, "LinkAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LinkAccountResponse rsp = LinkAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LinkAccountOutcome(rsp);
        else
            return LinkAccountOutcome(o.GetError());
    }
    else
    {
        return LinkAccountOutcome(outcome.GetError());
    }
}

void CiamClient::LinkAccountAsync(const LinkAccountRequest& request, const LinkAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LinkAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::LinkAccountOutcomeCallable CiamClient::LinkAccountCallable(const LinkAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LinkAccountOutcome()>>(
        [this, request]()
        {
            return this->LinkAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ListJobsOutcome CiamClient::ListJobs(const ListJobsRequest &request)
{
    auto outcome = MakeRequest(request, "ListJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListJobsResponse rsp = ListJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListJobsOutcome(rsp);
        else
            return ListJobsOutcome(o.GetError());
    }
    else
    {
        return ListJobsOutcome(outcome.GetError());
    }
}

void CiamClient::ListJobsAsync(const ListJobsRequest& request, const ListJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListJobs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ListJobsOutcomeCallable CiamClient::ListJobsCallable(const ListJobsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListJobsOutcome()>>(
        [this, request]()
        {
            return this->ListJobs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ListLogMessageByConditionOutcome CiamClient::ListLogMessageByCondition(const ListLogMessageByConditionRequest &request)
{
    auto outcome = MakeRequest(request, "ListLogMessageByCondition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListLogMessageByConditionResponse rsp = ListLogMessageByConditionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListLogMessageByConditionOutcome(rsp);
        else
            return ListLogMessageByConditionOutcome(o.GetError());
    }
    else
    {
        return ListLogMessageByConditionOutcome(outcome.GetError());
    }
}

void CiamClient::ListLogMessageByConditionAsync(const ListLogMessageByConditionRequest& request, const ListLogMessageByConditionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListLogMessageByCondition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ListLogMessageByConditionOutcomeCallable CiamClient::ListLogMessageByConditionCallable(const ListLogMessageByConditionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListLogMessageByConditionOutcome()>>(
        [this, request]()
        {
            return this->ListLogMessageByCondition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ListUserOutcome CiamClient::ListUser(const ListUserRequest &request)
{
    auto outcome = MakeRequest(request, "ListUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserResponse rsp = ListUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserOutcome(rsp);
        else
            return ListUserOutcome(o.GetError());
    }
    else
    {
        return ListUserOutcome(outcome.GetError());
    }
}

void CiamClient::ListUserAsync(const ListUserRequest& request, const ListUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ListUserOutcomeCallable CiamClient::ListUserCallable(const ListUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserOutcome()>>(
        [this, request]()
        {
            return this->ListUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ListUserByPropertyOutcome CiamClient::ListUserByProperty(const ListUserByPropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserByProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserByPropertyResponse rsp = ListUserByPropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserByPropertyOutcome(rsp);
        else
            return ListUserByPropertyOutcome(o.GetError());
    }
    else
    {
        return ListUserByPropertyOutcome(outcome.GetError());
    }
}

void CiamClient::ListUserByPropertyAsync(const ListUserByPropertyRequest& request, const ListUserByPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUserByProperty(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ListUserByPropertyOutcomeCallable CiamClient::ListUserByPropertyCallable(const ListUserByPropertyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserByPropertyOutcome()>>(
        [this, request]()
        {
            return this->ListUserByProperty(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ListUserGroupsOutcome CiamClient::ListUserGroups(const ListUserGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserGroupsResponse rsp = ListUserGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserGroupsOutcome(rsp);
        else
            return ListUserGroupsOutcome(o.GetError());
    }
    else
    {
        return ListUserGroupsOutcome(outcome.GetError());
    }
}

void CiamClient::ListUserGroupsAsync(const ListUserGroupsRequest& request, const ListUserGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUserGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ListUserGroupsOutcomeCallable CiamClient::ListUserGroupsCallable(const ListUserGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserGroupsOutcome()>>(
        [this, request]()
        {
            return this->ListUserGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ListUserStoreOutcome CiamClient::ListUserStore(const ListUserStoreRequest &request)
{
    auto outcome = MakeRequest(request, "ListUserStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListUserStoreResponse rsp = ListUserStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListUserStoreOutcome(rsp);
        else
            return ListUserStoreOutcome(o.GetError());
    }
    else
    {
        return ListUserStoreOutcome(outcome.GetError());
    }
}

void CiamClient::ListUserStoreAsync(const ListUserStoreRequest& request, const ListUserStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListUserStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ListUserStoreOutcomeCallable CiamClient::ListUserStoreCallable(const ListUserStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListUserStoreOutcome()>>(
        [this, request]()
        {
            return this->ListUserStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::ResetPasswordOutcome CiamClient::ResetPassword(const ResetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetPasswordResponse rsp = ResetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetPasswordOutcome(rsp);
        else
            return ResetPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetPasswordOutcome(outcome.GetError());
    }
}

void CiamClient::ResetPasswordAsync(const ResetPasswordRequest& request, const ResetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::ResetPasswordOutcomeCallable CiamClient::ResetPasswordCallable(const ResetPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetPasswordOutcome()>>(
        [this, request]()
        {
            return this->ResetPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::SetPasswordOutcome CiamClient::SetPassword(const SetPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "SetPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetPasswordResponse rsp = SetPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetPasswordOutcome(rsp);
        else
            return SetPasswordOutcome(o.GetError());
    }
    else
    {
        return SetPasswordOutcome(outcome.GetError());
    }
}

void CiamClient::SetPasswordAsync(const SetPasswordRequest& request, const SetPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::SetPasswordOutcomeCallable CiamClient::SetPasswordCallable(const SetPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetPasswordOutcome()>>(
        [this, request]()
        {
            return this->SetPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::UpdateUserOutcome CiamClient::UpdateUser(const UpdateUserRequest &request)
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

void CiamClient::UpdateUserAsync(const UpdateUserRequest& request, const UpdateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::UpdateUserOutcomeCallable CiamClient::UpdateUserCallable(const UpdateUserRequest &request)
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

CiamClient::UpdateUserGroupOutcome CiamClient::UpdateUserGroup(const UpdateUserGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserGroupResponse rsp = UpdateUserGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserGroupOutcome(rsp);
        else
            return UpdateUserGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateUserGroupOutcome(outcome.GetError());
    }
}

void CiamClient::UpdateUserGroupAsync(const UpdateUserGroupRequest& request, const UpdateUserGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::UpdateUserGroupOutcomeCallable CiamClient::UpdateUserGroupCallable(const UpdateUserGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserGroupOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::UpdateUserStatusOutcome CiamClient::UpdateUserStatus(const UpdateUserStatusRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserStatusResponse rsp = UpdateUserStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserStatusOutcome(rsp);
        else
            return UpdateUserStatusOutcome(o.GetError());
    }
    else
    {
        return UpdateUserStatusOutcome(outcome.GetError());
    }
}

void CiamClient::UpdateUserStatusAsync(const UpdateUserStatusRequest& request, const UpdateUserStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::UpdateUserStatusOutcomeCallable CiamClient::UpdateUserStatusCallable(const UpdateUserStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserStatusOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiamClient::UpdateUserStoreOutcome CiamClient::UpdateUserStore(const UpdateUserStoreRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUserStore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUserStoreResponse rsp = UpdateUserStoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUserStoreOutcome(rsp);
        else
            return UpdateUserStoreOutcome(o.GetError());
    }
    else
    {
        return UpdateUserStoreOutcome(outcome.GetError());
    }
}

void CiamClient::UpdateUserStoreAsync(const UpdateUserStoreRequest& request, const UpdateUserStoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateUserStore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiamClient::UpdateUserStoreOutcomeCallable CiamClient::UpdateUserStoreCallable(const UpdateUserStoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateUserStoreOutcome()>>(
        [this, request]()
        {
            return this->UpdateUserStore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

