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
    using Req = const Create5GInstanceRequest&;
    using Resp = Create5GInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "Create5GInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsxgClient::Create5GInstanceOutcomeCallable CsxgClient::Create5GInstanceCallable(const Create5GInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<Create5GInstanceOutcome>>();
    Create5GInstanceAsync(
    request,
    [prom](
        const CsxgClient*,
        const Create5GInstanceRequest&,
        Create5GInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const Delete5GInstanceRequest&;
    using Resp = Delete5GInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "Delete5GInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsxgClient::Delete5GInstanceOutcomeCallable CsxgClient::Delete5GInstanceCallable(const Delete5GInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<Delete5GInstanceOutcome>>();
    Delete5GInstanceAsync(
    request,
    [prom](
        const CsxgClient*,
        const Delete5GInstanceRequest&,
        Delete5GInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const Describe5GAPNsRequest&;
    using Resp = Describe5GAPNsResponse;

    DoRequestAsync<Req, Resp>(
        "Describe5GAPNs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsxgClient::Describe5GAPNsOutcomeCallable CsxgClient::Describe5GAPNsCallable(const Describe5GAPNsRequest &request)
{
    const auto prom = std::make_shared<std::promise<Describe5GAPNsOutcome>>();
    Describe5GAPNsAsync(
    request,
    [prom](
        const CsxgClient*,
        const Describe5GAPNsRequest&,
        Describe5GAPNsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const Describe5GInstancesRequest&;
    using Resp = Describe5GInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "Describe5GInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsxgClient::Describe5GInstancesOutcomeCallable CsxgClient::Describe5GInstancesCallable(const Describe5GInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<Describe5GInstancesOutcome>>();
    Describe5GInstancesAsync(
    request,
    [prom](
        const CsxgClient*,
        const Describe5GInstancesRequest&,
        Describe5GInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const Modify5GInstanceAttributeRequest&;
    using Resp = Modify5GInstanceAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "Modify5GInstanceAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CsxgClient::Modify5GInstanceAttributeOutcomeCallable CsxgClient::Modify5GInstanceAttributeCallable(const Modify5GInstanceAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<Modify5GInstanceAttributeOutcome>>();
    Modify5GInstanceAttributeAsync(
    request,
    [prom](
        const CsxgClient*,
        const Modify5GInstanceAttributeRequest&,
        Modify5GInstanceAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

