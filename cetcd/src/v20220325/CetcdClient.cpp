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

#include <tencentcloud/cetcd/v20220325/CetcdClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cetcd::V20220325;
using namespace TencentCloud::Cetcd::V20220325::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-03-25";
    const string ENDPOINT = "cetcd.tencentcloudapi.com";
}

CetcdClient::CetcdClient(const Credential &credential, const string &region) :
    CetcdClient(credential, region, ClientProfile())
{
}

CetcdClient::CetcdClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CetcdClient::CreateEtcdInstanceOutcome CetcdClient::CreateEtcdInstance(const CreateEtcdInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEtcdInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEtcdInstanceResponse rsp = CreateEtcdInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEtcdInstanceOutcome(rsp);
        else
            return CreateEtcdInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateEtcdInstanceOutcome(outcome.GetError());
    }
}

void CetcdClient::CreateEtcdInstanceAsync(const CreateEtcdInstanceRequest& request, const CreateEtcdInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEtcdInstanceRequest&;
    using Resp = CreateEtcdInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEtcdInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::CreateEtcdInstanceOutcomeCallable CetcdClient::CreateEtcdInstanceCallable(const CreateEtcdInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEtcdInstanceOutcome>>();
    CreateEtcdInstanceAsync(
    request,
    [prom](
        const CetcdClient*,
        const CreateEtcdInstanceRequest&,
        CreateEtcdInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::CreateEtcdSnapshotOutcome CetcdClient::CreateEtcdSnapshot(const CreateEtcdSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEtcdSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEtcdSnapshotResponse rsp = CreateEtcdSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEtcdSnapshotOutcome(rsp);
        else
            return CreateEtcdSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateEtcdSnapshotOutcome(outcome.GetError());
    }
}

void CetcdClient::CreateEtcdSnapshotAsync(const CreateEtcdSnapshotRequest& request, const CreateEtcdSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEtcdSnapshotRequest&;
    using Resp = CreateEtcdSnapshotResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEtcdSnapshot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::CreateEtcdSnapshotOutcomeCallable CetcdClient::CreateEtcdSnapshotCallable(const CreateEtcdSnapshotRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEtcdSnapshotOutcome>>();
    CreateEtcdSnapshotAsync(
    request,
    [prom](
        const CetcdClient*,
        const CreateEtcdSnapshotRequest&,
        CreateEtcdSnapshotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::CreateEtcdSnapshotPolicyOutcome CetcdClient::CreateEtcdSnapshotPolicy(const CreateEtcdSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEtcdSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEtcdSnapshotPolicyResponse rsp = CreateEtcdSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEtcdSnapshotPolicyOutcome(rsp);
        else
            return CreateEtcdSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateEtcdSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CetcdClient::CreateEtcdSnapshotPolicyAsync(const CreateEtcdSnapshotPolicyRequest& request, const CreateEtcdSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEtcdSnapshotPolicyRequest&;
    using Resp = CreateEtcdSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEtcdSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::CreateEtcdSnapshotPolicyOutcomeCallable CetcdClient::CreateEtcdSnapshotPolicyCallable(const CreateEtcdSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEtcdSnapshotPolicyOutcome>>();
    CreateEtcdSnapshotPolicyAsync(
    request,
    [prom](
        const CetcdClient*,
        const CreateEtcdSnapshotPolicyRequest&,
        CreateEtcdSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdAvailableVersionsOutcome CetcdClient::DescribeEtcdAvailableVersions(const DescribeEtcdAvailableVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdAvailableVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdAvailableVersionsResponse rsp = DescribeEtcdAvailableVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdAvailableVersionsOutcome(rsp);
        else
            return DescribeEtcdAvailableVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdAvailableVersionsOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdAvailableVersionsAsync(const DescribeEtcdAvailableVersionsRequest& request, const DescribeEtcdAvailableVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdAvailableVersionsRequest&;
    using Resp = DescribeEtcdAvailableVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdAvailableVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdAvailableVersionsOutcomeCallable CetcdClient::DescribeEtcdAvailableVersionsCallable(const DescribeEtcdAvailableVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdAvailableVersionsOutcome>>();
    DescribeEtcdAvailableVersionsAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdAvailableVersionsRequest&,
        DescribeEtcdAvailableVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdCreatingProgressOutcome CetcdClient::DescribeEtcdCreatingProgress(const DescribeEtcdCreatingProgressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdCreatingProgress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdCreatingProgressResponse rsp = DescribeEtcdCreatingProgressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdCreatingProgressOutcome(rsp);
        else
            return DescribeEtcdCreatingProgressOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdCreatingProgressOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdCreatingProgressAsync(const DescribeEtcdCreatingProgressRequest& request, const DescribeEtcdCreatingProgressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdCreatingProgressRequest&;
    using Resp = DescribeEtcdCreatingProgressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdCreatingProgress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdCreatingProgressOutcomeCallable CetcdClient::DescribeEtcdCreatingProgressCallable(const DescribeEtcdCreatingProgressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdCreatingProgressOutcome>>();
    DescribeEtcdCreatingProgressAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdCreatingProgressRequest&,
        DescribeEtcdCreatingProgressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdCredentialsOutcome CetcdClient::DescribeEtcdCredentials(const DescribeEtcdCredentialsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdCredentials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdCredentialsResponse rsp = DescribeEtcdCredentialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdCredentialsOutcome(rsp);
        else
            return DescribeEtcdCredentialsOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdCredentialsOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdCredentialsAsync(const DescribeEtcdCredentialsRequest& request, const DescribeEtcdCredentialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdCredentialsRequest&;
    using Resp = DescribeEtcdCredentialsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdCredentials", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdCredentialsOutcomeCallable CetcdClient::DescribeEtcdCredentialsCallable(const DescribeEtcdCredentialsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdCredentialsOutcome>>();
    DescribeEtcdCredentialsAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdCredentialsRequest&,
        DescribeEtcdCredentialsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdInstancesOutcome CetcdClient::DescribeEtcdInstances(const DescribeEtcdInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdInstancesResponse rsp = DescribeEtcdInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdInstancesOutcome(rsp);
        else
            return DescribeEtcdInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdInstancesOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdInstancesAsync(const DescribeEtcdInstancesRequest& request, const DescribeEtcdInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdInstancesRequest&;
    using Resp = DescribeEtcdInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdInstancesOutcomeCallable CetcdClient::DescribeEtcdInstancesCallable(const DescribeEtcdInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdInstancesOutcome>>();
    DescribeEtcdInstancesAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdInstancesRequest&,
        DescribeEtcdInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdQuotaOutcome CetcdClient::DescribeEtcdQuota(const DescribeEtcdQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdQuotaResponse rsp = DescribeEtcdQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdQuotaOutcome(rsp);
        else
            return DescribeEtcdQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdQuotaOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdQuotaAsync(const DescribeEtcdQuotaRequest& request, const DescribeEtcdQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdQuotaRequest&;
    using Resp = DescribeEtcdQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdQuotaOutcomeCallable CetcdClient::DescribeEtcdQuotaCallable(const DescribeEtcdQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdQuotaOutcome>>();
    DescribeEtcdQuotaAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdQuotaRequest&,
        DescribeEtcdQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdRegionsOutcome CetcdClient::DescribeEtcdRegions(const DescribeEtcdRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdRegionsResponse rsp = DescribeEtcdRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdRegionsOutcome(rsp);
        else
            return DescribeEtcdRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdRegionsOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdRegionsAsync(const DescribeEtcdRegionsRequest& request, const DescribeEtcdRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdRegionsRequest&;
    using Resp = DescribeEtcdRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdRegionsOutcomeCallable CetcdClient::DescribeEtcdRegionsCallable(const DescribeEtcdRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdRegionsOutcome>>();
    DescribeEtcdRegionsAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdRegionsRequest&,
        DescribeEtcdRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdSnapshotPoliciesOutcome CetcdClient::DescribeEtcdSnapshotPolicies(const DescribeEtcdSnapshotPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdSnapshotPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdSnapshotPoliciesResponse rsp = DescribeEtcdSnapshotPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdSnapshotPoliciesOutcome(rsp);
        else
            return DescribeEtcdSnapshotPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdSnapshotPoliciesOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdSnapshotPoliciesAsync(const DescribeEtcdSnapshotPoliciesRequest& request, const DescribeEtcdSnapshotPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdSnapshotPoliciesRequest&;
    using Resp = DescribeEtcdSnapshotPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdSnapshotPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdSnapshotPoliciesOutcomeCallable CetcdClient::DescribeEtcdSnapshotPoliciesCallable(const DescribeEtcdSnapshotPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdSnapshotPoliciesOutcome>>();
    DescribeEtcdSnapshotPoliciesAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdSnapshotPoliciesRequest&,
        DescribeEtcdSnapshotPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdSnapshotsOutcome CetcdClient::DescribeEtcdSnapshots(const DescribeEtcdSnapshotsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdSnapshots");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdSnapshotsResponse rsp = DescribeEtcdSnapshotsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdSnapshotsOutcome(rsp);
        else
            return DescribeEtcdSnapshotsOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdSnapshotsOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdSnapshotsAsync(const DescribeEtcdSnapshotsRequest& request, const DescribeEtcdSnapshotsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdSnapshotsRequest&;
    using Resp = DescribeEtcdSnapshotsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdSnapshots", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdSnapshotsOutcomeCallable CetcdClient::DescribeEtcdSnapshotsCallable(const DescribeEtcdSnapshotsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdSnapshotsOutcome>>();
    DescribeEtcdSnapshotsAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdSnapshotsRequest&,
        DescribeEtcdSnapshotsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeEtcdTasksOutcome CetcdClient::DescribeEtcdTasks(const DescribeEtcdTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEtcdTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEtcdTasksResponse rsp = DescribeEtcdTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEtcdTasksOutcome(rsp);
        else
            return DescribeEtcdTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeEtcdTasksOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeEtcdTasksAsync(const DescribeEtcdTasksRequest& request, const DescribeEtcdTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEtcdTasksRequest&;
    using Resp = DescribeEtcdTasksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEtcdTasks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeEtcdTasksOutcomeCallable CetcdClient::DescribeEtcdTasksCallable(const DescribeEtcdTasksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEtcdTasksOutcome>>();
    DescribeEtcdTasksAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeEtcdTasksRequest&,
        DescribeEtcdTasksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DescribeRPCMethodListOutcome CetcdClient::DescribeRPCMethodList(const DescribeRPCMethodListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRPCMethodList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRPCMethodListResponse rsp = DescribeRPCMethodListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRPCMethodListOutcome(rsp);
        else
            return DescribeRPCMethodListOutcome(o.GetError());
    }
    else
    {
        return DescribeRPCMethodListOutcome(outcome.GetError());
    }
}

void CetcdClient::DescribeRPCMethodListAsync(const DescribeRPCMethodListRequest& request, const DescribeRPCMethodListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRPCMethodListRequest&;
    using Resp = DescribeRPCMethodListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRPCMethodList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DescribeRPCMethodListOutcomeCallable CetcdClient::DescribeRPCMethodListCallable(const DescribeRPCMethodListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRPCMethodListOutcome>>();
    DescribeRPCMethodListAsync(
    request,
    [prom](
        const CetcdClient*,
        const DescribeRPCMethodListRequest&,
        DescribeRPCMethodListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::DisableEtcdInstanceDeletionProtectionOutcome CetcdClient::DisableEtcdInstanceDeletionProtection(const DisableEtcdInstanceDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DisableEtcdInstanceDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableEtcdInstanceDeletionProtectionResponse rsp = DisableEtcdInstanceDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableEtcdInstanceDeletionProtectionOutcome(rsp);
        else
            return DisableEtcdInstanceDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return DisableEtcdInstanceDeletionProtectionOutcome(outcome.GetError());
    }
}

void CetcdClient::DisableEtcdInstanceDeletionProtectionAsync(const DisableEtcdInstanceDeletionProtectionRequest& request, const DisableEtcdInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableEtcdInstanceDeletionProtectionRequest&;
    using Resp = DisableEtcdInstanceDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DisableEtcdInstanceDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::DisableEtcdInstanceDeletionProtectionOutcomeCallable CetcdClient::DisableEtcdInstanceDeletionProtectionCallable(const DisableEtcdInstanceDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableEtcdInstanceDeletionProtectionOutcome>>();
    DisableEtcdInstanceDeletionProtectionAsync(
    request,
    [prom](
        const CetcdClient*,
        const DisableEtcdInstanceDeletionProtectionRequest&,
        DisableEtcdInstanceDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::EnableEtcdInstanceDeletionProtectionOutcome CetcdClient::EnableEtcdInstanceDeletionProtection(const EnableEtcdInstanceDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "EnableEtcdInstanceDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableEtcdInstanceDeletionProtectionResponse rsp = EnableEtcdInstanceDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableEtcdInstanceDeletionProtectionOutcome(rsp);
        else
            return EnableEtcdInstanceDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return EnableEtcdInstanceDeletionProtectionOutcome(outcome.GetError());
    }
}

void CetcdClient::EnableEtcdInstanceDeletionProtectionAsync(const EnableEtcdInstanceDeletionProtectionRequest& request, const EnableEtcdInstanceDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableEtcdInstanceDeletionProtectionRequest&;
    using Resp = EnableEtcdInstanceDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "EnableEtcdInstanceDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::EnableEtcdInstanceDeletionProtectionOutcomeCallable CetcdClient::EnableEtcdInstanceDeletionProtectionCallable(const EnableEtcdInstanceDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableEtcdInstanceDeletionProtectionOutcome>>();
    EnableEtcdInstanceDeletionProtectionAsync(
    request,
    [prom](
        const CetcdClient*,
        const EnableEtcdInstanceDeletionProtectionRequest&,
        EnableEtcdInstanceDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::ModifyEtcdAttributeOutcome CetcdClient::ModifyEtcdAttribute(const ModifyEtcdAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEtcdAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEtcdAttributeResponse rsp = ModifyEtcdAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEtcdAttributeOutcome(rsp);
        else
            return ModifyEtcdAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyEtcdAttributeOutcome(outcome.GetError());
    }
}

void CetcdClient::ModifyEtcdAttributeAsync(const ModifyEtcdAttributeRequest& request, const ModifyEtcdAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEtcdAttributeRequest&;
    using Resp = ModifyEtcdAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEtcdAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::ModifyEtcdAttributeOutcomeCallable CetcdClient::ModifyEtcdAttributeCallable(const ModifyEtcdAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEtcdAttributeOutcome>>();
    ModifyEtcdAttributeAsync(
    request,
    [prom](
        const CetcdClient*,
        const ModifyEtcdAttributeRequest&,
        ModifyEtcdAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::ModifyEtcdConfigurationOutcome CetcdClient::ModifyEtcdConfiguration(const ModifyEtcdConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEtcdConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEtcdConfigurationResponse rsp = ModifyEtcdConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEtcdConfigurationOutcome(rsp);
        else
            return ModifyEtcdConfigurationOutcome(o.GetError());
    }
    else
    {
        return ModifyEtcdConfigurationOutcome(outcome.GetError());
    }
}

void CetcdClient::ModifyEtcdConfigurationAsync(const ModifyEtcdConfigurationRequest& request, const ModifyEtcdConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEtcdConfigurationRequest&;
    using Resp = ModifyEtcdConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEtcdConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::ModifyEtcdConfigurationOutcomeCallable CetcdClient::ModifyEtcdConfigurationCallable(const ModifyEtcdConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEtcdConfigurationOutcome>>();
    ModifyEtcdConfigurationAsync(
    request,
    [prom](
        const CetcdClient*,
        const ModifyEtcdConfigurationRequest&,
        ModifyEtcdConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::ModifyEtcdSnapshotPolicyOutcome CetcdClient::ModifyEtcdSnapshotPolicy(const ModifyEtcdSnapshotPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEtcdSnapshotPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEtcdSnapshotPolicyResponse rsp = ModifyEtcdSnapshotPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEtcdSnapshotPolicyOutcome(rsp);
        else
            return ModifyEtcdSnapshotPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyEtcdSnapshotPolicyOutcome(outcome.GetError());
    }
}

void CetcdClient::ModifyEtcdSnapshotPolicyAsync(const ModifyEtcdSnapshotPolicyRequest& request, const ModifyEtcdSnapshotPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEtcdSnapshotPolicyRequest&;
    using Resp = ModifyEtcdSnapshotPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEtcdSnapshotPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::ModifyEtcdSnapshotPolicyOutcomeCallable CetcdClient::ModifyEtcdSnapshotPolicyCallable(const ModifyEtcdSnapshotPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEtcdSnapshotPolicyOutcome>>();
    ModifyEtcdSnapshotPolicyAsync(
    request,
    [prom](
        const CetcdClient*,
        const ModifyEtcdSnapshotPolicyRequest&,
        ModifyEtcdSnapshotPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::ResizeEtcdInstanceOutcome CetcdClient::ResizeEtcdInstance(const ResizeEtcdInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ResizeEtcdInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResizeEtcdInstanceResponse rsp = ResizeEtcdInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResizeEtcdInstanceOutcome(rsp);
        else
            return ResizeEtcdInstanceOutcome(o.GetError());
    }
    else
    {
        return ResizeEtcdInstanceOutcome(outcome.GetError());
    }
}

void CetcdClient::ResizeEtcdInstanceAsync(const ResizeEtcdInstanceRequest& request, const ResizeEtcdInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResizeEtcdInstanceRequest&;
    using Resp = ResizeEtcdInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ResizeEtcdInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::ResizeEtcdInstanceOutcomeCallable CetcdClient::ResizeEtcdInstanceCallable(const ResizeEtcdInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResizeEtcdInstanceOutcome>>();
    ResizeEtcdInstanceAsync(
    request,
    [prom](
        const CetcdClient*,
        const ResizeEtcdInstanceRequest&,
        ResizeEtcdInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CetcdClient::UpgradeEtcdInstanceOutcome CetcdClient::UpgradeEtcdInstance(const UpgradeEtcdInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "UpgradeEtcdInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpgradeEtcdInstanceResponse rsp = UpgradeEtcdInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpgradeEtcdInstanceOutcome(rsp);
        else
            return UpgradeEtcdInstanceOutcome(o.GetError());
    }
    else
    {
        return UpgradeEtcdInstanceOutcome(outcome.GetError());
    }
}

void CetcdClient::UpgradeEtcdInstanceAsync(const UpgradeEtcdInstanceRequest& request, const UpgradeEtcdInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpgradeEtcdInstanceRequest&;
    using Resp = UpgradeEtcdInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "UpgradeEtcdInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CetcdClient::UpgradeEtcdInstanceOutcomeCallable CetcdClient::UpgradeEtcdInstanceCallable(const UpgradeEtcdInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpgradeEtcdInstanceOutcome>>();
    UpgradeEtcdInstanceAsync(
    request,
    [prom](
        const CetcdClient*,
        const UpgradeEtcdInstanceRequest&,
        UpgradeEtcdInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

