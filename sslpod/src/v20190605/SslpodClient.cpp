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

#include <tencentcloud/sslpod/v20190605/SslpodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sslpod::V20190605;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-05";
    const string ENDPOINT = "sslpod.tencentcloudapi.com";
}

SslpodClient::SslpodClient(const Credential &credential, const string &region) :
    SslpodClient(credential, region, ClientProfile())
{
}

SslpodClient::SslpodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SslpodClient::CreateDomainOutcome SslpodClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void SslpodClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainRequest&;
    using Resp = CreateDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::CreateDomainOutcomeCallable SslpodClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainOutcome>>();
    CreateDomainAsync(
    request,
    [prom](
        const SslpodClient*,
        const CreateDomainRequest&,
        CreateDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::DeleteDomainOutcome SslpodClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void SslpodClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteDomainRequest&;
    using Resp = DeleteDomainResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::DeleteDomainOutcomeCallable SslpodClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteDomainOutcome>>();
    DeleteDomainAsync(
    request,
    [prom](
        const SslpodClient*,
        const DeleteDomainRequest&,
        DeleteDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::DescribeDashboardOutcome SslpodClient::DescribeDashboard(const DescribeDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardResponse rsp = DescribeDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardOutcome(rsp);
        else
            return DescribeDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDashboardRequest&;
    using Resp = DescribeDashboardResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDashboard", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::DescribeDashboardOutcomeCallable SslpodClient::DescribeDashboardCallable(const DescribeDashboardRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDashboardOutcome>>();
    DescribeDashboardAsync(
    request,
    [prom](
        const SslpodClient*,
        const DescribeDashboardRequest&,
        DescribeDashboardOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::DescribeDomainCertsOutcome SslpodClient::DescribeDomainCerts(const DescribeDomainCertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainCertsResponse rsp = DescribeDomainCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainCertsOutcome(rsp);
        else
            return DescribeDomainCertsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainCertsOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDomainCertsAsync(const DescribeDomainCertsRequest& request, const DescribeDomainCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainCertsRequest&;
    using Resp = DescribeDomainCertsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainCerts", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::DescribeDomainCertsOutcomeCallable SslpodClient::DescribeDomainCertsCallable(const DescribeDomainCertsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainCertsOutcome>>();
    DescribeDomainCertsAsync(
    request,
    [prom](
        const SslpodClient*,
        const DescribeDomainCertsRequest&,
        DescribeDomainCertsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::DescribeDomainTagsOutcome SslpodClient::DescribeDomainTags(const DescribeDomainTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainTagsResponse rsp = DescribeDomainTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainTagsOutcome(rsp);
        else
            return DescribeDomainTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainTagsOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDomainTagsAsync(const DescribeDomainTagsRequest& request, const DescribeDomainTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainTagsRequest&;
    using Resp = DescribeDomainTagsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::DescribeDomainTagsOutcomeCallable SslpodClient::DescribeDomainTagsCallable(const DescribeDomainTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainTagsOutcome>>();
    DescribeDomainTagsAsync(
    request,
    [prom](
        const SslpodClient*,
        const DescribeDomainTagsRequest&,
        DescribeDomainTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::DescribeDomainsOutcome SslpodClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainsRequest&;
    using Resp = DescribeDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::DescribeDomainsOutcomeCallable SslpodClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainsOutcome>>();
    DescribeDomainsAsync(
    request,
    [prom](
        const SslpodClient*,
        const DescribeDomainsRequest&,
        DescribeDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::DescribeNoticeInfoOutcome SslpodClient::DescribeNoticeInfo(const DescribeNoticeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoticeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoticeInfoResponse rsp = DescribeNoticeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoticeInfoOutcome(rsp);
        else
            return DescribeNoticeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeNoticeInfoOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeNoticeInfoAsync(const DescribeNoticeInfoRequest& request, const DescribeNoticeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeNoticeInfoRequest&;
    using Resp = DescribeNoticeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeNoticeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::DescribeNoticeInfoOutcomeCallable SslpodClient::DescribeNoticeInfoCallable(const DescribeNoticeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeNoticeInfoOutcome>>();
    DescribeNoticeInfoAsync(
    request,
    [prom](
        const SslpodClient*,
        const DescribeNoticeInfoRequest&,
        DescribeNoticeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::ModifyDomainTagsOutcome SslpodClient::ModifyDomainTags(const ModifyDomainTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainTagsResponse rsp = ModifyDomainTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainTagsOutcome(rsp);
        else
            return ModifyDomainTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainTagsOutcome(outcome.GetError());
    }
}

void SslpodClient::ModifyDomainTagsAsync(const ModifyDomainTagsRequest& request, const ModifyDomainTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainTagsRequest&;
    using Resp = ModifyDomainTagsResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainTags", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::ModifyDomainTagsOutcomeCallable SslpodClient::ModifyDomainTagsCallable(const ModifyDomainTagsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainTagsOutcome>>();
    ModifyDomainTagsAsync(
    request,
    [prom](
        const SslpodClient*,
        const ModifyDomainTagsRequest&,
        ModifyDomainTagsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::RefreshDomainOutcome SslpodClient::RefreshDomain(const RefreshDomainRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshDomainResponse rsp = RefreshDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshDomainOutcome(rsp);
        else
            return RefreshDomainOutcome(o.GetError());
    }
    else
    {
        return RefreshDomainOutcome(outcome.GetError());
    }
}

void SslpodClient::RefreshDomainAsync(const RefreshDomainRequest& request, const RefreshDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefreshDomainRequest&;
    using Resp = RefreshDomainResponse;

    DoRequestAsync<Req, Resp>(
        "RefreshDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::RefreshDomainOutcomeCallable SslpodClient::RefreshDomainCallable(const RefreshDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefreshDomainOutcome>>();
    RefreshDomainAsync(
    request,
    [prom](
        const SslpodClient*,
        const RefreshDomainRequest&,
        RefreshDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SslpodClient::ResolveDomainOutcome SslpodClient::ResolveDomain(const ResolveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ResolveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResolveDomainResponse rsp = ResolveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResolveDomainOutcome(rsp);
        else
            return ResolveDomainOutcome(o.GetError());
    }
    else
    {
        return ResolveDomainOutcome(outcome.GetError());
    }
}

void SslpodClient::ResolveDomainAsync(const ResolveDomainRequest& request, const ResolveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ResolveDomainRequest&;
    using Resp = ResolveDomainResponse;

    DoRequestAsync<Req, Resp>(
        "ResolveDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SslpodClient::ResolveDomainOutcomeCallable SslpodClient::ResolveDomainCallable(const ResolveDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<ResolveDomainOutcome>>();
    ResolveDomainAsync(
    request,
    [prom](
        const SslpodClient*,
        const ResolveDomainRequest&,
        ResolveDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

