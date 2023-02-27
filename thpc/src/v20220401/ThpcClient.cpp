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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddClusterStorageOption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::AddClusterStorageOptionOutcomeCallable ThpcClient::AddClusterStorageOptionCallable(const AddClusterStorageOptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddClusterStorageOptionOutcome()>>(
        [this, request]()
        {
            return this->AddClusterStorageOption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::AddNodesOutcomeCallable ThpcClient::AddNodesCallable(const AddNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddNodesOutcome()>>(
        [this, request]()
        {
            return this->AddNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::AddQueueOutcomeCallable ThpcClient::AddQueueCallable(const AddQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddQueueOutcome()>>(
        [this, request]()
        {
            return this->AddQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAutoScalingGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::BindAutoScalingGroupOutcomeCallable ThpcClient::BindAutoScalingGroupCallable(const BindAutoScalingGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAutoScalingGroupOutcome()>>(
        [this, request]()
        {
            return this->BindAutoScalingGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::CreateClusterOutcomeCallable ThpcClient::CreateClusterCallable(const CreateClusterRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DeleteClusterOutcomeCallable ThpcClient::DeleteClusterCallable(const DeleteClusterRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClusterStorageOption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DeleteClusterStorageOptionOutcomeCallable ThpcClient::DeleteClusterStorageOptionCallable(const DeleteClusterStorageOptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClusterStorageOptionOutcome()>>(
        [this, request]()
        {
            return this->DeleteClusterStorageOption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DeleteNodesOutcomeCallable ThpcClient::DeleteNodesCallable(const DeleteNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNodesOutcome()>>(
        [this, request]()
        {
            return this->DeleteNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteQueue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DeleteQueueOutcomeCallable ThpcClient::DeleteQueueCallable(const DeleteQueueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteQueueOutcome()>>(
        [this, request]()
        {
            return this->DeleteQueue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAutoScalingConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DescribeAutoScalingConfigurationOutcomeCallable ThpcClient::DescribeAutoScalingConfigurationCallable(const DescribeAutoScalingConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAutoScalingConfigurationOutcome()>>(
        [this, request]()
        {
            return this->DescribeAutoScalingConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterActivities(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DescribeClusterActivitiesOutcomeCallable ThpcClient::DescribeClusterActivitiesCallable(const DescribeClusterActivitiesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterActivitiesOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterActivities(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusterStorageOption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DescribeClusterStorageOptionOutcomeCallable ThpcClient::DescribeClusterStorageOptionCallable(const DescribeClusterStorageOptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClusterStorageOptionOutcome()>>(
        [this, request]()
        {
            return this->DescribeClusterStorageOption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClusters(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DescribeClustersOutcomeCallable ThpcClient::DescribeClustersCallable(const DescribeClustersRequest &request)
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DescribeNodesOutcomeCallable ThpcClient::DescribeNodesCallable(const DescribeNodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeNodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeQueues(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::DescribeQueuesOutcomeCallable ThpcClient::DescribeQueuesCallable(const DescribeQueuesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeQueuesOutcome()>>(
        [this, request]()
        {
            return this->DescribeQueues(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetAutoScalingConfiguration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

ThpcClient::SetAutoScalingConfigurationOutcomeCallable ThpcClient::SetAutoScalingConfigurationCallable(const SetAutoScalingConfigurationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetAutoScalingConfigurationOutcome()>>(
        [this, request]()
        {
            return this->SetAutoScalingConfiguration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

