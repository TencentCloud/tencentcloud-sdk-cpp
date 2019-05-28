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

#include <tencentcloud/cis/v20180408/CisClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cis::V20180408;
using namespace TencentCloud::Cis::V20180408::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-08";
    const string ENDPOINT = "cis.tencentcloudapi.com";
}

CisClient::CisClient(const Credential &credential, const string &region) :
    CisClient(credential, region, ClientProfile())
{
}

CisClient::CisClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CisClient::CreateContainerInstanceOutcome CisClient::CreateContainerInstance(const CreateContainerInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContainerInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContainerInstanceResponse rsp = CreateContainerInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContainerInstanceOutcome(rsp);
        else
            return CreateContainerInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateContainerInstanceOutcome(outcome.GetError());
    }
}

void CisClient::CreateContainerInstanceAsync(const CreateContainerInstanceRequest& request, const CreateContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateContainerInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::CreateContainerInstanceOutcomeCallable CisClient::CreateContainerInstanceCallable(const CreateContainerInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateContainerInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateContainerInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CisClient::DeleteContainerInstanceOutcome CisClient::DeleteContainerInstance(const DeleteContainerInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteContainerInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteContainerInstanceResponse rsp = DeleteContainerInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteContainerInstanceOutcome(rsp);
        else
            return DeleteContainerInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteContainerInstanceOutcome(outcome.GetError());
    }
}

void CisClient::DeleteContainerInstanceAsync(const DeleteContainerInstanceRequest& request, const DeleteContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteContainerInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::DeleteContainerInstanceOutcomeCallable CisClient::DeleteContainerInstanceCallable(const DeleteContainerInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteContainerInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteContainerInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CisClient::DescribeContainerInstanceOutcome CisClient::DescribeContainerInstance(const DescribeContainerInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerInstanceResponse rsp = DescribeContainerInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerInstanceOutcome(rsp);
        else
            return DescribeContainerInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerInstanceOutcome(outcome.GetError());
    }
}

void CisClient::DescribeContainerInstanceAsync(const DescribeContainerInstanceRequest& request, const DescribeContainerInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::DescribeContainerInstanceOutcomeCallable CisClient::DescribeContainerInstanceCallable(const DescribeContainerInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CisClient::DescribeContainerInstanceEventsOutcome CisClient::DescribeContainerInstanceEvents(const DescribeContainerInstanceEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerInstanceEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerInstanceEventsResponse rsp = DescribeContainerInstanceEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerInstanceEventsOutcome(rsp);
        else
            return DescribeContainerInstanceEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerInstanceEventsOutcome(outcome.GetError());
    }
}

void CisClient::DescribeContainerInstanceEventsAsync(const DescribeContainerInstanceEventsRequest& request, const DescribeContainerInstanceEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerInstanceEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::DescribeContainerInstanceEventsOutcomeCallable CisClient::DescribeContainerInstanceEventsCallable(const DescribeContainerInstanceEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerInstanceEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerInstanceEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CisClient::DescribeContainerInstancesOutcome CisClient::DescribeContainerInstances(const DescribeContainerInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerInstancesResponse rsp = DescribeContainerInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerInstancesOutcome(rsp);
        else
            return DescribeContainerInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerInstancesOutcome(outcome.GetError());
    }
}

void CisClient::DescribeContainerInstancesAsync(const DescribeContainerInstancesRequest& request, const DescribeContainerInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::DescribeContainerInstancesOutcomeCallable CisClient::DescribeContainerInstancesCallable(const DescribeContainerInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CisClient::DescribeContainerLogOutcome CisClient::DescribeContainerLog(const DescribeContainerLogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerLogResponse rsp = DescribeContainerLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerLogOutcome(rsp);
        else
            return DescribeContainerLogOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerLogOutcome(outcome.GetError());
    }
}

void CisClient::DescribeContainerLogAsync(const DescribeContainerLogRequest& request, const DescribeContainerLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeContainerLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::DescribeContainerLogOutcomeCallable CisClient::DescribeContainerLogCallable(const DescribeContainerLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeContainerLogOutcome()>>(
        [this, request]()
        {
            return this->DescribeContainerLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CisClient::InquiryPriceCreateCisOutcome CisClient::InquiryPriceCreateCis(const InquiryPriceCreateCisRequest &request)
{
    auto outcome = MakeRequest(request, "InquiryPriceCreateCis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquiryPriceCreateCisResponse rsp = InquiryPriceCreateCisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquiryPriceCreateCisOutcome(rsp);
        else
            return InquiryPriceCreateCisOutcome(o.GetError());
    }
    else
    {
        return InquiryPriceCreateCisOutcome(outcome.GetError());
    }
}

void CisClient::InquiryPriceCreateCisAsync(const InquiryPriceCreateCisRequest& request, const InquiryPriceCreateCisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquiryPriceCreateCis(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CisClient::InquiryPriceCreateCisOutcomeCallable CisClient::InquiryPriceCreateCisCallable(const InquiryPriceCreateCisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquiryPriceCreateCisOutcome()>>(
        [this, request]()
        {
            return this->InquiryPriceCreateCis(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

