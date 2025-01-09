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

#include <tencentcloud/cmq/v20190304/CmqClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cmq::V20190304;
using namespace TencentCloud::Cmq::V20190304::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-04";
    const string ENDPOINT = "cmq.tencentcloudapi.com";
}

CmqClient::CmqClient(const Credential &credential, const string &region) :
    CmqClient(credential, region, ClientProfile())
{
}

CmqClient::CmqClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CmqClient::DescribeQueueDetailOutcome CmqClient::DescribeQueueDetail(const DescribeQueueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQueueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQueueDetailResponse rsp = DescribeQueueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQueueDetailOutcome(rsp);
        else
            return DescribeQueueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeQueueDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeQueueDetailAsync(const DescribeQueueDetailRequest& request, const DescribeQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQueueDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DescribeQueueDetailOutcomeCallable CmqClient::DescribeQueueDetailCallable(const DescribeQueueDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQueueDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeQueueDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CmqClient::DescribeTopicDetailOutcome CmqClient::DescribeTopicDetail(const DescribeTopicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicDetailResponse rsp = DescribeTopicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicDetailOutcome(rsp);
        else
            return DescribeTopicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicDetailOutcome(outcome.GetError());
    }
}

void CmqClient::DescribeTopicDetailAsync(const DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CmqClient::DescribeTopicDetailOutcomeCallable CmqClient::DescribeTopicDetailCallable(const DescribeTopicDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

