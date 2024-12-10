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

#include <tencentcloud/mqtt/v20240516/MqttClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Mqtt::V20240516;
using namespace TencentCloud::Mqtt::V20240516::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-05-16";
    const string ENDPOINT = "mqtt.tencentcloudapi.com";
}

MqttClient::MqttClient(const Credential &credential, const string &region) :
    MqttClient(credential, region, ClientProfile())
{
}

MqttClient::MqttClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


MqttClient::ActivateDeviceCertificateOutcome MqttClient::ActivateDeviceCertificate(const ActivateDeviceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateDeviceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateDeviceCertificateResponse rsp = ActivateDeviceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateDeviceCertificateOutcome(rsp);
        else
            return ActivateDeviceCertificateOutcome(o.GetError());
    }
    else
    {
        return ActivateDeviceCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::ActivateDeviceCertificateAsync(const ActivateDeviceCertificateRequest& request, const ActivateDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateDeviceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ActivateDeviceCertificateOutcomeCallable MqttClient::ActivateDeviceCertificateCallable(const ActivateDeviceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateDeviceCertificateOutcome()>>(
        [this, request]()
        {
            return this->ActivateDeviceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::CreateAuthorizationPolicyOutcome MqttClient::CreateAuthorizationPolicy(const CreateAuthorizationPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuthorizationPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuthorizationPolicyResponse rsp = CreateAuthorizationPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuthorizationPolicyOutcome(rsp);
        else
            return CreateAuthorizationPolicyOutcome(o.GetError());
    }
    else
    {
        return CreateAuthorizationPolicyOutcome(outcome.GetError());
    }
}

void MqttClient::CreateAuthorizationPolicyAsync(const CreateAuthorizationPolicyRequest& request, const CreateAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuthorizationPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateAuthorizationPolicyOutcomeCallable MqttClient::CreateAuthorizationPolicyCallable(const CreateAuthorizationPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuthorizationPolicyOutcome()>>(
        [this, request]()
        {
            return this->CreateAuthorizationPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::CreateJWKSAuthenticatorOutcome MqttClient::CreateJWKSAuthenticator(const CreateJWKSAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJWKSAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJWKSAuthenticatorResponse rsp = CreateJWKSAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJWKSAuthenticatorOutcome(rsp);
        else
            return CreateJWKSAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return CreateJWKSAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::CreateJWKSAuthenticatorAsync(const CreateJWKSAuthenticatorRequest& request, const CreateJWKSAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJWKSAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateJWKSAuthenticatorOutcomeCallable MqttClient::CreateJWKSAuthenticatorCallable(const CreateJWKSAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateJWKSAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->CreateJWKSAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::CreateJWTAuthenticatorOutcome MqttClient::CreateJWTAuthenticator(const CreateJWTAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJWTAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJWTAuthenticatorResponse rsp = CreateJWTAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJWTAuthenticatorOutcome(rsp);
        else
            return CreateJWTAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return CreateJWTAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::CreateJWTAuthenticatorAsync(const CreateJWTAuthenticatorRequest& request, const CreateJWTAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJWTAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateJWTAuthenticatorOutcomeCallable MqttClient::CreateJWTAuthenticatorCallable(const CreateJWTAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateJWTAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->CreateJWTAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::CreateTopicOutcome MqttClient::CreateTopic(const CreateTopicRequest &request)
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

void MqttClient::CreateTopicAsync(const CreateTopicRequest& request, const CreateTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateTopicOutcomeCallable MqttClient::CreateTopicCallable(const CreateTopicRequest &request)
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

MqttClient::DeactivateDeviceCertificateOutcome MqttClient::DeactivateDeviceCertificate(const DeactivateDeviceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeactivateDeviceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeactivateDeviceCertificateResponse rsp = DeactivateDeviceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeactivateDeviceCertificateOutcome(rsp);
        else
            return DeactivateDeviceCertificateOutcome(o.GetError());
    }
    else
    {
        return DeactivateDeviceCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::DeactivateDeviceCertificateAsync(const DeactivateDeviceCertificateRequest& request, const DeactivateDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeactivateDeviceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeactivateDeviceCertificateOutcomeCallable MqttClient::DeactivateDeviceCertificateCallable(const DeactivateDeviceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeactivateDeviceCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeactivateDeviceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DeleteAuthenticatorOutcome MqttClient::DeleteAuthenticator(const DeleteAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuthenticatorResponse rsp = DeleteAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuthenticatorOutcome(rsp);
        else
            return DeleteAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return DeleteAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteAuthenticatorAsync(const DeleteAuthenticatorRequest& request, const DeleteAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteAuthenticatorOutcomeCallable MqttClient::DeleteAuthenticatorCallable(const DeleteAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DeleteAuthorizationPolicyOutcome MqttClient::DeleteAuthorizationPolicy(const DeleteAuthorizationPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuthorizationPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuthorizationPolicyResponse rsp = DeleteAuthorizationPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuthorizationPolicyOutcome(rsp);
        else
            return DeleteAuthorizationPolicyOutcome(o.GetError());
    }
    else
    {
        return DeleteAuthorizationPolicyOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteAuthorizationPolicyAsync(const DeleteAuthorizationPolicyRequest& request, const DeleteAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuthorizationPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteAuthorizationPolicyOutcomeCallable MqttClient::DeleteAuthorizationPolicyCallable(const DeleteAuthorizationPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuthorizationPolicyOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuthorizationPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DeleteDeviceCertificateOutcome MqttClient::DeleteDeviceCertificate(const DeleteDeviceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceCertificateResponse rsp = DeleteDeviceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceCertificateOutcome(rsp);
        else
            return DeleteDeviceCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteDeviceCertificateAsync(const DeleteDeviceCertificateRequest& request, const DeleteDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDeviceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteDeviceCertificateOutcomeCallable MqttClient::DeleteDeviceCertificateCallable(const DeleteDeviceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDeviceCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeleteDeviceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DeleteTopicOutcome MqttClient::DeleteTopic(const DeleteTopicRequest &request)
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

void MqttClient::DeleteTopicAsync(const DeleteTopicRequest& request, const DeleteTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteTopicOutcomeCallable MqttClient::DeleteTopicCallable(const DeleteTopicRequest &request)
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

MqttClient::DescribeAuthenticatorOutcome MqttClient::DescribeAuthenticator(const DescribeAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthenticatorResponse rsp = DescribeAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthenticatorOutcome(rsp);
        else
            return DescribeAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeAuthenticatorAsync(const DescribeAuthenticatorRequest& request, const DescribeAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeAuthenticatorOutcomeCallable MqttClient::DescribeAuthenticatorCallable(const DescribeAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeAuthorizationPoliciesOutcome MqttClient::DescribeAuthorizationPolicies(const DescribeAuthorizationPoliciesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuthorizationPolicies");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuthorizationPoliciesResponse rsp = DescribeAuthorizationPoliciesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuthorizationPoliciesOutcome(rsp);
        else
            return DescribeAuthorizationPoliciesOutcome(o.GetError());
    }
    else
    {
        return DescribeAuthorizationPoliciesOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeAuthorizationPoliciesAsync(const DescribeAuthorizationPoliciesRequest& request, const DescribeAuthorizationPoliciesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuthorizationPolicies(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeAuthorizationPoliciesOutcomeCallable MqttClient::DescribeAuthorizationPoliciesCallable(const DescribeAuthorizationPoliciesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuthorizationPoliciesOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuthorizationPolicies(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeDeviceCertificateOutcome MqttClient::DescribeDeviceCertificate(const DescribeDeviceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceCertificateResponse rsp = DescribeDeviceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceCertificateOutcome(rsp);
        else
            return DescribeDeviceCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeDeviceCertificateAsync(const DescribeDeviceCertificateRequest& request, const DescribeDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeDeviceCertificateOutcomeCallable MqttClient::DescribeDeviceCertificateCallable(const DescribeDeviceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceCertificateOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeDeviceCertificatesOutcome MqttClient::DescribeDeviceCertificates(const DescribeDeviceCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceCertificatesResponse rsp = DescribeDeviceCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceCertificatesOutcome(rsp);
        else
            return DescribeDeviceCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceCertificatesOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeDeviceCertificatesAsync(const DescribeDeviceCertificatesRequest& request, const DescribeDeviceCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDeviceCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeDeviceCertificatesOutcomeCallable MqttClient::DescribeDeviceCertificatesCallable(const DescribeDeviceCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDeviceCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDeviceCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeInstanceOutcome MqttClient::DescribeInstance(const DescribeInstanceRequest &request)
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

void MqttClient::DescribeInstanceAsync(const DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeInstanceOutcomeCallable MqttClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
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

MqttClient::DescribeInstanceListOutcome MqttClient::DescribeInstanceList(const DescribeInstanceListRequest &request)
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

void MqttClient::DescribeInstanceListAsync(const DescribeInstanceListRequest& request, const DescribeInstanceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInstanceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeInstanceListOutcomeCallable MqttClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
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

MqttClient::DescribeTopicOutcome MqttClient::DescribeTopic(const DescribeTopicRequest &request)
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

void MqttClient::DescribeTopicAsync(const DescribeTopicRequest& request, const DescribeTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeTopicOutcomeCallable MqttClient::DescribeTopicCallable(const DescribeTopicRequest &request)
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

MqttClient::DescribeTopicListOutcome MqttClient::DescribeTopicList(const DescribeTopicListRequest &request)
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

void MqttClient::DescribeTopicListAsync(const DescribeTopicListRequest& request, const DescribeTopicListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopicList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeTopicListOutcomeCallable MqttClient::DescribeTopicListCallable(const DescribeTopicListRequest &request)
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

MqttClient::ModifyAuthorizationPolicyOutcome MqttClient::ModifyAuthorizationPolicy(const ModifyAuthorizationPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuthorizationPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuthorizationPolicyResponse rsp = ModifyAuthorizationPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuthorizationPolicyOutcome(rsp);
        else
            return ModifyAuthorizationPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyAuthorizationPolicyOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyAuthorizationPolicyAsync(const ModifyAuthorizationPolicyRequest& request, const ModifyAuthorizationPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuthorizationPolicy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyAuthorizationPolicyOutcomeCallable MqttClient::ModifyAuthorizationPolicyCallable(const ModifyAuthorizationPolicyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuthorizationPolicyOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuthorizationPolicy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::ModifyJWKSAuthenticatorOutcome MqttClient::ModifyJWKSAuthenticator(const ModifyJWKSAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJWKSAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJWKSAuthenticatorResponse rsp = ModifyJWKSAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJWKSAuthenticatorOutcome(rsp);
        else
            return ModifyJWKSAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return ModifyJWKSAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyJWKSAuthenticatorAsync(const ModifyJWKSAuthenticatorRequest& request, const ModifyJWKSAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyJWKSAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyJWKSAuthenticatorOutcomeCallable MqttClient::ModifyJWKSAuthenticatorCallable(const ModifyJWKSAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyJWKSAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->ModifyJWKSAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::ModifyJWTAuthenticatorOutcome MqttClient::ModifyJWTAuthenticator(const ModifyJWTAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyJWTAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyJWTAuthenticatorResponse rsp = ModifyJWTAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyJWTAuthenticatorOutcome(rsp);
        else
            return ModifyJWTAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return ModifyJWTAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyJWTAuthenticatorAsync(const ModifyJWTAuthenticatorRequest& request, const ModifyJWTAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyJWTAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyJWTAuthenticatorOutcomeCallable MqttClient::ModifyJWTAuthenticatorCallable(const ModifyJWTAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyJWTAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->ModifyJWTAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::ModifyTopicOutcome MqttClient::ModifyTopic(const ModifyTopicRequest &request)
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

void MqttClient::ModifyTopicAsync(const ModifyTopicRequest& request, const ModifyTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyTopicOutcomeCallable MqttClient::ModifyTopicCallable(const ModifyTopicRequest &request)
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

MqttClient::RegisterDeviceCertificateOutcome MqttClient::RegisterDeviceCertificate(const RegisterDeviceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterDeviceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterDeviceCertificateResponse rsp = RegisterDeviceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterDeviceCertificateOutcome(rsp);
        else
            return RegisterDeviceCertificateOutcome(o.GetError());
    }
    else
    {
        return RegisterDeviceCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::RegisterDeviceCertificateAsync(const RegisterDeviceCertificateRequest& request, const RegisterDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterDeviceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::RegisterDeviceCertificateOutcomeCallable MqttClient::RegisterDeviceCertificateCallable(const RegisterDeviceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterDeviceCertificateOutcome()>>(
        [this, request]()
        {
            return this->RegisterDeviceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::RevokedDeviceCertificateOutcome MqttClient::RevokedDeviceCertificate(const RevokedDeviceCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RevokedDeviceCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokedDeviceCertificateResponse rsp = RevokedDeviceCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokedDeviceCertificateOutcome(rsp);
        else
            return RevokedDeviceCertificateOutcome(o.GetError());
    }
    else
    {
        return RevokedDeviceCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::RevokedDeviceCertificateAsync(const RevokedDeviceCertificateRequest& request, const RevokedDeviceCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokedDeviceCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::RevokedDeviceCertificateOutcomeCallable MqttClient::RevokedDeviceCertificateCallable(const RevokedDeviceCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokedDeviceCertificateOutcome()>>(
        [this, request]()
        {
            return this->RevokedDeviceCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::UpdateAuthorizationPolicyPriorityOutcome MqttClient::UpdateAuthorizationPolicyPriority(const UpdateAuthorizationPolicyPriorityRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAuthorizationPolicyPriority");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAuthorizationPolicyPriorityResponse rsp = UpdateAuthorizationPolicyPriorityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAuthorizationPolicyPriorityOutcome(rsp);
        else
            return UpdateAuthorizationPolicyPriorityOutcome(o.GetError());
    }
    else
    {
        return UpdateAuthorizationPolicyPriorityOutcome(outcome.GetError());
    }
}

void MqttClient::UpdateAuthorizationPolicyPriorityAsync(const UpdateAuthorizationPolicyPriorityRequest& request, const UpdateAuthorizationPolicyPriorityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAuthorizationPolicyPriority(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::UpdateAuthorizationPolicyPriorityOutcomeCallable MqttClient::UpdateAuthorizationPolicyPriorityCallable(const UpdateAuthorizationPolicyPriorityRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAuthorizationPolicyPriorityOutcome()>>(
        [this, request]()
        {
            return this->UpdateAuthorizationPolicyPriority(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

