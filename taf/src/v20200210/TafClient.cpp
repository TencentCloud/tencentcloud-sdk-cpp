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

#include <tencentcloud/taf/v20200210/TafClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Taf::V20200210;
using namespace TencentCloud::Taf::V20200210::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-10";
    const string ENDPOINT = "taf.tencentcloudapi.com";
}

TafClient::TafClient(const Credential &credential, const string &region) :
    TafClient(credential, region, ClientProfile())
{
}

TafClient::TafClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TafClient::ManagePortraitRiskOutcome TafClient::ManagePortraitRisk(const ManagePortraitRiskRequest &request)
{
    auto outcome = MakeRequest(request, "ManagePortraitRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManagePortraitRiskResponse rsp = ManagePortraitRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManagePortraitRiskOutcome(rsp);
        else
            return ManagePortraitRiskOutcome(o.GetError());
    }
    else
    {
        return ManagePortraitRiskOutcome(outcome.GetError());
    }
}

void TafClient::ManagePortraitRiskAsync(const ManagePortraitRiskRequest& request, const ManagePortraitRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManagePortraitRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TafClient::ManagePortraitRiskOutcomeCallable TafClient::ManagePortraitRiskCallable(const ManagePortraitRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManagePortraitRiskOutcome()>>(
        [this, request]()
        {
            return this->ManagePortraitRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TafClient::RecognizeCustomizedAudienceOutcome TafClient::RecognizeCustomizedAudience(const RecognizeCustomizedAudienceRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeCustomizedAudience");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeCustomizedAudienceResponse rsp = RecognizeCustomizedAudienceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeCustomizedAudienceOutcome(rsp);
        else
            return RecognizeCustomizedAudienceOutcome(o.GetError());
    }
    else
    {
        return RecognizeCustomizedAudienceOutcome(outcome.GetError());
    }
}

void TafClient::RecognizeCustomizedAudienceAsync(const RecognizeCustomizedAudienceRequest& request, const RecognizeCustomizedAudienceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeCustomizedAudience(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TafClient::RecognizeCustomizedAudienceOutcomeCallable TafClient::RecognizeCustomizedAudienceCallable(const RecognizeCustomizedAudienceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeCustomizedAudienceOutcome()>>(
        [this, request]()
        {
            return this->RecognizeCustomizedAudience(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TafClient::RecognizePreciseTargetAudienceOutcome TafClient::RecognizePreciseTargetAudience(const RecognizePreciseTargetAudienceRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizePreciseTargetAudience");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizePreciseTargetAudienceResponse rsp = RecognizePreciseTargetAudienceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizePreciseTargetAudienceOutcome(rsp);
        else
            return RecognizePreciseTargetAudienceOutcome(o.GetError());
    }
    else
    {
        return RecognizePreciseTargetAudienceOutcome(outcome.GetError());
    }
}

void TafClient::RecognizePreciseTargetAudienceAsync(const RecognizePreciseTargetAudienceRequest& request, const RecognizePreciseTargetAudienceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizePreciseTargetAudience(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TafClient::RecognizePreciseTargetAudienceOutcomeCallable TafClient::RecognizePreciseTargetAudienceCallable(const RecognizePreciseTargetAudienceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizePreciseTargetAudienceOutcome()>>(
        [this, request]()
        {
            return this->RecognizePreciseTargetAudience(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TafClient::RecognizeTargetAudienceOutcome TafClient::RecognizeTargetAudience(const RecognizeTargetAudienceRequest &request)
{
    auto outcome = MakeRequest(request, "RecognizeTargetAudience");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RecognizeTargetAudienceResponse rsp = RecognizeTargetAudienceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RecognizeTargetAudienceOutcome(rsp);
        else
            return RecognizeTargetAudienceOutcome(o.GetError());
    }
    else
    {
        return RecognizeTargetAudienceOutcome(outcome.GetError());
    }
}

void TafClient::RecognizeTargetAudienceAsync(const RecognizeTargetAudienceRequest& request, const RecognizeTargetAudienceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RecognizeTargetAudience(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TafClient::RecognizeTargetAudienceOutcomeCallable TafClient::RecognizeTargetAudienceCallable(const RecognizeTargetAudienceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RecognizeTargetAudienceOutcome()>>(
        [this, request]()
        {
            return this->RecognizeTargetAudience(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

