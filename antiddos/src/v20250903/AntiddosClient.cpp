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

#include <tencentcloud/antiddos/v20250903/AntiddosClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Antiddos::V20250903;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

namespace
{
    const string VERSION = "2025-09-03";
    const string ENDPOINT = "antiddos.tencentcloudapi.com";
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region) :
    AntiddosClient(credential, region, ClientProfile())
{
}

AntiddosClient::AntiddosClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


AntiddosClient::CreateProtectionOutcome AntiddosClient::CreateProtection(const CreateProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProtectionResponse rsp = CreateProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProtectionOutcome(rsp);
        else
            return CreateProtectionOutcome(o.GetError());
    }
    else
    {
        return CreateProtectionOutcome(outcome.GetError());
    }
}

void AntiddosClient::CreateProtectionAsync(const CreateProtectionRequest& request, const CreateProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateProtectionRequest&;
    using Resp = CreateProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::CreateProtectionOutcomeCallable AntiddosClient::CreateProtectionCallable(const CreateProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateProtectionOutcome>>();
    CreateProtectionAsync(
    request,
    [prom](
        const AntiddosClient*,
        const CreateProtectionRequest&,
        CreateProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DeleteProtectionOutcome AntiddosClient::DeleteProtection(const DeleteProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProtectionResponse rsp = DeleteProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProtectionOutcome(rsp);
        else
            return DeleteProtectionOutcome(o.GetError());
    }
    else
    {
        return DeleteProtectionOutcome(outcome.GetError());
    }
}

void AntiddosClient::DeleteProtectionAsync(const DeleteProtectionRequest& request, const DeleteProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteProtectionRequest&;
    using Resp = DeleteProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DeleteProtectionOutcomeCallable AntiddosClient::DeleteProtectionCallable(const DeleteProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteProtectionOutcome>>();
    DeleteProtectionAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DeleteProtectionRequest&,
        DeleteProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeDDoSBlockRecordsOutcome AntiddosClient::DescribeDDoSBlockRecords(const DescribeDDoSBlockRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSBlockRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSBlockRecordsResponse rsp = DescribeDDoSBlockRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSBlockRecordsOutcome(rsp);
        else
            return DescribeDDoSBlockRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSBlockRecordsOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSBlockRecordsAsync(const DescribeDDoSBlockRecordsRequest& request, const DescribeDDoSBlockRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSBlockRecordsRequest&;
    using Resp = DescribeDDoSBlockRecordsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSBlockRecords", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDDoSBlockRecordsOutcomeCallable AntiddosClient::DescribeDDoSBlockRecordsCallable(const DescribeDDoSBlockRecordsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSBlockRecordsOutcome>>();
    DescribeDDoSBlockRecordsAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDDoSBlockRecordsRequest&,
        DescribeDDoSBlockRecordsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeDDoSProtectionPolicyOutcome AntiddosClient::DescribeDDoSProtectionPolicy(const DescribeDDoSProtectionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSProtectionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSProtectionPolicyResponse rsp = DescribeDDoSProtectionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSProtectionPolicyOutcome(rsp);
        else
            return DescribeDDoSProtectionPolicyOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSProtectionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeDDoSProtectionPolicyAsync(const DescribeDDoSProtectionPolicyRequest& request, const DescribeDDoSProtectionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDDoSProtectionPolicyRequest&;
    using Resp = DescribeDDoSProtectionPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDDoSProtectionPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeDDoSProtectionPolicyOutcomeCallable AntiddosClient::DescribeDDoSProtectionPolicyCallable(const DescribeDDoSProtectionPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDDoSProtectionPolicyOutcome>>();
    DescribeDDoSProtectionPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeDDoSProtectionPolicyRequest&,
        DescribeDDoSProtectionPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeProtectionResourcesOutcome AntiddosClient::DescribeProtectionResources(const DescribeProtectionResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtectionResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectionResourcesResponse rsp = DescribeProtectionResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectionResourcesOutcome(rsp);
        else
            return DescribeProtectionResourcesOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectionResourcesOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeProtectionResourcesAsync(const DescribeProtectionResourcesRequest& request, const DescribeProtectionResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProtectionResourcesRequest&;
    using Resp = DescribeProtectionResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtectionResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeProtectionResourcesOutcomeCallable AntiddosClient::DescribeProtectionResourcesCallable(const DescribeProtectionResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectionResourcesOutcome>>();
    DescribeProtectionResourcesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeProtectionResourcesRequest&,
        DescribeProtectionResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeProtectionsOutcome AntiddosClient::DescribeProtections(const DescribeProtectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProtections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProtectionsResponse rsp = DescribeProtectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProtectionsOutcome(rsp);
        else
            return DescribeProtectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeProtectionsOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeProtectionsAsync(const DescribeProtectionsRequest& request, const DescribeProtectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeProtectionsRequest&;
    using Resp = DescribeProtectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeProtections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeProtectionsOutcomeCallable AntiddosClient::DescribeProtectionsCallable(const DescribeProtectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeProtectionsOutcome>>();
    DescribeProtectionsAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeProtectionsRequest&,
        DescribeProtectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::DescribeResourceProtectionsOutcome AntiddosClient::DescribeResourceProtections(const DescribeResourceProtectionsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeResourceProtections");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeResourceProtectionsResponse rsp = DescribeResourceProtectionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeResourceProtectionsOutcome(rsp);
        else
            return DescribeResourceProtectionsOutcome(o.GetError());
    }
    else
    {
        return DescribeResourceProtectionsOutcome(outcome.GetError());
    }
}

void AntiddosClient::DescribeResourceProtectionsAsync(const DescribeResourceProtectionsRequest& request, const DescribeResourceProtectionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeResourceProtectionsRequest&;
    using Resp = DescribeResourceProtectionsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeResourceProtections", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::DescribeResourceProtectionsOutcomeCallable AntiddosClient::DescribeResourceProtectionsCallable(const DescribeResourceProtectionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeResourceProtectionsOutcome>>();
    DescribeResourceProtectionsAsync(
    request,
    [prom](
        const AntiddosClient*,
        const DescribeResourceProtectionsRequest&,
        DescribeResourceProtectionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyDDoSProtectionPolicyOutcome AntiddosClient::ModifyDDoSProtectionPolicy(const ModifyDDoSProtectionPolicyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDDoSProtectionPolicy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDDoSProtectionPolicyResponse rsp = ModifyDDoSProtectionPolicyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDDoSProtectionPolicyOutcome(rsp);
        else
            return ModifyDDoSProtectionPolicyOutcome(o.GetError());
    }
    else
    {
        return ModifyDDoSProtectionPolicyOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyDDoSProtectionPolicyAsync(const ModifyDDoSProtectionPolicyRequest& request, const ModifyDDoSProtectionPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDDoSProtectionPolicyRequest&;
    using Resp = ModifyDDoSProtectionPolicyResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDDoSProtectionPolicy", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyDDoSProtectionPolicyOutcomeCallable AntiddosClient::ModifyDDoSProtectionPolicyCallable(const ModifyDDoSProtectionPolicyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDDoSProtectionPolicyOutcome>>();
    ModifyDDoSProtectionPolicyAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyDDoSProtectionPolicyRequest&,
        ModifyDDoSProtectionPolicyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyProtectionOutcome AntiddosClient::ModifyProtection(const ModifyProtectionRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtection");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectionResponse rsp = ModifyProtectionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectionOutcome(rsp);
        else
            return ModifyProtectionOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectionOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyProtectionAsync(const ModifyProtectionRequest& request, const ModifyProtectionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProtectionRequest&;
    using Resp = ModifyProtectionResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProtection", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyProtectionOutcomeCallable AntiddosClient::ModifyProtectionCallable(const ModifyProtectionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProtectionOutcome>>();
    ModifyProtectionAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyProtectionRequest&,
        ModifyProtectionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::ModifyProtectionResourceOutcome AntiddosClient::ModifyProtectionResource(const ModifyProtectionResourceRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProtectionResource");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProtectionResourceResponse rsp = ModifyProtectionResourceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProtectionResourceOutcome(rsp);
        else
            return ModifyProtectionResourceOutcome(o.GetError());
    }
    else
    {
        return ModifyProtectionResourceOutcome(outcome.GetError());
    }
}

void AntiddosClient::ModifyProtectionResourceAsync(const ModifyProtectionResourceRequest& request, const ModifyProtectionResourceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyProtectionResourceRequest&;
    using Resp = ModifyProtectionResourceResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyProtectionResource", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::ModifyProtectionResourceOutcomeCallable AntiddosClient::ModifyProtectionResourceCallable(const ModifyProtectionResourceRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyProtectionResourceOutcome>>();
    ModifyProtectionResourceAsync(
    request,
    [prom](
        const AntiddosClient*,
        const ModifyProtectionResourceRequest&,
        ModifyProtectionResourceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

AntiddosClient::UnblockResourcesOutcome AntiddosClient::UnblockResources(const UnblockResourcesRequest &request)
{
    auto outcome = MakeRequest(request, "UnblockResources");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnblockResourcesResponse rsp = UnblockResourcesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnblockResourcesOutcome(rsp);
        else
            return UnblockResourcesOutcome(o.GetError());
    }
    else
    {
        return UnblockResourcesOutcome(outcome.GetError());
    }
}

void AntiddosClient::UnblockResourcesAsync(const UnblockResourcesRequest& request, const UnblockResourcesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnblockResourcesRequest&;
    using Resp = UnblockResourcesResponse;

    DoRequestAsync<Req, Resp>(
        "UnblockResources", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

AntiddosClient::UnblockResourcesOutcomeCallable AntiddosClient::UnblockResourcesCallable(const UnblockResourcesRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnblockResourcesOutcome>>();
    UnblockResourcesAsync(
    request,
    [prom](
        const AntiddosClient*,
        const UnblockResourcesRequest&,
        UnblockResourcesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

