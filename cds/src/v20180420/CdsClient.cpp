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

#include <tencentcloud/cds/v20180420/CdsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cds::V20180420;
using namespace TencentCloud::Cds::V20180420::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-20";
    const string ENDPOINT = "cds.tencentcloudapi.com";
}

CdsClient::CdsClient(const Credential &credential, const string &region) :
    CdsClient(credential, region, ClientProfile())
{
}

CdsClient::CdsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdsClient::DescribeDbauditInstanceTypeOutcome CdsClient::DescribeDbauditInstanceType(const DescribeDbauditInstanceTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbauditInstanceType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbauditInstanceTypeResponse rsp = DescribeDbauditInstanceTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbauditInstanceTypeOutcome(rsp);
        else
            return DescribeDbauditInstanceTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeDbauditInstanceTypeOutcome(outcome.GetError());
    }
}

void CdsClient::DescribeDbauditInstanceTypeAsync(const DescribeDbauditInstanceTypeRequest& request, const DescribeDbauditInstanceTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbauditInstanceType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdsClient::DescribeDbauditInstanceTypeOutcomeCallable CdsClient::DescribeDbauditInstanceTypeCallable(const DescribeDbauditInstanceTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbauditInstanceTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbauditInstanceType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdsClient::DescribeDbauditInstancesOutcome CdsClient::DescribeDbauditInstances(const DescribeDbauditInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbauditInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbauditInstancesResponse rsp = DescribeDbauditInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbauditInstancesOutcome(rsp);
        else
            return DescribeDbauditInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDbauditInstancesOutcome(outcome.GetError());
    }
}

void CdsClient::DescribeDbauditInstancesAsync(const DescribeDbauditInstancesRequest& request, const DescribeDbauditInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbauditInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdsClient::DescribeDbauditInstancesOutcomeCallable CdsClient::DescribeDbauditInstancesCallable(const DescribeDbauditInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbauditInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbauditInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdsClient::DescribeDbauditUsedRegionsOutcome CdsClient::DescribeDbauditUsedRegions(const DescribeDbauditUsedRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDbauditUsedRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDbauditUsedRegionsResponse rsp = DescribeDbauditUsedRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDbauditUsedRegionsOutcome(rsp);
        else
            return DescribeDbauditUsedRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeDbauditUsedRegionsOutcome(outcome.GetError());
    }
}

void CdsClient::DescribeDbauditUsedRegionsAsync(const DescribeDbauditUsedRegionsRequest& request, const DescribeDbauditUsedRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDbauditUsedRegions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdsClient::DescribeDbauditUsedRegionsOutcomeCallable CdsClient::DescribeDbauditUsedRegionsCallable(const DescribeDbauditUsedRegionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDbauditUsedRegionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDbauditUsedRegions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdsClient::InquiryPriceDbauditInstanceOutcome CdsClient::InquiryPriceDbauditInstance(const InquiryPriceDbauditInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceDbauditInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceDbauditInstanceResponse rsp = InquiryPriceDbauditInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceDbauditInstanceOutcome(rsp);
        else
            return InquiryPriceDbauditInstanceOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceDbauditInstanceOutcome(outcome.GetError());
    }
}

void CdsClient::InquiryPriceDbauditInstanceAsync(const InquiryPriceDbauditInstanceRequest& request, const InquiryPriceDbauditInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceDbauditInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdsClient::InquiryPriceDbauditInstanceOutcomeCallable CdsClient::InquiryPriceDbauditInstanceCallable(const InquiryPriceDbauditInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceDbauditInstanceOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceDbauditInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdsClient::ModifyDbauditInstancesRenewFlagOutcome CdsClient::ModifyDbauditInstancesRenewFlag(const ModifyDbauditInstancesRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDbauditInstancesRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDbauditInstancesRenewFlagResponse rsp = ModifyDbauditInstancesRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDbauditInstancesRenewFlagOutcome(rsp);
        else
            return ModifyDbauditInstancesRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyDbauditInstancesRenewFlagOutcome(outcome.GetError());
    }
}

void CdsClient::ModifyDbauditInstancesRenewFlagAsync(const ModifyDbauditInstancesRenewFlagRequest& request, const ModifyDbauditInstancesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDbauditInstancesRenewFlag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdsClient::ModifyDbauditInstancesRenewFlagOutcomeCallable CdsClient::ModifyDbauditInstancesRenewFlagCallable(const ModifyDbauditInstancesRenewFlagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDbauditInstancesRenewFlagOutcome()>>(
        [this, request]()
        {
            return this->ModifyDbauditInstancesRenewFlag(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

