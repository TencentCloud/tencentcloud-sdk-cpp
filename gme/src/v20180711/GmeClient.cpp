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

#include <tencentcloud/gme/v20180711/GmeClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Gme::V20180711;
using namespace TencentCloud::Gme::V20180711::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-07-11";
    const string ENDPOINT = "gme.tencentcloudapi.com";
}

GmeClient::GmeClient(const Credential &credential, const string &region) :
    GmeClient(credential, region, ClientProfile())
{
}

GmeClient::GmeClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


GmeClient::DescribeFilterResultListOutcome GmeClient::DescribeFilterResultList(const DescribeFilterResultListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFilterResultList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFilterResultListResponse rsp = DescribeFilterResultListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFilterResultListOutcome(rsp);
        else
            return DescribeFilterResultListOutcome(o.GetError());
    }
    else
    {
        return DescribeFilterResultListOutcome(outcome.GetError());
    }
}

void GmeClient::DescribeFilterResultListAsync(const DescribeFilterResultListRequest& request, const DescribeFilterResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFilterResultList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::DescribeFilterResultListOutcomeCallable GmeClient::DescribeFilterResultListCallable(const DescribeFilterResultListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFilterResultListOutcome()>>(
        [this, request]()
        {
            return this->DescribeFilterResultList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

GmeClient::VoiceFilterOutcome GmeClient::VoiceFilter(const VoiceFilterRequest &request)
{
    auto outcome = MakeRequest(request, "VoiceFilter");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VoiceFilterResponse rsp = VoiceFilterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VoiceFilterOutcome(rsp);
        else
            return VoiceFilterOutcome(o.GetError());
    }
    else
    {
        return VoiceFilterOutcome(outcome.GetError());
    }
}

void GmeClient::VoiceFilterAsync(const VoiceFilterRequest& request, const VoiceFilterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VoiceFilter(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

GmeClient::VoiceFilterOutcomeCallable GmeClient::VoiceFilterCallable(const VoiceFilterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VoiceFilterOutcome()>>(
        [this, request]()
        {
            return this->VoiceFilter(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

