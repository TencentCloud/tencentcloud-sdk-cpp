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

#include <tencentcloud/trocket/v20230308/TrocketClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trocket::V20230308;
using namespace TencentCloud::Trocket::V20230308::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-03-08";
    const string ENDPOINT = "trocket.tencentcloudapi.com";
}

TrocketClient::TrocketClient(const Credential &credential, const string &region) :
    TrocketClient(credential, region, ClientProfile())
{
}

TrocketClient::TrocketClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrocketClient::CreateConsumerGroupOutcome TrocketClient::CreateConsumerGroup(const CreateConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerGroupResponse rsp = CreateConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerGroupOutcome(rsp);
        else
            return CreateConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateConsumerGroupAsync(const CreateConsumerGroupRequest& request, const CreateConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateConsumerGroupOutcomeCallable TrocketClient::CreateConsumerGroupCallable(const CreateConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateInstanceOutcome TrocketClient::CreateInstance(const CreateInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstanceResponse rsp = CreateInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstanceOutcome(rsp);
        else
            return CreateInstanceOutcome(o.GetError());
    }
    else
    {
        return CreateInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateInstanceOutcomeCallable TrocketClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreateInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateRoleOutcome TrocketClient::CreateRole(const CreateRoleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRoleResponse rsp = CreateRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRoleOutcome(rsp);
        else
            return CreateRoleOutcome(o.GetError());
    }
    else
    {
        return CreateRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::CreateRoleAsync(const CreateRoleRequest& request, const CreateRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateRoleOutcomeCallable TrocketClient::CreateRoleCallable(const CreateRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRoleOutcome()>>(
        [this, request]()
        {
            return this->CreateRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::CreateTopicOutcome TrocketClient::CreateTopic(const CreateTopicRequest &request)
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

void TrocketClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::CreateTopicOutcomeCallable TrocketClient::CreateTopicCallable(const CreateTopicRequest &request)
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

TrocketClient::DeleteConsumerGroupOutcome TrocketClient::DeleteConsumerGroup(const DeleteConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConsumerGroupResponse rsp = DeleteConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConsumerGroupOutcome(rsp);
        else
            return DeleteConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteConsumerGroupAsync(const DeleteConsumerGroupRequest& request, const DeleteConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteConsumerGroupOutcomeCallable TrocketClient::DeleteConsumerGroupCallable(const DeleteConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteInstanceOutcome TrocketClient::DeleteInstance(const DeleteInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstanceResponse rsp = DeleteInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstanceOutcome(rsp);
        else
            return DeleteInstanceOutcome(o.GetError());
    }
    else
    {
        return DeleteInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteInstanceOutcomeCallable TrocketClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstanceOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteRoleOutcome TrocketClient::DeleteRole(const DeleteRoleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRoleResponse rsp = DeleteRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRoleOutcome(rsp);
        else
            return DeleteRoleOutcome(o.GetError());
    }
    else
    {
        return DeleteRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteRoleAsync(const DeleteRoleRequest& request, const DeleteRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteRoleOutcomeCallable TrocketClient::DeleteRoleCallable(const DeleteRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRoleOutcome()>>(
        [this, request]()
        {
            return this->DeleteRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DeleteTopicOutcome TrocketClient::DeleteTopic(const DeleteTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicResponse rsp = DeleteTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicOutcome(rsp);
        else
            return DeleteTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DeleteTopicOutcomeCallable TrocketClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeConsumerGroupOutcome TrocketClient::DescribeConsumerGroup(const DescribeConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupResponse rsp = DescribeConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupOutcome(rsp);
        else
            return DescribeConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerGroupAsync(const DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeConsumerGroupOutcomeCallable TrocketClient::DescribeConsumerGroupCallable(const DescribeConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeConsumerGroupListOutcome TrocketClient::DescribeConsumerGroupList(const DescribeConsumerGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConsumerGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConsumerGroupListResponse rsp = DescribeConsumerGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConsumerGroupListOutcome(rsp);
        else
            return DescribeConsumerGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeConsumerGroupListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeConsumerGroupListAsync(const DescribeConsumerGroupListRequest& request, const DescribeConsumerGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeConsumerGroupListOutcomeCallable TrocketClient::DescribeConsumerGroupListCallable(const DescribeConsumerGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConsumerGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeConsumerGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeInstanceOutcome TrocketClient::DescribeInstance(const DescribeInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceResponse rsp = DescribeInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceOutcome(rsp);
        else
            return DescribeInstanceOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeInstanceOutcomeCallable TrocketClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeInstanceListOutcome TrocketClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
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

void TrocketClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeInstanceListOutcomeCallable TrocketClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeRoleListOutcome TrocketClient::DescribeRoleList(const DescribeRoleListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoleList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRoleListResponse rsp = DescribeRoleListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRoleListOutcome(rsp);
        else
            return DescribeRoleListOutcome(o.GetError());
    }
    else
    {
        return DescribeRoleListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeRoleListAsync(const DescribeRoleListRequest& request, const DescribeRoleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoleList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeRoleListOutcomeCallable TrocketClient::DescribeRoleListCallable(const DescribeRoleListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRoleListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoleList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeTopicOutcome TrocketClient::DescribeTopic(const DescribeTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicResponse rsp = DescribeTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicOutcome(rsp);
        else
            return DescribeTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeTopicOutcomeCallable TrocketClient::DescribeTopicCallable(const DescribeTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeTopicListOutcome TrocketClient::DescribeTopicList(const DescribeTopicListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicListResponse rsp = DescribeTopicListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicListOutcome(rsp);
        else
            return DescribeTopicListOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicListOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicListAsync(const DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeTopicListOutcomeCallable TrocketClient::DescribeTopicListCallable(const DescribeTopicListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::DescribeTopicStatsOpOutcome TrocketClient::DescribeTopicStatsOp(const DescribeTopicStatsOpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicStatsOp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicStatsOpResponse rsp = DescribeTopicStatsOpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicStatsOpOutcome(rsp);
        else
            return DescribeTopicStatsOpOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicStatsOpOutcome(outcome.GetError());
    }
}

void TrocketClient::DescribeTopicStatsOpAsync(const DescribeTopicStatsOpRequest& request, const DescribeTopicStatsOpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicStatsOp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::DescribeTopicStatsOpOutcomeCallable TrocketClient::DescribeTopicStatsOpCallable(const DescribeTopicStatsOpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicStatsOpOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicStatsOp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ImportSourceClusterConsumerGroupsOutcome TrocketClient::ImportSourceClusterConsumerGroups(const ImportSourceClusterConsumerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSourceClusterConsumerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSourceClusterConsumerGroupsResponse rsp = ImportSourceClusterConsumerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSourceClusterConsumerGroupsOutcome(rsp);
        else
            return ImportSourceClusterConsumerGroupsOutcome(o.GetError());
    }
    else
    {
        return ImportSourceClusterConsumerGroupsOutcome(outcome.GetError());
    }
}

void TrocketClient::ImportSourceClusterConsumerGroupsAsync(const ImportSourceClusterConsumerGroupsRequest& request, const ImportSourceClusterConsumerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportSourceClusterConsumerGroups(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ImportSourceClusterConsumerGroupsOutcomeCallable TrocketClient::ImportSourceClusterConsumerGroupsCallable(const ImportSourceClusterConsumerGroupsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportSourceClusterConsumerGroupsOutcome()>>(
        [this, request]()
        {
            return this->ImportSourceClusterConsumerGroups(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ImportSourceClusterTopicsOutcome TrocketClient::ImportSourceClusterTopics(const ImportSourceClusterTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportSourceClusterTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportSourceClusterTopicsResponse rsp = ImportSourceClusterTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportSourceClusterTopicsOutcome(rsp);
        else
            return ImportSourceClusterTopicsOutcome(o.GetError());
    }
    else
    {
        return ImportSourceClusterTopicsOutcome(outcome.GetError());
    }
}

void TrocketClient::ImportSourceClusterTopicsAsync(const ImportSourceClusterTopicsRequest& request, const ImportSourceClusterTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportSourceClusterTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ImportSourceClusterTopicsOutcomeCallable TrocketClient::ImportSourceClusterTopicsCallable(const ImportSourceClusterTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportSourceClusterTopicsOutcome()>>(
        [this, request]()
        {
            return this->ImportSourceClusterTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyConsumerGroupOutcome TrocketClient::ModifyConsumerGroup(const ModifyConsumerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConsumerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConsumerGroupResponse rsp = ModifyConsumerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConsumerGroupOutcome(rsp);
        else
            return ModifyConsumerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyConsumerGroupOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyConsumerGroupAsync(const ModifyConsumerGroupRequest& request, const ModifyConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyConsumerGroupOutcomeCallable TrocketClient::ModifyConsumerGroupCallable(const ModifyConsumerGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConsumerGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyConsumerGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyInstanceOutcome TrocketClient::ModifyInstance(const ModifyInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceResponse rsp = ModifyInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceOutcome(rsp);
        else
            return ModifyInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyInstanceOutcomeCallable TrocketClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyRoleOutcome TrocketClient::ModifyRole(const ModifyRoleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRole");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoleResponse rsp = ModifyRoleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoleOutcome(rsp);
        else
            return ModifyRoleOutcome(o.GetError());
    }
    else
    {
        return ModifyRoleOutcome(outcome.GetError());
    }
}

void TrocketClient::ModifyRoleAsync(const ModifyRoleRequest& request, const ModifyRoleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRole(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyRoleOutcomeCallable TrocketClient::ModifyRoleCallable(const ModifyRoleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoleOutcome()>>(
        [this, request]()
        {
            return this->ModifyRole(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrocketClient::ModifyTopicOutcome TrocketClient::ModifyTopic(const ModifyTopicRequest &request)
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

void TrocketClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrocketClient::ModifyTopicOutcomeCallable TrocketClient::ModifyTopicCallable(const ModifyTopicRequest &request)
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

