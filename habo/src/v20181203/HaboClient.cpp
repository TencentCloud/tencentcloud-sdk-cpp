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

#include <tencentcloud/habo/v20181203/HaboClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Habo::V20181203;
using namespace TencentCloud::Habo::V20181203::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-12-03";
    const string ENDPOINT = "habo.tencentcloudapi.com";
}

HaboClient::HaboClient(const Credential &credential, const string &region) :
    HaboClient(credential, region, ClientProfile())
{
}

HaboClient::HaboClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HaboClient::DescribeStatusOutcome HaboClient::DescribeStatus(const DescribeStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatusResponse rsp = DescribeStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatusOutcome(rsp);
        else
            return DescribeStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeStatusOutcome(outcome.GetError());
    }
}

void HaboClient::DescribeStatusAsync(const DescribeStatusRequest& request, const DescribeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaboClient::DescribeStatusOutcomeCallable HaboClient::DescribeStatusCallable(const DescribeStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

HaboClient::StartAnalyseOutcome HaboClient::StartAnalyse(const StartAnalyseRequest &request)
{
    auto outcome = MakeRequest(request, "StartAnalyse");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartAnalyseResponse rsp = StartAnalyseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartAnalyseOutcome(rsp);
        else
            return StartAnalyseOutcome(o.GetError());
    }
    else
    {
        return StartAnalyseOutcome(outcome.GetError());
    }
}

void HaboClient::StartAnalyseAsync(const StartAnalyseRequest& request, const StartAnalyseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartAnalyse(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

HaboClient::StartAnalyseOutcomeCallable HaboClient::StartAnalyseCallable(const StartAnalyseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartAnalyseOutcome()>>(
        [this, request]()
        {
            return this->StartAnalyse(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

