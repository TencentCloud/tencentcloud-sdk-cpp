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

#include <tencentcloud/cii/v20210408/CiiClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cii::V20210408;
using namespace TencentCloud::Cii::V20210408::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-08";
    const string ENDPOINT = "cii.tencentcloudapi.com";
}

CiiClient::CiiClient(const Credential &credential, const string &region) :
    CiiClient(credential, region, ClientProfile())
{
}

CiiClient::CiiClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CiiClient::AddSubStructureTasksOutcome CiiClient::AddSubStructureTasks(const AddSubStructureTasksRequest &request)
{
    auto outcome = MakeRequest(request, "AddSubStructureTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddSubStructureTasksResponse rsp = AddSubStructureTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddSubStructureTasksOutcome(rsp);
        else
            return AddSubStructureTasksOutcome(o.GetError());
    }
    else
    {
        return AddSubStructureTasksOutcome(outcome.GetError());
    }
}

void CiiClient::AddSubStructureTasksAsync(const AddSubStructureTasksRequest& request, const AddSubStructureTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddSubStructureTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::AddSubStructureTasksOutcomeCallable CiiClient::AddSubStructureTasksCallable(const AddSubStructureTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddSubStructureTasksOutcome()>>(
        [this, request]()
        {
            return this->AddSubStructureTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::CreateAutoClassifyStructureTaskOutcome CiiClient::CreateAutoClassifyStructureTask(const CreateAutoClassifyStructureTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAutoClassifyStructureTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAutoClassifyStructureTaskResponse rsp = CreateAutoClassifyStructureTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAutoClassifyStructureTaskOutcome(rsp);
        else
            return CreateAutoClassifyStructureTaskOutcome(o.GetError());
    }
    else
    {
        return CreateAutoClassifyStructureTaskOutcome(outcome.GetError());
    }
}

void CiiClient::CreateAutoClassifyStructureTaskAsync(const CreateAutoClassifyStructureTaskRequest& request, const CreateAutoClassifyStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAutoClassifyStructureTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::CreateAutoClassifyStructureTaskOutcomeCallable CiiClient::CreateAutoClassifyStructureTaskCallable(const CreateAutoClassifyStructureTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAutoClassifyStructureTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateAutoClassifyStructureTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::CreateStructureTaskOutcome CiiClient::CreateStructureTask(const CreateStructureTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStructureTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStructureTaskResponse rsp = CreateStructureTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStructureTaskOutcome(rsp);
        else
            return CreateStructureTaskOutcome(o.GetError());
    }
    else
    {
        return CreateStructureTaskOutcome(outcome.GetError());
    }
}

void CiiClient::CreateStructureTaskAsync(const CreateStructureTaskRequest& request, const CreateStructureTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStructureTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::CreateStructureTaskOutcomeCallable CiiClient::CreateStructureTaskCallable(const CreateStructureTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStructureTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateStructureTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::CreateUnderwriteTaskByIdOutcome CiiClient::CreateUnderwriteTaskById(const CreateUnderwriteTaskByIdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnderwriteTaskById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnderwriteTaskByIdResponse rsp = CreateUnderwriteTaskByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnderwriteTaskByIdOutcome(rsp);
        else
            return CreateUnderwriteTaskByIdOutcome(o.GetError());
    }
    else
    {
        return CreateUnderwriteTaskByIdOutcome(outcome.GetError());
    }
}

void CiiClient::CreateUnderwriteTaskByIdAsync(const CreateUnderwriteTaskByIdRequest& request, const CreateUnderwriteTaskByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUnderwriteTaskById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::CreateUnderwriteTaskByIdOutcomeCallable CiiClient::CreateUnderwriteTaskByIdCallable(const CreateUnderwriteTaskByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUnderwriteTaskByIdOutcome()>>(
        [this, request]()
        {
            return this->CreateUnderwriteTaskById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeMachineUnderwriteOutcome CiiClient::DescribeMachineUnderwrite(const DescribeMachineUnderwriteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMachineUnderwrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMachineUnderwriteResponse rsp = DescribeMachineUnderwriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMachineUnderwriteOutcome(rsp);
        else
            return DescribeMachineUnderwriteOutcome(o.GetError());
    }
    else
    {
        return DescribeMachineUnderwriteOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeMachineUnderwriteAsync(const DescribeMachineUnderwriteRequest& request, const DescribeMachineUnderwriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMachineUnderwrite(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeMachineUnderwriteOutcomeCallable CiiClient::DescribeMachineUnderwriteCallable(const DescribeMachineUnderwriteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMachineUnderwriteOutcome()>>(
        [this, request]()
        {
            return this->DescribeMachineUnderwrite(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeQualityScoreOutcome CiiClient::DescribeQualityScore(const DescribeQualityScoreRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQualityScore");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQualityScoreResponse rsp = DescribeQualityScoreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQualityScoreOutcome(rsp);
        else
            return DescribeQualityScoreOutcome(o.GetError());
    }
    else
    {
        return DescribeQualityScoreOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeQualityScoreAsync(const DescribeQualityScoreRequest& request, const DescribeQualityScoreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQualityScore(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeQualityScoreOutcomeCallable CiiClient::DescribeQualityScoreCallable(const DescribeQualityScoreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQualityScoreOutcome()>>(
        [this, request]()
        {
            return this->DescribeQualityScore(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeReportClassifyOutcome CiiClient::DescribeReportClassify(const DescribeReportClassifyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportClassify");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportClassifyResponse rsp = DescribeReportClassifyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportClassifyOutcome(rsp);
        else
            return DescribeReportClassifyOutcome(o.GetError());
    }
    else
    {
        return DescribeReportClassifyOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeReportClassifyAsync(const DescribeReportClassifyRequest& request, const DescribeReportClassifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportClassify(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeReportClassifyOutcomeCallable CiiClient::DescribeReportClassifyCallable(const DescribeReportClassifyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportClassifyOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportClassify(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeStructCompareDataOutcome CiiClient::DescribeStructCompareData(const DescribeStructCompareDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructCompareData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructCompareDataResponse rsp = DescribeStructCompareDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructCompareDataOutcome(rsp);
        else
            return DescribeStructCompareDataOutcome(o.GetError());
    }
    else
    {
        return DescribeStructCompareDataOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructCompareDataAsync(const DescribeStructCompareDataRequest& request, const DescribeStructCompareDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStructCompareData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeStructCompareDataOutcomeCallable CiiClient::DescribeStructCompareDataCallable(const DescribeStructCompareDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStructCompareDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeStructCompareData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeStructureDifferenceOutcome CiiClient::DescribeStructureDifference(const DescribeStructureDifferenceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureDifference");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureDifferenceResponse rsp = DescribeStructureDifferenceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureDifferenceOutcome(rsp);
        else
            return DescribeStructureDifferenceOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureDifferenceOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureDifferenceAsync(const DescribeStructureDifferenceRequest& request, const DescribeStructureDifferenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStructureDifference(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeStructureDifferenceOutcomeCallable CiiClient::DescribeStructureDifferenceCallable(const DescribeStructureDifferenceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStructureDifferenceOutcome()>>(
        [this, request]()
        {
            return this->DescribeStructureDifference(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeStructureResultOutcome CiiClient::DescribeStructureResult(const DescribeStructureResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureResultResponse rsp = DescribeStructureResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureResultOutcome(rsp);
        else
            return DescribeStructureResultOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureResultOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureResultAsync(const DescribeStructureResultRequest& request, const DescribeStructureResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStructureResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeStructureResultOutcomeCallable CiiClient::DescribeStructureResultCallable(const DescribeStructureResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStructureResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeStructureResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeStructureTaskResultOutcome CiiClient::DescribeStructureTaskResult(const DescribeStructureTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStructureTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStructureTaskResultResponse rsp = DescribeStructureTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStructureTaskResultOutcome(rsp);
        else
            return DescribeStructureTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeStructureTaskResultOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeStructureTaskResultAsync(const DescribeStructureTaskResultRequest& request, const DescribeStructureTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStructureTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeStructureTaskResultOutcomeCallable CiiClient::DescribeStructureTaskResultCallable(const DescribeStructureTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStructureTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeStructureTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::DescribeUnderwriteTaskOutcome CiiClient::DescribeUnderwriteTask(const DescribeUnderwriteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnderwriteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnderwriteTaskResponse rsp = DescribeUnderwriteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnderwriteTaskOutcome(rsp);
        else
            return DescribeUnderwriteTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeUnderwriteTaskOutcome(outcome.GetError());
    }
}

void CiiClient::DescribeUnderwriteTaskAsync(const DescribeUnderwriteTaskRequest& request, const DescribeUnderwriteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnderwriteTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::DescribeUnderwriteTaskOutcomeCallable CiiClient::DescribeUnderwriteTaskCallable(const DescribeUnderwriteTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnderwriteTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnderwriteTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CiiClient::UploadMedicalFileOutcome CiiClient::UploadMedicalFile(const UploadMedicalFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadMedicalFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadMedicalFileResponse rsp = UploadMedicalFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadMedicalFileOutcome(rsp);
        else
            return UploadMedicalFileOutcome(o.GetError());
    }
    else
    {
        return UploadMedicalFileOutcome(outcome.GetError());
    }
}

void CiiClient::UploadMedicalFileAsync(const UploadMedicalFileRequest& request, const UploadMedicalFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadMedicalFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CiiClient::UploadMedicalFileOutcomeCallable CiiClient::UploadMedicalFileCallable(const UploadMedicalFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadMedicalFileOutcome()>>(
        [this, request]()
        {
            return this->UploadMedicalFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

