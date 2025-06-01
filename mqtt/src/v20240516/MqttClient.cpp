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


MqttClient::ActivateCaCertificateOutcome MqttClient::ActivateCaCertificate(const ActivateCaCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ActivateCaCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ActivateCaCertificateResponse rsp = ActivateCaCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ActivateCaCertificateOutcome(rsp);
        else
            return ActivateCaCertificateOutcome(o.GetError());
    }
    else
    {
        return ActivateCaCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::ActivateCaCertificateAsync(const ActivateCaCertificateRequest& request, const ActivateCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ActivateCaCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ActivateCaCertificateOutcomeCallable MqttClient::ActivateCaCertificateCallable(const ActivateCaCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ActivateCaCertificateOutcome()>>(
        [this, request]()
        {
            return this->ActivateCaCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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

MqttClient::ApplyRegistrationCodeOutcome MqttClient::ApplyRegistrationCode(const ApplyRegistrationCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyRegistrationCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyRegistrationCodeResponse rsp = ApplyRegistrationCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyRegistrationCodeOutcome(rsp);
        else
            return ApplyRegistrationCodeOutcome(o.GetError());
    }
    else
    {
        return ApplyRegistrationCodeOutcome(outcome.GetError());
    }
}

void MqttClient::ApplyRegistrationCodeAsync(const ApplyRegistrationCodeRequest& request, const ApplyRegistrationCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyRegistrationCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ApplyRegistrationCodeOutcomeCallable MqttClient::ApplyRegistrationCodeCallable(const ApplyRegistrationCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyRegistrationCodeOutcome()>>(
        [this, request]()
        {
            return this->ApplyRegistrationCode(request);
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

MqttClient::CreateHttpAuthenticatorOutcome MqttClient::CreateHttpAuthenticator(const CreateHttpAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateHttpAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateHttpAuthenticatorResponse rsp = CreateHttpAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateHttpAuthenticatorOutcome(rsp);
        else
            return CreateHttpAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return CreateHttpAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::CreateHttpAuthenticatorAsync(const CreateHttpAuthenticatorRequest& request, const CreateHttpAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateHttpAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateHttpAuthenticatorOutcomeCallable MqttClient::CreateHttpAuthenticatorCallable(const CreateHttpAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateHttpAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->CreateHttpAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::CreateInsPublicEndpointOutcome MqttClient::CreateInsPublicEndpoint(const CreateInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInsPublicEndpointResponse rsp = CreateInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInsPublicEndpointOutcome(rsp);
        else
            return CreateInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return CreateInsPublicEndpointOutcome(outcome.GetError());
    }
}

void MqttClient::CreateInsPublicEndpointAsync(const CreateInsPublicEndpointRequest& request, const CreateInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInsPublicEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateInsPublicEndpointOutcomeCallable MqttClient::CreateInsPublicEndpointCallable(const CreateInsPublicEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInsPublicEndpointOutcome()>>(
        [this, request]()
        {
            return this->CreateInsPublicEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::CreateInstanceOutcome MqttClient::CreateInstance(const CreateInstanceRequest &request)
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

void MqttClient::CreateInstanceAsync(const CreateInstanceRequest& request, const CreateInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateInstanceOutcomeCallable MqttClient::CreateInstanceCallable(const CreateInstanceRequest &request)
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

MqttClient::CreateUserOutcome MqttClient::CreateUser(const CreateUserRequest &request)
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

void MqttClient::CreateUserAsync(const CreateUserRequest& request, const CreateUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::CreateUserOutcomeCallable MqttClient::CreateUserCallable(const CreateUserRequest &request)
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

MqttClient::DeactivateCaCertificateOutcome MqttClient::DeactivateCaCertificate(const DeactivateCaCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeactivateCaCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeactivateCaCertificateResponse rsp = DeactivateCaCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeactivateCaCertificateOutcome(rsp);
        else
            return DeactivateCaCertificateOutcome(o.GetError());
    }
    else
    {
        return DeactivateCaCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::DeactivateCaCertificateAsync(const DeactivateCaCertificateRequest& request, const DeactivateCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeactivateCaCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeactivateCaCertificateOutcomeCallable MqttClient::DeactivateCaCertificateCallable(const DeactivateCaCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeactivateCaCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeactivateCaCertificate(request);
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

MqttClient::DeleteCaCertificateOutcome MqttClient::DeleteCaCertificate(const DeleteCaCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCaCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCaCertificateResponse rsp = DeleteCaCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCaCertificateOutcome(rsp);
        else
            return DeleteCaCertificateOutcome(o.GetError());
    }
    else
    {
        return DeleteCaCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteCaCertificateAsync(const DeleteCaCertificateRequest& request, const DeleteCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCaCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteCaCertificateOutcomeCallable MqttClient::DeleteCaCertificateCallable(const DeleteCaCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCaCertificateOutcome()>>(
        [this, request]()
        {
            return this->DeleteCaCertificate(request);
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

MqttClient::DeleteInsPublicEndpointOutcome MqttClient::DeleteInsPublicEndpoint(const DeleteInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteInsPublicEndpointResponse rsp = DeleteInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteInsPublicEndpointOutcome(rsp);
        else
            return DeleteInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return DeleteInsPublicEndpointOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteInsPublicEndpointAsync(const DeleteInsPublicEndpointRequest& request, const DeleteInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInsPublicEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteInsPublicEndpointOutcomeCallable MqttClient::DeleteInsPublicEndpointCallable(const DeleteInsPublicEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteInsPublicEndpointOutcome()>>(
        [this, request]()
        {
            return this->DeleteInsPublicEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DeleteInstanceOutcome MqttClient::DeleteInstance(const DeleteInstanceRequest &request)
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

void MqttClient::DeleteInstanceAsync(const DeleteInstanceRequest& request, const DeleteInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteInstanceOutcomeCallable MqttClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
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

MqttClient::DeleteUserOutcome MqttClient::DeleteUser(const DeleteUserRequest &request)
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

void MqttClient::DeleteUserAsync(const DeleteUserRequest& request, const DeleteUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DeleteUserOutcomeCallable MqttClient::DeleteUserCallable(const DeleteUserRequest &request)
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

MqttClient::DescribeCaCertificateOutcome MqttClient::DescribeCaCertificate(const DescribeCaCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaCertificateResponse rsp = DescribeCaCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaCertificateOutcome(rsp);
        else
            return DescribeCaCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeCaCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeCaCertificateAsync(const DescribeCaCertificateRequest& request, const DescribeCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeCaCertificateOutcomeCallable MqttClient::DescribeCaCertificateCallable(const DescribeCaCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaCertificateOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeCaCertificatesOutcome MqttClient::DescribeCaCertificates(const DescribeCaCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCaCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCaCertificatesResponse rsp = DescribeCaCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCaCertificatesOutcome(rsp);
        else
            return DescribeCaCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeCaCertificatesOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeCaCertificatesAsync(const DescribeCaCertificatesRequest& request, const DescribeCaCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCaCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeCaCertificatesOutcomeCallable MqttClient::DescribeCaCertificatesCallable(const DescribeCaCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCaCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeCaCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeClientListOutcome MqttClient::DescribeClientList(const DescribeClientListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClientList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClientListResponse rsp = DescribeClientListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClientListOutcome(rsp);
        else
            return DescribeClientListOutcome(o.GetError());
    }
    else
    {
        return DescribeClientListOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeClientListAsync(const DescribeClientListRequest& request, const DescribeClientListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeClientList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeClientListOutcomeCallable MqttClient::DescribeClientListCallable(const DescribeClientListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeClientListOutcome()>>(
        [this, request]()
        {
            return this->DescribeClientList(request);
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

MqttClient::DescribeInsPublicEndpointsOutcome MqttClient::DescribeInsPublicEndpoints(const DescribeInsPublicEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInsPublicEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInsPublicEndpointsResponse rsp = DescribeInsPublicEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInsPublicEndpointsOutcome(rsp);
        else
            return DescribeInsPublicEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeInsPublicEndpointsOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeInsPublicEndpointsAsync(const DescribeInsPublicEndpointsRequest& request, const DescribeInsPublicEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInsPublicEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeInsPublicEndpointsOutcomeCallable MqttClient::DescribeInsPublicEndpointsCallable(const DescribeInsPublicEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInsPublicEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInsPublicEndpoints(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeInsVPCEndpointsOutcome MqttClient::DescribeInsVPCEndpoints(const DescribeInsVPCEndpointsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInsVPCEndpoints");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInsVPCEndpointsResponse rsp = DescribeInsVPCEndpointsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInsVPCEndpointsOutcome(rsp);
        else
            return DescribeInsVPCEndpointsOutcome(o.GetError());
    }
    else
    {
        return DescribeInsVPCEndpointsOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeInsVPCEndpointsAsync(const DescribeInsVPCEndpointsRequest& request, const DescribeInsVPCEndpointsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeInsVPCEndpoints(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeInsVPCEndpointsOutcomeCallable MqttClient::DescribeInsVPCEndpointsCallable(const DescribeInsVPCEndpointsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeInsVPCEndpointsOutcome()>>(
        [this, request]()
        {
            return this->DescribeInsVPCEndpoints(request);
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

MqttClient::DescribeMessageByTopicOutcome MqttClient::DescribeMessageByTopic(const DescribeMessageByTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageByTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageByTopicResponse rsp = DescribeMessageByTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageByTopicOutcome(rsp);
        else
            return DescribeMessageByTopicOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageByTopicOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeMessageByTopicAsync(const DescribeMessageByTopicRequest& request, const DescribeMessageByTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageByTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeMessageByTopicOutcomeCallable MqttClient::DescribeMessageByTopicCallable(const DescribeMessageByTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageByTopicOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageByTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeMessageListOutcome MqttClient::DescribeMessageList(const DescribeMessageListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageListResponse rsp = DescribeMessageListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageListOutcome(rsp);
        else
            return DescribeMessageListOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageListOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeMessageListAsync(const DescribeMessageListRequest& request, const DescribeMessageListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMessageList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeMessageListOutcomeCallable MqttClient::DescribeMessageListCallable(const DescribeMessageListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMessageListOutcome()>>(
        [this, request]()
        {
            return this->DescribeMessageList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeProductSKUListOutcome MqttClient::DescribeProductSKUList(const DescribeProductSKUListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductSKUList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductSKUListResponse rsp = DescribeProductSKUListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductSKUListOutcome(rsp);
        else
            return DescribeProductSKUListOutcome(o.GetError());
    }
    else
    {
        return DescribeProductSKUListOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeProductSKUListAsync(const DescribeProductSKUListRequest& request, const DescribeProductSKUListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductSKUList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeProductSKUListOutcomeCallable MqttClient::DescribeProductSKUListCallable(const DescribeProductSKUListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductSKUListOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductSKUList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::DescribeSharedSubscriptionLagOutcome MqttClient::DescribeSharedSubscriptionLag(const DescribeSharedSubscriptionLagRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSharedSubscriptionLag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSharedSubscriptionLagResponse rsp = DescribeSharedSubscriptionLagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSharedSubscriptionLagOutcome(rsp);
        else
            return DescribeSharedSubscriptionLagOutcome(o.GetError());
    }
    else
    {
        return DescribeSharedSubscriptionLagOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeSharedSubscriptionLagAsync(const DescribeSharedSubscriptionLagRequest& request, const DescribeSharedSubscriptionLagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSharedSubscriptionLag(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeSharedSubscriptionLagOutcomeCallable MqttClient::DescribeSharedSubscriptionLagCallable(const DescribeSharedSubscriptionLagRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSharedSubscriptionLagOutcome()>>(
        [this, request]()
        {
            return this->DescribeSharedSubscriptionLag(request);
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

MqttClient::DescribeUserListOutcome MqttClient::DescribeUserList(const DescribeUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserListResponse rsp = DescribeUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserListOutcome(rsp);
        else
            return DescribeUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeUserListOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeUserListAsync(const DescribeUserListRequest& request, const DescribeUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::DescribeUserListOutcomeCallable MqttClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserList(request);
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

MqttClient::ModifyHttpAuthenticatorOutcome MqttClient::ModifyHttpAuthenticator(const ModifyHttpAuthenticatorRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHttpAuthenticator");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHttpAuthenticatorResponse rsp = ModifyHttpAuthenticatorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHttpAuthenticatorOutcome(rsp);
        else
            return ModifyHttpAuthenticatorOutcome(o.GetError());
    }
    else
    {
        return ModifyHttpAuthenticatorOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyHttpAuthenticatorAsync(const ModifyHttpAuthenticatorRequest& request, const ModifyHttpAuthenticatorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHttpAuthenticator(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyHttpAuthenticatorOutcomeCallable MqttClient::ModifyHttpAuthenticatorCallable(const ModifyHttpAuthenticatorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHttpAuthenticatorOutcome()>>(
        [this, request]()
        {
            return this->ModifyHttpAuthenticator(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::ModifyInsPublicEndpointOutcome MqttClient::ModifyInsPublicEndpoint(const ModifyInsPublicEndpointRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInsPublicEndpoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInsPublicEndpointResponse rsp = ModifyInsPublicEndpointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInsPublicEndpointOutcome(rsp);
        else
            return ModifyInsPublicEndpointOutcome(o.GetError());
    }
    else
    {
        return ModifyInsPublicEndpointOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyInsPublicEndpointAsync(const ModifyInsPublicEndpointRequest& request, const ModifyInsPublicEndpointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInsPublicEndpoint(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyInsPublicEndpointOutcomeCallable MqttClient::ModifyInsPublicEndpointCallable(const ModifyInsPublicEndpointRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInsPublicEndpointOutcome()>>(
        [this, request]()
        {
            return this->ModifyInsPublicEndpoint(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::ModifyInstanceOutcome MqttClient::ModifyInstance(const ModifyInstanceRequest &request)
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

void MqttClient::ModifyInstanceAsync(const ModifyInstanceRequest& request, const ModifyInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyInstanceOutcomeCallable MqttClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
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

MqttClient::ModifyInstanceCertBindingOutcome MqttClient::ModifyInstanceCertBinding(const ModifyInstanceCertBindingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyInstanceCertBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyInstanceCertBindingResponse rsp = ModifyInstanceCertBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyInstanceCertBindingOutcome(rsp);
        else
            return ModifyInstanceCertBindingOutcome(o.GetError());
    }
    else
    {
        return ModifyInstanceCertBindingOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyInstanceCertBindingAsync(const ModifyInstanceCertBindingRequest& request, const ModifyInstanceCertBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyInstanceCertBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyInstanceCertBindingOutcomeCallable MqttClient::ModifyInstanceCertBindingCallable(const ModifyInstanceCertBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyInstanceCertBindingOutcome()>>(
        [this, request]()
        {
            return this->ModifyInstanceCertBinding(request);
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

MqttClient::ModifyUserOutcome MqttClient::ModifyUser(const ModifyUserRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUserResponse rsp = ModifyUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUserOutcome(rsp);
        else
            return ModifyUserOutcome(o.GetError());
    }
    else
    {
        return ModifyUserOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyUserAsync(const ModifyUserRequest& request, const ModifyUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyUser(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::ModifyUserOutcomeCallable MqttClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyUserOutcome()>>(
        [this, request]()
        {
            return this->ModifyUser(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::PublishMessageOutcome MqttClient::PublishMessage(const PublishMessageRequest &request)
{
    auto outcome = MakeRequest(request, "PublishMessage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PublishMessageResponse rsp = PublishMessageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PublishMessageOutcome(rsp);
        else
            return PublishMessageOutcome(o.GetError());
    }
    else
    {
        return PublishMessageOutcome(outcome.GetError());
    }
}

void MqttClient::PublishMessageAsync(const PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PublishMessage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::PublishMessageOutcomeCallable MqttClient::PublishMessageCallable(const PublishMessageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PublishMessageOutcome()>>(
        [this, request]()
        {
            return this->PublishMessage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

MqttClient::RegisterCaCertificateOutcome MqttClient::RegisterCaCertificate(const RegisterCaCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterCaCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterCaCertificateResponse rsp = RegisterCaCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterCaCertificateOutcome(rsp);
        else
            return RegisterCaCertificateOutcome(o.GetError());
    }
    else
    {
        return RegisterCaCertificateOutcome(outcome.GetError());
    }
}

void MqttClient::RegisterCaCertificateAsync(const RegisterCaCertificateRequest& request, const RegisterCaCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterCaCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

MqttClient::RegisterCaCertificateOutcomeCallable MqttClient::RegisterCaCertificateCallable(const RegisterCaCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterCaCertificateOutcome()>>(
        [this, request]()
        {
            return this->RegisterCaCertificate(request);
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

