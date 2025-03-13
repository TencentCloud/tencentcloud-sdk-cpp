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

#include <tencentcloud/lcic/v20220817/LcicClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Lcic::V20220817;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-08-17";
    const string ENDPOINT = "lcic.tencentcloudapi.com";
}

LcicClient::LcicClient(const Credential &credential, const string &region) :
    LcicClient(credential, region, ClientProfile())
{
}

LcicClient::LcicClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


LcicClient::AddGroupMemberOutcome LcicClient::AddGroupMember(const AddGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "AddGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddGroupMemberResponse rsp = AddGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddGroupMemberOutcome(rsp);
        else
            return AddGroupMemberOutcome(o.GetError());
    }
    else
    {
        return AddGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::AddGroupMemberAsync(const AddGroupMemberRequest& request, const AddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddGroupMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::AddGroupMemberOutcomeCallable LcicClient::AddGroupMemberCallable(const AddGroupMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddGroupMemberOutcome()>>(
        [this, request]()
        {
            return this->AddGroupMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchAddGroupMemberOutcome LcicClient::BatchAddGroupMember(const BatchAddGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "BatchAddGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchAddGroupMemberResponse rsp = BatchAddGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchAddGroupMemberOutcome(rsp);
        else
            return BatchAddGroupMemberOutcome(o.GetError());
    }
    else
    {
        return BatchAddGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::BatchAddGroupMemberAsync(const BatchAddGroupMemberRequest& request, const BatchAddGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchAddGroupMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchAddGroupMemberOutcomeCallable LcicClient::BatchAddGroupMemberCallable(const BatchAddGroupMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchAddGroupMemberOutcome()>>(
        [this, request]()
        {
            return this->BatchAddGroupMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchCreateGroupWithMembersOutcome LcicClient::BatchCreateGroupWithMembers(const BatchCreateGroupWithMembersRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateGroupWithMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateGroupWithMembersResponse rsp = BatchCreateGroupWithMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateGroupWithMembersOutcome(rsp);
        else
            return BatchCreateGroupWithMembersOutcome(o.GetError());
    }
    else
    {
        return BatchCreateGroupWithMembersOutcome(outcome.GetError());
    }
}

void LcicClient::BatchCreateGroupWithMembersAsync(const BatchCreateGroupWithMembersRequest& request, const BatchCreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateGroupWithMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchCreateGroupWithMembersOutcomeCallable LcicClient::BatchCreateGroupWithMembersCallable(const BatchCreateGroupWithMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateGroupWithMembersOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateGroupWithMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchCreateRoomOutcome LcicClient::BatchCreateRoom(const BatchCreateRoomRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateRoomResponse rsp = BatchCreateRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateRoomOutcome(rsp);
        else
            return BatchCreateRoomOutcome(o.GetError());
    }
    else
    {
        return BatchCreateRoomOutcome(outcome.GetError());
    }
}

void LcicClient::BatchCreateRoomAsync(const BatchCreateRoomRequest& request, const BatchCreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchCreateRoomOutcomeCallable LcicClient::BatchCreateRoomCallable(const BatchCreateRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateRoomOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchDeleteGroupMemberOutcome LcicClient::BatchDeleteGroupMember(const BatchDeleteGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteGroupMemberResponse rsp = BatchDeleteGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteGroupMemberOutcome(rsp);
        else
            return BatchDeleteGroupMemberOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::BatchDeleteGroupMemberAsync(const BatchDeleteGroupMemberRequest& request, const BatchDeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteGroupMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchDeleteGroupMemberOutcomeCallable LcicClient::BatchDeleteGroupMemberCallable(const BatchDeleteGroupMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteGroupMemberOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteGroupMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchDeleteRecordOutcome LcicClient::BatchDeleteRecord(const BatchDeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDeleteRecordResponse rsp = BatchDeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDeleteRecordOutcome(rsp);
        else
            return BatchDeleteRecordOutcome(o.GetError());
    }
    else
    {
        return BatchDeleteRecordOutcome(outcome.GetError());
    }
}

void LcicClient::BatchDeleteRecordAsync(const BatchDeleteRecordRequest& request, const BatchDeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDeleteRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchDeleteRecordOutcomeCallable LcicClient::BatchDeleteRecordCallable(const BatchDeleteRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDeleteRecordOutcome()>>(
        [this, request]()
        {
            return this->BatchDeleteRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchDescribeDocumentOutcome LcicClient::BatchDescribeDocument(const BatchDescribeDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "BatchDescribeDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchDescribeDocumentResponse rsp = BatchDescribeDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchDescribeDocumentOutcome(rsp);
        else
            return BatchDescribeDocumentOutcome(o.GetError());
    }
    else
    {
        return BatchDescribeDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::BatchDescribeDocumentAsync(const BatchDescribeDocumentRequest& request, const BatchDescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchDescribeDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchDescribeDocumentOutcomeCallable LcicClient::BatchDescribeDocumentCallable(const BatchDescribeDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchDescribeDocumentOutcome()>>(
        [this, request]()
        {
            return this->BatchDescribeDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BatchRegisterOutcome LcicClient::BatchRegister(const BatchRegisterRequest &request)
{
    auto outcome = MakeRequest(request, "BatchRegister");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchRegisterResponse rsp = BatchRegisterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchRegisterOutcome(rsp);
        else
            return BatchRegisterOutcome(o.GetError());
    }
    else
    {
        return BatchRegisterOutcome(outcome.GetError());
    }
}

void LcicClient::BatchRegisterAsync(const BatchRegisterRequest& request, const BatchRegisterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchRegister(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BatchRegisterOutcomeCallable LcicClient::BatchRegisterCallable(const BatchRegisterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchRegisterOutcome()>>(
        [this, request]()
        {
            return this->BatchRegister(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::BindDocumentToRoomOutcome LcicClient::BindDocumentToRoom(const BindDocumentToRoomRequest &request)
{
    auto outcome = MakeRequest(request, "BindDocumentToRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindDocumentToRoomResponse rsp = BindDocumentToRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindDocumentToRoomOutcome(rsp);
        else
            return BindDocumentToRoomOutcome(o.GetError());
    }
    else
    {
        return BindDocumentToRoomOutcome(outcome.GetError());
    }
}

void LcicClient::BindDocumentToRoomAsync(const BindDocumentToRoomRequest& request, const BindDocumentToRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindDocumentToRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::BindDocumentToRoomOutcomeCallable LcicClient::BindDocumentToRoomCallable(const BindDocumentToRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindDocumentToRoomOutcome()>>(
        [this, request]()
        {
            return this->BindDocumentToRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateDocumentOutcome LcicClient::CreateDocument(const CreateDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDocumentResponse rsp = CreateDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDocumentOutcome(rsp);
        else
            return CreateDocumentOutcome(o.GetError());
    }
    else
    {
        return CreateDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::CreateDocumentAsync(const CreateDocumentRequest& request, const CreateDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateDocumentOutcomeCallable LcicClient::CreateDocumentCallable(const CreateDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDocumentOutcome()>>(
        [this, request]()
        {
            return this->CreateDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateGroupWithMembersOutcome LcicClient::CreateGroupWithMembers(const CreateGroupWithMembersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroupWithMembers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupWithMembersResponse rsp = CreateGroupWithMembersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupWithMembersOutcome(rsp);
        else
            return CreateGroupWithMembersOutcome(o.GetError());
    }
    else
    {
        return CreateGroupWithMembersOutcome(outcome.GetError());
    }
}

void LcicClient::CreateGroupWithMembersAsync(const CreateGroupWithMembersRequest& request, const CreateGroupWithMembersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroupWithMembers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateGroupWithMembersOutcomeCallable LcicClient::CreateGroupWithMembersCallable(const CreateGroupWithMembersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGroupWithMembersOutcome()>>(
        [this, request]()
        {
            return this->CreateGroupWithMembers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateGroupWithSubGroupOutcome LcicClient::CreateGroupWithSubGroup(const CreateGroupWithSubGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroupWithSubGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupWithSubGroupResponse rsp = CreateGroupWithSubGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupWithSubGroupOutcome(rsp);
        else
            return CreateGroupWithSubGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupWithSubGroupOutcome(outcome.GetError());
    }
}

void LcicClient::CreateGroupWithSubGroupAsync(const CreateGroupWithSubGroupRequest& request, const CreateGroupWithSubGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroupWithSubGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateGroupWithSubGroupOutcomeCallable LcicClient::CreateGroupWithSubGroupCallable(const CreateGroupWithSubGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateGroupWithSubGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateGroupWithSubGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateRoomOutcome LcicClient::CreateRoom(const CreateRoomRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoomResponse rsp = CreateRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoomOutcome(rsp);
        else
            return CreateRoomOutcome(o.GetError());
    }
    else
    {
        return CreateRoomOutcome(outcome.GetError());
    }
}

void LcicClient::CreateRoomAsync(const CreateRoomRequest& request, const CreateRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateRoomOutcomeCallable LcicClient::CreateRoomCallable(const CreateRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoomOutcome()>>(
        [this, request]()
        {
            return this->CreateRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::CreateSupervisorOutcome LcicClient::CreateSupervisor(const CreateSupervisorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSupervisor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSupervisorResponse rsp = CreateSupervisorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSupervisorOutcome(rsp);
        else
            return CreateSupervisorOutcome(o.GetError());
    }
    else
    {
        return CreateSupervisorOutcome(outcome.GetError());
    }
}

void LcicClient::CreateSupervisorAsync(const CreateSupervisorRequest& request, const CreateSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSupervisor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::CreateSupervisorOutcomeCallable LcicClient::CreateSupervisorCallable(const CreateSupervisorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSupervisorOutcome()>>(
        [this, request]()
        {
            return this->CreateSupervisor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteAppCustomContentOutcome LcicClient::DeleteAppCustomContent(const DeleteAppCustomContentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAppCustomContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAppCustomContentResponse rsp = DeleteAppCustomContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAppCustomContentOutcome(rsp);
        else
            return DeleteAppCustomContentOutcome(o.GetError());
    }
    else
    {
        return DeleteAppCustomContentOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteAppCustomContentAsync(const DeleteAppCustomContentRequest& request, const DeleteAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAppCustomContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteAppCustomContentOutcomeCallable LcicClient::DeleteAppCustomContentCallable(const DeleteAppCustomContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAppCustomContentOutcome()>>(
        [this, request]()
        {
            return this->DeleteAppCustomContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteDocumentOutcome LcicClient::DeleteDocument(const DeleteDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDocumentResponse rsp = DeleteDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDocumentOutcome(rsp);
        else
            return DeleteDocumentOutcome(o.GetError());
    }
    else
    {
        return DeleteDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteDocumentAsync(const DeleteDocumentRequest& request, const DeleteDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteDocumentOutcomeCallable LcicClient::DeleteDocumentCallable(const DeleteDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDocumentOutcome()>>(
        [this, request]()
        {
            return this->DeleteDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteGroupOutcome LcicClient::DeleteGroup(const DeleteGroupRequest &request)
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

void LcicClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteGroupOutcomeCallable LcicClient::DeleteGroupCallable(const DeleteGroupRequest &request)
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

LcicClient::DeleteGroupMemberOutcome LcicClient::DeleteGroupMember(const DeleteGroupMemberRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroupMember");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupMemberResponse rsp = DeleteGroupMemberResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupMemberOutcome(rsp);
        else
            return DeleteGroupMemberOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupMemberOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteGroupMemberAsync(const DeleteGroupMemberRequest& request, const DeleteGroupMemberAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroupMember(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteGroupMemberOutcomeCallable LcicClient::DeleteGroupMemberCallable(const DeleteGroupMemberRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGroupMemberOutcome()>>(
        [this, request]()
        {
            return this->DeleteGroupMember(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteRecordOutcome LcicClient::DeleteRecord(const DeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordResponse rsp = DeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordOutcome(rsp);
        else
            return DeleteRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteRecordOutcomeCallable LcicClient::DeleteRecordCallable(const DeleteRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteRoomOutcome LcicClient::DeleteRoom(const DeleteRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoomResponse rsp = DeleteRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoomOutcome(rsp);
        else
            return DeleteRoomOutcome(o.GetError());
    }
    else
    {
        return DeleteRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteRoomAsync(const DeleteRoomRequest& request, const DeleteRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteRoomOutcomeCallable LcicClient::DeleteRoomCallable(const DeleteRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoomOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteSupervisorOutcome LcicClient::DeleteSupervisor(const DeleteSupervisorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSupervisor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSupervisorResponse rsp = DeleteSupervisorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSupervisorOutcome(rsp);
        else
            return DeleteSupervisorOutcome(o.GetError());
    }
    else
    {
        return DeleteSupervisorOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteSupervisorAsync(const DeleteSupervisorRequest& request, const DeleteSupervisorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSupervisor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteSupervisorOutcomeCallable LcicClient::DeleteSupervisorCallable(const DeleteSupervisorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSupervisorOutcome()>>(
        [this, request]()
        {
            return this->DeleteSupervisor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DeleteUserOutcome LcicClient::DeleteUser(const DeleteUserRequest &request)
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

void LcicClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteUserOutcomeCallable LcicClient::DeleteUserCallable(const DeleteUserRequest &request)
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

LcicClient::DeleteWhiteBoardSnapshotOutcome LcicClient::DeleteWhiteBoardSnapshot(const DeleteWhiteBoardSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteWhiteBoardSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteWhiteBoardSnapshotResponse rsp = DeleteWhiteBoardSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteWhiteBoardSnapshotOutcome(rsp);
        else
            return DeleteWhiteBoardSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteWhiteBoardSnapshotOutcome(outcome.GetError());
    }
}

void LcicClient::DeleteWhiteBoardSnapshotAsync(const DeleteWhiteBoardSnapshotRequest& request, const DeleteWhiteBoardSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteWhiteBoardSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DeleteWhiteBoardSnapshotOutcomeCallable LcicClient::DeleteWhiteBoardSnapshotCallable(const DeleteWhiteBoardSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteWhiteBoardSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DeleteWhiteBoardSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeAnswerListOutcome LcicClient::DescribeAnswerList(const DescribeAnswerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAnswerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAnswerListResponse rsp = DescribeAnswerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAnswerListOutcome(rsp);
        else
            return DescribeAnswerListOutcome(o.GetError());
    }
    else
    {
        return DescribeAnswerListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeAnswerListAsync(const DescribeAnswerListRequest& request, const DescribeAnswerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAnswerList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeAnswerListOutcomeCallable LcicClient::DescribeAnswerListCallable(const DescribeAnswerListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAnswerListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAnswerList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeAppDetailOutcome LcicClient::DescribeAppDetail(const DescribeAppDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppDetailResponse rsp = DescribeAppDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppDetailOutcome(rsp);
        else
            return DescribeAppDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAppDetailOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeAppDetailAsync(const DescribeAppDetailRequest& request, const DescribeAppDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAppDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeAppDetailOutcomeCallable LcicClient::DescribeAppDetailCallable(const DescribeAppDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAppDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeCurrentMemberListOutcome LcicClient::DescribeCurrentMemberList(const DescribeCurrentMemberListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCurrentMemberList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCurrentMemberListResponse rsp = DescribeCurrentMemberListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCurrentMemberListOutcome(rsp);
        else
            return DescribeCurrentMemberListOutcome(o.GetError());
    }
    else
    {
        return DescribeCurrentMemberListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeCurrentMemberListAsync(const DescribeCurrentMemberListRequest& request, const DescribeCurrentMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCurrentMemberList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeCurrentMemberListOutcomeCallable LcicClient::DescribeCurrentMemberListCallable(const DescribeCurrentMemberListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCurrentMemberListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCurrentMemberList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeDeveloperOutcome LcicClient::DescribeDeveloper(const DescribeDeveloperRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeveloper");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeveloperResponse rsp = DescribeDeveloperResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeveloperOutcome(rsp);
        else
            return DescribeDeveloperOutcome(o.GetError());
    }
    else
    {
        return DescribeDeveloperOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDeveloperAsync(const DescribeDeveloperRequest& request, const DescribeDeveloperAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeveloper(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeDeveloperOutcomeCallable LcicClient::DescribeDeveloperCallable(const DescribeDeveloperRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeveloperOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeveloper(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeDocumentOutcome LcicClient::DescribeDocument(const DescribeDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocumentResponse rsp = DescribeDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocumentOutcome(rsp);
        else
            return DescribeDocumentOutcome(o.GetError());
    }
    else
    {
        return DescribeDocumentOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDocumentAsync(const DescribeDocumentRequest& request, const DescribeDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeDocumentOutcomeCallable LcicClient::DescribeDocumentCallable(const DescribeDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDocumentOutcome()>>(
        [this, request]()
        {
            return this->DescribeDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeDocumentsOutcome LcicClient::DescribeDocuments(const DescribeDocumentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocuments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocumentsResponse rsp = DescribeDocumentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocumentsOutcome(rsp);
        else
            return DescribeDocumentsOutcome(o.GetError());
    }
    else
    {
        return DescribeDocumentsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDocumentsAsync(const DescribeDocumentsRequest& request, const DescribeDocumentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDocuments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeDocumentsOutcomeCallable LcicClient::DescribeDocumentsCallable(const DescribeDocumentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDocumentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDocuments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeDocumentsByRoomOutcome LcicClient::DescribeDocumentsByRoom(const DescribeDocumentsByRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDocumentsByRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDocumentsByRoomResponse rsp = DescribeDocumentsByRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDocumentsByRoomOutcome(rsp);
        else
            return DescribeDocumentsByRoomOutcome(o.GetError());
    }
    else
    {
        return DescribeDocumentsByRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeDocumentsByRoomAsync(const DescribeDocumentsByRoomRequest& request, const DescribeDocumentsByRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDocumentsByRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeDocumentsByRoomOutcomeCallable LcicClient::DescribeDocumentsByRoomCallable(const DescribeDocumentsByRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDocumentsByRoomOutcome()>>(
        [this, request]()
        {
            return this->DescribeDocumentsByRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeGroupOutcome LcicClient::DescribeGroup(const DescribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupResponse rsp = DescribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOutcome(rsp);
        else
            return DescribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeGroupOutcomeCallable LcicClient::DescribeGroupCallable(const DescribeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeGroupListOutcome LcicClient::DescribeGroupList(const DescribeGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupListResponse rsp = DescribeGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupListOutcome(rsp);
        else
            return DescribeGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupListAsync(const DescribeGroupListRequest& request, const DescribeGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeGroupListOutcomeCallable LcicClient::DescribeGroupListCallable(const DescribeGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeGroupMemberListOutcome LcicClient::DescribeGroupMemberList(const DescribeGroupMemberListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupMemberList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupMemberListResponse rsp = DescribeGroupMemberListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupMemberListOutcome(rsp);
        else
            return DescribeGroupMemberListOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupMemberListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeGroupMemberListAsync(const DescribeGroupMemberListRequest& request, const DescribeGroupMemberListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupMemberList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeGroupMemberListOutcomeCallable LcicClient::DescribeGroupMemberListCallable(const DescribeGroupMemberListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupMemberListOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupMemberList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeMarqueeOutcome LcicClient::DescribeMarquee(const DescribeMarqueeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMarquee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMarqueeResponse rsp = DescribeMarqueeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMarqueeOutcome(rsp);
        else
            return DescribeMarqueeOutcome(o.GetError());
    }
    else
    {
        return DescribeMarqueeOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeMarqueeAsync(const DescribeMarqueeRequest& request, const DescribeMarqueeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMarquee(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeMarqueeOutcomeCallable LcicClient::DescribeMarqueeCallable(const DescribeMarqueeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMarqueeOutcome()>>(
        [this, request]()
        {
            return this->DescribeMarquee(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeQuestionListOutcome LcicClient::DescribeQuestionList(const DescribeQuestionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuestionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuestionListResponse rsp = DescribeQuestionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuestionListOutcome(rsp);
        else
            return DescribeQuestionListOutcome(o.GetError());
    }
    else
    {
        return DescribeQuestionListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeQuestionListAsync(const DescribeQuestionListRequest& request, const DescribeQuestionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuestionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeQuestionListOutcomeCallable LcicClient::DescribeQuestionListCallable(const DescribeQuestionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuestionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuestionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRecordOutcome LcicClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRecordOutcomeCallable LcicClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRecordStreamOutcome LcicClient::DescribeRecordStream(const DescribeRecordStreamRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordStream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordStreamResponse rsp = DescribeRecordStreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordStreamOutcome(rsp);
        else
            return DescribeRecordStreamOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordStreamOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRecordStreamAsync(const DescribeRecordStreamRequest& request, const DescribeRecordStreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordStream(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRecordStreamOutcomeCallable LcicClient::DescribeRecordStreamCallable(const DescribeRecordStreamRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordStreamOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordStream(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRecordTaskOutcome LcicClient::DescribeRecordTask(const DescribeRecordTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTaskResponse rsp = DescribeRecordTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTaskOutcome(rsp);
        else
            return DescribeRecordTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTaskOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRecordTaskAsync(const DescribeRecordTaskRequest& request, const DescribeRecordTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRecordTaskOutcomeCallable LcicClient::DescribeRecordTaskCallable(const DescribeRecordTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRoomOutcome LcicClient::DescribeRoom(const DescribeRoomRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomResponse rsp = DescribeRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomOutcome(rsp);
        else
            return DescribeRoomOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomAsync(const DescribeRoomRequest& request, const DescribeRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRoomOutcomeCallable LcicClient::DescribeRoomCallable(const DescribeRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRoomForbiddenUserOutcome LcicClient::DescribeRoomForbiddenUser(const DescribeRoomForbiddenUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomForbiddenUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomForbiddenUserResponse rsp = DescribeRoomForbiddenUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomForbiddenUserOutcome(rsp);
        else
            return DescribeRoomForbiddenUserOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomForbiddenUserOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomForbiddenUserAsync(const DescribeRoomForbiddenUserRequest& request, const DescribeRoomForbiddenUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomForbiddenUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRoomForbiddenUserOutcomeCallable LcicClient::DescribeRoomForbiddenUserCallable(const DescribeRoomForbiddenUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomForbiddenUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomForbiddenUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeRoomStatisticsOutcome LcicClient::DescribeRoomStatistics(const DescribeRoomStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoomStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoomStatisticsResponse rsp = DescribeRoomStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoomStatisticsOutcome(rsp);
        else
            return DescribeRoomStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeRoomStatisticsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeRoomStatisticsAsync(const DescribeRoomStatisticsRequest& request, const DescribeRoomStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoomStatistics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeRoomStatisticsOutcomeCallable LcicClient::DescribeRoomStatisticsCallable(const DescribeRoomStatisticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoomStatisticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoomStatistics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeScoreListOutcome LcicClient::DescribeScoreList(const DescribeScoreListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScoreList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScoreListResponse rsp = DescribeScoreListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScoreListOutcome(rsp);
        else
            return DescribeScoreListOutcome(o.GetError());
    }
    else
    {
        return DescribeScoreListOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeScoreListAsync(const DescribeScoreListRequest& request, const DescribeScoreListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScoreList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeScoreListOutcomeCallable LcicClient::DescribeScoreListCallable(const DescribeScoreListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScoreListOutcome()>>(
        [this, request]()
        {
            return this->DescribeScoreList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeSdkAppIdUsersOutcome LcicClient::DescribeSdkAppIdUsers(const DescribeSdkAppIdUsersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSdkAppIdUsers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSdkAppIdUsersResponse rsp = DescribeSdkAppIdUsersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSdkAppIdUsersOutcome(rsp);
        else
            return DescribeSdkAppIdUsersOutcome(o.GetError());
    }
    else
    {
        return DescribeSdkAppIdUsersOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeSdkAppIdUsersAsync(const DescribeSdkAppIdUsersRequest& request, const DescribeSdkAppIdUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSdkAppIdUsers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeSdkAppIdUsersOutcomeCallable LcicClient::DescribeSdkAppIdUsersCallable(const DescribeSdkAppIdUsersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSdkAppIdUsersOutcome()>>(
        [this, request]()
        {
            return this->DescribeSdkAppIdUsers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeSupervisorsOutcome LcicClient::DescribeSupervisors(const DescribeSupervisorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSupervisors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSupervisorsResponse rsp = DescribeSupervisorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSupervisorsOutcome(rsp);
        else
            return DescribeSupervisorsOutcome(o.GetError());
    }
    else
    {
        return DescribeSupervisorsOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeSupervisorsAsync(const DescribeSupervisorsRequest& request, const DescribeSupervisorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSupervisors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeSupervisorsOutcomeCallable LcicClient::DescribeSupervisorsCallable(const DescribeSupervisorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSupervisorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSupervisors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::DescribeUserOutcome LcicClient::DescribeUser(const DescribeUserRequest &request)
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

void LcicClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeUserOutcomeCallable LcicClient::DescribeUserCallable(const DescribeUserRequest &request)
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

LcicClient::DescribeWhiteBoardSnapshotOutcome LcicClient::DescribeWhiteBoardSnapshot(const DescribeWhiteBoardSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWhiteBoardSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWhiteBoardSnapshotResponse rsp = DescribeWhiteBoardSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWhiteBoardSnapshotOutcome(rsp);
        else
            return DescribeWhiteBoardSnapshotOutcome(o.GetError());
    }
    else
    {
        return DescribeWhiteBoardSnapshotOutcome(outcome.GetError());
    }
}

void LcicClient::DescribeWhiteBoardSnapshotAsync(const DescribeWhiteBoardSnapshotRequest& request, const DescribeWhiteBoardSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWhiteBoardSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::DescribeWhiteBoardSnapshotOutcomeCallable LcicClient::DescribeWhiteBoardSnapshotCallable(const DescribeWhiteBoardSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWhiteBoardSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DescribeWhiteBoardSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::EndRoomOutcome LcicClient::EndRoom(const EndRoomRequest &request)
{
    auto outcome = MakeRequest(request, "EndRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EndRoomResponse rsp = EndRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EndRoomOutcome(rsp);
        else
            return EndRoomOutcome(o.GetError());
    }
    else
    {
        return EndRoomOutcome(outcome.GetError());
    }
}

void LcicClient::EndRoomAsync(const EndRoomRequest& request, const EndRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EndRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::EndRoomOutcomeCallable LcicClient::EndRoomCallable(const EndRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EndRoomOutcome()>>(
        [this, request]()
        {
            return this->EndRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::ForbidSendMsgOutcome LcicClient::ForbidSendMsg(const ForbidSendMsgRequest &request)
{
    auto outcome = MakeRequest(request, "ForbidSendMsg");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ForbidSendMsgResponse rsp = ForbidSendMsgResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ForbidSendMsgOutcome(rsp);
        else
            return ForbidSendMsgOutcome(o.GetError());
    }
    else
    {
        return ForbidSendMsgOutcome(outcome.GetError());
    }
}

void LcicClient::ForbidSendMsgAsync(const ForbidSendMsgRequest& request, const ForbidSendMsgAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ForbidSendMsg(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::ForbidSendMsgOutcomeCallable LcicClient::ForbidSendMsgCallable(const ForbidSendMsgRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ForbidSendMsgOutcome()>>(
        [this, request]()
        {
            return this->ForbidSendMsg(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::GetRoomEventOutcome LcicClient::GetRoomEvent(const GetRoomEventRequest &request)
{
    auto outcome = MakeRequest(request, "GetRoomEvent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoomEventResponse rsp = GetRoomEventResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoomEventOutcome(rsp);
        else
            return GetRoomEventOutcome(o.GetError());
    }
    else
    {
        return GetRoomEventOutcome(outcome.GetError());
    }
}

void LcicClient::GetRoomEventAsync(const GetRoomEventRequest& request, const GetRoomEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRoomEvent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::GetRoomEventOutcomeCallable LcicClient::GetRoomEventCallable(const GetRoomEventRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRoomEventOutcome()>>(
        [this, request]()
        {
            return this->GetRoomEvent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::GetRoomMessageOutcome LcicClient::GetRoomMessage(const GetRoomMessageRequest &request)
{
    auto outcome = MakeRequest(request, "GetRoomMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoomMessageResponse rsp = GetRoomMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoomMessageOutcome(rsp);
        else
            return GetRoomMessageOutcome(o.GetError());
    }
    else
    {
        return GetRoomMessageOutcome(outcome.GetError());
    }
}

void LcicClient::GetRoomMessageAsync(const GetRoomMessageRequest& request, const GetRoomMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRoomMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::GetRoomMessageOutcomeCallable LcicClient::GetRoomMessageCallable(const GetRoomMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRoomMessageOutcome()>>(
        [this, request]()
        {
            return this->GetRoomMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::GetRoomsOutcome LcicClient::GetRooms(const GetRoomsRequest &request)
{
    auto outcome = MakeRequest(request, "GetRooms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetRoomsResponse rsp = GetRoomsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetRoomsOutcome(rsp);
        else
            return GetRoomsOutcome(o.GetError());
    }
    else
    {
        return GetRoomsOutcome(outcome.GetError());
    }
}

void LcicClient::GetRoomsAsync(const GetRoomsRequest& request, const GetRoomsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetRooms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::GetRoomsOutcomeCallable LcicClient::GetRoomsCallable(const GetRoomsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetRoomsOutcome()>>(
        [this, request]()
        {
            return this->GetRooms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::GetWatermarkOutcome LcicClient::GetWatermark(const GetWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "GetWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetWatermarkResponse rsp = GetWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetWatermarkOutcome(rsp);
        else
            return GetWatermarkOutcome(o.GetError());
    }
    else
    {
        return GetWatermarkOutcome(outcome.GetError());
    }
}

void LcicClient::GetWatermarkAsync(const GetWatermarkRequest& request, const GetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::GetWatermarkOutcomeCallable LcicClient::GetWatermarkCallable(const GetWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetWatermarkOutcome()>>(
        [this, request]()
        {
            return this->GetWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::KickUserFromRoomOutcome LcicClient::KickUserFromRoom(const KickUserFromRoomRequest &request)
{
    auto outcome = MakeRequest(request, "KickUserFromRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KickUserFromRoomResponse rsp = KickUserFromRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KickUserFromRoomOutcome(rsp);
        else
            return KickUserFromRoomOutcome(o.GetError());
    }
    else
    {
        return KickUserFromRoomOutcome(outcome.GetError());
    }
}

void LcicClient::KickUserFromRoomAsync(const KickUserFromRoomRequest& request, const KickUserFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->KickUserFromRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::KickUserFromRoomOutcomeCallable LcicClient::KickUserFromRoomCallable(const KickUserFromRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<KickUserFromRoomOutcome()>>(
        [this, request]()
        {
            return this->KickUserFromRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::LoginOriginIdOutcome LcicClient::LoginOriginId(const LoginOriginIdRequest &request)
{
    auto outcome = MakeRequest(request, "LoginOriginId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginOriginIdResponse rsp = LoginOriginIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginOriginIdOutcome(rsp);
        else
            return LoginOriginIdOutcome(o.GetError());
    }
    else
    {
        return LoginOriginIdOutcome(outcome.GetError());
    }
}

void LcicClient::LoginOriginIdAsync(const LoginOriginIdRequest& request, const LoginOriginIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LoginOriginId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::LoginOriginIdOutcomeCallable LcicClient::LoginOriginIdCallable(const LoginOriginIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LoginOriginIdOutcome()>>(
        [this, request]()
        {
            return this->LoginOriginId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::LoginUserOutcome LcicClient::LoginUser(const LoginUserRequest &request)
{
    auto outcome = MakeRequest(request, "LoginUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LoginUserResponse rsp = LoginUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LoginUserOutcome(rsp);
        else
            return LoginUserOutcome(o.GetError());
    }
    else
    {
        return LoginUserOutcome(outcome.GetError());
    }
}

void LcicClient::LoginUserAsync(const LoginUserRequest& request, const LoginUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LoginUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::LoginUserOutcomeCallable LcicClient::LoginUserCallable(const LoginUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LoginUserOutcome()>>(
        [this, request]()
        {
            return this->LoginUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::ModifyAppOutcome LcicClient::ModifyApp(const ModifyAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAppResponse rsp = ModifyAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAppOutcome(rsp);
        else
            return ModifyAppOutcome(o.GetError());
    }
    else
    {
        return ModifyAppOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyAppAsync(const ModifyAppRequest& request, const ModifyAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::ModifyAppOutcomeCallable LcicClient::ModifyAppCallable(const ModifyAppRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAppOutcome()>>(
        [this, request]()
        {
            return this->ModifyApp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::ModifyGroupOutcome LcicClient::ModifyGroup(const ModifyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupResponse rsp = ModifyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupOutcome(rsp);
        else
            return ModifyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::ModifyGroupOutcomeCallable LcicClient::ModifyGroupCallable(const ModifyGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::ModifyRoomOutcome LcicClient::ModifyRoom(const ModifyRoomRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoomResponse rsp = ModifyRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoomOutcome(rsp);
        else
            return ModifyRoomOutcome(o.GetError());
    }
    else
    {
        return ModifyRoomOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyRoomAsync(const ModifyRoomRequest& request, const ModifyRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::ModifyRoomOutcomeCallable LcicClient::ModifyRoomCallable(const ModifyRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoomOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::ModifyUserProfileOutcome LcicClient::ModifyUserProfile(const ModifyUserProfileRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUserProfile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserProfileResponse rsp = ModifyUserProfileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserProfileOutcome(rsp);
        else
            return ModifyUserProfileOutcome(o.GetError());
    }
    else
    {
        return ModifyUserProfileOutcome(outcome.GetError());
    }
}

void LcicClient::ModifyUserProfileAsync(const ModifyUserProfileRequest& request, const ModifyUserProfileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUserProfile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::ModifyUserProfileOutcomeCallable LcicClient::ModifyUserProfileCallable(const ModifyUserProfileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserProfileOutcome()>>(
        [this, request]()
        {
            return this->ModifyUserProfile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::RegisterUserOutcome LcicClient::RegisterUser(const RegisterUserRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterUserResponse rsp = RegisterUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterUserOutcome(rsp);
        else
            return RegisterUserOutcome(o.GetError());
    }
    else
    {
        return RegisterUserOutcome(outcome.GetError());
    }
}

void LcicClient::RegisterUserAsync(const RegisterUserRequest& request, const RegisterUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::RegisterUserOutcomeCallable LcicClient::RegisterUserCallable(const RegisterUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterUserOutcome()>>(
        [this, request]()
        {
            return this->RegisterUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::SendRoomNormalMessageOutcome LcicClient::SendRoomNormalMessage(const SendRoomNormalMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendRoomNormalMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendRoomNormalMessageResponse rsp = SendRoomNormalMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendRoomNormalMessageOutcome(rsp);
        else
            return SendRoomNormalMessageOutcome(o.GetError());
    }
    else
    {
        return SendRoomNormalMessageOutcome(outcome.GetError());
    }
}

void LcicClient::SendRoomNormalMessageAsync(const SendRoomNormalMessageRequest& request, const SendRoomNormalMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendRoomNormalMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::SendRoomNormalMessageOutcomeCallable LcicClient::SendRoomNormalMessageCallable(const SendRoomNormalMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendRoomNormalMessageOutcome()>>(
        [this, request]()
        {
            return this->SendRoomNormalMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::SendRoomNotificationMessageOutcome LcicClient::SendRoomNotificationMessage(const SendRoomNotificationMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendRoomNotificationMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendRoomNotificationMessageResponse rsp = SendRoomNotificationMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendRoomNotificationMessageOutcome(rsp);
        else
            return SendRoomNotificationMessageOutcome(o.GetError());
    }
    else
    {
        return SendRoomNotificationMessageOutcome(outcome.GetError());
    }
}

void LcicClient::SendRoomNotificationMessageAsync(const SendRoomNotificationMessageRequest& request, const SendRoomNotificationMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendRoomNotificationMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::SendRoomNotificationMessageOutcomeCallable LcicClient::SendRoomNotificationMessageCallable(const SendRoomNotificationMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendRoomNotificationMessageOutcome()>>(
        [this, request]()
        {
            return this->SendRoomNotificationMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::SetAppCustomContentOutcome LcicClient::SetAppCustomContent(const SetAppCustomContentRequest &request)
{
    auto outcome = MakeRequest(request, "SetAppCustomContent");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAppCustomContentResponse rsp = SetAppCustomContentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAppCustomContentOutcome(rsp);
        else
            return SetAppCustomContentOutcome(o.GetError());
    }
    else
    {
        return SetAppCustomContentOutcome(outcome.GetError());
    }
}

void LcicClient::SetAppCustomContentAsync(const SetAppCustomContentRequest& request, const SetAppCustomContentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAppCustomContent(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::SetAppCustomContentOutcomeCallable LcicClient::SetAppCustomContentCallable(const SetAppCustomContentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAppCustomContentOutcome()>>(
        [this, request]()
        {
            return this->SetAppCustomContent(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::SetMarqueeOutcome LcicClient::SetMarquee(const SetMarqueeRequest &request)
{
    auto outcome = MakeRequest(request, "SetMarquee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetMarqueeResponse rsp = SetMarqueeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetMarqueeOutcome(rsp);
        else
            return SetMarqueeOutcome(o.GetError());
    }
    else
    {
        return SetMarqueeOutcome(outcome.GetError());
    }
}

void LcicClient::SetMarqueeAsync(const SetMarqueeRequest& request, const SetMarqueeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetMarquee(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::SetMarqueeOutcomeCallable LcicClient::SetMarqueeCallable(const SetMarqueeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetMarqueeOutcome()>>(
        [this, request]()
        {
            return this->SetMarquee(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::SetWatermarkOutcome LcicClient::SetWatermark(const SetWatermarkRequest &request)
{
    auto outcome = MakeRequest(request, "SetWatermark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetWatermarkResponse rsp = SetWatermarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetWatermarkOutcome(rsp);
        else
            return SetWatermarkOutcome(o.GetError());
    }
    else
    {
        return SetWatermarkOutcome(outcome.GetError());
    }
}

void LcicClient::SetWatermarkAsync(const SetWatermarkRequest& request, const SetWatermarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetWatermark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::SetWatermarkOutcomeCallable LcicClient::SetWatermarkCallable(const SetWatermarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetWatermarkOutcome()>>(
        [this, request]()
        {
            return this->SetWatermark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::StartRecordOutcome LcicClient::StartRecord(const StartRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StartRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRecordResponse rsp = StartRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRecordOutcome(rsp);
        else
            return StartRecordOutcome(o.GetError());
    }
    else
    {
        return StartRecordOutcome(outcome.GetError());
    }
}

void LcicClient::StartRecordAsync(const StartRecordRequest& request, const StartRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::StartRecordOutcomeCallable LcicClient::StartRecordCallable(const StartRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartRecordOutcome()>>(
        [this, request]()
        {
            return this->StartRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::StartRoomOutcome LcicClient::StartRoom(const StartRoomRequest &request)
{
    auto outcome = MakeRequest(request, "StartRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartRoomResponse rsp = StartRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartRoomOutcome(rsp);
        else
            return StartRoomOutcome(o.GetError());
    }
    else
    {
        return StartRoomOutcome(outcome.GetError());
    }
}

void LcicClient::StartRoomAsync(const StartRoomRequest& request, const StartRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::StartRoomOutcomeCallable LcicClient::StartRoomCallable(const StartRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartRoomOutcome()>>(
        [this, request]()
        {
            return this->StartRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::StopRecordOutcome LcicClient::StopRecord(const StopRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopRecordResponse rsp = StopRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopRecordOutcome(rsp);
        else
            return StopRecordOutcome(o.GetError());
    }
    else
    {
        return StopRecordOutcome(outcome.GetError());
    }
}

void LcicClient::StopRecordAsync(const StopRecordRequest& request, const StopRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::StopRecordOutcomeCallable LcicClient::StopRecordCallable(const StopRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopRecordOutcome()>>(
        [this, request]()
        {
            return this->StopRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::UnbindDocumentFromRoomOutcome LcicClient::UnbindDocumentFromRoom(const UnbindDocumentFromRoomRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindDocumentFromRoom");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindDocumentFromRoomResponse rsp = UnbindDocumentFromRoomResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindDocumentFromRoomOutcome(rsp);
        else
            return UnbindDocumentFromRoomOutcome(o.GetError());
    }
    else
    {
        return UnbindDocumentFromRoomOutcome(outcome.GetError());
    }
}

void LcicClient::UnbindDocumentFromRoomAsync(const UnbindDocumentFromRoomRequest& request, const UnbindDocumentFromRoomAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindDocumentFromRoom(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::UnbindDocumentFromRoomOutcomeCallable LcicClient::UnbindDocumentFromRoomCallable(const UnbindDocumentFromRoomRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindDocumentFromRoomOutcome()>>(
        [this, request]()
        {
            return this->UnbindDocumentFromRoom(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

LcicClient::UnblockKickedUserOutcome LcicClient::UnblockKickedUser(const UnblockKickedUserRequest &request)
{
    auto outcome = MakeRequest(request, "UnblockKickedUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnblockKickedUserResponse rsp = UnblockKickedUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnblockKickedUserOutcome(rsp);
        else
            return UnblockKickedUserOutcome(o.GetError());
    }
    else
    {
        return UnblockKickedUserOutcome(outcome.GetError());
    }
}

void LcicClient::UnblockKickedUserAsync(const UnblockKickedUserRequest& request, const UnblockKickedUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnblockKickedUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

LcicClient::UnblockKickedUserOutcomeCallable LcicClient::UnblockKickedUserCallable(const UnblockKickedUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnblockKickedUserOutcome()>>(
        [this, request]()
        {
            return this->UnblockKickedUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

