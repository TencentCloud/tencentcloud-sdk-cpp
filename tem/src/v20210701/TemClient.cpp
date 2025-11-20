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

#include <tencentcloud/tem/v20210701/TemClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tem::V20210701;
using namespace TencentCloud::Tem::V20210701::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-01";
    const string ENDPOINT = "tem.tencentcloudapi.com";
}

TemClient::TemClient(const Credential &credential, const string &region) :
    TemClient(credential, region, ClientProfile())
{
}

TemClient::TemClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TemClient::CreateApplicationOutcome TemClient::CreateApplication(const CreateApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationResponse rsp = CreateApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationOutcome(rsp);
        else
            return CreateApplicationOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationOutcome(outcome.GetError());
    }
}

void TemClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationRequest&;
    using Resp = CreateApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateApplicationOutcomeCallable TemClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateApplicationAutoscalerOutcome TemClient::CreateApplicationAutoscaler(const CreateApplicationAutoscalerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationAutoscaler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationAutoscalerResponse rsp = CreateApplicationAutoscalerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationAutoscalerOutcome(rsp);
        else
            return CreateApplicationAutoscalerOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationAutoscalerOutcome(outcome.GetError());
    }
}

void TemClient::CreateApplicationAutoscalerAsync(const CreateApplicationAutoscalerRequest& request, const CreateApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationAutoscalerRequest&;
    using Resp = CreateApplicationAutoscalerResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationAutoscaler", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateApplicationAutoscalerOutcomeCallable TemClient::CreateApplicationAutoscalerCallable(const CreateApplicationAutoscalerRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationAutoscalerOutcome>>();
    CreateApplicationAutoscalerAsync(
    request,
    [prom](
        const TemClient*,
        const CreateApplicationAutoscalerRequest&,
        CreateApplicationAutoscalerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateApplicationServiceOutcome TemClient::CreateApplicationService(const CreateApplicationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationServiceResponse rsp = CreateApplicationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationServiceOutcome(rsp);
        else
            return CreateApplicationServiceOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationServiceOutcome(outcome.GetError());
    }
}

void TemClient::CreateApplicationServiceAsync(const CreateApplicationServiceRequest& request, const CreateApplicationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApplicationServiceRequest&;
    using Resp = CreateApplicationServiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApplicationService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateApplicationServiceOutcomeCallable TemClient::CreateApplicationServiceCallable(const CreateApplicationServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationServiceOutcome>>();
    CreateApplicationServiceAsync(
    request,
    [prom](
        const TemClient*,
        const CreateApplicationServiceRequest&,
        CreateApplicationServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateConfigDataOutcome TemClient::CreateConfigData(const CreateConfigDataRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigDataResponse rsp = CreateConfigDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigDataOutcome(rsp);
        else
            return CreateConfigDataOutcome(o.GetError());
    }
    else
    {
        return CreateConfigDataOutcome(outcome.GetError());
    }
}

void TemClient::CreateConfigDataAsync(const CreateConfigDataRequest& request, const CreateConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigDataRequest&;
    using Resp = CreateConfigDataResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateConfigDataOutcomeCallable TemClient::CreateConfigDataCallable(const CreateConfigDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigDataOutcome>>();
    CreateConfigDataAsync(
    request,
    [prom](
        const TemClient*,
        const CreateConfigDataRequest&,
        CreateConfigDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateCosTokenOutcome TemClient::CreateCosToken(const CreateCosTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCosToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCosTokenResponse rsp = CreateCosTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCosTokenOutcome(rsp);
        else
            return CreateCosTokenOutcome(o.GetError());
    }
    else
    {
        return CreateCosTokenOutcome(outcome.GetError());
    }
}

void TemClient::CreateCosTokenAsync(const CreateCosTokenRequest& request, const CreateCosTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCosTokenRequest&;
    using Resp = CreateCosTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCosToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateCosTokenOutcomeCallable TemClient::CreateCosTokenCallable(const CreateCosTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCosTokenOutcome>>();
    CreateCosTokenAsync(
    request,
    [prom](
        const TemClient*,
        const CreateCosTokenRequest&,
        CreateCosTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateEnvironmentOutcome TemClient::CreateEnvironment(const CreateEnvironmentRequest &request)
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

void TemClient::CreateEnvironmentAsync(const CreateEnvironmentRequest& request, const CreateEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEnvironmentRequest&;
    using Resp = CreateEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateEnvironmentOutcomeCallable TemClient::CreateEnvironmentCallable(const CreateEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEnvironmentOutcome>>();
    CreateEnvironmentAsync(
    request,
    [prom](
        const TemClient*,
        const CreateEnvironmentRequest&,
        CreateEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateLogConfigOutcome TemClient::CreateLogConfig(const CreateLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLogConfigResponse rsp = CreateLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLogConfigOutcome(rsp);
        else
            return CreateLogConfigOutcome(o.GetError());
    }
    else
    {
        return CreateLogConfigOutcome(outcome.GetError());
    }
}

void TemClient::CreateLogConfigAsync(const CreateLogConfigRequest& request, const CreateLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLogConfigRequest&;
    using Resp = CreateLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateLogConfigOutcomeCallable TemClient::CreateLogConfigCallable(const CreateLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLogConfigOutcome>>();
    CreateLogConfigAsync(
    request,
    [prom](
        const TemClient*,
        const CreateLogConfigRequest&,
        CreateLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::CreateResourceOutcome TemClient::CreateResource(const CreateResourceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateResourceResponse rsp = CreateResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateResourceOutcome(rsp);
        else
            return CreateResourceOutcome(o.GetError());
    }
    else
    {
        return CreateResourceOutcome(outcome.GetError());
    }
}

void TemClient::CreateResourceAsync(const CreateResourceRequest& request, const CreateResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateResourceRequest&;
    using Resp = CreateResourceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::CreateResourceOutcomeCallable TemClient::CreateResourceCallable(const CreateResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateResourceOutcome>>();
    CreateResourceAsync(
    request,
    [prom](
        const TemClient*,
        const CreateResourceRequest&,
        CreateResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DeleteApplicationOutcome TemClient::DeleteApplication(const DeleteApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationResponse rsp = DeleteApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationOutcome(rsp);
        else
            return DeleteApplicationOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationOutcome(outcome.GetError());
    }
}

void TemClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationRequest&;
    using Resp = DeleteApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DeleteApplicationOutcomeCallable TemClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationOutcome>>();
    DeleteApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const DeleteApplicationRequest&,
        DeleteApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DeleteApplicationAutoscalerOutcome TemClient::DeleteApplicationAutoscaler(const DeleteApplicationAutoscalerRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationAutoscaler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationAutoscalerResponse rsp = DeleteApplicationAutoscalerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationAutoscalerOutcome(rsp);
        else
            return DeleteApplicationAutoscalerOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationAutoscalerOutcome(outcome.GetError());
    }
}

void TemClient::DeleteApplicationAutoscalerAsync(const DeleteApplicationAutoscalerRequest& request, const DeleteApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationAutoscalerRequest&;
    using Resp = DeleteApplicationAutoscalerResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationAutoscaler", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DeleteApplicationAutoscalerOutcomeCallable TemClient::DeleteApplicationAutoscalerCallable(const DeleteApplicationAutoscalerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationAutoscalerOutcome>>();
    DeleteApplicationAutoscalerAsync(
    request,
    [prom](
        const TemClient*,
        const DeleteApplicationAutoscalerRequest&,
        DeleteApplicationAutoscalerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DeleteApplicationServiceOutcome TemClient::DeleteApplicationService(const DeleteApplicationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationServiceResponse rsp = DeleteApplicationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationServiceOutcome(rsp);
        else
            return DeleteApplicationServiceOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationServiceOutcome(outcome.GetError());
    }
}

void TemClient::DeleteApplicationServiceAsync(const DeleteApplicationServiceRequest& request, const DeleteApplicationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApplicationServiceRequest&;
    using Resp = DeleteApplicationServiceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApplicationService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DeleteApplicationServiceOutcomeCallable TemClient::DeleteApplicationServiceCallable(const DeleteApplicationServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationServiceOutcome>>();
    DeleteApplicationServiceAsync(
    request,
    [prom](
        const TemClient*,
        const DeleteApplicationServiceRequest&,
        DeleteApplicationServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DeleteIngressOutcome TemClient::DeleteIngress(const DeleteIngressRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteIngressResponse rsp = DeleteIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteIngressOutcome(rsp);
        else
            return DeleteIngressOutcome(o.GetError());
    }
    else
    {
        return DeleteIngressOutcome(outcome.GetError());
    }
}

void TemClient::DeleteIngressAsync(const DeleteIngressRequest& request, const DeleteIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteIngressRequest&;
    using Resp = DeleteIngressResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteIngress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DeleteIngressOutcomeCallable TemClient::DeleteIngressCallable(const DeleteIngressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteIngressOutcome>>();
    DeleteIngressAsync(
    request,
    [prom](
        const TemClient*,
        const DeleteIngressRequest&,
        DeleteIngressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DeployApplicationOutcome TemClient::DeployApplication(const DeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployApplicationResponse rsp = DeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployApplicationOutcome(rsp);
        else
            return DeployApplicationOutcome(o.GetError());
    }
    else
    {
        return DeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::DeployApplicationAsync(const DeployApplicationRequest& request, const DeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployApplicationRequest&;
    using Resp = DeployApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeployApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DeployApplicationOutcomeCallable TemClient::DeployApplicationCallable(const DeployApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployApplicationOutcome>>();
    DeployApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const DeployApplicationRequest&,
        DeployApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeApplicationAutoscalerListOutcome TemClient::DescribeApplicationAutoscalerList(const DescribeApplicationAutoscalerListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationAutoscalerList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationAutoscalerListResponse rsp = DescribeApplicationAutoscalerListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationAutoscalerListOutcome(rsp);
        else
            return DescribeApplicationAutoscalerListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationAutoscalerListOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationAutoscalerListAsync(const DescribeApplicationAutoscalerListRequest& request, const DescribeApplicationAutoscalerListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationAutoscalerListRequest&;
    using Resp = DescribeApplicationAutoscalerListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationAutoscalerList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeApplicationAutoscalerListOutcomeCallable TemClient::DescribeApplicationAutoscalerListCallable(const DescribeApplicationAutoscalerListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationAutoscalerListOutcome>>();
    DescribeApplicationAutoscalerListAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeApplicationAutoscalerListRequest&,
        DescribeApplicationAutoscalerListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeApplicationInfoOutcome TemClient::DescribeApplicationInfo(const DescribeApplicationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationInfoResponse rsp = DescribeApplicationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationInfoOutcome(rsp);
        else
            return DescribeApplicationInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationInfoOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationInfoAsync(const DescribeApplicationInfoRequest& request, const DescribeApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationInfoRequest&;
    using Resp = DescribeApplicationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeApplicationInfoOutcomeCallable TemClient::DescribeApplicationInfoCallable(const DescribeApplicationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationInfoOutcome>>();
    DescribeApplicationInfoAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeApplicationInfoRequest&,
        DescribeApplicationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeApplicationPodsOutcome TemClient::DescribeApplicationPods(const DescribeApplicationPodsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationPods");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationPodsResponse rsp = DescribeApplicationPodsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationPodsOutcome(rsp);
        else
            return DescribeApplicationPodsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationPodsOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationPodsAsync(const DescribeApplicationPodsRequest& request, const DescribeApplicationPodsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationPodsRequest&;
    using Resp = DescribeApplicationPodsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationPods", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeApplicationPodsOutcomeCallable TemClient::DescribeApplicationPodsCallable(const DescribeApplicationPodsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationPodsOutcome>>();
    DescribeApplicationPodsAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeApplicationPodsRequest&,
        DescribeApplicationPodsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeApplicationServiceListOutcome TemClient::DescribeApplicationServiceList(const DescribeApplicationServiceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationServiceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationServiceListResponse rsp = DescribeApplicationServiceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationServiceListOutcome(rsp);
        else
            return DescribeApplicationServiceListOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationServiceListOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationServiceListAsync(const DescribeApplicationServiceListRequest& request, const DescribeApplicationServiceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationServiceListRequest&;
    using Resp = DescribeApplicationServiceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationServiceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeApplicationServiceListOutcomeCallable TemClient::DescribeApplicationServiceListCallable(const DescribeApplicationServiceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationServiceListOutcome>>();
    DescribeApplicationServiceListAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeApplicationServiceListRequest&,
        DescribeApplicationServiceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeApplicationsOutcome TemClient::DescribeApplications(const DescribeApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsResponse rsp = DescribeApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsOutcome(rsp);
        else
            return DescribeApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationsRequest&;
    using Resp = DescribeApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeApplicationsOutcomeCallable TemClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationsOutcome>>();
    DescribeApplicationsAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeApplicationsRequest&,
        DescribeApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeApplicationsStatusOutcome TemClient::DescribeApplicationsStatus(const DescribeApplicationsStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationsStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationsStatusResponse rsp = DescribeApplicationsStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationsStatusOutcome(rsp);
        else
            return DescribeApplicationsStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationsStatusOutcome(outcome.GetError());
    }
}

void TemClient::DescribeApplicationsStatusAsync(const DescribeApplicationsStatusRequest& request, const DescribeApplicationsStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationsStatusRequest&;
    using Resp = DescribeApplicationsStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationsStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeApplicationsStatusOutcomeCallable TemClient::DescribeApplicationsStatusCallable(const DescribeApplicationsStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationsStatusOutcome>>();
    DescribeApplicationsStatusAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeApplicationsStatusRequest&,
        DescribeApplicationsStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeConfigDataOutcome TemClient::DescribeConfigData(const DescribeConfigDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigDataResponse rsp = DescribeConfigDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigDataOutcome(rsp);
        else
            return DescribeConfigDataOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigDataOutcome(outcome.GetError());
    }
}

void TemClient::DescribeConfigDataAsync(const DescribeConfigDataRequest& request, const DescribeConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigDataRequest&;
    using Resp = DescribeConfigDataResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeConfigDataOutcomeCallable TemClient::DescribeConfigDataCallable(const DescribeConfigDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigDataOutcome>>();
    DescribeConfigDataAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeConfigDataRequest&,
        DescribeConfigDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeConfigDataListOutcome TemClient::DescribeConfigDataList(const DescribeConfigDataListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigDataList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigDataListResponse rsp = DescribeConfigDataListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigDataListOutcome(rsp);
        else
            return DescribeConfigDataListOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigDataListOutcome(outcome.GetError());
    }
}

void TemClient::DescribeConfigDataListAsync(const DescribeConfigDataListRequest& request, const DescribeConfigDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigDataListRequest&;
    using Resp = DescribeConfigDataListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigDataList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeConfigDataListOutcomeCallable TemClient::DescribeConfigDataListCallable(const DescribeConfigDataListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigDataListOutcome>>();
    DescribeConfigDataListAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeConfigDataListRequest&,
        DescribeConfigDataListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeDeployApplicationDetailOutcome TemClient::DescribeDeployApplicationDetail(const DescribeDeployApplicationDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeployApplicationDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeployApplicationDetailResponse rsp = DescribeDeployApplicationDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeployApplicationDetailOutcome(rsp);
        else
            return DescribeDeployApplicationDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeDeployApplicationDetailOutcome(outcome.GetError());
    }
}

void TemClient::DescribeDeployApplicationDetailAsync(const DescribeDeployApplicationDetailRequest& request, const DescribeDeployApplicationDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeployApplicationDetailRequest&;
    using Resp = DescribeDeployApplicationDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeployApplicationDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeDeployApplicationDetailOutcomeCallable TemClient::DescribeDeployApplicationDetailCallable(const DescribeDeployApplicationDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeployApplicationDetailOutcome>>();
    DescribeDeployApplicationDetailAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeDeployApplicationDetailRequest&,
        DescribeDeployApplicationDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeEnvironmentOutcome TemClient::DescribeEnvironment(const DescribeEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentResponse rsp = DescribeEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentOutcome(rsp);
        else
            return DescribeEnvironmentOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentOutcome(outcome.GetError());
    }
}

void TemClient::DescribeEnvironmentAsync(const DescribeEnvironmentRequest& request, const DescribeEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentRequest&;
    using Resp = DescribeEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeEnvironmentOutcomeCallable TemClient::DescribeEnvironmentCallable(const DescribeEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentOutcome>>();
    DescribeEnvironmentAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeEnvironmentRequest&,
        DescribeEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeEnvironmentStatusOutcome TemClient::DescribeEnvironmentStatus(const DescribeEnvironmentStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnvironmentStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnvironmentStatusResponse rsp = DescribeEnvironmentStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnvironmentStatusOutcome(rsp);
        else
            return DescribeEnvironmentStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeEnvironmentStatusOutcome(outcome.GetError());
    }
}

void TemClient::DescribeEnvironmentStatusAsync(const DescribeEnvironmentStatusRequest& request, const DescribeEnvironmentStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentStatusRequest&;
    using Resp = DescribeEnvironmentStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironmentStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeEnvironmentStatusOutcomeCallable TemClient::DescribeEnvironmentStatusCallable(const DescribeEnvironmentStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentStatusOutcome>>();
    DescribeEnvironmentStatusAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeEnvironmentStatusRequest&,
        DescribeEnvironmentStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeEnvironmentsOutcome TemClient::DescribeEnvironments(const DescribeEnvironmentsRequest &request)
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

void TemClient::DescribeEnvironmentsAsync(const DescribeEnvironmentsRequest& request, const DescribeEnvironmentsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnvironmentsRequest&;
    using Resp = DescribeEnvironmentsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnvironments", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeEnvironmentsOutcomeCallable TemClient::DescribeEnvironmentsCallable(const DescribeEnvironmentsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnvironmentsOutcome>>();
    DescribeEnvironmentsAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeEnvironmentsRequest&,
        DescribeEnvironmentsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeIngressOutcome TemClient::DescribeIngress(const DescribeIngressRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIngressResponse rsp = DescribeIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIngressOutcome(rsp);
        else
            return DescribeIngressOutcome(o.GetError());
    }
    else
    {
        return DescribeIngressOutcome(outcome.GetError());
    }
}

void TemClient::DescribeIngressAsync(const DescribeIngressRequest& request, const DescribeIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIngressRequest&;
    using Resp = DescribeIngressResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIngress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeIngressOutcomeCallable TemClient::DescribeIngressCallable(const DescribeIngressRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIngressOutcome>>();
    DescribeIngressAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeIngressRequest&,
        DescribeIngressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeIngressesOutcome TemClient::DescribeIngresses(const DescribeIngressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIngresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIngressesResponse rsp = DescribeIngressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIngressesOutcome(rsp);
        else
            return DescribeIngressesOutcome(o.GetError());
    }
    else
    {
        return DescribeIngressesOutcome(outcome.GetError());
    }
}

void TemClient::DescribeIngressesAsync(const DescribeIngressesRequest& request, const DescribeIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIngressesRequest&;
    using Resp = DescribeIngressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIngresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeIngressesOutcomeCallable TemClient::DescribeIngressesCallable(const DescribeIngressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIngressesOutcome>>();
    DescribeIngressesAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeIngressesRequest&,
        DescribeIngressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeLogConfigOutcome TemClient::DescribeLogConfig(const DescribeLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogConfigResponse rsp = DescribeLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogConfigOutcome(rsp);
        else
            return DescribeLogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeLogConfigOutcome(outcome.GetError());
    }
}

void TemClient::DescribeLogConfigAsync(const DescribeLogConfigRequest& request, const DescribeLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogConfigRequest&;
    using Resp = DescribeLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeLogConfigOutcomeCallable TemClient::DescribeLogConfigCallable(const DescribeLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogConfigOutcome>>();
    DescribeLogConfigAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeLogConfigRequest&,
        DescribeLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribePagedLogConfigListOutcome TemClient::DescribePagedLogConfigList(const DescribePagedLogConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePagedLogConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePagedLogConfigListResponse rsp = DescribePagedLogConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePagedLogConfigListOutcome(rsp);
        else
            return DescribePagedLogConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribePagedLogConfigListOutcome(outcome.GetError());
    }
}

void TemClient::DescribePagedLogConfigListAsync(const DescribePagedLogConfigListRequest& request, const DescribePagedLogConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePagedLogConfigListRequest&;
    using Resp = DescribePagedLogConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePagedLogConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribePagedLogConfigListOutcomeCallable TemClient::DescribePagedLogConfigListCallable(const DescribePagedLogConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePagedLogConfigListOutcome>>();
    DescribePagedLogConfigListAsync(
    request,
    [prom](
        const TemClient*,
        const DescribePagedLogConfigListRequest&,
        DescribePagedLogConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DescribeRelatedIngressesOutcome TemClient::DescribeRelatedIngresses(const DescribeRelatedIngressesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRelatedIngresses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRelatedIngressesResponse rsp = DescribeRelatedIngressesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRelatedIngressesOutcome(rsp);
        else
            return DescribeRelatedIngressesOutcome(o.GetError());
    }
    else
    {
        return DescribeRelatedIngressesOutcome(outcome.GetError());
    }
}

void TemClient::DescribeRelatedIngressesAsync(const DescribeRelatedIngressesRequest& request, const DescribeRelatedIngressesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRelatedIngressesRequest&;
    using Resp = DescribeRelatedIngressesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRelatedIngresses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DescribeRelatedIngressesOutcomeCallable TemClient::DescribeRelatedIngressesCallable(const DescribeRelatedIngressesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRelatedIngressesOutcome>>();
    DescribeRelatedIngressesAsync(
    request,
    [prom](
        const TemClient*,
        const DescribeRelatedIngressesRequest&,
        DescribeRelatedIngressesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DestroyConfigDataOutcome TemClient::DestroyConfigData(const DestroyConfigDataRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyConfigData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyConfigDataResponse rsp = DestroyConfigDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyConfigDataOutcome(rsp);
        else
            return DestroyConfigDataOutcome(o.GetError());
    }
    else
    {
        return DestroyConfigDataOutcome(outcome.GetError());
    }
}

void TemClient::DestroyConfigDataAsync(const DestroyConfigDataRequest& request, const DestroyConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyConfigDataRequest&;
    using Resp = DestroyConfigDataResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyConfigData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DestroyConfigDataOutcomeCallable TemClient::DestroyConfigDataCallable(const DestroyConfigDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyConfigDataOutcome>>();
    DestroyConfigDataAsync(
    request,
    [prom](
        const TemClient*,
        const DestroyConfigDataRequest&,
        DestroyConfigDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DestroyEnvironmentOutcome TemClient::DestroyEnvironment(const DestroyEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyEnvironmentResponse rsp = DestroyEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyEnvironmentOutcome(rsp);
        else
            return DestroyEnvironmentOutcome(o.GetError());
    }
    else
    {
        return DestroyEnvironmentOutcome(outcome.GetError());
    }
}

void TemClient::DestroyEnvironmentAsync(const DestroyEnvironmentRequest& request, const DestroyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyEnvironmentRequest&;
    using Resp = DestroyEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DestroyEnvironmentOutcomeCallable TemClient::DestroyEnvironmentCallable(const DestroyEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyEnvironmentOutcome>>();
    DestroyEnvironmentAsync(
    request,
    [prom](
        const TemClient*,
        const DestroyEnvironmentRequest&,
        DestroyEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DestroyLogConfigOutcome TemClient::DestroyLogConfig(const DestroyLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DestroyLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DestroyLogConfigResponse rsp = DestroyLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DestroyLogConfigOutcome(rsp);
        else
            return DestroyLogConfigOutcome(o.GetError());
    }
    else
    {
        return DestroyLogConfigOutcome(outcome.GetError());
    }
}

void TemClient::DestroyLogConfigAsync(const DestroyLogConfigRequest& request, const DestroyLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DestroyLogConfigRequest&;
    using Resp = DestroyLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DestroyLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DestroyLogConfigOutcomeCallable TemClient::DestroyLogConfigCallable(const DestroyLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DestroyLogConfigOutcome>>();
    DestroyLogConfigAsync(
    request,
    [prom](
        const TemClient*,
        const DestroyLogConfigRequest&,
        DestroyLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::DisableApplicationAutoscalerOutcome TemClient::DisableApplicationAutoscaler(const DisableApplicationAutoscalerRequest &request)
{
    auto outcome = MakeRequest(request, "DisableApplicationAutoscaler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableApplicationAutoscalerResponse rsp = DisableApplicationAutoscalerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableApplicationAutoscalerOutcome(rsp);
        else
            return DisableApplicationAutoscalerOutcome(o.GetError());
    }
    else
    {
        return DisableApplicationAutoscalerOutcome(outcome.GetError());
    }
}

void TemClient::DisableApplicationAutoscalerAsync(const DisableApplicationAutoscalerRequest& request, const DisableApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableApplicationAutoscalerRequest&;
    using Resp = DisableApplicationAutoscalerResponse;

    DoRequestAsync<Req, Resp>(
        "DisableApplicationAutoscaler", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::DisableApplicationAutoscalerOutcomeCallable TemClient::DisableApplicationAutoscalerCallable(const DisableApplicationAutoscalerRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableApplicationAutoscalerOutcome>>();
    DisableApplicationAutoscalerAsync(
    request,
    [prom](
        const TemClient*,
        const DisableApplicationAutoscalerRequest&,
        DisableApplicationAutoscalerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::EnableApplicationAutoscalerOutcome TemClient::EnableApplicationAutoscaler(const EnableApplicationAutoscalerRequest &request)
{
    auto outcome = MakeRequest(request, "EnableApplicationAutoscaler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableApplicationAutoscalerResponse rsp = EnableApplicationAutoscalerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableApplicationAutoscalerOutcome(rsp);
        else
            return EnableApplicationAutoscalerOutcome(o.GetError());
    }
    else
    {
        return EnableApplicationAutoscalerOutcome(outcome.GetError());
    }
}

void TemClient::EnableApplicationAutoscalerAsync(const EnableApplicationAutoscalerRequest& request, const EnableApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableApplicationAutoscalerRequest&;
    using Resp = EnableApplicationAutoscalerResponse;

    DoRequestAsync<Req, Resp>(
        "EnableApplicationAutoscaler", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::EnableApplicationAutoscalerOutcomeCallable TemClient::EnableApplicationAutoscalerCallable(const EnableApplicationAutoscalerRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableApplicationAutoscalerOutcome>>();
    EnableApplicationAutoscalerAsync(
    request,
    [prom](
        const TemClient*,
        const EnableApplicationAutoscalerRequest&,
        EnableApplicationAutoscalerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::GenerateApplicationPackageDownloadUrlOutcome TemClient::GenerateApplicationPackageDownloadUrl(const GenerateApplicationPackageDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GenerateApplicationPackageDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GenerateApplicationPackageDownloadUrlResponse rsp = GenerateApplicationPackageDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GenerateApplicationPackageDownloadUrlOutcome(rsp);
        else
            return GenerateApplicationPackageDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return GenerateApplicationPackageDownloadUrlOutcome(outcome.GetError());
    }
}

void TemClient::GenerateApplicationPackageDownloadUrlAsync(const GenerateApplicationPackageDownloadUrlRequest& request, const GenerateApplicationPackageDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GenerateApplicationPackageDownloadUrlRequest&;
    using Resp = GenerateApplicationPackageDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "GenerateApplicationPackageDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::GenerateApplicationPackageDownloadUrlOutcomeCallable TemClient::GenerateApplicationPackageDownloadUrlCallable(const GenerateApplicationPackageDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GenerateApplicationPackageDownloadUrlOutcome>>();
    GenerateApplicationPackageDownloadUrlAsync(
    request,
    [prom](
        const TemClient*,
        const GenerateApplicationPackageDownloadUrlRequest&,
        GenerateApplicationPackageDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyApplicationAutoscalerOutcome TemClient::ModifyApplicationAutoscaler(const ModifyApplicationAutoscalerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationAutoscaler");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationAutoscalerResponse rsp = ModifyApplicationAutoscalerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationAutoscalerOutcome(rsp);
        else
            return ModifyApplicationAutoscalerOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationAutoscalerOutcome(outcome.GetError());
    }
}

void TemClient::ModifyApplicationAutoscalerAsync(const ModifyApplicationAutoscalerRequest& request, const ModifyApplicationAutoscalerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationAutoscalerRequest&;
    using Resp = ModifyApplicationAutoscalerResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationAutoscaler", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyApplicationAutoscalerOutcomeCallable TemClient::ModifyApplicationAutoscalerCallable(const ModifyApplicationAutoscalerRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationAutoscalerOutcome>>();
    ModifyApplicationAutoscalerAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyApplicationAutoscalerRequest&,
        ModifyApplicationAutoscalerOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyApplicationInfoOutcome TemClient::ModifyApplicationInfo(const ModifyApplicationInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationInfoResponse rsp = ModifyApplicationInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationInfoOutcome(rsp);
        else
            return ModifyApplicationInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationInfoOutcome(outcome.GetError());
    }
}

void TemClient::ModifyApplicationInfoAsync(const ModifyApplicationInfoRequest& request, const ModifyApplicationInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationInfoRequest&;
    using Resp = ModifyApplicationInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyApplicationInfoOutcomeCallable TemClient::ModifyApplicationInfoCallable(const ModifyApplicationInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationInfoOutcome>>();
    ModifyApplicationInfoAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyApplicationInfoRequest&,
        ModifyApplicationInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyApplicationReplicasOutcome TemClient::ModifyApplicationReplicas(const ModifyApplicationReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationReplicasResponse rsp = ModifyApplicationReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationReplicasOutcome(rsp);
        else
            return ModifyApplicationReplicasOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationReplicasOutcome(outcome.GetError());
    }
}

void TemClient::ModifyApplicationReplicasAsync(const ModifyApplicationReplicasRequest& request, const ModifyApplicationReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationReplicasRequest&;
    using Resp = ModifyApplicationReplicasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationReplicas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyApplicationReplicasOutcomeCallable TemClient::ModifyApplicationReplicasCallable(const ModifyApplicationReplicasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationReplicasOutcome>>();
    ModifyApplicationReplicasAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyApplicationReplicasRequest&,
        ModifyApplicationReplicasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyApplicationServiceOutcome TemClient::ModifyApplicationService(const ModifyApplicationServiceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationService");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationServiceResponse rsp = ModifyApplicationServiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationServiceOutcome(rsp);
        else
            return ModifyApplicationServiceOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationServiceOutcome(outcome.GetError());
    }
}

void TemClient::ModifyApplicationServiceAsync(const ModifyApplicationServiceRequest& request, const ModifyApplicationServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationServiceRequest&;
    using Resp = ModifyApplicationServiceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplicationService", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyApplicationServiceOutcomeCallable TemClient::ModifyApplicationServiceCallable(const ModifyApplicationServiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationServiceOutcome>>();
    ModifyApplicationServiceAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyApplicationServiceRequest&,
        ModifyApplicationServiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyConfigDataOutcome TemClient::ModifyConfigData(const ModifyConfigDataRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyConfigData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyConfigDataResponse rsp = ModifyConfigDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyConfigDataOutcome(rsp);
        else
            return ModifyConfigDataOutcome(o.GetError());
    }
    else
    {
        return ModifyConfigDataOutcome(outcome.GetError());
    }
}

void TemClient::ModifyConfigDataAsync(const ModifyConfigDataRequest& request, const ModifyConfigDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyConfigDataRequest&;
    using Resp = ModifyConfigDataResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyConfigData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyConfigDataOutcomeCallable TemClient::ModifyConfigDataCallable(const ModifyConfigDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyConfigDataOutcome>>();
    ModifyConfigDataAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyConfigDataRequest&,
        ModifyConfigDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyEnvironmentOutcome TemClient::ModifyEnvironment(const ModifyEnvironmentRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEnvironment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEnvironmentResponse rsp = ModifyEnvironmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEnvironmentOutcome(rsp);
        else
            return ModifyEnvironmentOutcome(o.GetError());
    }
    else
    {
        return ModifyEnvironmentOutcome(outcome.GetError());
    }
}

void TemClient::ModifyEnvironmentAsync(const ModifyEnvironmentRequest& request, const ModifyEnvironmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEnvironmentRequest&;
    using Resp = ModifyEnvironmentResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEnvironment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyEnvironmentOutcomeCallable TemClient::ModifyEnvironmentCallable(const ModifyEnvironmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEnvironmentOutcome>>();
    ModifyEnvironmentAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyEnvironmentRequest&,
        ModifyEnvironmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyGatewayIngressOutcome TemClient::ModifyGatewayIngress(const ModifyGatewayIngressRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGatewayIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGatewayIngressResponse rsp = ModifyGatewayIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGatewayIngressOutcome(rsp);
        else
            return ModifyGatewayIngressOutcome(o.GetError());
    }
    else
    {
        return ModifyGatewayIngressOutcome(outcome.GetError());
    }
}

void TemClient::ModifyGatewayIngressAsync(const ModifyGatewayIngressRequest& request, const ModifyGatewayIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGatewayIngressRequest&;
    using Resp = ModifyGatewayIngressResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGatewayIngress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyGatewayIngressOutcomeCallable TemClient::ModifyGatewayIngressCallable(const ModifyGatewayIngressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGatewayIngressOutcome>>();
    ModifyGatewayIngressAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyGatewayIngressRequest&,
        ModifyGatewayIngressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyIngressOutcome TemClient::ModifyIngress(const ModifyIngressRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIngress");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIngressResponse rsp = ModifyIngressResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIngressOutcome(rsp);
        else
            return ModifyIngressOutcome(o.GetError());
    }
    else
    {
        return ModifyIngressOutcome(outcome.GetError());
    }
}

void TemClient::ModifyIngressAsync(const ModifyIngressRequest& request, const ModifyIngressAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIngressRequest&;
    using Resp = ModifyIngressResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIngress", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyIngressOutcomeCallable TemClient::ModifyIngressCallable(const ModifyIngressRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIngressOutcome>>();
    ModifyIngressAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyIngressRequest&,
        ModifyIngressOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ModifyLogConfigOutcome TemClient::ModifyLogConfig(const ModifyLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLogConfigResponse rsp = ModifyLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLogConfigOutcome(rsp);
        else
            return ModifyLogConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyLogConfigOutcome(outcome.GetError());
    }
}

void TemClient::ModifyLogConfigAsync(const ModifyLogConfigRequest& request, const ModifyLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLogConfigRequest&;
    using Resp = ModifyLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ModifyLogConfigOutcomeCallable TemClient::ModifyLogConfigCallable(const ModifyLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLogConfigOutcome>>();
    ModifyLogConfigAsync(
    request,
    [prom](
        const TemClient*,
        const ModifyLogConfigRequest&,
        ModifyLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::RestartApplicationOutcome TemClient::RestartApplication(const RestartApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RestartApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartApplicationResponse rsp = RestartApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartApplicationOutcome(rsp);
        else
            return RestartApplicationOutcome(o.GetError());
    }
    else
    {
        return RestartApplicationOutcome(outcome.GetError());
    }
}

void TemClient::RestartApplicationAsync(const RestartApplicationRequest& request, const RestartApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartApplicationRequest&;
    using Resp = RestartApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "RestartApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::RestartApplicationOutcomeCallable TemClient::RestartApplicationCallable(const RestartApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartApplicationOutcome>>();
    RestartApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const RestartApplicationRequest&,
        RestartApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::RestartApplicationPodOutcome TemClient::RestartApplicationPod(const RestartApplicationPodRequest &request)
{
    auto outcome = MakeRequest(request, "RestartApplicationPod");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RestartApplicationPodResponse rsp = RestartApplicationPodResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RestartApplicationPodOutcome(rsp);
        else
            return RestartApplicationPodOutcome(o.GetError());
    }
    else
    {
        return RestartApplicationPodOutcome(outcome.GetError());
    }
}

void TemClient::RestartApplicationPodAsync(const RestartApplicationPodRequest& request, const RestartApplicationPodAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RestartApplicationPodRequest&;
    using Resp = RestartApplicationPodResponse;

    DoRequestAsync<Req, Resp>(
        "RestartApplicationPod", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::RestartApplicationPodOutcomeCallable TemClient::RestartApplicationPodCallable(const RestartApplicationPodRequest &request)
{
    const auto prom = std::make_shared<std::promise<RestartApplicationPodOutcome>>();
    RestartApplicationPodAsync(
    request,
    [prom](
        const TemClient*,
        const RestartApplicationPodRequest&,
        RestartApplicationPodOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::ResumeDeployApplicationOutcome TemClient::ResumeDeployApplication(const ResumeDeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ResumeDeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResumeDeployApplicationResponse rsp = ResumeDeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResumeDeployApplicationOutcome(rsp);
        else
            return ResumeDeployApplicationOutcome(o.GetError());
    }
    else
    {
        return ResumeDeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::ResumeDeployApplicationAsync(const ResumeDeployApplicationRequest& request, const ResumeDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResumeDeployApplicationRequest&;
    using Resp = ResumeDeployApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ResumeDeployApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::ResumeDeployApplicationOutcomeCallable TemClient::ResumeDeployApplicationCallable(const ResumeDeployApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResumeDeployApplicationOutcome>>();
    ResumeDeployApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const ResumeDeployApplicationRequest&,
        ResumeDeployApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::RevertDeployApplicationOutcome TemClient::RevertDeployApplication(const RevertDeployApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "RevertDeployApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevertDeployApplicationResponse rsp = RevertDeployApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevertDeployApplicationOutcome(rsp);
        else
            return RevertDeployApplicationOutcome(o.GetError());
    }
    else
    {
        return RevertDeployApplicationOutcome(outcome.GetError());
    }
}

void TemClient::RevertDeployApplicationAsync(const RevertDeployApplicationRequest& request, const RevertDeployApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevertDeployApplicationRequest&;
    using Resp = RevertDeployApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "RevertDeployApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::RevertDeployApplicationOutcomeCallable TemClient::RevertDeployApplicationCallable(const RevertDeployApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevertDeployApplicationOutcome>>();
    RevertDeployApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const RevertDeployApplicationRequest&,
        RevertDeployApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::RollingUpdateApplicationByVersionOutcome TemClient::RollingUpdateApplicationByVersion(const RollingUpdateApplicationByVersionRequest &request)
{
    auto outcome = MakeRequest(request, "RollingUpdateApplicationByVersion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollingUpdateApplicationByVersionResponse rsp = RollingUpdateApplicationByVersionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollingUpdateApplicationByVersionOutcome(rsp);
        else
            return RollingUpdateApplicationByVersionOutcome(o.GetError());
    }
    else
    {
        return RollingUpdateApplicationByVersionOutcome(outcome.GetError());
    }
}

void TemClient::RollingUpdateApplicationByVersionAsync(const RollingUpdateApplicationByVersionRequest& request, const RollingUpdateApplicationByVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollingUpdateApplicationByVersionRequest&;
    using Resp = RollingUpdateApplicationByVersionResponse;

    DoRequestAsync<Req, Resp>(
        "RollingUpdateApplicationByVersion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::RollingUpdateApplicationByVersionOutcomeCallable TemClient::RollingUpdateApplicationByVersionCallable(const RollingUpdateApplicationByVersionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollingUpdateApplicationByVersionOutcome>>();
    RollingUpdateApplicationByVersionAsync(
    request,
    [prom](
        const TemClient*,
        const RollingUpdateApplicationByVersionRequest&,
        RollingUpdateApplicationByVersionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TemClient::StopApplicationOutcome TemClient::StopApplication(const StopApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "StopApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopApplicationResponse rsp = StopApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopApplicationOutcome(rsp);
        else
            return StopApplicationOutcome(o.GetError());
    }
    else
    {
        return StopApplicationOutcome(outcome.GetError());
    }
}

void TemClient::StopApplicationAsync(const StopApplicationRequest& request, const StopApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopApplicationRequest&;
    using Resp = StopApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "StopApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TemClient::StopApplicationOutcomeCallable TemClient::StopApplicationCallable(const StopApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopApplicationOutcome>>();
    StopApplicationAsync(
    request,
    [prom](
        const TemClient*,
        const StopApplicationRequest&,
        StopApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

