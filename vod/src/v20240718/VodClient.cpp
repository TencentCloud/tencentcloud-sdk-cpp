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

#include <tencentcloud/vod/v20240718/VodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Vod::V20240718;
using namespace TencentCloud::Vod::V20240718::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-07-18";
    const string ENDPOINT = "vod.tencentcloudapi.com";
}

VodClient::VodClient(const Credential &credential, const string &region) :
    VodClient(credential, region, ClientProfile())
{
}

VodClient::VodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


VodClient::CreateIncrementalMigrationStrategyOutcome VodClient::CreateIncrementalMigrationStrategy(const CreateIncrementalMigrationStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIncrementalMigrationStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIncrementalMigrationStrategyResponse rsp = CreateIncrementalMigrationStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIncrementalMigrationStrategyOutcome(rsp);
        else
            return CreateIncrementalMigrationStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateIncrementalMigrationStrategyOutcome(outcome.GetError());
    }
}

void VodClient::CreateIncrementalMigrationStrategyAsync(const CreateIncrementalMigrationStrategyRequest& request, const CreateIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIncrementalMigrationStrategyRequest&;
    using Resp = CreateIncrementalMigrationStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIncrementalMigrationStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateIncrementalMigrationStrategyOutcomeCallable VodClient::CreateIncrementalMigrationStrategyCallable(const CreateIncrementalMigrationStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIncrementalMigrationStrategyOutcome>>();
    CreateIncrementalMigrationStrategyAsync(
    request,
    [prom](
        const VodClient*,
        const CreateIncrementalMigrationStrategyRequest&,
        CreateIncrementalMigrationStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateStorageOutcome VodClient::CreateStorage(const CreateStorageRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageResponse rsp = CreateStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageOutcome(rsp);
        else
            return CreateStorageOutcome(o.GetError());
    }
    else
    {
        return CreateStorageOutcome(outcome.GetError());
    }
}

void VodClient::CreateStorageAsync(const CreateStorageRequest& request, const CreateStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStorageRequest&;
    using Resp = CreateStorageResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateStorageOutcomeCallable VodClient::CreateStorageCallable(const CreateStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStorageOutcome>>();
    CreateStorageAsync(
    request,
    [prom](
        const VodClient*,
        const CreateStorageRequest&,
        CreateStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::CreateStorageCredentialsOutcome VodClient::CreateStorageCredentials(const CreateStorageCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateStorageCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateStorageCredentialsResponse rsp = CreateStorageCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateStorageCredentialsOutcome(rsp);
        else
            return CreateStorageCredentialsOutcome(o.GetError());
    }
    else
    {
        return CreateStorageCredentialsOutcome(outcome.GetError());
    }
}

void VodClient::CreateStorageCredentialsAsync(const CreateStorageCredentialsRequest& request, const CreateStorageCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateStorageCredentialsRequest&;
    using Resp = CreateStorageCredentialsResponse;

    DoRequestAsync<Req, Resp>(
        "CreateStorageCredentials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::CreateStorageCredentialsOutcomeCallable VodClient::CreateStorageCredentialsCallable(const CreateStorageCredentialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateStorageCredentialsOutcome>>();
    CreateStorageCredentialsAsync(
    request,
    [prom](
        const VodClient*,
        const CreateStorageCredentialsRequest&,
        CreateStorageCredentialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::DeleteIncrementalMigrationStrategyOutcome VodClient::DeleteIncrementalMigrationStrategy(const DeleteIncrementalMigrationStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIncrementalMigrationStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIncrementalMigrationStrategyResponse rsp = DeleteIncrementalMigrationStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIncrementalMigrationStrategyOutcome(rsp);
        else
            return DeleteIncrementalMigrationStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteIncrementalMigrationStrategyOutcome(outcome.GetError());
    }
}

void VodClient::DeleteIncrementalMigrationStrategyAsync(const DeleteIncrementalMigrationStrategyRequest& request, const DeleteIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIncrementalMigrationStrategyRequest&;
    using Resp = DeleteIncrementalMigrationStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIncrementalMigrationStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DeleteIncrementalMigrationStrategyOutcomeCallable VodClient::DeleteIncrementalMigrationStrategyCallable(const DeleteIncrementalMigrationStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIncrementalMigrationStrategyOutcome>>();
    DeleteIncrementalMigrationStrategyAsync(
    request,
    [prom](
        const VodClient*,
        const DeleteIncrementalMigrationStrategyRequest&,
        DeleteIncrementalMigrationStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::DescribeIncrementalMigrationStrategyInfosOutcome VodClient::DescribeIncrementalMigrationStrategyInfos(const DescribeIncrementalMigrationStrategyInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIncrementalMigrationStrategyInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIncrementalMigrationStrategyInfosResponse rsp = DescribeIncrementalMigrationStrategyInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIncrementalMigrationStrategyInfosOutcome(rsp);
        else
            return DescribeIncrementalMigrationStrategyInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeIncrementalMigrationStrategyInfosOutcome(outcome.GetError());
    }
}

void VodClient::DescribeIncrementalMigrationStrategyInfosAsync(const DescribeIncrementalMigrationStrategyInfosRequest& request, const DescribeIncrementalMigrationStrategyInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIncrementalMigrationStrategyInfosRequest&;
    using Resp = DescribeIncrementalMigrationStrategyInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIncrementalMigrationStrategyInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeIncrementalMigrationStrategyInfosOutcomeCallable VodClient::DescribeIncrementalMigrationStrategyInfosCallable(const DescribeIncrementalMigrationStrategyInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIncrementalMigrationStrategyInfosOutcome>>();
    DescribeIncrementalMigrationStrategyInfosAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeIncrementalMigrationStrategyInfosRequest&,
        DescribeIncrementalMigrationStrategyInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::DescribeStorageOutcome VodClient::DescribeStorage(const DescribeStorageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStorage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStorageResponse rsp = DescribeStorageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStorageOutcome(rsp);
        else
            return DescribeStorageOutcome(o.GetError());
    }
    else
    {
        return DescribeStorageOutcome(outcome.GetError());
    }
}

void VodClient::DescribeStorageAsync(const DescribeStorageRequest& request, const DescribeStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStorageRequest&;
    using Resp = DescribeStorageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStorage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::DescribeStorageOutcomeCallable VodClient::DescribeStorageCallable(const DescribeStorageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStorageOutcome>>();
    DescribeStorageAsync(
    request,
    [prom](
        const VodClient*,
        const DescribeStorageRequest&,
        DescribeStorageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

VodClient::ModifyIncrementalMigrationStrategyOutcome VodClient::ModifyIncrementalMigrationStrategy(const ModifyIncrementalMigrationStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIncrementalMigrationStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIncrementalMigrationStrategyResponse rsp = ModifyIncrementalMigrationStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIncrementalMigrationStrategyOutcome(rsp);
        else
            return ModifyIncrementalMigrationStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyIncrementalMigrationStrategyOutcome(outcome.GetError());
    }
}

void VodClient::ModifyIncrementalMigrationStrategyAsync(const ModifyIncrementalMigrationStrategyRequest& request, const ModifyIncrementalMigrationStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIncrementalMigrationStrategyRequest&;
    using Resp = ModifyIncrementalMigrationStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIncrementalMigrationStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

VodClient::ModifyIncrementalMigrationStrategyOutcomeCallable VodClient::ModifyIncrementalMigrationStrategyCallable(const ModifyIncrementalMigrationStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIncrementalMigrationStrategyOutcome>>();
    ModifyIncrementalMigrationStrategyAsync(
    request,
    [prom](
        const VodClient*,
        const ModifyIncrementalMigrationStrategyRequest&,
        ModifyIncrementalMigrationStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

