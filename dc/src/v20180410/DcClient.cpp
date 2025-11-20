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
    using Req = const AcceptDirectConnectTunnelRequest&;
    using Resp = AcceptDirectConnectTunnelResponse;

    DoRequestAsync<Req, Resp>(
        "AcceptDirectConnectTunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::AcceptDirectConnectTunnelOutcomeCallable DcClient::AcceptDirectConnectTunnelCallable(const AcceptDirectConnectTunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<AcceptDirectConnectTunnelOutcome>>();
    AcceptDirectConnectTunnelAsync(
    request,
    [prom](
        const DcClient*,
        const AcceptDirectConnectTunnelRequest&,
        AcceptDirectConnectTunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::ApplyInternetAddressOutcome DcClient::ApplyInternetAddress(const ApplyInternetAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyInternetAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyInternetAddressResponse rsp = ApplyInternetAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyInternetAddressOutcome(rsp);
        else
            return ApplyInternetAddressOutcome(o.GetError());
    }
    else
    {
        return ApplyInternetAddressOutcome(outcome.GetError());
    }
}

void DcClient::ApplyInternetAddressAsync(const ApplyInternetAddressRequest& request, const ApplyInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyInternetAddressRequest&;
    using Resp = ApplyInternetAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyInternetAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::ApplyInternetAddressOutcomeCallable DcClient::ApplyInternetAddressCallable(const ApplyInternetAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyInternetAddressOutcome>>();
    ApplyInternetAddressAsync(
    request,
    [prom](
        const DcClient*,
        const ApplyInternetAddressRequest&,
        ApplyInternetAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::CreateCloudAttachServiceOutcome DcClient::CreateCloudAttachService(const CreateCloudAttachServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudAttachService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudAttachServiceResponse rsp = CreateCloudAttachServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudAttachServiceOutcome(rsp);
        else
            return CreateCloudAttachServiceOutcome(o.GetError());
    }
    else
    {
        return CreateCloudAttachServiceOutcome(outcome.GetError());
    }
}

void DcClient::CreateCloudAttachServiceAsync(const CreateCloudAttachServiceRequest& request, const CreateCloudAttachServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudAttachServiceRequest&;
    using Resp = CreateCloudAttachServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudAttachService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::CreateCloudAttachServiceOutcomeCallable DcClient::CreateCloudAttachServiceCallable(const CreateCloudAttachServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudAttachServiceOutcome>>();
    CreateCloudAttachServiceAsync(
    request,
    [prom](
        const DcClient*,
        const CreateCloudAttachServiceRequest&,
        CreateCloudAttachServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDirectConnectRequest&;
    using Resp = CreateDirectConnectResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDirectConnect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::CreateDirectConnectOutcomeCallable DcClient::CreateDirectConnectCallable(const CreateDirectConnectRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDirectConnectOutcome>>();
    CreateDirectConnectAsync(
    request,
    [prom](
        const DcClient*,
        const CreateDirectConnectRequest&,
        CreateDirectConnectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateDirectConnectTunnelRequest&;
    using Resp = CreateDirectConnectTunnelResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDirectConnectTunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::CreateDirectConnectTunnelOutcomeCallable DcClient::CreateDirectConnectTunnelCallable(const CreateDirectConnectTunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDirectConnectTunnelOutcome>>();
    CreateDirectConnectTunnelAsync(
    request,
    [prom](
        const DcClient*,
        const CreateDirectConnectTunnelRequest&,
        CreateDirectConnectTunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDirectConnectRequest&;
    using Resp = DeleteDirectConnectResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDirectConnect", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DeleteDirectConnectOutcomeCallable DcClient::DeleteDirectConnectCallable(const DeleteDirectConnectRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDirectConnectOutcome>>();
    DeleteDirectConnectAsync(
    request,
    [prom](
        const DcClient*,
        const DeleteDirectConnectRequest&,
        DeleteDirectConnectOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDirectConnectTunnelRequest&;
    using Resp = DeleteDirectConnectTunnelResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDirectConnectTunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DeleteDirectConnectTunnelOutcomeCallable DcClient::DeleteDirectConnectTunnelCallable(const DeleteDirectConnectTunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDirectConnectTunnelOutcome>>();
    DeleteDirectConnectTunnelAsync(
    request,
    [prom](
        const DcClient*,
        const DeleteDirectConnectTunnelRequest&,
        DeleteDirectConnectTunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAccessPointsRequest&;
    using Resp = DescribeAccessPointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessPoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeAccessPointsOutcomeCallable DcClient::DescribeAccessPointsCallable(const DescribeAccessPointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessPointsOutcome>>();
    DescribeAccessPointsAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeAccessPointsRequest&,
        DescribeAccessPointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::DescribeDirectConnectTunnelExtraOutcome DcClient::DescribeDirectConnectTunnelExtra(const DescribeDirectConnectTunnelExtraRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDirectConnectTunnelExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDirectConnectTunnelExtraResponse rsp = DescribeDirectConnectTunnelExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDirectConnectTunnelExtraOutcome(rsp);
        else
            return DescribeDirectConnectTunnelExtraOutcome(o.GetError());
    }
    else
    {
        return DescribeDirectConnectTunnelExtraOutcome(outcome.GetError());
    }
}

void DcClient::DescribeDirectConnectTunnelExtraAsync(const DescribeDirectConnectTunnelExtraRequest& request, const DescribeDirectConnectTunnelExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDirectConnectTunnelExtraRequest&;
    using Resp = DescribeDirectConnectTunnelExtraResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectConnectTunnelExtra", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeDirectConnectTunnelExtraOutcomeCallable DcClient::DescribeDirectConnectTunnelExtraCallable(const DescribeDirectConnectTunnelExtraRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectConnectTunnelExtraOutcome>>();
    DescribeDirectConnectTunnelExtraAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeDirectConnectTunnelExtraRequest&,
        DescribeDirectConnectTunnelExtraOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDirectConnectTunnelsRequest&;
    using Resp = DescribeDirectConnectTunnelsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectConnectTunnels", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeDirectConnectTunnelsOutcomeCallable DcClient::DescribeDirectConnectTunnelsCallable(const DescribeDirectConnectTunnelsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectConnectTunnelsOutcome>>();
    DescribeDirectConnectTunnelsAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeDirectConnectTunnelsRequest&,
        DescribeDirectConnectTunnelsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDirectConnectsRequest&;
    using Resp = DescribeDirectConnectsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDirectConnects", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeDirectConnectsOutcomeCallable DcClient::DescribeDirectConnectsCallable(const DescribeDirectConnectsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDirectConnectsOutcome>>();
    DescribeDirectConnectsAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeDirectConnectsRequest&,
        DescribeDirectConnectsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::DescribeInternetAddressOutcome DcClient::DescribeInternetAddress(const DescribeInternetAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternetAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternetAddressResponse rsp = DescribeInternetAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternetAddressOutcome(rsp);
        else
            return DescribeInternetAddressOutcome(o.GetError());
    }
    else
    {
        return DescribeInternetAddressOutcome(outcome.GetError());
    }
}

void DcClient::DescribeInternetAddressAsync(const DescribeInternetAddressRequest& request, const DescribeInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInternetAddressRequest&;
    using Resp = DescribeInternetAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInternetAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeInternetAddressOutcomeCallable DcClient::DescribeInternetAddressCallable(const DescribeInternetAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInternetAddressOutcome>>();
    DescribeInternetAddressAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeInternetAddressRequest&,
        DescribeInternetAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::DescribeInternetAddressQuotaOutcome DcClient::DescribeInternetAddressQuota(const DescribeInternetAddressQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternetAddressQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternetAddressQuotaResponse rsp = DescribeInternetAddressQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternetAddressQuotaOutcome(rsp);
        else
            return DescribeInternetAddressQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeInternetAddressQuotaOutcome(outcome.GetError());
    }
}

void DcClient::DescribeInternetAddressQuotaAsync(const DescribeInternetAddressQuotaRequest& request, const DescribeInternetAddressQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInternetAddressQuotaRequest&;
    using Resp = DescribeInternetAddressQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInternetAddressQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeInternetAddressQuotaOutcomeCallable DcClient::DescribeInternetAddressQuotaCallable(const DescribeInternetAddressQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInternetAddressQuotaOutcome>>();
    DescribeInternetAddressQuotaAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeInternetAddressQuotaRequest&,
        DescribeInternetAddressQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::DescribeInternetAddressStatisticsOutcome DcClient::DescribeInternetAddressStatistics(const DescribeInternetAddressStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInternetAddressStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInternetAddressStatisticsResponse rsp = DescribeInternetAddressStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInternetAddressStatisticsOutcome(rsp);
        else
            return DescribeInternetAddressStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeInternetAddressStatisticsOutcome(outcome.GetError());
    }
}

void DcClient::DescribeInternetAddressStatisticsAsync(const DescribeInternetAddressStatisticsRequest& request, const DescribeInternetAddressStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInternetAddressStatisticsRequest&;
    using Resp = DescribeInternetAddressStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInternetAddressStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribeInternetAddressStatisticsOutcomeCallable DcClient::DescribeInternetAddressStatisticsCallable(const DescribeInternetAddressStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInternetAddressStatisticsOutcome>>();
    DescribeInternetAddressStatisticsAsync(
    request,
    [prom](
        const DcClient*,
        const DescribeInternetAddressStatisticsRequest&,
        DescribeInternetAddressStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::DescribePublicDirectConnectTunnelRoutesOutcome DcClient::DescribePublicDirectConnectTunnelRoutes(const DescribePublicDirectConnectTunnelRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicDirectConnectTunnelRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicDirectConnectTunnelRoutesResponse rsp = DescribePublicDirectConnectTunnelRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicDirectConnectTunnelRoutesOutcome(rsp);
        else
            return DescribePublicDirectConnectTunnelRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribePublicDirectConnectTunnelRoutesOutcome(outcome.GetError());
    }
}

void DcClient::DescribePublicDirectConnectTunnelRoutesAsync(const DescribePublicDirectConnectTunnelRoutesRequest& request, const DescribePublicDirectConnectTunnelRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicDirectConnectTunnelRoutesRequest&;
    using Resp = DescribePublicDirectConnectTunnelRoutesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicDirectConnectTunnelRoutes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DescribePublicDirectConnectTunnelRoutesOutcomeCallable DcClient::DescribePublicDirectConnectTunnelRoutesCallable(const DescribePublicDirectConnectTunnelRoutesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicDirectConnectTunnelRoutesOutcome>>();
    DescribePublicDirectConnectTunnelRoutesAsync(
    request,
    [prom](
        const DcClient*,
        const DescribePublicDirectConnectTunnelRoutesRequest&,
        DescribePublicDirectConnectTunnelRoutesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::DisableInternetAddressOutcome DcClient::DisableInternetAddress(const DisableInternetAddressRequest &request)
{
    auto outcome = MakeRequest(request, "DisableInternetAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableInternetAddressResponse rsp = DisableInternetAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableInternetAddressOutcome(rsp);
        else
            return DisableInternetAddressOutcome(o.GetError());
    }
    else
    {
        return DisableInternetAddressOutcome(outcome.GetError());
    }
}

void DcClient::DisableInternetAddressAsync(const DisableInternetAddressRequest& request, const DisableInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableInternetAddressRequest&;
    using Resp = DisableInternetAddressResponse;

    DoRequestAsync<Req, Resp>(
        "DisableInternetAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::DisableInternetAddressOutcomeCallable DcClient::DisableInternetAddressCallable(const DisableInternetAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableInternetAddressOutcome>>();
    DisableInternetAddressAsync(
    request,
    [prom](
        const DcClient*,
        const DisableInternetAddressRequest&,
        DisableInternetAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::EnableInternetAddressOutcome DcClient::EnableInternetAddress(const EnableInternetAddressRequest &request)
{
    auto outcome = MakeRequest(request, "EnableInternetAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableInternetAddressResponse rsp = EnableInternetAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableInternetAddressOutcome(rsp);
        else
            return EnableInternetAddressOutcome(o.GetError());
    }
    else
    {
        return EnableInternetAddressOutcome(outcome.GetError());
    }
}

void DcClient::EnableInternetAddressAsync(const EnableInternetAddressRequest& request, const EnableInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableInternetAddressRequest&;
    using Resp = EnableInternetAddressResponse;

    DoRequestAsync<Req, Resp>(
        "EnableInternetAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::EnableInternetAddressOutcomeCallable DcClient::EnableInternetAddressCallable(const EnableInternetAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableInternetAddressOutcome>>();
    EnableInternetAddressAsync(
    request,
    [prom](
        const DcClient*,
        const EnableInternetAddressRequest&,
        EnableInternetAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDirectConnectAttributeRequest&;
    using Resp = ModifyDirectConnectAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDirectConnectAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::ModifyDirectConnectAttributeOutcomeCallable DcClient::ModifyDirectConnectAttributeCallable(const ModifyDirectConnectAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDirectConnectAttributeOutcome>>();
    ModifyDirectConnectAttributeAsync(
    request,
    [prom](
        const DcClient*,
        const ModifyDirectConnectAttributeRequest&,
        ModifyDirectConnectAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyDirectConnectTunnelAttributeRequest&;
    using Resp = ModifyDirectConnectTunnelAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDirectConnectTunnelAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::ModifyDirectConnectTunnelAttributeOutcomeCallable DcClient::ModifyDirectConnectTunnelAttributeCallable(const ModifyDirectConnectTunnelAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDirectConnectTunnelAttributeOutcome>>();
    ModifyDirectConnectTunnelAttributeAsync(
    request,
    [prom](
        const DcClient*,
        const ModifyDirectConnectTunnelAttributeRequest&,
        ModifyDirectConnectTunnelAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::ModifyDirectConnectTunnelExtraOutcome DcClient::ModifyDirectConnectTunnelExtra(const ModifyDirectConnectTunnelExtraRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDirectConnectTunnelExtra");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDirectConnectTunnelExtraResponse rsp = ModifyDirectConnectTunnelExtraResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDirectConnectTunnelExtraOutcome(rsp);
        else
            return ModifyDirectConnectTunnelExtraOutcome(o.GetError());
    }
    else
    {
        return ModifyDirectConnectTunnelExtraOutcome(outcome.GetError());
    }
}

void DcClient::ModifyDirectConnectTunnelExtraAsync(const ModifyDirectConnectTunnelExtraRequest& request, const ModifyDirectConnectTunnelExtraAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDirectConnectTunnelExtraRequest&;
    using Resp = ModifyDirectConnectTunnelExtraResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDirectConnectTunnelExtra", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::ModifyDirectConnectTunnelExtraOutcomeCallable DcClient::ModifyDirectConnectTunnelExtraCallable(const ModifyDirectConnectTunnelExtraRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDirectConnectTunnelExtraOutcome>>();
    ModifyDirectConnectTunnelExtraAsync(
    request,
    [prom](
        const DcClient*,
        const ModifyDirectConnectTunnelExtraRequest&,
        ModifyDirectConnectTunnelExtraOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RejectDirectConnectTunnelRequest&;
    using Resp = RejectDirectConnectTunnelResponse;

    DoRequestAsync<Req, Resp>(
        "RejectDirectConnectTunnel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::RejectDirectConnectTunnelOutcomeCallable DcClient::RejectDirectConnectTunnelCallable(const RejectDirectConnectTunnelRequest &request)
{
    const auto prom = std::make_shared<std::promise<RejectDirectConnectTunnelOutcome>>();
    RejectDirectConnectTunnelAsync(
    request,
    [prom](
        const DcClient*,
        const RejectDirectConnectTunnelRequest&,
        RejectDirectConnectTunnelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DcClient::ReleaseInternetAddressOutcome DcClient::ReleaseInternetAddress(const ReleaseInternetAddressRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseInternetAddress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseInternetAddressResponse rsp = ReleaseInternetAddressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseInternetAddressOutcome(rsp);
        else
            return ReleaseInternetAddressOutcome(o.GetError());
    }
    else
    {
        return ReleaseInternetAddressOutcome(outcome.GetError());
    }
}

void DcClient::ReleaseInternetAddressAsync(const ReleaseInternetAddressRequest& request, const ReleaseInternetAddressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseInternetAddressRequest&;
    using Resp = ReleaseInternetAddressResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseInternetAddress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DcClient::ReleaseInternetAddressOutcomeCallable DcClient::ReleaseInternetAddressCallable(const ReleaseInternetAddressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseInternetAddressOutcome>>();
    ReleaseInternetAddressAsync(
    request,
    [prom](
        const DcClient*,
        const ReleaseInternetAddressRequest&,
        ReleaseInternetAddressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

