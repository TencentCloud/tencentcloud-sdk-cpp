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

#include <tencentcloud/bda/v20200324/BdaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bda::V20200324;
using namespace TencentCloud::Bda::V20200324::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-24";
    const string ENDPOINT = "bda.tencentcloudapi.com";
}

BdaClient::BdaClient(const Credential &credential, const string &region) :
    BdaClient(credential, region, ClientProfile())
{
}

BdaClient::BdaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BdaClient::CreateGroupOutcome BdaClient::CreateGroup(const CreateGroupRequest &request)
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

void BdaClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::CreateGroupOutcomeCallable BdaClient::CreateGroupCallable(const CreateGroupRequest &request)
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

BdaClient::CreatePersonOutcome BdaClient::CreatePerson(const CreatePersonRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePersonResponse rsp = CreatePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePersonOutcome(rsp);
        else
            return CreatePersonOutcome(o.GetError());
    }
    else
    {
        return CreatePersonOutcome(outcome.GetError());
    }
}

void BdaClient::CreatePersonAsync(const CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::CreatePersonOutcomeCallable BdaClient::CreatePersonCallable(const CreatePersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePersonOutcome()>>(
        [this, request]()
        {
            return this->CreatePerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::CreateSegmentationTaskOutcome BdaClient::CreateSegmentationTask(const CreateSegmentationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSegmentationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSegmentationTaskResponse rsp = CreateSegmentationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSegmentationTaskOutcome(rsp);
        else
            return CreateSegmentationTaskOutcome(o.GetError());
    }
    else
    {
        return CreateSegmentationTaskOutcome(outcome.GetError());
    }
}

void BdaClient::CreateSegmentationTaskAsync(const CreateSegmentationTaskRequest& request, const CreateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSegmentationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::CreateSegmentationTaskOutcomeCallable BdaClient::CreateSegmentationTaskCallable(const CreateSegmentationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSegmentationTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateSegmentationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::CreateTraceOutcome BdaClient::CreateTrace(const CreateTraceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceResponse rsp = CreateTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceOutcome(rsp);
        else
            return CreateTraceOutcome(o.GetError());
    }
    else
    {
        return CreateTraceOutcome(outcome.GetError());
    }
}

void BdaClient::CreateTraceAsync(const CreateTraceRequest& request, const CreateTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::CreateTraceOutcomeCallable BdaClient::CreateTraceCallable(const CreateTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTraceOutcome()>>(
        [this, request]()
        {
            return this->CreateTrace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::DeleteGroupOutcome BdaClient::DeleteGroup(const DeleteGroupRequest &request)
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

void BdaClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::DeleteGroupOutcomeCallable BdaClient::DeleteGroupCallable(const DeleteGroupRequest &request)
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

BdaClient::DeletePersonOutcome BdaClient::DeletePerson(const DeletePersonRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonResponse rsp = DeletePersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonOutcome(rsp);
        else
            return DeletePersonOutcome(o.GetError());
    }
    else
    {
        return DeletePersonOutcome(outcome.GetError());
    }
}

void BdaClient::DeletePersonAsync(const DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::DeletePersonOutcomeCallable BdaClient::DeletePersonCallable(const DeletePersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePersonOutcome()>>(
        [this, request]()
        {
            return this->DeletePerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::DescribeSegmentationTaskOutcome BdaClient::DescribeSegmentationTask(const DescribeSegmentationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSegmentationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSegmentationTaskResponse rsp = DescribeSegmentationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSegmentationTaskOutcome(rsp);
        else
            return DescribeSegmentationTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSegmentationTaskOutcome(outcome.GetError());
    }
}

void BdaClient::DescribeSegmentationTaskAsync(const DescribeSegmentationTaskRequest& request, const DescribeSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSegmentationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::DescribeSegmentationTaskOutcomeCallable BdaClient::DescribeSegmentationTaskCallable(const DescribeSegmentationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSegmentationTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeSegmentationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::DetectBodyOutcome BdaClient::DetectBody(const DetectBodyRequest &request)
{
    auto outcome = MakeRequest(request, "DetectBody");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectBodyResponse rsp = DetectBodyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectBodyOutcome(rsp);
        else
            return DetectBodyOutcome(o.GetError());
    }
    else
    {
        return DetectBodyOutcome(outcome.GetError());
    }
}

void BdaClient::DetectBodyAsync(const DetectBodyRequest& request, const DetectBodyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectBody(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::DetectBodyOutcomeCallable BdaClient::DetectBodyCallable(const DetectBodyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectBodyOutcome()>>(
        [this, request]()
        {
            return this->DetectBody(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::DetectBodyJointsOutcome BdaClient::DetectBodyJoints(const DetectBodyJointsRequest &request)
{
    auto outcome = MakeRequest(request, "DetectBodyJoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectBodyJointsResponse rsp = DetectBodyJointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectBodyJointsOutcome(rsp);
        else
            return DetectBodyJointsOutcome(o.GetError());
    }
    else
    {
        return DetectBodyJointsOutcome(outcome.GetError());
    }
}

void BdaClient::DetectBodyJointsAsync(const DetectBodyJointsRequest& request, const DetectBodyJointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectBodyJoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::DetectBodyJointsOutcomeCallable BdaClient::DetectBodyJointsCallable(const DetectBodyJointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectBodyJointsOutcome()>>(
        [this, request]()
        {
            return this->DetectBodyJoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::GetGroupListOutcome BdaClient::GetGroupList(const GetGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupListResponse rsp = GetGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupListOutcome(rsp);
        else
            return GetGroupListOutcome(o.GetError());
    }
    else
    {
        return GetGroupListOutcome(outcome.GetError());
    }
}

void BdaClient::GetGroupListAsync(const GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::GetGroupListOutcomeCallable BdaClient::GetGroupListCallable(const GetGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupListOutcome()>>(
        [this, request]()
        {
            return this->GetGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::GetPersonListOutcome BdaClient::GetPersonList(const GetPersonListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonListResponse rsp = GetPersonListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonListOutcome(rsp);
        else
            return GetPersonListOutcome(o.GetError());
    }
    else
    {
        return GetPersonListOutcome(outcome.GetError());
    }
}

void BdaClient::GetPersonListAsync(const GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPersonList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::GetPersonListOutcomeCallable BdaClient::GetPersonListCallable(const GetPersonListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPersonListOutcome()>>(
        [this, request]()
        {
            return this->GetPersonList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::GetSummaryInfoOutcome BdaClient::GetSummaryInfo(const GetSummaryInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetSummaryInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSummaryInfoResponse rsp = GetSummaryInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSummaryInfoOutcome(rsp);
        else
            return GetSummaryInfoOutcome(o.GetError());
    }
    else
    {
        return GetSummaryInfoOutcome(outcome.GetError());
    }
}

void BdaClient::GetSummaryInfoAsync(const GetSummaryInfoRequest& request, const GetSummaryInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSummaryInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::GetSummaryInfoOutcomeCallable BdaClient::GetSummaryInfoCallable(const GetSummaryInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSummaryInfoOutcome()>>(
        [this, request]()
        {
            return this->GetSummaryInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::ModifyGroupOutcome BdaClient::ModifyGroup(const ModifyGroupRequest &request)
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

void BdaClient::ModifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::ModifyGroupOutcomeCallable BdaClient::ModifyGroupCallable(const ModifyGroupRequest &request)
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

BdaClient::ModifyPersonInfoOutcome BdaClient::ModifyPersonInfo(const ModifyPersonInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonInfoResponse rsp = ModifyPersonInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonInfoOutcome(rsp);
        else
            return ModifyPersonInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonInfoOutcome(outcome.GetError());
    }
}

void BdaClient::ModifyPersonInfoAsync(const ModifyPersonInfoRequest& request, const ModifyPersonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::ModifyPersonInfoOutcomeCallable BdaClient::ModifyPersonInfoCallable(const ModifyPersonInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::SearchTraceOutcome BdaClient::SearchTrace(const SearchTraceRequest &request)
{
    auto outcome = MakeRequest(request, "SearchTrace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchTraceResponse rsp = SearchTraceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchTraceOutcome(rsp);
        else
            return SearchTraceOutcome(o.GetError());
    }
    else
    {
        return SearchTraceOutcome(outcome.GetError());
    }
}

void BdaClient::SearchTraceAsync(const SearchTraceRequest& request, const SearchTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchTrace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::SearchTraceOutcomeCallable BdaClient::SearchTraceCallable(const SearchTraceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchTraceOutcome()>>(
        [this, request]()
        {
            return this->SearchTrace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::SegmentCustomizedPortraitPicOutcome BdaClient::SegmentCustomizedPortraitPic(const SegmentCustomizedPortraitPicRequest &request)
{
    auto outcome = MakeRequest(request, "SegmentCustomizedPortraitPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SegmentCustomizedPortraitPicResponse rsp = SegmentCustomizedPortraitPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SegmentCustomizedPortraitPicOutcome(rsp);
        else
            return SegmentCustomizedPortraitPicOutcome(o.GetError());
    }
    else
    {
        return SegmentCustomizedPortraitPicOutcome(outcome.GetError());
    }
}

void BdaClient::SegmentCustomizedPortraitPicAsync(const SegmentCustomizedPortraitPicRequest& request, const SegmentCustomizedPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SegmentCustomizedPortraitPic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::SegmentCustomizedPortraitPicOutcomeCallable BdaClient::SegmentCustomizedPortraitPicCallable(const SegmentCustomizedPortraitPicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SegmentCustomizedPortraitPicOutcome()>>(
        [this, request]()
        {
            return this->SegmentCustomizedPortraitPic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::SegmentPortraitPicOutcome BdaClient::SegmentPortraitPic(const SegmentPortraitPicRequest &request)
{
    auto outcome = MakeRequest(request, "SegmentPortraitPic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SegmentPortraitPicResponse rsp = SegmentPortraitPicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SegmentPortraitPicOutcome(rsp);
        else
            return SegmentPortraitPicOutcome(o.GetError());
    }
    else
    {
        return SegmentPortraitPicOutcome(outcome.GetError());
    }
}

void BdaClient::SegmentPortraitPicAsync(const SegmentPortraitPicRequest& request, const SegmentPortraitPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SegmentPortraitPic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::SegmentPortraitPicOutcomeCallable BdaClient::SegmentPortraitPicCallable(const SegmentPortraitPicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SegmentPortraitPicOutcome()>>(
        [this, request]()
        {
            return this->SegmentPortraitPic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BdaClient::TerminateSegmentationTaskOutcome BdaClient::TerminateSegmentationTask(const TerminateSegmentationTaskRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateSegmentationTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateSegmentationTaskResponse rsp = TerminateSegmentationTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateSegmentationTaskOutcome(rsp);
        else
            return TerminateSegmentationTaskOutcome(o.GetError());
    }
    else
    {
        return TerminateSegmentationTaskOutcome(outcome.GetError());
    }
}

void BdaClient::TerminateSegmentationTaskAsync(const TerminateSegmentationTaskRequest& request, const TerminateSegmentationTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateSegmentationTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BdaClient::TerminateSegmentationTaskOutcomeCallable BdaClient::TerminateSegmentationTaskCallable(const TerminateSegmentationTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateSegmentationTaskOutcome()>>(
        [this, request]()
        {
            return this->TerminateSegmentationTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

