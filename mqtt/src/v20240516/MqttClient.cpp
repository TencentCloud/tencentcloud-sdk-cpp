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
    using Req = const ActivateCaCertificateRequest&;
    using Resp = ActivateCaCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateCaCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ActivateCaCertificateOutcomeCallable MqttClient::ActivateCaCertificateCallable(const ActivateCaCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateCaCertificateOutcome>>();
    ActivateCaCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const ActivateCaCertificateRequest&,
        ActivateCaCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ActivateDeviceCertificateRequest&;
    using Resp = ActivateDeviceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "ActivateDeviceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ActivateDeviceCertificateOutcomeCallable MqttClient::ActivateDeviceCertificateCallable(const ActivateDeviceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ActivateDeviceCertificateOutcome>>();
    ActivateDeviceCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const ActivateDeviceCertificateRequest&,
        ActivateDeviceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::AddClientSubscriptionOutcome MqttClient::AddClientSubscription(const AddClientSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "AddClientSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClientSubscriptionResponse rsp = AddClientSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClientSubscriptionOutcome(rsp);
        else
            return AddClientSubscriptionOutcome(o.GetError());
    }
    else
    {
        return AddClientSubscriptionOutcome(outcome.GetError());
    }
}

void MqttClient::AddClientSubscriptionAsync(const AddClientSubscriptionRequest& request, const AddClientSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddClientSubscriptionRequest&;
    using Resp = AddClientSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "AddClientSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::AddClientSubscriptionOutcomeCallable MqttClient::AddClientSubscriptionCallable(const AddClientSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddClientSubscriptionOutcome>>();
    AddClientSubscriptionAsync(
    request,
    [prom](
        const MqttClient*,
        const AddClientSubscriptionRequest&,
        AddClientSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ApplyRegistrationCodeRequest&;
    using Resp = ApplyRegistrationCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyRegistrationCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ApplyRegistrationCodeOutcomeCallable MqttClient::ApplyRegistrationCodeCallable(const ApplyRegistrationCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyRegistrationCodeOutcome>>();
    ApplyRegistrationCodeAsync(
    request,
    [prom](
        const MqttClient*,
        const ApplyRegistrationCodeRequest&,
        ApplyRegistrationCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateAuthorizationPolicyRequest&;
    using Resp = CreateAuthorizationPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuthorizationPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateAuthorizationPolicyOutcomeCallable MqttClient::CreateAuthorizationPolicyCallable(const CreateAuthorizationPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuthorizationPolicyOutcome>>();
    CreateAuthorizationPolicyAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateAuthorizationPolicyRequest&,
        CreateAuthorizationPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::CreateDeviceIdentityOutcome MqttClient::CreateDeviceIdentity(const CreateDeviceIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeviceIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDeviceIdentityResponse rsp = CreateDeviceIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDeviceIdentityOutcome(rsp);
        else
            return CreateDeviceIdentityOutcome(o.GetError());
    }
    else
    {
        return CreateDeviceIdentityOutcome(outcome.GetError());
    }
}

void MqttClient::CreateDeviceIdentityAsync(const CreateDeviceIdentityRequest& request, const CreateDeviceIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDeviceIdentityRequest&;
    using Resp = CreateDeviceIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDeviceIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateDeviceIdentityOutcomeCallable MqttClient::CreateDeviceIdentityCallable(const CreateDeviceIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDeviceIdentityOutcome>>();
    CreateDeviceIdentityAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateDeviceIdentityRequest&,
        CreateDeviceIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateHttpAuthenticatorRequest&;
    using Resp = CreateHttpAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateHttpAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateHttpAuthenticatorOutcomeCallable MqttClient::CreateHttpAuthenticatorCallable(const CreateHttpAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateHttpAuthenticatorOutcome>>();
    CreateHttpAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateHttpAuthenticatorRequest&,
        CreateHttpAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateInsPublicEndpointRequest&;
    using Resp = CreateInsPublicEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInsPublicEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateInsPublicEndpointOutcomeCallable MqttClient::CreateInsPublicEndpointCallable(const CreateInsPublicEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInsPublicEndpointOutcome>>();
    CreateInsPublicEndpointAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateInsPublicEndpointRequest&,
        CreateInsPublicEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateInstanceRequest&;
    using Resp = CreateInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateInstanceOutcomeCallable MqttClient::CreateInstanceCallable(const CreateInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInstanceOutcome>>();
    CreateInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateInstanceRequest&,
        CreateInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateJWKSAuthenticatorRequest&;
    using Resp = CreateJWKSAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJWKSAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateJWKSAuthenticatorOutcomeCallable MqttClient::CreateJWKSAuthenticatorCallable(const CreateJWKSAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJWKSAuthenticatorOutcome>>();
    CreateJWKSAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateJWKSAuthenticatorRequest&,
        CreateJWKSAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateJWTAuthenticatorRequest&;
    using Resp = CreateJWTAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateJWTAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateJWTAuthenticatorOutcomeCallable MqttClient::CreateJWTAuthenticatorCallable(const CreateJWTAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateJWTAuthenticatorOutcome>>();
    CreateJWTAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateJWTAuthenticatorRequest&,
        CreateJWTAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateTopicRequest&;
    using Resp = CreateTopicResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateTopicOutcomeCallable MqttClient::CreateTopicCallable(const CreateTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTopicOutcome>>();
    CreateTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateTopicRequest&,
        CreateTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const CreateUserRequest&;
    using Resp = CreateUserResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::CreateUserOutcomeCallable MqttClient::CreateUserCallable(const CreateUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUserOutcome>>();
    CreateUserAsync(
    request,
    [prom](
        const MqttClient*,
        const CreateUserRequest&,
        CreateUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeactivateCaCertificateRequest&;
    using Resp = DeactivateCaCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeactivateCaCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeactivateCaCertificateOutcomeCallable MqttClient::DeactivateCaCertificateCallable(const DeactivateCaCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeactivateCaCertificateOutcome>>();
    DeactivateCaCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const DeactivateCaCertificateRequest&,
        DeactivateCaCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeactivateDeviceCertificateRequest&;
    using Resp = DeactivateDeviceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeactivateDeviceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeactivateDeviceCertificateOutcomeCallable MqttClient::DeactivateDeviceCertificateCallable(const DeactivateDeviceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeactivateDeviceCertificateOutcome>>();
    DeactivateDeviceCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const DeactivateDeviceCertificateRequest&,
        DeactivateDeviceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAuthenticatorRequest&;
    using Resp = DeleteAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteAuthenticatorOutcomeCallable MqttClient::DeleteAuthenticatorCallable(const DeleteAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuthenticatorOutcome>>();
    DeleteAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteAuthenticatorRequest&,
        DeleteAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteAuthorizationPolicyRequest&;
    using Resp = DeleteAuthorizationPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuthorizationPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteAuthorizationPolicyOutcomeCallable MqttClient::DeleteAuthorizationPolicyCallable(const DeleteAuthorizationPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuthorizationPolicyOutcome>>();
    DeleteAuthorizationPolicyAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteAuthorizationPolicyRequest&,
        DeleteAuthorizationPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteCaCertificateRequest&;
    using Resp = DeleteCaCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCaCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteCaCertificateOutcomeCallable MqttClient::DeleteCaCertificateCallable(const DeleteCaCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCaCertificateOutcome>>();
    DeleteCaCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteCaCertificateRequest&,
        DeleteCaCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteClientSubscriptionOutcome MqttClient::DeleteClientSubscription(const DeleteClientSubscriptionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClientSubscription");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClientSubscriptionResponse rsp = DeleteClientSubscriptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClientSubscriptionOutcome(rsp);
        else
            return DeleteClientSubscriptionOutcome(o.GetError());
    }
    else
    {
        return DeleteClientSubscriptionOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteClientSubscriptionAsync(const DeleteClientSubscriptionRequest& request, const DeleteClientSubscriptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteClientSubscriptionRequest&;
    using Resp = DeleteClientSubscriptionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteClientSubscription", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteClientSubscriptionOutcomeCallable MqttClient::DeleteClientSubscriptionCallable(const DeleteClientSubscriptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClientSubscriptionOutcome>>();
    DeleteClientSubscriptionAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteClientSubscriptionRequest&,
        DeleteClientSubscriptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteDeviceCertificateRequest&;
    using Resp = DeleteDeviceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteDeviceCertificateOutcomeCallable MqttClient::DeleteDeviceCertificateCallable(const DeleteDeviceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceCertificateOutcome>>();
    DeleteDeviceCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteDeviceCertificateRequest&,
        DeleteDeviceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DeleteDeviceIdentityOutcome MqttClient::DeleteDeviceIdentity(const DeleteDeviceIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDeviceIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDeviceIdentityResponse rsp = DeleteDeviceIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDeviceIdentityOutcome(rsp);
        else
            return DeleteDeviceIdentityOutcome(o.GetError());
    }
    else
    {
        return DeleteDeviceIdentityOutcome(outcome.GetError());
    }
}

void MqttClient::DeleteDeviceIdentityAsync(const DeleteDeviceIdentityRequest& request, const DeleteDeviceIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDeviceIdentityRequest&;
    using Resp = DeleteDeviceIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDeviceIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteDeviceIdentityOutcomeCallable MqttClient::DeleteDeviceIdentityCallable(const DeleteDeviceIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDeviceIdentityOutcome>>();
    DeleteDeviceIdentityAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteDeviceIdentityRequest&,
        DeleteDeviceIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteInsPublicEndpointRequest&;
    using Resp = DeleteInsPublicEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInsPublicEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteInsPublicEndpointOutcomeCallable MqttClient::DeleteInsPublicEndpointCallable(const DeleteInsPublicEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInsPublicEndpointOutcome>>();
    DeleteInsPublicEndpointAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteInsPublicEndpointRequest&,
        DeleteInsPublicEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteInstanceRequest&;
    using Resp = DeleteInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteInstanceOutcomeCallable MqttClient::DeleteInstanceCallable(const DeleteInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteInstanceOutcome>>();
    DeleteInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteInstanceRequest&,
        DeleteInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteTopicRequest&;
    using Resp = DeleteTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteTopicOutcomeCallable MqttClient::DeleteTopicCallable(const DeleteTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTopicOutcome>>();
    DeleteTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteTopicRequest&,
        DeleteTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DeleteUserRequest&;
    using Resp = DeleteUserResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DeleteUserOutcomeCallable MqttClient::DeleteUserCallable(const DeleteUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUserOutcome>>();
    DeleteUserAsync(
    request,
    [prom](
        const MqttClient*,
        const DeleteUserRequest&,
        DeleteUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAuthenticatorRequest&;
    using Resp = DescribeAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeAuthenticatorOutcomeCallable MqttClient::DescribeAuthenticatorCallable(const DescribeAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthenticatorOutcome>>();
    DescribeAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeAuthenticatorRequest&,
        DescribeAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeAuthorizationPoliciesRequest&;
    using Resp = DescribeAuthorizationPoliciesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuthorizationPolicies", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeAuthorizationPoliciesOutcomeCallable MqttClient::DescribeAuthorizationPoliciesCallable(const DescribeAuthorizationPoliciesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuthorizationPoliciesOutcome>>();
    DescribeAuthorizationPoliciesAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeAuthorizationPoliciesRequest&,
        DescribeAuthorizationPoliciesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCaCertificateRequest&;
    using Resp = DescribeCaCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeCaCertificateOutcomeCallable MqttClient::DescribeCaCertificateCallable(const DescribeCaCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaCertificateOutcome>>();
    DescribeCaCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeCaCertificateRequest&,
        DescribeCaCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeCaCertificatesRequest&;
    using Resp = DescribeCaCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCaCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeCaCertificatesOutcomeCallable MqttClient::DescribeCaCertificatesCallable(const DescribeCaCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCaCertificatesOutcome>>();
    DescribeCaCertificatesAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeCaCertificatesRequest&,
        DescribeCaCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeClientListRequest&;
    using Resp = DescribeClientListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClientList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeClientListOutcomeCallable MqttClient::DescribeClientListCallable(const DescribeClientListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClientListOutcome>>();
    DescribeClientListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeClientListRequest&,
        DescribeClientListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceCertificateRequest&;
    using Resp = DescribeDeviceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeDeviceCertificateOutcomeCallable MqttClient::DescribeDeviceCertificateCallable(const DescribeDeviceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceCertificateOutcome>>();
    DescribeDeviceCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeDeviceCertificateRequest&,
        DescribeDeviceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeDeviceCertificatesRequest&;
    using Resp = DescribeDeviceCertificatesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceCertificates", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeDeviceCertificatesOutcomeCallable MqttClient::DescribeDeviceCertificatesCallable(const DescribeDeviceCertificatesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceCertificatesOutcome>>();
    DescribeDeviceCertificatesAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeDeviceCertificatesRequest&,
        DescribeDeviceCertificatesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeDeviceIdentitiesOutcome MqttClient::DescribeDeviceIdentities(const DescribeDeviceIdentitiesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceIdentities");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceIdentitiesResponse rsp = DescribeDeviceIdentitiesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceIdentitiesOutcome(rsp);
        else
            return DescribeDeviceIdentitiesOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceIdentitiesOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeDeviceIdentitiesAsync(const DescribeDeviceIdentitiesRequest& request, const DescribeDeviceIdentitiesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceIdentitiesRequest&;
    using Resp = DescribeDeviceIdentitiesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceIdentities", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeDeviceIdentitiesOutcomeCallable MqttClient::DescribeDeviceIdentitiesCallable(const DescribeDeviceIdentitiesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceIdentitiesOutcome>>();
    DescribeDeviceIdentitiesAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeDeviceIdentitiesRequest&,
        DescribeDeviceIdentitiesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeDeviceIdentityOutcome MqttClient::DescribeDeviceIdentity(const DescribeDeviceIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeviceIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeviceIdentityResponse rsp = DescribeDeviceIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeviceIdentityOutcome(rsp);
        else
            return DescribeDeviceIdentityOutcome(o.GetError());
    }
    else
    {
        return DescribeDeviceIdentityOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeDeviceIdentityAsync(const DescribeDeviceIdentityRequest& request, const DescribeDeviceIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeviceIdentityRequest&;
    using Resp = DescribeDeviceIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeviceIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeDeviceIdentityOutcomeCallable MqttClient::DescribeDeviceIdentityCallable(const DescribeDeviceIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeviceIdentityOutcome>>();
    DescribeDeviceIdentityAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeDeviceIdentityRequest&,
        DescribeDeviceIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInsPublicEndpointsRequest&;
    using Resp = DescribeInsPublicEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInsPublicEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeInsPublicEndpointsOutcomeCallable MqttClient::DescribeInsPublicEndpointsCallable(const DescribeInsPublicEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInsPublicEndpointsOutcome>>();
    DescribeInsPublicEndpointsAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeInsPublicEndpointsRequest&,
        DescribeInsPublicEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInsVPCEndpointsRequest&;
    using Resp = DescribeInsVPCEndpointsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInsVPCEndpoints", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeInsVPCEndpointsOutcomeCallable MqttClient::DescribeInsVPCEndpointsCallable(const DescribeInsVPCEndpointsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInsVPCEndpointsOutcome>>();
    DescribeInsVPCEndpointsAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeInsVPCEndpointsRequest&,
        DescribeInsVPCEndpointsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceRequest&;
    using Resp = DescribeInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeInstanceOutcomeCallable MqttClient::DescribeInstanceCallable(const DescribeInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceOutcome>>();
    DescribeInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeInstanceRequest&,
        DescribeInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeInstanceListRequest&;
    using Resp = DescribeInstanceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstanceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeInstanceListOutcomeCallable MqttClient::DescribeInstanceListCallable(const DescribeInstanceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstanceListOutcome>>();
    DescribeInstanceListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeInstanceListRequest&,
        DescribeInstanceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMessageByTopicRequest&;
    using Resp = DescribeMessageByTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageByTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeMessageByTopicOutcomeCallable MqttClient::DescribeMessageByTopicCallable(const DescribeMessageByTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageByTopicOutcome>>();
    DescribeMessageByTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeMessageByTopicRequest&,
        DescribeMessageByTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::DescribeMessageDetailsOutcome MqttClient::DescribeMessageDetails(const DescribeMessageDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMessageDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMessageDetailsResponse rsp = DescribeMessageDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMessageDetailsOutcome(rsp);
        else
            return DescribeMessageDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeMessageDetailsOutcome(outcome.GetError());
    }
}

void MqttClient::DescribeMessageDetailsAsync(const DescribeMessageDetailsRequest& request, const DescribeMessageDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMessageDetailsRequest&;
    using Resp = DescribeMessageDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeMessageDetailsOutcomeCallable MqttClient::DescribeMessageDetailsCallable(const DescribeMessageDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageDetailsOutcome>>();
    DescribeMessageDetailsAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeMessageDetailsRequest&,
        DescribeMessageDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeMessageListRequest&;
    using Resp = DescribeMessageListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMessageList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeMessageListOutcomeCallable MqttClient::DescribeMessageListCallable(const DescribeMessageListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMessageListOutcome>>();
    DescribeMessageListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeMessageListRequest&,
        DescribeMessageListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeProductSKUListRequest&;
    using Resp = DescribeProductSKUListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProductSKUList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeProductSKUListOutcomeCallable MqttClient::DescribeProductSKUListCallable(const DescribeProductSKUListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProductSKUListOutcome>>();
    DescribeProductSKUListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeProductSKUListRequest&,
        DescribeProductSKUListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeSharedSubscriptionLagRequest&;
    using Resp = DescribeSharedSubscriptionLagResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSharedSubscriptionLag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeSharedSubscriptionLagOutcomeCallable MqttClient::DescribeSharedSubscriptionLagCallable(const DescribeSharedSubscriptionLagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSharedSubscriptionLagOutcome>>();
    DescribeSharedSubscriptionLagAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeSharedSubscriptionLagRequest&,
        DescribeSharedSubscriptionLagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopicRequest&;
    using Resp = DescribeTopicResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeTopicOutcomeCallable MqttClient::DescribeTopicCallable(const DescribeTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicOutcome>>();
    DescribeTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeTopicRequest&,
        DescribeTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeTopicListRequest&;
    using Resp = DescribeTopicListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTopicList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeTopicListOutcomeCallable MqttClient::DescribeTopicListCallable(const DescribeTopicListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTopicListOutcome>>();
    DescribeTopicListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeTopicListRequest&,
        DescribeTopicListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const DescribeUserListRequest&;
    using Resp = DescribeUserListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUserList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::DescribeUserListOutcomeCallable MqttClient::DescribeUserListCallable(const DescribeUserListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUserListOutcome>>();
    DescribeUserListAsync(
    request,
    [prom](
        const MqttClient*,
        const DescribeUserListRequest&,
        DescribeUserListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::KickOutClientOutcome MqttClient::KickOutClient(const KickOutClientRequest &request)
{
    auto outcome = MakeRequest(request, "KickOutClient");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        KickOutClientResponse rsp = KickOutClientResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return KickOutClientOutcome(rsp);
        else
            return KickOutClientOutcome(o.GetError());
    }
    else
    {
        return KickOutClientOutcome(outcome.GetError());
    }
}

void MqttClient::KickOutClientAsync(const KickOutClientRequest& request, const KickOutClientAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const KickOutClientRequest&;
    using Resp = KickOutClientResponse;

    DoRequestAsync<Req, Resp>(
        "KickOutClient", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::KickOutClientOutcomeCallable MqttClient::KickOutClientCallable(const KickOutClientRequest &request)
{
    const auto prom = std::make_shared<std::promise<KickOutClientOutcome>>();
    KickOutClientAsync(
    request,
    [prom](
        const MqttClient*,
        const KickOutClientRequest&,
        KickOutClientOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyAuthorizationPolicyRequest&;
    using Resp = ModifyAuthorizationPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuthorizationPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyAuthorizationPolicyOutcomeCallable MqttClient::ModifyAuthorizationPolicyCallable(const ModifyAuthorizationPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuthorizationPolicyOutcome>>();
    ModifyAuthorizationPolicyAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyAuthorizationPolicyRequest&,
        ModifyAuthorizationPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

MqttClient::ModifyDeviceIdentityOutcome MqttClient::ModifyDeviceIdentity(const ModifyDeviceIdentityRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDeviceIdentity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDeviceIdentityResponse rsp = ModifyDeviceIdentityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDeviceIdentityOutcome(rsp);
        else
            return ModifyDeviceIdentityOutcome(o.GetError());
    }
    else
    {
        return ModifyDeviceIdentityOutcome(outcome.GetError());
    }
}

void MqttClient::ModifyDeviceIdentityAsync(const ModifyDeviceIdentityRequest& request, const ModifyDeviceIdentityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDeviceIdentityRequest&;
    using Resp = ModifyDeviceIdentityResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDeviceIdentity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyDeviceIdentityOutcomeCallable MqttClient::ModifyDeviceIdentityCallable(const ModifyDeviceIdentityRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDeviceIdentityOutcome>>();
    ModifyDeviceIdentityAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyDeviceIdentityRequest&,
        ModifyDeviceIdentityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyHttpAuthenticatorRequest&;
    using Resp = ModifyHttpAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyHttpAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyHttpAuthenticatorOutcomeCallable MqttClient::ModifyHttpAuthenticatorCallable(const ModifyHttpAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyHttpAuthenticatorOutcome>>();
    ModifyHttpAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyHttpAuthenticatorRequest&,
        ModifyHttpAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInsPublicEndpointRequest&;
    using Resp = ModifyInsPublicEndpointResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInsPublicEndpoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyInsPublicEndpointOutcomeCallable MqttClient::ModifyInsPublicEndpointCallable(const ModifyInsPublicEndpointRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInsPublicEndpointOutcome>>();
    ModifyInsPublicEndpointAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyInsPublicEndpointRequest&,
        ModifyInsPublicEndpointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstanceRequest&;
    using Resp = ModifyInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyInstanceOutcomeCallable MqttClient::ModifyInstanceCallable(const ModifyInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceOutcome>>();
    ModifyInstanceAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyInstanceRequest&,
        ModifyInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyInstanceCertBindingRequest&;
    using Resp = ModifyInstanceCertBindingResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyInstanceCertBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyInstanceCertBindingOutcomeCallable MqttClient::ModifyInstanceCertBindingCallable(const ModifyInstanceCertBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyInstanceCertBindingOutcome>>();
    ModifyInstanceCertBindingAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyInstanceCertBindingRequest&,
        ModifyInstanceCertBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyJWKSAuthenticatorRequest&;
    using Resp = ModifyJWKSAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyJWKSAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyJWKSAuthenticatorOutcomeCallable MqttClient::ModifyJWKSAuthenticatorCallable(const ModifyJWKSAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyJWKSAuthenticatorOutcome>>();
    ModifyJWKSAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyJWKSAuthenticatorRequest&,
        ModifyJWKSAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyJWTAuthenticatorRequest&;
    using Resp = ModifyJWTAuthenticatorResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyJWTAuthenticator", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyJWTAuthenticatorOutcomeCallable MqttClient::ModifyJWTAuthenticatorCallable(const ModifyJWTAuthenticatorRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyJWTAuthenticatorOutcome>>();
    ModifyJWTAuthenticatorAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyJWTAuthenticatorRequest&,
        ModifyJWTAuthenticatorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyTopicRequest&;
    using Resp = ModifyTopicResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTopic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyTopicOutcomeCallable MqttClient::ModifyTopicCallable(const ModifyTopicRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTopicOutcome>>();
    ModifyTopicAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyTopicRequest&,
        ModifyTopicOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const ModifyUserRequest&;
    using Resp = ModifyUserResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::ModifyUserOutcomeCallable MqttClient::ModifyUserCallable(const ModifyUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUserOutcome>>();
    ModifyUserAsync(
    request,
    [prom](
        const MqttClient*,
        const ModifyUserRequest&,
        ModifyUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const PublishMessageRequest&;
    using Resp = PublishMessageResponse;

    DoRequestAsync<Req, Resp>(
        "PublishMessage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::PublishMessageOutcomeCallable MqttClient::PublishMessageCallable(const PublishMessageRequest &request)
{
    const auto prom = std::make_shared<std::promise<PublishMessageOutcome>>();
    PublishMessageAsync(
    request,
    [prom](
        const MqttClient*,
        const PublishMessageRequest&,
        PublishMessageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RegisterCaCertificateRequest&;
    using Resp = RegisterCaCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterCaCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::RegisterCaCertificateOutcomeCallable MqttClient::RegisterCaCertificateCallable(const RegisterCaCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterCaCertificateOutcome>>();
    RegisterCaCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const RegisterCaCertificateRequest&,
        RegisterCaCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RegisterDeviceCertificateRequest&;
    using Resp = RegisterDeviceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterDeviceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::RegisterDeviceCertificateOutcomeCallable MqttClient::RegisterDeviceCertificateCallable(const RegisterDeviceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterDeviceCertificateOutcome>>();
    RegisterDeviceCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const RegisterDeviceCertificateRequest&,
        RegisterDeviceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const RevokedDeviceCertificateRequest&;
    using Resp = RevokedDeviceCertificateResponse;

    DoRequestAsync<Req, Resp>(
        "RevokedDeviceCertificate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::RevokedDeviceCertificateOutcomeCallable MqttClient::RevokedDeviceCertificateCallable(const RevokedDeviceCertificateRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokedDeviceCertificateOutcome>>();
    RevokedDeviceCertificateAsync(
    request,
    [prom](
        const MqttClient*,
        const RevokedDeviceCertificateRequest&,
        RevokedDeviceCertificateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
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
    using Req = const UpdateAuthorizationPolicyPriorityRequest&;
    using Resp = UpdateAuthorizationPolicyPriorityResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAuthorizationPolicyPriority", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

MqttClient::UpdateAuthorizationPolicyPriorityOutcomeCallable MqttClient::UpdateAuthorizationPolicyPriorityCallable(const UpdateAuthorizationPolicyPriorityRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAuthorizationPolicyPriorityOutcome>>();
    UpdateAuthorizationPolicyPriorityAsync(
    request,
    [prom](
        const MqttClient*,
        const UpdateAuthorizationPolicyPriorityRequest&,
        UpdateAuthorizationPolicyPriorityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

