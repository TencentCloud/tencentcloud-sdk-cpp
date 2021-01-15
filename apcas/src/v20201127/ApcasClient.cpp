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

#include <tencentcloud/apcas/v20201127/ApcasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Apcas::V20201127;
using namespace TencentCloud::Apcas::V20201127::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-27";
    const string ENDPOINT = "apcas.tencentcloudapi.com";
}

ApcasClient::ApcasClient(const Credential &credential, const string &region) :
    ApcasClient(credential, region, ClientProfile())
{
}

ApcasClient::ApcasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApcasClient::GetTaskDetailOutcome ApcasClient::GetTaskDetail(const GetTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskDetailResponse rsp = GetTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskDetailOutcome(rsp);
        else
            return GetTaskDetailOutcome(o.GetError());
    }
    else
    {
        return GetTaskDetailOutcome(outcome.GetError());
    }
}

void ApcasClient::GetTaskDetailAsync(const GetTaskDetailRequest& request, const GetTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::GetTaskDetailOutcomeCallable ApcasClient::GetTaskDetailCallable(const GetTaskDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskDetailOutcome()>>(
        [this, request]()
        {
            return this->GetTaskDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApcasClient::GetTaskListOutcome ApcasClient::GetTaskList(const GetTaskListRequest &request)
{
    auto outcome = MakeRequest(request, "GetTaskList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTaskListResponse rsp = GetTaskListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTaskListOutcome(rsp);
        else
            return GetTaskListOutcome(o.GetError());
    }
    else
    {
        return GetTaskListOutcome(outcome.GetError());
    }
}

void ApcasClient::GetTaskListAsync(const GetTaskListRequest& request, const GetTaskListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetTaskList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::GetTaskListOutcomeCallable ApcasClient::GetTaskListCallable(const GetTaskListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetTaskListOutcome()>>(
        [this, request]()
        {
            return this->GetTaskList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApcasClient::PredictRatingOutcome ApcasClient::PredictRating(const PredictRatingRequest &request)
{
    auto outcome = MakeRequest(request, "PredictRating");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PredictRatingResponse rsp = PredictRatingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PredictRatingOutcome(rsp);
        else
            return PredictRatingOutcome(o.GetError());
    }
    else
    {
        return PredictRatingOutcome(outcome.GetError());
    }
}

void ApcasClient::PredictRatingAsync(const PredictRatingRequest& request, const PredictRatingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PredictRating(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::PredictRatingOutcomeCallable ApcasClient::PredictRatingCallable(const PredictRatingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PredictRatingOutcome()>>(
        [this, request]()
        {
            return this->PredictRating(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApcasClient::QueryCallDetailsOutcome ApcasClient::QueryCallDetails(const QueryCallDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCallDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCallDetailsResponse rsp = QueryCallDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCallDetailsOutcome(rsp);
        else
            return QueryCallDetailsOutcome(o.GetError());
    }
    else
    {
        return QueryCallDetailsOutcome(outcome.GetError());
    }
}

void ApcasClient::QueryCallDetailsAsync(const QueryCallDetailsRequest& request, const QueryCallDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCallDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::QueryCallDetailsOutcomeCallable ApcasClient::QueryCallDetailsCallable(const QueryCallDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCallDetailsOutcome()>>(
        [this, request]()
        {
            return this->QueryCallDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApcasClient::QueryCallStatOutcome ApcasClient::QueryCallStat(const QueryCallStatRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCallStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCallStatResponse rsp = QueryCallStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCallStatOutcome(rsp);
        else
            return QueryCallStatOutcome(o.GetError());
    }
    else
    {
        return QueryCallStatOutcome(outcome.GetError());
    }
}

void ApcasClient::QueryCallStatAsync(const QueryCallStatRequest& request, const QueryCallStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCallStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::QueryCallStatOutcomeCallable ApcasClient::QueryCallStatCallable(const QueryCallStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCallStatOutcome()>>(
        [this, request]()
        {
            return this->QueryCallStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApcasClient::QueryGeneralStatOutcome ApcasClient::QueryGeneralStat(const QueryGeneralStatRequest &request)
{
    auto outcome = MakeRequest(request, "QueryGeneralStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryGeneralStatResponse rsp = QueryGeneralStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryGeneralStatOutcome(rsp);
        else
            return QueryGeneralStatOutcome(o.GetError());
    }
    else
    {
        return QueryGeneralStatOutcome(outcome.GetError());
    }
}

void ApcasClient::QueryGeneralStatAsync(const QueryGeneralStatRequest& request, const QueryGeneralStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryGeneralStat(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::QueryGeneralStatOutcomeCallable ApcasClient::QueryGeneralStatCallable(const QueryGeneralStatRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryGeneralStatOutcome()>>(
        [this, request]()
        {
            return this->QueryGeneralStat(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

ApcasClient::UploadIdOutcome ApcasClient::UploadId(const UploadIdRequest &request)
{
    auto outcome = MakeRequest(request, "UploadId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadIdResponse rsp = UploadIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadIdOutcome(rsp);
        else
            return UploadIdOutcome(o.GetError());
    }
    else
    {
        return UploadIdOutcome(outcome.GetError());
    }
}

void ApcasClient::UploadIdAsync(const UploadIdRequest& request, const UploadIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ApcasClient::UploadIdOutcomeCallable ApcasClient::UploadIdCallable(const UploadIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadIdOutcome()>>(
        [this, request]()
        {
            return this->UploadId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

