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

#include <tencentcloud/trabbit/v20230418/TrabbitClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trabbit::V20230418;
using namespace TencentCloud::Trabbit::V20230418::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-04-18";
    const string ENDPOINT = "trabbit.tencentcloudapi.com";
}

TrabbitClient::TrabbitClient(const Credential &credential, const string &region) :
    TrabbitClient(credential, region, ClientProfile())
{
}

TrabbitClient::TrabbitClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrabbitClient::CreateRabbitMQServerlessBindingOutcome TrabbitClient::CreateRabbitMQServerlessBinding(const CreateRabbitMQServerlessBindingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQServerlessBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQServerlessBindingResponse rsp = CreateRabbitMQServerlessBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQServerlessBindingOutcome(rsp);
        else
            return CreateRabbitMQServerlessBindingOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQServerlessBindingOutcome(outcome.GetError());
    }
}

void TrabbitClient::CreateRabbitMQServerlessBindingAsync(const CreateRabbitMQServerlessBindingRequest& request, const CreateRabbitMQServerlessBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQServerlessBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::CreateRabbitMQServerlessBindingOutcomeCallable TrabbitClient::CreateRabbitMQServerlessBindingCallable(const CreateRabbitMQServerlessBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQServerlessBindingOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQServerlessBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::CreateRabbitMQServerlessExchangeOutcome TrabbitClient::CreateRabbitMQServerlessExchange(const CreateRabbitMQServerlessExchangeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQServerlessExchange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQServerlessExchangeResponse rsp = CreateRabbitMQServerlessExchangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQServerlessExchangeOutcome(rsp);
        else
            return CreateRabbitMQServerlessExchangeOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQServerlessExchangeOutcome(outcome.GetError());
    }
}

void TrabbitClient::CreateRabbitMQServerlessExchangeAsync(const CreateRabbitMQServerlessExchangeRequest& request, const CreateRabbitMQServerlessExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQServerlessExchange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::CreateRabbitMQServerlessExchangeOutcomeCallable TrabbitClient::CreateRabbitMQServerlessExchangeCallable(const CreateRabbitMQServerlessExchangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQServerlessExchangeOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQServerlessExchange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::CreateRabbitMQServerlessQueueOutcome TrabbitClient::CreateRabbitMQServerlessQueue(const CreateRabbitMQServerlessQueueRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQServerlessQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQServerlessQueueResponse rsp = CreateRabbitMQServerlessQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQServerlessQueueOutcome(rsp);
        else
            return CreateRabbitMQServerlessQueueOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQServerlessQueueOutcome(outcome.GetError());
    }
}

void TrabbitClient::CreateRabbitMQServerlessQueueAsync(const CreateRabbitMQServerlessQueueRequest& request, const CreateRabbitMQServerlessQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQServerlessQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::CreateRabbitMQServerlessQueueOutcomeCallable TrabbitClient::CreateRabbitMQServerlessQueueCallable(const CreateRabbitMQServerlessQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQServerlessQueueOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQServerlessQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::CreateRabbitMQServerlessUserOutcome TrabbitClient::CreateRabbitMQServerlessUser(const CreateRabbitMQServerlessUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQServerlessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQServerlessUserResponse rsp = CreateRabbitMQServerlessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQServerlessUserOutcome(rsp);
        else
            return CreateRabbitMQServerlessUserOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQServerlessUserOutcome(outcome.GetError());
    }
}

void TrabbitClient::CreateRabbitMQServerlessUserAsync(const CreateRabbitMQServerlessUserRequest& request, const CreateRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQServerlessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::CreateRabbitMQServerlessUserOutcomeCallable TrabbitClient::CreateRabbitMQServerlessUserCallable(const CreateRabbitMQServerlessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQServerlessUserOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQServerlessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::CreateRabbitMQServerlessVirtualHostOutcome TrabbitClient::CreateRabbitMQServerlessVirtualHost(const CreateRabbitMQServerlessVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRabbitMQServerlessVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRabbitMQServerlessVirtualHostResponse rsp = CreateRabbitMQServerlessVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRabbitMQServerlessVirtualHostOutcome(rsp);
        else
            return CreateRabbitMQServerlessVirtualHostOutcome(o.GetError());
    }
    else
    {
        return CreateRabbitMQServerlessVirtualHostOutcome(outcome.GetError());
    }
}

void TrabbitClient::CreateRabbitMQServerlessVirtualHostAsync(const CreateRabbitMQServerlessVirtualHostRequest& request, const CreateRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRabbitMQServerlessVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::CreateRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::CreateRabbitMQServerlessVirtualHostCallable(const CreateRabbitMQServerlessVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRabbitMQServerlessVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->CreateRabbitMQServerlessVirtualHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DeleteRabbitMQServerlessBindingOutcome TrabbitClient::DeleteRabbitMQServerlessBinding(const DeleteRabbitMQServerlessBindingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQServerlessBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQServerlessBindingResponse rsp = DeleteRabbitMQServerlessBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQServerlessBindingOutcome(rsp);
        else
            return DeleteRabbitMQServerlessBindingOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQServerlessBindingOutcome(outcome.GetError());
    }
}

void TrabbitClient::DeleteRabbitMQServerlessBindingAsync(const DeleteRabbitMQServerlessBindingRequest& request, const DeleteRabbitMQServerlessBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQServerlessBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DeleteRabbitMQServerlessBindingOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessBindingCallable(const DeleteRabbitMQServerlessBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQServerlessBindingOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQServerlessBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DeleteRabbitMQServerlessExchangeOutcome TrabbitClient::DeleteRabbitMQServerlessExchange(const DeleteRabbitMQServerlessExchangeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQServerlessExchange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQServerlessExchangeResponse rsp = DeleteRabbitMQServerlessExchangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQServerlessExchangeOutcome(rsp);
        else
            return DeleteRabbitMQServerlessExchangeOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQServerlessExchangeOutcome(outcome.GetError());
    }
}

void TrabbitClient::DeleteRabbitMQServerlessExchangeAsync(const DeleteRabbitMQServerlessExchangeRequest& request, const DeleteRabbitMQServerlessExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQServerlessExchange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DeleteRabbitMQServerlessExchangeOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessExchangeCallable(const DeleteRabbitMQServerlessExchangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQServerlessExchangeOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQServerlessExchange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DeleteRabbitMQServerlessPermissionOutcome TrabbitClient::DeleteRabbitMQServerlessPermission(const DeleteRabbitMQServerlessPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQServerlessPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQServerlessPermissionResponse rsp = DeleteRabbitMQServerlessPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQServerlessPermissionOutcome(rsp);
        else
            return DeleteRabbitMQServerlessPermissionOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQServerlessPermissionOutcome(outcome.GetError());
    }
}

void TrabbitClient::DeleteRabbitMQServerlessPermissionAsync(const DeleteRabbitMQServerlessPermissionRequest& request, const DeleteRabbitMQServerlessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQServerlessPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DeleteRabbitMQServerlessPermissionOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessPermissionCallable(const DeleteRabbitMQServerlessPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQServerlessPermissionOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQServerlessPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DeleteRabbitMQServerlessQueueOutcome TrabbitClient::DeleteRabbitMQServerlessQueue(const DeleteRabbitMQServerlessQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQServerlessQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQServerlessQueueResponse rsp = DeleteRabbitMQServerlessQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQServerlessQueueOutcome(rsp);
        else
            return DeleteRabbitMQServerlessQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQServerlessQueueOutcome(outcome.GetError());
    }
}

void TrabbitClient::DeleteRabbitMQServerlessQueueAsync(const DeleteRabbitMQServerlessQueueRequest& request, const DeleteRabbitMQServerlessQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQServerlessQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DeleteRabbitMQServerlessQueueOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessQueueCallable(const DeleteRabbitMQServerlessQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQServerlessQueueOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQServerlessQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DeleteRabbitMQServerlessUserOutcome TrabbitClient::DeleteRabbitMQServerlessUser(const DeleteRabbitMQServerlessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQServerlessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQServerlessUserResponse rsp = DeleteRabbitMQServerlessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQServerlessUserOutcome(rsp);
        else
            return DeleteRabbitMQServerlessUserOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQServerlessUserOutcome(outcome.GetError());
    }
}

void TrabbitClient::DeleteRabbitMQServerlessUserAsync(const DeleteRabbitMQServerlessUserRequest& request, const DeleteRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQServerlessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DeleteRabbitMQServerlessUserOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessUserCallable(const DeleteRabbitMQServerlessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQServerlessUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQServerlessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DeleteRabbitMQServerlessVirtualHostOutcome TrabbitClient::DeleteRabbitMQServerlessVirtualHost(const DeleteRabbitMQServerlessVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRabbitMQServerlessVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRabbitMQServerlessVirtualHostResponse rsp = DeleteRabbitMQServerlessVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRabbitMQServerlessVirtualHostOutcome(rsp);
        else
            return DeleteRabbitMQServerlessVirtualHostOutcome(o.GetError());
    }
    else
    {
        return DeleteRabbitMQServerlessVirtualHostOutcome(outcome.GetError());
    }
}

void TrabbitClient::DeleteRabbitMQServerlessVirtualHostAsync(const DeleteRabbitMQServerlessVirtualHostRequest& request, const DeleteRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRabbitMQServerlessVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DeleteRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessVirtualHostCallable(const DeleteRabbitMQServerlessVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRabbitMQServerlessVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteRabbitMQServerlessVirtualHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessBindingsOutcome TrabbitClient::DescribeRabbitMQServerlessBindings(const DescribeRabbitMQServerlessBindingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessBindings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessBindingsResponse rsp = DescribeRabbitMQServerlessBindingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessBindingsOutcome(rsp);
        else
            return DescribeRabbitMQServerlessBindingsOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessBindingsOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessBindingsAsync(const DescribeRabbitMQServerlessBindingsRequest& request, const DescribeRabbitMQServerlessBindingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessBindings(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessBindingsOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessBindingsCallable(const DescribeRabbitMQServerlessBindingsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessBindingsOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessBindings(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessConnectionOutcome TrabbitClient::DescribeRabbitMQServerlessConnection(const DescribeRabbitMQServerlessConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessConnectionResponse rsp = DescribeRabbitMQServerlessConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessConnectionOutcome(rsp);
        else
            return DescribeRabbitMQServerlessConnectionOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessConnectionOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessConnectionAsync(const DescribeRabbitMQServerlessConnectionRequest& request, const DescribeRabbitMQServerlessConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessConnectionOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessConnectionCallable(const DescribeRabbitMQServerlessConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessConnectionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessConsumersOutcome TrabbitClient::DescribeRabbitMQServerlessConsumers(const DescribeRabbitMQServerlessConsumersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessConsumers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessConsumersResponse rsp = DescribeRabbitMQServerlessConsumersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessConsumersOutcome(rsp);
        else
            return DescribeRabbitMQServerlessConsumersOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessConsumersOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessConsumersAsync(const DescribeRabbitMQServerlessConsumersRequest& request, const DescribeRabbitMQServerlessConsumersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessConsumers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessConsumersOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessConsumersCallable(const DescribeRabbitMQServerlessConsumersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessConsumersOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessConsumers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessExchangeDetailOutcome TrabbitClient::DescribeRabbitMQServerlessExchangeDetail(const DescribeRabbitMQServerlessExchangeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessExchangeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessExchangeDetailResponse rsp = DescribeRabbitMQServerlessExchangeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessExchangeDetailOutcome(rsp);
        else
            return DescribeRabbitMQServerlessExchangeDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessExchangeDetailOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessExchangeDetailAsync(const DescribeRabbitMQServerlessExchangeDetailRequest& request, const DescribeRabbitMQServerlessExchangeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessExchangeDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessExchangeDetailOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessExchangeDetailCallable(const DescribeRabbitMQServerlessExchangeDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessExchangeDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessExchangeDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessExchangesOutcome TrabbitClient::DescribeRabbitMQServerlessExchanges(const DescribeRabbitMQServerlessExchangesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessExchanges");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessExchangesResponse rsp = DescribeRabbitMQServerlessExchangesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessExchangesOutcome(rsp);
        else
            return DescribeRabbitMQServerlessExchangesOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessExchangesOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessExchangesAsync(const DescribeRabbitMQServerlessExchangesRequest& request, const DescribeRabbitMQServerlessExchangesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessExchanges(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessExchangesOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessExchangesCallable(const DescribeRabbitMQServerlessExchangesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessExchangesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessExchanges(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessInstanceOutcome TrabbitClient::DescribeRabbitMQServerlessInstance(const DescribeRabbitMQServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessInstanceResponse rsp = DescribeRabbitMQServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessInstanceOutcome(rsp);
        else
            return DescribeRabbitMQServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessInstanceOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessInstanceAsync(const DescribeRabbitMQServerlessInstanceRequest& request, const DescribeRabbitMQServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessInstanceOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessInstanceCallable(const DescribeRabbitMQServerlessInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessPermissionOutcome TrabbitClient::DescribeRabbitMQServerlessPermission(const DescribeRabbitMQServerlessPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessPermissionResponse rsp = DescribeRabbitMQServerlessPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessPermissionOutcome(rsp);
        else
            return DescribeRabbitMQServerlessPermissionOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessPermissionOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessPermissionAsync(const DescribeRabbitMQServerlessPermissionRequest& request, const DescribeRabbitMQServerlessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessPermissionOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessPermissionCallable(const DescribeRabbitMQServerlessPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessPermissionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessQueueDetailOutcome TrabbitClient::DescribeRabbitMQServerlessQueueDetail(const DescribeRabbitMQServerlessQueueDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessQueueDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessQueueDetailResponse rsp = DescribeRabbitMQServerlessQueueDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessQueueDetailOutcome(rsp);
        else
            return DescribeRabbitMQServerlessQueueDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessQueueDetailOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessQueueDetailAsync(const DescribeRabbitMQServerlessQueueDetailRequest& request, const DescribeRabbitMQServerlessQueueDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessQueueDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessQueueDetailOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessQueueDetailCallable(const DescribeRabbitMQServerlessQueueDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessQueueDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessQueueDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessQueuesOutcome TrabbitClient::DescribeRabbitMQServerlessQueues(const DescribeRabbitMQServerlessQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessQueuesResponse rsp = DescribeRabbitMQServerlessQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessQueuesOutcome(rsp);
        else
            return DescribeRabbitMQServerlessQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessQueuesOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessQueuesAsync(const DescribeRabbitMQServerlessQueuesRequest& request, const DescribeRabbitMQServerlessQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessQueuesOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessQueuesCallable(const DescribeRabbitMQServerlessQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessUserOutcome TrabbitClient::DescribeRabbitMQServerlessUser(const DescribeRabbitMQServerlessUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessUserResponse rsp = DescribeRabbitMQServerlessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessUserOutcome(rsp);
        else
            return DescribeRabbitMQServerlessUserOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessUserOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessUserAsync(const DescribeRabbitMQServerlessUserRequest& request, const DescribeRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessUserOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessUserCallable(const DescribeRabbitMQServerlessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::DescribeRabbitMQServerlessVirtualHostOutcome TrabbitClient::DescribeRabbitMQServerlessVirtualHost(const DescribeRabbitMQServerlessVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRabbitMQServerlessVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRabbitMQServerlessVirtualHostResponse rsp = DescribeRabbitMQServerlessVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRabbitMQServerlessVirtualHostOutcome(rsp);
        else
            return DescribeRabbitMQServerlessVirtualHostOutcome(o.GetError());
    }
    else
    {
        return DescribeRabbitMQServerlessVirtualHostOutcome(outcome.GetError());
    }
}

void TrabbitClient::DescribeRabbitMQServerlessVirtualHostAsync(const DescribeRabbitMQServerlessVirtualHostRequest& request, const DescribeRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRabbitMQServerlessVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::DescribeRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessVirtualHostCallable(const DescribeRabbitMQServerlessVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRabbitMQServerlessVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->DescribeRabbitMQServerlessVirtualHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ListRabbitMQServerlessInstancesOutcome TrabbitClient::ListRabbitMQServerlessInstances(const ListRabbitMQServerlessInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ListRabbitMQServerlessInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListRabbitMQServerlessInstancesResponse rsp = ListRabbitMQServerlessInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListRabbitMQServerlessInstancesOutcome(rsp);
        else
            return ListRabbitMQServerlessInstancesOutcome(o.GetError());
    }
    else
    {
        return ListRabbitMQServerlessInstancesOutcome(outcome.GetError());
    }
}

void TrabbitClient::ListRabbitMQServerlessInstancesAsync(const ListRabbitMQServerlessInstancesRequest& request, const ListRabbitMQServerlessInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListRabbitMQServerlessInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ListRabbitMQServerlessInstancesOutcomeCallable TrabbitClient::ListRabbitMQServerlessInstancesCallable(const ListRabbitMQServerlessInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListRabbitMQServerlessInstancesOutcome()>>(
        [this, request]()
        {
            return this->ListRabbitMQServerlessInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ModifyRabbitMQServerlessExchangeOutcome TrabbitClient::ModifyRabbitMQServerlessExchange(const ModifyRabbitMQServerlessExchangeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQServerlessExchange");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQServerlessExchangeResponse rsp = ModifyRabbitMQServerlessExchangeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQServerlessExchangeOutcome(rsp);
        else
            return ModifyRabbitMQServerlessExchangeOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQServerlessExchangeOutcome(outcome.GetError());
    }
}

void TrabbitClient::ModifyRabbitMQServerlessExchangeAsync(const ModifyRabbitMQServerlessExchangeRequest& request, const ModifyRabbitMQServerlessExchangeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQServerlessExchange(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ModifyRabbitMQServerlessExchangeOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessExchangeCallable(const ModifyRabbitMQServerlessExchangeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQServerlessExchangeOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQServerlessExchange(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ModifyRabbitMQServerlessInstanceOutcome TrabbitClient::ModifyRabbitMQServerlessInstance(const ModifyRabbitMQServerlessInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQServerlessInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQServerlessInstanceResponse rsp = ModifyRabbitMQServerlessInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQServerlessInstanceOutcome(rsp);
        else
            return ModifyRabbitMQServerlessInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQServerlessInstanceOutcome(outcome.GetError());
    }
}

void TrabbitClient::ModifyRabbitMQServerlessInstanceAsync(const ModifyRabbitMQServerlessInstanceRequest& request, const ModifyRabbitMQServerlessInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQServerlessInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ModifyRabbitMQServerlessInstanceOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessInstanceCallable(const ModifyRabbitMQServerlessInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQServerlessInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQServerlessInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ModifyRabbitMQServerlessPermissionOutcome TrabbitClient::ModifyRabbitMQServerlessPermission(const ModifyRabbitMQServerlessPermissionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQServerlessPermission");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQServerlessPermissionResponse rsp = ModifyRabbitMQServerlessPermissionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQServerlessPermissionOutcome(rsp);
        else
            return ModifyRabbitMQServerlessPermissionOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQServerlessPermissionOutcome(outcome.GetError());
    }
}

void TrabbitClient::ModifyRabbitMQServerlessPermissionAsync(const ModifyRabbitMQServerlessPermissionRequest& request, const ModifyRabbitMQServerlessPermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQServerlessPermission(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ModifyRabbitMQServerlessPermissionOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessPermissionCallable(const ModifyRabbitMQServerlessPermissionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQServerlessPermissionOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQServerlessPermission(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ModifyRabbitMQServerlessQueueOutcome TrabbitClient::ModifyRabbitMQServerlessQueue(const ModifyRabbitMQServerlessQueueRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQServerlessQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQServerlessQueueResponse rsp = ModifyRabbitMQServerlessQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQServerlessQueueOutcome(rsp);
        else
            return ModifyRabbitMQServerlessQueueOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQServerlessQueueOutcome(outcome.GetError());
    }
}

void TrabbitClient::ModifyRabbitMQServerlessQueueAsync(const ModifyRabbitMQServerlessQueueRequest& request, const ModifyRabbitMQServerlessQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQServerlessQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ModifyRabbitMQServerlessQueueOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessQueueCallable(const ModifyRabbitMQServerlessQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQServerlessQueueOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQServerlessQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ModifyRabbitMQServerlessUserOutcome TrabbitClient::ModifyRabbitMQServerlessUser(const ModifyRabbitMQServerlessUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQServerlessUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQServerlessUserResponse rsp = ModifyRabbitMQServerlessUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQServerlessUserOutcome(rsp);
        else
            return ModifyRabbitMQServerlessUserOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQServerlessUserOutcome(outcome.GetError());
    }
}

void TrabbitClient::ModifyRabbitMQServerlessUserAsync(const ModifyRabbitMQServerlessUserRequest& request, const ModifyRabbitMQServerlessUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQServerlessUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ModifyRabbitMQServerlessUserOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessUserCallable(const ModifyRabbitMQServerlessUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQServerlessUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQServerlessUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrabbitClient::ModifyRabbitMQServerlessVirtualHostOutcome TrabbitClient::ModifyRabbitMQServerlessVirtualHost(const ModifyRabbitMQServerlessVirtualHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRabbitMQServerlessVirtualHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRabbitMQServerlessVirtualHostResponse rsp = ModifyRabbitMQServerlessVirtualHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRabbitMQServerlessVirtualHostOutcome(rsp);
        else
            return ModifyRabbitMQServerlessVirtualHostOutcome(o.GetError());
    }
    else
    {
        return ModifyRabbitMQServerlessVirtualHostOutcome(outcome.GetError());
    }
}

void TrabbitClient::ModifyRabbitMQServerlessVirtualHostAsync(const ModifyRabbitMQServerlessVirtualHostRequest& request, const ModifyRabbitMQServerlessVirtualHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRabbitMQServerlessVirtualHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrabbitClient::ModifyRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessVirtualHostCallable(const ModifyRabbitMQServerlessVirtualHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRabbitMQServerlessVirtualHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyRabbitMQServerlessVirtualHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

