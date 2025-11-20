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

#include <tencentcloud/hasim/v20210716/HasimClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Hasim::V20210716;
using namespace TencentCloud::Hasim::V20210716::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-07-16";
    const string ENDPOINT = "hasim.tencentcloudapi.com";
}

HasimClient::HasimClient(const Credential &credential, const string &region) :
    HasimClient(credential, region, ClientProfile())
{
}

HasimClient::HasimClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


HasimClient::CreateRuleOutcome HasimClient::CreateRule(const CreateRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRuleResponse rsp = CreateRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRuleOutcome(rsp);
        else
            return CreateRuleOutcome(o.GetError());
    }
    else
    {
        return CreateRuleOutcome(outcome.GetError());
    }
}

void HasimClient::CreateRuleAsync(const CreateRuleRequest& request, const CreateRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRuleRequest&;
    using Resp = CreateRuleResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::CreateRuleOutcomeCallable HasimClient::CreateRuleCallable(const CreateRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRuleOutcome>>();
    CreateRuleAsync(
    request,
    [prom](
        const HasimClient*,
        const CreateRuleRequest&,
        CreateRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::CreateTacticOutcome HasimClient::CreateTactic(const CreateTacticRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTactic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTacticResponse rsp = CreateTacticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTacticOutcome(rsp);
        else
            return CreateTacticOutcome(o.GetError());
    }
    else
    {
        return CreateTacticOutcome(outcome.GetError());
    }
}

void HasimClient::CreateTacticAsync(const CreateTacticRequest& request, const CreateTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTacticRequest&;
    using Resp = CreateTacticResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTactic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::CreateTacticOutcomeCallable HasimClient::CreateTacticCallable(const CreateTacticRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTacticOutcome>>();
    CreateTacticAsync(
    request,
    [prom](
        const HasimClient*,
        const CreateTacticRequest&,
        CreateTacticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::CreateTagOutcome HasimClient::CreateTag(const CreateTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTagResponse rsp = CreateTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTagOutcome(rsp);
        else
            return CreateTagOutcome(o.GetError());
    }
    else
    {
        return CreateTagOutcome(outcome.GetError());
    }
}

void HasimClient::CreateTagAsync(const CreateTagRequest& request, const CreateTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTagRequest&;
    using Resp = CreateTagResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::CreateTagOutcomeCallable HasimClient::CreateTagCallable(const CreateTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTagOutcome>>();
    CreateTagAsync(
    request,
    [prom](
        const HasimClient*,
        const CreateTagRequest&,
        CreateTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DeleteRuleOutcome HasimClient::DeleteRule(const DeleteRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRuleResponse rsp = DeleteRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRuleOutcome(rsp);
        else
            return DeleteRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteRuleOutcome(outcome.GetError());
    }
}

void HasimClient::DeleteRuleAsync(const DeleteRuleRequest& request, const DeleteRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteRuleRequest&;
    using Resp = DeleteRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DeleteRuleOutcomeCallable HasimClient::DeleteRuleCallable(const DeleteRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteRuleOutcome>>();
    DeleteRuleAsync(
    request,
    [prom](
        const HasimClient*,
        const DeleteRuleRequest&,
        DeleteRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DeleteTacticOutcome HasimClient::DeleteTactic(const DeleteTacticRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTactic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTacticResponse rsp = DeleteTacticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTacticOutcome(rsp);
        else
            return DeleteTacticOutcome(o.GetError());
    }
    else
    {
        return DeleteTacticOutcome(outcome.GetError());
    }
}

void HasimClient::DeleteTacticAsync(const DeleteTacticRequest& request, const DeleteTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTacticRequest&;
    using Resp = DeleteTacticResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTactic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DeleteTacticOutcomeCallable HasimClient::DeleteTacticCallable(const DeleteTacticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTacticOutcome>>();
    DeleteTacticAsync(
    request,
    [prom](
        const HasimClient*,
        const DeleteTacticRequest&,
        DeleteTacticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DeleteTagOutcome HasimClient::DeleteTag(const DeleteTagRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTagResponse rsp = DeleteTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTagOutcome(rsp);
        else
            return DeleteTagOutcome(o.GetError());
    }
    else
    {
        return DeleteTagOutcome(outcome.GetError());
    }
}

void HasimClient::DeleteTagAsync(const DeleteTagRequest& request, const DeleteTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTagRequest&;
    using Resp = DeleteTagResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DeleteTagOutcomeCallable HasimClient::DeleteTagCallable(const DeleteTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTagOutcome>>();
    DeleteTagAsync(
    request,
    [prom](
        const HasimClient*,
        const DeleteTagRequest&,
        DeleteTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeLinkOutcome HasimClient::DescribeLink(const DescribeLinkRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLink");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLinkResponse rsp = DescribeLinkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLinkOutcome(rsp);
        else
            return DescribeLinkOutcome(o.GetError());
    }
    else
    {
        return DescribeLinkOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeLinkAsync(const DescribeLinkRequest& request, const DescribeLinkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLinkRequest&;
    using Resp = DescribeLinkResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLink", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeLinkOutcomeCallable HasimClient::DescribeLinkCallable(const DescribeLinkRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLinkOutcome>>();
    DescribeLinkAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeLinkRequest&,
        DescribeLinkOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeLinksOutcome HasimClient::DescribeLinks(const DescribeLinksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLinks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLinksResponse rsp = DescribeLinksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLinksOutcome(rsp);
        else
            return DescribeLinksOutcome(o.GetError());
    }
    else
    {
        return DescribeLinksOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeLinksAsync(const DescribeLinksRequest& request, const DescribeLinksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLinksRequest&;
    using Resp = DescribeLinksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLinks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeLinksOutcomeCallable HasimClient::DescribeLinksCallable(const DescribeLinksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLinksOutcome>>();
    DescribeLinksAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeLinksRequest&,
        DescribeLinksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeOrdersOutcome HasimClient::DescribeOrders(const DescribeOrdersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrders");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrdersResponse rsp = DescribeOrdersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrdersOutcome(rsp);
        else
            return DescribeOrdersOutcome(o.GetError());
    }
    else
    {
        return DescribeOrdersOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeOrdersAsync(const DescribeOrdersRequest& request, const DescribeOrdersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrdersRequest&;
    using Resp = DescribeOrdersResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrders", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeOrdersOutcomeCallable HasimClient::DescribeOrdersCallable(const DescribeOrdersRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrdersOutcome>>();
    DescribeOrdersAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeOrdersRequest&,
        DescribeOrdersOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeRuleOutcome HasimClient::DescribeRule(const DescribeRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRuleResponse rsp = DescribeRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRuleOutcome(rsp);
        else
            return DescribeRuleOutcome(o.GetError());
    }
    else
    {
        return DescribeRuleOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeRuleAsync(const DescribeRuleRequest& request, const DescribeRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRuleRequest&;
    using Resp = DescribeRuleResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeRuleOutcomeCallable HasimClient::DescribeRuleCallable(const DescribeRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRuleOutcome>>();
    DescribeRuleAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeRuleRequest&,
        DescribeRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeRulesOutcome HasimClient::DescribeRules(const DescribeRulesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRulesResponse rsp = DescribeRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRulesOutcome(rsp);
        else
            return DescribeRulesOutcome(o.GetError());
    }
    else
    {
        return DescribeRulesOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeRulesAsync(const DescribeRulesRequest& request, const DescribeRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeRulesRequest&;
    using Resp = DescribeRulesResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeRules", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeRulesOutcomeCallable HasimClient::DescribeRulesCallable(const DescribeRulesRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeRulesOutcome>>();
    DescribeRulesAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeRulesRequest&,
        DescribeRulesOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeTacticOutcome HasimClient::DescribeTactic(const DescribeTacticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTactic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTacticResponse rsp = DescribeTacticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTacticOutcome(rsp);
        else
            return DescribeTacticOutcome(o.GetError());
    }
    else
    {
        return DescribeTacticOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeTacticAsync(const DescribeTacticRequest& request, const DescribeTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTacticRequest&;
    using Resp = DescribeTacticResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTactic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeTacticOutcomeCallable HasimClient::DescribeTacticCallable(const DescribeTacticRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTacticOutcome>>();
    DescribeTacticAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeTacticRequest&,
        DescribeTacticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeTacticsOutcome HasimClient::DescribeTactics(const DescribeTacticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTactics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTacticsResponse rsp = DescribeTacticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTacticsOutcome(rsp);
        else
            return DescribeTacticsOutcome(o.GetError());
    }
    else
    {
        return DescribeTacticsOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeTacticsAsync(const DescribeTacticsRequest& request, const DescribeTacticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTacticsRequest&;
    using Resp = DescribeTacticsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTactics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeTacticsOutcomeCallable HasimClient::DescribeTacticsCallable(const DescribeTacticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTacticsOutcome>>();
    DescribeTacticsAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeTacticsRequest&,
        DescribeTacticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::DescribeTagsOutcome HasimClient::DescribeTags(const DescribeTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTagsResponse rsp = DescribeTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTagsOutcome(rsp);
        else
            return DescribeTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeTagsOutcome(outcome.GetError());
    }
}

void HasimClient::DescribeTagsAsync(const DescribeTagsRequest& request, const DescribeTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTagsRequest&;
    using Resp = DescribeTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::DescribeTagsOutcomeCallable HasimClient::DescribeTagsCallable(const DescribeTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTagsOutcome>>();
    DescribeTagsAsync(
    request,
    [prom](
        const HasimClient*,
        const DescribeTagsRequest&,
        DescribeTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyLinkAdvancedLogOutcome HasimClient::ModifyLinkAdvancedLog(const ModifyLinkAdvancedLogRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLinkAdvancedLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLinkAdvancedLogResponse rsp = ModifyLinkAdvancedLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLinkAdvancedLogOutcome(rsp);
        else
            return ModifyLinkAdvancedLogOutcome(o.GetError());
    }
    else
    {
        return ModifyLinkAdvancedLogOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyLinkAdvancedLogAsync(const ModifyLinkAdvancedLogRequest& request, const ModifyLinkAdvancedLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLinkAdvancedLogRequest&;
    using Resp = ModifyLinkAdvancedLogResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLinkAdvancedLog", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyLinkAdvancedLogOutcomeCallable HasimClient::ModifyLinkAdvancedLogCallable(const ModifyLinkAdvancedLogRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLinkAdvancedLogOutcome>>();
    ModifyLinkAdvancedLogAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyLinkAdvancedLogRequest&,
        ModifyLinkAdvancedLogOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyLinkTacticOutcome HasimClient::ModifyLinkTactic(const ModifyLinkTacticRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLinkTactic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLinkTacticResponse rsp = ModifyLinkTacticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLinkTacticOutcome(rsp);
        else
            return ModifyLinkTacticOutcome(o.GetError());
    }
    else
    {
        return ModifyLinkTacticOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyLinkTacticAsync(const ModifyLinkTacticRequest& request, const ModifyLinkTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLinkTacticRequest&;
    using Resp = ModifyLinkTacticResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLinkTactic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyLinkTacticOutcomeCallable HasimClient::ModifyLinkTacticCallable(const ModifyLinkTacticRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLinkTacticOutcome>>();
    ModifyLinkTacticAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyLinkTacticRequest&,
        ModifyLinkTacticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyLinkTeleOutcome HasimClient::ModifyLinkTele(const ModifyLinkTeleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLinkTele");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLinkTeleResponse rsp = ModifyLinkTeleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLinkTeleOutcome(rsp);
        else
            return ModifyLinkTeleOutcome(o.GetError());
    }
    else
    {
        return ModifyLinkTeleOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyLinkTeleAsync(const ModifyLinkTeleRequest& request, const ModifyLinkTeleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyLinkTeleRequest&;
    using Resp = ModifyLinkTeleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyLinkTele", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyLinkTeleOutcomeCallable HasimClient::ModifyLinkTeleCallable(const ModifyLinkTeleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyLinkTeleOutcome>>();
    ModifyLinkTeleAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyLinkTeleRequest&,
        ModifyLinkTeleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyRuleOutcome HasimClient::ModifyRule(const ModifyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleResponse rsp = ModifyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleOutcome(rsp);
        else
            return ModifyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyRuleAsync(const ModifyRuleRequest& request, const ModifyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleRequest&;
    using Resp = ModifyRuleResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRule", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyRuleOutcomeCallable HasimClient::ModifyRuleCallable(const ModifyRuleRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleOutcome>>();
    ModifyRuleAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyRuleRequest&,
        ModifyRuleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyRuleStatusOutcome HasimClient::ModifyRuleStatus(const ModifyRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRuleStatusResponse rsp = ModifyRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRuleStatusOutcome(rsp);
        else
            return ModifyRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRuleStatusOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyRuleStatusAsync(const ModifyRuleStatusRequest& request, const ModifyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyRuleStatusRequest&;
    using Resp = ModifyRuleStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyRuleStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyRuleStatusOutcomeCallable HasimClient::ModifyRuleStatusCallable(const ModifyRuleStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyRuleStatusOutcome>>();
    ModifyRuleStatusAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyRuleStatusRequest&,
        ModifyRuleStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyTacticOutcome HasimClient::ModifyTactic(const ModifyTacticRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTactic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTacticResponse rsp = ModifyTacticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTacticOutcome(rsp);
        else
            return ModifyTacticOutcome(o.GetError());
    }
    else
    {
        return ModifyTacticOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyTacticAsync(const ModifyTacticRequest& request, const ModifyTacticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTacticRequest&;
    using Resp = ModifyTacticResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTactic", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyTacticOutcomeCallable HasimClient::ModifyTacticCallable(const ModifyTacticRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTacticOutcome>>();
    ModifyTacticAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyTacticRequest&,
        ModifyTacticOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::ModifyTagOutcome HasimClient::ModifyTag(const ModifyTagRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTagResponse rsp = ModifyTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTagOutcome(rsp);
        else
            return ModifyTagOutcome(o.GetError());
    }
    else
    {
        return ModifyTagOutcome(outcome.GetError());
    }
}

void HasimClient::ModifyTagAsync(const ModifyTagRequest& request, const ModifyTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTagRequest&;
    using Resp = ModifyTagResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::ModifyTagOutcomeCallable HasimClient::ModifyTagCallable(const ModifyTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTagOutcome>>();
    ModifyTagAsync(
    request,
    [prom](
        const HasimClient*,
        const ModifyTagRequest&,
        ModifyTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

HasimClient::RenewLinkInfoOutcome HasimClient::RenewLinkInfo(const RenewLinkInfoRequest &request)
{
    auto outcome = MakeRequest(request, "RenewLinkInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewLinkInfoResponse rsp = RenewLinkInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewLinkInfoOutcome(rsp);
        else
            return RenewLinkInfoOutcome(o.GetError());
    }
    else
    {
        return RenewLinkInfoOutcome(outcome.GetError());
    }
}

void HasimClient::RenewLinkInfoAsync(const RenewLinkInfoRequest& request, const RenewLinkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewLinkInfoRequest&;
    using Resp = RenewLinkInfoResponse;

    DoRequestAsync<Req, Resp>(
        "RenewLinkInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

HasimClient::RenewLinkInfoOutcomeCallable HasimClient::RenewLinkInfoCallable(const RenewLinkInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewLinkInfoOutcome>>();
    RenewLinkInfoAsync(
    request,
    [prom](
        const HasimClient*,
        const RenewLinkInfoRequest&,
        RenewLinkInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

