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

#include <tencentcloud/igtm/v20231024/IgtmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Igtm::V20231024;
using namespace TencentCloud::Igtm::V20231024::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-10-24";
    const string ENDPOINT = "igtm.tencentcloudapi.com";
}

IgtmClient::IgtmClient(const Credential &credential, const string &region) :
    IgtmClient(credential, region, ClientProfile())
{
}

IgtmClient::IgtmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IgtmClient::CreateAddressPoolOutcome IgtmClient::CreateAddressPool(const CreateAddressPoolRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAddressPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAddressPoolResponse rsp = CreateAddressPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAddressPoolOutcome(rsp);
        else
            return CreateAddressPoolOutcome(o.GetError());
    }
    else
    {
        return CreateAddressPoolOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateAddressPoolAsync(const CreateAddressPoolRequest& request, const CreateAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAddressPool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::CreateAddressPoolOutcomeCallable IgtmClient::CreateAddressPoolCallable(const CreateAddressPoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAddressPoolOutcome()>>(
        [this, request]()
        {
            return this->CreateAddressPool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::CreateInstanceOutcome IgtmClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::CreateInstanceOutcomeCallable IgtmClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::CreateMonitorOutcome IgtmClient::CreateMonitor(const CreateMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMonitorResponse rsp = CreateMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMonitorOutcome(rsp);
        else
            return CreateMonitorOutcome(o.GetError());
    }
    else
    {
        return CreateMonitorOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateMonitorAsync(const CreateMonitorRequest& request, const CreateMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::CreateMonitorOutcomeCallable IgtmClient::CreateMonitorCallable(const CreateMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMonitorOutcome()>>(
        [this, request]()
        {
            return this->CreateMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::CreateStrategyOutcome IgtmClient::CreateStrategy(const CreateStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStrategyResponse rsp = CreateStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStrategyOutcome(rsp);
        else
            return CreateStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateStrategyOutcome(outcome.GetError());
    }
}

void IgtmClient::CreateStrategyAsync(const CreateStrategyRequest& request, const CreateStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::CreateStrategyOutcomeCallable IgtmClient::CreateStrategyCallable(const CreateStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateStrategyOutcome()>>(
        [this, request]()
        {
            return this->CreateStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DeleteAddressPoolOutcome IgtmClient::DeleteAddressPool(const DeleteAddressPoolRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAddressPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAddressPoolResponse rsp = DeleteAddressPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAddressPoolOutcome(rsp);
        else
            return DeleteAddressPoolOutcome(o.GetError());
    }
    else
    {
        return DeleteAddressPoolOutcome(outcome.GetError());
    }
}

void IgtmClient::DeleteAddressPoolAsync(const DeleteAddressPoolRequest& request, const DeleteAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAddressPool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DeleteAddressPoolOutcomeCallable IgtmClient::DeleteAddressPoolCallable(const DeleteAddressPoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAddressPoolOutcome()>>(
        [this, request]()
        {
            return this->DeleteAddressPool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DeleteMonitorOutcome IgtmClient::DeleteMonitor(const DeleteMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMonitorResponse rsp = DeleteMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMonitorOutcome(rsp);
        else
            return DeleteMonitorOutcome(o.GetError());
    }
    else
    {
        return DeleteMonitorOutcome(outcome.GetError());
    }
}

void IgtmClient::DeleteMonitorAsync(const DeleteMonitorRequest& request, const DeleteMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DeleteMonitorOutcomeCallable IgtmClient::DeleteMonitorCallable(const DeleteMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMonitorOutcome()>>(
        [this, request]()
        {
            return this->DeleteMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DeleteStrategyOutcome IgtmClient::DeleteStrategy(const DeleteStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteStrategyResponse rsp = DeleteStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteStrategyOutcome(rsp);
        else
            return DeleteStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteStrategyOutcome(outcome.GetError());
    }
}

void IgtmClient::DeleteStrategyAsync(const DeleteStrategyRequest& request, const DeleteStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DeleteStrategyOutcomeCallable IgtmClient::DeleteStrategyCallable(const DeleteStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteStrategyOutcome()>>(
        [this, request]()
        {
            return this->DeleteStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeAddressLocationOutcome IgtmClient::DescribeAddressLocation(const DescribeAddressLocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressLocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressLocationResponse rsp = DescribeAddressLocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressLocationOutcome(rsp);
        else
            return DescribeAddressLocationOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressLocationOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeAddressLocationAsync(const DescribeAddressLocationRequest& request, const DescribeAddressLocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressLocation(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeAddressLocationOutcomeCallable IgtmClient::DescribeAddressLocationCallable(const DescribeAddressLocationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressLocationOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressLocation(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeAddressPoolDetailOutcome IgtmClient::DescribeAddressPoolDetail(const DescribeAddressPoolDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressPoolDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressPoolDetailResponse rsp = DescribeAddressPoolDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressPoolDetailOutcome(rsp);
        else
            return DescribeAddressPoolDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressPoolDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeAddressPoolDetailAsync(const DescribeAddressPoolDetailRequest& request, const DescribeAddressPoolDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressPoolDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeAddressPoolDetailOutcomeCallable IgtmClient::DescribeAddressPoolDetailCallable(const DescribeAddressPoolDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressPoolDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressPoolDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeAddressPoolListOutcome IgtmClient::DescribeAddressPoolList(const DescribeAddressPoolListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAddressPoolList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAddressPoolListResponse rsp = DescribeAddressPoolListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAddressPoolListOutcome(rsp);
        else
            return DescribeAddressPoolListOutcome(o.GetError());
    }
    else
    {
        return DescribeAddressPoolListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeAddressPoolListAsync(const DescribeAddressPoolListRequest& request, const DescribeAddressPoolListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAddressPoolList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeAddressPoolListOutcomeCallable IgtmClient::DescribeAddressPoolListCallable(const DescribeAddressPoolListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAddressPoolListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAddressPoolList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeDetectorsOutcome IgtmClient::DescribeDetectors(const DescribeDetectorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDetectors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDetectorsResponse rsp = DescribeDetectorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDetectorsOutcome(rsp);
        else
            return DescribeDetectorsOutcome(o.GetError());
    }
    else
    {
        return DescribeDetectorsOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeDetectorsAsync(const DescribeDetectorsRequest& request, const DescribeDetectorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDetectors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeDetectorsOutcomeCallable IgtmClient::DescribeDetectorsCallable(const DescribeDetectorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDetectorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDetectors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeDnsLineListOutcome IgtmClient::DescribeDnsLineList(const DescribeDnsLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsLineListResponse rsp = DescribeDnsLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsLineListOutcome(rsp);
        else
            return DescribeDnsLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsLineListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeDnsLineListAsync(const DescribeDnsLineListRequest& request, const DescribeDnsLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsLineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeDnsLineListOutcomeCallable IgtmClient::DescribeDnsLineListCallable(const DescribeDnsLineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsLineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsLineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeInstanceDetailOutcome IgtmClient::DescribeInstanceDetail(const DescribeInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceDetailResponse rsp = DescribeInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceDetailOutcome(rsp);
        else
            return DescribeInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeInstanceDetailAsync(const DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeInstanceDetailOutcomeCallable IgtmClient::DescribeInstanceDetailCallable(const DescribeInstanceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeInstanceListOutcome IgtmClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceListResponse rsp = DescribeInstanceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceListOutcome(rsp);
        else
            return DescribeInstanceListOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeInstanceListOutcomeCallable IgtmClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeMonitorDetailOutcome IgtmClient::DescribeMonitorDetail(const DescribeMonitorDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitorDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorDetailResponse rsp = DescribeMonitorDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorDetailOutcome(rsp);
        else
            return DescribeMonitorDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeMonitorDetailAsync(const DescribeMonitorDetailRequest& request, const DescribeMonitorDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitorDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeMonitorDetailOutcomeCallable IgtmClient::DescribeMonitorDetailCallable(const DescribeMonitorDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitorDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeMonitorsOutcome IgtmClient::DescribeMonitors(const DescribeMonitorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMonitors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMonitorsResponse rsp = DescribeMonitorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMonitorsOutcome(rsp);
        else
            return DescribeMonitorsOutcome(o.GetError());
    }
    else
    {
        return DescribeMonitorsOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeMonitorsAsync(const DescribeMonitorsRequest& request, const DescribeMonitorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMonitors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeMonitorsOutcomeCallable IgtmClient::DescribeMonitorsCallable(const DescribeMonitorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMonitorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMonitors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeQuotasOutcome IgtmClient::DescribeQuotas(const DescribeQuotasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQuotas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQuotasResponse rsp = DescribeQuotasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQuotasOutcome(rsp);
        else
            return DescribeQuotasOutcome(o.GetError());
    }
    else
    {
        return DescribeQuotasOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeQuotasAsync(const DescribeQuotasRequest& request, const DescribeQuotasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQuotas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeQuotasOutcomeCallable IgtmClient::DescribeQuotasCallable(const DescribeQuotasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQuotasOutcome()>>(
        [this, request]()
        {
            return this->DescribeQuotas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeStrategyDetailOutcome IgtmClient::DescribeStrategyDetail(const DescribeStrategyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyDetailResponse rsp = DescribeStrategyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyDetailOutcome(rsp);
        else
            return DescribeStrategyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyDetailOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeStrategyDetailAsync(const DescribeStrategyDetailRequest& request, const DescribeStrategyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStrategyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeStrategyDetailOutcomeCallable IgtmClient::DescribeStrategyDetailCallable(const DescribeStrategyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStrategyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeStrategyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::DescribeStrategyListOutcome IgtmClient::DescribeStrategyList(const DescribeStrategyListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStrategyList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStrategyListResponse rsp = DescribeStrategyListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStrategyListOutcome(rsp);
        else
            return DescribeStrategyListOutcome(o.GetError());
    }
    else
    {
        return DescribeStrategyListOutcome(outcome.GetError());
    }
}

void IgtmClient::DescribeStrategyListAsync(const DescribeStrategyListRequest& request, const DescribeStrategyListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeStrategyList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::DescribeStrategyListOutcomeCallable IgtmClient::DescribeStrategyListCallable(const DescribeStrategyListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeStrategyListOutcome()>>(
        [this, request]()
        {
            return this->DescribeStrategyList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::ModifyAddressPoolOutcome IgtmClient::ModifyAddressPool(const ModifyAddressPoolRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAddressPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAddressPoolResponse rsp = ModifyAddressPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAddressPoolOutcome(rsp);
        else
            return ModifyAddressPoolOutcome(o.GetError());
    }
    else
    {
        return ModifyAddressPoolOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyAddressPoolAsync(const ModifyAddressPoolRequest& request, const ModifyAddressPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAddressPool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::ModifyAddressPoolOutcomeCallable IgtmClient::ModifyAddressPoolCallable(const ModifyAddressPoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAddressPoolOutcome()>>(
        [this, request]()
        {
            return this->ModifyAddressPool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::ModifyInstanceConfigOutcome IgtmClient::ModifyInstanceConfig(const ModifyInstanceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceConfigResponse rsp = ModifyInstanceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceConfigOutcome(rsp);
        else
            return ModifyInstanceConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceConfigOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyInstanceConfigAsync(const ModifyInstanceConfigRequest& request, const ModifyInstanceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::ModifyInstanceConfigOutcomeCallable IgtmClient::ModifyInstanceConfigCallable(const ModifyInstanceConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::ModifyMonitorOutcome IgtmClient::ModifyMonitor(const ModifyMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMonitorResponse rsp = ModifyMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMonitorOutcome(rsp);
        else
            return ModifyMonitorOutcome(o.GetError());
    }
    else
    {
        return ModifyMonitorOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyMonitorAsync(const ModifyMonitorRequest& request, const ModifyMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMonitor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::ModifyMonitorOutcomeCallable IgtmClient::ModifyMonitorCallable(const ModifyMonitorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMonitorOutcome()>>(
        [this, request]()
        {
            return this->ModifyMonitor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IgtmClient::ModifyStrategyOutcome IgtmClient::ModifyStrategy(const ModifyStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyStrategyResponse rsp = ModifyStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyStrategyOutcome(rsp);
        else
            return ModifyStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyStrategyOutcome(outcome.GetError());
    }
}

void IgtmClient::ModifyStrategyAsync(const ModifyStrategyRequest& request, const ModifyStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IgtmClient::ModifyStrategyOutcomeCallable IgtmClient::ModifyStrategyCallable(const ModifyStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyStrategyOutcome()>>(
        [this, request]()
        {
            return this->ModifyStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

