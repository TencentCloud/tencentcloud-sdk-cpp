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

#include <tencentcloud/dbdc/v20201029/DbdcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dbdc::V20201029;
using namespace TencentCloud::Dbdc::V20201029::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-10-29";
    const string ENDPOINT = "dbdc.tencentcloudapi.com";
}

DbdcClient::DbdcClient(const Credential &credential, const string &region) :
    DbdcClient(credential, region, ClientProfile())
{
}

DbdcClient::DbdcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DbdcClient::AddNodesToDBCustomClusterOutcome DbdcClient::AddNodesToDBCustomCluster(const AddNodesToDBCustomClusterRequest &request)
{
    auto outcome = MakeRequest(request, "AddNodesToDBCustomCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNodesToDBCustomClusterResponse rsp = AddNodesToDBCustomClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNodesToDBCustomClusterOutcome(rsp);
        else
            return AddNodesToDBCustomClusterOutcome(o.GetError());
    }
    else
    {
        return AddNodesToDBCustomClusterOutcome(outcome.GetError());
    }
}

void DbdcClient::AddNodesToDBCustomClusterAsync(const AddNodesToDBCustomClusterRequest& request, const AddNodesToDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNodesToDBCustomClusterRequest&;
    using Resp = AddNodesToDBCustomClusterResponse;

    DoRequestAsync<Req, Resp>(
        "AddNodesToDBCustomCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::AddNodesToDBCustomClusterOutcomeCallable DbdcClient::AddNodesToDBCustomClusterCallable(const AddNodesToDBCustomClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNodesToDBCustomClusterOutcome>>();
    AddNodesToDBCustomClusterAsync(
    request,
    [prom](
        const DbdcClient*,
        const AddNodesToDBCustomClusterRequest&,
        AddNodesToDBCustomClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::CheckRoleAuthorizedOutcome DbdcClient::CheckRoleAuthorized(const CheckRoleAuthorizedRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRoleAuthorized");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRoleAuthorizedResponse rsp = CheckRoleAuthorizedResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRoleAuthorizedOutcome(rsp);
        else
            return CheckRoleAuthorizedOutcome(o.GetError());
    }
    else
    {
        return CheckRoleAuthorizedOutcome(outcome.GetError());
    }
}

void DbdcClient::CheckRoleAuthorizedAsync(const CheckRoleAuthorizedRequest& request, const CheckRoleAuthorizedAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckRoleAuthorizedRequest&;
    using Resp = CheckRoleAuthorizedResponse;

    DoRequestAsync<Req, Resp>(
        "CheckRoleAuthorized", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::CheckRoleAuthorizedOutcomeCallable DbdcClient::CheckRoleAuthorizedCallable(const CheckRoleAuthorizedRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckRoleAuthorizedOutcome>>();
    CheckRoleAuthorizedAsync(
    request,
    [prom](
        const DbdcClient*,
        const CheckRoleAuthorizedRequest&,
        CheckRoleAuthorizedOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::CreateDBCustomClusterOutcome DbdcClient::CreateDBCustomCluster(const CreateDBCustomClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBCustomCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBCustomClusterResponse rsp = CreateDBCustomClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBCustomClusterOutcome(rsp);
        else
            return CreateDBCustomClusterOutcome(o.GetError());
    }
    else
    {
        return CreateDBCustomClusterOutcome(outcome.GetError());
    }
}

void DbdcClient::CreateDBCustomClusterAsync(const CreateDBCustomClusterRequest& request, const CreateDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBCustomClusterRequest&;
    using Resp = CreateDBCustomClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBCustomCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::CreateDBCustomClusterOutcomeCallable DbdcClient::CreateDBCustomClusterCallable(const CreateDBCustomClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBCustomClusterOutcome>>();
    CreateDBCustomClusterAsync(
    request,
    [prom](
        const DbdcClient*,
        const CreateDBCustomClusterRequest&,
        CreateDBCustomClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::CreateDBCustomNodesOutcome DbdcClient::CreateDBCustomNodes(const CreateDBCustomNodesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDBCustomNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDBCustomNodesResponse rsp = CreateDBCustomNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDBCustomNodesOutcome(rsp);
        else
            return CreateDBCustomNodesOutcome(o.GetError());
    }
    else
    {
        return CreateDBCustomNodesOutcome(outcome.GetError());
    }
}

void DbdcClient::CreateDBCustomNodesAsync(const CreateDBCustomNodesRequest& request, const CreateDBCustomNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDBCustomNodesRequest&;
    using Resp = CreateDBCustomNodesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDBCustomNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::CreateDBCustomNodesOutcomeCallable DbdcClient::CreateDBCustomNodesCallable(const CreateDBCustomNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDBCustomNodesOutcome>>();
    CreateDBCustomNodesAsync(
    request,
    [prom](
        const DbdcClient*,
        const CreateDBCustomNodesRequest&,
        CreateDBCustomNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomClusterDetailOutcome DbdcClient::DescribeDBCustomClusterDetail(const DescribeDBCustomClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomClusterDetailResponse rsp = DescribeDBCustomClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomClusterDetailOutcome(rsp);
        else
            return DescribeDBCustomClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomClusterDetailOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomClusterDetailAsync(const DescribeDBCustomClusterDetailRequest& request, const DescribeDBCustomClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomClusterDetailRequest&;
    using Resp = DescribeDBCustomClusterDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomClusterDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomClusterDetailOutcomeCallable DbdcClient::DescribeDBCustomClusterDetailCallable(const DescribeDBCustomClusterDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomClusterDetailOutcome>>();
    DescribeDBCustomClusterDetailAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomClusterDetailRequest&,
        DescribeDBCustomClusterDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomClusterKubeconfigOutcome DbdcClient::DescribeDBCustomClusterKubeconfig(const DescribeDBCustomClusterKubeconfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomClusterKubeconfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomClusterKubeconfigResponse rsp = DescribeDBCustomClusterKubeconfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomClusterKubeconfigOutcome(rsp);
        else
            return DescribeDBCustomClusterKubeconfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomClusterKubeconfigOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomClusterKubeconfigAsync(const DescribeDBCustomClusterKubeconfigRequest& request, const DescribeDBCustomClusterKubeconfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomClusterKubeconfigRequest&;
    using Resp = DescribeDBCustomClusterKubeconfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomClusterKubeconfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomClusterKubeconfigOutcomeCallable DbdcClient::DescribeDBCustomClusterKubeconfigCallable(const DescribeDBCustomClusterKubeconfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomClusterKubeconfigOutcome>>();
    DescribeDBCustomClusterKubeconfigAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomClusterKubeconfigRequest&,
        DescribeDBCustomClusterKubeconfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomClusterNodesOutcome DbdcClient::DescribeDBCustomClusterNodes(const DescribeDBCustomClusterNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomClusterNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomClusterNodesResponse rsp = DescribeDBCustomClusterNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomClusterNodesOutcome(rsp);
        else
            return DescribeDBCustomClusterNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomClusterNodesOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomClusterNodesAsync(const DescribeDBCustomClusterNodesRequest& request, const DescribeDBCustomClusterNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomClusterNodesRequest&;
    using Resp = DescribeDBCustomClusterNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomClusterNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomClusterNodesOutcomeCallable DbdcClient::DescribeDBCustomClusterNodesCallable(const DescribeDBCustomClusterNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomClusterNodesOutcome>>();
    DescribeDBCustomClusterNodesAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomClusterNodesRequest&,
        DescribeDBCustomClusterNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomClustersOutcome DbdcClient::DescribeDBCustomClusters(const DescribeDBCustomClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomClustersResponse rsp = DescribeDBCustomClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomClustersOutcome(rsp);
        else
            return DescribeDBCustomClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomClustersOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomClustersAsync(const DescribeDBCustomClustersRequest& request, const DescribeDBCustomClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomClustersRequest&;
    using Resp = DescribeDBCustomClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomClustersOutcomeCallable DbdcClient::DescribeDBCustomClustersCallable(const DescribeDBCustomClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomClustersOutcome>>();
    DescribeDBCustomClustersAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomClustersRequest&,
        DescribeDBCustomClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomImagesOutcome DbdcClient::DescribeDBCustomImages(const DescribeDBCustomImagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomImages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomImagesResponse rsp = DescribeDBCustomImagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomImagesOutcome(rsp);
        else
            return DescribeDBCustomImagesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomImagesOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomImagesAsync(const DescribeDBCustomImagesRequest& request, const DescribeDBCustomImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomImagesRequest&;
    using Resp = DescribeDBCustomImagesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomImages", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomImagesOutcomeCallable DbdcClient::DescribeDBCustomImagesCallable(const DescribeDBCustomImagesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomImagesOutcome>>();
    DescribeDBCustomImagesAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomImagesRequest&,
        DescribeDBCustomImagesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomNodesOutcome DbdcClient::DescribeDBCustomNodes(const DescribeDBCustomNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomNodesResponse rsp = DescribeDBCustomNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomNodesOutcome(rsp);
        else
            return DescribeDBCustomNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomNodesOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomNodesAsync(const DescribeDBCustomNodesRequest& request, const DescribeDBCustomNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomNodesRequest&;
    using Resp = DescribeDBCustomNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomNodesOutcomeCallable DbdcClient::DescribeDBCustomNodesCallable(const DescribeDBCustomNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomNodesOutcome>>();
    DescribeDBCustomNodesAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomNodesRequest&,
        DescribeDBCustomNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBCustomTaskStatusOutcome DbdcClient::DescribeDBCustomTaskStatus(const DescribeDBCustomTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBCustomTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBCustomTaskStatusResponse rsp = DescribeDBCustomTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBCustomTaskStatusOutcome(rsp);
        else
            return DescribeDBCustomTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeDBCustomTaskStatusOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBCustomTaskStatusAsync(const DescribeDBCustomTaskStatusRequest& request, const DescribeDBCustomTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBCustomTaskStatusRequest&;
    using Resp = DescribeDBCustomTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBCustomTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBCustomTaskStatusOutcomeCallable DbdcClient::DescribeDBCustomTaskStatusCallable(const DescribeDBCustomTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBCustomTaskStatusOutcome>>();
    DescribeDBCustomTaskStatusAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBCustomTaskStatusRequest&,
        DescribeDBCustomTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeDBInstancesOutcome DbdcClient::DescribeDBInstances(const DescribeDBInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDBInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDBInstancesResponse rsp = DescribeDBInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDBInstancesOutcome(rsp);
        else
            return DescribeDBInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeDBInstancesOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeDBInstancesAsync(const DescribeDBInstancesRequest& request, const DescribeDBInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDBInstancesRequest&;
    using Resp = DescribeDBInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDBInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeDBInstancesOutcomeCallable DbdcClient::DescribeDBInstancesCallable(const DescribeDBInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDBInstancesOutcome>>();
    DescribeDBInstancesAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeDBInstancesRequest&,
        DescribeDBInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeHostListOutcome DbdcClient::DescribeHostList(const DescribeHostListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostListResponse rsp = DescribeHostListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostListOutcome(rsp);
        else
            return DescribeHostListOutcome(o.GetError());
    }
    else
    {
        return DescribeHostListOutcome(outcome.GetError());
    }
}

void DbdcClient::DescribeHostListAsync(const DescribeHostListRequest& request, const DescribeHostListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeHostListRequest&;
    using Resp = DescribeHostListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeHostList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeHostListOutcomeCallable DbdcClient::DescribeHostListCallable(const DescribeHostListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeHostListOutcome>>();
    DescribeHostListAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeHostListRequest&,
        DescribeHostListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeInstanceDetailOutcome DbdcClient::DescribeInstanceDetail(const DescribeInstanceDetailRequest &request)
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

void DbdcClient::DescribeInstanceDetailAsync(const DescribeInstanceDetailRequest& request, const DescribeInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceDetailRequest&;
    using Resp = DescribeInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeInstanceDetailOutcomeCallable DbdcClient::DescribeInstanceDetailCallable(const DescribeInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceDetailOutcome>>();
    DescribeInstanceDetailAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeInstanceDetailRequest&,
        DescribeInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeInstanceListOutcome DbdcClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
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

void DbdcClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstanceListRequest&;
    using Resp = DescribeInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DescribeInstanceListOutcomeCallable DbdcClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceListOutcome>>();
    DescribeInstanceListAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeInstanceListRequest&,
        DescribeInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DescribeInstancesOutcome DbdcClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void DbdcClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

DbdcClient::DescribeInstancesOutcomeCallable DbdcClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const DbdcClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DestroyDBCustomClusterOutcome DbdcClient::DestroyDBCustomCluster(const DestroyDBCustomClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDBCustomCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDBCustomClusterResponse rsp = DestroyDBCustomClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDBCustomClusterOutcome(rsp);
        else
            return DestroyDBCustomClusterOutcome(o.GetError());
    }
    else
    {
        return DestroyDBCustomClusterOutcome(outcome.GetError());
    }
}

void DbdcClient::DestroyDBCustomClusterAsync(const DestroyDBCustomClusterRequest& request, const DestroyDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyDBCustomClusterRequest&;
    using Resp = DestroyDBCustomClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyDBCustomCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DestroyDBCustomClusterOutcomeCallable DbdcClient::DestroyDBCustomClusterCallable(const DestroyDBCustomClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyDBCustomClusterOutcome>>();
    DestroyDBCustomClusterAsync(
    request,
    [prom](
        const DbdcClient*,
        const DestroyDBCustomClusterRequest&,
        DestroyDBCustomClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::DestroyDBCustomNodeOutcome DbdcClient::DestroyDBCustomNode(const DestroyDBCustomNodeRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyDBCustomNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyDBCustomNodeResponse rsp = DestroyDBCustomNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyDBCustomNodeOutcome(rsp);
        else
            return DestroyDBCustomNodeOutcome(o.GetError());
    }
    else
    {
        return DestroyDBCustomNodeOutcome(outcome.GetError());
    }
}

void DbdcClient::DestroyDBCustomNodeAsync(const DestroyDBCustomNodeRequest& request, const DestroyDBCustomNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyDBCustomNodeRequest&;
    using Resp = DestroyDBCustomNodeResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyDBCustomNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::DestroyDBCustomNodeOutcomeCallable DbdcClient::DestroyDBCustomNodeCallable(const DestroyDBCustomNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyDBCustomNodeOutcome>>();
    DestroyDBCustomNodeAsync(
    request,
    [prom](
        const DbdcClient*,
        const DestroyDBCustomNodeRequest&,
        DestroyDBCustomNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::IsolateDBCustomNodeOutcome DbdcClient::IsolateDBCustomNode(const IsolateDBCustomNodeRequest &request)
{
    auto outcome = MakeRequest(request, "IsolateDBCustomNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IsolateDBCustomNodeResponse rsp = IsolateDBCustomNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IsolateDBCustomNodeOutcome(rsp);
        else
            return IsolateDBCustomNodeOutcome(o.GetError());
    }
    else
    {
        return IsolateDBCustomNodeOutcome(outcome.GetError());
    }
}

void DbdcClient::IsolateDBCustomNodeAsync(const IsolateDBCustomNodeRequest& request, const IsolateDBCustomNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const IsolateDBCustomNodeRequest&;
    using Resp = IsolateDBCustomNodeResponse;

    DoRequestAsync<Req, Resp>(
        "IsolateDBCustomNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::IsolateDBCustomNodeOutcomeCallable DbdcClient::IsolateDBCustomNodeCallable(const IsolateDBCustomNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<IsolateDBCustomNodeOutcome>>();
    IsolateDBCustomNodeAsync(
    request,
    [prom](
        const DbdcClient*,
        const IsolateDBCustomNodeRequest&,
        IsolateDBCustomNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::ModifyDBCustomClusterTagsOutcome DbdcClient::ModifyDBCustomClusterTags(const ModifyDBCustomClusterTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBCustomClusterTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBCustomClusterTagsResponse rsp = ModifyDBCustomClusterTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBCustomClusterTagsOutcome(rsp);
        else
            return ModifyDBCustomClusterTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBCustomClusterTagsOutcome(outcome.GetError());
    }
}

void DbdcClient::ModifyDBCustomClusterTagsAsync(const ModifyDBCustomClusterTagsRequest& request, const ModifyDBCustomClusterTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBCustomClusterTagsRequest&;
    using Resp = ModifyDBCustomClusterTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBCustomClusterTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::ModifyDBCustomClusterTagsOutcomeCallable DbdcClient::ModifyDBCustomClusterTagsCallable(const ModifyDBCustomClusterTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBCustomClusterTagsOutcome>>();
    ModifyDBCustomClusterTagsAsync(
    request,
    [prom](
        const DbdcClient*,
        const ModifyDBCustomClusterTagsRequest&,
        ModifyDBCustomClusterTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::ModifyDBCustomNodeTagsOutcome DbdcClient::ModifyDBCustomNodeTags(const ModifyDBCustomNodeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDBCustomNodeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDBCustomNodeTagsResponse rsp = ModifyDBCustomNodeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDBCustomNodeTagsOutcome(rsp);
        else
            return ModifyDBCustomNodeTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyDBCustomNodeTagsOutcome(outcome.GetError());
    }
}

void DbdcClient::ModifyDBCustomNodeTagsAsync(const ModifyDBCustomNodeTagsRequest& request, const ModifyDBCustomNodeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDBCustomNodeTagsRequest&;
    using Resp = ModifyDBCustomNodeTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDBCustomNodeTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::ModifyDBCustomNodeTagsOutcomeCallable DbdcClient::ModifyDBCustomNodeTagsCallable(const ModifyDBCustomNodeTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDBCustomNodeTagsOutcome>>();
    ModifyDBCustomNodeTagsAsync(
    request,
    [prom](
        const DbdcClient*,
        const ModifyDBCustomNodeTagsRequest&,
        ModifyDBCustomNodeTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::ModifyInstanceNameOutcome DbdcClient::ModifyInstanceName(const ModifyInstanceNameRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceName");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceNameResponse rsp = ModifyInstanceNameResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceNameOutcome(rsp);
        else
            return ModifyInstanceNameOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceNameOutcome(outcome.GetError());
    }
}

void DbdcClient::ModifyInstanceNameAsync(const ModifyInstanceNameRequest& request, const ModifyInstanceNameAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInstanceNameRequest&;
    using Resp = ModifyInstanceNameResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceName", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::ModifyInstanceNameOutcomeCallable DbdcClient::ModifyInstanceNameCallable(const ModifyInstanceNameRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceNameOutcome>>();
    ModifyInstanceNameAsync(
    request,
    [prom](
        const DbdcClient*,
        const ModifyInstanceNameRequest&,
        ModifyInstanceNameOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::RemoveNodesFromDBCustomClusterOutcome DbdcClient::RemoveNodesFromDBCustomCluster(const RemoveNodesFromDBCustomClusterRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveNodesFromDBCustomCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveNodesFromDBCustomClusterResponse rsp = RemoveNodesFromDBCustomClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveNodesFromDBCustomClusterOutcome(rsp);
        else
            return RemoveNodesFromDBCustomClusterOutcome(o.GetError());
    }
    else
    {
        return RemoveNodesFromDBCustomClusterOutcome(outcome.GetError());
    }
}

void DbdcClient::RemoveNodesFromDBCustomClusterAsync(const RemoveNodesFromDBCustomClusterRequest& request, const RemoveNodesFromDBCustomClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveNodesFromDBCustomClusterRequest&;
    using Resp = RemoveNodesFromDBCustomClusterResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveNodesFromDBCustomCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::RemoveNodesFromDBCustomClusterOutcomeCallable DbdcClient::RemoveNodesFromDBCustomClusterCallable(const RemoveNodesFromDBCustomClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveNodesFromDBCustomClusterOutcome>>();
    RemoveNodesFromDBCustomClusterAsync(
    request,
    [prom](
        const DbdcClient*,
        const RemoveNodesFromDBCustomClusterRequest&,
        RemoveNodesFromDBCustomClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DbdcClient::RenewDBCustomNodeOutcome DbdcClient::RenewDBCustomNode(const RenewDBCustomNodeRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDBCustomNode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDBCustomNodeResponse rsp = RenewDBCustomNodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDBCustomNodeOutcome(rsp);
        else
            return RenewDBCustomNodeOutcome(o.GetError());
    }
    else
    {
        return RenewDBCustomNodeOutcome(outcome.GetError());
    }
}

void DbdcClient::RenewDBCustomNodeAsync(const RenewDBCustomNodeRequest& request, const RenewDBCustomNodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDBCustomNodeRequest&;
    using Resp = RenewDBCustomNodeResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDBCustomNode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DbdcClient::RenewDBCustomNodeOutcomeCallable DbdcClient::RenewDBCustomNodeCallable(const RenewDBCustomNodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDBCustomNodeOutcome>>();
    RenewDBCustomNodeAsync(
    request,
    [prom](
        const DbdcClient*,
        const RenewDBCustomNodeRequest&,
        RenewDBCustomNodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

