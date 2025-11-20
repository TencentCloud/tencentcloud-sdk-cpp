/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
    using Req = const CreateRabbitMQServerlessBindingRequest&;
    using Resp = CreateRabbitMQServerlessBindingResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQServerlessBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::CreateRabbitMQServerlessBindingOutcomeCallable TrabbitClient::CreateRabbitMQServerlessBindingCallable(const CreateRabbitMQServerlessBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQServerlessBindingOutcome>>();
    CreateRabbitMQServerlessBindingAsync(
    request,
    [prom](
        const TrabbitClient*,
        const CreateRabbitMQServerlessBindingRequest&,
        CreateRabbitMQServerlessBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRabbitMQServerlessExchangeRequest&;
    using Resp = CreateRabbitMQServerlessExchangeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQServerlessExchange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::CreateRabbitMQServerlessExchangeOutcomeCallable TrabbitClient::CreateRabbitMQServerlessExchangeCallable(const CreateRabbitMQServerlessExchangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQServerlessExchangeOutcome>>();
    CreateRabbitMQServerlessExchangeAsync(
    request,
    [prom](
        const TrabbitClient*,
        const CreateRabbitMQServerlessExchangeRequest&,
        CreateRabbitMQServerlessExchangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRabbitMQServerlessQueueRequest&;
    using Resp = CreateRabbitMQServerlessQueueResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQServerlessQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::CreateRabbitMQServerlessQueueOutcomeCallable TrabbitClient::CreateRabbitMQServerlessQueueCallable(const CreateRabbitMQServerlessQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQServerlessQueueOutcome>>();
    CreateRabbitMQServerlessQueueAsync(
    request,
    [prom](
        const TrabbitClient*,
        const CreateRabbitMQServerlessQueueRequest&,
        CreateRabbitMQServerlessQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRabbitMQServerlessUserRequest&;
    using Resp = CreateRabbitMQServerlessUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQServerlessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::CreateRabbitMQServerlessUserOutcomeCallable TrabbitClient::CreateRabbitMQServerlessUserCallable(const CreateRabbitMQServerlessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQServerlessUserOutcome>>();
    CreateRabbitMQServerlessUserAsync(
    request,
    [prom](
        const TrabbitClient*,
        const CreateRabbitMQServerlessUserRequest&,
        CreateRabbitMQServerlessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateRabbitMQServerlessVirtualHostRequest&;
    using Resp = CreateRabbitMQServerlessVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRabbitMQServerlessVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::CreateRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::CreateRabbitMQServerlessVirtualHostCallable(const CreateRabbitMQServerlessVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRabbitMQServerlessVirtualHostOutcome>>();
    CreateRabbitMQServerlessVirtualHostAsync(
    request,
    [prom](
        const TrabbitClient*,
        const CreateRabbitMQServerlessVirtualHostRequest&,
        CreateRabbitMQServerlessVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRabbitMQServerlessBindingRequest&;
    using Resp = DeleteRabbitMQServerlessBindingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQServerlessBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DeleteRabbitMQServerlessBindingOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessBindingCallable(const DeleteRabbitMQServerlessBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQServerlessBindingOutcome>>();
    DeleteRabbitMQServerlessBindingAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DeleteRabbitMQServerlessBindingRequest&,
        DeleteRabbitMQServerlessBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRabbitMQServerlessExchangeRequest&;
    using Resp = DeleteRabbitMQServerlessExchangeResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQServerlessExchange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DeleteRabbitMQServerlessExchangeOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessExchangeCallable(const DeleteRabbitMQServerlessExchangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQServerlessExchangeOutcome>>();
    DeleteRabbitMQServerlessExchangeAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DeleteRabbitMQServerlessExchangeRequest&,
        DeleteRabbitMQServerlessExchangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRabbitMQServerlessPermissionRequest&;
    using Resp = DeleteRabbitMQServerlessPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQServerlessPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DeleteRabbitMQServerlessPermissionOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessPermissionCallable(const DeleteRabbitMQServerlessPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQServerlessPermissionOutcome>>();
    DeleteRabbitMQServerlessPermissionAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DeleteRabbitMQServerlessPermissionRequest&,
        DeleteRabbitMQServerlessPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRabbitMQServerlessQueueRequest&;
    using Resp = DeleteRabbitMQServerlessQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQServerlessQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DeleteRabbitMQServerlessQueueOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessQueueCallable(const DeleteRabbitMQServerlessQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQServerlessQueueOutcome>>();
    DeleteRabbitMQServerlessQueueAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DeleteRabbitMQServerlessQueueRequest&,
        DeleteRabbitMQServerlessQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRabbitMQServerlessUserRequest&;
    using Resp = DeleteRabbitMQServerlessUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQServerlessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DeleteRabbitMQServerlessUserOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessUserCallable(const DeleteRabbitMQServerlessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQServerlessUserOutcome>>();
    DeleteRabbitMQServerlessUserAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DeleteRabbitMQServerlessUserRequest&,
        DeleteRabbitMQServerlessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteRabbitMQServerlessVirtualHostRequest&;
    using Resp = DeleteRabbitMQServerlessVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRabbitMQServerlessVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DeleteRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::DeleteRabbitMQServerlessVirtualHostCallable(const DeleteRabbitMQServerlessVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRabbitMQServerlessVirtualHostOutcome>>();
    DeleteRabbitMQServerlessVirtualHostAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DeleteRabbitMQServerlessVirtualHostRequest&,
        DeleteRabbitMQServerlessVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessBindingsRequest&;
    using Resp = DescribeRabbitMQServerlessBindingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessBindings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessBindingsOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessBindingsCallable(const DescribeRabbitMQServerlessBindingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessBindingsOutcome>>();
    DescribeRabbitMQServerlessBindingsAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessBindingsRequest&,
        DescribeRabbitMQServerlessBindingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessConnectionRequest&;
    using Resp = DescribeRabbitMQServerlessConnectionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessConnection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessConnectionOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessConnectionCallable(const DescribeRabbitMQServerlessConnectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessConnectionOutcome>>();
    DescribeRabbitMQServerlessConnectionAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessConnectionRequest&,
        DescribeRabbitMQServerlessConnectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessConsumersRequest&;
    using Resp = DescribeRabbitMQServerlessConsumersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessConsumers", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessConsumersOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessConsumersCallable(const DescribeRabbitMQServerlessConsumersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessConsumersOutcome>>();
    DescribeRabbitMQServerlessConsumersAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessConsumersRequest&,
        DescribeRabbitMQServerlessConsumersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessExchangeDetailRequest&;
    using Resp = DescribeRabbitMQServerlessExchangeDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessExchangeDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessExchangeDetailOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessExchangeDetailCallable(const DescribeRabbitMQServerlessExchangeDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessExchangeDetailOutcome>>();
    DescribeRabbitMQServerlessExchangeDetailAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessExchangeDetailRequest&,
        DescribeRabbitMQServerlessExchangeDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessExchangesRequest&;
    using Resp = DescribeRabbitMQServerlessExchangesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessExchanges", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessExchangesOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessExchangesCallable(const DescribeRabbitMQServerlessExchangesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessExchangesOutcome>>();
    DescribeRabbitMQServerlessExchangesAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessExchangesRequest&,
        DescribeRabbitMQServerlessExchangesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessInstanceRequest&;
    using Resp = DescribeRabbitMQServerlessInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessInstanceOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessInstanceCallable(const DescribeRabbitMQServerlessInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessInstanceOutcome>>();
    DescribeRabbitMQServerlessInstanceAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessInstanceRequest&,
        DescribeRabbitMQServerlessInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessPermissionRequest&;
    using Resp = DescribeRabbitMQServerlessPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessPermissionOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessPermissionCallable(const DescribeRabbitMQServerlessPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessPermissionOutcome>>();
    DescribeRabbitMQServerlessPermissionAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessPermissionRequest&,
        DescribeRabbitMQServerlessPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessQueueDetailRequest&;
    using Resp = DescribeRabbitMQServerlessQueueDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessQueueDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessQueueDetailOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessQueueDetailCallable(const DescribeRabbitMQServerlessQueueDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessQueueDetailOutcome>>();
    DescribeRabbitMQServerlessQueueDetailAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessQueueDetailRequest&,
        DescribeRabbitMQServerlessQueueDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessQueuesRequest&;
    using Resp = DescribeRabbitMQServerlessQueuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessQueues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessQueuesOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessQueuesCallable(const DescribeRabbitMQServerlessQueuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessQueuesOutcome>>();
    DescribeRabbitMQServerlessQueuesAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessQueuesRequest&,
        DescribeRabbitMQServerlessQueuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessUserRequest&;
    using Resp = DescribeRabbitMQServerlessUserResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessUserOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessUserCallable(const DescribeRabbitMQServerlessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessUserOutcome>>();
    DescribeRabbitMQServerlessUserAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessUserRequest&,
        DescribeRabbitMQServerlessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeRabbitMQServerlessVirtualHostRequest&;
    using Resp = DescribeRabbitMQServerlessVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRabbitMQServerlessVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::DescribeRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::DescribeRabbitMQServerlessVirtualHostCallable(const DescribeRabbitMQServerlessVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRabbitMQServerlessVirtualHostOutcome>>();
    DescribeRabbitMQServerlessVirtualHostAsync(
    request,
    [prom](
        const TrabbitClient*,
        const DescribeRabbitMQServerlessVirtualHostRequest&,
        DescribeRabbitMQServerlessVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ListRabbitMQServerlessInstancesRequest&;
    using Resp = ListRabbitMQServerlessInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ListRabbitMQServerlessInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ListRabbitMQServerlessInstancesOutcomeCallable TrabbitClient::ListRabbitMQServerlessInstancesCallable(const ListRabbitMQServerlessInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListRabbitMQServerlessInstancesOutcome>>();
    ListRabbitMQServerlessInstancesAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ListRabbitMQServerlessInstancesRequest&,
        ListRabbitMQServerlessInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRabbitMQServerlessExchangeRequest&;
    using Resp = ModifyRabbitMQServerlessExchangeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQServerlessExchange", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ModifyRabbitMQServerlessExchangeOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessExchangeCallable(const ModifyRabbitMQServerlessExchangeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQServerlessExchangeOutcome>>();
    ModifyRabbitMQServerlessExchangeAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ModifyRabbitMQServerlessExchangeRequest&,
        ModifyRabbitMQServerlessExchangeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRabbitMQServerlessInstanceRequest&;
    using Resp = ModifyRabbitMQServerlessInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQServerlessInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ModifyRabbitMQServerlessInstanceOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessInstanceCallable(const ModifyRabbitMQServerlessInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQServerlessInstanceOutcome>>();
    ModifyRabbitMQServerlessInstanceAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ModifyRabbitMQServerlessInstanceRequest&,
        ModifyRabbitMQServerlessInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRabbitMQServerlessPermissionRequest&;
    using Resp = ModifyRabbitMQServerlessPermissionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQServerlessPermission", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ModifyRabbitMQServerlessPermissionOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessPermissionCallable(const ModifyRabbitMQServerlessPermissionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQServerlessPermissionOutcome>>();
    ModifyRabbitMQServerlessPermissionAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ModifyRabbitMQServerlessPermissionRequest&,
        ModifyRabbitMQServerlessPermissionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRabbitMQServerlessQueueRequest&;
    using Resp = ModifyRabbitMQServerlessQueueResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQServerlessQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ModifyRabbitMQServerlessQueueOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessQueueCallable(const ModifyRabbitMQServerlessQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQServerlessQueueOutcome>>();
    ModifyRabbitMQServerlessQueueAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ModifyRabbitMQServerlessQueueRequest&,
        ModifyRabbitMQServerlessQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRabbitMQServerlessUserRequest&;
    using Resp = ModifyRabbitMQServerlessUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQServerlessUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ModifyRabbitMQServerlessUserOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessUserCallable(const ModifyRabbitMQServerlessUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQServerlessUserOutcome>>();
    ModifyRabbitMQServerlessUserAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ModifyRabbitMQServerlessUserRequest&,
        ModifyRabbitMQServerlessUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyRabbitMQServerlessVirtualHostRequest&;
    using Resp = ModifyRabbitMQServerlessVirtualHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRabbitMQServerlessVirtualHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TrabbitClient::ModifyRabbitMQServerlessVirtualHostOutcomeCallable TrabbitClient::ModifyRabbitMQServerlessVirtualHostCallable(const ModifyRabbitMQServerlessVirtualHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRabbitMQServerlessVirtualHostOutcome>>();
    ModifyRabbitMQServerlessVirtualHostAsync(
    request,
    [prom](
        const TrabbitClient*,
        const ModifyRabbitMQServerlessVirtualHostRequest&,
        ModifyRabbitMQServerlessVirtualHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

