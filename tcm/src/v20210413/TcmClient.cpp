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

#include <tencentcloud/tcm/v20210413/TcmClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tcm::V20210413;
using namespace TencentCloud::Tcm::V20210413::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-04-13";
    const string ENDPOINT = "tcm.tencentcloudapi.com";
}

TcmClient::TcmClient(const Credential &credential, const string &region) :
    TcmClient(credential, region, ClientProfile())
{
}

TcmClient::TcmClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TcmClient::CreateMeshOutcome TcmClient::CreateMesh(const CreateMeshRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMeshResponse rsp = CreateMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMeshOutcome(rsp);
        else
            return CreateMeshOutcome(o.GetError());
    }
    else
    {
        return CreateMeshOutcome(outcome.GetError());
    }
}

void TcmClient::CreateMeshAsync(const CreateMeshRequest& request, const CreateMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMeshRequest&;
    using Resp = CreateMeshResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMesh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::CreateMeshOutcomeCallable TcmClient::CreateMeshCallable(const CreateMeshRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMeshOutcome>>();
    CreateMeshAsync(
    request,
    [prom](
        const TcmClient*,
        const CreateMeshRequest&,
        CreateMeshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::DeleteMeshOutcome TcmClient::DeleteMesh(const DeleteMeshRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMeshResponse rsp = DeleteMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMeshOutcome(rsp);
        else
            return DeleteMeshOutcome(o.GetError());
    }
    else
    {
        return DeleteMeshOutcome(outcome.GetError());
    }
}

void TcmClient::DeleteMeshAsync(const DeleteMeshRequest& request, const DeleteMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMeshRequest&;
    using Resp = DeleteMeshResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMesh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::DeleteMeshOutcomeCallable TcmClient::DeleteMeshCallable(const DeleteMeshRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMeshOutcome>>();
    DeleteMeshAsync(
    request,
    [prom](
        const TcmClient*,
        const DeleteMeshRequest&,
        DeleteMeshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::DescribeAccessLogConfigOutcome TcmClient::DescribeAccessLogConfig(const DescribeAccessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAccessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAccessLogConfigResponse rsp = DescribeAccessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAccessLogConfigOutcome(rsp);
        else
            return DescribeAccessLogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeAccessLogConfigOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeAccessLogConfigAsync(const DescribeAccessLogConfigRequest& request, const DescribeAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAccessLogConfigRequest&;
    using Resp = DescribeAccessLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAccessLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::DescribeAccessLogConfigOutcomeCallable TcmClient::DescribeAccessLogConfigCallable(const DescribeAccessLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAccessLogConfigOutcome>>();
    DescribeAccessLogConfigAsync(
    request,
    [prom](
        const TcmClient*,
        const DescribeAccessLogConfigRequest&,
        DescribeAccessLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::DescribeMeshOutcome TcmClient::DescribeMesh(const DescribeMeshRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMeshResponse rsp = DescribeMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMeshOutcome(rsp);
        else
            return DescribeMeshOutcome(o.GetError());
    }
    else
    {
        return DescribeMeshOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeMeshAsync(const DescribeMeshRequest& request, const DescribeMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMeshRequest&;
    using Resp = DescribeMeshResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMesh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::DescribeMeshOutcomeCallable TcmClient::DescribeMeshCallable(const DescribeMeshRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMeshOutcome>>();
    DescribeMeshAsync(
    request,
    [prom](
        const TcmClient*,
        const DescribeMeshRequest&,
        DescribeMeshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::DescribeMeshListOutcome TcmClient::DescribeMeshList(const DescribeMeshListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMeshList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMeshListResponse rsp = DescribeMeshListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMeshListOutcome(rsp);
        else
            return DescribeMeshListOutcome(o.GetError());
    }
    else
    {
        return DescribeMeshListOutcome(outcome.GetError());
    }
}

void TcmClient::DescribeMeshListAsync(const DescribeMeshListRequest& request, const DescribeMeshListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMeshListRequest&;
    using Resp = DescribeMeshListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMeshList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::DescribeMeshListOutcomeCallable TcmClient::DescribeMeshListCallable(const DescribeMeshListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMeshListOutcome>>();
    DescribeMeshListAsync(
    request,
    [prom](
        const TcmClient*,
        const DescribeMeshListRequest&,
        DescribeMeshListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::LinkClusterListOutcome TcmClient::LinkClusterList(const LinkClusterListRequest &request)
{
    auto outcome = MakeRequest(request, "LinkClusterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LinkClusterListResponse rsp = LinkClusterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LinkClusterListOutcome(rsp);
        else
            return LinkClusterListOutcome(o.GetError());
    }
    else
    {
        return LinkClusterListOutcome(outcome.GetError());
    }
}

void TcmClient::LinkClusterListAsync(const LinkClusterListRequest& request, const LinkClusterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LinkClusterListRequest&;
    using Resp = LinkClusterListResponse;

    DoRequestAsync<Req, Resp>(
        "LinkClusterList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::LinkClusterListOutcomeCallable TcmClient::LinkClusterListCallable(const LinkClusterListRequest &request)
{
    const auto prom = std::make_shared<std::promise<LinkClusterListOutcome>>();
    LinkClusterListAsync(
    request,
    [prom](
        const TcmClient*,
        const LinkClusterListRequest&,
        LinkClusterListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::LinkPrometheusOutcome TcmClient::LinkPrometheus(const LinkPrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "LinkPrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LinkPrometheusResponse rsp = LinkPrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LinkPrometheusOutcome(rsp);
        else
            return LinkPrometheusOutcome(o.GetError());
    }
    else
    {
        return LinkPrometheusOutcome(outcome.GetError());
    }
}

void TcmClient::LinkPrometheusAsync(const LinkPrometheusRequest& request, const LinkPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LinkPrometheusRequest&;
    using Resp = LinkPrometheusResponse;

    DoRequestAsync<Req, Resp>(
        "LinkPrometheus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::LinkPrometheusOutcomeCallable TcmClient::LinkPrometheusCallable(const LinkPrometheusRequest &request)
{
    const auto prom = std::make_shared<std::promise<LinkPrometheusOutcome>>();
    LinkPrometheusAsync(
    request,
    [prom](
        const TcmClient*,
        const LinkPrometheusRequest&,
        LinkPrometheusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::ModifyAccessLogConfigOutcome TcmClient::ModifyAccessLogConfig(const ModifyAccessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAccessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAccessLogConfigResponse rsp = ModifyAccessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAccessLogConfigOutcome(rsp);
        else
            return ModifyAccessLogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyAccessLogConfigOutcome(outcome.GetError());
    }
}

void TcmClient::ModifyAccessLogConfigAsync(const ModifyAccessLogConfigRequest& request, const ModifyAccessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAccessLogConfigRequest&;
    using Resp = ModifyAccessLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAccessLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::ModifyAccessLogConfigOutcomeCallable TcmClient::ModifyAccessLogConfigCallable(const ModifyAccessLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAccessLogConfigOutcome>>();
    ModifyAccessLogConfigAsync(
    request,
    [prom](
        const TcmClient*,
        const ModifyAccessLogConfigRequest&,
        ModifyAccessLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::ModifyMeshOutcome TcmClient::ModifyMesh(const ModifyMeshRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMesh");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMeshResponse rsp = ModifyMeshResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMeshOutcome(rsp);
        else
            return ModifyMeshOutcome(o.GetError());
    }
    else
    {
        return ModifyMeshOutcome(outcome.GetError());
    }
}

void TcmClient::ModifyMeshAsync(const ModifyMeshRequest& request, const ModifyMeshAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMeshRequest&;
    using Resp = ModifyMeshResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMesh", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::ModifyMeshOutcomeCallable TcmClient::ModifyMeshCallable(const ModifyMeshRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMeshOutcome>>();
    ModifyMeshAsync(
    request,
    [prom](
        const TcmClient*,
        const ModifyMeshRequest&,
        ModifyMeshOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::ModifyTracingConfigOutcome TcmClient::ModifyTracingConfig(const ModifyTracingConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTracingConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTracingConfigResponse rsp = ModifyTracingConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTracingConfigOutcome(rsp);
        else
            return ModifyTracingConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyTracingConfigOutcome(outcome.GetError());
    }
}

void TcmClient::ModifyTracingConfigAsync(const ModifyTracingConfigRequest& request, const ModifyTracingConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTracingConfigRequest&;
    using Resp = ModifyTracingConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTracingConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::ModifyTracingConfigOutcomeCallable TcmClient::ModifyTracingConfigCallable(const ModifyTracingConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTracingConfigOutcome>>();
    ModifyTracingConfigAsync(
    request,
    [prom](
        const TcmClient*,
        const ModifyTracingConfigRequest&,
        ModifyTracingConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::UnlinkClusterOutcome TcmClient::UnlinkCluster(const UnlinkClusterRequest &request)
{
    auto outcome = MakeRequest(request, "UnlinkCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlinkClusterResponse rsp = UnlinkClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlinkClusterOutcome(rsp);
        else
            return UnlinkClusterOutcome(o.GetError());
    }
    else
    {
        return UnlinkClusterOutcome(outcome.GetError());
    }
}

void TcmClient::UnlinkClusterAsync(const UnlinkClusterRequest& request, const UnlinkClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnlinkClusterRequest&;
    using Resp = UnlinkClusterResponse;

    DoRequestAsync<Req, Resp>(
        "UnlinkCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::UnlinkClusterOutcomeCallable TcmClient::UnlinkClusterCallable(const UnlinkClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnlinkClusterOutcome>>();
    UnlinkClusterAsync(
    request,
    [prom](
        const TcmClient*,
        const UnlinkClusterRequest&,
        UnlinkClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TcmClient::UnlinkPrometheusOutcome TcmClient::UnlinkPrometheus(const UnlinkPrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "UnlinkPrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnlinkPrometheusResponse rsp = UnlinkPrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnlinkPrometheusOutcome(rsp);
        else
            return UnlinkPrometheusOutcome(o.GetError());
    }
    else
    {
        return UnlinkPrometheusOutcome(outcome.GetError());
    }
}

void TcmClient::UnlinkPrometheusAsync(const UnlinkPrometheusRequest& request, const UnlinkPrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnlinkPrometheusRequest&;
    using Resp = UnlinkPrometheusResponse;

    DoRequestAsync<Req, Resp>(
        "UnlinkPrometheus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TcmClient::UnlinkPrometheusOutcomeCallable TcmClient::UnlinkPrometheusCallable(const UnlinkPrometheusRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnlinkPrometheusOutcome>>();
    UnlinkPrometheusAsync(
    request,
    [prom](
        const TcmClient*,
        const UnlinkPrometheusRequest&,
        UnlinkPrometheusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

