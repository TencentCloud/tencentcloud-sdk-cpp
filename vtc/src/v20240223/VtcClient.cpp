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

#include <tencentcloud/vtc/v20240223/VtcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vtc::V20240223;
using namespace TencentCloud::Vtc::V20240223::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-02-23";
    const string ENDPOINT = "vtc.tencentcloudapi.com";
}

VtcClient::VtcClient(const Credential &credential, const string &region) :
    VtcClient(credential, region, ClientProfile())
{
}

VtcClient::VtcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VtcClient::ConfirmVideoTranslateJobOutcome VtcClient::ConfirmVideoTranslateJob(const ConfirmVideoTranslateJobRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmVideoTranslateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmVideoTranslateJobResponse rsp = ConfirmVideoTranslateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmVideoTranslateJobOutcome(rsp);
        else
            return ConfirmVideoTranslateJobOutcome(o.GetError());
    }
    else
    {
        return ConfirmVideoTranslateJobOutcome(outcome.GetError());
    }
}

void VtcClient::ConfirmVideoTranslateJobAsync(const ConfirmVideoTranslateJobRequest& request, const ConfirmVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfirmVideoTranslateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VtcClient::ConfirmVideoTranslateJobOutcomeCallable VtcClient::ConfirmVideoTranslateJobCallable(const ConfirmVideoTranslateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfirmVideoTranslateJobOutcome()>>(
        [this, request]()
        {
            return this->ConfirmVideoTranslateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VtcClient::DescribeVideoTranslateJobOutcome VtcClient::DescribeVideoTranslateJob(const DescribeVideoTranslateJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoTranslateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoTranslateJobResponse rsp = DescribeVideoTranslateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoTranslateJobOutcome(rsp);
        else
            return DescribeVideoTranslateJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoTranslateJobOutcome(outcome.GetError());
    }
}

void VtcClient::DescribeVideoTranslateJobAsync(const DescribeVideoTranslateJobRequest& request, const DescribeVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoTranslateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VtcClient::DescribeVideoTranslateJobOutcomeCallable VtcClient::DescribeVideoTranslateJobCallable(const DescribeVideoTranslateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoTranslateJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoTranslateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VtcClient::SubmitVideoTranslateJobOutcome VtcClient::SubmitVideoTranslateJob(const SubmitVideoTranslateJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoTranslateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoTranslateJobResponse rsp = SubmitVideoTranslateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoTranslateJobOutcome(rsp);
        else
            return SubmitVideoTranslateJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoTranslateJobOutcome(outcome.GetError());
    }
}

void VtcClient::SubmitVideoTranslateJobAsync(const SubmitVideoTranslateJobRequest& request, const SubmitVideoTranslateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitVideoTranslateJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VtcClient::SubmitVideoTranslateJobOutcomeCallable VtcClient::SubmitVideoTranslateJobCallable(const SubmitVideoTranslateJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitVideoTranslateJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitVideoTranslateJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

