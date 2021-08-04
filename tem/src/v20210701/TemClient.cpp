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

#include <tencentcloud/tem/v20210701/TemClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tem::V20210701;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-01";
    const string ENDPOINT = "tem.tencentcloudapi.com";
}

TemClient::TemClient(const Credential &credential, const string &region) :
    TemClient(credential, region, ClientProfile())
{
}

TemClient::TemClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TemClient::DescribeDeployApplicationDetailOutcome TemClient::DescribeDeployApplicationDetail(const DescribeDeployApplicationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployApplicationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployApplicationDetailResponse rsp = DescribeDeployApplicationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployApplicationDetailOutcome(rsp);
        else
            return DescribeDeployApplicationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployApplicationDetailOutcome(outcome.GetError());
    }
}

void TemClient::DescribeDeployApplicationDetailAsync(const DescribeDeployApplicationDetailRequest& request, const DescribeDeployApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeployApplicationDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::DescribeDeployApplicationDetailOutcomeCallable TemClient::DescribeDeployApplicationDetailCallable(const DescribeDeployApplicationDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeployApplicationDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeployApplicationDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::ResumeDeployApplicationOutcome TemClient::ResumeDeployApplication(const ResumeDeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeDeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeDeployApplicationResponse rsp = ResumeDeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeDeployApplicationOutcome(rsp);
        else
            return ResumeDeployApplicationOutcome(o.GetError());
    }
    else
    {
        return ResumeDeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::ResumeDeployApplicationAsync(const ResumeDeployApplicationRequest& request, const ResumeDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResumeDeployApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::ResumeDeployApplicationOutcomeCallable TemClient::ResumeDeployApplicationCallable(const ResumeDeployApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResumeDeployApplicationOutcome()>>(
        [this, request]()
        {
            return this->ResumeDeployApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TemClient::RevertDeployApplicationOutcome TemClient::RevertDeployApplication(const RevertDeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RevertDeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevertDeployApplicationResponse rsp = RevertDeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevertDeployApplicationOutcome(rsp);
        else
            return RevertDeployApplicationOutcome(o.GetError());
    }
    else
    {
        return RevertDeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::RevertDeployApplicationAsync(const RevertDeployApplicationRequest& request, const RevertDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevertDeployApplication(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TemClient::RevertDeployApplicationOutcomeCallable TemClient::RevertDeployApplicationCallable(const RevertDeployApplicationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevertDeployApplicationOutcome()>>(
        [this, request]()
        {
            return this->RevertDeployApplication(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

