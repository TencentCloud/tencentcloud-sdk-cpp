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

#include <tencentcloud/tsf/v20180326/TsfClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tsf::V20180326;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-03-26";
    const string ENDPOINT = "tsf.tencentcloudapi.com";
}

TsfClient::TsfClient(const Credential &credential, const string &region) :
    TsfClient(credential, region, ClientProfile())
{
}

TsfClient::TsfClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TsfClient::AddClusterInstancesOutcome TsfClient::AddClusterInstances(const AddClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddClusterInstancesResponse rsp = AddClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddClusterInstancesOutcome(rsp);
        else
            return AddClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return AddClusterInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::AddClusterInstancesAsync(const AddClusterInstancesRequest& request, const AddClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddClusterInstancesRequest&;
    using Resp = AddClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AddClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::AddClusterInstancesOutcomeCallable TsfClient::AddClusterInstancesCallable(const AddClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddClusterInstancesOutcome>>();
    AddClusterInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const AddClusterInstancesRequest&,
        AddClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::AddInstancesOutcome TsfClient::AddInstances(const AddInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "AddInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddInstancesResponse rsp = AddInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddInstancesOutcome(rsp);
        else
            return AddInstancesOutcome(o.GetError());
    }
    else
    {
        return AddInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::AddInstancesAsync(const AddInstancesRequest& request, const AddInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddInstancesRequest&;
    using Resp = AddInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "AddInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::AddInstancesOutcomeCallable TsfClient::AddInstancesCallable(const AddInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddInstancesOutcome>>();
    AddInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const AddInstancesRequest&,
        AddInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::AssociateBusinessLogConfigOutcome TsfClient::AssociateBusinessLogConfig(const AssociateBusinessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateBusinessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateBusinessLogConfigResponse rsp = AssociateBusinessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateBusinessLogConfigOutcome(rsp);
        else
            return AssociateBusinessLogConfigOutcome(o.GetError());
    }
    else
    {
        return AssociateBusinessLogConfigOutcome(outcome.GetError());
    }
}

void TsfClient::AssociateBusinessLogConfigAsync(const AssociateBusinessLogConfigRequest& request, const AssociateBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateBusinessLogConfigRequest&;
    using Resp = AssociateBusinessLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateBusinessLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::AssociateBusinessLogConfigOutcomeCallable TsfClient::AssociateBusinessLogConfigCallable(const AssociateBusinessLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateBusinessLogConfigOutcome>>();
    AssociateBusinessLogConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const AssociateBusinessLogConfigRequest&,
        AssociateBusinessLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::AssociateConfigWithGroupOutcome TsfClient::AssociateConfigWithGroup(const AssociateConfigWithGroupRequest &request)
{
    auto outcome = MakeRequest(request, "AssociateConfigWithGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AssociateConfigWithGroupResponse rsp = AssociateConfigWithGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AssociateConfigWithGroupOutcome(rsp);
        else
            return AssociateConfigWithGroupOutcome(o.GetError());
    }
    else
    {
        return AssociateConfigWithGroupOutcome(outcome.GetError());
    }
}

void TsfClient::AssociateConfigWithGroupAsync(const AssociateConfigWithGroupRequest& request, const AssociateConfigWithGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AssociateConfigWithGroupRequest&;
    using Resp = AssociateConfigWithGroupResponse;

    DoRequestAsync<Req, Resp>(
        "AssociateConfigWithGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::AssociateConfigWithGroupOutcomeCallable TsfClient::AssociateConfigWithGroupCallable(const AssociateConfigWithGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<AssociateConfigWithGroupOutcome>>();
    AssociateConfigWithGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const AssociateConfigWithGroupRequest&,
        AssociateConfigWithGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::BindApiGroupOutcome TsfClient::BindApiGroup(const BindApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "BindApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindApiGroupResponse rsp = BindApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindApiGroupOutcome(rsp);
        else
            return BindApiGroupOutcome(o.GetError());
    }
    else
    {
        return BindApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::BindApiGroupAsync(const BindApiGroupRequest& request, const BindApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindApiGroupRequest&;
    using Resp = BindApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "BindApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::BindApiGroupOutcomeCallable TsfClient::BindApiGroupCallable(const BindApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindApiGroupOutcome>>();
    BindApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const BindApiGroupRequest&,
        BindApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::BindPluginOutcome TsfClient::BindPlugin(const BindPluginRequest &request)
{
    auto outcome = MakeRequest(request, "BindPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindPluginResponse rsp = BindPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindPluginOutcome(rsp);
        else
            return BindPluginOutcome(o.GetError());
    }
    else
    {
        return BindPluginOutcome(outcome.GetError());
    }
}

void TsfClient::BindPluginAsync(const BindPluginRequest& request, const BindPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindPluginRequest&;
    using Resp = BindPluginResponse;

    DoRequestAsync<Req, Resp>(
        "BindPlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::BindPluginOutcomeCallable TsfClient::BindPluginCallable(const BindPluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindPluginOutcome>>();
    BindPluginAsync(
    request,
    [prom](
        const TsfClient*,
        const BindPluginRequest&,
        BindPluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ChangeApiUsableStatusOutcome TsfClient::ChangeApiUsableStatus(const ChangeApiUsableStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ChangeApiUsableStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ChangeApiUsableStatusResponse rsp = ChangeApiUsableStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ChangeApiUsableStatusOutcome(rsp);
        else
            return ChangeApiUsableStatusOutcome(o.GetError());
    }
    else
    {
        return ChangeApiUsableStatusOutcome(outcome.GetError());
    }
}

void TsfClient::ChangeApiUsableStatusAsync(const ChangeApiUsableStatusRequest& request, const ChangeApiUsableStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ChangeApiUsableStatusRequest&;
    using Resp = ChangeApiUsableStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ChangeApiUsableStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ChangeApiUsableStatusOutcomeCallable TsfClient::ChangeApiUsableStatusCallable(const ChangeApiUsableStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ChangeApiUsableStatusOutcome>>();
    ChangeApiUsableStatusAsync(
    request,
    [prom](
        const TsfClient*,
        const ChangeApiUsableStatusRequest&,
        ChangeApiUsableStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ContinueRunFailedTaskBatchOutcome TsfClient::ContinueRunFailedTaskBatch(const ContinueRunFailedTaskBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ContinueRunFailedTaskBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContinueRunFailedTaskBatchResponse rsp = ContinueRunFailedTaskBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContinueRunFailedTaskBatchOutcome(rsp);
        else
            return ContinueRunFailedTaskBatchOutcome(o.GetError());
    }
    else
    {
        return ContinueRunFailedTaskBatchOutcome(outcome.GetError());
    }
}

void TsfClient::ContinueRunFailedTaskBatchAsync(const ContinueRunFailedTaskBatchRequest& request, const ContinueRunFailedTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ContinueRunFailedTaskBatchRequest&;
    using Resp = ContinueRunFailedTaskBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ContinueRunFailedTaskBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ContinueRunFailedTaskBatchOutcomeCallable TsfClient::ContinueRunFailedTaskBatchCallable(const ContinueRunFailedTaskBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ContinueRunFailedTaskBatchOutcome>>();
    ContinueRunFailedTaskBatchAsync(
    request,
    [prom](
        const TsfClient*,
        const ContinueRunFailedTaskBatchRequest&,
        ContinueRunFailedTaskBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateAllGatewayApiAsyncOutcome TsfClient::CreateAllGatewayApiAsync(const CreateAllGatewayApiAsyncRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAllGatewayApiAsync");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAllGatewayApiAsyncResponse rsp = CreateAllGatewayApiAsyncResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAllGatewayApiAsyncOutcome(rsp);
        else
            return CreateAllGatewayApiAsyncOutcome(o.GetError());
    }
    else
    {
        return CreateAllGatewayApiAsyncOutcome(outcome.GetError());
    }
}

void TsfClient::CreateAllGatewayApiAsyncAsync(const CreateAllGatewayApiAsyncRequest& request, const CreateAllGatewayApiAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAllGatewayApiAsyncRequest&;
    using Resp = CreateAllGatewayApiAsyncResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAllGatewayApiAsync", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateAllGatewayApiAsyncOutcomeCallable TsfClient::CreateAllGatewayApiAsyncCallable(const CreateAllGatewayApiAsyncRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAllGatewayApiAsyncOutcome>>();
    CreateAllGatewayApiAsyncAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateAllGatewayApiAsyncRequest&,
        CreateAllGatewayApiAsyncOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateApiGroupOutcome TsfClient::CreateApiGroup(const CreateApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiGroupResponse rsp = CreateApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiGroupOutcome(rsp);
        else
            return CreateApiGroupOutcome(o.GetError());
    }
    else
    {
        return CreateApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateApiGroupAsync(const CreateApiGroupRequest& request, const CreateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiGroupRequest&;
    using Resp = CreateApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateApiGroupOutcomeCallable TsfClient::CreateApiGroupCallable(const CreateApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiGroupOutcome>>();
    CreateApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateApiGroupRequest&,
        CreateApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateApiRateLimitRuleOutcome TsfClient::CreateApiRateLimitRule(const CreateApiRateLimitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiRateLimitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiRateLimitRuleResponse rsp = CreateApiRateLimitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiRateLimitRuleOutcome(rsp);
        else
            return CreateApiRateLimitRuleOutcome(o.GetError());
    }
    else
    {
        return CreateApiRateLimitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::CreateApiRateLimitRuleAsync(const CreateApiRateLimitRuleRequest& request, const CreateApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiRateLimitRuleRequest&;
    using Resp = CreateApiRateLimitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiRateLimitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateApiRateLimitRuleOutcomeCallable TsfClient::CreateApiRateLimitRuleCallable(const CreateApiRateLimitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiRateLimitRuleOutcome>>();
    CreateApiRateLimitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateApiRateLimitRuleRequest&,
        CreateApiRateLimitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateApiRateLimitRuleWithDetailRespOutcome TsfClient::CreateApiRateLimitRuleWithDetailResp(const CreateApiRateLimitRuleWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApiRateLimitRuleWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApiRateLimitRuleWithDetailRespResponse rsp = CreateApiRateLimitRuleWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApiRateLimitRuleWithDetailRespOutcome(rsp);
        else
            return CreateApiRateLimitRuleWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreateApiRateLimitRuleWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreateApiRateLimitRuleWithDetailRespAsync(const CreateApiRateLimitRuleWithDetailRespRequest& request, const CreateApiRateLimitRuleWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateApiRateLimitRuleWithDetailRespRequest&;
    using Resp = CreateApiRateLimitRuleWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreateApiRateLimitRuleWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateApiRateLimitRuleWithDetailRespOutcomeCallable TsfClient::CreateApiRateLimitRuleWithDetailRespCallable(const CreateApiRateLimitRuleWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApiRateLimitRuleWithDetailRespOutcome>>();
    CreateApiRateLimitRuleWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateApiRateLimitRuleWithDetailRespRequest&,
        CreateApiRateLimitRuleWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateApplicationOutcome TsfClient::CreateApplication(const CreateApplicationRequest &request)
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

void TsfClient::CreateApplicationAsync(const CreateApplicationRequest& request, const CreateApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TsfClient::CreateApplicationOutcomeCallable TsfClient::CreateApplicationCallable(const CreateApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateApplicationOutcome>>();
    CreateApplicationAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateApplicationRequest&,
        CreateApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateClusterOutcome TsfClient::CreateCluster(const CreateClusterRequest &request)
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

void TsfClient::CreateClusterAsync(const CreateClusterRequest& request, const CreateClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TsfClient::CreateClusterOutcomeCallable TsfClient::CreateClusterCallable(const CreateClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateClusterOutcome>>();
    CreateClusterAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateClusterRequest&,
        CreateClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateConfigOutcome TsfClient::CreateConfig(const CreateConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigResponse rsp = CreateConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigOutcome(rsp);
        else
            return CreateConfigOutcome(o.GetError());
    }
    else
    {
        return CreateConfigOutcome(outcome.GetError());
    }
}

void TsfClient::CreateConfigAsync(const CreateConfigRequest& request, const CreateConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigRequest&;
    using Resp = CreateConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateConfigOutcomeCallable TsfClient::CreateConfigCallable(const CreateConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigOutcome>>();
    CreateConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateConfigRequest&,
        CreateConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateConfigTemplateOutcome TsfClient::CreateConfigTemplate(const CreateConfigTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigTemplateResponse rsp = CreateConfigTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigTemplateOutcome(rsp);
        else
            return CreateConfigTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateConfigTemplateOutcome(outcome.GetError());
    }
}

void TsfClient::CreateConfigTemplateAsync(const CreateConfigTemplateRequest& request, const CreateConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigTemplateRequest&;
    using Resp = CreateConfigTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateConfigTemplateOutcomeCallable TsfClient::CreateConfigTemplateCallable(const CreateConfigTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigTemplateOutcome>>();
    CreateConfigTemplateAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateConfigTemplateRequest&,
        CreateConfigTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateConfigTemplateWithDetailRespOutcome TsfClient::CreateConfigTemplateWithDetailResp(const CreateConfigTemplateWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigTemplateWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigTemplateWithDetailRespResponse rsp = CreateConfigTemplateWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigTemplateWithDetailRespOutcome(rsp);
        else
            return CreateConfigTemplateWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreateConfigTemplateWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreateConfigTemplateWithDetailRespAsync(const CreateConfigTemplateWithDetailRespRequest& request, const CreateConfigTemplateWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigTemplateWithDetailRespRequest&;
    using Resp = CreateConfigTemplateWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigTemplateWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateConfigTemplateWithDetailRespOutcomeCallable TsfClient::CreateConfigTemplateWithDetailRespCallable(const CreateConfigTemplateWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigTemplateWithDetailRespOutcome>>();
    CreateConfigTemplateWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateConfigTemplateWithDetailRespRequest&,
        CreateConfigTemplateWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateConfigWithDetailRespOutcome TsfClient::CreateConfigWithDetailResp(const CreateConfigWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreateConfigWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateConfigWithDetailRespResponse rsp = CreateConfigWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateConfigWithDetailRespOutcome(rsp);
        else
            return CreateConfigWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreateConfigWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreateConfigWithDetailRespAsync(const CreateConfigWithDetailRespRequest& request, const CreateConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateConfigWithDetailRespRequest&;
    using Resp = CreateConfigWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreateConfigWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateConfigWithDetailRespOutcomeCallable TsfClient::CreateConfigWithDetailRespCallable(const CreateConfigWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateConfigWithDetailRespOutcome>>();
    CreateConfigWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateConfigWithDetailRespRequest&,
        CreateConfigWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateContainGroupOutcome TsfClient::CreateContainGroup(const CreateContainGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateContainGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateContainGroupResponse rsp = CreateContainGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateContainGroupOutcome(rsp);
        else
            return CreateContainGroupOutcome(o.GetError());
    }
    else
    {
        return CreateContainGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateContainGroupAsync(const CreateContainGroupRequest& request, const CreateContainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateContainGroupRequest&;
    using Resp = CreateContainGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateContainGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateContainGroupOutcomeCallable TsfClient::CreateContainGroupCallable(const CreateContainGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateContainGroupOutcome>>();
    CreateContainGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateContainGroupRequest&,
        CreateContainGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateFileConfigOutcome TsfClient::CreateFileConfig(const CreateFileConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileConfigResponse rsp = CreateFileConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileConfigOutcome(rsp);
        else
            return CreateFileConfigOutcome(o.GetError());
    }
    else
    {
        return CreateFileConfigOutcome(outcome.GetError());
    }
}

void TsfClient::CreateFileConfigAsync(const CreateFileConfigRequest& request, const CreateFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileConfigRequest&;
    using Resp = CreateFileConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateFileConfigOutcomeCallable TsfClient::CreateFileConfigCallable(const CreateFileConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileConfigOutcome>>();
    CreateFileConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateFileConfigRequest&,
        CreateFileConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateFileConfigWithDetailRespOutcome TsfClient::CreateFileConfigWithDetailResp(const CreateFileConfigWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFileConfigWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFileConfigWithDetailRespResponse rsp = CreateFileConfigWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFileConfigWithDetailRespOutcome(rsp);
        else
            return CreateFileConfigWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreateFileConfigWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreateFileConfigWithDetailRespAsync(const CreateFileConfigWithDetailRespRequest& request, const CreateFileConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFileConfigWithDetailRespRequest&;
    using Resp = CreateFileConfigWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFileConfigWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateFileConfigWithDetailRespOutcomeCallable TsfClient::CreateFileConfigWithDetailRespCallable(const CreateFileConfigWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFileConfigWithDetailRespOutcome>>();
    CreateFileConfigWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateFileConfigWithDetailRespRequest&,
        CreateFileConfigWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateGatewayApiOutcome TsfClient::CreateGatewayApi(const CreateGatewayApiRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGatewayApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGatewayApiResponse rsp = CreateGatewayApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGatewayApiOutcome(rsp);
        else
            return CreateGatewayApiOutcome(o.GetError());
    }
    else
    {
        return CreateGatewayApiOutcome(outcome.GetError());
    }
}

void TsfClient::CreateGatewayApiAsync(const CreateGatewayApiRequest& request, const CreateGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGatewayApiRequest&;
    using Resp = CreateGatewayApiResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGatewayApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateGatewayApiOutcomeCallable TsfClient::CreateGatewayApiCallable(const CreateGatewayApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGatewayApiOutcome>>();
    CreateGatewayApiAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateGatewayApiRequest&,
        CreateGatewayApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateGroupOutcome TsfClient::CreateGroup(const CreateGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateGroupResponse rsp = CreateGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateGroupOutcome(rsp);
        else
            return CreateGroupOutcome(o.GetError());
    }
    else
    {
        return CreateGroupOutcome(outcome.GetError());
    }
}

void TsfClient::CreateGroupAsync(const CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateGroupRequest&;
    using Resp = CreateGroupResponse;

    DoRequestAsync<Req, Resp>(
        "CreateGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateGroupOutcomeCallable TsfClient::CreateGroupCallable(const CreateGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateGroupOutcome>>();
    CreateGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateGroupRequest&,
        CreateGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateLaneOutcome TsfClient::CreateLane(const CreateLaneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaneResponse rsp = CreateLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaneOutcome(rsp);
        else
            return CreateLaneOutcome(o.GetError());
    }
    else
    {
        return CreateLaneOutcome(outcome.GetError());
    }
}

void TsfClient::CreateLaneAsync(const CreateLaneRequest& request, const CreateLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLaneRequest&;
    using Resp = CreateLaneResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLane", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateLaneOutcomeCallable TsfClient::CreateLaneCallable(const CreateLaneRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLaneOutcome>>();
    CreateLaneAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateLaneRequest&,
        CreateLaneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateLaneRuleOutcome TsfClient::CreateLaneRule(const CreateLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLaneRuleResponse rsp = CreateLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLaneRuleOutcome(rsp);
        else
            return CreateLaneRuleOutcome(o.GetError());
    }
    else
    {
        return CreateLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::CreateLaneRuleAsync(const CreateLaneRuleRequest& request, const CreateLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLaneRuleRequest&;
    using Resp = CreateLaneRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLaneRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateLaneRuleOutcomeCallable TsfClient::CreateLaneRuleCallable(const CreateLaneRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLaneRuleOutcome>>();
    CreateLaneRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateLaneRuleRequest&,
        CreateLaneRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateMicroserviceOutcome TsfClient::CreateMicroservice(const CreateMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMicroserviceResponse rsp = CreateMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMicroserviceOutcome(rsp);
        else
            return CreateMicroserviceOutcome(o.GetError());
    }
    else
    {
        return CreateMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::CreateMicroserviceAsync(const CreateMicroserviceRequest& request, const CreateMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMicroserviceRequest&;
    using Resp = CreateMicroserviceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMicroservice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateMicroserviceOutcomeCallable TsfClient::CreateMicroserviceCallable(const CreateMicroserviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMicroserviceOutcome>>();
    CreateMicroserviceAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateMicroserviceRequest&,
        CreateMicroserviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateMicroserviceWithDetailRespOutcome TsfClient::CreateMicroserviceWithDetailResp(const CreateMicroserviceWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMicroserviceWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMicroserviceWithDetailRespResponse rsp = CreateMicroserviceWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMicroserviceWithDetailRespOutcome(rsp);
        else
            return CreateMicroserviceWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreateMicroserviceWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreateMicroserviceWithDetailRespAsync(const CreateMicroserviceWithDetailRespRequest& request, const CreateMicroserviceWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMicroserviceWithDetailRespRequest&;
    using Resp = CreateMicroserviceWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMicroserviceWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateMicroserviceWithDetailRespOutcomeCallable TsfClient::CreateMicroserviceWithDetailRespCallable(const CreateMicroserviceWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMicroserviceWithDetailRespOutcome>>();
    CreateMicroserviceWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateMicroserviceWithDetailRespRequest&,
        CreateMicroserviceWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateNamespaceOutcome TsfClient::CreateNamespace(const CreateNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNamespaceResponse rsp = CreateNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNamespaceOutcome(rsp);
        else
            return CreateNamespaceOutcome(o.GetError());
    }
    else
    {
        return CreateNamespaceOutcome(outcome.GetError());
    }
}

void TsfClient::CreateNamespaceAsync(const CreateNamespaceRequest& request, const CreateNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateNamespaceRequest&;
    using Resp = CreateNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateNamespaceOutcomeCallable TsfClient::CreateNamespaceCallable(const CreateNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateNamespaceOutcome>>();
    CreateNamespaceAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateNamespaceRequest&,
        CreateNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreatePathRewritesOutcome TsfClient::CreatePathRewrites(const CreatePathRewritesRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePathRewrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePathRewritesResponse rsp = CreatePathRewritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePathRewritesOutcome(rsp);
        else
            return CreatePathRewritesOutcome(o.GetError());
    }
    else
    {
        return CreatePathRewritesOutcome(outcome.GetError());
    }
}

void TsfClient::CreatePathRewritesAsync(const CreatePathRewritesRequest& request, const CreatePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePathRewritesRequest&;
    using Resp = CreatePathRewritesResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePathRewrites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreatePathRewritesOutcomeCallable TsfClient::CreatePathRewritesCallable(const CreatePathRewritesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePathRewritesOutcome>>();
    CreatePathRewritesAsync(
    request,
    [prom](
        const TsfClient*,
        const CreatePathRewritesRequest&,
        CreatePathRewritesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreatePathRewritesWithDetailRespOutcome TsfClient::CreatePathRewritesWithDetailResp(const CreatePathRewritesWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePathRewritesWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePathRewritesWithDetailRespResponse rsp = CreatePathRewritesWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePathRewritesWithDetailRespOutcome(rsp);
        else
            return CreatePathRewritesWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreatePathRewritesWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreatePathRewritesWithDetailRespAsync(const CreatePathRewritesWithDetailRespRequest& request, const CreatePathRewritesWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePathRewritesWithDetailRespRequest&;
    using Resp = CreatePathRewritesWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePathRewritesWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreatePathRewritesWithDetailRespOutcomeCallable TsfClient::CreatePathRewritesWithDetailRespCallable(const CreatePathRewritesWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePathRewritesWithDetailRespOutcome>>();
    CreatePathRewritesWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreatePathRewritesWithDetailRespRequest&,
        CreatePathRewritesWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateProgramOutcome TsfClient::CreateProgram(const CreateProgramRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProgram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProgramResponse rsp = CreateProgramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProgramOutcome(rsp);
        else
            return CreateProgramOutcome(o.GetError());
    }
    else
    {
        return CreateProgramOutcome(outcome.GetError());
    }
}

void TsfClient::CreateProgramAsync(const CreateProgramRequest& request, const CreateProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProgramRequest&;
    using Resp = CreateProgramResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProgram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateProgramOutcomeCallable TsfClient::CreateProgramCallable(const CreateProgramRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProgramOutcome>>();
    CreateProgramAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateProgramRequest&,
        CreateProgramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreatePublicConfigOutcome TsfClient::CreatePublicConfig(const CreatePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePublicConfigResponse rsp = CreatePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePublicConfigOutcome(rsp);
        else
            return CreatePublicConfigOutcome(o.GetError());
    }
    else
    {
        return CreatePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::CreatePublicConfigAsync(const CreatePublicConfigRequest& request, const CreatePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePublicConfigRequest&;
    using Resp = CreatePublicConfigResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePublicConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreatePublicConfigOutcomeCallable TsfClient::CreatePublicConfigCallable(const CreatePublicConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePublicConfigOutcome>>();
    CreatePublicConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const CreatePublicConfigRequest&,
        CreatePublicConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreatePublicConfigWithDetailRespOutcome TsfClient::CreatePublicConfigWithDetailResp(const CreatePublicConfigWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePublicConfigWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePublicConfigWithDetailRespResponse rsp = CreatePublicConfigWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePublicConfigWithDetailRespOutcome(rsp);
        else
            return CreatePublicConfigWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreatePublicConfigWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreatePublicConfigWithDetailRespAsync(const CreatePublicConfigWithDetailRespRequest& request, const CreatePublicConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePublicConfigWithDetailRespRequest&;
    using Resp = CreatePublicConfigWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePublicConfigWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreatePublicConfigWithDetailRespOutcomeCallable TsfClient::CreatePublicConfigWithDetailRespCallable(const CreatePublicConfigWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePublicConfigWithDetailRespOutcome>>();
    CreatePublicConfigWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreatePublicConfigWithDetailRespRequest&,
        CreatePublicConfigWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateRepositoryOutcome TsfClient::CreateRepository(const CreateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRepositoryResponse rsp = CreateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRepositoryOutcome(rsp);
        else
            return CreateRepositoryOutcome(o.GetError());
    }
    else
    {
        return CreateRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::CreateRepositoryAsync(const CreateRepositoryRequest& request, const CreateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRepositoryRequest&;
    using Resp = CreateRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateRepositoryOutcomeCallable TsfClient::CreateRepositoryCallable(const CreateRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRepositoryOutcome>>();
    CreateRepositoryAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateRepositoryRequest&,
        CreateRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateTaskOutcome TsfClient::CreateTask(const CreateTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskResponse rsp = CreateTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskOutcome(rsp);
        else
            return CreateTaskOutcome(o.GetError());
    }
    else
    {
        return CreateTaskOutcome(outcome.GetError());
    }
}

void TsfClient::CreateTaskAsync(const CreateTaskRequest& request, const CreateTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskRequest&;
    using Resp = CreateTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateTaskOutcomeCallable TsfClient::CreateTaskCallable(const CreateTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskOutcome>>();
    CreateTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateTaskRequest&,
        CreateTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateTaskFlowOutcome TsfClient::CreateTaskFlow(const CreateTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTaskFlowResponse rsp = CreateTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTaskFlowOutcome(rsp);
        else
            return CreateTaskFlowOutcome(o.GetError());
    }
    else
    {
        return CreateTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::CreateTaskFlowAsync(const CreateTaskFlowRequest& request, const CreateTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTaskFlowRequest&;
    using Resp = CreateTaskFlowResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTaskFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateTaskFlowOutcomeCallable TsfClient::CreateTaskFlowCallable(const CreateTaskFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTaskFlowOutcome>>();
    CreateTaskFlowAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateTaskFlowRequest&,
        CreateTaskFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateUnitNamespacesOutcome TsfClient::CreateUnitNamespaces(const CreateUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnitNamespacesResponse rsp = CreateUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnitNamespacesOutcome(rsp);
        else
            return CreateUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return CreateUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::CreateUnitNamespacesAsync(const CreateUnitNamespacesRequest& request, const CreateUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUnitNamespacesRequest&;
    using Resp = CreateUnitNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUnitNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateUnitNamespacesOutcomeCallable TsfClient::CreateUnitNamespacesCallable(const CreateUnitNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUnitNamespacesOutcome>>();
    CreateUnitNamespacesAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateUnitNamespacesRequest&,
        CreateUnitNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateUnitRuleOutcome TsfClient::CreateUnitRule(const CreateUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnitRuleResponse rsp = CreateUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnitRuleOutcome(rsp);
        else
            return CreateUnitRuleOutcome(o.GetError());
    }
    else
    {
        return CreateUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::CreateUnitRuleAsync(const CreateUnitRuleRequest& request, const CreateUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUnitRuleRequest&;
    using Resp = CreateUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateUnitRuleOutcomeCallable TsfClient::CreateUnitRuleCallable(const CreateUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUnitRuleOutcome>>();
    CreateUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateUnitRuleRequest&,
        CreateUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::CreateUnitRuleWithDetailRespOutcome TsfClient::CreateUnitRuleWithDetailResp(const CreateUnitRuleWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "CreateUnitRuleWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateUnitRuleWithDetailRespResponse rsp = CreateUnitRuleWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateUnitRuleWithDetailRespOutcome(rsp);
        else
            return CreateUnitRuleWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return CreateUnitRuleWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::CreateUnitRuleWithDetailRespAsync(const CreateUnitRuleWithDetailRespRequest& request, const CreateUnitRuleWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateUnitRuleWithDetailRespRequest&;
    using Resp = CreateUnitRuleWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "CreateUnitRuleWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::CreateUnitRuleWithDetailRespOutcomeCallable TsfClient::CreateUnitRuleWithDetailRespCallable(const CreateUnitRuleWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateUnitRuleWithDetailRespOutcome>>();
    CreateUnitRuleWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const CreateUnitRuleWithDetailRespRequest&,
        CreateUnitRuleWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteApiGroupOutcome TsfClient::DeleteApiGroup(const DeleteApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiGroupResponse rsp = DeleteApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiGroupOutcome(rsp);
        else
            return DeleteApiGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteApiGroupAsync(const DeleteApiGroupRequest& request, const DeleteApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiGroupRequest&;
    using Resp = DeleteApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteApiGroupOutcomeCallable TsfClient::DeleteApiGroupCallable(const DeleteApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiGroupOutcome>>();
    DeleteApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteApiGroupRequest&,
        DeleteApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteApiRateLimitRuleOutcome TsfClient::DeleteApiRateLimitRule(const DeleteApiRateLimitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApiRateLimitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApiRateLimitRuleResponse rsp = DeleteApiRateLimitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApiRateLimitRuleOutcome(rsp);
        else
            return DeleteApiRateLimitRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteApiRateLimitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteApiRateLimitRuleAsync(const DeleteApiRateLimitRuleRequest& request, const DeleteApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteApiRateLimitRuleRequest&;
    using Resp = DeleteApiRateLimitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteApiRateLimitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteApiRateLimitRuleOutcomeCallable TsfClient::DeleteApiRateLimitRuleCallable(const DeleteApiRateLimitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApiRateLimitRuleOutcome>>();
    DeleteApiRateLimitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteApiRateLimitRuleRequest&,
        DeleteApiRateLimitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteApplicationOutcome TsfClient::DeleteApplication(const DeleteApplicationRequest &request)
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

void TsfClient::DeleteApplicationAsync(const DeleteApplicationRequest& request, const DeleteApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TsfClient::DeleteApplicationOutcomeCallable TsfClient::DeleteApplicationCallable(const DeleteApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteApplicationOutcome>>();
    DeleteApplicationAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteApplicationRequest&,
        DeleteApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteClusterOutcome TsfClient::DeleteCluster(const DeleteClusterRequest &request)
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

void TsfClient::DeleteClusterAsync(const DeleteClusterRequest& request, const DeleteClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TsfClient::DeleteClusterOutcomeCallable TsfClient::DeleteClusterCallable(const DeleteClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteClusterOutcome>>();
    DeleteClusterAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteClusterRequest&,
        DeleteClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteConfigOutcome TsfClient::DeleteConfig(const DeleteConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigResponse rsp = DeleteConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigOutcome(rsp);
        else
            return DeleteConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteConfigAsync(const DeleteConfigRequest& request, const DeleteConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigRequest&;
    using Resp = DeleteConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteConfigOutcomeCallable TsfClient::DeleteConfigCallable(const DeleteConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigOutcome>>();
    DeleteConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteConfigRequest&,
        DeleteConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteConfigTemplateOutcome TsfClient::DeleteConfigTemplate(const DeleteConfigTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteConfigTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteConfigTemplateResponse rsp = DeleteConfigTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteConfigTemplateOutcome(rsp);
        else
            return DeleteConfigTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteConfigTemplateOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteConfigTemplateAsync(const DeleteConfigTemplateRequest& request, const DeleteConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteConfigTemplateRequest&;
    using Resp = DeleteConfigTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteConfigTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteConfigTemplateOutcomeCallable TsfClient::DeleteConfigTemplateCallable(const DeleteConfigTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteConfigTemplateOutcome>>();
    DeleteConfigTemplateAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteConfigTemplateRequest&,
        DeleteConfigTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteContainerGroupOutcome TsfClient::DeleteContainerGroup(const DeleteContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteContainerGroupResponse rsp = DeleteContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteContainerGroupOutcome(rsp);
        else
            return DeleteContainerGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteContainerGroupAsync(const DeleteContainerGroupRequest& request, const DeleteContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteContainerGroupRequest&;
    using Resp = DeleteContainerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteContainerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteContainerGroupOutcomeCallable TsfClient::DeleteContainerGroupCallable(const DeleteContainerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteContainerGroupOutcome>>();
    DeleteContainerGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteContainerGroupRequest&,
        DeleteContainerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteFileConfigOutcome TsfClient::DeleteFileConfig(const DeleteFileConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteFileConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteFileConfigResponse rsp = DeleteFileConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteFileConfigOutcome(rsp);
        else
            return DeleteFileConfigOutcome(o.GetError());
    }
    else
    {
        return DeleteFileConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteFileConfigAsync(const DeleteFileConfigRequest& request, const DeleteFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteFileConfigRequest&;
    using Resp = DeleteFileConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteFileConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteFileConfigOutcomeCallable TsfClient::DeleteFileConfigCallable(const DeleteFileConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteFileConfigOutcome>>();
    DeleteFileConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteFileConfigRequest&,
        DeleteFileConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteGatewayApiOutcome TsfClient::DeleteGatewayApi(const DeleteGatewayApiRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteGatewayApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteGatewayApiResponse rsp = DeleteGatewayApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteGatewayApiOutcome(rsp);
        else
            return DeleteGatewayApiOutcome(o.GetError());
    }
    else
    {
        return DeleteGatewayApiOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteGatewayApiAsync(const DeleteGatewayApiRequest& request, const DeleteGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGatewayApiRequest&;
    using Resp = DeleteGatewayApiResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGatewayApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteGatewayApiOutcomeCallable TsfClient::DeleteGatewayApiCallable(const DeleteGatewayApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGatewayApiOutcome>>();
    DeleteGatewayApiAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteGatewayApiRequest&,
        DeleteGatewayApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteGroupOutcome TsfClient::DeleteGroup(const DeleteGroupRequest &request)
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

void TsfClient::DeleteGroupAsync(const DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteGroupRequest&;
    using Resp = DeleteGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteGroupOutcomeCallable TsfClient::DeleteGroupCallable(const DeleteGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteGroupOutcome>>();
    DeleteGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteGroupRequest&,
        DeleteGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteImageTagsOutcome TsfClient::DeleteImageTags(const DeleteImageTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteImageTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteImageTagsResponse rsp = DeleteImageTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteImageTagsOutcome(rsp);
        else
            return DeleteImageTagsOutcome(o.GetError());
    }
    else
    {
        return DeleteImageTagsOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteImageTagsAsync(const DeleteImageTagsRequest& request, const DeleteImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteImageTagsRequest&;
    using Resp = DeleteImageTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteImageTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteImageTagsOutcomeCallable TsfClient::DeleteImageTagsCallable(const DeleteImageTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteImageTagsOutcome>>();
    DeleteImageTagsAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteImageTagsRequest&,
        DeleteImageTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteLaneOutcome TsfClient::DeleteLane(const DeleteLaneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaneResponse rsp = DeleteLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaneOutcome(rsp);
        else
            return DeleteLaneOutcome(o.GetError());
    }
    else
    {
        return DeleteLaneOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteLaneAsync(const DeleteLaneRequest& request, const DeleteLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLaneRequest&;
    using Resp = DeleteLaneResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLane", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteLaneOutcomeCallable TsfClient::DeleteLaneCallable(const DeleteLaneRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLaneOutcome>>();
    DeleteLaneAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteLaneRequest&,
        DeleteLaneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteLaneRuleOutcome TsfClient::DeleteLaneRule(const DeleteLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLaneRuleResponse rsp = DeleteLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLaneRuleOutcome(rsp);
        else
            return DeleteLaneRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteLaneRuleAsync(const DeleteLaneRuleRequest& request, const DeleteLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteLaneRuleRequest&;
    using Resp = DeleteLaneRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteLaneRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteLaneRuleOutcomeCallable TsfClient::DeleteLaneRuleCallable(const DeleteLaneRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteLaneRuleOutcome>>();
    DeleteLaneRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteLaneRuleRequest&,
        DeleteLaneRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteMicroserviceOutcome TsfClient::DeleteMicroservice(const DeleteMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMicroserviceResponse rsp = DeleteMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMicroserviceOutcome(rsp);
        else
            return DeleteMicroserviceOutcome(o.GetError());
    }
    else
    {
        return DeleteMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteMicroserviceAsync(const DeleteMicroserviceRequest& request, const DeleteMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteMicroserviceRequest&;
    using Resp = DeleteMicroserviceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteMicroservice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteMicroserviceOutcomeCallable TsfClient::DeleteMicroserviceCallable(const DeleteMicroserviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteMicroserviceOutcome>>();
    DeleteMicroserviceAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteMicroserviceRequest&,
        DeleteMicroserviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteNamespaceOutcome TsfClient::DeleteNamespace(const DeleteNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNamespaceResponse rsp = DeleteNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNamespaceOutcome(rsp);
        else
            return DeleteNamespaceOutcome(o.GetError());
    }
    else
    {
        return DeleteNamespaceOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteNamespaceAsync(const DeleteNamespaceRequest& request, const DeleteNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteNamespaceRequest&;
    using Resp = DeleteNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteNamespaceOutcomeCallable TsfClient::DeleteNamespaceCallable(const DeleteNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteNamespaceOutcome>>();
    DeleteNamespaceAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteNamespaceRequest&,
        DeleteNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeletePathRewritesOutcome TsfClient::DeletePathRewrites(const DeletePathRewritesRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePathRewrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePathRewritesResponse rsp = DeletePathRewritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePathRewritesOutcome(rsp);
        else
            return DeletePathRewritesOutcome(o.GetError());
    }
    else
    {
        return DeletePathRewritesOutcome(outcome.GetError());
    }
}

void TsfClient::DeletePathRewritesAsync(const DeletePathRewritesRequest& request, const DeletePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePathRewritesRequest&;
    using Resp = DeletePathRewritesResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePathRewrites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeletePathRewritesOutcomeCallable TsfClient::DeletePathRewritesCallable(const DeletePathRewritesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePathRewritesOutcome>>();
    DeletePathRewritesAsync(
    request,
    [prom](
        const TsfClient*,
        const DeletePathRewritesRequest&,
        DeletePathRewritesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeletePkgsOutcome TsfClient::DeletePkgs(const DeletePkgsRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePkgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePkgsResponse rsp = DeletePkgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePkgsOutcome(rsp);
        else
            return DeletePkgsOutcome(o.GetError());
    }
    else
    {
        return DeletePkgsOutcome(outcome.GetError());
    }
}

void TsfClient::DeletePkgsAsync(const DeletePkgsRequest& request, const DeletePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePkgsRequest&;
    using Resp = DeletePkgsResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePkgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeletePkgsOutcomeCallable TsfClient::DeletePkgsCallable(const DeletePkgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePkgsOutcome>>();
    DeletePkgsAsync(
    request,
    [prom](
        const TsfClient*,
        const DeletePkgsRequest&,
        DeletePkgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeletePublicConfigOutcome TsfClient::DeletePublicConfig(const DeletePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePublicConfigResponse rsp = DeletePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePublicConfigOutcome(rsp);
        else
            return DeletePublicConfigOutcome(o.GetError());
    }
    else
    {
        return DeletePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DeletePublicConfigAsync(const DeletePublicConfigRequest& request, const DeletePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePublicConfigRequest&;
    using Resp = DeletePublicConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePublicConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeletePublicConfigOutcomeCallable TsfClient::DeletePublicConfigCallable(const DeletePublicConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePublicConfigOutcome>>();
    DeletePublicConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DeletePublicConfigRequest&,
        DeletePublicConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteRepositoryOutcome TsfClient::DeleteRepository(const DeleteRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRepositoryResponse rsp = DeleteRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRepositoryOutcome(rsp);
        else
            return DeleteRepositoryOutcome(o.GetError());
    }
    else
    {
        return DeleteRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteRepositoryAsync(const DeleteRepositoryRequest& request, const DeleteRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRepositoryRequest&;
    using Resp = DeleteRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteRepositoryOutcomeCallable TsfClient::DeleteRepositoryCallable(const DeleteRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRepositoryOutcome>>();
    DeleteRepositoryAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteRepositoryRequest&,
        DeleteRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteServerlessGroupOutcome TsfClient::DeleteServerlessGroup(const DeleteServerlessGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteServerlessGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteServerlessGroupResponse rsp = DeleteServerlessGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteServerlessGroupOutcome(rsp);
        else
            return DeleteServerlessGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteServerlessGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteServerlessGroupAsync(const DeleteServerlessGroupRequest& request, const DeleteServerlessGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteServerlessGroupRequest&;
    using Resp = DeleteServerlessGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteServerlessGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteServerlessGroupOutcomeCallable TsfClient::DeleteServerlessGroupCallable(const DeleteServerlessGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteServerlessGroupOutcome>>();
    DeleteServerlessGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteServerlessGroupRequest&,
        DeleteServerlessGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteTaskOutcome TsfClient::DeleteTask(const DeleteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTaskResponse rsp = DeleteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTaskOutcome(rsp);
        else
            return DeleteTaskOutcome(o.GetError());
    }
    else
    {
        return DeleteTaskOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteTaskAsync(const DeleteTaskRequest& request, const DeleteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTaskRequest&;
    using Resp = DeleteTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteTaskOutcomeCallable TsfClient::DeleteTaskCallable(const DeleteTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTaskOutcome>>();
    DeleteTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteTaskRequest&,
        DeleteTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteUnitNamespacesOutcome TsfClient::DeleteUnitNamespaces(const DeleteUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUnitNamespacesResponse rsp = DeleteUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUnitNamespacesOutcome(rsp);
        else
            return DeleteUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return DeleteUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteUnitNamespacesAsync(const DeleteUnitNamespacesRequest& request, const DeleteUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUnitNamespacesRequest&;
    using Resp = DeleteUnitNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUnitNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteUnitNamespacesOutcomeCallable TsfClient::DeleteUnitNamespacesCallable(const DeleteUnitNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUnitNamespacesOutcome>>();
    DeleteUnitNamespacesAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteUnitNamespacesRequest&,
        DeleteUnitNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeleteUnitRuleOutcome TsfClient::DeleteUnitRule(const DeleteUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteUnitRuleResponse rsp = DeleteUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteUnitRuleOutcome(rsp);
        else
            return DeleteUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DeleteUnitRuleAsync(const DeleteUnitRuleRequest& request, const DeleteUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteUnitRuleRequest&;
    using Resp = DeleteUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeleteUnitRuleOutcomeCallable TsfClient::DeleteUnitRuleCallable(const DeleteUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteUnitRuleOutcome>>();
    DeleteUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DeleteUnitRuleRequest&,
        DeleteUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeployContainerApplicationOutcome TsfClient::DeployContainerApplication(const DeployContainerApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DeployContainerApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployContainerApplicationResponse rsp = DeployContainerApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployContainerApplicationOutcome(rsp);
        else
            return DeployContainerApplicationOutcome(o.GetError());
    }
    else
    {
        return DeployContainerApplicationOutcome(outcome.GetError());
    }
}

void TsfClient::DeployContainerApplicationAsync(const DeployContainerApplicationRequest& request, const DeployContainerApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployContainerApplicationRequest&;
    using Resp = DeployContainerApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DeployContainerApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeployContainerApplicationOutcomeCallable TsfClient::DeployContainerApplicationCallable(const DeployContainerApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployContainerApplicationOutcome>>();
    DeployContainerApplicationAsync(
    request,
    [prom](
        const TsfClient*,
        const DeployContainerApplicationRequest&,
        DeployContainerApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeployContainerGroupOutcome TsfClient::DeployContainerGroup(const DeployContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeployContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployContainerGroupResponse rsp = DeployContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployContainerGroupOutcome(rsp);
        else
            return DeployContainerGroupOutcome(o.GetError());
    }
    else
    {
        return DeployContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeployContainerGroupAsync(const DeployContainerGroupRequest& request, const DeployContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployContainerGroupRequest&;
    using Resp = DeployContainerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeployContainerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeployContainerGroupOutcomeCallable TsfClient::DeployContainerGroupCallable(const DeployContainerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployContainerGroupOutcome>>();
    DeployContainerGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DeployContainerGroupRequest&,
        DeployContainerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DeployGroupOutcome TsfClient::DeployGroup(const DeployGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeployGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeployGroupResponse rsp = DeployGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeployGroupOutcome(rsp);
        else
            return DeployGroupOutcome(o.GetError());
    }
    else
    {
        return DeployGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DeployGroupAsync(const DeployGroupRequest& request, const DeployGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeployGroupRequest&;
    using Resp = DeployGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DeployGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DeployGroupOutcomeCallable TsfClient::DeployGroupCallable(const DeployGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeployGroupOutcome>>();
    DeployGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DeployGroupRequest&,
        DeployGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApiDetailOutcome TsfClient::DescribeApiDetail(const DescribeApiDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiDetailResponse rsp = DescribeApiDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiDetailOutcome(rsp);
        else
            return DescribeApiDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApiDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiDetailAsync(const DescribeApiDetailRequest& request, const DescribeApiDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiDetailRequest&;
    using Resp = DescribeApiDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApiDetailOutcomeCallable TsfClient::DescribeApiDetailCallable(const DescribeApiDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiDetailOutcome>>();
    DescribeApiDetailAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApiDetailRequest&,
        DescribeApiDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApiGroupOutcome TsfClient::DescribeApiGroup(const DescribeApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiGroupResponse rsp = DescribeApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiGroupOutcome(rsp);
        else
            return DescribeApiGroupOutcome(o.GetError());
    }
    else
    {
        return DescribeApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiGroupAsync(const DescribeApiGroupRequest& request, const DescribeApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiGroupRequest&;
    using Resp = DescribeApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApiGroupOutcomeCallable TsfClient::DescribeApiGroupCallable(const DescribeApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiGroupOutcome>>();
    DescribeApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApiGroupRequest&,
        DescribeApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApiGroupsOutcome TsfClient::DescribeApiGroups(const DescribeApiGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiGroupsResponse rsp = DescribeApiGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiGroupsOutcome(rsp);
        else
            return DescribeApiGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeApiGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiGroupsAsync(const DescribeApiGroupsRequest& request, const DescribeApiGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiGroupsRequest&;
    using Resp = DescribeApiGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApiGroupsOutcomeCallable TsfClient::DescribeApiGroupsCallable(const DescribeApiGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiGroupsOutcome>>();
    DescribeApiGroupsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApiGroupsRequest&,
        DescribeApiGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApiRateLimitRulesOutcome TsfClient::DescribeApiRateLimitRules(const DescribeApiRateLimitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiRateLimitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiRateLimitRulesResponse rsp = DescribeApiRateLimitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiRateLimitRulesOutcome(rsp);
        else
            return DescribeApiRateLimitRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeApiRateLimitRulesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiRateLimitRulesAsync(const DescribeApiRateLimitRulesRequest& request, const DescribeApiRateLimitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiRateLimitRulesRequest&;
    using Resp = DescribeApiRateLimitRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiRateLimitRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApiRateLimitRulesOutcomeCallable TsfClient::DescribeApiRateLimitRulesCallable(const DescribeApiRateLimitRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiRateLimitRulesOutcome>>();
    DescribeApiRateLimitRulesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApiRateLimitRulesRequest&,
        DescribeApiRateLimitRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApiUseDetailOutcome TsfClient::DescribeApiUseDetail(const DescribeApiUseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiUseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiUseDetailResponse rsp = DescribeApiUseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiUseDetailOutcome(rsp);
        else
            return DescribeApiUseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApiUseDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiUseDetailAsync(const DescribeApiUseDetailRequest& request, const DescribeApiUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiUseDetailRequest&;
    using Resp = DescribeApiUseDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiUseDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApiUseDetailOutcomeCallable TsfClient::DescribeApiUseDetailCallable(const DescribeApiUseDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiUseDetailOutcome>>();
    DescribeApiUseDetailAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApiUseDetailRequest&,
        DescribeApiUseDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApiVersionsOutcome TsfClient::DescribeApiVersions(const DescribeApiVersionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApiVersions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApiVersionsResponse rsp = DescribeApiVersionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApiVersionsOutcome(rsp);
        else
            return DescribeApiVersionsOutcome(o.GetError());
    }
    else
    {
        return DescribeApiVersionsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApiVersionsAsync(const DescribeApiVersionsRequest& request, const DescribeApiVersionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApiVersionsRequest&;
    using Resp = DescribeApiVersionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApiVersions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApiVersionsOutcomeCallable TsfClient::DescribeApiVersionsCallable(const DescribeApiVersionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApiVersionsOutcome>>();
    DescribeApiVersionsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApiVersionsRequest&,
        DescribeApiVersionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApplicationOutcome TsfClient::DescribeApplication(const DescribeApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationResponse rsp = DescribeApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationOutcome(rsp);
        else
            return DescribeApplicationOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApplicationAsync(const DescribeApplicationRequest& request, const DescribeApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationRequest&;
    using Resp = DescribeApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApplicationOutcomeCallable TsfClient::DescribeApplicationCallable(const DescribeApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationOutcome>>();
    DescribeApplicationAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApplicationRequest&,
        DescribeApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApplicationAttributeOutcome TsfClient::DescribeApplicationAttribute(const DescribeApplicationAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationAttributeResponse rsp = DescribeApplicationAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationAttributeOutcome(rsp);
        else
            return DescribeApplicationAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationAttributeOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeApplicationAttributeAsync(const DescribeApplicationAttributeRequest& request, const DescribeApplicationAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeApplicationAttributeRequest&;
    using Resp = DescribeApplicationAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeApplicationAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeApplicationAttributeOutcomeCallable TsfClient::DescribeApplicationAttributeCallable(const DescribeApplicationAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationAttributeOutcome>>();
    DescribeApplicationAttributeAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApplicationAttributeRequest&,
        DescribeApplicationAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeApplicationsOutcome TsfClient::DescribeApplications(const DescribeApplicationsRequest &request)
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

void TsfClient::DescribeApplicationsAsync(const DescribeApplicationsRequest& request, const DescribeApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TsfClient::DescribeApplicationsOutcomeCallable TsfClient::DescribeApplicationsCallable(const DescribeApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeApplicationsOutcome>>();
    DescribeApplicationsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeApplicationsRequest&,
        DescribeApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeBasicResourceUsageOutcome TsfClient::DescribeBasicResourceUsage(const DescribeBasicResourceUsageRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBasicResourceUsage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBasicResourceUsageResponse rsp = DescribeBasicResourceUsageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBasicResourceUsageOutcome(rsp);
        else
            return DescribeBasicResourceUsageOutcome(o.GetError());
    }
    else
    {
        return DescribeBasicResourceUsageOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeBasicResourceUsageAsync(const DescribeBasicResourceUsageRequest& request, const DescribeBasicResourceUsageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBasicResourceUsageRequest&;
    using Resp = DescribeBasicResourceUsageResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBasicResourceUsage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeBasicResourceUsageOutcomeCallable TsfClient::DescribeBasicResourceUsageCallable(const DescribeBasicResourceUsageRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBasicResourceUsageOutcome>>();
    DescribeBasicResourceUsageAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeBasicResourceUsageRequest&,
        DescribeBasicResourceUsageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeBusinessLogConfigOutcome TsfClient::DescribeBusinessLogConfig(const DescribeBusinessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBusinessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBusinessLogConfigResponse rsp = DescribeBusinessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBusinessLogConfigOutcome(rsp);
        else
            return DescribeBusinessLogConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeBusinessLogConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeBusinessLogConfigAsync(const DescribeBusinessLogConfigRequest& request, const DescribeBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBusinessLogConfigRequest&;
    using Resp = DescribeBusinessLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBusinessLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeBusinessLogConfigOutcomeCallable TsfClient::DescribeBusinessLogConfigCallable(const DescribeBusinessLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBusinessLogConfigOutcome>>();
    DescribeBusinessLogConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeBusinessLogConfigRequest&,
        DescribeBusinessLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeBusinessLogConfigsOutcome TsfClient::DescribeBusinessLogConfigs(const DescribeBusinessLogConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBusinessLogConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBusinessLogConfigsResponse rsp = DescribeBusinessLogConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBusinessLogConfigsOutcome(rsp);
        else
            return DescribeBusinessLogConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeBusinessLogConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeBusinessLogConfigsAsync(const DescribeBusinessLogConfigsRequest& request, const DescribeBusinessLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBusinessLogConfigsRequest&;
    using Resp = DescribeBusinessLogConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBusinessLogConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeBusinessLogConfigsOutcomeCallable TsfClient::DescribeBusinessLogConfigsCallable(const DescribeBusinessLogConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBusinessLogConfigsOutcome>>();
    DescribeBusinessLogConfigsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeBusinessLogConfigsRequest&,
        DescribeBusinessLogConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeClusterInstancesOutcome TsfClient::DescribeClusterInstances(const DescribeClusterInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeClusterInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeClusterInstancesResponse rsp = DescribeClusterInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeClusterInstancesOutcome(rsp);
        else
            return DescribeClusterInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeClusterInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeClusterInstancesAsync(const DescribeClusterInstancesRequest& request, const DescribeClusterInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeClusterInstancesRequest&;
    using Resp = DescribeClusterInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeClusterInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeClusterInstancesOutcomeCallable TsfClient::DescribeClusterInstancesCallable(const DescribeClusterInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClusterInstancesOutcome>>();
    DescribeClusterInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeClusterInstancesRequest&,
        DescribeClusterInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeClustersOutcome TsfClient::DescribeClusters(const DescribeClustersRequest &request)
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

void TsfClient::DescribeClustersAsync(const DescribeClustersRequest& request, const DescribeClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
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

TsfClient::DescribeClustersOutcomeCallable TsfClient::DescribeClustersCallable(const DescribeClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeClustersOutcome>>();
    DescribeClustersAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeClustersRequest&,
        DescribeClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeConfigOutcome TsfClient::DescribeConfig(const DescribeConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigResponse rsp = DescribeConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigOutcome(rsp);
        else
            return DescribeConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigAsync(const DescribeConfigRequest& request, const DescribeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigRequest&;
    using Resp = DescribeConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeConfigOutcomeCallable TsfClient::DescribeConfigCallable(const DescribeConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigOutcome>>();
    DescribeConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeConfigRequest&,
        DescribeConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeConfigReleaseLogsOutcome TsfClient::DescribeConfigReleaseLogs(const DescribeConfigReleaseLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigReleaseLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigReleaseLogsResponse rsp = DescribeConfigReleaseLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigReleaseLogsOutcome(rsp);
        else
            return DescribeConfigReleaseLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigReleaseLogsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigReleaseLogsAsync(const DescribeConfigReleaseLogsRequest& request, const DescribeConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigReleaseLogsRequest&;
    using Resp = DescribeConfigReleaseLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigReleaseLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeConfigReleaseLogsOutcomeCallable TsfClient::DescribeConfigReleaseLogsCallable(const DescribeConfigReleaseLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigReleaseLogsOutcome>>();
    DescribeConfigReleaseLogsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeConfigReleaseLogsRequest&,
        DescribeConfigReleaseLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeConfigReleasesOutcome TsfClient::DescribeConfigReleases(const DescribeConfigReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigReleasesResponse rsp = DescribeConfigReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigReleasesOutcome(rsp);
        else
            return DescribeConfigReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigReleasesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigReleasesAsync(const DescribeConfigReleasesRequest& request, const DescribeConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigReleasesRequest&;
    using Resp = DescribeConfigReleasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigReleases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeConfigReleasesOutcomeCallable TsfClient::DescribeConfigReleasesCallable(const DescribeConfigReleasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigReleasesOutcome>>();
    DescribeConfigReleasesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeConfigReleasesRequest&,
        DescribeConfigReleasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeConfigSummaryOutcome TsfClient::DescribeConfigSummary(const DescribeConfigSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigSummaryResponse rsp = DescribeConfigSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigSummaryOutcome(rsp);
        else
            return DescribeConfigSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigSummaryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigSummaryAsync(const DescribeConfigSummaryRequest& request, const DescribeConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigSummaryRequest&;
    using Resp = DescribeConfigSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeConfigSummaryOutcomeCallable TsfClient::DescribeConfigSummaryCallable(const DescribeConfigSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigSummaryOutcome>>();
    DescribeConfigSummaryAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeConfigSummaryRequest&,
        DescribeConfigSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeConfigTemplateOutcome TsfClient::DescribeConfigTemplate(const DescribeConfigTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigTemplateResponse rsp = DescribeConfigTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigTemplateOutcome(rsp);
        else
            return DescribeConfigTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigTemplateOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigTemplateAsync(const DescribeConfigTemplateRequest& request, const DescribeConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigTemplateRequest&;
    using Resp = DescribeConfigTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeConfigTemplateOutcomeCallable TsfClient::DescribeConfigTemplateCallable(const DescribeConfigTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigTemplateOutcome>>();
    DescribeConfigTemplateAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeConfigTemplateRequest&,
        DescribeConfigTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeConfigsOutcome TsfClient::DescribeConfigs(const DescribeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigsResponse rsp = DescribeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigsOutcome(rsp);
        else
            return DescribeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigsRequest&;
    using Resp = DescribeConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeConfigsOutcomeCallable TsfClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigsOutcome>>();
    DescribeConfigsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeConfigsRequest&,
        DescribeConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeContainerEventsOutcome TsfClient::DescribeContainerEvents(const DescribeContainerEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerEventsResponse rsp = DescribeContainerEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerEventsOutcome(rsp);
        else
            return DescribeContainerEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerEventsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerEventsAsync(const DescribeContainerEventsRequest& request, const DescribeContainerEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerEventsRequest&;
    using Resp = DescribeContainerEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeContainerEventsOutcomeCallable TsfClient::DescribeContainerEventsCallable(const DescribeContainerEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerEventsOutcome>>();
    DescribeContainerEventsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeContainerEventsRequest&,
        DescribeContainerEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeContainerGroupAttributeOutcome TsfClient::DescribeContainerGroupAttribute(const DescribeContainerGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerGroupAttributeResponse rsp = DescribeContainerGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerGroupAttributeOutcome(rsp);
        else
            return DescribeContainerGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerGroupAttributeOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerGroupAttributeAsync(const DescribeContainerGroupAttributeRequest& request, const DescribeContainerGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerGroupAttributeRequest&;
    using Resp = DescribeContainerGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeContainerGroupAttributeOutcomeCallable TsfClient::DescribeContainerGroupAttributeCallable(const DescribeContainerGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerGroupAttributeOutcome>>();
    DescribeContainerGroupAttributeAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeContainerGroupAttributeRequest&,
        DescribeContainerGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeContainerGroupDeployInfoOutcome TsfClient::DescribeContainerGroupDeployInfo(const DescribeContainerGroupDeployInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerGroupDeployInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerGroupDeployInfoResponse rsp = DescribeContainerGroupDeployInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerGroupDeployInfoOutcome(rsp);
        else
            return DescribeContainerGroupDeployInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerGroupDeployInfoOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerGroupDeployInfoAsync(const DescribeContainerGroupDeployInfoRequest& request, const DescribeContainerGroupDeployInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerGroupDeployInfoRequest&;
    using Resp = DescribeContainerGroupDeployInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerGroupDeployInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeContainerGroupDeployInfoOutcomeCallable TsfClient::DescribeContainerGroupDeployInfoCallable(const DescribeContainerGroupDeployInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerGroupDeployInfoOutcome>>();
    DescribeContainerGroupDeployInfoAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeContainerGroupDeployInfoRequest&,
        DescribeContainerGroupDeployInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeContainerGroupDetailOutcome TsfClient::DescribeContainerGroupDetail(const DescribeContainerGroupDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerGroupDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerGroupDetailResponse rsp = DescribeContainerGroupDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerGroupDetailOutcome(rsp);
        else
            return DescribeContainerGroupDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerGroupDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerGroupDetailAsync(const DescribeContainerGroupDetailRequest& request, const DescribeContainerGroupDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerGroupDetailRequest&;
    using Resp = DescribeContainerGroupDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerGroupDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeContainerGroupDetailOutcomeCallable TsfClient::DescribeContainerGroupDetailCallable(const DescribeContainerGroupDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerGroupDetailOutcome>>();
    DescribeContainerGroupDetailAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeContainerGroupDetailRequest&,
        DescribeContainerGroupDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeContainerGroupsOutcome TsfClient::DescribeContainerGroups(const DescribeContainerGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeContainerGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeContainerGroupsResponse rsp = DescribeContainerGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeContainerGroupsOutcome(rsp);
        else
            return DescribeContainerGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeContainerGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeContainerGroupsAsync(const DescribeContainerGroupsRequest& request, const DescribeContainerGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeContainerGroupsRequest&;
    using Resp = DescribeContainerGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeContainerGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeContainerGroupsOutcomeCallable TsfClient::DescribeContainerGroupsCallable(const DescribeContainerGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeContainerGroupsOutcome>>();
    DescribeContainerGroupsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeContainerGroupsRequest&,
        DescribeContainerGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeCreateGatewayApiStatusOutcome TsfClient::DescribeCreateGatewayApiStatus(const DescribeCreateGatewayApiStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCreateGatewayApiStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCreateGatewayApiStatusResponse rsp = DescribeCreateGatewayApiStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCreateGatewayApiStatusOutcome(rsp);
        else
            return DescribeCreateGatewayApiStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCreateGatewayApiStatusOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeCreateGatewayApiStatusAsync(const DescribeCreateGatewayApiStatusRequest& request, const DescribeCreateGatewayApiStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCreateGatewayApiStatusRequest&;
    using Resp = DescribeCreateGatewayApiStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCreateGatewayApiStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeCreateGatewayApiStatusOutcomeCallable TsfClient::DescribeCreateGatewayApiStatusCallable(const DescribeCreateGatewayApiStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCreateGatewayApiStatusOutcome>>();
    DescribeCreateGatewayApiStatusAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeCreateGatewayApiStatusRequest&,
        DescribeCreateGatewayApiStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeDeliveryConfigOutcome TsfClient::DescribeDeliveryConfig(const DescribeDeliveryConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliveryConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliveryConfigResponse rsp = DescribeDeliveryConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliveryConfigOutcome(rsp);
        else
            return DescribeDeliveryConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliveryConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeDeliveryConfigAsync(const DescribeDeliveryConfigRequest& request, const DescribeDeliveryConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeliveryConfigRequest&;
    using Resp = DescribeDeliveryConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeliveryConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeDeliveryConfigOutcomeCallable TsfClient::DescribeDeliveryConfigCallable(const DescribeDeliveryConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeliveryConfigOutcome>>();
    DescribeDeliveryConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeDeliveryConfigRequest&,
        DescribeDeliveryConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeDeliveryConfigByGroupIdOutcome TsfClient::DescribeDeliveryConfigByGroupId(const DescribeDeliveryConfigByGroupIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliveryConfigByGroupId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliveryConfigByGroupIdResponse rsp = DescribeDeliveryConfigByGroupIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliveryConfigByGroupIdOutcome(rsp);
        else
            return DescribeDeliveryConfigByGroupIdOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliveryConfigByGroupIdOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeDeliveryConfigByGroupIdAsync(const DescribeDeliveryConfigByGroupIdRequest& request, const DescribeDeliveryConfigByGroupIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeliveryConfigByGroupIdRequest&;
    using Resp = DescribeDeliveryConfigByGroupIdResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeliveryConfigByGroupId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeDeliveryConfigByGroupIdOutcomeCallable TsfClient::DescribeDeliveryConfigByGroupIdCallable(const DescribeDeliveryConfigByGroupIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeliveryConfigByGroupIdOutcome>>();
    DescribeDeliveryConfigByGroupIdAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeDeliveryConfigByGroupIdRequest&,
        DescribeDeliveryConfigByGroupIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeDeliveryConfigsOutcome TsfClient::DescribeDeliveryConfigs(const DescribeDeliveryConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDeliveryConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDeliveryConfigsResponse rsp = DescribeDeliveryConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDeliveryConfigsOutcome(rsp);
        else
            return DescribeDeliveryConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeDeliveryConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeDeliveryConfigsAsync(const DescribeDeliveryConfigsRequest& request, const DescribeDeliveryConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDeliveryConfigsRequest&;
    using Resp = DescribeDeliveryConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDeliveryConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeDeliveryConfigsOutcomeCallable TsfClient::DescribeDeliveryConfigsCallable(const DescribeDeliveryConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDeliveryConfigsOutcome>>();
    DescribeDeliveryConfigsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeDeliveryConfigsRequest&,
        DescribeDeliveryConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeDownloadInfoOutcome TsfClient::DescribeDownloadInfo(const DescribeDownloadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDownloadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDownloadInfoResponse rsp = DescribeDownloadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDownloadInfoOutcome(rsp);
        else
            return DescribeDownloadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDownloadInfoOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeDownloadInfoAsync(const DescribeDownloadInfoRequest& request, const DescribeDownloadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDownloadInfoRequest&;
    using Resp = DescribeDownloadInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDownloadInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeDownloadInfoOutcomeCallable TsfClient::DescribeDownloadInfoCallable(const DescribeDownloadInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDownloadInfoOutcome>>();
    DescribeDownloadInfoAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeDownloadInfoRequest&,
        DescribeDownloadInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeEnabledUnitRuleOutcome TsfClient::DescribeEnabledUnitRule(const DescribeEnabledUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnabledUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnabledUnitRuleResponse rsp = DescribeEnabledUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnabledUnitRuleOutcome(rsp);
        else
            return DescribeEnabledUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeEnabledUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeEnabledUnitRuleAsync(const DescribeEnabledUnitRuleRequest& request, const DescribeEnabledUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEnabledUnitRuleRequest&;
    using Resp = DescribeEnabledUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEnabledUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeEnabledUnitRuleOutcomeCallable TsfClient::DescribeEnabledUnitRuleCallable(const DescribeEnabledUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEnabledUnitRuleOutcome>>();
    DescribeEnabledUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeEnabledUnitRuleRequest&,
        DescribeEnabledUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeFileConfigReleasesOutcome TsfClient::DescribeFileConfigReleases(const DescribeFileConfigReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileConfigReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileConfigReleasesResponse rsp = DescribeFileConfigReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileConfigReleasesOutcome(rsp);
        else
            return DescribeFileConfigReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribeFileConfigReleasesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeFileConfigReleasesAsync(const DescribeFileConfigReleasesRequest& request, const DescribeFileConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileConfigReleasesRequest&;
    using Resp = DescribeFileConfigReleasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileConfigReleases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeFileConfigReleasesOutcomeCallable TsfClient::DescribeFileConfigReleasesCallable(const DescribeFileConfigReleasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileConfigReleasesOutcome>>();
    DescribeFileConfigReleasesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeFileConfigReleasesRequest&,
        DescribeFileConfigReleasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeFileConfigsOutcome TsfClient::DescribeFileConfigs(const DescribeFileConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileConfigsResponse rsp = DescribeFileConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileConfigsOutcome(rsp);
        else
            return DescribeFileConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeFileConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeFileConfigsAsync(const DescribeFileConfigsRequest& request, const DescribeFileConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFileConfigsRequest&;
    using Resp = DescribeFileConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFileConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeFileConfigsOutcomeCallable TsfClient::DescribeFileConfigsCallable(const DescribeFileConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFileConfigsOutcome>>();
    DescribeFileConfigsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeFileConfigsRequest&,
        DescribeFileConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeFlowLastBatchStateOutcome TsfClient::DescribeFlowLastBatchState(const DescribeFlowLastBatchStateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFlowLastBatchState");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFlowLastBatchStateResponse rsp = DescribeFlowLastBatchStateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFlowLastBatchStateOutcome(rsp);
        else
            return DescribeFlowLastBatchStateOutcome(o.GetError());
    }
    else
    {
        return DescribeFlowLastBatchStateOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeFlowLastBatchStateAsync(const DescribeFlowLastBatchStateRequest& request, const DescribeFlowLastBatchStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFlowLastBatchStateRequest&;
    using Resp = DescribeFlowLastBatchStateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFlowLastBatchState", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeFlowLastBatchStateOutcomeCallable TsfClient::DescribeFlowLastBatchStateCallable(const DescribeFlowLastBatchStateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFlowLastBatchStateOutcome>>();
    DescribeFlowLastBatchStateAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeFlowLastBatchStateRequest&,
        DescribeFlowLastBatchStateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGatewayAllGroupApisOutcome TsfClient::DescribeGatewayAllGroupApis(const DescribeGatewayAllGroupApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayAllGroupApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayAllGroupApisResponse rsp = DescribeGatewayAllGroupApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayAllGroupApisOutcome(rsp);
        else
            return DescribeGatewayAllGroupApisOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayAllGroupApisOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGatewayAllGroupApisAsync(const DescribeGatewayAllGroupApisRequest& request, const DescribeGatewayAllGroupApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayAllGroupApisRequest&;
    using Resp = DescribeGatewayAllGroupApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayAllGroupApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGatewayAllGroupApisOutcomeCallable TsfClient::DescribeGatewayAllGroupApisCallable(const DescribeGatewayAllGroupApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayAllGroupApisOutcome>>();
    DescribeGatewayAllGroupApisAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGatewayAllGroupApisRequest&,
        DescribeGatewayAllGroupApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGatewayApisOutcome TsfClient::DescribeGatewayApis(const DescribeGatewayApisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayApis");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayApisResponse rsp = DescribeGatewayApisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayApisOutcome(rsp);
        else
            return DescribeGatewayApisOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayApisOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGatewayApisAsync(const DescribeGatewayApisRequest& request, const DescribeGatewayApisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayApisRequest&;
    using Resp = DescribeGatewayApisResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayApis", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGatewayApisOutcomeCallable TsfClient::DescribeGatewayApisCallable(const DescribeGatewayApisRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayApisOutcome>>();
    DescribeGatewayApisAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGatewayApisRequest&,
        DescribeGatewayApisOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGatewayMonitorOverviewOutcome TsfClient::DescribeGatewayMonitorOverview(const DescribeGatewayMonitorOverviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGatewayMonitorOverview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGatewayMonitorOverviewResponse rsp = DescribeGatewayMonitorOverviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGatewayMonitorOverviewOutcome(rsp);
        else
            return DescribeGatewayMonitorOverviewOutcome(o.GetError());
    }
    else
    {
        return DescribeGatewayMonitorOverviewOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGatewayMonitorOverviewAsync(const DescribeGatewayMonitorOverviewRequest& request, const DescribeGatewayMonitorOverviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGatewayMonitorOverviewRequest&;
    using Resp = DescribeGatewayMonitorOverviewResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGatewayMonitorOverview", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGatewayMonitorOverviewOutcomeCallable TsfClient::DescribeGatewayMonitorOverviewCallable(const DescribeGatewayMonitorOverviewRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGatewayMonitorOverviewOutcome>>();
    DescribeGatewayMonitorOverviewAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGatewayMonitorOverviewRequest&,
        DescribeGatewayMonitorOverviewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupOutcome TsfClient::DescribeGroup(const DescribeGroupRequest &request)
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

void TsfClient::DescribeGroupAsync(const DescribeGroupRequest& request, const DescribeGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupRequest&;
    using Resp = DescribeGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupOutcomeCallable TsfClient::DescribeGroupCallable(const DescribeGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupOutcome>>();
    DescribeGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupRequest&,
        DescribeGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupAttributeOutcome TsfClient::DescribeGroupAttribute(const DescribeGroupAttributeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupAttribute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupAttributeResponse rsp = DescribeGroupAttributeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupAttributeOutcome(rsp);
        else
            return DescribeGroupAttributeOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupAttributeOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupAttributeAsync(const DescribeGroupAttributeRequest& request, const DescribeGroupAttributeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupAttributeRequest&;
    using Resp = DescribeGroupAttributeResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupAttribute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupAttributeOutcomeCallable TsfClient::DescribeGroupAttributeCallable(const DescribeGroupAttributeRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupAttributeOutcome>>();
    DescribeGroupAttributeAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupAttributeRequest&,
        DescribeGroupAttributeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupBindedGatewaysOutcome TsfClient::DescribeGroupBindedGateways(const DescribeGroupBindedGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupBindedGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupBindedGatewaysResponse rsp = DescribeGroupBindedGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupBindedGatewaysOutcome(rsp);
        else
            return DescribeGroupBindedGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupBindedGatewaysOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupBindedGatewaysAsync(const DescribeGroupBindedGatewaysRequest& request, const DescribeGroupBindedGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupBindedGatewaysRequest&;
    using Resp = DescribeGroupBindedGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupBindedGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupBindedGatewaysOutcomeCallable TsfClient::DescribeGroupBindedGatewaysCallable(const DescribeGroupBindedGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupBindedGatewaysOutcome>>();
    DescribeGroupBindedGatewaysAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupBindedGatewaysRequest&,
        DescribeGroupBindedGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupBusinessLogConfigsOutcome TsfClient::DescribeGroupBusinessLogConfigs(const DescribeGroupBusinessLogConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupBusinessLogConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupBusinessLogConfigsResponse rsp = DescribeGroupBusinessLogConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupBusinessLogConfigsOutcome(rsp);
        else
            return DescribeGroupBusinessLogConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupBusinessLogConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupBusinessLogConfigsAsync(const DescribeGroupBusinessLogConfigsRequest& request, const DescribeGroupBusinessLogConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupBusinessLogConfigsRequest&;
    using Resp = DescribeGroupBusinessLogConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupBusinessLogConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupBusinessLogConfigsOutcomeCallable TsfClient::DescribeGroupBusinessLogConfigsCallable(const DescribeGroupBusinessLogConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupBusinessLogConfigsOutcome>>();
    DescribeGroupBusinessLogConfigsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupBusinessLogConfigsRequest&,
        DescribeGroupBusinessLogConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupGatewaysOutcome TsfClient::DescribeGroupGateways(const DescribeGroupGatewaysRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupGateways");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupGatewaysResponse rsp = DescribeGroupGatewaysResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupGatewaysOutcome(rsp);
        else
            return DescribeGroupGatewaysOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupGatewaysOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupGatewaysAsync(const DescribeGroupGatewaysRequest& request, const DescribeGroupGatewaysAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupGatewaysRequest&;
    using Resp = DescribeGroupGatewaysResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupGateways", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupGatewaysOutcomeCallable TsfClient::DescribeGroupGatewaysCallable(const DescribeGroupGatewaysRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupGatewaysOutcome>>();
    DescribeGroupGatewaysAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupGatewaysRequest&,
        DescribeGroupGatewaysOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupInstancesOutcome TsfClient::DescribeGroupInstances(const DescribeGroupInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupInstancesResponse rsp = DescribeGroupInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupInstancesOutcome(rsp);
        else
            return DescribeGroupInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupInstancesAsync(const DescribeGroupInstancesRequest& request, const DescribeGroupInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupInstancesRequest&;
    using Resp = DescribeGroupInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupInstancesOutcomeCallable TsfClient::DescribeGroupInstancesCallable(const DescribeGroupInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupInstancesOutcome>>();
    DescribeGroupInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupInstancesRequest&,
        DescribeGroupInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupReleaseOutcome TsfClient::DescribeGroupRelease(const DescribeGroupReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupReleaseResponse rsp = DescribeGroupReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupReleaseOutcome(rsp);
        else
            return DescribeGroupReleaseOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupReleaseOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupReleaseAsync(const DescribeGroupReleaseRequest& request, const DescribeGroupReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupReleaseRequest&;
    using Resp = DescribeGroupReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupReleaseOutcomeCallable TsfClient::DescribeGroupReleaseCallable(const DescribeGroupReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupReleaseOutcome>>();
    DescribeGroupReleaseAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupReleaseRequest&,
        DescribeGroupReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupUseDetailOutcome TsfClient::DescribeGroupUseDetail(const DescribeGroupUseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupUseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupUseDetailResponse rsp = DescribeGroupUseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupUseDetailOutcome(rsp);
        else
            return DescribeGroupUseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupUseDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupUseDetailAsync(const DescribeGroupUseDetailRequest& request, const DescribeGroupUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupUseDetailRequest&;
    using Resp = DescribeGroupUseDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupUseDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupUseDetailOutcomeCallable TsfClient::DescribeGroupUseDetailCallable(const DescribeGroupUseDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupUseDetailOutcome>>();
    DescribeGroupUseDetailAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupUseDetailRequest&,
        DescribeGroupUseDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupsOutcome TsfClient::DescribeGroups(const DescribeGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsResponse rsp = DescribeGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsOutcome(rsp);
        else
            return DescribeGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupsAsync(const DescribeGroupsRequest& request, const DescribeGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupsRequest&;
    using Resp = DescribeGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupsOutcomeCallable TsfClient::DescribeGroupsCallable(const DescribeGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupsOutcome>>();
    DescribeGroupsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupsRequest&,
        DescribeGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeGroupsWithPluginOutcome TsfClient::DescribeGroupsWithPlugin(const DescribeGroupsWithPluginRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGroupsWithPlugin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGroupsWithPluginResponse rsp = DescribeGroupsWithPluginResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGroupsWithPluginOutcome(rsp);
        else
            return DescribeGroupsWithPluginOutcome(o.GetError());
    }
    else
    {
        return DescribeGroupsWithPluginOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeGroupsWithPluginAsync(const DescribeGroupsWithPluginRequest& request, const DescribeGroupsWithPluginAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeGroupsWithPluginRequest&;
    using Resp = DescribeGroupsWithPluginResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeGroupsWithPlugin", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeGroupsWithPluginOutcomeCallable TsfClient::DescribeGroupsWithPluginCallable(const DescribeGroupsWithPluginRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeGroupsWithPluginOutcome>>();
    DescribeGroupsWithPluginAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeGroupsWithPluginRequest&,
        DescribeGroupsWithPluginOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeImageRepositoryOutcome TsfClient::DescribeImageRepository(const DescribeImageRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageRepositoryResponse rsp = DescribeImageRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageRepositoryOutcome(rsp);
        else
            return DescribeImageRepositoryOutcome(o.GetError());
    }
    else
    {
        return DescribeImageRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeImageRepositoryAsync(const DescribeImageRepositoryRequest& request, const DescribeImageRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageRepositoryRequest&;
    using Resp = DescribeImageRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeImageRepositoryOutcomeCallable TsfClient::DescribeImageRepositoryCallable(const DescribeImageRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageRepositoryOutcome>>();
    DescribeImageRepositoryAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeImageRepositoryRequest&,
        DescribeImageRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeImageTagsOutcome TsfClient::DescribeImageTags(const DescribeImageTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageTagsResponse rsp = DescribeImageTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageTagsOutcome(rsp);
        else
            return DescribeImageTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeImageTagsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeImageTagsAsync(const DescribeImageTagsRequest& request, const DescribeImageTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeImageTagsRequest&;
    using Resp = DescribeImageTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeImageTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeImageTagsOutcomeCallable TsfClient::DescribeImageTagsCallable(const DescribeImageTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeImageTagsOutcome>>();
    DescribeImageTagsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeImageTagsRequest&,
        DescribeImageTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeInovcationIndicatorsOutcome TsfClient::DescribeInovcationIndicators(const DescribeInovcationIndicatorsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInovcationIndicators");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInovcationIndicatorsResponse rsp = DescribeInovcationIndicatorsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInovcationIndicatorsOutcome(rsp);
        else
            return DescribeInovcationIndicatorsOutcome(o.GetError());
    }
    else
    {
        return DescribeInovcationIndicatorsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeInovcationIndicatorsAsync(const DescribeInovcationIndicatorsRequest& request, const DescribeInovcationIndicatorsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInovcationIndicatorsRequest&;
    using Resp = DescribeInovcationIndicatorsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInovcationIndicators", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeInovcationIndicatorsOutcomeCallable TsfClient::DescribeInovcationIndicatorsCallable(const DescribeInovcationIndicatorsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInovcationIndicatorsOutcome>>();
    DescribeInovcationIndicatorsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeInovcationIndicatorsRequest&,
        DescribeInovcationIndicatorsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeInstancesOutcome TsfClient::DescribeInstances(const DescribeInstancesRequest &request)
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

void TsfClient::DescribeInstancesAsync(const DescribeInstancesRequest& request, const DescribeInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInstancesRequest&;
    using Resp = DescribeInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeInstancesOutcomeCallable TsfClient::DescribeInstancesCallable(const DescribeInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInstancesOutcome>>();
    DescribeInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeInstancesRequest&,
        DescribeInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeInvocationMetricDataCurveOutcome TsfClient::DescribeInvocationMetricDataCurve(const DescribeInvocationMetricDataCurveRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationMetricDataCurve");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationMetricDataCurveResponse rsp = DescribeInvocationMetricDataCurveResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationMetricDataCurveOutcome(rsp);
        else
            return DescribeInvocationMetricDataCurveOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationMetricDataCurveOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeInvocationMetricDataCurveAsync(const DescribeInvocationMetricDataCurveRequest& request, const DescribeInvocationMetricDataCurveAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInvocationMetricDataCurveRequest&;
    using Resp = DescribeInvocationMetricDataCurveResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocationMetricDataCurve", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeInvocationMetricDataCurveOutcomeCallable TsfClient::DescribeInvocationMetricDataCurveCallable(const DescribeInvocationMetricDataCurveRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationMetricDataCurveOutcome>>();
    DescribeInvocationMetricDataCurveAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeInvocationMetricDataCurveRequest&,
        DescribeInvocationMetricDataCurveOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeInvocationMetricDataDimensionOutcome TsfClient::DescribeInvocationMetricDataDimension(const DescribeInvocationMetricDataDimensionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationMetricDataDimension");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationMetricDataDimensionResponse rsp = DescribeInvocationMetricDataDimensionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationMetricDataDimensionOutcome(rsp);
        else
            return DescribeInvocationMetricDataDimensionOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationMetricDataDimensionOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeInvocationMetricDataDimensionAsync(const DescribeInvocationMetricDataDimensionRequest& request, const DescribeInvocationMetricDataDimensionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInvocationMetricDataDimensionRequest&;
    using Resp = DescribeInvocationMetricDataDimensionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocationMetricDataDimension", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeInvocationMetricDataDimensionOutcomeCallable TsfClient::DescribeInvocationMetricDataDimensionCallable(const DescribeInvocationMetricDataDimensionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationMetricDataDimensionOutcome>>();
    DescribeInvocationMetricDataDimensionAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeInvocationMetricDataDimensionRequest&,
        DescribeInvocationMetricDataDimensionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeInvocationMetricDataPointOutcome TsfClient::DescribeInvocationMetricDataPoint(const DescribeInvocationMetricDataPointRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationMetricDataPoint");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationMetricDataPointResponse rsp = DescribeInvocationMetricDataPointResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationMetricDataPointOutcome(rsp);
        else
            return DescribeInvocationMetricDataPointOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationMetricDataPointOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeInvocationMetricDataPointAsync(const DescribeInvocationMetricDataPointRequest& request, const DescribeInvocationMetricDataPointAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInvocationMetricDataPointRequest&;
    using Resp = DescribeInvocationMetricDataPointResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocationMetricDataPoint", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeInvocationMetricDataPointOutcomeCallable TsfClient::DescribeInvocationMetricDataPointCallable(const DescribeInvocationMetricDataPointRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationMetricDataPointOutcome>>();
    DescribeInvocationMetricDataPointAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeInvocationMetricDataPointRequest&,
        DescribeInvocationMetricDataPointOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeInvocationMetricScatterPlotOutcome TsfClient::DescribeInvocationMetricScatterPlot(const DescribeInvocationMetricScatterPlotRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeInvocationMetricScatterPlot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeInvocationMetricScatterPlotResponse rsp = DescribeInvocationMetricScatterPlotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeInvocationMetricScatterPlotOutcome(rsp);
        else
            return DescribeInvocationMetricScatterPlotOutcome(o.GetError());
    }
    else
    {
        return DescribeInvocationMetricScatterPlotOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeInvocationMetricScatterPlotAsync(const DescribeInvocationMetricScatterPlotRequest& request, const DescribeInvocationMetricScatterPlotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeInvocationMetricScatterPlotRequest&;
    using Resp = DescribeInvocationMetricScatterPlotResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeInvocationMetricScatterPlot", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeInvocationMetricScatterPlotOutcomeCallable TsfClient::DescribeInvocationMetricScatterPlotCallable(const DescribeInvocationMetricScatterPlotRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeInvocationMetricScatterPlotOutcome>>();
    DescribeInvocationMetricScatterPlotAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeInvocationMetricScatterPlotRequest&,
        DescribeInvocationMetricScatterPlotOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeJvmMonitorOutcome TsfClient::DescribeJvmMonitor(const DescribeJvmMonitorRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJvmMonitor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJvmMonitorResponse rsp = DescribeJvmMonitorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJvmMonitorOutcome(rsp);
        else
            return DescribeJvmMonitorOutcome(o.GetError());
    }
    else
    {
        return DescribeJvmMonitorOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeJvmMonitorAsync(const DescribeJvmMonitorRequest& request, const DescribeJvmMonitorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeJvmMonitorRequest&;
    using Resp = DescribeJvmMonitorResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeJvmMonitor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeJvmMonitorOutcomeCallable TsfClient::DescribeJvmMonitorCallable(const DescribeJvmMonitorRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeJvmMonitorOutcome>>();
    DescribeJvmMonitorAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeJvmMonitorRequest&,
        DescribeJvmMonitorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeLaneRulesOutcome TsfClient::DescribeLaneRules(const DescribeLaneRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLaneRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLaneRulesResponse rsp = DescribeLaneRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLaneRulesOutcome(rsp);
        else
            return DescribeLaneRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeLaneRulesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeLaneRulesAsync(const DescribeLaneRulesRequest& request, const DescribeLaneRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLaneRulesRequest&;
    using Resp = DescribeLaneRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLaneRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeLaneRulesOutcomeCallable TsfClient::DescribeLaneRulesCallable(const DescribeLaneRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLaneRulesOutcome>>();
    DescribeLaneRulesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeLaneRulesRequest&,
        DescribeLaneRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeLanesOutcome TsfClient::DescribeLanes(const DescribeLanesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLanes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLanesResponse rsp = DescribeLanesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLanesOutcome(rsp);
        else
            return DescribeLanesOutcome(o.GetError());
    }
    else
    {
        return DescribeLanesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeLanesAsync(const DescribeLanesRequest& request, const DescribeLanesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLanesRequest&;
    using Resp = DescribeLanesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLanes", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeLanesOutcomeCallable TsfClient::DescribeLanesCallable(const DescribeLanesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLanesOutcome>>();
    DescribeLanesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeLanesRequest&,
        DescribeLanesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeLicensesOutcome TsfClient::DescribeLicenses(const DescribeLicensesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLicenses");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLicensesResponse rsp = DescribeLicensesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLicensesOutcome(rsp);
        else
            return DescribeLicensesOutcome(o.GetError());
    }
    else
    {
        return DescribeLicensesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeLicensesAsync(const DescribeLicensesRequest& request, const DescribeLicensesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLicensesRequest&;
    using Resp = DescribeLicensesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLicenses", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeLicensesOutcomeCallable TsfClient::DescribeLicensesCallable(const DescribeLicensesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLicensesOutcome>>();
    DescribeLicensesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeLicensesRequest&,
        DescribeLicensesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeLogCapacityOutcome TsfClient::DescribeLogCapacity(const DescribeLogCapacityRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLogCapacity");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLogCapacityResponse rsp = DescribeLogCapacityResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLogCapacityOutcome(rsp);
        else
            return DescribeLogCapacityOutcome(o.GetError());
    }
    else
    {
        return DescribeLogCapacityOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeLogCapacityAsync(const DescribeLogCapacityRequest& request, const DescribeLogCapacityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLogCapacityRequest&;
    using Resp = DescribeLogCapacityResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLogCapacity", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeLogCapacityOutcomeCallable TsfClient::DescribeLogCapacityCallable(const DescribeLogCapacityRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLogCapacityOutcome>>();
    DescribeLogCapacityAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeLogCapacityRequest&,
        DescribeLogCapacityOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeMicroserviceOutcome TsfClient::DescribeMicroservice(const DescribeMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMicroserviceResponse rsp = DescribeMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMicroserviceOutcome(rsp);
        else
            return DescribeMicroserviceOutcome(o.GetError());
    }
    else
    {
        return DescribeMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMicroserviceAsync(const DescribeMicroserviceRequest& request, const DescribeMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMicroserviceRequest&;
    using Resp = DescribeMicroserviceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMicroservice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeMicroserviceOutcomeCallable TsfClient::DescribeMicroserviceCallable(const DescribeMicroserviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMicroserviceOutcome>>();
    DescribeMicroserviceAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeMicroserviceRequest&,
        DescribeMicroserviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeMicroservicesOutcome TsfClient::DescribeMicroservices(const DescribeMicroservicesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMicroservices");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMicroservicesResponse rsp = DescribeMicroservicesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMicroservicesOutcome(rsp);
        else
            return DescribeMicroservicesOutcome(o.GetError());
    }
    else
    {
        return DescribeMicroservicesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMicroservicesAsync(const DescribeMicroservicesRequest& request, const DescribeMicroservicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMicroservicesRequest&;
    using Resp = DescribeMicroservicesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMicroservices", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeMicroservicesOutcomeCallable TsfClient::DescribeMicroservicesCallable(const DescribeMicroservicesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMicroservicesOutcome>>();
    DescribeMicroservicesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeMicroservicesRequest&,
        DescribeMicroservicesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeMicroservicesByGroupIdsOutcome TsfClient::DescribeMicroservicesByGroupIds(const DescribeMicroservicesByGroupIdsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMicroservicesByGroupIds");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMicroservicesByGroupIdsResponse rsp = DescribeMicroservicesByGroupIdsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMicroservicesByGroupIdsOutcome(rsp);
        else
            return DescribeMicroservicesByGroupIdsOutcome(o.GetError());
    }
    else
    {
        return DescribeMicroservicesByGroupIdsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMicroservicesByGroupIdsAsync(const DescribeMicroservicesByGroupIdsRequest& request, const DescribeMicroservicesByGroupIdsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMicroservicesByGroupIdsRequest&;
    using Resp = DescribeMicroservicesByGroupIdsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMicroservicesByGroupIds", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeMicroservicesByGroupIdsOutcomeCallable TsfClient::DescribeMicroservicesByGroupIdsCallable(const DescribeMicroservicesByGroupIdsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMicroservicesByGroupIdsOutcome>>();
    DescribeMicroservicesByGroupIdsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeMicroservicesByGroupIdsRequest&,
        DescribeMicroservicesByGroupIdsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeMsApiListOutcome TsfClient::DescribeMsApiList(const DescribeMsApiListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMsApiList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMsApiListResponse rsp = DescribeMsApiListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMsApiListOutcome(rsp);
        else
            return DescribeMsApiListOutcome(o.GetError());
    }
    else
    {
        return DescribeMsApiListOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeMsApiListAsync(const DescribeMsApiListRequest& request, const DescribeMsApiListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMsApiListRequest&;
    using Resp = DescribeMsApiListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMsApiList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeMsApiListOutcomeCallable TsfClient::DescribeMsApiListCallable(const DescribeMsApiListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMsApiListOutcome>>();
    DescribeMsApiListAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeMsApiListRequest&,
        DescribeMsApiListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeOverviewInvocationOutcome TsfClient::DescribeOverviewInvocation(const DescribeOverviewInvocationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOverviewInvocation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOverviewInvocationResponse rsp = DescribeOverviewInvocationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOverviewInvocationOutcome(rsp);
        else
            return DescribeOverviewInvocationOutcome(o.GetError());
    }
    else
    {
        return DescribeOverviewInvocationOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeOverviewInvocationAsync(const DescribeOverviewInvocationRequest& request, const DescribeOverviewInvocationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOverviewInvocationRequest&;
    using Resp = DescribeOverviewInvocationResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOverviewInvocation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeOverviewInvocationOutcomeCallable TsfClient::DescribeOverviewInvocationCallable(const DescribeOverviewInvocationRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOverviewInvocationOutcome>>();
    DescribeOverviewInvocationAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeOverviewInvocationRequest&,
        DescribeOverviewInvocationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePathRewriteOutcome TsfClient::DescribePathRewrite(const DescribePathRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePathRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePathRewriteResponse rsp = DescribePathRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePathRewriteOutcome(rsp);
        else
            return DescribePathRewriteOutcome(o.GetError());
    }
    else
    {
        return DescribePathRewriteOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePathRewriteAsync(const DescribePathRewriteRequest& request, const DescribePathRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePathRewriteRequest&;
    using Resp = DescribePathRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePathRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePathRewriteOutcomeCallable TsfClient::DescribePathRewriteCallable(const DescribePathRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePathRewriteOutcome>>();
    DescribePathRewriteAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePathRewriteRequest&,
        DescribePathRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePathRewritesOutcome TsfClient::DescribePathRewrites(const DescribePathRewritesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePathRewrites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePathRewritesResponse rsp = DescribePathRewritesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePathRewritesOutcome(rsp);
        else
            return DescribePathRewritesOutcome(o.GetError());
    }
    else
    {
        return DescribePathRewritesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePathRewritesAsync(const DescribePathRewritesRequest& request, const DescribePathRewritesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePathRewritesRequest&;
    using Resp = DescribePathRewritesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePathRewrites", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePathRewritesOutcomeCallable TsfClient::DescribePathRewritesCallable(const DescribePathRewritesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePathRewritesOutcome>>();
    DescribePathRewritesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePathRewritesRequest&,
        DescribePathRewritesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePkgsOutcome TsfClient::DescribePkgs(const DescribePkgsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePkgs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePkgsResponse rsp = DescribePkgsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePkgsOutcome(rsp);
        else
            return DescribePkgsOutcome(o.GetError());
    }
    else
    {
        return DescribePkgsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePkgsAsync(const DescribePkgsRequest& request, const DescribePkgsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePkgsRequest&;
    using Resp = DescribePkgsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePkgs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePkgsOutcomeCallable TsfClient::DescribePkgsCallable(const DescribePkgsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePkgsOutcome>>();
    DescribePkgsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePkgsRequest&,
        DescribePkgsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePluginInstancesOutcome TsfClient::DescribePluginInstances(const DescribePluginInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePluginInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePluginInstancesResponse rsp = DescribePluginInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePluginInstancesOutcome(rsp);
        else
            return DescribePluginInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePluginInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePluginInstancesAsync(const DescribePluginInstancesRequest& request, const DescribePluginInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePluginInstancesRequest&;
    using Resp = DescribePluginInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePluginInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePluginInstancesOutcomeCallable TsfClient::DescribePluginInstancesCallable(const DescribePluginInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePluginInstancesOutcome>>();
    DescribePluginInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePluginInstancesRequest&,
        DescribePluginInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePodInstancesOutcome TsfClient::DescribePodInstances(const DescribePodInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePodInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePodInstancesResponse rsp = DescribePodInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePodInstancesOutcome(rsp);
        else
            return DescribePodInstancesOutcome(o.GetError());
    }
    else
    {
        return DescribePodInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePodInstancesAsync(const DescribePodInstancesRequest& request, const DescribePodInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePodInstancesRequest&;
    using Resp = DescribePodInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePodInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePodInstancesOutcomeCallable TsfClient::DescribePodInstancesCallable(const DescribePodInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePodInstancesOutcome>>();
    DescribePodInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePodInstancesRequest&,
        DescribePodInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeProgramsOutcome TsfClient::DescribePrograms(const DescribeProgramsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrograms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProgramsResponse rsp = DescribeProgramsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProgramsOutcome(rsp);
        else
            return DescribeProgramsOutcome(o.GetError());
    }
    else
    {
        return DescribeProgramsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeProgramsAsync(const DescribeProgramsRequest& request, const DescribeProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProgramsRequest&;
    using Resp = DescribeProgramsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePrograms", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeProgramsOutcomeCallable TsfClient::DescribeProgramsCallable(const DescribeProgramsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProgramsOutcome>>();
    DescribeProgramsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeProgramsRequest&,
        DescribeProgramsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePublicConfigOutcome TsfClient::DescribePublicConfig(const DescribePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigResponse rsp = DescribePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigOutcome(rsp);
        else
            return DescribePublicConfigOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigAsync(const DescribePublicConfigRequest& request, const DescribePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicConfigRequest&;
    using Resp = DescribePublicConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePublicConfigOutcomeCallable TsfClient::DescribePublicConfigCallable(const DescribePublicConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicConfigOutcome>>();
    DescribePublicConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePublicConfigRequest&,
        DescribePublicConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePublicConfigReleaseLogsOutcome TsfClient::DescribePublicConfigReleaseLogs(const DescribePublicConfigReleaseLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigReleaseLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigReleaseLogsResponse rsp = DescribePublicConfigReleaseLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigReleaseLogsOutcome(rsp);
        else
            return DescribePublicConfigReleaseLogsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigReleaseLogsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigReleaseLogsAsync(const DescribePublicConfigReleaseLogsRequest& request, const DescribePublicConfigReleaseLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicConfigReleaseLogsRequest&;
    using Resp = DescribePublicConfigReleaseLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicConfigReleaseLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePublicConfigReleaseLogsOutcomeCallable TsfClient::DescribePublicConfigReleaseLogsCallable(const DescribePublicConfigReleaseLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicConfigReleaseLogsOutcome>>();
    DescribePublicConfigReleaseLogsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePublicConfigReleaseLogsRequest&,
        DescribePublicConfigReleaseLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePublicConfigReleasesOutcome TsfClient::DescribePublicConfigReleases(const DescribePublicConfigReleasesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigReleases");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigReleasesResponse rsp = DescribePublicConfigReleasesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigReleasesOutcome(rsp);
        else
            return DescribePublicConfigReleasesOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigReleasesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigReleasesAsync(const DescribePublicConfigReleasesRequest& request, const DescribePublicConfigReleasesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicConfigReleasesRequest&;
    using Resp = DescribePublicConfigReleasesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicConfigReleases", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePublicConfigReleasesOutcomeCallable TsfClient::DescribePublicConfigReleasesCallable(const DescribePublicConfigReleasesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicConfigReleasesOutcome>>();
    DescribePublicConfigReleasesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePublicConfigReleasesRequest&,
        DescribePublicConfigReleasesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePublicConfigSummaryOutcome TsfClient::DescribePublicConfigSummary(const DescribePublicConfigSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigSummaryResponse rsp = DescribePublicConfigSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigSummaryOutcome(rsp);
        else
            return DescribePublicConfigSummaryOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigSummaryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigSummaryAsync(const DescribePublicConfigSummaryRequest& request, const DescribePublicConfigSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicConfigSummaryRequest&;
    using Resp = DescribePublicConfigSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicConfigSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePublicConfigSummaryOutcomeCallable TsfClient::DescribePublicConfigSummaryCallable(const DescribePublicConfigSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicConfigSummaryOutcome>>();
    DescribePublicConfigSummaryAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePublicConfigSummaryRequest&,
        DescribePublicConfigSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribePublicConfigsOutcome TsfClient::DescribePublicConfigs(const DescribePublicConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePublicConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePublicConfigsResponse rsp = DescribePublicConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePublicConfigsOutcome(rsp);
        else
            return DescribePublicConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribePublicConfigsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribePublicConfigsAsync(const DescribePublicConfigsRequest& request, const DescribePublicConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePublicConfigsRequest&;
    using Resp = DescribePublicConfigsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePublicConfigs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribePublicConfigsOutcomeCallable TsfClient::DescribePublicConfigsCallable(const DescribePublicConfigsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePublicConfigsOutcome>>();
    DescribePublicConfigsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribePublicConfigsRequest&,
        DescribePublicConfigsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeReleasedConfigOutcome TsfClient::DescribeReleasedConfig(const DescribeReleasedConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReleasedConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReleasedConfigResponse rsp = DescribeReleasedConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReleasedConfigOutcome(rsp);
        else
            return DescribeReleasedConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeReleasedConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeReleasedConfigAsync(const DescribeReleasedConfigRequest& request, const DescribeReleasedConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReleasedConfigRequest&;
    using Resp = DescribeReleasedConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReleasedConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeReleasedConfigOutcomeCallable TsfClient::DescribeReleasedConfigCallable(const DescribeReleasedConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReleasedConfigOutcome>>();
    DescribeReleasedConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeReleasedConfigRequest&,
        DescribeReleasedConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeRepositoriesOutcome TsfClient::DescribeRepositories(const DescribeRepositoriesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepositories");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoriesResponse rsp = DescribeRepositoriesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoriesOutcome(rsp);
        else
            return DescribeRepositoriesOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoriesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeRepositoriesAsync(const DescribeRepositoriesRequest& request, const DescribeRepositoriesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRepositoriesRequest&;
    using Resp = DescribeRepositoriesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRepositories", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeRepositoriesOutcomeCallable TsfClient::DescribeRepositoriesCallable(const DescribeRepositoriesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRepositoriesOutcome>>();
    DescribeRepositoriesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeRepositoriesRequest&,
        DescribeRepositoriesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeRepositoryOutcome TsfClient::DescribeRepository(const DescribeRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRepositoryResponse rsp = DescribeRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRepositoryOutcome(rsp);
        else
            return DescribeRepositoryOutcome(o.GetError());
    }
    else
    {
        return DescribeRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeRepositoryAsync(const DescribeRepositoryRequest& request, const DescribeRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRepositoryRequest&;
    using Resp = DescribeRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeRepositoryOutcomeCallable TsfClient::DescribeRepositoryCallable(const DescribeRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRepositoryOutcome>>();
    DescribeRepositoryAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeRepositoryRequest&,
        DescribeRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeResourceConfigOutcome TsfClient::DescribeResourceConfig(const DescribeResourceConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceConfigResponse rsp = DescribeResourceConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceConfigOutcome(rsp);
        else
            return DescribeResourceConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeResourceConfigAsync(const DescribeResourceConfigRequest& request, const DescribeResourceConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceConfigRequest&;
    using Resp = DescribeResourceConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeResourceConfigOutcomeCallable TsfClient::DescribeResourceConfigCallable(const DescribeResourceConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceConfigOutcome>>();
    DescribeResourceConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeResourceConfigRequest&,
        DescribeResourceConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeResourceTaskStatusOutcome TsfClient::DescribeResourceTaskStatus(const DescribeResourceTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceTaskStatusResponse rsp = DescribeResourceTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceTaskStatusOutcome(rsp);
        else
            return DescribeResourceTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceTaskStatusOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeResourceTaskStatusAsync(const DescribeResourceTaskStatusRequest& request, const DescribeResourceTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceTaskStatusRequest&;
    using Resp = DescribeResourceTaskStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceTaskStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeResourceTaskStatusOutcomeCallable TsfClient::DescribeResourceTaskStatusCallable(const DescribeResourceTaskStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceTaskStatusOutcome>>();
    DescribeResourceTaskStatusAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeResourceTaskStatusRequest&,
        DescribeResourceTaskStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeSimpleApplicationsOutcome TsfClient::DescribeSimpleApplications(const DescribeSimpleApplicationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleApplications");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleApplicationsResponse rsp = DescribeSimpleApplicationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleApplicationsOutcome(rsp);
        else
            return DescribeSimpleApplicationsOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleApplicationsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleApplicationsAsync(const DescribeSimpleApplicationsRequest& request, const DescribeSimpleApplicationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSimpleApplicationsRequest&;
    using Resp = DescribeSimpleApplicationsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleApplications", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeSimpleApplicationsOutcomeCallable TsfClient::DescribeSimpleApplicationsCallable(const DescribeSimpleApplicationsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleApplicationsOutcome>>();
    DescribeSimpleApplicationsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeSimpleApplicationsRequest&,
        DescribeSimpleApplicationsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeSimpleClustersOutcome TsfClient::DescribeSimpleClusters(const DescribeSimpleClustersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleClusters");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleClustersResponse rsp = DescribeSimpleClustersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleClustersOutcome(rsp);
        else
            return DescribeSimpleClustersOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleClustersOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleClustersAsync(const DescribeSimpleClustersRequest& request, const DescribeSimpleClustersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSimpleClustersRequest&;
    using Resp = DescribeSimpleClustersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleClusters", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeSimpleClustersOutcomeCallable TsfClient::DescribeSimpleClustersCallable(const DescribeSimpleClustersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleClustersOutcome>>();
    DescribeSimpleClustersAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeSimpleClustersRequest&,
        DescribeSimpleClustersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeSimpleGroupsOutcome TsfClient::DescribeSimpleGroups(const DescribeSimpleGroupsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleGroups");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleGroupsResponse rsp = DescribeSimpleGroupsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleGroupsOutcome(rsp);
        else
            return DescribeSimpleGroupsOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleGroupsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleGroupsAsync(const DescribeSimpleGroupsRequest& request, const DescribeSimpleGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSimpleGroupsRequest&;
    using Resp = DescribeSimpleGroupsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleGroups", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeSimpleGroupsOutcomeCallable TsfClient::DescribeSimpleGroupsCallable(const DescribeSimpleGroupsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleGroupsOutcome>>();
    DescribeSimpleGroupsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeSimpleGroupsRequest&,
        DescribeSimpleGroupsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeSimpleNamespacesOutcome TsfClient::DescribeSimpleNamespaces(const DescribeSimpleNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSimpleNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSimpleNamespacesResponse rsp = DescribeSimpleNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSimpleNamespacesOutcome(rsp);
        else
            return DescribeSimpleNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeSimpleNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeSimpleNamespacesAsync(const DescribeSimpleNamespacesRequest& request, const DescribeSimpleNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSimpleNamespacesRequest&;
    using Resp = DescribeSimpleNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSimpleNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeSimpleNamespacesOutcomeCallable TsfClient::DescribeSimpleNamespacesCallable(const DescribeSimpleNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSimpleNamespacesOutcome>>();
    DescribeSimpleNamespacesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeSimpleNamespacesRequest&,
        DescribeSimpleNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeStatisticsOutcome TsfClient::DescribeStatistics(const DescribeStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeStatisticsResponse rsp = DescribeStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeStatisticsOutcome(rsp);
        else
            return DescribeStatisticsOutcome(o.GetError());
    }
    else
    {
        return DescribeStatisticsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeStatisticsAsync(const DescribeStatisticsRequest& request, const DescribeStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeStatisticsRequest&;
    using Resp = DescribeStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeStatisticsOutcomeCallable TsfClient::DescribeStatisticsCallable(const DescribeStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeStatisticsOutcome>>();
    DescribeStatisticsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeStatisticsRequest&,
        DescribeStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeTaskDetailOutcome TsfClient::DescribeTaskDetail(const DescribeTaskDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskDetailResponse rsp = DescribeTaskDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskDetailOutcome(rsp);
        else
            return DescribeTaskDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeTaskDetailAsync(const DescribeTaskDetailRequest& request, const DescribeTaskDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskDetailRequest&;
    using Resp = DescribeTaskDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeTaskDetailOutcomeCallable TsfClient::DescribeTaskDetailCallable(const DescribeTaskDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskDetailOutcome>>();
    DescribeTaskDetailAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeTaskDetailRequest&,
        DescribeTaskDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeTaskLastStatusOutcome TsfClient::DescribeTaskLastStatus(const DescribeTaskLastStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskLastStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskLastStatusResponse rsp = DescribeTaskLastStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskLastStatusOutcome(rsp);
        else
            return DescribeTaskLastStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskLastStatusOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeTaskLastStatusAsync(const DescribeTaskLastStatusRequest& request, const DescribeTaskLastStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskLastStatusRequest&;
    using Resp = DescribeTaskLastStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskLastStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeTaskLastStatusOutcomeCallable TsfClient::DescribeTaskLastStatusCallable(const DescribeTaskLastStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskLastStatusOutcome>>();
    DescribeTaskLastStatusAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeTaskLastStatusRequest&,
        DescribeTaskLastStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeTaskRecordsOutcome TsfClient::DescribeTaskRecords(const DescribeTaskRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTaskRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTaskRecordsResponse rsp = DescribeTaskRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTaskRecordsOutcome(rsp);
        else
            return DescribeTaskRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeTaskRecordsOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeTaskRecordsAsync(const DescribeTaskRecordsRequest& request, const DescribeTaskRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTaskRecordsRequest&;
    using Resp = DescribeTaskRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTaskRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeTaskRecordsOutcomeCallable TsfClient::DescribeTaskRecordsCallable(const DescribeTaskRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTaskRecordsOutcome>>();
    DescribeTaskRecordsAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeTaskRecordsRequest&,
        DescribeTaskRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUnitApiUseDetailOutcome TsfClient::DescribeUnitApiUseDetail(const DescribeUnitApiUseDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitApiUseDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitApiUseDetailResponse rsp = DescribeUnitApiUseDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitApiUseDetailOutcome(rsp);
        else
            return DescribeUnitApiUseDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitApiUseDetailOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitApiUseDetailAsync(const DescribeUnitApiUseDetailRequest& request, const DescribeUnitApiUseDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnitApiUseDetailRequest&;
    using Resp = DescribeUnitApiUseDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnitApiUseDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUnitApiUseDetailOutcomeCallable TsfClient::DescribeUnitApiUseDetailCallable(const DescribeUnitApiUseDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnitApiUseDetailOutcome>>();
    DescribeUnitApiUseDetailAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeUnitApiUseDetailRequest&,
        DescribeUnitApiUseDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUnitNamespacesOutcome TsfClient::DescribeUnitNamespaces(const DescribeUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitNamespacesResponse rsp = DescribeUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitNamespacesOutcome(rsp);
        else
            return DescribeUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitNamespacesAsync(const DescribeUnitNamespacesRequest& request, const DescribeUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnitNamespacesRequest&;
    using Resp = DescribeUnitNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnitNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUnitNamespacesOutcomeCallable TsfClient::DescribeUnitNamespacesCallable(const DescribeUnitNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnitNamespacesOutcome>>();
    DescribeUnitNamespacesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeUnitNamespacesRequest&,
        DescribeUnitNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUnitRuleOutcome TsfClient::DescribeUnitRule(const DescribeUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitRuleResponse rsp = DescribeUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitRuleOutcome(rsp);
        else
            return DescribeUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitRuleAsync(const DescribeUnitRuleRequest& request, const DescribeUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnitRuleRequest&;
    using Resp = DescribeUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUnitRuleOutcomeCallable TsfClient::DescribeUnitRuleCallable(const DescribeUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnitRuleOutcome>>();
    DescribeUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeUnitRuleRequest&,
        DescribeUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUnitRulesOutcome TsfClient::DescribeUnitRules(const DescribeUnitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitRulesResponse rsp = DescribeUnitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitRulesOutcome(rsp);
        else
            return DescribeUnitRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeUnitRulesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitRulesAsync(const DescribeUnitRulesRequest& request, const DescribeUnitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnitRulesRequest&;
    using Resp = DescribeUnitRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnitRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUnitRulesOutcomeCallable TsfClient::DescribeUnitRulesCallable(const DescribeUnitRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnitRulesOutcome>>();
    DescribeUnitRulesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeUnitRulesRequest&,
        DescribeUnitRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUnitRulesV2Outcome TsfClient::DescribeUnitRulesV2(const DescribeUnitRulesV2Request &request)
{
    auto outcome = MakeRequest(request, "DescribeUnitRulesV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnitRulesV2Response rsp = DescribeUnitRulesV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnitRulesV2Outcome(rsp);
        else
            return DescribeUnitRulesV2Outcome(o.GetError());
    }
    else
    {
        return DescribeUnitRulesV2Outcome(outcome.GetError());
    }
}

void TsfClient::DescribeUnitRulesV2Async(const DescribeUnitRulesV2Request& request, const DescribeUnitRulesV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnitRulesV2Request&;
    using Resp = DescribeUnitRulesV2Response;

    DoRequestAsync<Req, Resp>(
        "DescribeUnitRulesV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUnitRulesV2OutcomeCallable TsfClient::DescribeUnitRulesV2Callable(const DescribeUnitRulesV2Request &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnitRulesV2Outcome>>();
    DescribeUnitRulesV2Async(
    request,
    [prom](
        const TsfClient*,
        const DescribeUnitRulesV2Request&,
        DescribeUnitRulesV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUploadInfoOutcome TsfClient::DescribeUploadInfo(const DescribeUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUploadInfoResponse rsp = DescribeUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUploadInfoOutcome(rsp);
        else
            return DescribeUploadInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeUploadInfoOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUploadInfoAsync(const DescribeUploadInfoRequest& request, const DescribeUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUploadInfoRequest&;
    using Resp = DescribeUploadInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUploadInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUploadInfoOutcomeCallable TsfClient::DescribeUploadInfoCallable(const DescribeUploadInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUploadInfoOutcome>>();
    DescribeUploadInfoAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeUploadInfoRequest&,
        DescribeUploadInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DescribeUsableUnitNamespacesOutcome TsfClient::DescribeUsableUnitNamespaces(const DescribeUsableUnitNamespacesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUsableUnitNamespaces");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUsableUnitNamespacesResponse rsp = DescribeUsableUnitNamespacesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUsableUnitNamespacesOutcome(rsp);
        else
            return DescribeUsableUnitNamespacesOutcome(o.GetError());
    }
    else
    {
        return DescribeUsableUnitNamespacesOutcome(outcome.GetError());
    }
}

void TsfClient::DescribeUsableUnitNamespacesAsync(const DescribeUsableUnitNamespacesRequest& request, const DescribeUsableUnitNamespacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUsableUnitNamespacesRequest&;
    using Resp = DescribeUsableUnitNamespacesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUsableUnitNamespaces", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DescribeUsableUnitNamespacesOutcomeCallable TsfClient::DescribeUsableUnitNamespacesCallable(const DescribeUsableUnitNamespacesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUsableUnitNamespacesOutcome>>();
    DescribeUsableUnitNamespacesAsync(
    request,
    [prom](
        const TsfClient*,
        const DescribeUsableUnitNamespacesRequest&,
        DescribeUsableUnitNamespacesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisableLaneRuleOutcome TsfClient::DisableLaneRule(const DisableLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableLaneRuleResponse rsp = DisableLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableLaneRuleOutcome(rsp);
        else
            return DisableLaneRuleOutcome(o.GetError());
    }
    else
    {
        return DisableLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DisableLaneRuleAsync(const DisableLaneRuleRequest& request, const DisableLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableLaneRuleRequest&;
    using Resp = DisableLaneRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DisableLaneRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisableLaneRuleOutcomeCallable TsfClient::DisableLaneRuleCallable(const DisableLaneRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableLaneRuleOutcome>>();
    DisableLaneRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DisableLaneRuleRequest&,
        DisableLaneRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisableTaskOutcome TsfClient::DisableTask(const DisableTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTaskResponse rsp = DisableTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTaskOutcome(rsp);
        else
            return DisableTaskOutcome(o.GetError());
    }
    else
    {
        return DisableTaskOutcome(outcome.GetError());
    }
}

void TsfClient::DisableTaskAsync(const DisableTaskRequest& request, const DisableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableTaskRequest&;
    using Resp = DisableTaskResponse;

    DoRequestAsync<Req, Resp>(
        "DisableTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisableTaskOutcomeCallable TsfClient::DisableTaskCallable(const DisableTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableTaskOutcome>>();
    DisableTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const DisableTaskRequest&,
        DisableTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisableTaskFlowOutcome TsfClient::DisableTaskFlow(const DisableTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "DisableTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableTaskFlowResponse rsp = DisableTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableTaskFlowOutcome(rsp);
        else
            return DisableTaskFlowOutcome(o.GetError());
    }
    else
    {
        return DisableTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::DisableTaskFlowAsync(const DisableTaskFlowRequest& request, const DisableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableTaskFlowRequest&;
    using Resp = DisableTaskFlowResponse;

    DoRequestAsync<Req, Resp>(
        "DisableTaskFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisableTaskFlowOutcomeCallable TsfClient::DisableTaskFlowCallable(const DisableTaskFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableTaskFlowOutcome>>();
    DisableTaskFlowAsync(
    request,
    [prom](
        const TsfClient*,
        const DisableTaskFlowRequest&,
        DisableTaskFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisableUnitRouteOutcome TsfClient::DisableUnitRoute(const DisableUnitRouteRequest &request)
{
    auto outcome = MakeRequest(request, "DisableUnitRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUnitRouteResponse rsp = DisableUnitRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUnitRouteOutcome(rsp);
        else
            return DisableUnitRouteOutcome(o.GetError());
    }
    else
    {
        return DisableUnitRouteOutcome(outcome.GetError());
    }
}

void TsfClient::DisableUnitRouteAsync(const DisableUnitRouteRequest& request, const DisableUnitRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableUnitRouteRequest&;
    using Resp = DisableUnitRouteResponse;

    DoRequestAsync<Req, Resp>(
        "DisableUnitRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisableUnitRouteOutcomeCallable TsfClient::DisableUnitRouteCallable(const DisableUnitRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableUnitRouteOutcome>>();
    DisableUnitRouteAsync(
    request,
    [prom](
        const TsfClient*,
        const DisableUnitRouteRequest&,
        DisableUnitRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisableUnitRuleOutcome TsfClient::DisableUnitRule(const DisableUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DisableUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableUnitRuleResponse rsp = DisableUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableUnitRuleOutcome(rsp);
        else
            return DisableUnitRuleOutcome(o.GetError());
    }
    else
    {
        return DisableUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::DisableUnitRuleAsync(const DisableUnitRuleRequest& request, const DisableUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisableUnitRuleRequest&;
    using Resp = DisableUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DisableUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisableUnitRuleOutcomeCallable TsfClient::DisableUnitRuleCallable(const DisableUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisableUnitRuleOutcome>>();
    DisableUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const DisableUnitRuleRequest&,
        DisableUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisassociateBusinessLogConfigOutcome TsfClient::DisassociateBusinessLogConfig(const DisassociateBusinessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateBusinessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateBusinessLogConfigResponse rsp = DisassociateBusinessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateBusinessLogConfigOutcome(rsp);
        else
            return DisassociateBusinessLogConfigOutcome(o.GetError());
    }
    else
    {
        return DisassociateBusinessLogConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DisassociateBusinessLogConfigAsync(const DisassociateBusinessLogConfigRequest& request, const DisassociateBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateBusinessLogConfigRequest&;
    using Resp = DisassociateBusinessLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateBusinessLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisassociateBusinessLogConfigOutcomeCallable TsfClient::DisassociateBusinessLogConfigCallable(const DisassociateBusinessLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateBusinessLogConfigOutcome>>();
    DisassociateBusinessLogConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DisassociateBusinessLogConfigRequest&,
        DisassociateBusinessLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DisassociateKafkaConfigOutcome TsfClient::DisassociateKafkaConfig(const DisassociateKafkaConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DisassociateKafkaConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisassociateKafkaConfigResponse rsp = DisassociateKafkaConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisassociateKafkaConfigOutcome(rsp);
        else
            return DisassociateKafkaConfigOutcome(o.GetError());
    }
    else
    {
        return DisassociateKafkaConfigOutcome(outcome.GetError());
    }
}

void TsfClient::DisassociateKafkaConfigAsync(const DisassociateKafkaConfigRequest& request, const DisassociateKafkaConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DisassociateKafkaConfigRequest&;
    using Resp = DisassociateKafkaConfigResponse;

    DoRequestAsync<Req, Resp>(
        "DisassociateKafkaConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DisassociateKafkaConfigOutcomeCallable TsfClient::DisassociateKafkaConfigCallable(const DisassociateKafkaConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<DisassociateKafkaConfigOutcome>>();
    DisassociateKafkaConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const DisassociateKafkaConfigRequest&,
        DisassociateKafkaConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::DraftApiGroupOutcome TsfClient::DraftApiGroup(const DraftApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DraftApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DraftApiGroupResponse rsp = DraftApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DraftApiGroupOutcome(rsp);
        else
            return DraftApiGroupOutcome(o.GetError());
    }
    else
    {
        return DraftApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::DraftApiGroupAsync(const DraftApiGroupRequest& request, const DraftApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DraftApiGroupRequest&;
    using Resp = DraftApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "DraftApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::DraftApiGroupOutcomeCallable TsfClient::DraftApiGroupCallable(const DraftApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<DraftApiGroupOutcome>>();
    DraftApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const DraftApiGroupRequest&,
        DraftApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::EnableLaneRuleOutcome TsfClient::EnableLaneRule(const EnableLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableLaneRuleResponse rsp = EnableLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableLaneRuleOutcome(rsp);
        else
            return EnableLaneRuleOutcome(o.GetError());
    }
    else
    {
        return EnableLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::EnableLaneRuleAsync(const EnableLaneRuleRequest& request, const EnableLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableLaneRuleRequest&;
    using Resp = EnableLaneRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EnableLaneRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::EnableLaneRuleOutcomeCallable TsfClient::EnableLaneRuleCallable(const EnableLaneRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableLaneRuleOutcome>>();
    EnableLaneRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const EnableLaneRuleRequest&,
        EnableLaneRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::EnableTaskOutcome TsfClient::EnableTask(const EnableTaskRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTaskResponse rsp = EnableTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTaskOutcome(rsp);
        else
            return EnableTaskOutcome(o.GetError());
    }
    else
    {
        return EnableTaskOutcome(outcome.GetError());
    }
}

void TsfClient::EnableTaskAsync(const EnableTaskRequest& request, const EnableTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableTaskRequest&;
    using Resp = EnableTaskResponse;

    DoRequestAsync<Req, Resp>(
        "EnableTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::EnableTaskOutcomeCallable TsfClient::EnableTaskCallable(const EnableTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableTaskOutcome>>();
    EnableTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const EnableTaskRequest&,
        EnableTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::EnableTaskFlowOutcome TsfClient::EnableTaskFlow(const EnableTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "EnableTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableTaskFlowResponse rsp = EnableTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableTaskFlowOutcome(rsp);
        else
            return EnableTaskFlowOutcome(o.GetError());
    }
    else
    {
        return EnableTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::EnableTaskFlowAsync(const EnableTaskFlowRequest& request, const EnableTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableTaskFlowRequest&;
    using Resp = EnableTaskFlowResponse;

    DoRequestAsync<Req, Resp>(
        "EnableTaskFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::EnableTaskFlowOutcomeCallable TsfClient::EnableTaskFlowCallable(const EnableTaskFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableTaskFlowOutcome>>();
    EnableTaskFlowAsync(
    request,
    [prom](
        const TsfClient*,
        const EnableTaskFlowRequest&,
        EnableTaskFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::EnableUnitRouteOutcome TsfClient::EnableUnitRoute(const EnableUnitRouteRequest &request)
{
    auto outcome = MakeRequest(request, "EnableUnitRoute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableUnitRouteResponse rsp = EnableUnitRouteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableUnitRouteOutcome(rsp);
        else
            return EnableUnitRouteOutcome(o.GetError());
    }
    else
    {
        return EnableUnitRouteOutcome(outcome.GetError());
    }
}

void TsfClient::EnableUnitRouteAsync(const EnableUnitRouteRequest& request, const EnableUnitRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableUnitRouteRequest&;
    using Resp = EnableUnitRouteResponse;

    DoRequestAsync<Req, Resp>(
        "EnableUnitRoute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::EnableUnitRouteOutcomeCallable TsfClient::EnableUnitRouteCallable(const EnableUnitRouteRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableUnitRouteOutcome>>();
    EnableUnitRouteAsync(
    request,
    [prom](
        const TsfClient*,
        const EnableUnitRouteRequest&,
        EnableUnitRouteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::EnableUnitRuleOutcome TsfClient::EnableUnitRule(const EnableUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "EnableUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableUnitRuleResponse rsp = EnableUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableUnitRuleOutcome(rsp);
        else
            return EnableUnitRuleOutcome(o.GetError());
    }
    else
    {
        return EnableUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::EnableUnitRuleAsync(const EnableUnitRuleRequest& request, const EnableUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const EnableUnitRuleRequest&;
    using Resp = EnableUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "EnableUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::EnableUnitRuleOutcomeCallable TsfClient::EnableUnitRuleCallable(const EnableUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<EnableUnitRuleOutcome>>();
    EnableUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const EnableUnitRuleRequest&,
        EnableUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ExecuteTaskOutcome TsfClient::ExecuteTask(const ExecuteTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteTaskResponse rsp = ExecuteTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteTaskOutcome(rsp);
        else
            return ExecuteTaskOutcome(o.GetError());
    }
    else
    {
        return ExecuteTaskOutcome(outcome.GetError());
    }
}

void TsfClient::ExecuteTaskAsync(const ExecuteTaskRequest& request, const ExecuteTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExecuteTaskRequest&;
    using Resp = ExecuteTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ExecuteTaskOutcomeCallable TsfClient::ExecuteTaskCallable(const ExecuteTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteTaskOutcome>>();
    ExecuteTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const ExecuteTaskRequest&,
        ExecuteTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ExecuteTaskFlowOutcome TsfClient::ExecuteTaskFlow(const ExecuteTaskFlowRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteTaskFlow");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteTaskFlowResponse rsp = ExecuteTaskFlowResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteTaskFlowOutcome(rsp);
        else
            return ExecuteTaskFlowOutcome(o.GetError());
    }
    else
    {
        return ExecuteTaskFlowOutcome(outcome.GetError());
    }
}

void TsfClient::ExecuteTaskFlowAsync(const ExecuteTaskFlowRequest& request, const ExecuteTaskFlowAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExecuteTaskFlowRequest&;
    using Resp = ExecuteTaskFlowResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteTaskFlow", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ExecuteTaskFlowOutcomeCallable TsfClient::ExecuteTaskFlowCallable(const ExecuteTaskFlowRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteTaskFlowOutcome>>();
    ExecuteTaskFlowAsync(
    request,
    [prom](
        const TsfClient*,
        const ExecuteTaskFlowRequest&,
        ExecuteTaskFlowOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ExpandGroupOutcome TsfClient::ExpandGroup(const ExpandGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ExpandGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExpandGroupResponse rsp = ExpandGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExpandGroupOutcome(rsp);
        else
            return ExpandGroupOutcome(o.GetError());
    }
    else
    {
        return ExpandGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ExpandGroupAsync(const ExpandGroupRequest& request, const ExpandGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExpandGroupRequest&;
    using Resp = ExpandGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ExpandGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ExpandGroupOutcomeCallable TsfClient::ExpandGroupCallable(const ExpandGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExpandGroupOutcome>>();
    ExpandGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const ExpandGroupRequest&,
        ExpandGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyApplicationOutcome TsfClient::ModifyApplication(const ModifyApplicationRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplication");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationResponse rsp = ModifyApplicationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationOutcome(rsp);
        else
            return ModifyApplicationOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyApplicationAsync(const ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyApplicationRequest&;
    using Resp = ModifyApplicationResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyApplication", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyApplicationOutcomeCallable TsfClient::ModifyApplicationCallable(const ModifyApplicationRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyApplicationOutcome>>();
    ModifyApplicationAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyApplicationRequest&,
        ModifyApplicationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyClusterOutcome TsfClient::ModifyCluster(const ModifyClusterRequest &request)
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

void TsfClient::ModifyClusterAsync(const ModifyClusterRequest& request, const ModifyClusterAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyClusterRequest&;
    using Resp = ModifyClusterResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCluster", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyClusterOutcomeCallable TsfClient::ModifyClusterCallable(const ModifyClusterRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyClusterOutcome>>();
    ModifyClusterAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyClusterRequest&,
        ModifyClusterOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyContainerGroupOutcome TsfClient::ModifyContainerGroup(const ModifyContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContainerGroupResponse rsp = ModifyContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContainerGroupOutcome(rsp);
        else
            return ModifyContainerGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyContainerGroupAsync(const ModifyContainerGroupRequest& request, const ModifyContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyContainerGroupRequest&;
    using Resp = ModifyContainerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyContainerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyContainerGroupOutcomeCallable TsfClient::ModifyContainerGroupCallable(const ModifyContainerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyContainerGroupOutcome>>();
    ModifyContainerGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyContainerGroupRequest&,
        ModifyContainerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyContainerReplicasOutcome TsfClient::ModifyContainerReplicas(const ModifyContainerReplicasRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyContainerReplicas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyContainerReplicasResponse rsp = ModifyContainerReplicasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyContainerReplicasOutcome(rsp);
        else
            return ModifyContainerReplicasOutcome(o.GetError());
    }
    else
    {
        return ModifyContainerReplicasOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyContainerReplicasAsync(const ModifyContainerReplicasRequest& request, const ModifyContainerReplicasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyContainerReplicasRequest&;
    using Resp = ModifyContainerReplicasResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyContainerReplicas", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyContainerReplicasOutcomeCallable TsfClient::ModifyContainerReplicasCallable(const ModifyContainerReplicasRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyContainerReplicasOutcome>>();
    ModifyContainerReplicasAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyContainerReplicasRequest&,
        ModifyContainerReplicasOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyGroupOutcome TsfClient::ModifyGroup(const ModifyGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupResponse rsp = ModifyGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupOutcome(rsp);
        else
            return ModifyGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyGroupAsync(const ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGroupRequest&;
    using Resp = ModifyGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyGroupOutcomeCallable TsfClient::ModifyGroupCallable(const ModifyGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGroupOutcome>>();
    ModifyGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyGroupRequest&,
        ModifyGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyGroupLaneOutcome TsfClient::ModifyGroupLane(const ModifyGroupLaneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyGroupLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyGroupLaneResponse rsp = ModifyGroupLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyGroupLaneOutcome(rsp);
        else
            return ModifyGroupLaneOutcome(o.GetError());
    }
    else
    {
        return ModifyGroupLaneOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyGroupLaneAsync(const ModifyGroupLaneRequest& request, const ModifyGroupLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyGroupLaneRequest&;
    using Resp = ModifyGroupLaneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyGroupLane", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyGroupLaneOutcomeCallable TsfClient::ModifyGroupLaneCallable(const ModifyGroupLaneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyGroupLaneOutcome>>();
    ModifyGroupLaneAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyGroupLaneRequest&,
        ModifyGroupLaneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyLaneOutcome TsfClient::ModifyLane(const ModifyLaneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLane");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLaneResponse rsp = ModifyLaneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLaneOutcome(rsp);
        else
            return ModifyLaneOutcome(o.GetError());
    }
    else
    {
        return ModifyLaneOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyLaneAsync(const ModifyLaneRequest& request, const ModifyLaneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLaneRequest&;
    using Resp = ModifyLaneResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLane", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyLaneOutcomeCallable TsfClient::ModifyLaneCallable(const ModifyLaneRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLaneOutcome>>();
    ModifyLaneAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyLaneRequest&,
        ModifyLaneOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyLaneRuleOutcome TsfClient::ModifyLaneRule(const ModifyLaneRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLaneRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLaneRuleResponse rsp = ModifyLaneRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLaneRuleOutcome(rsp);
        else
            return ModifyLaneRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyLaneRuleOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyLaneRuleAsync(const ModifyLaneRuleRequest& request, const ModifyLaneRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLaneRuleRequest&;
    using Resp = ModifyLaneRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLaneRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyLaneRuleOutcomeCallable TsfClient::ModifyLaneRuleCallable(const ModifyLaneRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLaneRuleOutcome>>();
    ModifyLaneRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyLaneRuleRequest&,
        ModifyLaneRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyMicroserviceOutcome TsfClient::ModifyMicroservice(const ModifyMicroserviceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMicroservice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMicroserviceResponse rsp = ModifyMicroserviceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMicroserviceOutcome(rsp);
        else
            return ModifyMicroserviceOutcome(o.GetError());
    }
    else
    {
        return ModifyMicroserviceOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyMicroserviceAsync(const ModifyMicroserviceRequest& request, const ModifyMicroserviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMicroserviceRequest&;
    using Resp = ModifyMicroserviceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMicroservice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyMicroserviceOutcomeCallable TsfClient::ModifyMicroserviceCallable(const ModifyMicroserviceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMicroserviceOutcome>>();
    ModifyMicroserviceAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyMicroserviceRequest&,
        ModifyMicroserviceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyNamespaceOutcome TsfClient::ModifyNamespace(const ModifyNamespaceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNamespace");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNamespaceResponse rsp = ModifyNamespaceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNamespaceOutcome(rsp);
        else
            return ModifyNamespaceOutcome(o.GetError());
    }
    else
    {
        return ModifyNamespaceOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyNamespaceAsync(const ModifyNamespaceRequest& request, const ModifyNamespaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyNamespaceRequest&;
    using Resp = ModifyNamespaceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyNamespace", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyNamespaceOutcomeCallable TsfClient::ModifyNamespaceCallable(const ModifyNamespaceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyNamespaceOutcome>>();
    ModifyNamespaceAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyNamespaceRequest&,
        ModifyNamespaceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyPathRewriteOutcome TsfClient::ModifyPathRewrite(const ModifyPathRewriteRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPathRewrite");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPathRewriteResponse rsp = ModifyPathRewriteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPathRewriteOutcome(rsp);
        else
            return ModifyPathRewriteOutcome(o.GetError());
    }
    else
    {
        return ModifyPathRewriteOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyPathRewriteAsync(const ModifyPathRewriteRequest& request, const ModifyPathRewriteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyPathRewriteRequest&;
    using Resp = ModifyPathRewriteResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyPathRewrite", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyPathRewriteOutcomeCallable TsfClient::ModifyPathRewriteCallable(const ModifyPathRewriteRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyPathRewriteOutcome>>();
    ModifyPathRewriteAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyPathRewriteRequest&,
        ModifyPathRewriteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyProgramOutcome TsfClient::ModifyProgram(const ModifyProgramRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProgram");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProgramResponse rsp = ModifyProgramResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProgramOutcome(rsp);
        else
            return ModifyProgramOutcome(o.GetError());
    }
    else
    {
        return ModifyProgramOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyProgramAsync(const ModifyProgramRequest& request, const ModifyProgramAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProgramRequest&;
    using Resp = ModifyProgramResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProgram", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyProgramOutcomeCallable TsfClient::ModifyProgramCallable(const ModifyProgramRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProgramOutcome>>();
    ModifyProgramAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyProgramRequest&,
        ModifyProgramOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyTaskOutcome TsfClient::ModifyTask(const ModifyTaskRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTaskResponse rsp = ModifyTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTaskOutcome(rsp);
        else
            return ModifyTaskOutcome(o.GetError());
    }
    else
    {
        return ModifyTaskOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyTaskAsync(const ModifyTaskRequest& request, const ModifyTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTaskRequest&;
    using Resp = ModifyTaskResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyTaskOutcomeCallable TsfClient::ModifyTaskCallable(const ModifyTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTaskOutcome>>();
    ModifyTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyTaskRequest&,
        ModifyTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ModifyUploadInfoOutcome TsfClient::ModifyUploadInfo(const ModifyUploadInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyUploadInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyUploadInfoResponse rsp = ModifyUploadInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyUploadInfoOutcome(rsp);
        else
            return ModifyUploadInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyUploadInfoOutcome(outcome.GetError());
    }
}

void TsfClient::ModifyUploadInfoAsync(const ModifyUploadInfoRequest& request, const ModifyUploadInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyUploadInfoRequest&;
    using Resp = ModifyUploadInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyUploadInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ModifyUploadInfoOutcomeCallable TsfClient::ModifyUploadInfoCallable(const ModifyUploadInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyUploadInfoOutcome>>();
    ModifyUploadInfoAsync(
    request,
    [prom](
        const TsfClient*,
        const ModifyUploadInfoRequest&,
        ModifyUploadInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::OperateApplicationTcrBindingOutcome TsfClient::OperateApplicationTcrBinding(const OperateApplicationTcrBindingRequest &request)
{
    auto outcome = MakeRequest(request, "OperateApplicationTcrBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        OperateApplicationTcrBindingResponse rsp = OperateApplicationTcrBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return OperateApplicationTcrBindingOutcome(rsp);
        else
            return OperateApplicationTcrBindingOutcome(o.GetError());
    }
    else
    {
        return OperateApplicationTcrBindingOutcome(outcome.GetError());
    }
}

void TsfClient::OperateApplicationTcrBindingAsync(const OperateApplicationTcrBindingRequest& request, const OperateApplicationTcrBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const OperateApplicationTcrBindingRequest&;
    using Resp = OperateApplicationTcrBindingResponse;

    DoRequestAsync<Req, Resp>(
        "OperateApplicationTcrBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::OperateApplicationTcrBindingOutcomeCallable TsfClient::OperateApplicationTcrBindingCallable(const OperateApplicationTcrBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<OperateApplicationTcrBindingOutcome>>();
    OperateApplicationTcrBindingAsync(
    request,
    [prom](
        const TsfClient*,
        const OperateApplicationTcrBindingRequest&,
        OperateApplicationTcrBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ReassociateBusinessLogConfigOutcome TsfClient::ReassociateBusinessLogConfig(const ReassociateBusinessLogConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReassociateBusinessLogConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReassociateBusinessLogConfigResponse rsp = ReassociateBusinessLogConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReassociateBusinessLogConfigOutcome(rsp);
        else
            return ReassociateBusinessLogConfigOutcome(o.GetError());
    }
    else
    {
        return ReassociateBusinessLogConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReassociateBusinessLogConfigAsync(const ReassociateBusinessLogConfigRequest& request, const ReassociateBusinessLogConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReassociateBusinessLogConfigRequest&;
    using Resp = ReassociateBusinessLogConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ReassociateBusinessLogConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ReassociateBusinessLogConfigOutcomeCallable TsfClient::ReassociateBusinessLogConfigCallable(const ReassociateBusinessLogConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReassociateBusinessLogConfigOutcome>>();
    ReassociateBusinessLogConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const ReassociateBusinessLogConfigRequest&,
        ReassociateBusinessLogConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RedoTaskOutcome TsfClient::RedoTask(const RedoTaskRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskResponse rsp = RedoTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskOutcome(rsp);
        else
            return RedoTaskOutcome(o.GetError());
    }
    else
    {
        return RedoTaskOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskAsync(const RedoTaskRequest& request, const RedoTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RedoTaskRequest&;
    using Resp = RedoTaskResponse;

    DoRequestAsync<Req, Resp>(
        "RedoTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RedoTaskOutcomeCallable TsfClient::RedoTaskCallable(const RedoTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<RedoTaskOutcome>>();
    RedoTaskAsync(
    request,
    [prom](
        const TsfClient*,
        const RedoTaskRequest&,
        RedoTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RedoTaskBatchOutcome TsfClient::RedoTaskBatch(const RedoTaskBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTaskBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskBatchResponse rsp = RedoTaskBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskBatchOutcome(rsp);
        else
            return RedoTaskBatchOutcome(o.GetError());
    }
    else
    {
        return RedoTaskBatchOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskBatchAsync(const RedoTaskBatchRequest& request, const RedoTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RedoTaskBatchRequest&;
    using Resp = RedoTaskBatchResponse;

    DoRequestAsync<Req, Resp>(
        "RedoTaskBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RedoTaskBatchOutcomeCallable TsfClient::RedoTaskBatchCallable(const RedoTaskBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<RedoTaskBatchOutcome>>();
    RedoTaskBatchAsync(
    request,
    [prom](
        const TsfClient*,
        const RedoTaskBatchRequest&,
        RedoTaskBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RedoTaskExecuteOutcome TsfClient::RedoTaskExecute(const RedoTaskExecuteRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTaskExecute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskExecuteResponse rsp = RedoTaskExecuteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskExecuteOutcome(rsp);
        else
            return RedoTaskExecuteOutcome(o.GetError());
    }
    else
    {
        return RedoTaskExecuteOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskExecuteAsync(const RedoTaskExecuteRequest& request, const RedoTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RedoTaskExecuteRequest&;
    using Resp = RedoTaskExecuteResponse;

    DoRequestAsync<Req, Resp>(
        "RedoTaskExecute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RedoTaskExecuteOutcomeCallable TsfClient::RedoTaskExecuteCallable(const RedoTaskExecuteRequest &request)
{
    const auto prom = std::make_shared<std::promise<RedoTaskExecuteOutcome>>();
    RedoTaskExecuteAsync(
    request,
    [prom](
        const TsfClient*,
        const RedoTaskExecuteRequest&,
        RedoTaskExecuteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RedoTaskFlowBatchOutcome TsfClient::RedoTaskFlowBatch(const RedoTaskFlowBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RedoTaskFlowBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RedoTaskFlowBatchResponse rsp = RedoTaskFlowBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RedoTaskFlowBatchOutcome(rsp);
        else
            return RedoTaskFlowBatchOutcome(o.GetError());
    }
    else
    {
        return RedoTaskFlowBatchOutcome(outcome.GetError());
    }
}

void TsfClient::RedoTaskFlowBatchAsync(const RedoTaskFlowBatchRequest& request, const RedoTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RedoTaskFlowBatchRequest&;
    using Resp = RedoTaskFlowBatchResponse;

    DoRequestAsync<Req, Resp>(
        "RedoTaskFlowBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RedoTaskFlowBatchOutcomeCallable TsfClient::RedoTaskFlowBatchCallable(const RedoTaskFlowBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<RedoTaskFlowBatchOutcome>>();
    RedoTaskFlowBatchAsync(
    request,
    [prom](
        const TsfClient*,
        const RedoTaskFlowBatchRequest&,
        RedoTaskFlowBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ReleaseApiGroupOutcome TsfClient::ReleaseApiGroup(const ReleaseApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseApiGroupResponse rsp = ReleaseApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseApiGroupOutcome(rsp);
        else
            return ReleaseApiGroupOutcome(o.GetError());
    }
    else
    {
        return ReleaseApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseApiGroupAsync(const ReleaseApiGroupRequest& request, const ReleaseApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseApiGroupRequest&;
    using Resp = ReleaseApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ReleaseApiGroupOutcomeCallable TsfClient::ReleaseApiGroupCallable(const ReleaseApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseApiGroupOutcome>>();
    ReleaseApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const ReleaseApiGroupRequest&,
        ReleaseApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ReleaseConfigOutcome TsfClient::ReleaseConfig(const ReleaseConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseConfigResponse rsp = ReleaseConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseConfigOutcome(rsp);
        else
            return ReleaseConfigOutcome(o.GetError());
    }
    else
    {
        return ReleaseConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseConfigAsync(const ReleaseConfigRequest& request, const ReleaseConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseConfigRequest&;
    using Resp = ReleaseConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ReleaseConfigOutcomeCallable TsfClient::ReleaseConfigCallable(const ReleaseConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseConfigOutcome>>();
    ReleaseConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const ReleaseConfigRequest&,
        ReleaseConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ReleaseConfigWithDetailRespOutcome TsfClient::ReleaseConfigWithDetailResp(const ReleaseConfigWithDetailRespRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseConfigWithDetailResp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseConfigWithDetailRespResponse rsp = ReleaseConfigWithDetailRespResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseConfigWithDetailRespOutcome(rsp);
        else
            return ReleaseConfigWithDetailRespOutcome(o.GetError());
    }
    else
    {
        return ReleaseConfigWithDetailRespOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseConfigWithDetailRespAsync(const ReleaseConfigWithDetailRespRequest& request, const ReleaseConfigWithDetailRespAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseConfigWithDetailRespRequest&;
    using Resp = ReleaseConfigWithDetailRespResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseConfigWithDetailResp", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ReleaseConfigWithDetailRespOutcomeCallable TsfClient::ReleaseConfigWithDetailRespCallable(const ReleaseConfigWithDetailRespRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseConfigWithDetailRespOutcome>>();
    ReleaseConfigWithDetailRespAsync(
    request,
    [prom](
        const TsfClient*,
        const ReleaseConfigWithDetailRespRequest&,
        ReleaseConfigWithDetailRespOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ReleaseFileConfigOutcome TsfClient::ReleaseFileConfig(const ReleaseFileConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReleaseFileConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleaseFileConfigResponse rsp = ReleaseFileConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleaseFileConfigOutcome(rsp);
        else
            return ReleaseFileConfigOutcome(o.GetError());
    }
    else
    {
        return ReleaseFileConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReleaseFileConfigAsync(const ReleaseFileConfigRequest& request, const ReleaseFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleaseFileConfigRequest&;
    using Resp = ReleaseFileConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ReleaseFileConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ReleaseFileConfigOutcomeCallable TsfClient::ReleaseFileConfigCallable(const ReleaseFileConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleaseFileConfigOutcome>>();
    ReleaseFileConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const ReleaseFileConfigRequest&,
        ReleaseFileConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ReleasePublicConfigOutcome TsfClient::ReleasePublicConfig(const ReleasePublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ReleasePublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReleasePublicConfigResponse rsp = ReleasePublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReleasePublicConfigOutcome(rsp);
        else
            return ReleasePublicConfigOutcome(o.GetError());
    }
    else
    {
        return ReleasePublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::ReleasePublicConfigAsync(const ReleasePublicConfigRequest& request, const ReleasePublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReleasePublicConfigRequest&;
    using Resp = ReleasePublicConfigResponse;

    DoRequestAsync<Req, Resp>(
        "ReleasePublicConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ReleasePublicConfigOutcomeCallable TsfClient::ReleasePublicConfigCallable(const ReleasePublicConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReleasePublicConfigOutcome>>();
    ReleasePublicConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const ReleasePublicConfigRequest&,
        ReleasePublicConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RemoveInstancesOutcome TsfClient::RemoveInstances(const RemoveInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "RemoveInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RemoveInstancesResponse rsp = RemoveInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RemoveInstancesOutcome(rsp);
        else
            return RemoveInstancesOutcome(o.GetError());
    }
    else
    {
        return RemoveInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::RemoveInstancesAsync(const RemoveInstancesRequest& request, const RemoveInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RemoveInstancesRequest&;
    using Resp = RemoveInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "RemoveInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RemoveInstancesOutcomeCallable TsfClient::RemoveInstancesCallable(const RemoveInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<RemoveInstancesOutcome>>();
    RemoveInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const RemoveInstancesRequest&,
        RemoveInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RevocationConfigOutcome TsfClient::RevocationConfig(const RevocationConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RevocationConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevocationConfigResponse rsp = RevocationConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevocationConfigOutcome(rsp);
        else
            return RevocationConfigOutcome(o.GetError());
    }
    else
    {
        return RevocationConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RevocationConfigAsync(const RevocationConfigRequest& request, const RevocationConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevocationConfigRequest&;
    using Resp = RevocationConfigResponse;

    DoRequestAsync<Req, Resp>(
        "RevocationConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RevocationConfigOutcomeCallable TsfClient::RevocationConfigCallable(const RevocationConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevocationConfigOutcome>>();
    RevocationConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const RevocationConfigRequest&,
        RevocationConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RevocationPublicConfigOutcome TsfClient::RevocationPublicConfig(const RevocationPublicConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RevocationPublicConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevocationPublicConfigResponse rsp = RevocationPublicConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevocationPublicConfigOutcome(rsp);
        else
            return RevocationPublicConfigOutcome(o.GetError());
    }
    else
    {
        return RevocationPublicConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RevocationPublicConfigAsync(const RevocationPublicConfigRequest& request, const RevocationPublicConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevocationPublicConfigRequest&;
    using Resp = RevocationPublicConfigResponse;

    DoRequestAsync<Req, Resp>(
        "RevocationPublicConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RevocationPublicConfigOutcomeCallable TsfClient::RevocationPublicConfigCallable(const RevocationPublicConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevocationPublicConfigOutcome>>();
    RevocationPublicConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const RevocationPublicConfigRequest&,
        RevocationPublicConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RevokeFileConfigOutcome TsfClient::RevokeFileConfig(const RevokeFileConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeFileConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeFileConfigResponse rsp = RevokeFileConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeFileConfigOutcome(rsp);
        else
            return RevokeFileConfigOutcome(o.GetError());
    }
    else
    {
        return RevokeFileConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RevokeFileConfigAsync(const RevokeFileConfigRequest& request, const RevokeFileConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeFileConfigRequest&;
    using Resp = RevokeFileConfigResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeFileConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RevokeFileConfigOutcomeCallable TsfClient::RevokeFileConfigCallable(const RevokeFileConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeFileConfigOutcome>>();
    RevokeFileConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const RevokeFileConfigRequest&,
        RevokeFileConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::RollbackConfigOutcome TsfClient::RollbackConfig(const RollbackConfigRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackConfigResponse rsp = RollbackConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackConfigOutcome(rsp);
        else
            return RollbackConfigOutcome(o.GetError());
    }
    else
    {
        return RollbackConfigOutcome(outcome.GetError());
    }
}

void TsfClient::RollbackConfigAsync(const RollbackConfigRequest& request, const RollbackConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RollbackConfigRequest&;
    using Resp = RollbackConfigResponse;

    DoRequestAsync<Req, Resp>(
        "RollbackConfig", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::RollbackConfigOutcomeCallable TsfClient::RollbackConfigCallable(const RollbackConfigRequest &request)
{
    const auto prom = std::make_shared<std::promise<RollbackConfigOutcome>>();
    RollbackConfigAsync(
    request,
    [prom](
        const TsfClient*,
        const RollbackConfigRequest&,
        RollbackConfigOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::SearchBusinessLogOutcome TsfClient::SearchBusinessLog(const SearchBusinessLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchBusinessLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchBusinessLogResponse rsp = SearchBusinessLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchBusinessLogOutcome(rsp);
        else
            return SearchBusinessLogOutcome(o.GetError());
    }
    else
    {
        return SearchBusinessLogOutcome(outcome.GetError());
    }
}

void TsfClient::SearchBusinessLogAsync(const SearchBusinessLogRequest& request, const SearchBusinessLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchBusinessLogRequest&;
    using Resp = SearchBusinessLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchBusinessLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::SearchBusinessLogOutcomeCallable TsfClient::SearchBusinessLogCallable(const SearchBusinessLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchBusinessLogOutcome>>();
    SearchBusinessLogAsync(
    request,
    [prom](
        const TsfClient*,
        const SearchBusinessLogRequest&,
        SearchBusinessLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::SearchStdoutLogOutcome TsfClient::SearchStdoutLog(const SearchStdoutLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchStdoutLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchStdoutLogResponse rsp = SearchStdoutLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchStdoutLogOutcome(rsp);
        else
            return SearchStdoutLogOutcome(o.GetError());
    }
    else
    {
        return SearchStdoutLogOutcome(outcome.GetError());
    }
}

void TsfClient::SearchStdoutLogAsync(const SearchStdoutLogRequest& request, const SearchStdoutLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SearchStdoutLogRequest&;
    using Resp = SearchStdoutLogResponse;

    DoRequestAsync<Req, Resp>(
        "SearchStdoutLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::SearchStdoutLogOutcomeCallable TsfClient::SearchStdoutLogCallable(const SearchStdoutLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<SearchStdoutLogOutcome>>();
    SearchStdoutLogAsync(
    request,
    [prom](
        const TsfClient*,
        const SearchStdoutLogRequest&,
        SearchStdoutLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ShrinkGroupOutcome TsfClient::ShrinkGroup(const ShrinkGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ShrinkGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShrinkGroupResponse rsp = ShrinkGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShrinkGroupOutcome(rsp);
        else
            return ShrinkGroupOutcome(o.GetError());
    }
    else
    {
        return ShrinkGroupOutcome(outcome.GetError());
    }
}

void TsfClient::ShrinkGroupAsync(const ShrinkGroupRequest& request, const ShrinkGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ShrinkGroupRequest&;
    using Resp = ShrinkGroupResponse;

    DoRequestAsync<Req, Resp>(
        "ShrinkGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ShrinkGroupOutcomeCallable TsfClient::ShrinkGroupCallable(const ShrinkGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<ShrinkGroupOutcome>>();
    ShrinkGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const ShrinkGroupRequest&,
        ShrinkGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::ShrinkInstancesOutcome TsfClient::ShrinkInstances(const ShrinkInstancesRequest &request)
{
    auto outcome = MakeRequest(request, "ShrinkInstances");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ShrinkInstancesResponse rsp = ShrinkInstancesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ShrinkInstancesOutcome(rsp);
        else
            return ShrinkInstancesOutcome(o.GetError());
    }
    else
    {
        return ShrinkInstancesOutcome(outcome.GetError());
    }
}

void TsfClient::ShrinkInstancesAsync(const ShrinkInstancesRequest& request, const ShrinkInstancesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ShrinkInstancesRequest&;
    using Resp = ShrinkInstancesResponse;

    DoRequestAsync<Req, Resp>(
        "ShrinkInstances", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::ShrinkInstancesOutcomeCallable TsfClient::ShrinkInstancesCallable(const ShrinkInstancesRequest &request)
{
    const auto prom = std::make_shared<std::promise<ShrinkInstancesOutcome>>();
    ShrinkInstancesAsync(
    request,
    [prom](
        const TsfClient*,
        const ShrinkInstancesRequest&,
        ShrinkInstancesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::StartContainerGroupOutcome TsfClient::StartContainerGroup(const StartContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StartContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartContainerGroupResponse rsp = StartContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartContainerGroupOutcome(rsp);
        else
            return StartContainerGroupOutcome(o.GetError());
    }
    else
    {
        return StartContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StartContainerGroupAsync(const StartContainerGroupRequest& request, const StartContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartContainerGroupRequest&;
    using Resp = StartContainerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "StartContainerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::StartContainerGroupOutcomeCallable TsfClient::StartContainerGroupCallable(const StartContainerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartContainerGroupOutcome>>();
    StartContainerGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const StartContainerGroupRequest&,
        StartContainerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::StartGroupOutcome TsfClient::StartGroup(const StartGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StartGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartGroupResponse rsp = StartGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartGroupOutcome(rsp);
        else
            return StartGroupOutcome(o.GetError());
    }
    else
    {
        return StartGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StartGroupAsync(const StartGroupRequest& request, const StartGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartGroupRequest&;
    using Resp = StartGroupResponse;

    DoRequestAsync<Req, Resp>(
        "StartGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::StartGroupOutcomeCallable TsfClient::StartGroupCallable(const StartGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartGroupOutcome>>();
    StartGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const StartGroupRequest&,
        StartGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::StopContainerGroupOutcome TsfClient::StopContainerGroup(const StopContainerGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StopContainerGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopContainerGroupResponse rsp = StopContainerGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopContainerGroupOutcome(rsp);
        else
            return StopContainerGroupOutcome(o.GetError());
    }
    else
    {
        return StopContainerGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StopContainerGroupAsync(const StopContainerGroupRequest& request, const StopContainerGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopContainerGroupRequest&;
    using Resp = StopContainerGroupResponse;

    DoRequestAsync<Req, Resp>(
        "StopContainerGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::StopContainerGroupOutcomeCallable TsfClient::StopContainerGroupCallable(const StopContainerGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopContainerGroupOutcome>>();
    StopContainerGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const StopContainerGroupRequest&,
        StopContainerGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::StopGroupOutcome TsfClient::StopGroup(const StopGroupRequest &request)
{
    auto outcome = MakeRequest(request, "StopGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopGroupResponse rsp = StopGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopGroupOutcome(rsp);
        else
            return StopGroupOutcome(o.GetError());
    }
    else
    {
        return StopGroupOutcome(outcome.GetError());
    }
}

void TsfClient::StopGroupAsync(const StopGroupRequest& request, const StopGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopGroupRequest&;
    using Resp = StopGroupResponse;

    DoRequestAsync<Req, Resp>(
        "StopGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::StopGroupOutcomeCallable TsfClient::StopGroupCallable(const StopGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopGroupOutcome>>();
    StopGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const StopGroupRequest&,
        StopGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::StopTaskBatchOutcome TsfClient::StopTaskBatch(const StopTaskBatchRequest &request)
{
    auto outcome = MakeRequest(request, "StopTaskBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTaskBatchResponse rsp = StopTaskBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTaskBatchOutcome(rsp);
        else
            return StopTaskBatchOutcome(o.GetError());
    }
    else
    {
        return StopTaskBatchOutcome(outcome.GetError());
    }
}

void TsfClient::StopTaskBatchAsync(const StopTaskBatchRequest& request, const StopTaskBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopTaskBatchRequest&;
    using Resp = StopTaskBatchResponse;

    DoRequestAsync<Req, Resp>(
        "StopTaskBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::StopTaskBatchOutcomeCallable TsfClient::StopTaskBatchCallable(const StopTaskBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopTaskBatchOutcome>>();
    StopTaskBatchAsync(
    request,
    [prom](
        const TsfClient*,
        const StopTaskBatchRequest&,
        StopTaskBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::StopTaskExecuteOutcome TsfClient::StopTaskExecute(const StopTaskExecuteRequest &request)
{
    auto outcome = MakeRequest(request, "StopTaskExecute");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopTaskExecuteResponse rsp = StopTaskExecuteResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopTaskExecuteOutcome(rsp);
        else
            return StopTaskExecuteOutcome(o.GetError());
    }
    else
    {
        return StopTaskExecuteOutcome(outcome.GetError());
    }
}

void TsfClient::StopTaskExecuteAsync(const StopTaskExecuteRequest& request, const StopTaskExecuteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopTaskExecuteRequest&;
    using Resp = StopTaskExecuteResponse;

    DoRequestAsync<Req, Resp>(
        "StopTaskExecute", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::StopTaskExecuteOutcomeCallable TsfClient::StopTaskExecuteCallable(const StopTaskExecuteRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopTaskExecuteOutcome>>();
    StopTaskExecuteAsync(
    request,
    [prom](
        const TsfClient*,
        const StopTaskExecuteRequest&,
        StopTaskExecuteOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::TerminateTaskFlowBatchOutcome TsfClient::TerminateTaskFlowBatch(const TerminateTaskFlowBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateTaskFlowBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateTaskFlowBatchResponse rsp = TerminateTaskFlowBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateTaskFlowBatchOutcome(rsp);
        else
            return TerminateTaskFlowBatchOutcome(o.GetError());
    }
    else
    {
        return TerminateTaskFlowBatchOutcome(outcome.GetError());
    }
}

void TsfClient::TerminateTaskFlowBatchAsync(const TerminateTaskFlowBatchRequest& request, const TerminateTaskFlowBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateTaskFlowBatchRequest&;
    using Resp = TerminateTaskFlowBatchResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateTaskFlowBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::TerminateTaskFlowBatchOutcomeCallable TsfClient::TerminateTaskFlowBatchCallable(const TerminateTaskFlowBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateTaskFlowBatchOutcome>>();
    TerminateTaskFlowBatchAsync(
    request,
    [prom](
        const TsfClient*,
        const TerminateTaskFlowBatchRequest&,
        TerminateTaskFlowBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UnbindApiGroupOutcome TsfClient::UnbindApiGroup(const UnbindApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindApiGroupResponse rsp = UnbindApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindApiGroupOutcome(rsp);
        else
            return UnbindApiGroupOutcome(o.GetError());
    }
    else
    {
        return UnbindApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::UnbindApiGroupAsync(const UnbindApiGroupRequest& request, const UnbindApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindApiGroupRequest&;
    using Resp = UnbindApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UnbindApiGroupOutcomeCallable TsfClient::UnbindApiGroupCallable(const UnbindApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindApiGroupOutcome>>();
    UnbindApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const UnbindApiGroupRequest&,
        UnbindApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateApiGroupOutcome TsfClient::UpdateApiGroup(const UpdateApiGroupRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiGroupResponse rsp = UpdateApiGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiGroupOutcome(rsp);
        else
            return UpdateApiGroupOutcome(o.GetError());
    }
    else
    {
        return UpdateApiGroupOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiGroupAsync(const UpdateApiGroupRequest& request, const UpdateApiGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiGroupRequest&;
    using Resp = UpdateApiGroupResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiGroup", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateApiGroupOutcomeCallable TsfClient::UpdateApiGroupCallable(const UpdateApiGroupRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiGroupOutcome>>();
    UpdateApiGroupAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateApiGroupRequest&,
        UpdateApiGroupOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateApiRateLimitRuleOutcome TsfClient::UpdateApiRateLimitRule(const UpdateApiRateLimitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiRateLimitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiRateLimitRuleResponse rsp = UpdateApiRateLimitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiRateLimitRuleOutcome(rsp);
        else
            return UpdateApiRateLimitRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateApiRateLimitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiRateLimitRuleAsync(const UpdateApiRateLimitRuleRequest& request, const UpdateApiRateLimitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiRateLimitRuleRequest&;
    using Resp = UpdateApiRateLimitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiRateLimitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateApiRateLimitRuleOutcomeCallable TsfClient::UpdateApiRateLimitRuleCallable(const UpdateApiRateLimitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiRateLimitRuleOutcome>>();
    UpdateApiRateLimitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateApiRateLimitRuleRequest&,
        UpdateApiRateLimitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateApiRateLimitRulesOutcome TsfClient::UpdateApiRateLimitRules(const UpdateApiRateLimitRulesRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiRateLimitRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiRateLimitRulesResponse rsp = UpdateApiRateLimitRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiRateLimitRulesOutcome(rsp);
        else
            return UpdateApiRateLimitRulesOutcome(o.GetError());
    }
    else
    {
        return UpdateApiRateLimitRulesOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiRateLimitRulesAsync(const UpdateApiRateLimitRulesRequest& request, const UpdateApiRateLimitRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiRateLimitRulesRequest&;
    using Resp = UpdateApiRateLimitRulesResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiRateLimitRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateApiRateLimitRulesOutcomeCallable TsfClient::UpdateApiRateLimitRulesCallable(const UpdateApiRateLimitRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiRateLimitRulesOutcome>>();
    UpdateApiRateLimitRulesAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateApiRateLimitRulesRequest&,
        UpdateApiRateLimitRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateApiTimeoutsOutcome TsfClient::UpdateApiTimeouts(const UpdateApiTimeoutsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateApiTimeouts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateApiTimeoutsResponse rsp = UpdateApiTimeoutsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateApiTimeoutsOutcome(rsp);
        else
            return UpdateApiTimeoutsOutcome(o.GetError());
    }
    else
    {
        return UpdateApiTimeoutsOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateApiTimeoutsAsync(const UpdateApiTimeoutsRequest& request, const UpdateApiTimeoutsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateApiTimeoutsRequest&;
    using Resp = UpdateApiTimeoutsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateApiTimeouts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateApiTimeoutsOutcomeCallable TsfClient::UpdateApiTimeoutsCallable(const UpdateApiTimeoutsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateApiTimeoutsOutcome>>();
    UpdateApiTimeoutsAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateApiTimeoutsRequest&,
        UpdateApiTimeoutsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateConfigTemplateOutcome TsfClient::UpdateConfigTemplate(const UpdateConfigTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateConfigTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateConfigTemplateResponse rsp = UpdateConfigTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateConfigTemplateOutcome(rsp);
        else
            return UpdateConfigTemplateOutcome(o.GetError());
    }
    else
    {
        return UpdateConfigTemplateOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateConfigTemplateAsync(const UpdateConfigTemplateRequest& request, const UpdateConfigTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateConfigTemplateRequest&;
    using Resp = UpdateConfigTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateConfigTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateConfigTemplateOutcomeCallable TsfClient::UpdateConfigTemplateCallable(const UpdateConfigTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateConfigTemplateOutcome>>();
    UpdateConfigTemplateAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateConfigTemplateRequest&,
        UpdateConfigTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateGatewayApiOutcome TsfClient::UpdateGatewayApi(const UpdateGatewayApiRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateGatewayApi");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateGatewayApiResponse rsp = UpdateGatewayApiResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateGatewayApiOutcome(rsp);
        else
            return UpdateGatewayApiOutcome(o.GetError());
    }
    else
    {
        return UpdateGatewayApiOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateGatewayApiAsync(const UpdateGatewayApiRequest& request, const UpdateGatewayApiAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateGatewayApiRequest&;
    using Resp = UpdateGatewayApiResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateGatewayApi", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateGatewayApiOutcomeCallable TsfClient::UpdateGatewayApiCallable(const UpdateGatewayApiRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateGatewayApiOutcome>>();
    UpdateGatewayApiAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateGatewayApiRequest&,
        UpdateGatewayApiOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateHealthCheckSettingsOutcome TsfClient::UpdateHealthCheckSettings(const UpdateHealthCheckSettingsRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateHealthCheckSettings");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateHealthCheckSettingsResponse rsp = UpdateHealthCheckSettingsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateHealthCheckSettingsOutcome(rsp);
        else
            return UpdateHealthCheckSettingsOutcome(o.GetError());
    }
    else
    {
        return UpdateHealthCheckSettingsOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateHealthCheckSettingsAsync(const UpdateHealthCheckSettingsRequest& request, const UpdateHealthCheckSettingsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateHealthCheckSettingsRequest&;
    using Resp = UpdateHealthCheckSettingsResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateHealthCheckSettings", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateHealthCheckSettingsOutcomeCallable TsfClient::UpdateHealthCheckSettingsCallable(const UpdateHealthCheckSettingsRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateHealthCheckSettingsOutcome>>();
    UpdateHealthCheckSettingsAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateHealthCheckSettingsRequest&,
        UpdateHealthCheckSettingsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateRepositoryOutcome TsfClient::UpdateRepository(const UpdateRepositoryRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateRepository");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateRepositoryResponse rsp = UpdateRepositoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateRepositoryOutcome(rsp);
        else
            return UpdateRepositoryOutcome(o.GetError());
    }
    else
    {
        return UpdateRepositoryOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateRepositoryAsync(const UpdateRepositoryRequest& request, const UpdateRepositoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateRepositoryRequest&;
    using Resp = UpdateRepositoryResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateRepository", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateRepositoryOutcomeCallable TsfClient::UpdateRepositoryCallable(const UpdateRepositoryRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateRepositoryOutcome>>();
    UpdateRepositoryAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateRepositoryRequest&,
        UpdateRepositoryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TsfClient::UpdateUnitRuleOutcome TsfClient::UpdateUnitRule(const UpdateUnitRuleRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateUnitRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateUnitRuleResponse rsp = UpdateUnitRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateUnitRuleOutcome(rsp);
        else
            return UpdateUnitRuleOutcome(o.GetError());
    }
    else
    {
        return UpdateUnitRuleOutcome(outcome.GetError());
    }
}

void TsfClient::UpdateUnitRuleAsync(const UpdateUnitRuleRequest& request, const UpdateUnitRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateUnitRuleRequest&;
    using Resp = UpdateUnitRuleResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateUnitRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TsfClient::UpdateUnitRuleOutcomeCallable TsfClient::UpdateUnitRuleCallable(const UpdateUnitRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateUnitRuleOutcome>>();
    UpdateUnitRuleAsync(
    request,
    [prom](
        const TsfClient*,
        const UpdateUnitRuleRequest&,
        UpdateUnitRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

