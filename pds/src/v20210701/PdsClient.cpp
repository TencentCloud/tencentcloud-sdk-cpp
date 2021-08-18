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

#include <tencentcloud/pds/v20210701/PdsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Pds::V20210701;
using namespace TencentCloud::Pds::V20210701::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-01";
    const string ENDPOINT = "pds.tencentcloudapi.com";
}

PdsClient::PdsClient(const Credential &credential, const string &region) :
    PdsClient(credential, region, ClientProfile())
{
}

PdsClient::PdsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


PdsClient::DescribeNewUserAcquisitionOutcome PdsClient::DescribeNewUserAcquisition(const DescribeNewUserAcquisitionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNewUserAcquisition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNewUserAcquisitionResponse rsp = DescribeNewUserAcquisitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNewUserAcquisitionOutcome(rsp);
        else
            return DescribeNewUserAcquisitionOutcome(o.GetError());
    }
    else
    {
        return DescribeNewUserAcquisitionOutcome(outcome.GetError());
    }
}

void PdsClient::DescribeNewUserAcquisitionAsync(const DescribeNewUserAcquisitionRequest& request, const DescribeNewUserAcquisitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNewUserAcquisition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PdsClient::DescribeNewUserAcquisitionOutcomeCallable PdsClient::DescribeNewUserAcquisitionCallable(const DescribeNewUserAcquisitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNewUserAcquisitionOutcome()>>(
        [this, request]()
        {
            return this->DescribeNewUserAcquisition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

PdsClient::DescribeStockEstimationOutcome PdsClient::DescribeStockEstimation(const DescribeStockEstimationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStockEstimation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStockEstimationResponse rsp = DescribeStockEstimationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStockEstimationOutcome(rsp);
        else
            return DescribeStockEstimationOutcome(o.GetError());
    }
    else
    {
        return DescribeStockEstimationOutcome(outcome.GetError());
    }
}

void PdsClient::DescribeStockEstimationAsync(const DescribeStockEstimationRequest& request, const DescribeStockEstimationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStockEstimation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

PdsClient::DescribeStockEstimationOutcomeCallable PdsClient::DescribeStockEstimationCallable(const DescribeStockEstimationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStockEstimationOutcome()>>(
        [this, request]()
        {
            return this->DescribeStockEstimation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

