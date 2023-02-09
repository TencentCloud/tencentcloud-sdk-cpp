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

