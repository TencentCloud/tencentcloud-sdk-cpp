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

#include <tencentcloud/thpc/v20230321/ThpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Thpc::V20230321;
using namespace TencentCloud::Thpc::V20230321::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-21";
    const string ENDPOINT = "thpc.tencentcloudapi.com";
}

ThpcClient::ThpcClient(const Credential &credential, const string &region) :
    ThpcClient(credential, region, ClientProfile())
{
}

ThpcClient::ThpcClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ThpcClient::AddClusterStorageOptionOutcome ThpcClient::AddClusterStorageOption(const AddClusterStorageOptionRequest &request)
{
    auto outcome = MakeRequest(request, "AddClusterStorageOption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClusterStorageOptionResponse rsp = AddClusterStorageOptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClusterStorageOptionOutcome(rsp);
        else
            return AddClusterStorageOptionOutcome(o.GetError());
    }
    else
    {
        return AddClusterStorageOptionOutcome(outcome.GetError());
    }
}

void ThpcClient::AddClusterStorageOptionAsync(const AddClusterStorageOptionRequest& request, const AddClusterStorageOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddClusterStorageOptionRequest&;
    using Resp = AddClusterStorageOptionResponse;

    DoRequestAsync<Req, Resp>(
        "AddClusterStorageOption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::AddClusterStorageOptionOutcomeCallable ThpcClient::AddClusterStorageOptionCallable(const AddClusterStorageOptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddClusterStorageOptionOutcome>>();
    AddClusterStorageOptionAsync(
    request,
    [prom](
        const ThpcClient*,
        const AddClusterStorageOptionRequest&,
        AddClusterStorageOptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::AddNodesOutcome ThpcClient::AddNodes(const AddNodesRequest &request)
{
    auto outcome = MakeRequest(request, "AddNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddNodesResponse rsp = AddNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddNodesOutcome(rsp);
        else
            return AddNodesOutcome(o.GetError());
    }
    else
    {
        return AddNodesOutcome(outcome.GetError());
    }
}

void ThpcClient::AddNodesAsync(const AddNodesRequest& request, const AddNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddNodesRequest&;
    using Resp = AddNodesResponse;

    DoRequestAsync<Req, Resp>(
        "AddNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::AddNodesOutcomeCallable ThpcClient::AddNodesCallable(const AddNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddNodesOutcome>>();
    AddNodesAsync(
    request,
    [prom](
        const ThpcClient*,
        const AddNodesRequest&,
        AddNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::AddQueueOutcome ThpcClient::AddQueue(const AddQueueRequest &request)
{
    auto outcome = MakeRequest(request, "AddQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddQueueResponse rsp = AddQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddQueueOutcome(rsp);
        else
            return AddQueueOutcome(o.GetError());
    }
    else
    {
        return AddQueueOutcome(outcome.GetError());
    }
}

void ThpcClient::AddQueueAsync(const AddQueueRequest& request, const AddQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddQueueRequest&;
    using Resp = AddQueueResponse;

    DoRequestAsync<Req, Resp>(
        "AddQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::AddQueueOutcomeCallable ThpcClient::AddQueueCallable(const AddQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddQueueOutcome>>();
    AddQueueAsync(
    request,
    [prom](
        const ThpcClient*,
        const AddQueueRequest&,
        AddQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::AttachNodesOutcome ThpcClient::AttachNodes(const AttachNodesRequest &request)
{
    auto outcome = MakeRequest(request, "AttachNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachNodesResponse rsp = AttachNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachNodesOutcome(rsp);
        else
            return AttachNodesOutcome(o.GetError());
    }
    else
    {
        return AttachNodesOutcome(outcome.GetError());
    }
}

void ThpcClient::AttachNodesAsync(const AttachNodesRequest& request, const AttachNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachNodesRequest&;
    using Resp = AttachNodesResponse;

    DoRequestAsync<Req, Resp>(
        "AttachNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::AttachNodesOutcomeCallable ThpcClient::AttachNodesCallable(const AttachNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachNodesOutcome>>();
    AttachNodesAsync(
    request,
    [prom](
        const ThpcClient*,
        const AttachNodesRequest&,
        AttachNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::CreateClusterOutcome ThpcClient::CreateCluster(const CreateClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClusterResponse rsp = CreateClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClusterOutcome(rsp);
        else
            return CreateClusterOutcome(o.GetError());
    }
    else
    {
        return CreateClusterOutcome(outcome.GetError());
    }
}

void ThpcClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateClusterRequest&;
    using Resp = CreateClusterResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::CreateClusterOutcomeCallable ThpcClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const ThpcClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::CreateWorkspacesOutcome ThpcClient::CreateWorkspaces(const CreateWorkspacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateWorkspaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateWorkspacesResponse rsp = CreateWorkspacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateWorkspacesOutcome(rsp);
        else
            return CreateWorkspacesOutcome(o.GetError());
    }
    else
    {
        return CreateWorkspacesOutcome(outcome.GetError());
    }
}

void ThpcClient::CreateWorkspacesAsync(const CreateWorkspacesRequest& request, const CreateWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateWorkspacesRequest&;
    using Resp = CreateWorkspacesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateWorkspaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::CreateWorkspacesOutcomeCallable ThpcClient::CreateWorkspacesCallable(const CreateWorkspacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateWorkspacesOutcome>>();
    CreateWorkspacesAsync(
    request,
    [prom](
        const ThpcClient*,
        const CreateWorkspacesRequest&,
        CreateWorkspacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DeleteClusterOutcome ThpcClient::DeleteCluster(const DeleteClusterRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterResponse rsp = DeleteClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterOutcome(rsp);
        else
            return DeleteClusterOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterOutcome(outcome.GetError());
    }
}

void ThpcClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterRequest&;
    using Resp = DeleteClusterResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DeleteClusterOutcomeCallable ThpcClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterOutcome>>();
    DeleteClusterAsync(
    request,
    [prom](
        const ThpcClient*,
        const DeleteClusterRequest&,
        DeleteClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DeleteClusterStorageOptionOutcome ThpcClient::DeleteClusterStorageOption(const DeleteClusterStorageOptionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClusterStorageOption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClusterStorageOptionResponse rsp = DeleteClusterStorageOptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClusterStorageOptionOutcome(rsp);
        else
            return DeleteClusterStorageOptionOutcome(o.GetError());
    }
    else
    {
        return DeleteClusterStorageOptionOutcome(outcome.GetError());
    }
}

void ThpcClient::DeleteClusterStorageOptionAsync(const DeleteClusterStorageOptionRequest& request, const DeleteClusterStorageOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClusterStorageOptionRequest&;
    using Resp = DeleteClusterStorageOptionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClusterStorageOption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DeleteClusterStorageOptionOutcomeCallable ThpcClient::DeleteClusterStorageOptionCallable(const DeleteClusterStorageOptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterStorageOptionOutcome>>();
    DeleteClusterStorageOptionAsync(
    request,
    [prom](
        const ThpcClient*,
        const DeleteClusterStorageOptionRequest&,
        DeleteClusterStorageOptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DeleteJobOutcome ThpcClient::DeleteJob(const DeleteJobRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteJobResponse rsp = DeleteJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteJobOutcome(rsp);
        else
            return DeleteJobOutcome(o.GetError());
    }
    else
    {
        return DeleteJobOutcome(outcome.GetError());
    }
}

void ThpcClient::DeleteJobAsync(const DeleteJobRequest& request, const DeleteJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteJobRequest&;
    using Resp = DeleteJobResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DeleteJobOutcomeCallable ThpcClient::DeleteJobCallable(const DeleteJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteJobOutcome>>();
    DeleteJobAsync(
    request,
    [prom](
        const ThpcClient*,
        const DeleteJobRequest&,
        DeleteJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DeleteNodesOutcome ThpcClient::DeleteNodes(const DeleteNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNodesResponse rsp = DeleteNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNodesOutcome(rsp);
        else
            return DeleteNodesOutcome(o.GetError());
    }
    else
    {
        return DeleteNodesOutcome(outcome.GetError());
    }
}

void ThpcClient::DeleteNodesAsync(const DeleteNodesRequest& request, const DeleteNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNodesRequest&;
    using Resp = DeleteNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DeleteNodesOutcomeCallable ThpcClient::DeleteNodesCallable(const DeleteNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNodesOutcome>>();
    DeleteNodesAsync(
    request,
    [prom](
        const ThpcClient*,
        const DeleteNodesRequest&,
        DeleteNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DeleteQueueOutcome ThpcClient::DeleteQueue(const DeleteQueueRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteQueue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteQueueResponse rsp = DeleteQueueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteQueueOutcome(rsp);
        else
            return DeleteQueueOutcome(o.GetError());
    }
    else
    {
        return DeleteQueueOutcome(outcome.GetError());
    }
}

void ThpcClient::DeleteQueueAsync(const DeleteQueueRequest& request, const DeleteQueueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteQueueRequest&;
    using Resp = DeleteQueueResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteQueue", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DeleteQueueOutcomeCallable ThpcClient::DeleteQueueCallable(const DeleteQueueRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteQueueOutcome>>();
    DeleteQueueAsync(
    request,
    [prom](
        const ThpcClient*,
        const DeleteQueueRequest&,
        DeleteQueueOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeAutoScalingConfigurationOutcome ThpcClient::DescribeAutoScalingConfiguration(const DescribeAutoScalingConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAutoScalingConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAutoScalingConfigurationResponse rsp = DescribeAutoScalingConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAutoScalingConfigurationOutcome(rsp);
        else
            return DescribeAutoScalingConfigurationOutcome(o.GetError());
    }
    else
    {
        return DescribeAutoScalingConfigurationOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeAutoScalingConfigurationAsync(const DescribeAutoScalingConfigurationRequest& request, const DescribeAutoScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAutoScalingConfigurationRequest&;
    using Resp = DescribeAutoScalingConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAutoScalingConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeAutoScalingConfigurationOutcomeCallable ThpcClient::DescribeAutoScalingConfigurationCallable(const DescribeAutoScalingConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAutoScalingConfigurationOutcome>>();
    DescribeAutoScalingConfigurationAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeAutoScalingConfigurationRequest&,
        DescribeAutoScalingConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeClusterActivitiesOutcome ThpcClient::DescribeClusterActivities(const DescribeClusterActivitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterActivities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterActivitiesResponse rsp = DescribeClusterActivitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterActivitiesOutcome(rsp);
        else
            return DescribeClusterActivitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterActivitiesOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeClusterActivitiesAsync(const DescribeClusterActivitiesRequest& request, const DescribeClusterActivitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterActivitiesRequest&;
    using Resp = DescribeClusterActivitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterActivities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeClusterActivitiesOutcomeCallable ThpcClient::DescribeClusterActivitiesCallable(const DescribeClusterActivitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterActivitiesOutcome>>();
    DescribeClusterActivitiesAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeClusterActivitiesRequest&,
        DescribeClusterActivitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeClusterStorageOptionOutcome ThpcClient::DescribeClusterStorageOption(const DescribeClusterStorageOptionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterStorageOption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterStorageOptionResponse rsp = DescribeClusterStorageOptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterStorageOptionOutcome(rsp);
        else
            return DescribeClusterStorageOptionOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterStorageOptionOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeClusterStorageOptionAsync(const DescribeClusterStorageOptionRequest& request, const DescribeClusterStorageOptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterStorageOptionRequest&;
    using Resp = DescribeClusterStorageOptionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterStorageOption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeClusterStorageOptionOutcomeCallable ThpcClient::DescribeClusterStorageOptionCallable(const DescribeClusterStorageOptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterStorageOptionOutcome>>();
    DescribeClusterStorageOptionAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeClusterStorageOptionRequest&,
        DescribeClusterStorageOptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeClustersOutcome ThpcClient::DescribeClusters(const DescribeClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClustersResponse rsp = DescribeClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClustersOutcome(rsp);
        else
            return DescribeClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeClustersOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClustersRequest&;
    using Resp = DescribeClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeClustersOutcomeCallable ThpcClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeInitNodeScriptsOutcome ThpcClient::DescribeInitNodeScripts(const DescribeInitNodeScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInitNodeScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInitNodeScriptsResponse rsp = DescribeInitNodeScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInitNodeScriptsOutcome(rsp);
        else
            return DescribeInitNodeScriptsOutcome(o.GetError());
    }
    else
    {
        return DescribeInitNodeScriptsOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeInitNodeScriptsAsync(const DescribeInitNodeScriptsRequest& request, const DescribeInitNodeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInitNodeScriptsRequest&;
    using Resp = DescribeInitNodeScriptsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInitNodeScripts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeInitNodeScriptsOutcomeCallable ThpcClient::DescribeInitNodeScriptsCallable(const DescribeInitNodeScriptsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInitNodeScriptsOutcome>>();
    DescribeInitNodeScriptsAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeInitNodeScriptsRequest&,
        DescribeInitNodeScriptsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeJobSubmitInfoOutcome ThpcClient::DescribeJobSubmitInfo(const DescribeJobSubmitInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobSubmitInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobSubmitInfoResponse rsp = DescribeJobSubmitInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobSubmitInfoOutcome(rsp);
        else
            return DescribeJobSubmitInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeJobSubmitInfoOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeJobSubmitInfoAsync(const DescribeJobSubmitInfoRequest& request, const DescribeJobSubmitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobSubmitInfoRequest&;
    using Resp = DescribeJobSubmitInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobSubmitInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeJobSubmitInfoOutcomeCallable ThpcClient::DescribeJobSubmitInfoCallable(const DescribeJobSubmitInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobSubmitInfoOutcome>>();
    DescribeJobSubmitInfoAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeJobSubmitInfoRequest&,
        DescribeJobSubmitInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeJobsOutcome ThpcClient::DescribeJobs(const DescribeJobsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsResponse rsp = DescribeJobsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOutcome(rsp);
        else
            return DescribeJobsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeJobsAsync(const DescribeJobsRequest& request, const DescribeJobsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobsRequest&;
    using Resp = DescribeJobsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeJobsOutcomeCallable ThpcClient::DescribeJobsCallable(const DescribeJobsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOutcome>>();
    DescribeJobsAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeJobsRequest&,
        DescribeJobsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeJobsOverviewOutcome ThpcClient::DescribeJobsOverview(const DescribeJobsOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobsOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobsOverviewResponse rsp = DescribeJobsOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobsOverviewOutcome(rsp);
        else
            return DescribeJobsOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeJobsOverviewOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeJobsOverviewAsync(const DescribeJobsOverviewRequest& request, const DescribeJobsOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJobsOverviewRequest&;
    using Resp = DescribeJobsOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJobsOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeJobsOverviewOutcomeCallable ThpcClient::DescribeJobsOverviewCallable(const DescribeJobsOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJobsOverviewOutcome>>();
    DescribeJobsOverviewAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeJobsOverviewRequest&,
        DescribeJobsOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeNodesOutcome ThpcClient::DescribeNodes(const DescribeNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNodesResponse rsp = DescribeNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNodesOutcome(rsp);
        else
            return DescribeNodesOutcome(o.GetError());
    }
    else
    {
        return DescribeNodesOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeNodesAsync(const DescribeNodesRequest& request, const DescribeNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNodesRequest&;
    using Resp = DescribeNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeNodesOutcomeCallable ThpcClient::DescribeNodesCallable(const DescribeNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNodesOutcome>>();
    DescribeNodesAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeNodesRequest&,
        DescribeNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeQueuesOutcome ThpcClient::DescribeQueues(const DescribeQueuesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeQueues");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeQueuesResponse rsp = DescribeQueuesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeQueuesOutcome(rsp);
        else
            return DescribeQueuesOutcome(o.GetError());
    }
    else
    {
        return DescribeQueuesOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeQueuesAsync(const DescribeQueuesRequest& request, const DescribeQueuesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeQueuesRequest&;
    using Resp = DescribeQueuesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeQueues", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeQueuesOutcomeCallable ThpcClient::DescribeQueuesCallable(const DescribeQueuesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeQueuesOutcome>>();
    DescribeQueuesAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeQueuesRequest&,
        DescribeQueuesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DescribeWorkspacesOutcome ThpcClient::DescribeWorkspaces(const DescribeWorkspacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWorkspaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWorkspacesResponse rsp = DescribeWorkspacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWorkspacesOutcome(rsp);
        else
            return DescribeWorkspacesOutcome(o.GetError());
    }
    else
    {
        return DescribeWorkspacesOutcome(outcome.GetError());
    }
}

void ThpcClient::DescribeWorkspacesAsync(const DescribeWorkspacesRequest& request, const DescribeWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeWorkspacesRequest&;
    using Resp = DescribeWorkspacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeWorkspaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DescribeWorkspacesOutcomeCallable ThpcClient::DescribeWorkspacesCallable(const DescribeWorkspacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeWorkspacesOutcome>>();
    DescribeWorkspacesAsync(
    request,
    [prom](
        const ThpcClient*,
        const DescribeWorkspacesRequest&,
        DescribeWorkspacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::DetachNodesOutcome ThpcClient::DetachNodes(const DetachNodesRequest &request)
{
    auto outcome = MakeRequest(request, "DetachNodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachNodesResponse rsp = DetachNodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachNodesOutcome(rsp);
        else
            return DetachNodesOutcome(o.GetError());
    }
    else
    {
        return DetachNodesOutcome(outcome.GetError());
    }
}

void ThpcClient::DetachNodesAsync(const DetachNodesRequest& request, const DetachNodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachNodesRequest&;
    using Resp = DetachNodesResponse;

    DoRequestAsync<Req, Resp>(
        "DetachNodes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::DetachNodesOutcomeCallable ThpcClient::DetachNodesCallable(const DetachNodesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachNodesOutcome>>();
    DetachNodesAsync(
    request,
    [prom](
        const ThpcClient*,
        const DetachNodesRequest&,
        DetachNodesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::ModifyClusterDeletionProtectionOutcome ThpcClient::ModifyClusterDeletionProtection(const ModifyClusterDeletionProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyClusterDeletionProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterDeletionProtectionResponse rsp = ModifyClusterDeletionProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterDeletionProtectionOutcome(rsp);
        else
            return ModifyClusterDeletionProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterDeletionProtectionOutcome(outcome.GetError());
    }
}

void ThpcClient::ModifyClusterDeletionProtectionAsync(const ModifyClusterDeletionProtectionRequest& request, const ModifyClusterDeletionProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterDeletionProtectionRequest&;
    using Resp = ModifyClusterDeletionProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyClusterDeletionProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::ModifyClusterDeletionProtectionOutcomeCallable ThpcClient::ModifyClusterDeletionProtectionCallable(const ModifyClusterDeletionProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterDeletionProtectionOutcome>>();
    ModifyClusterDeletionProtectionAsync(
    request,
    [prom](
        const ThpcClient*,
        const ModifyClusterDeletionProtectionRequest&,
        ModifyClusterDeletionProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::ModifyInitNodeScriptsOutcome ThpcClient::ModifyInitNodeScripts(const ModifyInitNodeScriptsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInitNodeScripts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInitNodeScriptsResponse rsp = ModifyInitNodeScriptsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInitNodeScriptsOutcome(rsp);
        else
            return ModifyInitNodeScriptsOutcome(o.GetError());
    }
    else
    {
        return ModifyInitNodeScriptsOutcome(outcome.GetError());
    }
}

void ThpcClient::ModifyInitNodeScriptsAsync(const ModifyInitNodeScriptsRequest& request, const ModifyInitNodeScriptsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyInitNodeScriptsRequest&;
    using Resp = ModifyInitNodeScriptsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInitNodeScripts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::ModifyInitNodeScriptsOutcomeCallable ThpcClient::ModifyInitNodeScriptsCallable(const ModifyInitNodeScriptsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInitNodeScriptsOutcome>>();
    ModifyInitNodeScriptsAsync(
    request,
    [prom](
        const ThpcClient*,
        const ModifyInitNodeScriptsRequest&,
        ModifyInitNodeScriptsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::ModifyNodeAttributeOutcome ThpcClient::ModifyNodeAttribute(const ModifyNodeAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNodeAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNodeAttributeResponse rsp = ModifyNodeAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNodeAttributeOutcome(rsp);
        else
            return ModifyNodeAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyNodeAttributeOutcome(outcome.GetError());
    }
}

void ThpcClient::ModifyNodeAttributeAsync(const ModifyNodeAttributeRequest& request, const ModifyNodeAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNodeAttributeRequest&;
    using Resp = ModifyNodeAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNodeAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::ModifyNodeAttributeOutcomeCallable ThpcClient::ModifyNodeAttributeCallable(const ModifyNodeAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNodeAttributeOutcome>>();
    ModifyNodeAttributeAsync(
    request,
    [prom](
        const ThpcClient*,
        const ModifyNodeAttributeRequest&,
        ModifyNodeAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::ModifyWorkspacesAttributeOutcome ThpcClient::ModifyWorkspacesAttribute(const ModifyWorkspacesAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkspacesAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkspacesAttributeResponse rsp = ModifyWorkspacesAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkspacesAttributeOutcome(rsp);
        else
            return ModifyWorkspacesAttributeOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkspacesAttributeOutcome(outcome.GetError());
    }
}

void ThpcClient::ModifyWorkspacesAttributeAsync(const ModifyWorkspacesAttributeRequest& request, const ModifyWorkspacesAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkspacesAttributeRequest&;
    using Resp = ModifyWorkspacesAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkspacesAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::ModifyWorkspacesAttributeOutcomeCallable ThpcClient::ModifyWorkspacesAttributeCallable(const ModifyWorkspacesAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkspacesAttributeOutcome>>();
    ModifyWorkspacesAttributeAsync(
    request,
    [prom](
        const ThpcClient*,
        const ModifyWorkspacesAttributeRequest&,
        ModifyWorkspacesAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::ModifyWorkspacesRenewFlagOutcome ThpcClient::ModifyWorkspacesRenewFlag(const ModifyWorkspacesRenewFlagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyWorkspacesRenewFlag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyWorkspacesRenewFlagResponse rsp = ModifyWorkspacesRenewFlagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyWorkspacesRenewFlagOutcome(rsp);
        else
            return ModifyWorkspacesRenewFlagOutcome(o.GetError());
    }
    else
    {
        return ModifyWorkspacesRenewFlagOutcome(outcome.GetError());
    }
}

void ThpcClient::ModifyWorkspacesRenewFlagAsync(const ModifyWorkspacesRenewFlagRequest& request, const ModifyWorkspacesRenewFlagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyWorkspacesRenewFlagRequest&;
    using Resp = ModifyWorkspacesRenewFlagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyWorkspacesRenewFlag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::ModifyWorkspacesRenewFlagOutcomeCallable ThpcClient::ModifyWorkspacesRenewFlagCallable(const ModifyWorkspacesRenewFlagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyWorkspacesRenewFlagOutcome>>();
    ModifyWorkspacesRenewFlagAsync(
    request,
    [prom](
        const ThpcClient*,
        const ModifyWorkspacesRenewFlagRequest&,
        ModifyWorkspacesRenewFlagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::SetAutoScalingConfigurationOutcome ThpcClient::SetAutoScalingConfiguration(const SetAutoScalingConfigurationRequest &request)
{
    auto outcome = MakeRequest(request, "SetAutoScalingConfiguration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetAutoScalingConfigurationResponse rsp = SetAutoScalingConfigurationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetAutoScalingConfigurationOutcome(rsp);
        else
            return SetAutoScalingConfigurationOutcome(o.GetError());
    }
    else
    {
        return SetAutoScalingConfigurationOutcome(outcome.GetError());
    }
}

void ThpcClient::SetAutoScalingConfigurationAsync(const SetAutoScalingConfigurationRequest& request, const SetAutoScalingConfigurationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetAutoScalingConfigurationRequest&;
    using Resp = SetAutoScalingConfigurationResponse;

    DoRequestAsync<Req, Resp>(
        "SetAutoScalingConfiguration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::SetAutoScalingConfigurationOutcomeCallable ThpcClient::SetAutoScalingConfigurationCallable(const SetAutoScalingConfigurationRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetAutoScalingConfigurationOutcome>>();
    SetAutoScalingConfigurationAsync(
    request,
    [prom](
        const ThpcClient*,
        const SetAutoScalingConfigurationRequest&,
        SetAutoScalingConfigurationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::SubmitJobOutcome ThpcClient::SubmitJob(const SubmitJobRequest &request)
{
    auto outcome = MakeRequest(request, "SubmitJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SubmitJobResponse rsp = SubmitJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SubmitJobOutcome(rsp);
        else
            return SubmitJobOutcome(o.GetError());
    }
    else
    {
        return SubmitJobOutcome(outcome.GetError());
    }
}

void ThpcClient::SubmitJobAsync(const SubmitJobRequest& request, const SubmitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SubmitJobRequest&;
    using Resp = SubmitJobResponse;

    DoRequestAsync<Req, Resp>(
        "SubmitJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::SubmitJobOutcomeCallable ThpcClient::SubmitJobCallable(const SubmitJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<SubmitJobOutcome>>();
    SubmitJobAsync(
    request,
    [prom](
        const ThpcClient*,
        const SubmitJobRequest&,
        SubmitJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::TerminateJobOutcome ThpcClient::TerminateJob(const TerminateJobRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateJob");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateJobResponse rsp = TerminateJobResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateJobOutcome(rsp);
        else
            return TerminateJobOutcome(o.GetError());
    }
    else
    {
        return TerminateJobOutcome(outcome.GetError());
    }
}

void ThpcClient::TerminateJobAsync(const TerminateJobRequest& request, const TerminateJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateJobRequest&;
    using Resp = TerminateJobResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateJob", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::TerminateJobOutcomeCallable ThpcClient::TerminateJobCallable(const TerminateJobRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateJobOutcome>>();
    TerminateJobAsync(
    request,
    [prom](
        const ThpcClient*,
        const TerminateJobRequest&,
        TerminateJobOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ThpcClient::TerminateWorkspacesOutcome ThpcClient::TerminateWorkspaces(const TerminateWorkspacesRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateWorkspaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateWorkspacesResponse rsp = TerminateWorkspacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateWorkspacesOutcome(rsp);
        else
            return TerminateWorkspacesOutcome(o.GetError());
    }
    else
    {
        return TerminateWorkspacesOutcome(outcome.GetError());
    }
}

void ThpcClient::TerminateWorkspacesAsync(const TerminateWorkspacesRequest& request, const TerminateWorkspacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateWorkspacesRequest&;
    using Resp = TerminateWorkspacesResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateWorkspaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::TerminateWorkspacesOutcomeCallable ThpcClient::TerminateWorkspacesCallable(const TerminateWorkspacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateWorkspacesOutcome>>();
    TerminateWorkspacesAsync(
    request,
    [prom](
        const ThpcClient*,
        const TerminateWorkspacesRequest&,
        TerminateWorkspacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

