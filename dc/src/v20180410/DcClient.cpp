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

#include <tencentcloud/dc/v20180410/DcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dc::V20180410;
using namespace TencentCloud::Dc::V20180410::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-10";
    const string ENDPOINT = "dc.tencentcloudapi.com";
}

DcClient::DcClient(const Credential &credential, const string &region) :
    DcClient(credential, region, ClientProfile())
{
}

DcClient::DcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DcClient::AcceptDirectConnectTunnelOutcome DcClient::AcceptDirectConnectTunnel(const AcceptDirectConnectTunnelRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptDirectConnectTunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptDirectConnectTunnelResponse rsp = AcceptDirectConnectTunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptDirectConnectTunnelOutcome(rsp);
        else
            return AcceptDirectConnectTunnelOutcome(o.GetError());
    }
    else
    {
        return AcceptDirectConnectTunnelOutcome(outcome.GetError());
    }
}

void DcClient::AcceptDirectConnectTunnelAsync(const AcceptDirectConnectTunnelRequest& request, const AcceptDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcceptDirectConnectTunnel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::AcceptDirectConnectTunnelOutcomeCallable DcClient::AcceptDirectConnectTunnelCallable(const AcceptDirectConnectTunnelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcceptDirectConnectTunnelOutcome()>>(
        [this, request]()
        {
            return this->AcceptDirectConnectTunnel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::CreateDirectConnectOutcome DcClient::CreateDirectConnect(const CreateDirectConnectRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDirectConnect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDirectConnectResponse rsp = CreateDirectConnectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDirectConnectOutcome(rsp);
        else
            return CreateDirectConnectOutcome(o.GetError());
    }
    else
    {
        return CreateDirectConnectOutcome(outcome.GetError());
    }
}

void DcClient::CreateDirectConnectAsync(const CreateDirectConnectRequest& request, const CreateDirectConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDirectConnect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::CreateDirectConnectOutcomeCallable DcClient::CreateDirectConnectCallable(const CreateDirectConnectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDirectConnectOutcome()>>(
        [this, request]()
        {
            return this->CreateDirectConnect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::CreateDirectConnectTunnelOutcome DcClient::CreateDirectConnectTunnel(const CreateDirectConnectTunnelRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDirectConnectTunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDirectConnectTunnelResponse rsp = CreateDirectConnectTunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDirectConnectTunnelOutcome(rsp);
        else
            return CreateDirectConnectTunnelOutcome(o.GetError());
    }
    else
    {
        return CreateDirectConnectTunnelOutcome(outcome.GetError());
    }
}

void DcClient::CreateDirectConnectTunnelAsync(const CreateDirectConnectTunnelRequest& request, const CreateDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDirectConnectTunnel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::CreateDirectConnectTunnelOutcomeCallable DcClient::CreateDirectConnectTunnelCallable(const CreateDirectConnectTunnelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDirectConnectTunnelOutcome()>>(
        [this, request]()
        {
            return this->CreateDirectConnectTunnel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::DeleteDirectConnectOutcome DcClient::DeleteDirectConnect(const DeleteDirectConnectRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDirectConnect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDirectConnectResponse rsp = DeleteDirectConnectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDirectConnectOutcome(rsp);
        else
            return DeleteDirectConnectOutcome(o.GetError());
    }
    else
    {
        return DeleteDirectConnectOutcome(outcome.GetError());
    }
}

void DcClient::DeleteDirectConnectAsync(const DeleteDirectConnectRequest& request, const DeleteDirectConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDirectConnect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::DeleteDirectConnectOutcomeCallable DcClient::DeleteDirectConnectCallable(const DeleteDirectConnectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDirectConnectOutcome()>>(
        [this, request]()
        {
            return this->DeleteDirectConnect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::DeleteDirectConnectTunnelOutcome DcClient::DeleteDirectConnectTunnel(const DeleteDirectConnectTunnelRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDirectConnectTunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDirectConnectTunnelResponse rsp = DeleteDirectConnectTunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDirectConnectTunnelOutcome(rsp);
        else
            return DeleteDirectConnectTunnelOutcome(o.GetError());
    }
    else
    {
        return DeleteDirectConnectTunnelOutcome(outcome.GetError());
    }
}

void DcClient::DeleteDirectConnectTunnelAsync(const DeleteDirectConnectTunnelRequest& request, const DeleteDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDirectConnectTunnel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::DeleteDirectConnectTunnelOutcomeCallable DcClient::DeleteDirectConnectTunnelCallable(const DeleteDirectConnectTunnelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDirectConnectTunnelOutcome()>>(
        [this, request]()
        {
            return this->DeleteDirectConnectTunnel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::DescribeAccessPointsOutcome DcClient::DescribeAccessPoints(const DescribeAccessPointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessPoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessPointsResponse rsp = DescribeAccessPointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessPointsOutcome(rsp);
        else
            return DescribeAccessPointsOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessPointsOutcome(outcome.GetError());
    }
}

void DcClient::DescribeAccessPointsAsync(const DescribeAccessPointsRequest& request, const DescribeAccessPointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAccessPoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::DescribeAccessPointsOutcomeCallable DcClient::DescribeAccessPointsCallable(const DescribeAccessPointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAccessPointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAccessPoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::DescribeDirectConnectTunnelsOutcome DcClient::DescribeDirectConnectTunnels(const DescribeDirectConnectTunnelsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectTunnels");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectTunnelsResponse rsp = DescribeDirectConnectTunnelsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectTunnelsOutcome(rsp);
        else
            return DescribeDirectConnectTunnelsOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectTunnelsOutcome(outcome.GetError());
    }
}

void DcClient::DescribeDirectConnectTunnelsAsync(const DescribeDirectConnectTunnelsRequest& request, const DescribeDirectConnectTunnelsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDirectConnectTunnels(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::DescribeDirectConnectTunnelsOutcomeCallable DcClient::DescribeDirectConnectTunnelsCallable(const DescribeDirectConnectTunnelsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDirectConnectTunnelsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDirectConnectTunnels(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::DescribeDirectConnectsOutcome DcClient::DescribeDirectConnects(const DescribeDirectConnectsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnects");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectsResponse rsp = DescribeDirectConnectsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectsOutcome(rsp);
        else
            return DescribeDirectConnectsOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectsOutcome(outcome.GetError());
    }
}

void DcClient::DescribeDirectConnectsAsync(const DescribeDirectConnectsRequest& request, const DescribeDirectConnectsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDirectConnects(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::DescribeDirectConnectsOutcomeCallable DcClient::DescribeDirectConnectsCallable(const DescribeDirectConnectsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDirectConnectsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDirectConnects(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::ModifyDirectConnectAttributeOutcome DcClient::ModifyDirectConnectAttribute(const ModifyDirectConnectAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDirectConnectAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDirectConnectAttributeResponse rsp = ModifyDirectConnectAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDirectConnectAttributeOutcome(rsp);
        else
            return ModifyDirectConnectAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDirectConnectAttributeOutcome(outcome.GetError());
    }
}

void DcClient::ModifyDirectConnectAttributeAsync(const ModifyDirectConnectAttributeRequest& request, const ModifyDirectConnectAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDirectConnectAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::ModifyDirectConnectAttributeOutcomeCallable DcClient::ModifyDirectConnectAttributeCallable(const ModifyDirectConnectAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDirectConnectAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDirectConnectAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::ModifyDirectConnectTunnelAttributeOutcome DcClient::ModifyDirectConnectTunnelAttribute(const ModifyDirectConnectTunnelAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDirectConnectTunnelAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDirectConnectTunnelAttributeResponse rsp = ModifyDirectConnectTunnelAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDirectConnectTunnelAttributeOutcome(rsp);
        else
            return ModifyDirectConnectTunnelAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyDirectConnectTunnelAttributeOutcome(outcome.GetError());
    }
}

void DcClient::ModifyDirectConnectTunnelAttributeAsync(const ModifyDirectConnectTunnelAttributeRequest& request, const ModifyDirectConnectTunnelAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDirectConnectTunnelAttribute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::ModifyDirectConnectTunnelAttributeOutcomeCallable DcClient::ModifyDirectConnectTunnelAttributeCallable(const ModifyDirectConnectTunnelAttributeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDirectConnectTunnelAttributeOutcome()>>(
        [this, request]()
        {
            return this->ModifyDirectConnectTunnelAttribute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DcClient::RejectDirectConnectTunnelOutcome DcClient::RejectDirectConnectTunnel(const RejectDirectConnectTunnelRequest &request)
{
    auto outcome = MakeRequest(request, "RejectDirectConnectTunnel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RejectDirectConnectTunnelResponse rsp = RejectDirectConnectTunnelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RejectDirectConnectTunnelOutcome(rsp);
        else
            return RejectDirectConnectTunnelOutcome(o.GetError());
    }
    else
    {
        return RejectDirectConnectTunnelOutcome(outcome.GetError());
    }
}

void DcClient::RejectDirectConnectTunnelAsync(const RejectDirectConnectTunnelRequest& request, const RejectDirectConnectTunnelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RejectDirectConnectTunnel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DcClient::RejectDirectConnectTunnelOutcomeCallable DcClient::RejectDirectConnectTunnelCallable(const RejectDirectConnectTunnelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RejectDirectConnectTunnelOutcome()>>(
        [this, request]()
        {
            return this->RejectDirectConnectTunnel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

