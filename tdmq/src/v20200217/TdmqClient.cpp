/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/tdmq/v20200217/TdmqClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tdmq::V20200217;
using namespace TencentCloud::Tdmq::V20200217::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-02-17";
    const string ENDPOINT = "tdmq.tencentcloudapi.com";
}

TdmqClient::TdmqClient(const Credential &credential, const string &region) :
    TdmqClient(credential, region, ClientProfile())
{
}

TdmqClient::TdmqClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TdmqClient::CreateClusterOutcome TdmqClient::CreateCluster(const CreateClusterRequest &request)
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

void TdmqClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateClusterOutcomeCallable TdmqClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateEnvironmentOutcome TdmqClient::CreateEnvironment(const CreateEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEnvironmentResponse rsp = CreateEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEnvironmentOutcome(rsp);
        else
            return CreateEnvironmentOutcome(o.GetError());
    }
    else
    {
        return CreateEnvironmentOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEnvironment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateEnvironmentOutcomeCallable TdmqClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEnvironmentOutcome()>>(
        [this, request]()
        {
            return this->CreateEnvironment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateSubscriptionOutcome TdmqClient::CreateSubscription(const CreateSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubscriptionResponse rsp = CreateSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubscriptionOutcome(rsp);
        else
            return CreateSubscriptionOutcome(o.GetError());
    }
    else
    {
        return CreateSubscriptionOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateSubscriptionAsync(const CreateSubscriptionRequest& request, const CreateSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubscription(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateSubscriptionOutcomeCallable TdmqClient::CreateSubscriptionCallable(const CreateSubscriptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubscriptionOutcome()>>(
        [this, request]()
        {
            return this->CreateSubscription(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::CreateTopicOutcome TdmqClient::CreateTopic(const CreateTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicResponse rsp = CreateTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicOutcome(rsp);
        else
            return CreateTopicOutcome(o.GetError());
    }
    else
    {
        return CreateTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::CreateTopicOutcomeCallable TdmqClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteClusterOutcome TdmqClient::DeleteCluster(const DeleteClusterRequest &request)
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

void TdmqClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteClusterOutcomeCallable TdmqClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterOutcome()>>(
        [this, request]()
        {
            return this->DeleteCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteEnvironmentsOutcome TdmqClient::DeleteEnvironments(const DeleteEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteEnvironmentsResponse rsp = DeleteEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteEnvironmentsOutcome(rsp);
        else
            return DeleteEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DeleteEnvironmentsOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteEnvironmentsAsync(const DeleteEnvironmentsRequest& request, const DeleteEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteEnvironmentsOutcomeCallable TdmqClient::DeleteEnvironmentsCallable(const DeleteEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DeleteEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteSubscriptionsOutcome TdmqClient::DeleteSubscriptions(const DeleteSubscriptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSubscriptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSubscriptionsResponse rsp = DeleteSubscriptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSubscriptionsOutcome(rsp);
        else
            return DeleteSubscriptionsOutcome(o.GetError());
    }
    else
    {
        return DeleteSubscriptionsOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteSubscriptionsAsync(const DeleteSubscriptionsRequest& request, const DeleteSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSubscriptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteSubscriptionsOutcomeCallable TdmqClient::DeleteSubscriptionsCallable(const DeleteSubscriptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSubscriptionsOutcome()>>(
        [this, request]()
        {
            return this->DeleteSubscriptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DeleteTopicsOutcome TdmqClient::DeleteTopics(const DeleteTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicsResponse rsp = DeleteTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicsOutcome(rsp);
        else
            return DeleteTopicsOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::DeleteTopicsAsync(const DeleteTopicsRequest& request, const DeleteTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DeleteTopicsOutcomeCallable TdmqClient::DeleteTopicsCallable(const DeleteTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicsOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeBindClustersOutcome TdmqClient::DescribeBindClusters(const DescribeBindClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindClustersResponse rsp = DescribeBindClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindClustersOutcome(rsp);
        else
            return DescribeBindClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeBindClustersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeBindClustersAsync(const DescribeBindClustersRequest& request, const DescribeBindClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeBindClustersOutcomeCallable TdmqClient::DescribeBindClustersCallable(const DescribeBindClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeBindVpcsOutcome TdmqClient::DescribeBindVpcs(const DescribeBindVpcsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBindVpcs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBindVpcsResponse rsp = DescribeBindVpcsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBindVpcsOutcome(rsp);
        else
            return DescribeBindVpcsOutcome(o.GetError());
    }
    else
    {
        return DescribeBindVpcsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeBindVpcsAsync(const DescribeBindVpcsRequest& request, const DescribeBindVpcsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBindVpcs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeBindVpcsOutcomeCallable TdmqClient::DescribeBindVpcsCallable(const DescribeBindVpcsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBindVpcsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBindVpcs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeClusterDetailOutcome TdmqClient::DescribeClusterDetail(const DescribeClusterDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterDetailResponse rsp = DescribeClusterDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterDetailOutcome(rsp);
        else
            return DescribeClusterDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterDetailOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeClusterDetailAsync(const DescribeClusterDetailRequest& request, const DescribeClusterDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeClusterDetailOutcomeCallable TdmqClient::DescribeClusterDetailCallable(const DescribeClusterDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeClustersOutcome TdmqClient::DescribeClusters(const DescribeClustersRequest &request)
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

void TdmqClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeClustersOutcomeCallable TdmqClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClustersOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusters(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeEnvironmentAttributesOutcome TdmqClient::DescribeEnvironmentAttributes(const DescribeEnvironmentAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironmentAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentAttributesResponse rsp = DescribeEnvironmentAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentAttributesOutcome(rsp);
        else
            return DescribeEnvironmentAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentAttributesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeEnvironmentAttributesAsync(const DescribeEnvironmentAttributesRequest& request, const DescribeEnvironmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironmentAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeEnvironmentAttributesOutcomeCallable TdmqClient::DescribeEnvironmentAttributesCallable(const DescribeEnvironmentAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironmentAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeEnvironmentRolesOutcome TdmqClient::DescribeEnvironmentRoles(const DescribeEnvironmentRolesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironmentRoles");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentRolesResponse rsp = DescribeEnvironmentRolesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentRolesOutcome(rsp);
        else
            return DescribeEnvironmentRolesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentRolesOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeEnvironmentRolesAsync(const DescribeEnvironmentRolesRequest& request, const DescribeEnvironmentRolesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironmentRoles(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeEnvironmentRolesOutcomeCallable TdmqClient::DescribeEnvironmentRolesCallable(const DescribeEnvironmentRolesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentRolesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironmentRoles(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeEnvironmentsOutcome TdmqClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentsResponse rsp = DescribeEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentsOutcome(rsp);
        else
            return DescribeEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnvironments(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeEnvironmentsOutcomeCallable TdmqClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnvironmentsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnvironments(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeProducersOutcome TdmqClient::DescribeProducers(const DescribeProducersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProducersResponse rsp = DescribeProducersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProducersOutcome(rsp);
        else
            return DescribeProducersOutcome(o.GetError());
    }
    else
    {
        return DescribeProducersOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeProducersAsync(const DescribeProducersRequest& request, const DescribeProducersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProducers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeProducersOutcomeCallable TdmqClient::DescribeProducersCallable(const DescribeProducersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProducersOutcome()>>(
        [this, request]()
        {
            return this->DescribeProducers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeSubscriptionsOutcome TdmqClient::DescribeSubscriptions(const DescribeSubscriptionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubscriptions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubscriptionsResponse rsp = DescribeSubscriptionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubscriptionsOutcome(rsp);
        else
            return DescribeSubscriptionsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubscriptionsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeSubscriptionsAsync(const DescribeSubscriptionsRequest& request, const DescribeSubscriptionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubscriptions(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeSubscriptionsOutcomeCallable TdmqClient::DescribeSubscriptionsCallable(const DescribeSubscriptionsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubscriptionsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubscriptions(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::DescribeTopicsOutcome TdmqClient::DescribeTopics(const DescribeTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicsResponse rsp = DescribeTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicsOutcome(rsp);
        else
            return DescribeTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicsOutcome(outcome.GetError());
    }
}

void TdmqClient::DescribeTopicsAsync(const DescribeTopicsRequest& request, const DescribeTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::DescribeTopicsOutcomeCallable TdmqClient::DescribeTopicsCallable(const DescribeTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyClusterOutcome TdmqClient::ModifyCluster(const ModifyClusterRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyClusterResponse rsp = ModifyClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyClusterOutcome(rsp);
        else
            return ModifyClusterOutcome(o.GetError());
    }
    else
    {
        return ModifyClusterOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyClusterOutcomeCallable TdmqClient::ModifyClusterCallable(const ModifyClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyClusterOutcome()>>(
        [this, request]()
        {
            return this->ModifyCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyEnvironmentAttributesOutcome TdmqClient::ModifyEnvironmentAttributes(const ModifyEnvironmentAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnvironmentAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvironmentAttributesResponse rsp = ModifyEnvironmentAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvironmentAttributesOutcome(rsp);
        else
            return ModifyEnvironmentAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvironmentAttributesOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyEnvironmentAttributesAsync(const ModifyEnvironmentAttributesRequest& request, const ModifyEnvironmentAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEnvironmentAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyEnvironmentAttributesOutcomeCallable TdmqClient::ModifyEnvironmentAttributesCallable(const ModifyEnvironmentAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEnvironmentAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyEnvironmentAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ModifyTopicOutcome TdmqClient::ModifyTopic(const ModifyTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicResponse rsp = ModifyTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicOutcome(rsp);
        else
            return ModifyTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicOutcome(outcome.GetError());
    }
}

void TdmqClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ModifyTopicOutcomeCallable TdmqClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::ResetMsgSubOffsetByTimestampOutcome TdmqClient::ResetMsgSubOffsetByTimestamp(const ResetMsgSubOffsetByTimestampRequest &request)
{
    auto outcome = MakeRequest(request, "ResetMsgSubOffsetByTimestamp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetMsgSubOffsetByTimestampResponse rsp = ResetMsgSubOffsetByTimestampResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetMsgSubOffsetByTimestampOutcome(rsp);
        else
            return ResetMsgSubOffsetByTimestampOutcome(o.GetError());
    }
    else
    {
        return ResetMsgSubOffsetByTimestampOutcome(outcome.GetError());
    }
}

void TdmqClient::ResetMsgSubOffsetByTimestampAsync(const ResetMsgSubOffsetByTimestampRequest& request, const ResetMsgSubOffsetByTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResetMsgSubOffsetByTimestamp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::ResetMsgSubOffsetByTimestampOutcomeCallable TdmqClient::ResetMsgSubOffsetByTimestampCallable(const ResetMsgSubOffsetByTimestampRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResetMsgSubOffsetByTimestampOutcome()>>(
        [this, request]()
        {
            return this->ResetMsgSubOffsetByTimestamp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::SendBatchMessagesOutcome TdmqClient::SendBatchMessages(const SendBatchMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "SendBatchMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendBatchMessagesResponse rsp = SendBatchMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendBatchMessagesOutcome(rsp);
        else
            return SendBatchMessagesOutcome(o.GetError());
    }
    else
    {
        return SendBatchMessagesOutcome(outcome.GetError());
    }
}

void TdmqClient::SendBatchMessagesAsync(const SendBatchMessagesRequest& request, const SendBatchMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendBatchMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendBatchMessagesOutcomeCallable TdmqClient::SendBatchMessagesCallable(const SendBatchMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendBatchMessagesOutcome()>>(
        [this, request]()
        {
            return this->SendBatchMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TdmqClient::SendMessagesOutcome TdmqClient::SendMessages(const SendMessagesRequest &request)
{
    auto outcome = MakeRequest(request, "SendMessages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMessagesResponse rsp = SendMessagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMessagesOutcome(rsp);
        else
            return SendMessagesOutcome(o.GetError());
    }
    else
    {
        return SendMessagesOutcome(outcome.GetError());
    }
}

void TdmqClient::SendMessagesAsync(const SendMessagesRequest& request, const SendMessagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendMessages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TdmqClient::SendMessagesOutcomeCallable TdmqClient::SendMessagesCallable(const SendMessagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendMessagesOutcome()>>(
        [this, request]()
        {
            return this->SendMessages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

