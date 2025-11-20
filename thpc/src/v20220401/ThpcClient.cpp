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

#include <tencentcloud/thpc/v20220401/ThpcClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Thpc::V20220401;
using namespace TencentCloud::Thpc::V20220401::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-04-01";
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

ThpcClient::BindAutoScalingGroupOutcome ThpcClient::BindAutoScalingGroup(const BindAutoScalingGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BindAutoScalingGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAutoScalingGroupResponse rsp = BindAutoScalingGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAutoScalingGroupOutcome(rsp);
        else
            return BindAutoScalingGroupOutcome(o.GetError());
    }
    else
    {
        return BindAutoScalingGroupOutcome(outcome.GetError());
    }
}

void ThpcClient::BindAutoScalingGroupAsync(const BindAutoScalingGroupRequest& request, const BindAutoScalingGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAutoScalingGroupRequest&;
    using Resp = BindAutoScalingGroupResponse;

    DoRequestAsync<Req, Resp>(
        "BindAutoScalingGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ThpcClient::BindAutoScalingGroupOutcomeCallable ThpcClient::BindAutoScalingGroupCallable(const BindAutoScalingGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAutoScalingGroupOutcome>>();
    BindAutoScalingGroupAsync(
    request,
    [prom](
        const ThpcClient*,
        const BindAutoScalingGroupRequest&,
        BindAutoScalingGroupOutcome resp,
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

