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

#include <tencentcloud/edgezone/v20260401/EdgezoneClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Edgezone::V20260401;
using namespace TencentCloud::Edgezone::V20260401::Model;
using namespace std;

namespace
{
    const string VERSION = "2026-04-01";
    const string ENDPOINT = "edgezone.tencentcloudapi.com";
}

EdgezoneClient::EdgezoneClient(const Credential &credential, const string &region) :
    EdgezoneClient(credential, region, ClientProfile())
{
}

EdgezoneClient::EdgezoneClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


EdgezoneClient::ApplyPublicIpsOutcome EdgezoneClient::ApplyPublicIps(const ApplyPublicIpsRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyPublicIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyPublicIpsResponse rsp = ApplyPublicIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyPublicIpsOutcome(rsp);
        else
            return ApplyPublicIpsOutcome(o.GetError());
    }
    else
    {
        return ApplyPublicIpsOutcome(outcome.GetError());
    }
}

void EdgezoneClient::ApplyPublicIpsAsync(const ApplyPublicIpsRequest& request, const ApplyPublicIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyPublicIpsRequest&;
    using Resp = ApplyPublicIpsResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyPublicIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::ApplyPublicIpsOutcomeCallable EdgezoneClient::ApplyPublicIpsCallable(const ApplyPublicIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyPublicIpsOutcome>>();
    ApplyPublicIpsAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const ApplyPublicIpsRequest&,
        ApplyPublicIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::CreateEdgeNodeServiceOutcome EdgezoneClient::CreateEdgeNodeService(const CreateEdgeNodeServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgeNodeService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgeNodeServiceResponse rsp = CreateEdgeNodeServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgeNodeServiceOutcome(rsp);
        else
            return CreateEdgeNodeServiceOutcome(o.GetError());
    }
    else
    {
        return CreateEdgeNodeServiceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::CreateEdgeNodeServiceAsync(const CreateEdgeNodeServiceRequest& request, const CreateEdgeNodeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEdgeNodeServiceRequest&;
    using Resp = CreateEdgeNodeServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEdgeNodeService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::CreateEdgeNodeServiceOutcomeCallable EdgezoneClient::CreateEdgeNodeServiceCallable(const CreateEdgeNodeServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEdgeNodeServiceOutcome>>();
    CreateEdgeNodeServiceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const CreateEdgeNodeServiceRequest&,
        CreateEdgeNodeServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::CreateInstancesOutcome EdgezoneClient::CreateInstances(const CreateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancesResponse rsp = CreateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancesOutcome(rsp);
        else
            return CreateInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateInstancesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::CreateInstancesAsync(const CreateInstancesRequest& request, const CreateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInstancesRequest&;
    using Resp = CreateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::CreateInstancesOutcomeCallable EdgezoneClient::CreateInstancesCallable(const CreateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstancesOutcome>>();
    CreateInstancesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const CreateInstancesRequest&,
        CreateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::CreatePrivateNetworkInstanceOutcome EdgezoneClient::CreatePrivateNetworkInstance(const CreatePrivateNetworkInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrivateNetworkInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrivateNetworkInstanceResponse rsp = CreatePrivateNetworkInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrivateNetworkInstanceOutcome(rsp);
        else
            return CreatePrivateNetworkInstanceOutcome(o.GetError());
    }
    else
    {
        return CreatePrivateNetworkInstanceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::CreatePrivateNetworkInstanceAsync(const CreatePrivateNetworkInstanceRequest& request, const CreatePrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePrivateNetworkInstanceRequest&;
    using Resp = CreatePrivateNetworkInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePrivateNetworkInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::CreatePrivateNetworkInstanceOutcomeCallable EdgezoneClient::CreatePrivateNetworkInstanceCallable(const CreatePrivateNetworkInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePrivateNetworkInstanceOutcome>>();
    CreatePrivateNetworkInstanceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const CreatePrivateNetworkInstanceRequest&,
        CreatePrivateNetworkInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::CreatePublicNetworkInstanceOutcome EdgezoneClient::CreatePublicNetworkInstance(const CreatePublicNetworkInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePublicNetworkInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePublicNetworkInstanceResponse rsp = CreatePublicNetworkInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePublicNetworkInstanceOutcome(rsp);
        else
            return CreatePublicNetworkInstanceOutcome(o.GetError());
    }
    else
    {
        return CreatePublicNetworkInstanceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::CreatePublicNetworkInstanceAsync(const CreatePublicNetworkInstanceRequest& request, const CreatePublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePublicNetworkInstanceRequest&;
    using Resp = CreatePublicNetworkInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePublicNetworkInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::CreatePublicNetworkInstanceOutcomeCallable EdgezoneClient::CreatePublicNetworkInstanceCallable(const CreatePublicNetworkInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePublicNetworkInstanceOutcome>>();
    CreatePublicNetworkInstanceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const CreatePublicNetworkInstanceRequest&,
        CreatePublicNetworkInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DeletePrivateNetworkInstanceOutcome EdgezoneClient::DeletePrivateNetworkInstance(const DeletePrivateNetworkInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePrivateNetworkInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePrivateNetworkInstanceResponse rsp = DeletePrivateNetworkInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePrivateNetworkInstanceOutcome(rsp);
        else
            return DeletePrivateNetworkInstanceOutcome(o.GetError());
    }
    else
    {
        return DeletePrivateNetworkInstanceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DeletePrivateNetworkInstanceAsync(const DeletePrivateNetworkInstanceRequest& request, const DeletePrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePrivateNetworkInstanceRequest&;
    using Resp = DeletePrivateNetworkInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePrivateNetworkInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DeletePrivateNetworkInstanceOutcomeCallable EdgezoneClient::DeletePrivateNetworkInstanceCallable(const DeletePrivateNetworkInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePrivateNetworkInstanceOutcome>>();
    DeletePrivateNetworkInstanceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DeletePrivateNetworkInstanceRequest&,
        DeletePrivateNetworkInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DeletePublicNetworkInstanceOutcome EdgezoneClient::DeletePublicNetworkInstance(const DeletePublicNetworkInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePublicNetworkInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePublicNetworkInstanceResponse rsp = DeletePublicNetworkInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePublicNetworkInstanceOutcome(rsp);
        else
            return DeletePublicNetworkInstanceOutcome(o.GetError());
    }
    else
    {
        return DeletePublicNetworkInstanceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DeletePublicNetworkInstanceAsync(const DeletePublicNetworkInstanceRequest& request, const DeletePublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePublicNetworkInstanceRequest&;
    using Resp = DeletePublicNetworkInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePublicNetworkInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DeletePublicNetworkInstanceOutcomeCallable EdgezoneClient::DeletePublicNetworkInstanceCallable(const DeletePublicNetworkInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePublicNetworkInstanceOutcome>>();
    DeletePublicNetworkInstanceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DeletePublicNetworkInstanceRequest&,
        DeletePublicNetworkInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribeInstanceTypesOutcome EdgezoneClient::DescribeInstanceTypes(const DescribeInstanceTypesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceTypes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceTypesResponse rsp = DescribeInstanceTypesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceTypesOutcome(rsp);
        else
            return DescribeInstanceTypesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceTypesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribeInstanceTypesAsync(const DescribeInstanceTypesRequest& request, const DescribeInstanceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceTypesRequest&;
    using Resp = DescribeInstanceTypesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceTypes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribeInstanceTypesOutcomeCallable EdgezoneClient::DescribeInstanceTypesCallable(const DescribeInstanceTypesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceTypesOutcome>>();
    DescribeInstanceTypesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribeInstanceTypesRequest&,
        DescribeInstanceTypesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribeInstancesOutcome EdgezoneClient::DescribeInstances(const DescribeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesResponse rsp = DescribeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesOutcome(rsp);
        else
            return DescribeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribeInstancesOutcomeCallable EdgezoneClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribePrivateNetworkInstancesOutcome EdgezoneClient::DescribePrivateNetworkInstances(const DescribePrivateNetworkInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrivateNetworkInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrivateNetworkInstancesResponse rsp = DescribePrivateNetworkInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrivateNetworkInstancesOutcome(rsp);
        else
            return DescribePrivateNetworkInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePrivateNetworkInstancesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribePrivateNetworkInstancesAsync(const DescribePrivateNetworkInstancesRequest& request, const DescribePrivateNetworkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePrivateNetworkInstancesRequest&;
    using Resp = DescribePrivateNetworkInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrivateNetworkInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribePrivateNetworkInstancesOutcomeCallable EdgezoneClient::DescribePrivateNetworkInstancesCallable(const DescribePrivateNetworkInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePrivateNetworkInstancesOutcome>>();
    DescribePrivateNetworkInstancesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribePrivateNetworkInstancesRequest&,
        DescribePrivateNetworkInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribePublicIpsOutcome EdgezoneClient::DescribePublicIps(const DescribePublicIpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicIps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicIpsResponse rsp = DescribePublicIpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicIpsOutcome(rsp);
        else
            return DescribePublicIpsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicIpsOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribePublicIpsAsync(const DescribePublicIpsRequest& request, const DescribePublicIpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicIpsRequest&;
    using Resp = DescribePublicIpsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicIps", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribePublicIpsOutcomeCallable EdgezoneClient::DescribePublicIpsCallable(const DescribePublicIpsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicIpsOutcome>>();
    DescribePublicIpsAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribePublicIpsRequest&,
        DescribePublicIpsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribePublicNetworkInstancesOutcome EdgezoneClient::DescribePublicNetworkInstances(const DescribePublicNetworkInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicNetworkInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicNetworkInstancesResponse rsp = DescribePublicNetworkInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicNetworkInstancesOutcome(rsp);
        else
            return DescribePublicNetworkInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePublicNetworkInstancesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribePublicNetworkInstancesAsync(const DescribePublicNetworkInstancesRequest& request, const DescribePublicNetworkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicNetworkInstancesRequest&;
    using Resp = DescribePublicNetworkInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicNetworkInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribePublicNetworkInstancesOutcomeCallable EdgezoneClient::DescribePublicNetworkInstancesCallable(const DescribePublicNetworkInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicNetworkInstancesOutcome>>();
    DescribePublicNetworkInstancesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribePublicNetworkInstancesRequest&,
        DescribePublicNetworkInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribeZoneDataOutcome EdgezoneClient::DescribeZoneData(const DescribeZoneDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneDataResponse rsp = DescribeZoneDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneDataOutcome(rsp);
        else
            return DescribeZoneDataOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneDataOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribeZoneDataAsync(const DescribeZoneDataRequest& request, const DescribeZoneDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZoneDataRequest&;
    using Resp = DescribeZoneDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZoneData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribeZoneDataOutcomeCallable EdgezoneClient::DescribeZoneDataCallable(const DescribeZoneDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZoneDataOutcome>>();
    DescribeZoneDataAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribeZoneDataRequest&,
        DescribeZoneDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::DescribeZonesOutcome EdgezoneClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeZonesRequest&;
    using Resp = DescribeZonesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeZones", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::DescribeZonesOutcomeCallable EdgezoneClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeZonesOutcome>>();
    DescribeZonesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const DescribeZonesRequest&,
        DescribeZonesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::ModifyInstanceAttributeOutcome EdgezoneClient::ModifyInstanceAttribute(const ModifyInstanceAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceAttributeResponse rsp = ModifyInstanceAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceAttributeOutcome(rsp);
        else
            return ModifyInstanceAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceAttributeOutcome(outcome.GetError());
    }
}

void EdgezoneClient::ModifyInstanceAttributeAsync(const ModifyInstanceAttributeRequest& request, const ModifyInstanceAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceAttributeRequest&;
    using Resp = ModifyInstanceAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::ModifyInstanceAttributeOutcomeCallable EdgezoneClient::ModifyInstanceAttributeCallable(const ModifyInstanceAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceAttributeOutcome>>();
    ModifyInstanceAttributeAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const ModifyInstanceAttributeRequest&,
        ModifyInstanceAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::ModifyPrivateNetworkInstanceOutcome EdgezoneClient::ModifyPrivateNetworkInstance(const ModifyPrivateNetworkInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPrivateNetworkInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPrivateNetworkInstanceResponse rsp = ModifyPrivateNetworkInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPrivateNetworkInstanceOutcome(rsp);
        else
            return ModifyPrivateNetworkInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyPrivateNetworkInstanceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::ModifyPrivateNetworkInstanceAsync(const ModifyPrivateNetworkInstanceRequest& request, const ModifyPrivateNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPrivateNetworkInstanceRequest&;
    using Resp = ModifyPrivateNetworkInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPrivateNetworkInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::ModifyPrivateNetworkInstanceOutcomeCallable EdgezoneClient::ModifyPrivateNetworkInstanceCallable(const ModifyPrivateNetworkInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPrivateNetworkInstanceOutcome>>();
    ModifyPrivateNetworkInstanceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const ModifyPrivateNetworkInstanceRequest&,
        ModifyPrivateNetworkInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::ModifyPublicNetworkInstanceOutcome EdgezoneClient::ModifyPublicNetworkInstance(const ModifyPublicNetworkInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPublicNetworkInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPublicNetworkInstanceResponse rsp = ModifyPublicNetworkInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPublicNetworkInstanceOutcome(rsp);
        else
            return ModifyPublicNetworkInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyPublicNetworkInstanceOutcome(outcome.GetError());
    }
}

void EdgezoneClient::ModifyPublicNetworkInstanceAsync(const ModifyPublicNetworkInstanceRequest& request, const ModifyPublicNetworkInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPublicNetworkInstanceRequest&;
    using Resp = ModifyPublicNetworkInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPublicNetworkInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::ModifyPublicNetworkInstanceOutcomeCallable EdgezoneClient::ModifyPublicNetworkInstanceCallable(const ModifyPublicNetworkInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPublicNetworkInstanceOutcome>>();
    ModifyPublicNetworkInstanceAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const ModifyPublicNetworkInstanceRequest&,
        ModifyPublicNetworkInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::ReleasePublicIpOutcome EdgezoneClient::ReleasePublicIp(const ReleasePublicIpRequest &request)
{
    auto outcome = MakeRequest(request, "ReleasePublicIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleasePublicIpResponse rsp = ReleasePublicIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleasePublicIpOutcome(rsp);
        else
            return ReleasePublicIpOutcome(o.GetError());
    }
    else
    {
        return ReleasePublicIpOutcome(outcome.GetError());
    }
}

void EdgezoneClient::ReleasePublicIpAsync(const ReleasePublicIpRequest& request, const ReleasePublicIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleasePublicIpRequest&;
    using Resp = ReleasePublicIpResponse;

    DoRequestAsync<Req, Resp>(
        "ReleasePublicIp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::ReleasePublicIpOutcomeCallable EdgezoneClient::ReleasePublicIpCallable(const ReleasePublicIpRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleasePublicIpOutcome>>();
    ReleasePublicIpAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const ReleasePublicIpRequest&,
        ReleasePublicIpOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

EdgezoneClient::TerminateInstancesOutcome EdgezoneClient::TerminateInstances(const TerminateInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateInstancesResponse rsp = TerminateInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateInstancesOutcome(rsp);
        else
            return TerminateInstancesOutcome(o.GetError());
    }
    else
    {
        return TerminateInstancesOutcome(outcome.GetError());
    }
}

void EdgezoneClient::TerminateInstancesAsync(const TerminateInstancesRequest& request, const TerminateInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateInstancesRequest&;
    using Resp = TerminateInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

EdgezoneClient::TerminateInstancesOutcomeCallable EdgezoneClient::TerminateInstancesCallable(const TerminateInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateInstancesOutcome>>();
    TerminateInstancesAsync(
    request,
    [prom](
        const EdgezoneClient*,
        const TerminateInstancesRequest&,
        TerminateInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

