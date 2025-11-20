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

#include <tencentcloud/apigateway/v20180808/ApigatewayClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Apigateway::V20180808;
using namespace TencentCloud::Apigateway::V20180808::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-08";
    const string ENDPOINT = "apigateway.tencentcloudapi.com";
}

ApigatewayClient::ApigatewayClient(const Credential &credential, const string &region) :
    ApigatewayClient(credential, region, ClientProfile())
{
}

ApigatewayClient::ApigatewayClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


ApigatewayClient::AttachPluginOutcome ApigatewayClient::AttachPlugin(const AttachPluginRequest &request)
{
    auto outcome = MakeRequest(request, "AttachPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AttachPluginResponse rsp = AttachPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AttachPluginOutcome(rsp);
        else
            return AttachPluginOutcome(o.GetError());
    }
    else
    {
        return AttachPluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::AttachPluginAsync(const AttachPluginRequest& request, const AttachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AttachPluginRequest&;
    using Resp = AttachPluginResponse;

    DoRequestAsync<Req, Resp>(
        "AttachPlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::AttachPluginOutcomeCallable ApigatewayClient::AttachPluginCallable(const AttachPluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<AttachPluginOutcome>>();
    AttachPluginAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const AttachPluginRequest&,
        AttachPluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::BindApiAppOutcome ApigatewayClient::BindApiApp(const BindApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "BindApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindApiAppResponse rsp = BindApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindApiAppOutcome(rsp);
        else
            return BindApiAppOutcome(o.GetError());
    }
    else
    {
        return BindApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindApiAppAsync(const BindApiAppRequest& request, const BindApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindApiAppRequest&;
    using Resp = BindApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "BindApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::BindApiAppOutcomeCallable ApigatewayClient::BindApiAppCallable(const BindApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindApiAppOutcome>>();
    BindApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const BindApiAppRequest&,
        BindApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::BindEnvironmentOutcome ApigatewayClient::BindEnvironment(const BindEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "BindEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindEnvironmentResponse rsp = BindEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindEnvironmentOutcome(rsp);
        else
            return BindEnvironmentOutcome(o.GetError());
    }
    else
    {
        return BindEnvironmentOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindEnvironmentAsync(const BindEnvironmentRequest& request, const BindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindEnvironmentRequest&;
    using Resp = BindEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "BindEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::BindEnvironmentOutcomeCallable ApigatewayClient::BindEnvironmentCallable(const BindEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindEnvironmentOutcome>>();
    BindEnvironmentAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const BindEnvironmentRequest&,
        BindEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::BindIPStrategyOutcome ApigatewayClient::BindIPStrategy(const BindIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "BindIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindIPStrategyResponse rsp = BindIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindIPStrategyOutcome(rsp);
        else
            return BindIPStrategyOutcome(o.GetError());
    }
    else
    {
        return BindIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindIPStrategyAsync(const BindIPStrategyRequest& request, const BindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindIPStrategyRequest&;
    using Resp = BindIPStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "BindIPStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::BindIPStrategyOutcomeCallable ApigatewayClient::BindIPStrategyCallable(const BindIPStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindIPStrategyOutcome>>();
    BindIPStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const BindIPStrategyRequest&,
        BindIPStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::BindSecretIdsOutcome ApigatewayClient::BindSecretIds(const BindSecretIdsRequest &request)
{
    auto outcome = MakeRequest(request, "BindSecretIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSecretIdsResponse rsp = BindSecretIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSecretIdsOutcome(rsp);
        else
            return BindSecretIdsOutcome(o.GetError());
    }
    else
    {
        return BindSecretIdsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindSecretIdsAsync(const BindSecretIdsRequest& request, const BindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindSecretIdsRequest&;
    using Resp = BindSecretIdsResponse;

    DoRequestAsync<Req, Resp>(
        "BindSecretIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::BindSecretIdsOutcomeCallable ApigatewayClient::BindSecretIdsCallable(const BindSecretIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindSecretIdsOutcome>>();
    BindSecretIdsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const BindSecretIdsRequest&,
        BindSecretIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::BindSubDomainOutcome ApigatewayClient::BindSubDomain(const BindSubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "BindSubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindSubDomainResponse rsp = BindSubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindSubDomainOutcome(rsp);
        else
            return BindSubDomainOutcome(o.GetError());
    }
    else
    {
        return BindSubDomainOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BindSubDomainAsync(const BindSubDomainRequest& request, const BindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindSubDomainRequest&;
    using Resp = BindSubDomainResponse;

    DoRequestAsync<Req, Resp>(
        "BindSubDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::BindSubDomainOutcomeCallable ApigatewayClient::BindSubDomainCallable(const BindSubDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindSubDomainOutcome>>();
    BindSubDomainAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const BindSubDomainRequest&,
        BindSubDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::BuildAPIDocOutcome ApigatewayClient::BuildAPIDoc(const BuildAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "BuildAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BuildAPIDocResponse rsp = BuildAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BuildAPIDocOutcome(rsp);
        else
            return BuildAPIDocOutcome(o.GetError());
    }
    else
    {
        return BuildAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::BuildAPIDocAsync(const BuildAPIDocRequest& request, const BuildAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BuildAPIDocRequest&;
    using Resp = BuildAPIDocResponse;

    DoRequestAsync<Req, Resp>(
        "BuildAPIDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::BuildAPIDocOutcomeCallable ApigatewayClient::BuildAPIDocCallable(const BuildAPIDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<BuildAPIDocOutcome>>();
    BuildAPIDocAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const BuildAPIDocRequest&,
        BuildAPIDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateAPIDocOutcome ApigatewayClient::CreateAPIDoc(const CreateAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAPIDocResponse rsp = CreateAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAPIDocOutcome(rsp);
        else
            return CreateAPIDocOutcome(o.GetError());
    }
    else
    {
        return CreateAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateAPIDocAsync(const CreateAPIDocRequest& request, const CreateAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAPIDocRequest&;
    using Resp = CreateAPIDocResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAPIDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateAPIDocOutcomeCallable ApigatewayClient::CreateAPIDocCallable(const CreateAPIDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAPIDocOutcome>>();
    CreateAPIDocAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateAPIDocRequest&,
        CreateAPIDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateApiOutcome ApigatewayClient::CreateApi(const CreateApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiResponse rsp = CreateApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiOutcome(rsp);
        else
            return CreateApiOutcome(o.GetError());
    }
    else
    {
        return CreateApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateApiAsync(const CreateApiRequest& request, const CreateApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiRequest&;
    using Resp = CreateApiResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateApiOutcomeCallable ApigatewayClient::CreateApiCallable(const CreateApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiOutcome>>();
    CreateApiAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateApiRequest&,
        CreateApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateApiAppOutcome ApigatewayClient::CreateApiApp(const CreateApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiAppResponse rsp = CreateApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiAppOutcome(rsp);
        else
            return CreateApiAppOutcome(o.GetError());
    }
    else
    {
        return CreateApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateApiAppAsync(const CreateApiAppRequest& request, const CreateApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiAppRequest&;
    using Resp = CreateApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateApiAppOutcomeCallable ApigatewayClient::CreateApiAppCallable(const CreateApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiAppOutcome>>();
    CreateApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateApiAppRequest&,
        CreateApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateApiKeyOutcome ApigatewayClient::CreateApiKey(const CreateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiKeyResponse rsp = CreateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiKeyOutcome(rsp);
        else
            return CreateApiKeyOutcome(o.GetError());
    }
    else
    {
        return CreateApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateApiKeyAsync(const CreateApiKeyRequest& request, const CreateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiKeyRequest&;
    using Resp = CreateApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateApiKeyOutcomeCallable ApigatewayClient::CreateApiKeyCallable(const CreateApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiKeyOutcome>>();
    CreateApiKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateApiKeyRequest&,
        CreateApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateExclusiveInstancesOutcome ApigatewayClient::CreateExclusiveInstances(const CreateExclusiveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExclusiveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExclusiveInstancesResponse rsp = CreateExclusiveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExclusiveInstancesOutcome(rsp);
        else
            return CreateExclusiveInstancesOutcome(o.GetError());
    }
    else
    {
        return CreateExclusiveInstancesOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateExclusiveInstancesAsync(const CreateExclusiveInstancesRequest& request, const CreateExclusiveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExclusiveInstancesRequest&;
    using Resp = CreateExclusiveInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExclusiveInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateExclusiveInstancesOutcomeCallable ApigatewayClient::CreateExclusiveInstancesCallable(const CreateExclusiveInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExclusiveInstancesOutcome>>();
    CreateExclusiveInstancesAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateExclusiveInstancesRequest&,
        CreateExclusiveInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateIPStrategyOutcome ApigatewayClient::CreateIPStrategy(const CreateIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateIPStrategyResponse rsp = CreateIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateIPStrategyOutcome(rsp);
        else
            return CreateIPStrategyOutcome(o.GetError());
    }
    else
    {
        return CreateIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateIPStrategyAsync(const CreateIPStrategyRequest& request, const CreateIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateIPStrategyRequest&;
    using Resp = CreateIPStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "CreateIPStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateIPStrategyOutcomeCallable ApigatewayClient::CreateIPStrategyCallable(const CreateIPStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateIPStrategyOutcome>>();
    CreateIPStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateIPStrategyRequest&,
        CreateIPStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreatePluginOutcome ApigatewayClient::CreatePlugin(const CreatePluginRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePluginResponse rsp = CreatePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePluginOutcome(rsp);
        else
            return CreatePluginOutcome(o.GetError());
    }
    else
    {
        return CreatePluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreatePluginAsync(const CreatePluginRequest& request, const CreatePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePluginRequest&;
    using Resp = CreatePluginResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreatePluginOutcomeCallable ApigatewayClient::CreatePluginCallable(const CreatePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePluginOutcome>>();
    CreatePluginAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreatePluginRequest&,
        CreatePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateServiceOutcome ApigatewayClient::CreateService(const CreateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateServiceResponse rsp = CreateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateServiceOutcome(rsp);
        else
            return CreateServiceOutcome(o.GetError());
    }
    else
    {
        return CreateServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateServiceAsync(const CreateServiceRequest& request, const CreateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateServiceRequest&;
    using Resp = CreateServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateServiceOutcomeCallable ApigatewayClient::CreateServiceCallable(const CreateServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateServiceOutcome>>();
    CreateServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateServiceRequest&,
        CreateServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateUpstreamOutcome ApigatewayClient::CreateUpstream(const CreateUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUpstreamResponse rsp = CreateUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUpstreamOutcome(rsp);
        else
            return CreateUpstreamOutcome(o.GetError());
    }
    else
    {
        return CreateUpstreamOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateUpstreamAsync(const CreateUpstreamRequest& request, const CreateUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUpstreamRequest&;
    using Resp = CreateUpstreamResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUpstream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateUpstreamOutcomeCallable ApigatewayClient::CreateUpstreamCallable(const CreateUpstreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUpstreamOutcome>>();
    CreateUpstreamAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateUpstreamRequest&,
        CreateUpstreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::CreateUsagePlanOutcome ApigatewayClient::CreateUsagePlan(const CreateUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUsagePlanResponse rsp = CreateUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUsagePlanOutcome(rsp);
        else
            return CreateUsagePlanOutcome(o.GetError());
    }
    else
    {
        return CreateUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::CreateUsagePlanAsync(const CreateUsagePlanRequest& request, const CreateUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUsagePlanRequest&;
    using Resp = CreateUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::CreateUsagePlanOutcomeCallable ApigatewayClient::CreateUsagePlanCallable(const CreateUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUsagePlanOutcome>>();
    CreateUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const CreateUsagePlanRequest&,
        CreateUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteAPIDocOutcome ApigatewayClient::DeleteAPIDoc(const DeleteAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAPIDocResponse rsp = DeleteAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAPIDocOutcome(rsp);
        else
            return DeleteAPIDocOutcome(o.GetError());
    }
    else
    {
        return DeleteAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteAPIDocAsync(const DeleteAPIDocRequest& request, const DeleteAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAPIDocRequest&;
    using Resp = DeleteAPIDocResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAPIDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteAPIDocOutcomeCallable ApigatewayClient::DeleteAPIDocCallable(const DeleteAPIDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAPIDocOutcome>>();
    DeleteAPIDocAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteAPIDocRequest&,
        DeleteAPIDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteApiOutcome ApigatewayClient::DeleteApi(const DeleteApiRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiResponse rsp = DeleteApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiOutcome(rsp);
        else
            return DeleteApiOutcome(o.GetError());
    }
    else
    {
        return DeleteApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteApiAsync(const DeleteApiRequest& request, const DeleteApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiRequest&;
    using Resp = DeleteApiResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteApiOutcomeCallable ApigatewayClient::DeleteApiCallable(const DeleteApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiOutcome>>();
    DeleteApiAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteApiRequest&,
        DeleteApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteApiAppOutcome ApigatewayClient::DeleteApiApp(const DeleteApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiAppResponse rsp = DeleteApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiAppOutcome(rsp);
        else
            return DeleteApiAppOutcome(o.GetError());
    }
    else
    {
        return DeleteApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteApiAppAsync(const DeleteApiAppRequest& request, const DeleteApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiAppRequest&;
    using Resp = DeleteApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteApiAppOutcomeCallable ApigatewayClient::DeleteApiAppCallable(const DeleteApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiAppOutcome>>();
    DeleteApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteApiAppRequest&,
        DeleteApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteApiKeyOutcome ApigatewayClient::DeleteApiKey(const DeleteApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiKeyResponse rsp = DeleteApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiKeyOutcome(rsp);
        else
            return DeleteApiKeyOutcome(o.GetError());
    }
    else
    {
        return DeleteApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteApiKeyAsync(const DeleteApiKeyRequest& request, const DeleteApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiKeyRequest&;
    using Resp = DeleteApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteApiKeyOutcomeCallable ApigatewayClient::DeleteApiKeyCallable(const DeleteApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiKeyOutcome>>();
    DeleteApiKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteApiKeyRequest&,
        DeleteApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteIPStrategyOutcome ApigatewayClient::DeleteIPStrategy(const DeleteIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIPStrategyResponse rsp = DeleteIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIPStrategyOutcome(rsp);
        else
            return DeleteIPStrategyOutcome(o.GetError());
    }
    else
    {
        return DeleteIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteIPStrategyAsync(const DeleteIPStrategyRequest& request, const DeleteIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIPStrategyRequest&;
    using Resp = DeleteIPStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIPStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteIPStrategyOutcomeCallable ApigatewayClient::DeleteIPStrategyCallable(const DeleteIPStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIPStrategyOutcome>>();
    DeleteIPStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteIPStrategyRequest&,
        DeleteIPStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeletePluginOutcome ApigatewayClient::DeletePlugin(const DeletePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePluginResponse rsp = DeletePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePluginOutcome(rsp);
        else
            return DeletePluginOutcome(o.GetError());
    }
    else
    {
        return DeletePluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeletePluginAsync(const DeletePluginRequest& request, const DeletePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePluginRequest&;
    using Resp = DeletePluginResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeletePluginOutcomeCallable ApigatewayClient::DeletePluginCallable(const DeletePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePluginOutcome>>();
    DeletePluginAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeletePluginRequest&,
        DeletePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteServiceOutcome ApigatewayClient::DeleteService(const DeleteServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceResponse rsp = DeleteServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceOutcome(rsp);
        else
            return DeleteServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteServiceAsync(const DeleteServiceRequest& request, const DeleteServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceRequest&;
    using Resp = DeleteServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteServiceOutcomeCallable ApigatewayClient::DeleteServiceCallable(const DeleteServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceOutcome>>();
    DeleteServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteServiceRequest&,
        DeleteServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteServiceSubDomainMappingOutcome ApigatewayClient::DeleteServiceSubDomainMapping(const DeleteServiceSubDomainMappingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServiceSubDomainMapping");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServiceSubDomainMappingResponse rsp = DeleteServiceSubDomainMappingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServiceSubDomainMappingOutcome(rsp);
        else
            return DeleteServiceSubDomainMappingOutcome(o.GetError());
    }
    else
    {
        return DeleteServiceSubDomainMappingOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteServiceSubDomainMappingAsync(const DeleteServiceSubDomainMappingRequest& request, const DeleteServiceSubDomainMappingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServiceSubDomainMappingRequest&;
    using Resp = DeleteServiceSubDomainMappingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServiceSubDomainMapping", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteServiceSubDomainMappingOutcomeCallable ApigatewayClient::DeleteServiceSubDomainMappingCallable(const DeleteServiceSubDomainMappingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServiceSubDomainMappingOutcome>>();
    DeleteServiceSubDomainMappingAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteServiceSubDomainMappingRequest&,
        DeleteServiceSubDomainMappingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteUpstreamOutcome ApigatewayClient::DeleteUpstream(const DeleteUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUpstreamResponse rsp = DeleteUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUpstreamOutcome(rsp);
        else
            return DeleteUpstreamOutcome(o.GetError());
    }
    else
    {
        return DeleteUpstreamOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteUpstreamAsync(const DeleteUpstreamRequest& request, const DeleteUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUpstreamRequest&;
    using Resp = DeleteUpstreamResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUpstream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteUpstreamOutcomeCallable ApigatewayClient::DeleteUpstreamCallable(const DeleteUpstreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUpstreamOutcome>>();
    DeleteUpstreamAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteUpstreamRequest&,
        DeleteUpstreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DeleteUsagePlanOutcome ApigatewayClient::DeleteUsagePlan(const DeleteUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUsagePlanResponse rsp = DeleteUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUsagePlanOutcome(rsp);
        else
            return DeleteUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DeleteUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DeleteUsagePlanAsync(const DeleteUsagePlanRequest& request, const DeleteUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUsagePlanRequest&;
    using Resp = DeleteUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DeleteUsagePlanOutcomeCallable ApigatewayClient::DeleteUsagePlanCallable(const DeleteUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUsagePlanOutcome>>();
    DeleteUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DeleteUsagePlanRequest&,
        DeleteUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DemoteServiceUsagePlanOutcome ApigatewayClient::DemoteServiceUsagePlan(const DemoteServiceUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DemoteServiceUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DemoteServiceUsagePlanResponse rsp = DemoteServiceUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DemoteServiceUsagePlanOutcome(rsp);
        else
            return DemoteServiceUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DemoteServiceUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DemoteServiceUsagePlanAsync(const DemoteServiceUsagePlanRequest& request, const DemoteServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DemoteServiceUsagePlanRequest&;
    using Resp = DemoteServiceUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "DemoteServiceUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DemoteServiceUsagePlanOutcomeCallable ApigatewayClient::DemoteServiceUsagePlanCallable(const DemoteServiceUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DemoteServiceUsagePlanOutcome>>();
    DemoteServiceUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DemoteServiceUsagePlanRequest&,
        DemoteServiceUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeAPIDocDetailOutcome ApigatewayClient::DescribeAPIDocDetail(const DescribeAPIDocDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIDocDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIDocDetailResponse rsp = DescribeAPIDocDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIDocDetailOutcome(rsp);
        else
            return DescribeAPIDocDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIDocDetailOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeAPIDocDetailAsync(const DescribeAPIDocDetailRequest& request, const DescribeAPIDocDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAPIDocDetailRequest&;
    using Resp = DescribeAPIDocDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAPIDocDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeAPIDocDetailOutcomeCallable ApigatewayClient::DescribeAPIDocDetailCallable(const DescribeAPIDocDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAPIDocDetailOutcome>>();
    DescribeAPIDocDetailAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeAPIDocDetailRequest&,
        DescribeAPIDocDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeAPIDocsOutcome ApigatewayClient::DescribeAPIDocs(const DescribeAPIDocsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAPIDocs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAPIDocsResponse rsp = DescribeAPIDocsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAPIDocsOutcome(rsp);
        else
            return DescribeAPIDocsOutcome(o.GetError());
    }
    else
    {
        return DescribeAPIDocsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeAPIDocsAsync(const DescribeAPIDocsRequest& request, const DescribeAPIDocsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAPIDocsRequest&;
    using Resp = DescribeAPIDocsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAPIDocs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeAPIDocsOutcomeCallable ApigatewayClient::DescribeAPIDocsCallable(const DescribeAPIDocsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAPIDocsOutcome>>();
    DescribeAPIDocsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeAPIDocsRequest&,
        DescribeAPIDocsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeAllPluginApisOutcome ApigatewayClient::DescribeAllPluginApis(const DescribeAllPluginApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAllPluginApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAllPluginApisResponse rsp = DescribeAllPluginApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAllPluginApisOutcome(rsp);
        else
            return DescribeAllPluginApisOutcome(o.GetError());
    }
    else
    {
        return DescribeAllPluginApisOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeAllPluginApisAsync(const DescribeAllPluginApisRequest& request, const DescribeAllPluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAllPluginApisRequest&;
    using Resp = DescribeAllPluginApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAllPluginApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeAllPluginApisOutcomeCallable ApigatewayClient::DescribeAllPluginApisCallable(const DescribeAllPluginApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAllPluginApisOutcome>>();
    DescribeAllPluginApisAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeAllPluginApisRequest&,
        DescribeAllPluginApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiOutcome ApigatewayClient::DescribeApi(const DescribeApiRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiResponse rsp = DescribeApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiOutcome(rsp);
        else
            return DescribeApiOutcome(o.GetError());
    }
    else
    {
        return DescribeApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAsync(const DescribeApiRequest& request, const DescribeApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiRequest&;
    using Resp = DescribeApiResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiOutcomeCallable ApigatewayClient::DescribeApiCallable(const DescribeApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiOutcome>>();
    DescribeApiAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiRequest&,
        DescribeApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiAppOutcome ApigatewayClient::DescribeApiApp(const DescribeApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiAppResponse rsp = DescribeApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiAppOutcome(rsp);
        else
            return DescribeApiAppOutcome(o.GetError());
    }
    else
    {
        return DescribeApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAppAsync(const DescribeApiAppRequest& request, const DescribeApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiAppRequest&;
    using Resp = DescribeApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiAppOutcomeCallable ApigatewayClient::DescribeApiAppCallable(const DescribeApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiAppOutcome>>();
    DescribeApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiAppRequest&,
        DescribeApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiAppBindApisStatusOutcome ApigatewayClient::DescribeApiAppBindApisStatus(const DescribeApiAppBindApisStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiAppBindApisStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiAppBindApisStatusResponse rsp = DescribeApiAppBindApisStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiAppBindApisStatusOutcome(rsp);
        else
            return DescribeApiAppBindApisStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiAppBindApisStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAppBindApisStatusAsync(const DescribeApiAppBindApisStatusRequest& request, const DescribeApiAppBindApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiAppBindApisStatusRequest&;
    using Resp = DescribeApiAppBindApisStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiAppBindApisStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiAppBindApisStatusOutcomeCallable ApigatewayClient::DescribeApiAppBindApisStatusCallable(const DescribeApiAppBindApisStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiAppBindApisStatusOutcome>>();
    DescribeApiAppBindApisStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiAppBindApisStatusRequest&,
        DescribeApiAppBindApisStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiAppsStatusOutcome ApigatewayClient::DescribeApiAppsStatus(const DescribeApiAppsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiAppsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiAppsStatusResponse rsp = DescribeApiAppsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiAppsStatusOutcome(rsp);
        else
            return DescribeApiAppsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiAppsStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiAppsStatusAsync(const DescribeApiAppsStatusRequest& request, const DescribeApiAppsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiAppsStatusRequest&;
    using Resp = DescribeApiAppsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiAppsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiAppsStatusOutcomeCallable ApigatewayClient::DescribeApiAppsStatusCallable(const DescribeApiAppsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiAppsStatusOutcome>>();
    DescribeApiAppsStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiAppsStatusRequest&,
        DescribeApiAppsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiBindApiAppsStatusOutcome ApigatewayClient::DescribeApiBindApiAppsStatus(const DescribeApiBindApiAppsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiBindApiAppsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiBindApiAppsStatusResponse rsp = DescribeApiBindApiAppsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiBindApiAppsStatusOutcome(rsp);
        else
            return DescribeApiBindApiAppsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiBindApiAppsStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiBindApiAppsStatusAsync(const DescribeApiBindApiAppsStatusRequest& request, const DescribeApiBindApiAppsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiBindApiAppsStatusRequest&;
    using Resp = DescribeApiBindApiAppsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiBindApiAppsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiBindApiAppsStatusOutcomeCallable ApigatewayClient::DescribeApiBindApiAppsStatusCallable(const DescribeApiBindApiAppsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiBindApiAppsStatusOutcome>>();
    DescribeApiBindApiAppsStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiBindApiAppsStatusRequest&,
        DescribeApiBindApiAppsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiEnvironmentStrategyOutcome ApigatewayClient::DescribeApiEnvironmentStrategy(const DescribeApiEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiEnvironmentStrategyResponse rsp = DescribeApiEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiEnvironmentStrategyOutcome(rsp);
        else
            return DescribeApiEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeApiEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiEnvironmentStrategyAsync(const DescribeApiEnvironmentStrategyRequest& request, const DescribeApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiEnvironmentStrategyRequest&;
    using Resp = DescribeApiEnvironmentStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiEnvironmentStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiEnvironmentStrategyOutcomeCallable ApigatewayClient::DescribeApiEnvironmentStrategyCallable(const DescribeApiEnvironmentStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiEnvironmentStrategyOutcome>>();
    DescribeApiEnvironmentStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiEnvironmentStrategyRequest&,
        DescribeApiEnvironmentStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiForApiAppOutcome ApigatewayClient::DescribeApiForApiApp(const DescribeApiForApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiForApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiForApiAppResponse rsp = DescribeApiForApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiForApiAppOutcome(rsp);
        else
            return DescribeApiForApiAppOutcome(o.GetError());
    }
    else
    {
        return DescribeApiForApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiForApiAppAsync(const DescribeApiForApiAppRequest& request, const DescribeApiForApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiForApiAppRequest&;
    using Resp = DescribeApiForApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiForApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiForApiAppOutcomeCallable ApigatewayClient::DescribeApiForApiAppCallable(const DescribeApiForApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiForApiAppOutcome>>();
    DescribeApiForApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiForApiAppRequest&,
        DescribeApiForApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiKeyOutcome ApigatewayClient::DescribeApiKey(const DescribeApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiKeyResponse rsp = DescribeApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiKeyOutcome(rsp);
        else
            return DescribeApiKeyOutcome(o.GetError());
    }
    else
    {
        return DescribeApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiKeyAsync(const DescribeApiKeyRequest& request, const DescribeApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiKeyRequest&;
    using Resp = DescribeApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiKeyOutcomeCallable ApigatewayClient::DescribeApiKeyCallable(const DescribeApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiKeyOutcome>>();
    DescribeApiKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiKeyRequest&,
        DescribeApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiKeysStatusOutcome ApigatewayClient::DescribeApiKeysStatus(const DescribeApiKeysStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiKeysStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiKeysStatusResponse rsp = DescribeApiKeysStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiKeysStatusOutcome(rsp);
        else
            return DescribeApiKeysStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApiKeysStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiKeysStatusAsync(const DescribeApiKeysStatusRequest& request, const DescribeApiKeysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiKeysStatusRequest&;
    using Resp = DescribeApiKeysStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiKeysStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiKeysStatusOutcomeCallable ApigatewayClient::DescribeApiKeysStatusCallable(const DescribeApiKeysStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiKeysStatusOutcome>>();
    DescribeApiKeysStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiKeysStatusRequest&,
        DescribeApiKeysStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApiUsagePlanOutcome ApigatewayClient::DescribeApiUsagePlan(const DescribeApiUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiUsagePlanResponse rsp = DescribeApiUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiUsagePlanOutcome(rsp);
        else
            return DescribeApiUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DescribeApiUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApiUsagePlanAsync(const DescribeApiUsagePlanRequest& request, const DescribeApiUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiUsagePlanRequest&;
    using Resp = DescribeApiUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApiUsagePlanOutcomeCallable ApigatewayClient::DescribeApiUsagePlanCallable(const DescribeApiUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiUsagePlanOutcome>>();
    DescribeApiUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApiUsagePlanRequest&,
        DescribeApiUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeApisStatusOutcome ApigatewayClient::DescribeApisStatus(const DescribeApisStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApisStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApisStatusResponse rsp = DescribeApisStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApisStatusOutcome(rsp);
        else
            return DescribeApisStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApisStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeApisStatusAsync(const DescribeApisStatusRequest& request, const DescribeApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApisStatusRequest&;
    using Resp = DescribeApisStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApisStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeApisStatusOutcomeCallable ApigatewayClient::DescribeApisStatusCallable(const DescribeApisStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApisStatusOutcome>>();
    DescribeApisStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeApisStatusRequest&,
        DescribeApisStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeExclusiveInstanceDetailOutcome ApigatewayClient::DescribeExclusiveInstanceDetail(const DescribeExclusiveInstanceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstanceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstanceDetailResponse rsp = DescribeExclusiveInstanceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstanceDetailOutcome(rsp);
        else
            return DescribeExclusiveInstanceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstanceDetailOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstanceDetailAsync(const DescribeExclusiveInstanceDetailRequest& request, const DescribeExclusiveInstanceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExclusiveInstanceDetailRequest&;
    using Resp = DescribeExclusiveInstanceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExclusiveInstanceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeExclusiveInstanceDetailOutcomeCallable ApigatewayClient::DescribeExclusiveInstanceDetailCallable(const DescribeExclusiveInstanceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExclusiveInstanceDetailOutcome>>();
    DescribeExclusiveInstanceDetailAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeExclusiveInstanceDetailRequest&,
        DescribeExclusiveInstanceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeExclusiveInstanceRegionsOutcome ApigatewayClient::DescribeExclusiveInstanceRegions(const DescribeExclusiveInstanceRegionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstanceRegions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstanceRegionsResponse rsp = DescribeExclusiveInstanceRegionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstanceRegionsOutcome(rsp);
        else
            return DescribeExclusiveInstanceRegionsOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstanceRegionsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstanceRegionsAsync(const DescribeExclusiveInstanceRegionsRequest& request, const DescribeExclusiveInstanceRegionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExclusiveInstanceRegionsRequest&;
    using Resp = DescribeExclusiveInstanceRegionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExclusiveInstanceRegions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeExclusiveInstanceRegionsOutcomeCallable ApigatewayClient::DescribeExclusiveInstanceRegionsCallable(const DescribeExclusiveInstanceRegionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExclusiveInstanceRegionsOutcome>>();
    DescribeExclusiveInstanceRegionsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeExclusiveInstanceRegionsRequest&,
        DescribeExclusiveInstanceRegionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeExclusiveInstancesOutcome ApigatewayClient::DescribeExclusiveInstances(const DescribeExclusiveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstancesResponse rsp = DescribeExclusiveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstancesOutcome(rsp);
        else
            return DescribeExclusiveInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstancesOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstancesAsync(const DescribeExclusiveInstancesRequest& request, const DescribeExclusiveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExclusiveInstancesRequest&;
    using Resp = DescribeExclusiveInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExclusiveInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeExclusiveInstancesOutcomeCallable ApigatewayClient::DescribeExclusiveInstancesCallable(const DescribeExclusiveInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExclusiveInstancesOutcome>>();
    DescribeExclusiveInstancesAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeExclusiveInstancesRequest&,
        DescribeExclusiveInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeExclusiveInstancesStatusOutcome ApigatewayClient::DescribeExclusiveInstancesStatus(const DescribeExclusiveInstancesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeExclusiveInstancesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeExclusiveInstancesStatusResponse rsp = DescribeExclusiveInstancesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeExclusiveInstancesStatusOutcome(rsp);
        else
            return DescribeExclusiveInstancesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeExclusiveInstancesStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeExclusiveInstancesStatusAsync(const DescribeExclusiveInstancesStatusRequest& request, const DescribeExclusiveInstancesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeExclusiveInstancesStatusRequest&;
    using Resp = DescribeExclusiveInstancesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeExclusiveInstancesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeExclusiveInstancesStatusOutcomeCallable ApigatewayClient::DescribeExclusiveInstancesStatusCallable(const DescribeExclusiveInstancesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeExclusiveInstancesStatusOutcome>>();
    DescribeExclusiveInstancesStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeExclusiveInstancesStatusRequest&,
        DescribeExclusiveInstancesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeIPStrategyOutcome ApigatewayClient::DescribeIPStrategy(const DescribeIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStrategyResponse rsp = DescribeIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStrategyOutcome(rsp);
        else
            return DescribeIPStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeIPStrategyAsync(const DescribeIPStrategyRequest& request, const DescribeIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPStrategyRequest&;
    using Resp = DescribeIPStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeIPStrategyOutcomeCallable ApigatewayClient::DescribeIPStrategyCallable(const DescribeIPStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPStrategyOutcome>>();
    DescribeIPStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeIPStrategyRequest&,
        DescribeIPStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeIPStrategyApisStatusOutcome ApigatewayClient::DescribeIPStrategyApisStatus(const DescribeIPStrategyApisStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStrategyApisStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStrategyApisStatusResponse rsp = DescribeIPStrategyApisStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStrategyApisStatusOutcome(rsp);
        else
            return DescribeIPStrategyApisStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStrategyApisStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeIPStrategyApisStatusAsync(const DescribeIPStrategyApisStatusRequest& request, const DescribeIPStrategyApisStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPStrategyApisStatusRequest&;
    using Resp = DescribeIPStrategyApisStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPStrategyApisStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeIPStrategyApisStatusOutcomeCallable ApigatewayClient::DescribeIPStrategyApisStatusCallable(const DescribeIPStrategyApisStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPStrategyApisStatusOutcome>>();
    DescribeIPStrategyApisStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeIPStrategyApisStatusRequest&,
        DescribeIPStrategyApisStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeIPStrategysStatusOutcome ApigatewayClient::DescribeIPStrategysStatus(const DescribeIPStrategysStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIPStrategysStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIPStrategysStatusResponse rsp = DescribeIPStrategysStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIPStrategysStatusOutcome(rsp);
        else
            return DescribeIPStrategysStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIPStrategysStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeIPStrategysStatusAsync(const DescribeIPStrategysStatusRequest& request, const DescribeIPStrategysStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIPStrategysStatusRequest&;
    using Resp = DescribeIPStrategysStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIPStrategysStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeIPStrategysStatusOutcomeCallable ApigatewayClient::DescribeIPStrategysStatusCallable(const DescribeIPStrategysStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIPStrategysStatusOutcome>>();
    DescribeIPStrategysStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeIPStrategysStatusRequest&,
        DescribeIPStrategysStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeInstancesNetworkConfigOutcome ApigatewayClient::DescribeInstancesNetworkConfig(const DescribeInstancesNetworkConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInstancesNetworkConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInstancesNetworkConfigResponse rsp = DescribeInstancesNetworkConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInstancesNetworkConfigOutcome(rsp);
        else
            return DescribeInstancesNetworkConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeInstancesNetworkConfigOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeInstancesNetworkConfigAsync(const DescribeInstancesNetworkConfigRequest& request, const DescribeInstancesNetworkConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesNetworkConfigRequest&;
    using Resp = DescribeInstancesNetworkConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstancesNetworkConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeInstancesNetworkConfigOutcomeCallable ApigatewayClient::DescribeInstancesNetworkConfigCallable(const DescribeInstancesNetworkConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesNetworkConfigOutcome>>();
    DescribeInstancesNetworkConfigAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeInstancesNetworkConfigRequest&,
        DescribeInstancesNetworkConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeLogSearchOutcome ApigatewayClient::DescribeLogSearch(const DescribeLogSearchRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogSearch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogSearchResponse rsp = DescribeLogSearchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogSearchOutcome(rsp);
        else
            return DescribeLogSearchOutcome(o.GetError());
    }
    else
    {
        return DescribeLogSearchOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeLogSearchAsync(const DescribeLogSearchRequest& request, const DescribeLogSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogSearchRequest&;
    using Resp = DescribeLogSearchResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogSearch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeLogSearchOutcomeCallable ApigatewayClient::DescribeLogSearchCallable(const DescribeLogSearchRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogSearchOutcome>>();
    DescribeLogSearchAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeLogSearchRequest&,
        DescribeLogSearchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribePluginOutcome ApigatewayClient::DescribePlugin(const DescribePluginRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginResponse rsp = DescribePluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginOutcome(rsp);
        else
            return DescribePluginOutcome(o.GetError());
    }
    else
    {
        return DescribePluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginAsync(const DescribePluginRequest& request, const DescribePluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginRequest&;
    using Resp = DescribePluginResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribePluginOutcomeCallable ApigatewayClient::DescribePluginCallable(const DescribePluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginOutcome>>();
    DescribePluginAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribePluginRequest&,
        DescribePluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribePluginApisOutcome ApigatewayClient::DescribePluginApis(const DescribePluginApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginApisResponse rsp = DescribePluginApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginApisOutcome(rsp);
        else
            return DescribePluginApisOutcome(o.GetError());
    }
    else
    {
        return DescribePluginApisOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginApisAsync(const DescribePluginApisRequest& request, const DescribePluginApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginApisRequest&;
    using Resp = DescribePluginApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePluginApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribePluginApisOutcomeCallable ApigatewayClient::DescribePluginApisCallable(const DescribePluginApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginApisOutcome>>();
    DescribePluginApisAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribePluginApisRequest&,
        DescribePluginApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribePluginsOutcome ApigatewayClient::DescribePlugins(const DescribePluginsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePlugins");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginsResponse rsp = DescribePluginsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginsOutcome(rsp);
        else
            return DescribePluginsOutcome(o.GetError());
    }
    else
    {
        return DescribePluginsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginsAsync(const DescribePluginsRequest& request, const DescribePluginsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginsRequest&;
    using Resp = DescribePluginsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePlugins", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribePluginsOutcomeCallable ApigatewayClient::DescribePluginsCallable(const DescribePluginsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginsOutcome>>();
    DescribePluginsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribePluginsRequest&,
        DescribePluginsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribePluginsByApiOutcome ApigatewayClient::DescribePluginsByApi(const DescribePluginsByApiRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginsByApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginsByApiResponse rsp = DescribePluginsByApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginsByApiOutcome(rsp);
        else
            return DescribePluginsByApiOutcome(o.GetError());
    }
    else
    {
        return DescribePluginsByApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribePluginsByApiAsync(const DescribePluginsByApiRequest& request, const DescribePluginsByApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginsByApiRequest&;
    using Resp = DescribePluginsByApiResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePluginsByApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribePluginsByApiOutcomeCallable ApigatewayClient::DescribePluginsByApiCallable(const DescribePluginsByApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginsByApiOutcome>>();
    DescribePluginsByApiAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribePluginsByApiRequest&,
        DescribePluginsByApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceOutcome ApigatewayClient::DescribeService(const DescribeServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceResponse rsp = DescribeServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceOutcome(rsp);
        else
            return DescribeServiceOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceAsync(const DescribeServiceRequest& request, const DescribeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceRequest&;
    using Resp = DescribeServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceOutcomeCallable ApigatewayClient::DescribeServiceCallable(const DescribeServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceOutcome>>();
    DescribeServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceRequest&,
        DescribeServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceEnvironmentListOutcome ApigatewayClient::DescribeServiceEnvironmentList(const DescribeServiceEnvironmentListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceEnvironmentList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceEnvironmentListResponse rsp = DescribeServiceEnvironmentListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceEnvironmentListOutcome(rsp);
        else
            return DescribeServiceEnvironmentListOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceEnvironmentListOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceEnvironmentListAsync(const DescribeServiceEnvironmentListRequest& request, const DescribeServiceEnvironmentListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceEnvironmentListRequest&;
    using Resp = DescribeServiceEnvironmentListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceEnvironmentList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceEnvironmentListOutcomeCallable ApigatewayClient::DescribeServiceEnvironmentListCallable(const DescribeServiceEnvironmentListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceEnvironmentListOutcome>>();
    DescribeServiceEnvironmentListAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceEnvironmentListRequest&,
        DescribeServiceEnvironmentListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryOutcome ApigatewayClient::DescribeServiceEnvironmentReleaseHistory(const DescribeServiceEnvironmentReleaseHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceEnvironmentReleaseHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceEnvironmentReleaseHistoryResponse rsp = DescribeServiceEnvironmentReleaseHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceEnvironmentReleaseHistoryOutcome(rsp);
        else
            return DescribeServiceEnvironmentReleaseHistoryOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceEnvironmentReleaseHistoryOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryAsync(const DescribeServiceEnvironmentReleaseHistoryRequest& request, const DescribeServiceEnvironmentReleaseHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceEnvironmentReleaseHistoryRequest&;
    using Resp = DescribeServiceEnvironmentReleaseHistoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceEnvironmentReleaseHistory", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryOutcomeCallable ApigatewayClient::DescribeServiceEnvironmentReleaseHistoryCallable(const DescribeServiceEnvironmentReleaseHistoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceEnvironmentReleaseHistoryOutcome>>();
    DescribeServiceEnvironmentReleaseHistoryAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceEnvironmentReleaseHistoryRequest&,
        DescribeServiceEnvironmentReleaseHistoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceEnvironmentStrategyOutcome ApigatewayClient::DescribeServiceEnvironmentStrategy(const DescribeServiceEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceEnvironmentStrategyResponse rsp = DescribeServiceEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceEnvironmentStrategyOutcome(rsp);
        else
            return DescribeServiceEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceEnvironmentStrategyAsync(const DescribeServiceEnvironmentStrategyRequest& request, const DescribeServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceEnvironmentStrategyRequest&;
    using Resp = DescribeServiceEnvironmentStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceEnvironmentStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceEnvironmentStrategyOutcomeCallable ApigatewayClient::DescribeServiceEnvironmentStrategyCallable(const DescribeServiceEnvironmentStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceEnvironmentStrategyOutcome>>();
    DescribeServiceEnvironmentStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceEnvironmentStrategyRequest&,
        DescribeServiceEnvironmentStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceForApiAppOutcome ApigatewayClient::DescribeServiceForApiApp(const DescribeServiceForApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceForApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceForApiAppResponse rsp = DescribeServiceForApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceForApiAppOutcome(rsp);
        else
            return DescribeServiceForApiAppOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceForApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceForApiAppAsync(const DescribeServiceForApiAppRequest& request, const DescribeServiceForApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceForApiAppRequest&;
    using Resp = DescribeServiceForApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceForApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceForApiAppOutcomeCallable ApigatewayClient::DescribeServiceForApiAppCallable(const DescribeServiceForApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceForApiAppOutcome>>();
    DescribeServiceForApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceForApiAppRequest&,
        DescribeServiceForApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceReleaseVersionOutcome ApigatewayClient::DescribeServiceReleaseVersion(const DescribeServiceReleaseVersionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceReleaseVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceReleaseVersionResponse rsp = DescribeServiceReleaseVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceReleaseVersionOutcome(rsp);
        else
            return DescribeServiceReleaseVersionOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceReleaseVersionOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceReleaseVersionAsync(const DescribeServiceReleaseVersionRequest& request, const DescribeServiceReleaseVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceReleaseVersionRequest&;
    using Resp = DescribeServiceReleaseVersionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceReleaseVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceReleaseVersionOutcomeCallable ApigatewayClient::DescribeServiceReleaseVersionCallable(const DescribeServiceReleaseVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceReleaseVersionOutcome>>();
    DescribeServiceReleaseVersionAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceReleaseVersionRequest&,
        DescribeServiceReleaseVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceSubDomainMappingsOutcome ApigatewayClient::DescribeServiceSubDomainMappings(const DescribeServiceSubDomainMappingsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceSubDomainMappings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceSubDomainMappingsResponse rsp = DescribeServiceSubDomainMappingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceSubDomainMappingsOutcome(rsp);
        else
            return DescribeServiceSubDomainMappingsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceSubDomainMappingsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceSubDomainMappingsAsync(const DescribeServiceSubDomainMappingsRequest& request, const DescribeServiceSubDomainMappingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceSubDomainMappingsRequest&;
    using Resp = DescribeServiceSubDomainMappingsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceSubDomainMappings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceSubDomainMappingsOutcomeCallable ApigatewayClient::DescribeServiceSubDomainMappingsCallable(const DescribeServiceSubDomainMappingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceSubDomainMappingsOutcome>>();
    DescribeServiceSubDomainMappingsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceSubDomainMappingsRequest&,
        DescribeServiceSubDomainMappingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceSubDomainsOutcome ApigatewayClient::DescribeServiceSubDomains(const DescribeServiceSubDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceSubDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceSubDomainsResponse rsp = DescribeServiceSubDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceSubDomainsOutcome(rsp);
        else
            return DescribeServiceSubDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceSubDomainsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceSubDomainsAsync(const DescribeServiceSubDomainsRequest& request, const DescribeServiceSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceSubDomainsRequest&;
    using Resp = DescribeServiceSubDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceSubDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceSubDomainsOutcomeCallable ApigatewayClient::DescribeServiceSubDomainsCallable(const DescribeServiceSubDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceSubDomainsOutcome>>();
    DescribeServiceSubDomainsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceSubDomainsRequest&,
        DescribeServiceSubDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServiceUsagePlanOutcome ApigatewayClient::DescribeServiceUsagePlan(const DescribeServiceUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServiceUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServiceUsagePlanResponse rsp = DescribeServiceUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServiceUsagePlanOutcome(rsp);
        else
            return DescribeServiceUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DescribeServiceUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServiceUsagePlanAsync(const DescribeServiceUsagePlanRequest& request, const DescribeServiceUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServiceUsagePlanRequest&;
    using Resp = DescribeServiceUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServiceUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServiceUsagePlanOutcomeCallable ApigatewayClient::DescribeServiceUsagePlanCallable(const DescribeServiceUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServiceUsagePlanOutcome>>();
    DescribeServiceUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServiceUsagePlanRequest&,
        DescribeServiceUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeServicesStatusOutcome ApigatewayClient::DescribeServicesStatus(const DescribeServicesStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeServicesStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeServicesStatusResponse rsp = DescribeServicesStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeServicesStatusOutcome(rsp);
        else
            return DescribeServicesStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeServicesStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeServicesStatusAsync(const DescribeServicesStatusRequest& request, const DescribeServicesStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeServicesStatusRequest&;
    using Resp = DescribeServicesStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeServicesStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeServicesStatusOutcomeCallable ApigatewayClient::DescribeServicesStatusCallable(const DescribeServicesStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeServicesStatusOutcome>>();
    DescribeServicesStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeServicesStatusRequest&,
        DescribeServicesStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeUpstreamBindApisOutcome ApigatewayClient::DescribeUpstreamBindApis(const DescribeUpstreamBindApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreamBindApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamBindApisResponse rsp = DescribeUpstreamBindApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamBindApisOutcome(rsp);
        else
            return DescribeUpstreamBindApisOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamBindApisOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUpstreamBindApisAsync(const DescribeUpstreamBindApisRequest& request, const DescribeUpstreamBindApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpstreamBindApisRequest&;
    using Resp = DescribeUpstreamBindApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpstreamBindApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeUpstreamBindApisOutcomeCallable ApigatewayClient::DescribeUpstreamBindApisCallable(const DescribeUpstreamBindApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpstreamBindApisOutcome>>();
    DescribeUpstreamBindApisAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeUpstreamBindApisRequest&,
        DescribeUpstreamBindApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeUpstreamsOutcome ApigatewayClient::DescribeUpstreams(const DescribeUpstreamsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUpstreams");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUpstreamsResponse rsp = DescribeUpstreamsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUpstreamsOutcome(rsp);
        else
            return DescribeUpstreamsOutcome(o.GetError());
    }
    else
    {
        return DescribeUpstreamsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUpstreamsAsync(const DescribeUpstreamsRequest& request, const DescribeUpstreamsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUpstreamsRequest&;
    using Resp = DescribeUpstreamsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUpstreams", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeUpstreamsOutcomeCallable ApigatewayClient::DescribeUpstreamsCallable(const DescribeUpstreamsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUpstreamsOutcome>>();
    DescribeUpstreamsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeUpstreamsRequest&,
        DescribeUpstreamsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeUsagePlanOutcome ApigatewayClient::DescribeUsagePlan(const DescribeUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlanResponse rsp = DescribeUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlanOutcome(rsp);
        else
            return DescribeUsagePlanOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlanAsync(const DescribeUsagePlanRequest& request, const DescribeUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsagePlanRequest&;
    using Resp = DescribeUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeUsagePlanOutcomeCallable ApigatewayClient::DescribeUsagePlanCallable(const DescribeUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsagePlanOutcome>>();
    DescribeUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeUsagePlanRequest&,
        DescribeUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeUsagePlanEnvironmentsOutcome ApigatewayClient::DescribeUsagePlanEnvironments(const DescribeUsagePlanEnvironmentsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlanEnvironments");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlanEnvironmentsResponse rsp = DescribeUsagePlanEnvironmentsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlanEnvironmentsOutcome(rsp);
        else
            return DescribeUsagePlanEnvironmentsOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlanEnvironmentsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlanEnvironmentsAsync(const DescribeUsagePlanEnvironmentsRequest& request, const DescribeUsagePlanEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsagePlanEnvironmentsRequest&;
    using Resp = DescribeUsagePlanEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsagePlanEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeUsagePlanEnvironmentsOutcomeCallable ApigatewayClient::DescribeUsagePlanEnvironmentsCallable(const DescribeUsagePlanEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsagePlanEnvironmentsOutcome>>();
    DescribeUsagePlanEnvironmentsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeUsagePlanEnvironmentsRequest&,
        DescribeUsagePlanEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeUsagePlanSecretIdsOutcome ApigatewayClient::DescribeUsagePlanSecretIds(const DescribeUsagePlanSecretIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlanSecretIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlanSecretIdsResponse rsp = DescribeUsagePlanSecretIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlanSecretIdsOutcome(rsp);
        else
            return DescribeUsagePlanSecretIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlanSecretIdsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlanSecretIdsAsync(const DescribeUsagePlanSecretIdsRequest& request, const DescribeUsagePlanSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsagePlanSecretIdsRequest&;
    using Resp = DescribeUsagePlanSecretIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsagePlanSecretIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeUsagePlanSecretIdsOutcomeCallable ApigatewayClient::DescribeUsagePlanSecretIdsCallable(const DescribeUsagePlanSecretIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsagePlanSecretIdsOutcome>>();
    DescribeUsagePlanSecretIdsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeUsagePlanSecretIdsRequest&,
        DescribeUsagePlanSecretIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DescribeUsagePlansStatusOutcome ApigatewayClient::DescribeUsagePlansStatus(const DescribeUsagePlansStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsagePlansStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsagePlansStatusResponse rsp = DescribeUsagePlansStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsagePlansStatusOutcome(rsp);
        else
            return DescribeUsagePlansStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeUsagePlansStatusOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DescribeUsagePlansStatusAsync(const DescribeUsagePlansStatusRequest& request, const DescribeUsagePlansStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsagePlansStatusRequest&;
    using Resp = DescribeUsagePlansStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsagePlansStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DescribeUsagePlansStatusOutcomeCallable ApigatewayClient::DescribeUsagePlansStatusCallable(const DescribeUsagePlansStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsagePlansStatusOutcome>>();
    DescribeUsagePlansStatusAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DescribeUsagePlansStatusRequest&,
        DescribeUsagePlansStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DetachPluginOutcome ApigatewayClient::DetachPlugin(const DetachPluginRequest &request)
{
    auto outcome = MakeRequest(request, "DetachPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DetachPluginResponse rsp = DetachPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DetachPluginOutcome(rsp);
        else
            return DetachPluginOutcome(o.GetError());
    }
    else
    {
        return DetachPluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DetachPluginAsync(const DetachPluginRequest& request, const DetachPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DetachPluginRequest&;
    using Resp = DetachPluginResponse;

    DoRequestAsync<Req, Resp>(
        "DetachPlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DetachPluginOutcomeCallable ApigatewayClient::DetachPluginCallable(const DetachPluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DetachPluginOutcome>>();
    DetachPluginAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DetachPluginRequest&,
        DetachPluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::DisableApiKeyOutcome ApigatewayClient::DisableApiKey(const DisableApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "DisableApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableApiKeyResponse rsp = DisableApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableApiKeyOutcome(rsp);
        else
            return DisableApiKeyOutcome(o.GetError());
    }
    else
    {
        return DisableApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::DisableApiKeyAsync(const DisableApiKeyRequest& request, const DisableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableApiKeyRequest&;
    using Resp = DisableApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "DisableApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::DisableApiKeyOutcomeCallable ApigatewayClient::DisableApiKeyCallable(const DisableApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableApiKeyOutcome>>();
    DisableApiKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const DisableApiKeyRequest&,
        DisableApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::EnableApiKeyOutcome ApigatewayClient::EnableApiKey(const EnableApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "EnableApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableApiKeyResponse rsp = EnableApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableApiKeyOutcome(rsp);
        else
            return EnableApiKeyOutcome(o.GetError());
    }
    else
    {
        return EnableApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::EnableApiKeyAsync(const EnableApiKeyRequest& request, const EnableApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableApiKeyRequest&;
    using Resp = EnableApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "EnableApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::EnableApiKeyOutcomeCallable ApigatewayClient::EnableApiKeyCallable(const EnableApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableApiKeyOutcome>>();
    EnableApiKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const EnableApiKeyRequest&,
        EnableApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ImportOpenApiOutcome ApigatewayClient::ImportOpenApi(const ImportOpenApiRequest &request)
{
    auto outcome = MakeRequest(request, "ImportOpenApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportOpenApiResponse rsp = ImportOpenApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportOpenApiOutcome(rsp);
        else
            return ImportOpenApiOutcome(o.GetError());
    }
    else
    {
        return ImportOpenApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ImportOpenApiAsync(const ImportOpenApiRequest& request, const ImportOpenApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ImportOpenApiRequest&;
    using Resp = ImportOpenApiResponse;

    DoRequestAsync<Req, Resp>(
        "ImportOpenApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ImportOpenApiOutcomeCallable ApigatewayClient::ImportOpenApiCallable(const ImportOpenApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<ImportOpenApiOutcome>>();
    ImportOpenApiAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ImportOpenApiRequest&,
        ImportOpenApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyAPIDocOutcome ApigatewayClient::ModifyAPIDoc(const ModifyAPIDocRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAPIDoc");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAPIDocResponse rsp = ModifyAPIDocResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAPIDocOutcome(rsp);
        else
            return ModifyAPIDocOutcome(o.GetError());
    }
    else
    {
        return ModifyAPIDocOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyAPIDocAsync(const ModifyAPIDocRequest& request, const ModifyAPIDocAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAPIDocRequest&;
    using Resp = ModifyAPIDocResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAPIDoc", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyAPIDocOutcomeCallable ApigatewayClient::ModifyAPIDocCallable(const ModifyAPIDocRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAPIDocOutcome>>();
    ModifyAPIDocAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyAPIDocRequest&,
        ModifyAPIDocOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyApiOutcome ApigatewayClient::ModifyApi(const ModifyApiRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiResponse rsp = ModifyApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiOutcome(rsp);
        else
            return ModifyApiOutcome(o.GetError());
    }
    else
    {
        return ModifyApiOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiAsync(const ModifyApiRequest& request, const ModifyApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiRequest&;
    using Resp = ModifyApiResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyApiOutcomeCallable ApigatewayClient::ModifyApiCallable(const ModifyApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiOutcome>>();
    ModifyApiAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyApiRequest&,
        ModifyApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyApiAppOutcome ApigatewayClient::ModifyApiApp(const ModifyApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiAppResponse rsp = ModifyApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiAppOutcome(rsp);
        else
            return ModifyApiAppOutcome(o.GetError());
    }
    else
    {
        return ModifyApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiAppAsync(const ModifyApiAppRequest& request, const ModifyApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiAppRequest&;
    using Resp = ModifyApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyApiAppOutcomeCallable ApigatewayClient::ModifyApiAppCallable(const ModifyApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiAppOutcome>>();
    ModifyApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyApiAppRequest&,
        ModifyApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyApiEnvironmentStrategyOutcome ApigatewayClient::ModifyApiEnvironmentStrategy(const ModifyApiEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiEnvironmentStrategyResponse rsp = ModifyApiEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiEnvironmentStrategyOutcome(rsp);
        else
            return ModifyApiEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyApiEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiEnvironmentStrategyAsync(const ModifyApiEnvironmentStrategyRequest& request, const ModifyApiEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiEnvironmentStrategyRequest&;
    using Resp = ModifyApiEnvironmentStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApiEnvironmentStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyApiEnvironmentStrategyOutcomeCallable ApigatewayClient::ModifyApiEnvironmentStrategyCallable(const ModifyApiEnvironmentStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiEnvironmentStrategyOutcome>>();
    ModifyApiEnvironmentStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyApiEnvironmentStrategyRequest&,
        ModifyApiEnvironmentStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyApiIncrementOutcome ApigatewayClient::ModifyApiIncrement(const ModifyApiIncrementRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApiIncrement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApiIncrementResponse rsp = ModifyApiIncrementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApiIncrementOutcome(rsp);
        else
            return ModifyApiIncrementOutcome(o.GetError());
    }
    else
    {
        return ModifyApiIncrementOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyApiIncrementAsync(const ModifyApiIncrementRequest& request, const ModifyApiIncrementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApiIncrementRequest&;
    using Resp = ModifyApiIncrementResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApiIncrement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyApiIncrementOutcomeCallable ApigatewayClient::ModifyApiIncrementCallable(const ModifyApiIncrementRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApiIncrementOutcome>>();
    ModifyApiIncrementAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyApiIncrementRequest&,
        ModifyApiIncrementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyExclusiveInstanceOutcome ApigatewayClient::ModifyExclusiveInstance(const ModifyExclusiveInstanceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyExclusiveInstance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyExclusiveInstanceResponse rsp = ModifyExclusiveInstanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyExclusiveInstanceOutcome(rsp);
        else
            return ModifyExclusiveInstanceOutcome(o.GetError());
    }
    else
    {
        return ModifyExclusiveInstanceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyExclusiveInstanceAsync(const ModifyExclusiveInstanceRequest& request, const ModifyExclusiveInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyExclusiveInstanceRequest&;
    using Resp = ModifyExclusiveInstanceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyExclusiveInstance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyExclusiveInstanceOutcomeCallable ApigatewayClient::ModifyExclusiveInstanceCallable(const ModifyExclusiveInstanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyExclusiveInstanceOutcome>>();
    ModifyExclusiveInstanceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyExclusiveInstanceRequest&,
        ModifyExclusiveInstanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyIPStrategyOutcome ApigatewayClient::ModifyIPStrategy(const ModifyIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIPStrategyResponse rsp = ModifyIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIPStrategyOutcome(rsp);
        else
            return ModifyIPStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyIPStrategyAsync(const ModifyIPStrategyRequest& request, const ModifyIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIPStrategyRequest&;
    using Resp = ModifyIPStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIPStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyIPStrategyOutcomeCallable ApigatewayClient::ModifyIPStrategyCallable(const ModifyIPStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIPStrategyOutcome>>();
    ModifyIPStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyIPStrategyRequest&,
        ModifyIPStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyPluginOutcome ApigatewayClient::ModifyPlugin(const ModifyPluginRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPluginResponse rsp = ModifyPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPluginOutcome(rsp);
        else
            return ModifyPluginOutcome(o.GetError());
    }
    else
    {
        return ModifyPluginOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyPluginAsync(const ModifyPluginRequest& request, const ModifyPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPluginRequest&;
    using Resp = ModifyPluginResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyPluginOutcomeCallable ApigatewayClient::ModifyPluginCallable(const ModifyPluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPluginOutcome>>();
    ModifyPluginAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyPluginRequest&,
        ModifyPluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyServiceOutcome ApigatewayClient::ModifyService(const ModifyServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceResponse rsp = ModifyServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceOutcome(rsp);
        else
            return ModifyServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyServiceAsync(const ModifyServiceRequest& request, const ModifyServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServiceRequest&;
    using Resp = ModifyServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyServiceOutcomeCallable ApigatewayClient::ModifyServiceCallable(const ModifyServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServiceOutcome>>();
    ModifyServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyServiceRequest&,
        ModifyServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyServiceEnvironmentStrategyOutcome ApigatewayClient::ModifyServiceEnvironmentStrategy(const ModifyServiceEnvironmentStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyServiceEnvironmentStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyServiceEnvironmentStrategyResponse rsp = ModifyServiceEnvironmentStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyServiceEnvironmentStrategyOutcome(rsp);
        else
            return ModifyServiceEnvironmentStrategyOutcome(o.GetError());
    }
    else
    {
        return ModifyServiceEnvironmentStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyServiceEnvironmentStrategyAsync(const ModifyServiceEnvironmentStrategyRequest& request, const ModifyServiceEnvironmentStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyServiceEnvironmentStrategyRequest&;
    using Resp = ModifyServiceEnvironmentStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyServiceEnvironmentStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyServiceEnvironmentStrategyOutcomeCallable ApigatewayClient::ModifyServiceEnvironmentStrategyCallable(const ModifyServiceEnvironmentStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyServiceEnvironmentStrategyOutcome>>();
    ModifyServiceEnvironmentStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyServiceEnvironmentStrategyRequest&,
        ModifyServiceEnvironmentStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifySubDomainOutcome ApigatewayClient::ModifySubDomain(const ModifySubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubDomainResponse rsp = ModifySubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubDomainOutcome(rsp);
        else
            return ModifySubDomainOutcome(o.GetError());
    }
    else
    {
        return ModifySubDomainOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifySubDomainAsync(const ModifySubDomainRequest& request, const ModifySubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifySubDomainRequest&;
    using Resp = ModifySubDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ModifySubDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifySubDomainOutcomeCallable ApigatewayClient::ModifySubDomainCallable(const ModifySubDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifySubDomainOutcome>>();
    ModifySubDomainAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifySubDomainRequest&,
        ModifySubDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyUpstreamOutcome ApigatewayClient::ModifyUpstream(const ModifyUpstreamRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUpstream");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUpstreamResponse rsp = ModifyUpstreamResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUpstreamOutcome(rsp);
        else
            return ModifyUpstreamOutcome(o.GetError());
    }
    else
    {
        return ModifyUpstreamOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyUpstreamAsync(const ModifyUpstreamRequest& request, const ModifyUpstreamAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUpstreamRequest&;
    using Resp = ModifyUpstreamResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUpstream", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyUpstreamOutcomeCallable ApigatewayClient::ModifyUpstreamCallable(const ModifyUpstreamRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUpstreamOutcome>>();
    ModifyUpstreamAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyUpstreamRequest&,
        ModifyUpstreamOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ModifyUsagePlanOutcome ApigatewayClient::ModifyUsagePlan(const ModifyUsagePlanRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUsagePlan");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUsagePlanResponse rsp = ModifyUsagePlanResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUsagePlanOutcome(rsp);
        else
            return ModifyUsagePlanOutcome(o.GetError());
    }
    else
    {
        return ModifyUsagePlanOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ModifyUsagePlanAsync(const ModifyUsagePlanRequest& request, const ModifyUsagePlanAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUsagePlanRequest&;
    using Resp = ModifyUsagePlanResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUsagePlan", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ModifyUsagePlanOutcomeCallable ApigatewayClient::ModifyUsagePlanCallable(const ModifyUsagePlanRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUsagePlanOutcome>>();
    ModifyUsagePlanAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ModifyUsagePlanRequest&,
        ModifyUsagePlanOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ReleaseServiceOutcome ApigatewayClient::ReleaseService(const ReleaseServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseServiceResponse rsp = ReleaseServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseServiceOutcome(rsp);
        else
            return ReleaseServiceOutcome(o.GetError());
    }
    else
    {
        return ReleaseServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ReleaseServiceAsync(const ReleaseServiceRequest& request, const ReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseServiceRequest&;
    using Resp = ReleaseServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ReleaseServiceOutcomeCallable ApigatewayClient::ReleaseServiceCallable(const ReleaseServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseServiceOutcome>>();
    ReleaseServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ReleaseServiceRequest&,
        ReleaseServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::ResetAPIDocPasswordOutcome ApigatewayClient::ResetAPIDocPassword(const ResetAPIDocPasswordRequest &request)
{
    auto outcome = MakeRequest(request, "ResetAPIDocPassword");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResetAPIDocPasswordResponse rsp = ResetAPIDocPasswordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResetAPIDocPasswordOutcome(rsp);
        else
            return ResetAPIDocPasswordOutcome(o.GetError());
    }
    else
    {
        return ResetAPIDocPasswordOutcome(outcome.GetError());
    }
}

void ApigatewayClient::ResetAPIDocPasswordAsync(const ResetAPIDocPasswordRequest& request, const ResetAPIDocPasswordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResetAPIDocPasswordRequest&;
    using Resp = ResetAPIDocPasswordResponse;

    DoRequestAsync<Req, Resp>(
        "ResetAPIDocPassword", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::ResetAPIDocPasswordOutcomeCallable ApigatewayClient::ResetAPIDocPasswordCallable(const ResetAPIDocPasswordRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResetAPIDocPasswordOutcome>>();
    ResetAPIDocPasswordAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const ResetAPIDocPasswordRequest&,
        ResetAPIDocPasswordOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UnBindEnvironmentOutcome ApigatewayClient::UnBindEnvironment(const UnBindEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindEnvironmentResponse rsp = UnBindEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindEnvironmentOutcome(rsp);
        else
            return UnBindEnvironmentOutcome(o.GetError());
    }
    else
    {
        return UnBindEnvironmentOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindEnvironmentAsync(const UnBindEnvironmentRequest& request, const UnBindEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindEnvironmentRequest&;
    using Resp = UnBindEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UnBindEnvironmentOutcomeCallable ApigatewayClient::UnBindEnvironmentCallable(const UnBindEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindEnvironmentOutcome>>();
    UnBindEnvironmentAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UnBindEnvironmentRequest&,
        UnBindEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UnBindIPStrategyOutcome ApigatewayClient::UnBindIPStrategy(const UnBindIPStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindIPStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindIPStrategyResponse rsp = UnBindIPStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindIPStrategyOutcome(rsp);
        else
            return UnBindIPStrategyOutcome(o.GetError());
    }
    else
    {
        return UnBindIPStrategyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindIPStrategyAsync(const UnBindIPStrategyRequest& request, const UnBindIPStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindIPStrategyRequest&;
    using Resp = UnBindIPStrategyResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindIPStrategy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UnBindIPStrategyOutcomeCallable ApigatewayClient::UnBindIPStrategyCallable(const UnBindIPStrategyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindIPStrategyOutcome>>();
    UnBindIPStrategyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UnBindIPStrategyRequest&,
        UnBindIPStrategyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UnBindSecretIdsOutcome ApigatewayClient::UnBindSecretIds(const UnBindSecretIdsRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindSecretIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindSecretIdsResponse rsp = UnBindSecretIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindSecretIdsOutcome(rsp);
        else
            return UnBindSecretIdsOutcome(o.GetError());
    }
    else
    {
        return UnBindSecretIdsOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindSecretIdsAsync(const UnBindSecretIdsRequest& request, const UnBindSecretIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindSecretIdsRequest&;
    using Resp = UnBindSecretIdsResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindSecretIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UnBindSecretIdsOutcomeCallable ApigatewayClient::UnBindSecretIdsCallable(const UnBindSecretIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindSecretIdsOutcome>>();
    UnBindSecretIdsAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UnBindSecretIdsRequest&,
        UnBindSecretIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UnBindSubDomainOutcome ApigatewayClient::UnBindSubDomain(const UnBindSubDomainRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindSubDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindSubDomainResponse rsp = UnBindSubDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindSubDomainOutcome(rsp);
        else
            return UnBindSubDomainOutcome(o.GetError());
    }
    else
    {
        return UnBindSubDomainOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnBindSubDomainAsync(const UnBindSubDomainRequest& request, const UnBindSubDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindSubDomainRequest&;
    using Resp = UnBindSubDomainResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindSubDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UnBindSubDomainOutcomeCallable ApigatewayClient::UnBindSubDomainCallable(const UnBindSubDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindSubDomainOutcome>>();
    UnBindSubDomainAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UnBindSubDomainRequest&,
        UnBindSubDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UnReleaseServiceOutcome ApigatewayClient::UnReleaseService(const UnReleaseServiceRequest &request)
{
    auto outcome = MakeRequest(request, "UnReleaseService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnReleaseServiceResponse rsp = UnReleaseServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnReleaseServiceOutcome(rsp);
        else
            return UnReleaseServiceOutcome(o.GetError());
    }
    else
    {
        return UnReleaseServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnReleaseServiceAsync(const UnReleaseServiceRequest& request, const UnReleaseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnReleaseServiceRequest&;
    using Resp = UnReleaseServiceResponse;

    DoRequestAsync<Req, Resp>(
        "UnReleaseService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UnReleaseServiceOutcomeCallable ApigatewayClient::UnReleaseServiceCallable(const UnReleaseServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnReleaseServiceOutcome>>();
    UnReleaseServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UnReleaseServiceRequest&,
        UnReleaseServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UnbindApiAppOutcome ApigatewayClient::UnbindApiApp(const UnbindApiAppRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindApiApp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindApiAppResponse rsp = UnbindApiAppResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindApiAppOutcome(rsp);
        else
            return UnbindApiAppOutcome(o.GetError());
    }
    else
    {
        return UnbindApiAppOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UnbindApiAppAsync(const UnbindApiAppRequest& request, const UnbindApiAppAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindApiAppRequest&;
    using Resp = UnbindApiAppResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindApiApp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UnbindApiAppOutcomeCallable ApigatewayClient::UnbindApiAppCallable(const UnbindApiAppRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindApiAppOutcome>>();
    UnbindApiAppAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UnbindApiAppRequest&,
        UnbindApiAppOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UpdateApiAppKeyOutcome ApigatewayClient::UpdateApiAppKey(const UpdateApiAppKeyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiAppKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiAppKeyResponse rsp = UpdateApiAppKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiAppKeyOutcome(rsp);
        else
            return UpdateApiAppKeyOutcome(o.GetError());
    }
    else
    {
        return UpdateApiAppKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UpdateApiAppKeyAsync(const UpdateApiAppKeyRequest& request, const UpdateApiAppKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiAppKeyRequest&;
    using Resp = UpdateApiAppKeyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiAppKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UpdateApiAppKeyOutcomeCallable ApigatewayClient::UpdateApiAppKeyCallable(const UpdateApiAppKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiAppKeyOutcome>>();
    UpdateApiAppKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UpdateApiAppKeyRequest&,
        UpdateApiAppKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UpdateApiKeyOutcome ApigatewayClient::UpdateApiKey(const UpdateApiKeyRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiKeyResponse rsp = UpdateApiKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiKeyOutcome(rsp);
        else
            return UpdateApiKeyOutcome(o.GetError());
    }
    else
    {
        return UpdateApiKeyOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UpdateApiKeyAsync(const UpdateApiKeyRequest& request, const UpdateApiKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiKeyRequest&;
    using Resp = UpdateApiKeyResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UpdateApiKeyOutcomeCallable ApigatewayClient::UpdateApiKeyCallable(const UpdateApiKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiKeyOutcome>>();
    UpdateApiKeyAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UpdateApiKeyRequest&,
        UpdateApiKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

ApigatewayClient::UpdateServiceOutcome ApigatewayClient::UpdateService(const UpdateServiceRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateServiceResponse rsp = UpdateServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateServiceOutcome(rsp);
        else
            return UpdateServiceOutcome(o.GetError());
    }
    else
    {
        return UpdateServiceOutcome(outcome.GetError());
    }
}

void ApigatewayClient::UpdateServiceAsync(const UpdateServiceRequest& request, const UpdateServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateServiceRequest&;
    using Resp = UpdateServiceResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

ApigatewayClient::UpdateServiceOutcomeCallable ApigatewayClient::UpdateServiceCallable(const UpdateServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateServiceOutcome>>();
    UpdateServiceAsync(
    request,
    [prom](
        const ApigatewayClient*,
        const UpdateServiceRequest&,
        UpdateServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

