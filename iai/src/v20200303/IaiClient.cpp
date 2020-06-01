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

#include <tencentcloud/iai/v20200303/IaiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Iai::V20200303;
using namespace TencentCloud::Iai::V20200303::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-03-03";
    const string ENDPOINT = "iai.tencentcloudapi.com";
}

IaiClient::IaiClient(const Credential &credential, const string &region) :
    IaiClient(credential, region, ClientProfile())
{
}

IaiClient::IaiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IaiClient::AnalyzeFaceOutcome IaiClient::AnalyzeFace(const AnalyzeFaceRequest &request)
{
    auto outcome = MakeRequest(request, "AnalyzeFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AnalyzeFaceResponse rsp = AnalyzeFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AnalyzeFaceOutcome(rsp);
        else
            return AnalyzeFaceOutcome(o.GetError());
    }
    else
    {
        return AnalyzeFaceOutcome(outcome.GetError());
    }
}

void IaiClient::AnalyzeFaceAsync(const AnalyzeFaceRequest& request, const AnalyzeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AnalyzeFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::AnalyzeFaceOutcomeCallable IaiClient::AnalyzeFaceCallable(const AnalyzeFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AnalyzeFaceOutcome()>>(
        [this, request]()
        {
            return this->AnalyzeFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::CheckSimilarPersonOutcome IaiClient::CheckSimilarPerson(const CheckSimilarPersonRequest &request)
{
    auto outcome = MakeRequest(request, "CheckSimilarPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckSimilarPersonResponse rsp = CheckSimilarPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckSimilarPersonOutcome(rsp);
        else
            return CheckSimilarPersonOutcome(o.GetError());
    }
    else
    {
        return CheckSimilarPersonOutcome(outcome.GetError());
    }
}

void IaiClient::CheckSimilarPersonAsync(const CheckSimilarPersonRequest& request, const CheckSimilarPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckSimilarPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::CheckSimilarPersonOutcomeCallable IaiClient::CheckSimilarPersonCallable(const CheckSimilarPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckSimilarPersonOutcome()>>(
        [this, request]()
        {
            return this->CheckSimilarPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::CompareFaceOutcome IaiClient::CompareFace(const CompareFaceRequest &request)
{
    auto outcome = MakeRequest(request, "CompareFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CompareFaceResponse rsp = CompareFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CompareFaceOutcome(rsp);
        else
            return CompareFaceOutcome(o.GetError());
    }
    else
    {
        return CompareFaceOutcome(outcome.GetError());
    }
}

void IaiClient::CompareFaceAsync(const CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CompareFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::CompareFaceOutcomeCallable IaiClient::CompareFaceCallable(const CompareFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CompareFaceOutcome()>>(
        [this, request]()
        {
            return this->CompareFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::CopyPersonOutcome IaiClient::CopyPerson(const CopyPersonRequest &request)
{
    auto outcome = MakeRequest(request, "CopyPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CopyPersonResponse rsp = CopyPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CopyPersonOutcome(rsp);
        else
            return CopyPersonOutcome(o.GetError());
    }
    else
    {
        return CopyPersonOutcome(outcome.GetError());
    }
}

void IaiClient::CopyPersonAsync(const CopyPersonRequest& request, const CopyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CopyPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::CopyPersonOutcomeCallable IaiClient::CopyPersonCallable(const CopyPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CopyPersonOutcome()>>(
        [this, request]()
        {
            return this->CopyPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::CreateFaceOutcome IaiClient::CreateFace(const CreateFaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFaceResponse rsp = CreateFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFaceOutcome(rsp);
        else
            return CreateFaceOutcome(o.GetError());
    }
    else
    {
        return CreateFaceOutcome(outcome.GetError());
    }
}

void IaiClient::CreateFaceAsync(const CreateFaceRequest& request, const CreateFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::CreateFaceOutcomeCallable IaiClient::CreateFaceCallable(const CreateFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFaceOutcome()>>(
        [this, request]()
        {
            return this->CreateFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::CreateGroupOutcome IaiClient::CreateGroup(const CreateGroupRequest &request)
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

void IaiClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::CreateGroupOutcomeCallable IaiClient::CreateGroupCallable(const CreateGroupRequest &request)
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

IaiClient::CreatePersonOutcome IaiClient::CreatePerson(const CreatePersonRequest &request)
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

void IaiClient::CreatePersonAsync(const CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::CreatePersonOutcomeCallable IaiClient::CreatePersonCallable(const CreatePersonRequest &request)
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

IaiClient::DeleteFaceOutcome IaiClient::DeleteFace(const DeleteFaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFaceResponse rsp = DeleteFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFaceOutcome(rsp);
        else
            return DeleteFaceOutcome(o.GetError());
    }
    else
    {
        return DeleteFaceOutcome(outcome.GetError());
    }
}

void IaiClient::DeleteFaceAsync(const DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::DeleteFaceOutcomeCallable IaiClient::DeleteFaceCallable(const DeleteFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteFaceOutcome()>>(
        [this, request]()
        {
            return this->DeleteFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::DeleteGroupOutcome IaiClient::DeleteGroup(const DeleteGroupRequest &request)
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

void IaiClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::DeleteGroupOutcomeCallable IaiClient::DeleteGroupCallable(const DeleteGroupRequest &request)
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

IaiClient::DeletePersonOutcome IaiClient::DeletePerson(const DeletePersonRequest &request)
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

void IaiClient::DeletePersonAsync(const DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::DeletePersonOutcomeCallable IaiClient::DeletePersonCallable(const DeletePersonRequest &request)
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

IaiClient::DeletePersonFromGroupOutcome IaiClient::DeletePersonFromGroup(const DeletePersonFromGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePersonFromGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePersonFromGroupResponse rsp = DeletePersonFromGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePersonFromGroupOutcome(rsp);
        else
            return DeletePersonFromGroupOutcome(o.GetError());
    }
    else
    {
        return DeletePersonFromGroupOutcome(outcome.GetError());
    }
}

void IaiClient::DeletePersonFromGroupAsync(const DeletePersonFromGroupRequest& request, const DeletePersonFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePersonFromGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::DeletePersonFromGroupOutcomeCallable IaiClient::DeletePersonFromGroupCallable(const DeletePersonFromGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePersonFromGroupOutcome()>>(
        [this, request]()
        {
            return this->DeletePersonFromGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::DetectFaceOutcome IaiClient::DetectFace(const DetectFaceRequest &request)
{
    auto outcome = MakeRequest(request, "DetectFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectFaceResponse rsp = DetectFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectFaceOutcome(rsp);
        else
            return DetectFaceOutcome(o.GetError());
    }
    else
    {
        return DetectFaceOutcome(outcome.GetError());
    }
}

void IaiClient::DetectFaceAsync(const DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::DetectFaceOutcomeCallable IaiClient::DetectFaceCallable(const DetectFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectFaceOutcome()>>(
        [this, request]()
        {
            return this->DetectFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::DetectLiveFaceOutcome IaiClient::DetectLiveFace(const DetectLiveFaceRequest &request)
{
    auto outcome = MakeRequest(request, "DetectLiveFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetectLiveFaceResponse rsp = DetectLiveFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetectLiveFaceOutcome(rsp);
        else
            return DetectLiveFaceOutcome(o.GetError());
    }
    else
    {
        return DetectLiveFaceOutcome(outcome.GetError());
    }
}

void IaiClient::DetectLiveFaceAsync(const DetectLiveFaceRequest& request, const DetectLiveFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DetectLiveFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::DetectLiveFaceOutcomeCallable IaiClient::DetectLiveFaceCallable(const DetectLiveFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DetectLiveFaceOutcome()>>(
        [this, request]()
        {
            return this->DetectLiveFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::EstimateCheckSimilarPersonCostTimeOutcome IaiClient::EstimateCheckSimilarPersonCostTime(const EstimateCheckSimilarPersonCostTimeRequest &request)
{
    auto outcome = MakeRequest(request, "EstimateCheckSimilarPersonCostTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EstimateCheckSimilarPersonCostTimeResponse rsp = EstimateCheckSimilarPersonCostTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EstimateCheckSimilarPersonCostTimeOutcome(rsp);
        else
            return EstimateCheckSimilarPersonCostTimeOutcome(o.GetError());
    }
    else
    {
        return EstimateCheckSimilarPersonCostTimeOutcome(outcome.GetError());
    }
}

void IaiClient::EstimateCheckSimilarPersonCostTimeAsync(const EstimateCheckSimilarPersonCostTimeRequest& request, const EstimateCheckSimilarPersonCostTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EstimateCheckSimilarPersonCostTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::EstimateCheckSimilarPersonCostTimeOutcomeCallable IaiClient::EstimateCheckSimilarPersonCostTimeCallable(const EstimateCheckSimilarPersonCostTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EstimateCheckSimilarPersonCostTimeOutcome()>>(
        [this, request]()
        {
            return this->EstimateCheckSimilarPersonCostTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::GetCheckSimilarPersonJobIdListOutcome IaiClient::GetCheckSimilarPersonJobIdList(const GetCheckSimilarPersonJobIdListRequest &request)
{
    auto outcome = MakeRequest(request, "GetCheckSimilarPersonJobIdList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCheckSimilarPersonJobIdListResponse rsp = GetCheckSimilarPersonJobIdListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCheckSimilarPersonJobIdListOutcome(rsp);
        else
            return GetCheckSimilarPersonJobIdListOutcome(o.GetError());
    }
    else
    {
        return GetCheckSimilarPersonJobIdListOutcome(outcome.GetError());
    }
}

void IaiClient::GetCheckSimilarPersonJobIdListAsync(const GetCheckSimilarPersonJobIdListRequest& request, const GetCheckSimilarPersonJobIdListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCheckSimilarPersonJobIdList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetCheckSimilarPersonJobIdListOutcomeCallable IaiClient::GetCheckSimilarPersonJobIdListCallable(const GetCheckSimilarPersonJobIdListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCheckSimilarPersonJobIdListOutcome()>>(
        [this, request]()
        {
            return this->GetCheckSimilarPersonJobIdList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::GetGroupInfoOutcome IaiClient::GetGroupInfo(const GetGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetGroupInfoResponse rsp = GetGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetGroupInfoOutcome(rsp);
        else
            return GetGroupInfoOutcome(o.GetError());
    }
    else
    {
        return GetGroupInfoOutcome(outcome.GetError());
    }
}

void IaiClient::GetGroupInfoAsync(const GetGroupInfoRequest& request, const GetGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetGroupInfoOutcomeCallable IaiClient::GetGroupInfoCallable(const GetGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->GetGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::GetGroupListOutcome IaiClient::GetGroupList(const GetGroupListRequest &request)
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

void IaiClient::GetGroupListAsync(const GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetGroupListOutcomeCallable IaiClient::GetGroupListCallable(const GetGroupListRequest &request)
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

IaiClient::GetPersonBaseInfoOutcome IaiClient::GetPersonBaseInfo(const GetPersonBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonBaseInfoResponse rsp = GetPersonBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonBaseInfoOutcome(rsp);
        else
            return GetPersonBaseInfoOutcome(o.GetError());
    }
    else
    {
        return GetPersonBaseInfoOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonBaseInfoAsync(const GetPersonBaseInfoRequest& request, const GetPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPersonBaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetPersonBaseInfoOutcomeCallable IaiClient::GetPersonBaseInfoCallable(const GetPersonBaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPersonBaseInfoOutcome()>>(
        [this, request]()
        {
            return this->GetPersonBaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::GetPersonGroupInfoOutcome IaiClient::GetPersonGroupInfo(const GetPersonGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonGroupInfoResponse rsp = GetPersonGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonGroupInfoOutcome(rsp);
        else
            return GetPersonGroupInfoOutcome(o.GetError());
    }
    else
    {
        return GetPersonGroupInfoOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonGroupInfoAsync(const GetPersonGroupInfoRequest& request, const GetPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPersonGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetPersonGroupInfoOutcomeCallable IaiClient::GetPersonGroupInfoCallable(const GetPersonGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPersonGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->GetPersonGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::GetPersonListOutcome IaiClient::GetPersonList(const GetPersonListRequest &request)
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

void IaiClient::GetPersonListAsync(const GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPersonList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetPersonListOutcomeCallable IaiClient::GetPersonListCallable(const GetPersonListRequest &request)
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

IaiClient::GetPersonListNumOutcome IaiClient::GetPersonListNum(const GetPersonListNumRequest &request)
{
    auto outcome = MakeRequest(request, "GetPersonListNum");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPersonListNumResponse rsp = GetPersonListNumResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPersonListNumOutcome(rsp);
        else
            return GetPersonListNumOutcome(o.GetError());
    }
    else
    {
        return GetPersonListNumOutcome(outcome.GetError());
    }
}

void IaiClient::GetPersonListNumAsync(const GetPersonListNumRequest& request, const GetPersonListNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPersonListNum(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetPersonListNumOutcomeCallable IaiClient::GetPersonListNumCallable(const GetPersonListNumRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPersonListNumOutcome()>>(
        [this, request]()
        {
            return this->GetPersonListNum(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::GetSimilarPersonResultOutcome IaiClient::GetSimilarPersonResult(const GetSimilarPersonResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetSimilarPersonResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetSimilarPersonResultResponse rsp = GetSimilarPersonResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetSimilarPersonResultOutcome(rsp);
        else
            return GetSimilarPersonResultOutcome(o.GetError());
    }
    else
    {
        return GetSimilarPersonResultOutcome(outcome.GetError());
    }
}

void IaiClient::GetSimilarPersonResultAsync(const GetSimilarPersonResultRequest& request, const GetSimilarPersonResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetSimilarPersonResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::GetSimilarPersonResultOutcomeCallable IaiClient::GetSimilarPersonResultCallable(const GetSimilarPersonResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetSimilarPersonResultOutcome()>>(
        [this, request]()
        {
            return this->GetSimilarPersonResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::ModifyGroupOutcome IaiClient::ModifyGroup(const ModifyGroupRequest &request)
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

void IaiClient::ModifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::ModifyGroupOutcomeCallable IaiClient::ModifyGroupCallable(const ModifyGroupRequest &request)
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

IaiClient::ModifyPersonBaseInfoOutcome IaiClient::ModifyPersonBaseInfo(const ModifyPersonBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonBaseInfoResponse rsp = ModifyPersonBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonBaseInfoOutcome(rsp);
        else
            return ModifyPersonBaseInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonBaseInfoOutcome(outcome.GetError());
    }
}

void IaiClient::ModifyPersonBaseInfoAsync(const ModifyPersonBaseInfoRequest& request, const ModifyPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonBaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::ModifyPersonBaseInfoOutcomeCallable IaiClient::ModifyPersonBaseInfoCallable(const ModifyPersonBaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonBaseInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonBaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::ModifyPersonGroupInfoOutcome IaiClient::ModifyPersonGroupInfo(const ModifyPersonGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPersonGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPersonGroupInfoResponse rsp = ModifyPersonGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPersonGroupInfoOutcome(rsp);
        else
            return ModifyPersonGroupInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyPersonGroupInfoOutcome(outcome.GetError());
    }
}

void IaiClient::ModifyPersonGroupInfoAsync(const ModifyPersonGroupInfoRequest& request, const ModifyPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPersonGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::ModifyPersonGroupInfoOutcomeCallable IaiClient::ModifyPersonGroupInfoCallable(const ModifyPersonGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPersonGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyPersonGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::SearchFacesOutcome IaiClient::SearchFaces(const SearchFacesRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFacesResponse rsp = SearchFacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFacesOutcome(rsp);
        else
            return SearchFacesOutcome(o.GetError());
    }
    else
    {
        return SearchFacesOutcome(outcome.GetError());
    }
}

void IaiClient::SearchFacesAsync(const SearchFacesRequest& request, const SearchFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchFaces(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::SearchFacesOutcomeCallable IaiClient::SearchFacesCallable(const SearchFacesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchFacesOutcome()>>(
        [this, request]()
        {
            return this->SearchFaces(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::SearchFacesReturnsByGroupOutcome IaiClient::SearchFacesReturnsByGroup(const SearchFacesReturnsByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "SearchFacesReturnsByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchFacesReturnsByGroupResponse rsp = SearchFacesReturnsByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchFacesReturnsByGroupOutcome(rsp);
        else
            return SearchFacesReturnsByGroupOutcome(o.GetError());
    }
    else
    {
        return SearchFacesReturnsByGroupOutcome(outcome.GetError());
    }
}

void IaiClient::SearchFacesReturnsByGroupAsync(const SearchFacesReturnsByGroupRequest& request, const SearchFacesReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchFacesReturnsByGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::SearchFacesReturnsByGroupOutcomeCallable IaiClient::SearchFacesReturnsByGroupCallable(const SearchFacesReturnsByGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchFacesReturnsByGroupOutcome()>>(
        [this, request]()
        {
            return this->SearchFacesReturnsByGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::SearchPersonsOutcome IaiClient::SearchPersons(const SearchPersonsRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPersons");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchPersonsResponse rsp = SearchPersonsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchPersonsOutcome(rsp);
        else
            return SearchPersonsOutcome(o.GetError());
    }
    else
    {
        return SearchPersonsOutcome(outcome.GetError());
    }
}

void IaiClient::SearchPersonsAsync(const SearchPersonsRequest& request, const SearchPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchPersons(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::SearchPersonsOutcomeCallable IaiClient::SearchPersonsCallable(const SearchPersonsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchPersonsOutcome()>>(
        [this, request]()
        {
            return this->SearchPersons(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::SearchPersonsReturnsByGroupOutcome IaiClient::SearchPersonsReturnsByGroup(const SearchPersonsReturnsByGroupRequest &request)
{
    auto outcome = MakeRequest(request, "SearchPersonsReturnsByGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchPersonsReturnsByGroupResponse rsp = SearchPersonsReturnsByGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchPersonsReturnsByGroupOutcome(rsp);
        else
            return SearchPersonsReturnsByGroupOutcome(o.GetError());
    }
    else
    {
        return SearchPersonsReturnsByGroupOutcome(outcome.GetError());
    }
}

void IaiClient::SearchPersonsReturnsByGroupAsync(const SearchPersonsReturnsByGroupRequest& request, const SearchPersonsReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchPersonsReturnsByGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::SearchPersonsReturnsByGroupOutcomeCallable IaiClient::SearchPersonsReturnsByGroupCallable(const SearchPersonsReturnsByGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchPersonsReturnsByGroupOutcome()>>(
        [this, request]()
        {
            return this->SearchPersonsReturnsByGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::VerifyFaceOutcome IaiClient::VerifyFace(const VerifyFaceRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyFace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyFaceResponse rsp = VerifyFaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyFaceOutcome(rsp);
        else
            return VerifyFaceOutcome(o.GetError());
    }
    else
    {
        return VerifyFaceOutcome(outcome.GetError());
    }
}

void IaiClient::VerifyFaceAsync(const VerifyFaceRequest& request, const VerifyFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyFace(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::VerifyFaceOutcomeCallable IaiClient::VerifyFaceCallable(const VerifyFaceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyFaceOutcome()>>(
        [this, request]()
        {
            return this->VerifyFace(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IaiClient::VerifyPersonOutcome IaiClient::VerifyPerson(const VerifyPersonRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyPerson");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyPersonResponse rsp = VerifyPersonResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyPersonOutcome(rsp);
        else
            return VerifyPersonOutcome(o.GetError());
    }
    else
    {
        return VerifyPersonOutcome(outcome.GetError());
    }
}

void IaiClient::VerifyPersonAsync(const VerifyPersonRequest& request, const VerifyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyPerson(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IaiClient::VerifyPersonOutcomeCallable IaiClient::VerifyPersonCallable(const VerifyPersonRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyPersonOutcome()>>(
        [this, request]()
        {
            return this->VerifyPerson(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

