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

#include <tencentcloud/csxg/v20230303/CsxgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Csxg::V20230303;
using namespace TencentCloud::Csxg::V20230303::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-03";
    const string ENDPOINT = "csxg.tencentcloudapi.com";
}

CsxgClient::CsxgClient(const Credential &credential, const string &region) :
    CsxgClient(credential, region, ClientProfile())
{
}

CsxgClient::CsxgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CsxgClient::Create5GInstanceOutcome CsxgClient::Create5GInstance(const Create5GInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "Create5GInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Create5GInstanceResponse rsp = Create5GInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Create5GInstanceOutcome(rsp);
        else
            return Create5GInstanceOutcome(o.GetError());
    }
    else
    {
        return Create5GInstanceOutcome(outcome.GetError());
    }
}

void CsxgClient::Create5GInstanceAsync(const Create5GInstanceRequest& request, const Create5GInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Create5GInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsxgClient::Create5GInstanceOutcomeCallable CsxgClient::Create5GInstanceCallable(const Create5GInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<Create5GInstanceOutcome()>>(
        [this, request]()
        {
            return this->Create5GInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsxgClient::Delete5GInstanceOutcome CsxgClient::Delete5GInstance(const Delete5GInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "Delete5GInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Delete5GInstanceResponse rsp = Delete5GInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Delete5GInstanceOutcome(rsp);
        else
            return Delete5GInstanceOutcome(o.GetError());
    }
    else
    {
        return Delete5GInstanceOutcome(outcome.GetError());
    }
}

void CsxgClient::Delete5GInstanceAsync(const Delete5GInstanceRequest& request, const Delete5GInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Delete5GInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsxgClient::Delete5GInstanceOutcomeCallable CsxgClient::Delete5GInstanceCallable(const Delete5GInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<Delete5GInstanceOutcome()>>(
        [this, request]()
        {
            return this->Delete5GInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsxgClient::Describe5GAPNsOutcome CsxgClient::Describe5GAPNs(const Describe5GAPNsRequest &request)
{
    auto outcome = MakeRequest(request, "Describe5GAPNs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Describe5GAPNsResponse rsp = Describe5GAPNsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Describe5GAPNsOutcome(rsp);
        else
            return Describe5GAPNsOutcome(o.GetError());
    }
    else
    {
        return Describe5GAPNsOutcome(outcome.GetError());
    }
}

void CsxgClient::Describe5GAPNsAsync(const Describe5GAPNsRequest& request, const Describe5GAPNsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Describe5GAPNs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsxgClient::Describe5GAPNsOutcomeCallable CsxgClient::Describe5GAPNsCallable(const Describe5GAPNsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<Describe5GAPNsOutcome()>>(
        [this, request]()
        {
            return this->Describe5GAPNs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsxgClient::Describe5GInstancesOutcome CsxgClient::Describe5GInstances(const Describe5GInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "Describe5GInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Describe5GInstancesResponse rsp = Describe5GInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Describe5GInstancesOutcome(rsp);
        else
            return Describe5GInstancesOutcome(o.GetError());
    }
    else
    {
        return Describe5GInstancesOutcome(outcome.GetError());
    }
}

void CsxgClient::Describe5GInstancesAsync(const Describe5GInstancesRequest& request, const Describe5GInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Describe5GInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsxgClient::Describe5GInstancesOutcomeCallable CsxgClient::Describe5GInstancesCallable(const Describe5GInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<Describe5GInstancesOutcome()>>(
        [this, request]()
        {
            return this->Describe5GInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CsxgClient::Modify5GInstanceAttributeOutcome CsxgClient::Modify5GInstanceAttribute(const Modify5GInstanceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "Modify5GInstanceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        Modify5GInstanceAttributeResponse rsp = Modify5GInstanceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return Modify5GInstanceAttributeOutcome(rsp);
        else
            return Modify5GInstanceAttributeOutcome(o.GetError());
    }
    else
    {
        return Modify5GInstanceAttributeOutcome(outcome.GetError());
    }
}

void CsxgClient::Modify5GInstanceAttributeAsync(const Modify5GInstanceAttributeRequest& request, const Modify5GInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Modify5GInstanceAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CsxgClient::Modify5GInstanceAttributeOutcomeCallable CsxgClient::Modify5GInstanceAttributeCallable(const Modify5GInstanceAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<Modify5GInstanceAttributeOutcome()>>(
        [this, request]()
        {
            return this->Modify5GInstanceAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

