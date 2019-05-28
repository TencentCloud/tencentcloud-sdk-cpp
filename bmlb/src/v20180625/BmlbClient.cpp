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

#include <tencentcloud/bmlb/v20180625/BmlbClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bmlb::V20180625;
using namespace TencentCloud::Bmlb::V20180625::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-25";
    const string ENDPOINT = "bmlb.tencentcloudapi.com";
}

BmlbClient::BmlbClient(const Credential &credential, const string &region) :
    BmlbClient(credential, region, ClientProfile())
{
}

BmlbClient::BmlbClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmlbClient::BindL4BackendsOutcome BmlbClient::BindL4Backends(const BindL4BackendsRequest &request)
{
    auto outcome = MakeRequest(request, "BindL4Backends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindL4BackendsResponse rsp = BindL4BackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindL4BackendsOutcome(rsp);
        else
            return BindL4BackendsOutcome(o.GetError());
    }
    else
    {
        return BindL4BackendsOutcome(outcome.GetError());
    }
}

void BmlbClient::BindL4BackendsAsync(const BindL4BackendsRequest& request, const BindL4BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindL4Backends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::BindL4BackendsOutcomeCallable BmlbClient::BindL4BackendsCallable(const BindL4BackendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindL4BackendsOutcome()>>(
        [this, request]()
        {
            return this->BindL4Backends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::BindL7BackendsOutcome BmlbClient::BindL7Backends(const BindL7BackendsRequest &request)
{
    auto outcome = MakeRequest(request, "BindL7Backends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindL7BackendsResponse rsp = BindL7BackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindL7BackendsOutcome(rsp);
        else
            return BindL7BackendsOutcome(o.GetError());
    }
    else
    {
        return BindL7BackendsOutcome(outcome.GetError());
    }
}

void BmlbClient::BindL7BackendsAsync(const BindL7BackendsRequest& request, const BindL7BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindL7Backends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::BindL7BackendsOutcomeCallable BmlbClient::BindL7BackendsCallable(const BindL7BackendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindL7BackendsOutcome()>>(
        [this, request]()
        {
            return this->BindL7Backends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::BindTrafficMirrorListenersOutcome BmlbClient::BindTrafficMirrorListeners(const BindTrafficMirrorListenersRequest &request)
{
    auto outcome = MakeRequest(request, "BindTrafficMirrorListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindTrafficMirrorListenersResponse rsp = BindTrafficMirrorListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindTrafficMirrorListenersOutcome(rsp);
        else
            return BindTrafficMirrorListenersOutcome(o.GetError());
    }
    else
    {
        return BindTrafficMirrorListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::BindTrafficMirrorListenersAsync(const BindTrafficMirrorListenersRequest& request, const BindTrafficMirrorListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindTrafficMirrorListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::BindTrafficMirrorListenersOutcomeCallable BmlbClient::BindTrafficMirrorListenersCallable(const BindTrafficMirrorListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindTrafficMirrorListenersOutcome()>>(
        [this, request]()
        {
            return this->BindTrafficMirrorListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::BindTrafficMirrorReceiversOutcome BmlbClient::BindTrafficMirrorReceivers(const BindTrafficMirrorReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "BindTrafficMirrorReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindTrafficMirrorReceiversResponse rsp = BindTrafficMirrorReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindTrafficMirrorReceiversOutcome(rsp);
        else
            return BindTrafficMirrorReceiversOutcome(o.GetError());
    }
    else
    {
        return BindTrafficMirrorReceiversOutcome(outcome.GetError());
    }
}

void BmlbClient::BindTrafficMirrorReceiversAsync(const BindTrafficMirrorReceiversRequest& request, const BindTrafficMirrorReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindTrafficMirrorReceivers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::BindTrafficMirrorReceiversOutcomeCallable BmlbClient::BindTrafficMirrorReceiversCallable(const BindTrafficMirrorReceiversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindTrafficMirrorReceiversOutcome()>>(
        [this, request]()
        {
            return this->BindTrafficMirrorReceivers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::CreateL4ListenersOutcome BmlbClient::CreateL4Listeners(const CreateL4ListenersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL4Listeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL4ListenersResponse rsp = CreateL4ListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL4ListenersOutcome(rsp);
        else
            return CreateL4ListenersOutcome(o.GetError());
    }
    else
    {
        return CreateL4ListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::CreateL4ListenersAsync(const CreateL4ListenersRequest& request, const CreateL4ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL4Listeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::CreateL4ListenersOutcomeCallable BmlbClient::CreateL4ListenersCallable(const CreateL4ListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL4ListenersOutcome()>>(
        [this, request]()
        {
            return this->CreateL4Listeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::CreateL7ListenersOutcome BmlbClient::CreateL7Listeners(const CreateL7ListenersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7Listeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7ListenersResponse rsp = CreateL7ListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7ListenersOutcome(rsp);
        else
            return CreateL7ListenersOutcome(o.GetError());
    }
    else
    {
        return CreateL7ListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::CreateL7ListenersAsync(const CreateL7ListenersRequest& request, const CreateL7ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7Listeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::CreateL7ListenersOutcomeCallable BmlbClient::CreateL7ListenersCallable(const CreateL7ListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7ListenersOutcome()>>(
        [this, request]()
        {
            return this->CreateL7Listeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::CreateL7RulesOutcome BmlbClient::CreateL7Rules(const CreateL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateL7RulesResponse rsp = CreateL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateL7RulesOutcome(rsp);
        else
            return CreateL7RulesOutcome(o.GetError());
    }
    else
    {
        return CreateL7RulesOutcome(outcome.GetError());
    }
}

void BmlbClient::CreateL7RulesAsync(const CreateL7RulesRequest& request, const CreateL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::CreateL7RulesOutcomeCallable BmlbClient::CreateL7RulesCallable(const CreateL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateL7RulesOutcome()>>(
        [this, request]()
        {
            return this->CreateL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::CreateLoadBalancersOutcome BmlbClient::CreateLoadBalancers(const CreateLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancersResponse rsp = CreateLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancersOutcome(rsp);
        else
            return CreateLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancersOutcome(outcome.GetError());
    }
}

void BmlbClient::CreateLoadBalancersAsync(const CreateLoadBalancersRequest& request, const CreateLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::CreateLoadBalancersOutcomeCallable BmlbClient::CreateLoadBalancersCallable(const CreateLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->CreateLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::CreateTrafficMirrorOutcome BmlbClient::CreateTrafficMirror(const CreateTrafficMirrorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTrafficMirror");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTrafficMirrorResponse rsp = CreateTrafficMirrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTrafficMirrorOutcome(rsp);
        else
            return CreateTrafficMirrorOutcome(o.GetError());
    }
    else
    {
        return CreateTrafficMirrorOutcome(outcome.GetError());
    }
}

void BmlbClient::CreateTrafficMirrorAsync(const CreateTrafficMirrorRequest& request, const CreateTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTrafficMirror(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::CreateTrafficMirrorOutcomeCallable BmlbClient::CreateTrafficMirrorCallable(const CreateTrafficMirrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTrafficMirrorOutcome()>>(
        [this, request]()
        {
            return this->CreateTrafficMirror(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DeleteL7DomainsOutcome BmlbClient::DeleteL7Domains(const DeleteL7DomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL7Domains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL7DomainsResponse rsp = DeleteL7DomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL7DomainsOutcome(rsp);
        else
            return DeleteL7DomainsOutcome(o.GetError());
    }
    else
    {
        return DeleteL7DomainsOutcome(outcome.GetError());
    }
}

void BmlbClient::DeleteL7DomainsAsync(const DeleteL7DomainsRequest& request, const DeleteL7DomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL7Domains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DeleteL7DomainsOutcomeCallable BmlbClient::DeleteL7DomainsCallable(const DeleteL7DomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL7DomainsOutcome()>>(
        [this, request]()
        {
            return this->DeleteL7Domains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DeleteL7RulesOutcome BmlbClient::DeleteL7Rules(const DeleteL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteL7RulesResponse rsp = DeleteL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteL7RulesOutcome(rsp);
        else
            return DeleteL7RulesOutcome(o.GetError());
    }
    else
    {
        return DeleteL7RulesOutcome(outcome.GetError());
    }
}

void BmlbClient::DeleteL7RulesAsync(const DeleteL7RulesRequest& request, const DeleteL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DeleteL7RulesOutcomeCallable BmlbClient::DeleteL7RulesCallable(const DeleteL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DeleteL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DeleteListenersOutcome BmlbClient::DeleteListeners(const DeleteListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteListenersResponse rsp = DeleteListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteListenersOutcome(rsp);
        else
            return DeleteListenersOutcome(o.GetError());
    }
    else
    {
        return DeleteListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::DeleteListenersAsync(const DeleteListenersRequest& request, const DeleteListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DeleteListenersOutcomeCallable BmlbClient::DeleteListenersCallable(const DeleteListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteListenersOutcome()>>(
        [this, request]()
        {
            return this->DeleteListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DeleteLoadBalancerOutcome BmlbClient::DeleteLoadBalancer(const DeleteLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancerResponse rsp = DeleteLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancerOutcome(rsp);
        else
            return DeleteLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancerOutcome(outcome.GetError());
    }
}

void BmlbClient::DeleteLoadBalancerAsync(const DeleteLoadBalancerRequest& request, const DeleteLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DeleteLoadBalancerOutcomeCallable BmlbClient::DeleteLoadBalancerCallable(const DeleteLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DeleteTrafficMirrorOutcome BmlbClient::DeleteTrafficMirror(const DeleteTrafficMirrorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTrafficMirror");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTrafficMirrorResponse rsp = DeleteTrafficMirrorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTrafficMirrorOutcome(rsp);
        else
            return DeleteTrafficMirrorOutcome(o.GetError());
    }
    else
    {
        return DeleteTrafficMirrorOutcome(outcome.GetError());
    }
}

void BmlbClient::DeleteTrafficMirrorAsync(const DeleteTrafficMirrorRequest& request, const DeleteTrafficMirrorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTrafficMirror(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DeleteTrafficMirrorOutcomeCallable BmlbClient::DeleteTrafficMirrorCallable(const DeleteTrafficMirrorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTrafficMirrorOutcome()>>(
        [this, request]()
        {
            return this->DeleteTrafficMirror(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeCertDetailOutcome BmlbClient::DescribeCertDetail(const DescribeCertDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertDetailResponse rsp = DescribeCertDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertDetailOutcome(rsp);
        else
            return DescribeCertDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCertDetailOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeCertDetailAsync(const DescribeCertDetailRequest& request, const DescribeCertDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeCertDetailOutcomeCallable BmlbClient::DescribeCertDetailCallable(const DescribeCertDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeDevicesBindInfoOutcome BmlbClient::DescribeDevicesBindInfo(const DescribeDevicesBindInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDevicesBindInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDevicesBindInfoResponse rsp = DescribeDevicesBindInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDevicesBindInfoOutcome(rsp);
        else
            return DescribeDevicesBindInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDevicesBindInfoOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeDevicesBindInfoAsync(const DescribeDevicesBindInfoRequest& request, const DescribeDevicesBindInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDevicesBindInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeDevicesBindInfoOutcomeCallable BmlbClient::DescribeDevicesBindInfoCallable(const DescribeDevicesBindInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDevicesBindInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDevicesBindInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL4BackendsOutcome BmlbClient::DescribeL4Backends(const DescribeL4BackendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4Backends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4BackendsResponse rsp = DescribeL4BackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4BackendsOutcome(rsp);
        else
            return DescribeL4BackendsOutcome(o.GetError());
    }
    else
    {
        return DescribeL4BackendsOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL4BackendsAsync(const DescribeL4BackendsRequest& request, const DescribeL4BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4Backends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL4BackendsOutcomeCallable BmlbClient::DescribeL4BackendsCallable(const DescribeL4BackendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4BackendsOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4Backends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL4ListenerInfoOutcome BmlbClient::DescribeL4ListenerInfo(const DescribeL4ListenerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4ListenerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4ListenerInfoResponse rsp = DescribeL4ListenerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4ListenerInfoOutcome(rsp);
        else
            return DescribeL4ListenerInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeL4ListenerInfoOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL4ListenerInfoAsync(const DescribeL4ListenerInfoRequest& request, const DescribeL4ListenerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4ListenerInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL4ListenerInfoOutcomeCallable BmlbClient::DescribeL4ListenerInfoCallable(const DescribeL4ListenerInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4ListenerInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4ListenerInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL4ListenersOutcome BmlbClient::DescribeL4Listeners(const DescribeL4ListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL4Listeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL4ListenersResponse rsp = DescribeL4ListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL4ListenersOutcome(rsp);
        else
            return DescribeL4ListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeL4ListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL4ListenersAsync(const DescribeL4ListenersRequest& request, const DescribeL4ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL4Listeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL4ListenersOutcomeCallable BmlbClient::DescribeL4ListenersCallable(const DescribeL4ListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL4ListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeL4Listeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL7BackendsOutcome BmlbClient::DescribeL7Backends(const DescribeL7BackendsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7Backends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7BackendsResponse rsp = DescribeL7BackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7BackendsOutcome(rsp);
        else
            return DescribeL7BackendsOutcome(o.GetError());
    }
    else
    {
        return DescribeL7BackendsOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL7BackendsAsync(const DescribeL7BackendsRequest& request, const DescribeL7BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7Backends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL7BackendsOutcomeCallable BmlbClient::DescribeL7BackendsCallable(const DescribeL7BackendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7BackendsOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7Backends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL7ListenerInfoOutcome BmlbClient::DescribeL7ListenerInfo(const DescribeL7ListenerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7ListenerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7ListenerInfoResponse rsp = DescribeL7ListenerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7ListenerInfoOutcome(rsp);
        else
            return DescribeL7ListenerInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeL7ListenerInfoOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL7ListenerInfoAsync(const DescribeL7ListenerInfoRequest& request, const DescribeL7ListenerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7ListenerInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL7ListenerInfoOutcomeCallable BmlbClient::DescribeL7ListenerInfoCallable(const DescribeL7ListenerInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7ListenerInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7ListenerInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL7ListenersOutcome BmlbClient::DescribeL7Listeners(const DescribeL7ListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7Listeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7ListenersResponse rsp = DescribeL7ListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7ListenersOutcome(rsp);
        else
            return DescribeL7ListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeL7ListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL7ListenersAsync(const DescribeL7ListenersRequest& request, const DescribeL7ListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7Listeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL7ListenersOutcomeCallable BmlbClient::DescribeL7ListenersCallable(const DescribeL7ListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7ListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7Listeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL7ListenersExOutcome BmlbClient::DescribeL7ListenersEx(const DescribeL7ListenersExRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7ListenersEx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7ListenersExResponse rsp = DescribeL7ListenersExResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7ListenersExOutcome(rsp);
        else
            return DescribeL7ListenersExOutcome(o.GetError());
    }
    else
    {
        return DescribeL7ListenersExOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL7ListenersExAsync(const DescribeL7ListenersExRequest& request, const DescribeL7ListenersExAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7ListenersEx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL7ListenersExOutcomeCallable BmlbClient::DescribeL7ListenersExCallable(const DescribeL7ListenersExRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7ListenersExOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7ListenersEx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeL7RulesOutcome BmlbClient::DescribeL7Rules(const DescribeL7RulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeL7Rules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeL7RulesResponse rsp = DescribeL7RulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeL7RulesOutcome(rsp);
        else
            return DescribeL7RulesOutcome(o.GetError());
    }
    else
    {
        return DescribeL7RulesOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeL7RulesAsync(const DescribeL7RulesRequest& request, const DescribeL7RulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeL7Rules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeL7RulesOutcomeCallable BmlbClient::DescribeL7RulesCallable(const DescribeL7RulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeL7RulesOutcome()>>(
        [this, request]()
        {
            return this->DescribeL7Rules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeLoadBalancerPortInfoOutcome BmlbClient::DescribeLoadBalancerPortInfo(const DescribeLoadBalancerPortInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerPortInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerPortInfoResponse rsp = DescribeLoadBalancerPortInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerPortInfoOutcome(rsp);
        else
            return DescribeLoadBalancerPortInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerPortInfoOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeLoadBalancerPortInfoAsync(const DescribeLoadBalancerPortInfoRequest& request, const DescribeLoadBalancerPortInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancerPortInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeLoadBalancerPortInfoOutcomeCallable BmlbClient::DescribeLoadBalancerPortInfoCallable(const DescribeLoadBalancerPortInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerPortInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancerPortInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeLoadBalancerTaskResultOutcome BmlbClient::DescribeLoadBalancerTaskResult(const DescribeLoadBalancerTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancerTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancerTaskResultResponse rsp = DescribeLoadBalancerTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancerTaskResultOutcome(rsp);
        else
            return DescribeLoadBalancerTaskResultOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancerTaskResultOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeLoadBalancerTaskResultAsync(const DescribeLoadBalancerTaskResultRequest& request, const DescribeLoadBalancerTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancerTaskResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeLoadBalancerTaskResultOutcomeCallable BmlbClient::DescribeLoadBalancerTaskResultCallable(const DescribeLoadBalancerTaskResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancerTaskResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancerTaskResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeLoadBalancersOutcome BmlbClient::DescribeLoadBalancers(const DescribeLoadBalancersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancersResponse rsp = DescribeLoadBalancersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancersOutcome(rsp);
        else
            return DescribeLoadBalancersOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancersOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeLoadBalancersAsync(const DescribeLoadBalancersRequest& request, const DescribeLoadBalancersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeLoadBalancersOutcomeCallable BmlbClient::DescribeLoadBalancersCallable(const DescribeLoadBalancersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancersOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeTrafficMirrorListenersOutcome BmlbClient::DescribeTrafficMirrorListeners(const DescribeTrafficMirrorListenersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficMirrorListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficMirrorListenersResponse rsp = DescribeTrafficMirrorListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficMirrorListenersOutcome(rsp);
        else
            return DescribeTrafficMirrorListenersOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficMirrorListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeTrafficMirrorListenersAsync(const DescribeTrafficMirrorListenersRequest& request, const DescribeTrafficMirrorListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrafficMirrorListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeTrafficMirrorListenersOutcomeCallable BmlbClient::DescribeTrafficMirrorListenersCallable(const DescribeTrafficMirrorListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrafficMirrorListenersOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrafficMirrorListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeTrafficMirrorReceiverHealthStatusOutcome BmlbClient::DescribeTrafficMirrorReceiverHealthStatus(const DescribeTrafficMirrorReceiverHealthStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficMirrorReceiverHealthStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficMirrorReceiverHealthStatusResponse rsp = DescribeTrafficMirrorReceiverHealthStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficMirrorReceiverHealthStatusOutcome(rsp);
        else
            return DescribeTrafficMirrorReceiverHealthStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficMirrorReceiverHealthStatusOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeTrafficMirrorReceiverHealthStatusAsync(const DescribeTrafficMirrorReceiverHealthStatusRequest& request, const DescribeTrafficMirrorReceiverHealthStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrafficMirrorReceiverHealthStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeTrafficMirrorReceiverHealthStatusOutcomeCallable BmlbClient::DescribeTrafficMirrorReceiverHealthStatusCallable(const DescribeTrafficMirrorReceiverHealthStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrafficMirrorReceiverHealthStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrafficMirrorReceiverHealthStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeTrafficMirrorReceiversOutcome BmlbClient::DescribeTrafficMirrorReceivers(const DescribeTrafficMirrorReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficMirrorReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficMirrorReceiversResponse rsp = DescribeTrafficMirrorReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficMirrorReceiversOutcome(rsp);
        else
            return DescribeTrafficMirrorReceiversOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficMirrorReceiversOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeTrafficMirrorReceiversAsync(const DescribeTrafficMirrorReceiversRequest& request, const DescribeTrafficMirrorReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrafficMirrorReceivers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeTrafficMirrorReceiversOutcomeCallable BmlbClient::DescribeTrafficMirrorReceiversCallable(const DescribeTrafficMirrorReceiversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrafficMirrorReceiversOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrafficMirrorReceivers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::DescribeTrafficMirrorsOutcome BmlbClient::DescribeTrafficMirrors(const DescribeTrafficMirrorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficMirrors");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficMirrorsResponse rsp = DescribeTrafficMirrorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficMirrorsOutcome(rsp);
        else
            return DescribeTrafficMirrorsOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficMirrorsOutcome(outcome.GetError());
    }
}

void BmlbClient::DescribeTrafficMirrorsAsync(const DescribeTrafficMirrorsRequest& request, const DescribeTrafficMirrorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrafficMirrors(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::DescribeTrafficMirrorsOutcomeCallable BmlbClient::DescribeTrafficMirrorsCallable(const DescribeTrafficMirrorsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrafficMirrorsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrafficMirrors(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL4BackendPortOutcome BmlbClient::ModifyL4BackendPort(const ModifyL4BackendPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4BackendPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4BackendPortResponse rsp = ModifyL4BackendPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4BackendPortOutcome(rsp);
        else
            return ModifyL4BackendPortOutcome(o.GetError());
    }
    else
    {
        return ModifyL4BackendPortOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL4BackendPortAsync(const ModifyL4BackendPortRequest& request, const ModifyL4BackendPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4BackendPort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL4BackendPortOutcomeCallable BmlbClient::ModifyL4BackendPortCallable(const ModifyL4BackendPortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4BackendPortOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4BackendPort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL4BackendProbePortOutcome BmlbClient::ModifyL4BackendProbePort(const ModifyL4BackendProbePortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4BackendProbePort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4BackendProbePortResponse rsp = ModifyL4BackendProbePortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4BackendProbePortOutcome(rsp);
        else
            return ModifyL4BackendProbePortOutcome(o.GetError());
    }
    else
    {
        return ModifyL4BackendProbePortOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL4BackendProbePortAsync(const ModifyL4BackendProbePortRequest& request, const ModifyL4BackendProbePortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4BackendProbePort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL4BackendProbePortOutcomeCallable BmlbClient::ModifyL4BackendProbePortCallable(const ModifyL4BackendProbePortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4BackendProbePortOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4BackendProbePort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL4BackendWeightOutcome BmlbClient::ModifyL4BackendWeight(const ModifyL4BackendWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4BackendWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4BackendWeightResponse rsp = ModifyL4BackendWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4BackendWeightOutcome(rsp);
        else
            return ModifyL4BackendWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyL4BackendWeightOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL4BackendWeightAsync(const ModifyL4BackendWeightRequest& request, const ModifyL4BackendWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4BackendWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL4BackendWeightOutcomeCallable BmlbClient::ModifyL4BackendWeightCallable(const ModifyL4BackendWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4BackendWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4BackendWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL4ListenerOutcome BmlbClient::ModifyL4Listener(const ModifyL4ListenerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL4Listener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL4ListenerResponse rsp = ModifyL4ListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL4ListenerOutcome(rsp);
        else
            return ModifyL4ListenerOutcome(o.GetError());
    }
    else
    {
        return ModifyL4ListenerOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL4ListenerAsync(const ModifyL4ListenerRequest& request, const ModifyL4ListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL4Listener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL4ListenerOutcomeCallable BmlbClient::ModifyL4ListenerCallable(const ModifyL4ListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL4ListenerOutcome()>>(
        [this, request]()
        {
            return this->ModifyL4Listener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL7BackendPortOutcome BmlbClient::ModifyL7BackendPort(const ModifyL7BackendPortRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7BackendPort");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7BackendPortResponse rsp = ModifyL7BackendPortResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7BackendPortOutcome(rsp);
        else
            return ModifyL7BackendPortOutcome(o.GetError());
    }
    else
    {
        return ModifyL7BackendPortOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL7BackendPortAsync(const ModifyL7BackendPortRequest& request, const ModifyL7BackendPortAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7BackendPort(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL7BackendPortOutcomeCallable BmlbClient::ModifyL7BackendPortCallable(const ModifyL7BackendPortRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7BackendPortOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7BackendPort(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL7BackendWeightOutcome BmlbClient::ModifyL7BackendWeight(const ModifyL7BackendWeightRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7BackendWeight");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7BackendWeightResponse rsp = ModifyL7BackendWeightResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7BackendWeightOutcome(rsp);
        else
            return ModifyL7BackendWeightOutcome(o.GetError());
    }
    else
    {
        return ModifyL7BackendWeightOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL7BackendWeightAsync(const ModifyL7BackendWeightRequest& request, const ModifyL7BackendWeightAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7BackendWeight(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL7BackendWeightOutcomeCallable BmlbClient::ModifyL7BackendWeightCallable(const ModifyL7BackendWeightRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7BackendWeightOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7BackendWeight(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL7ListenerOutcome BmlbClient::ModifyL7Listener(const ModifyL7ListenerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7Listener");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7ListenerResponse rsp = ModifyL7ListenerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7ListenerOutcome(rsp);
        else
            return ModifyL7ListenerOutcome(o.GetError());
    }
    else
    {
        return ModifyL7ListenerOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL7ListenerAsync(const ModifyL7ListenerRequest& request, const ModifyL7ListenerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7Listener(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL7ListenerOutcomeCallable BmlbClient::ModifyL7ListenerCallable(const ModifyL7ListenerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7ListenerOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7Listener(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyL7LocationsOutcome BmlbClient::ModifyL7Locations(const ModifyL7LocationsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyL7Locations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyL7LocationsResponse rsp = ModifyL7LocationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyL7LocationsOutcome(rsp);
        else
            return ModifyL7LocationsOutcome(o.GetError());
    }
    else
    {
        return ModifyL7LocationsOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyL7LocationsAsync(const ModifyL7LocationsRequest& request, const ModifyL7LocationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyL7Locations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyL7LocationsOutcomeCallable BmlbClient::ModifyL7LocationsCallable(const ModifyL7LocationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyL7LocationsOutcome()>>(
        [this, request]()
        {
            return this->ModifyL7Locations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyLoadBalancerOutcome BmlbClient::ModifyLoadBalancer(const ModifyLoadBalancerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerResponse rsp = ModifyLoadBalancerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerOutcome(rsp);
        else
            return ModifyLoadBalancerOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyLoadBalancerAsync(const ModifyLoadBalancerRequest& request, const ModifyLoadBalancerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyLoadBalancerOutcomeCallable BmlbClient::ModifyLoadBalancerCallable(const ModifyLoadBalancerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ModifyLoadBalancerChargeModeOutcome BmlbClient::ModifyLoadBalancerChargeMode(const ModifyLoadBalancerChargeModeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancerChargeMode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancerChargeModeResponse rsp = ModifyLoadBalancerChargeModeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancerChargeModeOutcome(rsp);
        else
            return ModifyLoadBalancerChargeModeOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancerChargeModeOutcome(outcome.GetError());
    }
}

void BmlbClient::ModifyLoadBalancerChargeModeAsync(const ModifyLoadBalancerChargeModeRequest& request, const ModifyLoadBalancerChargeModeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancerChargeMode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ModifyLoadBalancerChargeModeOutcomeCallable BmlbClient::ModifyLoadBalancerChargeModeCallable(const ModifyLoadBalancerChargeModeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancerChargeModeOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancerChargeMode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::ReplaceCertOutcome BmlbClient::ReplaceCert(const ReplaceCertRequest &request)
{
    auto outcome = MakeRequest(request, "ReplaceCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReplaceCertResponse rsp = ReplaceCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReplaceCertOutcome(rsp);
        else
            return ReplaceCertOutcome(o.GetError());
    }
    else
    {
        return ReplaceCertOutcome(outcome.GetError());
    }
}

void BmlbClient::ReplaceCertAsync(const ReplaceCertRequest& request, const ReplaceCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReplaceCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::ReplaceCertOutcomeCallable BmlbClient::ReplaceCertCallable(const ReplaceCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReplaceCertOutcome()>>(
        [this, request]()
        {
            return this->ReplaceCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::SetTrafficMirrorAliasOutcome BmlbClient::SetTrafficMirrorAlias(const SetTrafficMirrorAliasRequest &request)
{
    auto outcome = MakeRequest(request, "SetTrafficMirrorAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTrafficMirrorAliasResponse rsp = SetTrafficMirrorAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTrafficMirrorAliasOutcome(rsp);
        else
            return SetTrafficMirrorAliasOutcome(o.GetError());
    }
    else
    {
        return SetTrafficMirrorAliasOutcome(outcome.GetError());
    }
}

void BmlbClient::SetTrafficMirrorAliasAsync(const SetTrafficMirrorAliasRequest& request, const SetTrafficMirrorAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTrafficMirrorAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::SetTrafficMirrorAliasOutcomeCallable BmlbClient::SetTrafficMirrorAliasCallable(const SetTrafficMirrorAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTrafficMirrorAliasOutcome()>>(
        [this, request]()
        {
            return this->SetTrafficMirrorAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::SetTrafficMirrorHealthSwitchOutcome BmlbClient::SetTrafficMirrorHealthSwitch(const SetTrafficMirrorHealthSwitchRequest &request)
{
    auto outcome = MakeRequest(request, "SetTrafficMirrorHealthSwitch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetTrafficMirrorHealthSwitchResponse rsp = SetTrafficMirrorHealthSwitchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetTrafficMirrorHealthSwitchOutcome(rsp);
        else
            return SetTrafficMirrorHealthSwitchOutcome(o.GetError());
    }
    else
    {
        return SetTrafficMirrorHealthSwitchOutcome(outcome.GetError());
    }
}

void BmlbClient::SetTrafficMirrorHealthSwitchAsync(const SetTrafficMirrorHealthSwitchRequest& request, const SetTrafficMirrorHealthSwitchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetTrafficMirrorHealthSwitch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::SetTrafficMirrorHealthSwitchOutcomeCallable BmlbClient::SetTrafficMirrorHealthSwitchCallable(const SetTrafficMirrorHealthSwitchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetTrafficMirrorHealthSwitchOutcome()>>(
        [this, request]()
        {
            return this->SetTrafficMirrorHealthSwitch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::UnbindL4BackendsOutcome BmlbClient::UnbindL4Backends(const UnbindL4BackendsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindL4Backends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindL4BackendsResponse rsp = UnbindL4BackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindL4BackendsOutcome(rsp);
        else
            return UnbindL4BackendsOutcome(o.GetError());
    }
    else
    {
        return UnbindL4BackendsOutcome(outcome.GetError());
    }
}

void BmlbClient::UnbindL4BackendsAsync(const UnbindL4BackendsRequest& request, const UnbindL4BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindL4Backends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::UnbindL4BackendsOutcomeCallable BmlbClient::UnbindL4BackendsCallable(const UnbindL4BackendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindL4BackendsOutcome()>>(
        [this, request]()
        {
            return this->UnbindL4Backends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::UnbindL7BackendsOutcome BmlbClient::UnbindL7Backends(const UnbindL7BackendsRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindL7Backends");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindL7BackendsResponse rsp = UnbindL7BackendsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindL7BackendsOutcome(rsp);
        else
            return UnbindL7BackendsOutcome(o.GetError());
    }
    else
    {
        return UnbindL7BackendsOutcome(outcome.GetError());
    }
}

void BmlbClient::UnbindL7BackendsAsync(const UnbindL7BackendsRequest& request, const UnbindL7BackendsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindL7Backends(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::UnbindL7BackendsOutcomeCallable BmlbClient::UnbindL7BackendsCallable(const UnbindL7BackendsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindL7BackendsOutcome()>>(
        [this, request]()
        {
            return this->UnbindL7Backends(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::UnbindTrafficMirrorListenersOutcome BmlbClient::UnbindTrafficMirrorListeners(const UnbindTrafficMirrorListenersRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindTrafficMirrorListeners");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindTrafficMirrorListenersResponse rsp = UnbindTrafficMirrorListenersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindTrafficMirrorListenersOutcome(rsp);
        else
            return UnbindTrafficMirrorListenersOutcome(o.GetError());
    }
    else
    {
        return UnbindTrafficMirrorListenersOutcome(outcome.GetError());
    }
}

void BmlbClient::UnbindTrafficMirrorListenersAsync(const UnbindTrafficMirrorListenersRequest& request, const UnbindTrafficMirrorListenersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindTrafficMirrorListeners(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::UnbindTrafficMirrorListenersOutcomeCallable BmlbClient::UnbindTrafficMirrorListenersCallable(const UnbindTrafficMirrorListenersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindTrafficMirrorListenersOutcome()>>(
        [this, request]()
        {
            return this->UnbindTrafficMirrorListeners(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::UnbindTrafficMirrorReceiversOutcome BmlbClient::UnbindTrafficMirrorReceivers(const UnbindTrafficMirrorReceiversRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindTrafficMirrorReceivers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindTrafficMirrorReceiversResponse rsp = UnbindTrafficMirrorReceiversResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindTrafficMirrorReceiversOutcome(rsp);
        else
            return UnbindTrafficMirrorReceiversOutcome(o.GetError());
    }
    else
    {
        return UnbindTrafficMirrorReceiversOutcome(outcome.GetError());
    }
}

void BmlbClient::UnbindTrafficMirrorReceiversAsync(const UnbindTrafficMirrorReceiversRequest& request, const UnbindTrafficMirrorReceiversAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindTrafficMirrorReceivers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::UnbindTrafficMirrorReceiversOutcomeCallable BmlbClient::UnbindTrafficMirrorReceiversCallable(const UnbindTrafficMirrorReceiversRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindTrafficMirrorReceiversOutcome()>>(
        [this, request]()
        {
            return this->UnbindTrafficMirrorReceivers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmlbClient::UploadCertOutcome BmlbClient::UploadCert(const UploadCertRequest &request)
{
    auto outcome = MakeRequest(request, "UploadCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadCertResponse rsp = UploadCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadCertOutcome(rsp);
        else
            return UploadCertOutcome(o.GetError());
    }
    else
    {
        return UploadCertOutcome(outcome.GetError());
    }
}

void BmlbClient::UploadCertAsync(const UploadCertRequest& request, const UploadCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadCert(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmlbClient::UploadCertOutcomeCallable BmlbClient::UploadCertCallable(const UploadCertRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadCertOutcome()>>(
        [this, request]()
        {
            return this->UploadCert(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

