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

#include <tencentcloud/vcg/v20240404/VcgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vcg::V20240404;
using namespace TencentCloud::Vcg::V20240404::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-04-04";
    const string ENDPOINT = "vcg.tencentcloudapi.com";
}

VcgClient::VcgClient(const Credential &credential, const string &region) :
    VcgClient(credential, region, ClientProfile())
{
}

VcgClient::VcgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VcgClient::DescribeVideoStylizationJobOutcome VcgClient::DescribeVideoStylizationJob(const DescribeVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVideoStylizationJobResponse rsp = DescribeVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVideoStylizationJobOutcome(rsp);
        else
            return DescribeVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return DescribeVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VcgClient::DescribeVideoStylizationJobAsync(const DescribeVideoStylizationJobRequest& request, const DescribeVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVideoStylizationJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcgClient::DescribeVideoStylizationJobOutcomeCallable VcgClient::DescribeVideoStylizationJobCallable(const DescribeVideoStylizationJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVideoStylizationJobOutcome()>>(
        [this, request]()
        {
            return this->DescribeVideoStylizationJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

VcgClient::SubmitVideoStylizationJobOutcome VcgClient::SubmitVideoStylizationJob(const SubmitVideoStylizationJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitVideoStylizationJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitVideoStylizationJobResponse rsp = SubmitVideoStylizationJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitVideoStylizationJobOutcome(rsp);
        else
            return SubmitVideoStylizationJobOutcome(o.GetError());
    }
    else
    {
        return SubmitVideoStylizationJobOutcome(outcome.GetError());
    }
}

void VcgClient::SubmitVideoStylizationJobAsync(const SubmitVideoStylizationJobRequest& request, const SubmitVideoStylizationJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SubmitVideoStylizationJob(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

VcgClient::SubmitVideoStylizationJobOutcomeCallable VcgClient::SubmitVideoStylizationJobCallable(const SubmitVideoStylizationJobRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SubmitVideoStylizationJobOutcome()>>(
        [this, request]()
        {
            return this->SubmitVideoStylizationJob(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

