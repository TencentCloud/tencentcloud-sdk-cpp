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

#include <tencentcloud/ckafka/v20190819/CkafkaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ckafka::V20190819;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-19";
    const string ENDPOINT = "ckafka.tencentcloudapi.com";
}

CkafkaClient::CkafkaClient(const Credential &credential, const string &region) :
    CkafkaClient(credential, region, ClientProfile())
{
}

CkafkaClient::CkafkaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CkafkaClient::AuthorizeTokenOutcome CkafkaClient::AuthorizeToken(const AuthorizeTokenRequest &request)
{
    auto outcome = MakeRequest(request, "AuthorizeToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AuthorizeTokenResponse rsp = AuthorizeTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AuthorizeTokenOutcome(rsp);
        else
            return AuthorizeTokenOutcome(o.GetError());
    }
    else
    {
        return AuthorizeTokenOutcome(outcome.GetError());
    }
}

void CkafkaClient::AuthorizeTokenAsync(const AuthorizeTokenRequest& request, const AuthorizeTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AuthorizeToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::AuthorizeTokenOutcomeCallable CkafkaClient::AuthorizeTokenCallable(const AuthorizeTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AuthorizeTokenOutcome()>>(
        [this, request]()
        {
            return this->AuthorizeToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::BatchCreateAclOutcome CkafkaClient::BatchCreateAcl(const BatchCreateAclRequest &request)
{
    auto outcome = MakeRequest(request, "BatchCreateAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchCreateAclResponse rsp = BatchCreateAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchCreateAclOutcome(rsp);
        else
            return BatchCreateAclOutcome(o.GetError());
    }
    else
    {
        return BatchCreateAclOutcome(outcome.GetError());
    }
}

void CkafkaClient::BatchCreateAclAsync(const BatchCreateAclRequest& request, const BatchCreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchCreateAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::BatchCreateAclOutcomeCallable CkafkaClient::BatchCreateAclCallable(const BatchCreateAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchCreateAclOutcome()>>(
        [this, request]()
        {
            return this->BatchCreateAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::BatchModifyGroupOffsetsOutcome CkafkaClient::BatchModifyGroupOffsets(const BatchModifyGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyGroupOffsetsResponse rsp = BatchModifyGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyGroupOffsetsOutcome(rsp);
        else
            return BatchModifyGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return BatchModifyGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::BatchModifyGroupOffsetsAsync(const BatchModifyGroupOffsetsRequest& request, const BatchModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyGroupOffsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::BatchModifyGroupOffsetsOutcomeCallable CkafkaClient::BatchModifyGroupOffsetsCallable(const BatchModifyGroupOffsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyGroupOffsetsOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyGroupOffsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::BatchModifyTopicAttributesOutcome CkafkaClient::BatchModifyTopicAttributes(const BatchModifyTopicAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyTopicAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyTopicAttributesResponse rsp = BatchModifyTopicAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyTopicAttributesOutcome(rsp);
        else
            return BatchModifyTopicAttributesOutcome(o.GetError());
    }
    else
    {
        return BatchModifyTopicAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::BatchModifyTopicAttributesAsync(const BatchModifyTopicAttributesRequest& request, const BatchModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyTopicAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::BatchModifyTopicAttributesOutcomeCallable CkafkaClient::BatchModifyTopicAttributesCallable(const BatchModifyTopicAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyTopicAttributesOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyTopicAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CancelAuthorizationTokenOutcome CkafkaClient::CancelAuthorizationToken(const CancelAuthorizationTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CancelAuthorizationToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CancelAuthorizationTokenResponse rsp = CancelAuthorizationTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CancelAuthorizationTokenOutcome(rsp);
        else
            return CancelAuthorizationTokenOutcome(o.GetError());
    }
    else
    {
        return CancelAuthorizationTokenOutcome(outcome.GetError());
    }
}

void CkafkaClient::CancelAuthorizationTokenAsync(const CancelAuthorizationTokenRequest& request, const CancelAuthorizationTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CancelAuthorizationToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CancelAuthorizationTokenOutcomeCallable CkafkaClient::CancelAuthorizationTokenCallable(const CancelAuthorizationTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CancelAuthorizationTokenOutcome()>>(
        [this, request]()
        {
            return this->CancelAuthorizationToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CheckCdcClusterOutcome CkafkaClient::CheckCdcCluster(const CheckCdcClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCdcCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCdcClusterResponse rsp = CheckCdcClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCdcClusterOutcome(rsp);
        else
            return CheckCdcClusterOutcome(o.GetError());
    }
    else
    {
        return CheckCdcClusterOutcome(outcome.GetError());
    }
}

void CkafkaClient::CheckCdcClusterAsync(const CheckCdcClusterRequest& request, const CheckCdcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCdcCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CheckCdcClusterOutcomeCallable CkafkaClient::CheckCdcClusterCallable(const CheckCdcClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCdcClusterOutcome()>>(
        [this, request]()
        {
            return this->CheckCdcCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateAclOutcome CkafkaClient::CreateAcl(const CreateAclRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAclResponse rsp = CreateAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAclOutcome(rsp);
        else
            return CreateAclOutcome(o.GetError());
    }
    else
    {
        return CreateAclOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateAclAsync(const CreateAclRequest& request, const CreateAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateAclOutcomeCallable CkafkaClient::CreateAclCallable(const CreateAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAclOutcome()>>(
        [this, request]()
        {
            return this->CreateAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateAclRuleOutcome CkafkaClient::CreateAclRule(const CreateAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAclRuleResponse rsp = CreateAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAclRuleOutcome(rsp);
        else
            return CreateAclRuleOutcome(o.GetError());
    }
    else
    {
        return CreateAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateAclRuleAsync(const CreateAclRuleRequest& request, const CreateAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateAclRuleOutcomeCallable CkafkaClient::CreateAclRuleCallable(const CreateAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAclRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateCdcClusterOutcome CkafkaClient::CreateCdcCluster(const CreateCdcClusterRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCdcCluster");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCdcClusterResponse rsp = CreateCdcClusterResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCdcClusterOutcome(rsp);
        else
            return CreateCdcClusterOutcome(o.GetError());
    }
    else
    {
        return CreateCdcClusterOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateCdcClusterAsync(const CreateCdcClusterRequest& request, const CreateCdcClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCdcCluster(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateCdcClusterOutcomeCallable CkafkaClient::CreateCdcClusterCallable(const CreateCdcClusterRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCdcClusterOutcome()>>(
        [this, request]()
        {
            return this->CreateCdcCluster(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateConnectResourceOutcome CkafkaClient::CreateConnectResource(const CreateConnectResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConnectResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConnectResourceResponse rsp = CreateConnectResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConnectResourceOutcome(rsp);
        else
            return CreateConnectResourceOutcome(o.GetError());
    }
    else
    {
        return CreateConnectResourceOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateConnectResourceAsync(const CreateConnectResourceRequest& request, const CreateConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConnectResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateConnectResourceOutcomeCallable CkafkaClient::CreateConnectResourceCallable(const CreateConnectResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConnectResourceOutcome()>>(
        [this, request]()
        {
            return this->CreateConnectResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateConsumerOutcome CkafkaClient::CreateConsumer(const CreateConsumerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConsumer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConsumerResponse rsp = CreateConsumerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConsumerOutcome(rsp);
        else
            return CreateConsumerOutcome(o.GetError());
    }
    else
    {
        return CreateConsumerOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateConsumerAsync(const CreateConsumerRequest& request, const CreateConsumerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateConsumer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateConsumerOutcomeCallable CkafkaClient::CreateConsumerCallable(const CreateConsumerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateConsumerOutcome()>>(
        [this, request]()
        {
            return this->CreateConsumer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateDatahubTaskOutcome CkafkaClient::CreateDatahubTask(const CreateDatahubTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatahubTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatahubTaskResponse rsp = CreateDatahubTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatahubTaskOutcome(rsp);
        else
            return CreateDatahubTaskOutcome(o.GetError());
    }
    else
    {
        return CreateDatahubTaskOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateDatahubTaskAsync(const CreateDatahubTaskRequest& request, const CreateDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatahubTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateDatahubTaskOutcomeCallable CkafkaClient::CreateDatahubTaskCallable(const CreateDatahubTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatahubTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateDatahubTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateDatahubTopicOutcome CkafkaClient::CreateDatahubTopic(const CreateDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDatahubTopicResponse rsp = CreateDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDatahubTopicOutcome(rsp);
        else
            return CreateDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return CreateDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateDatahubTopicAsync(const CreateDatahubTopicRequest& request, const CreateDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDatahubTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateDatahubTopicOutcomeCallable CkafkaClient::CreateDatahubTopicCallable(const CreateDatahubTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDatahubTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateDatahubTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateInstancePostOutcome CkafkaClient::CreateInstancePost(const CreateInstancePostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstancePost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancePostResponse rsp = CreateInstancePostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancePostOutcome(rsp);
        else
            return CreateInstancePostOutcome(o.GetError());
    }
    else
    {
        return CreateInstancePostOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateInstancePostAsync(const CreateInstancePostRequest& request, const CreateInstancePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstancePost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateInstancePostOutcomeCallable CkafkaClient::CreateInstancePostCallable(const CreateInstancePostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstancePostOutcome()>>(
        [this, request]()
        {
            return this->CreateInstancePost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateInstancePreOutcome CkafkaClient::CreateInstancePre(const CreateInstancePreRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInstancePre");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInstancePreResponse rsp = CreateInstancePreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInstancePreOutcome(rsp);
        else
            return CreateInstancePreOutcome(o.GetError());
    }
    else
    {
        return CreateInstancePreOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateInstancePreAsync(const CreateInstancePreRequest& request, const CreateInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstancePre(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateInstancePreOutcomeCallable CkafkaClient::CreateInstancePreCallable(const CreateInstancePreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInstancePreOutcome()>>(
        [this, request]()
        {
            return this->CreateInstancePre(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreatePartitionOutcome CkafkaClient::CreatePartition(const CreatePartitionRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePartition");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePartitionResponse rsp = CreatePartitionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePartitionOutcome(rsp);
        else
            return CreatePartitionOutcome(o.GetError());
    }
    else
    {
        return CreatePartitionOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreatePartitionAsync(const CreatePartitionRequest& request, const CreatePartitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePartition(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreatePartitionOutcomeCallable CkafkaClient::CreatePartitionCallable(const CreatePartitionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePartitionOutcome()>>(
        [this, request]()
        {
            return this->CreatePartition(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreatePostPaidInstanceOutcome CkafkaClient::CreatePostPaidInstance(const CreatePostPaidInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePostPaidInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePostPaidInstanceResponse rsp = CreatePostPaidInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePostPaidInstanceOutcome(rsp);
        else
            return CreatePostPaidInstanceOutcome(o.GetError());
    }
    else
    {
        return CreatePostPaidInstanceOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreatePostPaidInstanceAsync(const CreatePostPaidInstanceRequest& request, const CreatePostPaidInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePostPaidInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreatePostPaidInstanceOutcomeCallable CkafkaClient::CreatePostPaidInstanceCallable(const CreatePostPaidInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePostPaidInstanceOutcome()>>(
        [this, request]()
        {
            return this->CreatePostPaidInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreatePrometheusOutcome CkafkaClient::CreatePrometheus(const CreatePrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrometheusResponse rsp = CreatePrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrometheusOutcome(rsp);
        else
            return CreatePrometheusOutcome(o.GetError());
    }
    else
    {
        return CreatePrometheusOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreatePrometheusAsync(const CreatePrometheusRequest& request, const CreatePrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrometheus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreatePrometheusOutcomeCallable CkafkaClient::CreatePrometheusCallable(const CreatePrometheusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrometheusOutcome()>>(
        [this, request]()
        {
            return this->CreatePrometheus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateRouteOutcome CkafkaClient::CreateRoute(const CreateRouteRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRouteResponse rsp = CreateRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRouteOutcome(rsp);
        else
            return CreateRouteOutcome(o.GetError());
    }
    else
    {
        return CreateRouteOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateRouteOutcomeCallable CkafkaClient::CreateRouteCallable(const CreateRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRouteOutcome()>>(
        [this, request]()
        {
            return this->CreateRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateTokenOutcome CkafkaClient::CreateToken(const CreateTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTokenResponse rsp = CreateTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTokenOutcome(rsp);
        else
            return CreateTokenOutcome(o.GetError());
    }
    else
    {
        return CreateTokenOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateTokenAsync(const CreateTokenRequest& request, const CreateTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateTokenOutcomeCallable CkafkaClient::CreateTokenCallable(const CreateTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTokenOutcome()>>(
        [this, request]()
        {
            return this->CreateToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateTopicOutcome CkafkaClient::CreateTopic(const CreateTopicRequest &request)
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

void CkafkaClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateTopicOutcomeCallable CkafkaClient::CreateTopicCallable(const CreateTopicRequest &request)
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

CkafkaClient::CreateTopicIpWhiteListOutcome CkafkaClient::CreateTopicIpWhiteList(const CreateTopicIpWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTopicIpWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTopicIpWhiteListResponse rsp = CreateTopicIpWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTopicIpWhiteListOutcome(rsp);
        else
            return CreateTopicIpWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateTopicIpWhiteListOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateTopicIpWhiteListAsync(const CreateTopicIpWhiteListRequest& request, const CreateTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopicIpWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateTopicIpWhiteListOutcomeCallable CkafkaClient::CreateTopicIpWhiteListCallable(const CreateTopicIpWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTopicIpWhiteListOutcome()>>(
        [this, request]()
        {
            return this->CreateTopicIpWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::CreateUserOutcome CkafkaClient::CreateUser(const CreateUserRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUserResponse rsp = CreateUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUserOutcome(rsp);
        else
            return CreateUserOutcome(o.GetError());
    }
    else
    {
        return CreateUserOutcome(outcome.GetError());
    }
}

void CkafkaClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::CreateUserOutcomeCallable CkafkaClient::CreateUserCallable(const CreateUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateUserOutcome()>>(
        [this, request]()
        {
            return this->CreateUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteAclOutcome CkafkaClient::DeleteAcl(const DeleteAclRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAcl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAclResponse rsp = DeleteAclResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAclOutcome(rsp);
        else
            return DeleteAclOutcome(o.GetError());
    }
    else
    {
        return DeleteAclOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteAclAsync(const DeleteAclRequest& request, const DeleteAclAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAcl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteAclOutcomeCallable CkafkaClient::DeleteAclCallable(const DeleteAclRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAclOutcome()>>(
        [this, request]()
        {
            return this->DeleteAcl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteAclRuleOutcome CkafkaClient::DeleteAclRule(const DeleteAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAclRuleResponse rsp = DeleteAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAclRuleOutcome(rsp);
        else
            return DeleteAclRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteAclRuleAsync(const DeleteAclRuleRequest& request, const DeleteAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteAclRuleOutcomeCallable CkafkaClient::DeleteAclRuleCallable(const DeleteAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAclRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteConnectResourceOutcome CkafkaClient::DeleteConnectResource(const DeleteConnectResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConnectResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConnectResourceResponse rsp = DeleteConnectResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConnectResourceOutcome(rsp);
        else
            return DeleteConnectResourceOutcome(o.GetError());
    }
    else
    {
        return DeleteConnectResourceOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteConnectResourceAsync(const DeleteConnectResourceRequest& request, const DeleteConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteConnectResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteConnectResourceOutcomeCallable CkafkaClient::DeleteConnectResourceCallable(const DeleteConnectResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteConnectResourceOutcome()>>(
        [this, request]()
        {
            return this->DeleteConnectResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteDatahubTaskOutcome CkafkaClient::DeleteDatahubTask(const DeleteDatahubTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDatahubTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatahubTaskResponse rsp = DeleteDatahubTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatahubTaskOutcome(rsp);
        else
            return DeleteDatahubTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteDatahubTaskOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteDatahubTaskAsync(const DeleteDatahubTaskRequest& request, const DeleteDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDatahubTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteDatahubTaskOutcomeCallable CkafkaClient::DeleteDatahubTaskCallable(const DeleteDatahubTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDatahubTaskOutcome()>>(
        [this, request]()
        {
            return this->DeleteDatahubTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteDatahubTopicOutcome CkafkaClient::DeleteDatahubTopic(const DeleteDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDatahubTopicResponse rsp = DeleteDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDatahubTopicOutcome(rsp);
        else
            return DeleteDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteDatahubTopicAsync(const DeleteDatahubTopicRequest& request, const DeleteDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDatahubTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteDatahubTopicOutcomeCallable CkafkaClient::DeleteDatahubTopicCallable(const DeleteDatahubTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDatahubTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteDatahubTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteGroupOutcome CkafkaClient::DeleteGroup(const DeleteGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGroupResponse rsp = DeleteGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGroupOutcome(rsp);
        else
            return DeleteGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteGroupOutcomeCallable CkafkaClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteInstancePostOutcome CkafkaClient::DeleteInstancePost(const DeleteInstancePostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstancePost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstancePostResponse rsp = DeleteInstancePostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstancePostOutcome(rsp);
        else
            return DeleteInstancePostOutcome(o.GetError());
    }
    else
    {
        return DeleteInstancePostOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteInstancePostAsync(const DeleteInstancePostRequest& request, const DeleteInstancePostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstancePost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteInstancePostOutcomeCallable CkafkaClient::DeleteInstancePostCallable(const DeleteInstancePostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstancePostOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstancePost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteInstancePreOutcome CkafkaClient::DeleteInstancePre(const DeleteInstancePreRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInstancePre");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInstancePreResponse rsp = DeleteInstancePreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInstancePreOutcome(rsp);
        else
            return DeleteInstancePreOutcome(o.GetError());
    }
    else
    {
        return DeleteInstancePreOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteInstancePreAsync(const DeleteInstancePreRequest& request, const DeleteInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstancePre(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteInstancePreOutcomeCallable CkafkaClient::DeleteInstancePreCallable(const DeleteInstancePreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInstancePreOutcome()>>(
        [this, request]()
        {
            return this->DeleteInstancePre(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteRouteOutcome CkafkaClient::DeleteRoute(const DeleteRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteResponse rsp = DeleteRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteOutcome(rsp);
        else
            return DeleteRouteOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteRouteOutcomeCallable CkafkaClient::DeleteRouteCallable(const DeleteRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRouteOutcome()>>(
        [this, request]()
        {
            return this->DeleteRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteRouteTriggerTimeOutcome CkafkaClient::DeleteRouteTriggerTime(const DeleteRouteTriggerTimeRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRouteTriggerTime");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRouteTriggerTimeResponse rsp = DeleteRouteTriggerTimeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRouteTriggerTimeOutcome(rsp);
        else
            return DeleteRouteTriggerTimeOutcome(o.GetError());
    }
    else
    {
        return DeleteRouteTriggerTimeOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteRouteTriggerTimeAsync(const DeleteRouteTriggerTimeRequest& request, const DeleteRouteTriggerTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRouteTriggerTime(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteRouteTriggerTimeOutcomeCallable CkafkaClient::DeleteRouteTriggerTimeCallable(const DeleteRouteTriggerTimeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRouteTriggerTimeOutcome()>>(
        [this, request]()
        {
            return this->DeleteRouteTriggerTime(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteTopicOutcome CkafkaClient::DeleteTopic(const DeleteTopicRequest &request)
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

void CkafkaClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteTopicOutcomeCallable CkafkaClient::DeleteTopicCallable(const DeleteTopicRequest &request)
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

CkafkaClient::DeleteTopicIpWhiteListOutcome CkafkaClient::DeleteTopicIpWhiteList(const DeleteTopicIpWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTopicIpWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTopicIpWhiteListResponse rsp = DeleteTopicIpWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTopicIpWhiteListOutcome(rsp);
        else
            return DeleteTopicIpWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteTopicIpWhiteListOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteTopicIpWhiteListAsync(const DeleteTopicIpWhiteListRequest& request, const DeleteTopicIpWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopicIpWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteTopicIpWhiteListOutcomeCallable CkafkaClient::DeleteTopicIpWhiteListCallable(const DeleteTopicIpWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTopicIpWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteTopicIpWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DeleteUserOutcome CkafkaClient::DeleteUser(const DeleteUserRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUserResponse rsp = DeleteUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUserOutcome(rsp);
        else
            return DeleteUserOutcome(o.GetError());
    }
    else
    {
        return DeleteUserOutcome(outcome.GetError());
    }
}

void CkafkaClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DeleteUserOutcomeCallable CkafkaClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteUserOutcome()>>(
        [this, request]()
        {
            return this->DeleteUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeACLOutcome CkafkaClient::DescribeACL(const DescribeACLRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeACL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeACLResponse rsp = DescribeACLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeACLOutcome(rsp);
        else
            return DescribeACLOutcome(o.GetError());
    }
    else
    {
        return DescribeACLOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeACLAsync(const DescribeACLRequest& request, const DescribeACLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeACL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeACLOutcomeCallable CkafkaClient::DescribeACLCallable(const DescribeACLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeACLOutcome()>>(
        [this, request]()
        {
            return this->DescribeACL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeAclRuleOutcome CkafkaClient::DescribeAclRule(const DescribeAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAclRuleResponse rsp = DescribeAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAclRuleOutcome(rsp);
        else
            return DescribeAclRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeAclRuleAsync(const DescribeAclRuleRequest& request, const DescribeAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeAclRuleOutcomeCallable CkafkaClient::DescribeAclRuleCallable(const DescribeAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAclRuleOutcome()>>(
        [this, request]()
        {
            return this->DescribeAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeAppInfoOutcome CkafkaClient::DescribeAppInfo(const DescribeAppInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAppInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppInfoResponse rsp = DescribeAppInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppInfoOutcome(rsp);
        else
            return DescribeAppInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeAppInfoOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeAppInfoAsync(const DescribeAppInfoRequest& request, const DescribeAppInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAppInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeAppInfoOutcomeCallable CkafkaClient::DescribeAppInfoCallable(const DescribeAppInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeAppInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeCkafkaZoneOutcome CkafkaClient::DescribeCkafkaZone(const DescribeCkafkaZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCkafkaZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCkafkaZoneResponse rsp = DescribeCkafkaZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCkafkaZoneOutcome(rsp);
        else
            return DescribeCkafkaZoneOutcome(o.GetError());
    }
    else
    {
        return DescribeCkafkaZoneOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeCkafkaZoneAsync(const DescribeCkafkaZoneRequest& request, const DescribeCkafkaZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCkafkaZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeCkafkaZoneOutcomeCallable CkafkaClient::DescribeCkafkaZoneCallable(const DescribeCkafkaZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCkafkaZoneOutcome()>>(
        [this, request]()
        {
            return this->DescribeCkafkaZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeConnectResourceOutcome CkafkaClient::DescribeConnectResource(const DescribeConnectResourceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConnectResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConnectResourceResponse rsp = DescribeConnectResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConnectResourceOutcome(rsp);
        else
            return DescribeConnectResourceOutcome(o.GetError());
    }
    else
    {
        return DescribeConnectResourceOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeConnectResourceAsync(const DescribeConnectResourceRequest& request, const DescribeConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConnectResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeConnectResourceOutcomeCallable CkafkaClient::DescribeConnectResourceCallable(const DescribeConnectResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConnectResourceOutcome()>>(
        [this, request]()
        {
            return this->DescribeConnectResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeConnectResourcesOutcome CkafkaClient::DescribeConnectResources(const DescribeConnectResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConnectResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConnectResourcesResponse rsp = DescribeConnectResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConnectResourcesOutcome(rsp);
        else
            return DescribeConnectResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeConnectResourcesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeConnectResourcesAsync(const DescribeConnectResourcesRequest& request, const DescribeConnectResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConnectResources(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeConnectResourcesOutcomeCallable CkafkaClient::DescribeConnectResourcesCallable(const DescribeConnectResourcesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConnectResourcesOutcome()>>(
        [this, request]()
        {
            return this->DescribeConnectResources(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeConsumerGroupOutcome CkafkaClient::DescribeConsumerGroup(const DescribeConsumerGroupRequest &request)
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

void CkafkaClient::DescribeConsumerGroupAsync(const DescribeConsumerGroupRequest& request, const DescribeConsumerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConsumerGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeConsumerGroupOutcomeCallable CkafkaClient::DescribeConsumerGroupCallable(const DescribeConsumerGroupRequest &request)
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

CkafkaClient::DescribeCvmInfoOutcome CkafkaClient::DescribeCvmInfo(const DescribeCvmInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCvmInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCvmInfoResponse rsp = DescribeCvmInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCvmInfoOutcome(rsp);
        else
            return DescribeCvmInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeCvmInfoOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeCvmInfoAsync(const DescribeCvmInfoRequest& request, const DescribeCvmInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCvmInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeCvmInfoOutcomeCallable CkafkaClient::DescribeCvmInfoCallable(const DescribeCvmInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCvmInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeCvmInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeDatahubGroupOffsetsOutcome CkafkaClient::DescribeDatahubGroupOffsets(const DescribeDatahubGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubGroupOffsetsResponse rsp = DescribeDatahubGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubGroupOffsetsOutcome(rsp);
        else
            return DescribeDatahubGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubGroupOffsetsAsync(const DescribeDatahubGroupOffsetsRequest& request, const DescribeDatahubGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatahubGroupOffsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeDatahubGroupOffsetsOutcomeCallable CkafkaClient::DescribeDatahubGroupOffsetsCallable(const DescribeDatahubGroupOffsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatahubGroupOffsetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatahubGroupOffsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeDatahubTaskOutcome CkafkaClient::DescribeDatahubTask(const DescribeDatahubTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubTaskResponse rsp = DescribeDatahubTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubTaskOutcome(rsp);
        else
            return DescribeDatahubTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubTaskOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubTaskAsync(const DescribeDatahubTaskRequest& request, const DescribeDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatahubTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeDatahubTaskOutcomeCallable CkafkaClient::DescribeDatahubTaskCallable(const DescribeDatahubTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatahubTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatahubTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeDatahubTasksOutcome CkafkaClient::DescribeDatahubTasks(const DescribeDatahubTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubTasksResponse rsp = DescribeDatahubTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubTasksOutcome(rsp);
        else
            return DescribeDatahubTasksOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubTasksOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubTasksAsync(const DescribeDatahubTasksRequest& request, const DescribeDatahubTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatahubTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeDatahubTasksOutcomeCallable CkafkaClient::DescribeDatahubTasksCallable(const DescribeDatahubTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatahubTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatahubTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeDatahubTopicOutcome CkafkaClient::DescribeDatahubTopic(const DescribeDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubTopicResponse rsp = DescribeDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubTopicOutcome(rsp);
        else
            return DescribeDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubTopicAsync(const DescribeDatahubTopicRequest& request, const DescribeDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatahubTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeDatahubTopicOutcomeCallable CkafkaClient::DescribeDatahubTopicCallable(const DescribeDatahubTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatahubTopicOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatahubTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeDatahubTopicsOutcome CkafkaClient::DescribeDatahubTopics(const DescribeDatahubTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDatahubTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDatahubTopicsResponse rsp = DescribeDatahubTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDatahubTopicsOutcome(rsp);
        else
            return DescribeDatahubTopicsOutcome(o.GetError());
    }
    else
    {
        return DescribeDatahubTopicsOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeDatahubTopicsAsync(const DescribeDatahubTopicsRequest& request, const DescribeDatahubTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDatahubTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeDatahubTopicsOutcomeCallable CkafkaClient::DescribeDatahubTopicsCallable(const DescribeDatahubTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDatahubTopicsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDatahubTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeGroupOutcome CkafkaClient::DescribeGroup(const DescribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupResponse rsp = DescribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOutcome(rsp);
        else
            return DescribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeGroupOutcomeCallable CkafkaClient::DescribeGroupCallable(const DescribeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeGroupInfoOutcome CkafkaClient::DescribeGroupInfo(const DescribeGroupInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupInfoResponse rsp = DescribeGroupInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupInfoOutcome(rsp);
        else
            return DescribeGroupInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupInfoOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeGroupInfoAsync(const DescribeGroupInfoRequest& request, const DescribeGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeGroupInfoOutcomeCallable CkafkaClient::DescribeGroupInfoCallable(const DescribeGroupInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeGroupOffsetsOutcome CkafkaClient::DescribeGroupOffsets(const DescribeGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupOffsetsResponse rsp = DescribeGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupOffsetsOutcome(rsp);
        else
            return DescribeGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeGroupOffsetsAsync(const DescribeGroupOffsetsRequest& request, const DescribeGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGroupOffsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeGroupOffsetsOutcomeCallable CkafkaClient::DescribeGroupOffsetsCallable(const DescribeGroupOffsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGroupOffsetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGroupOffsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeInstanceAttributesOutcome CkafkaClient::DescribeInstanceAttributes(const DescribeInstanceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstanceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstanceAttributesResponse rsp = DescribeInstanceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstanceAttributesOutcome(rsp);
        else
            return DescribeInstanceAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeInstanceAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeInstanceAttributesAsync(const DescribeInstanceAttributesRequest& request, const DescribeInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeInstanceAttributesOutcomeCallable CkafkaClient::DescribeInstanceAttributesCallable(const DescribeInstanceAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstanceAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstanceAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeInstancesOutcome CkafkaClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void CkafkaClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeInstancesOutcomeCallable CkafkaClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeInstancesDetailOutcome CkafkaClient::DescribeInstancesDetail(const DescribeInstancesDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesDetailResponse rsp = DescribeInstancesDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesDetailOutcome(rsp);
        else
            return DescribeInstancesDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesDetailOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeInstancesDetailAsync(const DescribeInstancesDetailRequest& request, const DescribeInstancesDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstancesDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeInstancesDetailOutcomeCallable CkafkaClient::DescribeInstancesDetailCallable(const DescribeInstancesDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInstancesDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeInstancesDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribePrometheusOutcome CkafkaClient::DescribePrometheus(const DescribePrometheusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrometheus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrometheusResponse rsp = DescribePrometheusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrometheusOutcome(rsp);
        else
            return DescribePrometheusOutcome(o.GetError());
    }
    else
    {
        return DescribePrometheusOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribePrometheusAsync(const DescribePrometheusRequest& request, const DescribePrometheusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrometheus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribePrometheusOutcomeCallable CkafkaClient::DescribePrometheusCallable(const DescribePrometheusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrometheusOutcome()>>(
        [this, request]()
        {
            return this->DescribePrometheus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeRegionOutcome CkafkaClient::DescribeRegion(const DescribeRegionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRegionResponse rsp = DescribeRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRegionOutcome(rsp);
        else
            return DescribeRegionOutcome(o.GetError());
    }
    else
    {
        return DescribeRegionOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeRegionAsync(const DescribeRegionRequest& request, const DescribeRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeRegionOutcomeCallable CkafkaClient::DescribeRegionCallable(const DescribeRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRegionOutcome()>>(
        [this, request]()
        {
            return this->DescribeRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeRouteOutcome CkafkaClient::DescribeRoute(const DescribeRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRouteResponse rsp = DescribeRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRouteOutcome(rsp);
        else
            return DescribeRouteOutcome(o.GetError());
    }
    else
    {
        return DescribeRouteOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeRouteAsync(const DescribeRouteRequest& request, const DescribeRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRoute(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeRouteOutcomeCallable CkafkaClient::DescribeRouteCallable(const DescribeRouteRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRouteOutcome()>>(
        [this, request]()
        {
            return this->DescribeRoute(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeSecurityGroupRoutesOutcome CkafkaClient::DescribeSecurityGroupRoutes(const DescribeSecurityGroupRoutesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSecurityGroupRoutes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSecurityGroupRoutesResponse rsp = DescribeSecurityGroupRoutesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSecurityGroupRoutesOutcome(rsp);
        else
            return DescribeSecurityGroupRoutesOutcome(o.GetError());
    }
    else
    {
        return DescribeSecurityGroupRoutesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeSecurityGroupRoutesAsync(const DescribeSecurityGroupRoutesRequest& request, const DescribeSecurityGroupRoutesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSecurityGroupRoutes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeSecurityGroupRoutesOutcomeCallable CkafkaClient::DescribeSecurityGroupRoutesCallable(const DescribeSecurityGroupRoutesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSecurityGroupRoutesOutcome()>>(
        [this, request]()
        {
            return this->DescribeSecurityGroupRoutes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTaskStatusOutcome CkafkaClient::DescribeTaskStatus(const DescribeTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskStatusResponse rsp = DescribeTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskStatusOutcome(rsp);
        else
            return DescribeTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskStatusOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTaskStatusAsync(const DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTaskStatusOutcomeCallable CkafkaClient::DescribeTaskStatusCallable(const DescribeTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTopicOutcome CkafkaClient::DescribeTopic(const DescribeTopicRequest &request)
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

void CkafkaClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicOutcomeCallable CkafkaClient::DescribeTopicCallable(const DescribeTopicRequest &request)
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

CkafkaClient::DescribeTopicAttributesOutcome CkafkaClient::DescribeTopicAttributes(const DescribeTopicAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicAttributesResponse rsp = DescribeTopicAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicAttributesOutcome(rsp);
        else
            return DescribeTopicAttributesOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicAttributesAsync(const DescribeTopicAttributesRequest& request, const DescribeTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicAttributesOutcomeCallable CkafkaClient::DescribeTopicAttributesCallable(const DescribeTopicAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicAttributesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTopicDetailOutcome CkafkaClient::DescribeTopicDetail(const DescribeTopicDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicDetailResponse rsp = DescribeTopicDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicDetailOutcome(rsp);
        else
            return DescribeTopicDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicDetailOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicDetailAsync(const DescribeTopicDetailRequest& request, const DescribeTopicDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicDetailOutcomeCallable CkafkaClient::DescribeTopicDetailCallable(const DescribeTopicDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTopicFlowRankingOutcome CkafkaClient::DescribeTopicFlowRanking(const DescribeTopicFlowRankingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicFlowRanking");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicFlowRankingResponse rsp = DescribeTopicFlowRankingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicFlowRankingOutcome(rsp);
        else
            return DescribeTopicFlowRankingOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicFlowRankingOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicFlowRankingAsync(const DescribeTopicFlowRankingRequest& request, const DescribeTopicFlowRankingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicFlowRanking(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicFlowRankingOutcomeCallable CkafkaClient::DescribeTopicFlowRankingCallable(const DescribeTopicFlowRankingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicFlowRankingOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicFlowRanking(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTopicProduceConnectionOutcome CkafkaClient::DescribeTopicProduceConnection(const DescribeTopicProduceConnectionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicProduceConnection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicProduceConnectionResponse rsp = DescribeTopicProduceConnectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicProduceConnectionOutcome(rsp);
        else
            return DescribeTopicProduceConnectionOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicProduceConnectionOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicProduceConnectionAsync(const DescribeTopicProduceConnectionRequest& request, const DescribeTopicProduceConnectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicProduceConnection(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicProduceConnectionOutcomeCallable CkafkaClient::DescribeTopicProduceConnectionCallable(const DescribeTopicProduceConnectionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicProduceConnectionOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicProduceConnection(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTopicSubscribeGroupOutcome CkafkaClient::DescribeTopicSubscribeGroup(const DescribeTopicSubscribeGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicSubscribeGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicSubscribeGroupResponse rsp = DescribeTopicSubscribeGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicSubscribeGroupOutcome(rsp);
        else
            return DescribeTopicSubscribeGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicSubscribeGroupOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicSubscribeGroupAsync(const DescribeTopicSubscribeGroupRequest& request, const DescribeTopicSubscribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicSubscribeGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicSubscribeGroupOutcomeCallable CkafkaClient::DescribeTopicSubscribeGroupCallable(const DescribeTopicSubscribeGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicSubscribeGroupOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicSubscribeGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTopicSyncReplicaOutcome CkafkaClient::DescribeTopicSyncReplica(const DescribeTopicSyncReplicaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopicSyncReplica");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopicSyncReplicaResponse rsp = DescribeTopicSyncReplicaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopicSyncReplicaOutcome(rsp);
        else
            return DescribeTopicSyncReplicaOutcome(o.GetError());
    }
    else
    {
        return DescribeTopicSyncReplicaOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTopicSyncReplicaAsync(const DescribeTopicSyncReplicaRequest& request, const DescribeTopicSyncReplicaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicSyncReplica(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTopicSyncReplicaOutcomeCallable CkafkaClient::DescribeTopicSyncReplicaCallable(const DescribeTopicSyncReplicaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopicSyncReplicaOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopicSyncReplica(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeTypeInstancesOutcome CkafkaClient::DescribeTypeInstances(const DescribeTypeInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTypeInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTypeInstancesResponse rsp = DescribeTypeInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTypeInstancesOutcome(rsp);
        else
            return DescribeTypeInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeTypeInstancesOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeTypeInstancesAsync(const DescribeTypeInstancesRequest& request, const DescribeTypeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTypeInstances(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeTypeInstancesOutcomeCallable CkafkaClient::DescribeTypeInstancesCallable(const DescribeTypeInstancesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTypeInstancesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTypeInstances(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::DescribeUserOutcome CkafkaClient::DescribeUser(const DescribeUserRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserResponse rsp = DescribeUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserOutcome(rsp);
        else
            return DescribeUserOutcome(o.GetError());
    }
    else
    {
        return DescribeUserOutcome(outcome.GetError());
    }
}

void CkafkaClient::DescribeUserAsync(const DescribeUserRequest& request, const DescribeUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::DescribeUserOutcomeCallable CkafkaClient::DescribeUserCallable(const DescribeUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserOutcome()>>(
        [this, request]()
        {
            return this->DescribeUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::FetchDatahubMessageByOffsetOutcome CkafkaClient::FetchDatahubMessageByOffset(const FetchDatahubMessageByOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "FetchDatahubMessageByOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchDatahubMessageByOffsetResponse rsp = FetchDatahubMessageByOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchDatahubMessageByOffsetOutcome(rsp);
        else
            return FetchDatahubMessageByOffsetOutcome(o.GetError());
    }
    else
    {
        return FetchDatahubMessageByOffsetOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchDatahubMessageByOffsetAsync(const FetchDatahubMessageByOffsetRequest& request, const FetchDatahubMessageByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchDatahubMessageByOffset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::FetchDatahubMessageByOffsetOutcomeCallable CkafkaClient::FetchDatahubMessageByOffsetCallable(const FetchDatahubMessageByOffsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchDatahubMessageByOffsetOutcome()>>(
        [this, request]()
        {
            return this->FetchDatahubMessageByOffset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::FetchLatestDatahubMessageListOutcome CkafkaClient::FetchLatestDatahubMessageList(const FetchLatestDatahubMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "FetchLatestDatahubMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchLatestDatahubMessageListResponse rsp = FetchLatestDatahubMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchLatestDatahubMessageListOutcome(rsp);
        else
            return FetchLatestDatahubMessageListOutcome(o.GetError());
    }
    else
    {
        return FetchLatestDatahubMessageListOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchLatestDatahubMessageListAsync(const FetchLatestDatahubMessageListRequest& request, const FetchLatestDatahubMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchLatestDatahubMessageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::FetchLatestDatahubMessageListOutcomeCallable CkafkaClient::FetchLatestDatahubMessageListCallable(const FetchLatestDatahubMessageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchLatestDatahubMessageListOutcome()>>(
        [this, request]()
        {
            return this->FetchLatestDatahubMessageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::FetchMessageByOffsetOutcome CkafkaClient::FetchMessageByOffset(const FetchMessageByOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "FetchMessageByOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchMessageByOffsetResponse rsp = FetchMessageByOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchMessageByOffsetOutcome(rsp);
        else
            return FetchMessageByOffsetOutcome(o.GetError());
    }
    else
    {
        return FetchMessageByOffsetOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchMessageByOffsetAsync(const FetchMessageByOffsetRequest& request, const FetchMessageByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchMessageByOffset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::FetchMessageByOffsetOutcomeCallable CkafkaClient::FetchMessageByOffsetCallable(const FetchMessageByOffsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchMessageByOffsetOutcome()>>(
        [this, request]()
        {
            return this->FetchMessageByOffset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::FetchMessageListByOffsetOutcome CkafkaClient::FetchMessageListByOffset(const FetchMessageListByOffsetRequest &request)
{
    auto outcome = MakeRequest(request, "FetchMessageListByOffset");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchMessageListByOffsetResponse rsp = FetchMessageListByOffsetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchMessageListByOffsetOutcome(rsp);
        else
            return FetchMessageListByOffsetOutcome(o.GetError());
    }
    else
    {
        return FetchMessageListByOffsetOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchMessageListByOffsetAsync(const FetchMessageListByOffsetRequest& request, const FetchMessageListByOffsetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchMessageListByOffset(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::FetchMessageListByOffsetOutcomeCallable CkafkaClient::FetchMessageListByOffsetCallable(const FetchMessageListByOffsetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchMessageListByOffsetOutcome()>>(
        [this, request]()
        {
            return this->FetchMessageListByOffset(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::FetchMessageListByTimestampOutcome CkafkaClient::FetchMessageListByTimestamp(const FetchMessageListByTimestampRequest &request)
{
    auto outcome = MakeRequest(request, "FetchMessageListByTimestamp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FetchMessageListByTimestampResponse rsp = FetchMessageListByTimestampResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FetchMessageListByTimestampOutcome(rsp);
        else
            return FetchMessageListByTimestampOutcome(o.GetError());
    }
    else
    {
        return FetchMessageListByTimestampOutcome(outcome.GetError());
    }
}

void CkafkaClient::FetchMessageListByTimestampAsync(const FetchMessageListByTimestampRequest& request, const FetchMessageListByTimestampAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FetchMessageListByTimestamp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::FetchMessageListByTimestampOutcomeCallable CkafkaClient::FetchMessageListByTimestampCallable(const FetchMessageListByTimestampRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FetchMessageListByTimestampOutcome()>>(
        [this, request]()
        {
            return this->FetchMessageListByTimestamp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::InquireCkafkaPriceOutcome CkafkaClient::InquireCkafkaPrice(const InquireCkafkaPriceRequest &request)
{
    auto outcome = MakeRequest(request, "InquireCkafkaPrice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquireCkafkaPriceResponse rsp = InquireCkafkaPriceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquireCkafkaPriceOutcome(rsp);
        else
            return InquireCkafkaPriceOutcome(o.GetError());
    }
    else
    {
        return InquireCkafkaPriceOutcome(outcome.GetError());
    }
}

void CkafkaClient::InquireCkafkaPriceAsync(const InquireCkafkaPriceRequest& request, const InquireCkafkaPriceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquireCkafkaPrice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::InquireCkafkaPriceOutcomeCallable CkafkaClient::InquireCkafkaPriceCallable(const InquireCkafkaPriceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquireCkafkaPriceOutcome()>>(
        [this, request]()
        {
            return this->InquireCkafkaPrice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::InstanceScalingDownOutcome CkafkaClient::InstanceScalingDown(const InstanceScalingDownRequest &request)
{
    auto outcome = MakeRequest(request, "InstanceScalingDown");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InstanceScalingDownResponse rsp = InstanceScalingDownResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InstanceScalingDownOutcome(rsp);
        else
            return InstanceScalingDownOutcome(o.GetError());
    }
    else
    {
        return InstanceScalingDownOutcome(outcome.GetError());
    }
}

void CkafkaClient::InstanceScalingDownAsync(const InstanceScalingDownRequest& request, const InstanceScalingDownAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InstanceScalingDown(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::InstanceScalingDownOutcomeCallable CkafkaClient::InstanceScalingDownCallable(const InstanceScalingDownRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InstanceScalingDownOutcome()>>(
        [this, request]()
        {
            return this->InstanceScalingDown(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyAclRuleOutcome CkafkaClient::ModifyAclRule(const ModifyAclRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAclRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAclRuleResponse rsp = ModifyAclRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAclRuleOutcome(rsp);
        else
            return ModifyAclRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyAclRuleOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyAclRuleAsync(const ModifyAclRuleRequest& request, const ModifyAclRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAclRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyAclRuleOutcomeCallable CkafkaClient::ModifyAclRuleCallable(const ModifyAclRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAclRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyAclRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyConnectResourceOutcome CkafkaClient::ModifyConnectResource(const ModifyConnectResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConnectResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConnectResourceResponse rsp = ModifyConnectResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConnectResourceOutcome(rsp);
        else
            return ModifyConnectResourceOutcome(o.GetError());
    }
    else
    {
        return ModifyConnectResourceOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyConnectResourceAsync(const ModifyConnectResourceRequest& request, const ModifyConnectResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyConnectResource(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyConnectResourceOutcomeCallable CkafkaClient::ModifyConnectResourceCallable(const ModifyConnectResourceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyConnectResourceOutcome()>>(
        [this, request]()
        {
            return this->ModifyConnectResource(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyDatahubTaskOutcome CkafkaClient::ModifyDatahubTask(const ModifyDatahubTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatahubTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatahubTaskResponse rsp = ModifyDatahubTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatahubTaskOutcome(rsp);
        else
            return ModifyDatahubTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyDatahubTaskOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyDatahubTaskAsync(const ModifyDatahubTaskRequest& request, const ModifyDatahubTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatahubTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyDatahubTaskOutcomeCallable CkafkaClient::ModifyDatahubTaskCallable(const ModifyDatahubTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatahubTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatahubTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyDatahubTopicOutcome CkafkaClient::ModifyDatahubTopic(const ModifyDatahubTopicRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDatahubTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDatahubTopicResponse rsp = ModifyDatahubTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDatahubTopicOutcome(rsp);
        else
            return ModifyDatahubTopicOutcome(o.GetError());
    }
    else
    {
        return ModifyDatahubTopicOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyDatahubTopicAsync(const ModifyDatahubTopicRequest& request, const ModifyDatahubTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDatahubTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyDatahubTopicOutcomeCallable CkafkaClient::ModifyDatahubTopicCallable(const ModifyDatahubTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDatahubTopicOutcome()>>(
        [this, request]()
        {
            return this->ModifyDatahubTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyGroupOffsetsOutcome CkafkaClient::ModifyGroupOffsets(const ModifyGroupOffsetsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroupOffsets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupOffsetsResponse rsp = ModifyGroupOffsetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupOffsetsOutcome(rsp);
        else
            return ModifyGroupOffsetsOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupOffsetsOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyGroupOffsetsAsync(const ModifyGroupOffsetsRequest& request, const ModifyGroupOffsetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyGroupOffsets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyGroupOffsetsOutcomeCallable CkafkaClient::ModifyGroupOffsetsCallable(const ModifyGroupOffsetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyGroupOffsetsOutcome()>>(
        [this, request]()
        {
            return this->ModifyGroupOffsets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyInstanceAttributesOutcome CkafkaClient::ModifyInstanceAttributes(const ModifyInstanceAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceAttributesResponse rsp = ModifyInstanceAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceAttributesOutcome(rsp);
        else
            return ModifyInstanceAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyInstanceAttributesAsync(const ModifyInstanceAttributesRequest& request, const ModifyInstanceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyInstanceAttributesOutcomeCallable CkafkaClient::ModifyInstanceAttributesCallable(const ModifyInstanceAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyInstancePreOutcome CkafkaClient::ModifyInstancePre(const ModifyInstancePreRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstancePre");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstancePreResponse rsp = ModifyInstancePreResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstancePreOutcome(rsp);
        else
            return ModifyInstancePreOutcome(o.GetError());
    }
    else
    {
        return ModifyInstancePreOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyInstancePreAsync(const ModifyInstancePreRequest& request, const ModifyInstancePreAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstancePre(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyInstancePreOutcomeCallable CkafkaClient::ModifyInstancePreCallable(const ModifyInstancePreRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstancePreOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstancePre(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyPasswordOutcome CkafkaClient::ModifyPassword(const ModifyPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPasswordResponse rsp = ModifyPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPasswordOutcome(rsp);
        else
            return ModifyPasswordOutcome(o.GetError());
    }
    else
    {
        return ModifyPasswordOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyPasswordAsync(const ModifyPasswordRequest& request, const ModifyPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPassword(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyPasswordOutcomeCallable CkafkaClient::ModifyPasswordCallable(const ModifyPasswordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPasswordOutcome()>>(
        [this, request]()
        {
            return this->ModifyPassword(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyRoutineMaintenanceTaskOutcome CkafkaClient::ModifyRoutineMaintenanceTask(const ModifyRoutineMaintenanceTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRoutineMaintenanceTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRoutineMaintenanceTaskResponse rsp = ModifyRoutineMaintenanceTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRoutineMaintenanceTaskOutcome(rsp);
        else
            return ModifyRoutineMaintenanceTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyRoutineMaintenanceTaskOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyRoutineMaintenanceTaskAsync(const ModifyRoutineMaintenanceTaskRequest& request, const ModifyRoutineMaintenanceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRoutineMaintenanceTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyRoutineMaintenanceTaskOutcomeCallable CkafkaClient::ModifyRoutineMaintenanceTaskCallable(const ModifyRoutineMaintenanceTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRoutineMaintenanceTaskOutcome()>>(
        [this, request]()
        {
            return this->ModifyRoutineMaintenanceTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::ModifyTopicAttributesOutcome CkafkaClient::ModifyTopicAttributes(const ModifyTopicAttributesRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTopicAttributes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTopicAttributesResponse rsp = ModifyTopicAttributesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTopicAttributesOutcome(rsp);
        else
            return ModifyTopicAttributesOutcome(o.GetError());
    }
    else
    {
        return ModifyTopicAttributesOutcome(outcome.GetError());
    }
}

void CkafkaClient::ModifyTopicAttributesAsync(const ModifyTopicAttributesRequest& request, const ModifyTopicAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopicAttributes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::ModifyTopicAttributesOutcomeCallable CkafkaClient::ModifyTopicAttributesCallable(const ModifyTopicAttributesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTopicAttributesOutcome()>>(
        [this, request]()
        {
            return this->ModifyTopicAttributes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::RenewCkafkaInstanceOutcome CkafkaClient::RenewCkafkaInstance(const RenewCkafkaInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "RenewCkafkaInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewCkafkaInstanceResponse rsp = RenewCkafkaInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewCkafkaInstanceOutcome(rsp);
        else
            return RenewCkafkaInstanceOutcome(o.GetError());
    }
    else
    {
        return RenewCkafkaInstanceOutcome(outcome.GetError());
    }
}

void CkafkaClient::RenewCkafkaInstanceAsync(const RenewCkafkaInstanceRequest& request, const RenewCkafkaInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewCkafkaInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::RenewCkafkaInstanceOutcomeCallable CkafkaClient::RenewCkafkaInstanceCallable(const RenewCkafkaInstanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewCkafkaInstanceOutcome()>>(
        [this, request]()
        {
            return this->RenewCkafkaInstance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CkafkaClient::SendMessageOutcome CkafkaClient::SendMessage(const SendMessageRequest &request)
{
    auto outcome = MakeRequest(request, "SendMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendMessageResponse rsp = SendMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendMessageOutcome(rsp);
        else
            return SendMessageOutcome(o.GetError());
    }
    else
    {
        return SendMessageOutcome(outcome.GetError());
    }
}

void CkafkaClient::SendMessageAsync(const SendMessageRequest& request, const SendMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CkafkaClient::SendMessageOutcomeCallable CkafkaClient::SendMessageCallable(const SendMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendMessageOutcome()>>(
        [this, request]()
        {
            return this->SendMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

