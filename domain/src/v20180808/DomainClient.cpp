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

#include <tencentcloud/domain/v20180808/DomainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Domain::V20180808;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-08";
    const string ENDPOINT = "domain.tencentcloudapi.com";
}

DomainClient::DomainClient(const Credential &credential, const string &region) :
    DomainClient(credential, region, ClientProfile())
{
}

DomainClient::DomainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DomainClient::BatchModifyDomainInfoOutcome DomainClient::BatchModifyDomainInfo(const BatchModifyDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyDomainInfoResponse rsp = BatchModifyDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyDomainInfoOutcome(rsp);
        else
            return BatchModifyDomainInfoOutcome(o.GetError());
    }
    else
    {
        return BatchModifyDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::BatchModifyDomainInfoAsync(const BatchModifyDomainInfoRequest& request, const BatchModifyDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BatchModifyDomainInfoRequest&;
    using Resp = BatchModifyDomainInfoResponse;

    DoRequestAsync<Req, Resp>(
        "BatchModifyDomainInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::BatchModifyDomainInfoOutcomeCallable DomainClient::BatchModifyDomainInfoCallable(const BatchModifyDomainInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<BatchModifyDomainInfoOutcome>>();
    BatchModifyDomainInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const BatchModifyDomainInfoRequest&,
        BatchModifyDomainInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::BidDetailPageOutcome DomainClient::BidDetailPage(const BidDetailPageRequest &request)
{
    auto outcome = MakeRequest(request, "BidDetailPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BidDetailPageResponse rsp = BidDetailPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BidDetailPageOutcome(rsp);
        else
            return BidDetailPageOutcome(o.GetError());
    }
    else
    {
        return BidDetailPageOutcome(outcome.GetError());
    }
}

void DomainClient::BidDetailPageAsync(const BidDetailPageRequest& request, const BidDetailPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BidDetailPageRequest&;
    using Resp = BidDetailPageResponse;

    DoRequestAsync<Req, Resp>(
        "BidDetailPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::BidDetailPageOutcomeCallable DomainClient::BidDetailPageCallable(const BidDetailPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<BidDetailPageOutcome>>();
    BidDetailPageAsync(
    request,
    [prom](
        const DomainClient*,
        const BidDetailPageRequest&,
        BidDetailPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::BidPreDomainsOutcome DomainClient::BidPreDomains(const BidPreDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "BidPreDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BidPreDomainsResponse rsp = BidPreDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BidPreDomainsOutcome(rsp);
        else
            return BidPreDomainsOutcome(o.GetError());
    }
    else
    {
        return BidPreDomainsOutcome(outcome.GetError());
    }
}

void DomainClient::BidPreDomainsAsync(const BidPreDomainsRequest& request, const BidPreDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BidPreDomainsRequest&;
    using Resp = BidPreDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "BidPreDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::BidPreDomainsOutcomeCallable DomainClient::BidPreDomainsCallable(const BidPreDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<BidPreDomainsOutcome>>();
    BidPreDomainsAsync(
    request,
    [prom](
        const DomainClient*,
        const BidPreDomainsRequest&,
        BidPreDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::BiddingPreReleaseOutcome DomainClient::BiddingPreRelease(const BiddingPreReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "BiddingPreRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BiddingPreReleaseResponse rsp = BiddingPreReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BiddingPreReleaseOutcome(rsp);
        else
            return BiddingPreReleaseOutcome(o.GetError());
    }
    else
    {
        return BiddingPreReleaseOutcome(outcome.GetError());
    }
}

void DomainClient::BiddingPreReleaseAsync(const BiddingPreReleaseRequest& request, const BiddingPreReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BiddingPreReleaseRequest&;
    using Resp = BiddingPreReleaseResponse;

    DoRequestAsync<Req, Resp>(
        "BiddingPreRelease", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::BiddingPreReleaseOutcomeCallable DomainClient::BiddingPreReleaseCallable(const BiddingPreReleaseRequest &request)
{
    const auto prom = std::make_shared<std::promise<BiddingPreReleaseOutcome>>();
    BiddingPreReleaseAsync(
    request,
    [prom](
        const DomainClient*,
        const BiddingPreReleaseRequest&,
        BiddingPreReleaseOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CheckBatchStatusOutcome DomainClient::CheckBatchStatus(const CheckBatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBatchStatusResponse rsp = CheckBatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBatchStatusOutcome(rsp);
        else
            return CheckBatchStatusOutcome(o.GetError());
    }
    else
    {
        return CheckBatchStatusOutcome(outcome.GetError());
    }
}

void DomainClient::CheckBatchStatusAsync(const CheckBatchStatusRequest& request, const CheckBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckBatchStatusRequest&;
    using Resp = CheckBatchStatusResponse;

    DoRequestAsync<Req, Resp>(
        "CheckBatchStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CheckBatchStatusOutcomeCallable DomainClient::CheckBatchStatusCallable(const CheckBatchStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckBatchStatusOutcome>>();
    CheckBatchStatusAsync(
    request,
    [prom](
        const DomainClient*,
        const CheckBatchStatusRequest&,
        CheckBatchStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CheckDomainOutcome DomainClient::CheckDomain(const CheckDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDomainResponse rsp = CheckDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDomainOutcome(rsp);
        else
            return CheckDomainOutcome(o.GetError());
    }
    else
    {
        return CheckDomainOutcome(outcome.GetError());
    }
}

void DomainClient::CheckDomainAsync(const CheckDomainRequest& request, const CheckDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckDomainRequest&;
    using Resp = CheckDomainResponse;

    DoRequestAsync<Req, Resp>(
        "CheckDomain", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CheckDomainOutcomeCallable DomainClient::CheckDomainCallable(const CheckDomainRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckDomainOutcome>>();
    CheckDomainAsync(
    request,
    [prom](
        const DomainClient*,
        const CheckDomainRequest&,
        CheckDomainOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateCustomDnsHostOutcome DomainClient::CreateCustomDnsHost(const CreateCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomDnsHostResponse rsp = CreateCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomDnsHostOutcome(rsp);
        else
            return CreateCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return CreateCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::CreateCustomDnsHostAsync(const CreateCustomDnsHostRequest& request, const CreateCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustomDnsHostRequest&;
    using Resp = CreateCustomDnsHostResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustomDnsHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateCustomDnsHostOutcomeCallable DomainClient::CreateCustomDnsHostCallable(const CreateCustomDnsHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustomDnsHostOutcome>>();
    CreateCustomDnsHostAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateCustomDnsHostRequest&,
        CreateCustomDnsHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateDomainBatchOutcome DomainClient::CreateDomainBatch(const CreateDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainBatchResponse rsp = CreateDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainBatchOutcome(rsp);
        else
            return CreateDomainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::CreateDomainBatchAsync(const CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainBatchRequest&;
    using Resp = CreateDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateDomainBatchOutcomeCallable DomainClient::CreateDomainBatchCallable(const CreateDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainBatchOutcome>>();
    CreateDomainBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateDomainBatchRequest&,
        CreateDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateDomainRedemptionOutcome DomainClient::CreateDomainRedemption(const CreateDomainRedemptionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainRedemption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainRedemptionResponse rsp = CreateDomainRedemptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainRedemptionOutcome(rsp);
        else
            return CreateDomainRedemptionOutcome(o.GetError());
    }
    else
    {
        return CreateDomainRedemptionOutcome(outcome.GetError());
    }
}

void DomainClient::CreateDomainRedemptionAsync(const CreateDomainRedemptionRequest& request, const CreateDomainRedemptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateDomainRedemptionRequest&;
    using Resp = CreateDomainRedemptionResponse;

    DoRequestAsync<Req, Resp>(
        "CreateDomainRedemption", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateDomainRedemptionOutcomeCallable DomainClient::CreateDomainRedemptionCallable(const CreateDomainRedemptionRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateDomainRedemptionOutcome>>();
    CreateDomainRedemptionAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateDomainRedemptionRequest&,
        CreateDomainRedemptionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreatePhoneEmailOutcome DomainClient::CreatePhoneEmail(const CreatePhoneEmailRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePhoneEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePhoneEmailResponse rsp = CreatePhoneEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePhoneEmailOutcome(rsp);
        else
            return CreatePhoneEmailOutcome(o.GetError());
    }
    else
    {
        return CreatePhoneEmailOutcome(outcome.GetError());
    }
}

void DomainClient::CreatePhoneEmailAsync(const CreatePhoneEmailRequest& request, const CreatePhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePhoneEmailRequest&;
    using Resp = CreatePhoneEmailResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePhoneEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreatePhoneEmailOutcomeCallable DomainClient::CreatePhoneEmailCallable(const CreatePhoneEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePhoneEmailOutcome>>();
    CreatePhoneEmailAsync(
    request,
    [prom](
        const DomainClient*,
        const CreatePhoneEmailRequest&,
        CreatePhoneEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::CreateTemplateOutcome DomainClient::CreateTemplate(const CreateTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTemplateResponse rsp = CreateTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTemplateOutcome(rsp);
        else
            return CreateTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::CreateTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTemplateRequest&;
    using Resp = CreateTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::CreateTemplateOutcomeCallable DomainClient::CreateTemplateCallable(const CreateTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTemplateOutcome>>();
    CreateTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const CreateTemplateRequest&,
        CreateTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeleteBiddingOutcome DomainClient::DeleteBidding(const DeleteBiddingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBidding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBiddingResponse rsp = DeleteBiddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBiddingOutcome(rsp);
        else
            return DeleteBiddingOutcome(o.GetError());
    }
    else
    {
        return DeleteBiddingOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteBiddingAsync(const DeleteBiddingRequest& request, const DeleteBiddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteBiddingRequest&;
    using Resp = DeleteBiddingResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteBidding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeleteBiddingOutcomeCallable DomainClient::DeleteBiddingCallable(const DeleteBiddingRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteBiddingOutcome>>();
    DeleteBiddingAsync(
    request,
    [prom](
        const DomainClient*,
        const DeleteBiddingRequest&,
        DeleteBiddingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeleteCustomDnsHostOutcome DomainClient::DeleteCustomDnsHost(const DeleteCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomDnsHostResponse rsp = DeleteCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomDnsHostOutcome(rsp);
        else
            return DeleteCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteCustomDnsHostAsync(const DeleteCustomDnsHostRequest& request, const DeleteCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteCustomDnsHostRequest&;
    using Resp = DeleteCustomDnsHostResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteCustomDnsHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeleteCustomDnsHostOutcomeCallable DomainClient::DeleteCustomDnsHostCallable(const DeleteCustomDnsHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteCustomDnsHostOutcome>>();
    DeleteCustomDnsHostAsync(
    request,
    [prom](
        const DomainClient*,
        const DeleteCustomDnsHostRequest&,
        DeleteCustomDnsHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeletePhoneEmailOutcome DomainClient::DeletePhoneEmail(const DeletePhoneEmailRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePhoneEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePhoneEmailResponse rsp = DeletePhoneEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePhoneEmailOutcome(rsp);
        else
            return DeletePhoneEmailOutcome(o.GetError());
    }
    else
    {
        return DeletePhoneEmailOutcome(outcome.GetError());
    }
}

void DomainClient::DeletePhoneEmailAsync(const DeletePhoneEmailRequest& request, const DeletePhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeletePhoneEmailRequest&;
    using Resp = DeletePhoneEmailResponse;

    DoRequestAsync<Req, Resp>(
        "DeletePhoneEmail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeletePhoneEmailOutcomeCallable DomainClient::DeletePhoneEmailCallable(const DeletePhoneEmailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeletePhoneEmailOutcome>>();
    DeletePhoneEmailAsync(
    request,
    [prom](
        const DomainClient*,
        const DeletePhoneEmailRequest&,
        DeletePhoneEmailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeleteReservedPreDomainInfoOutcome DomainClient::DeleteReservedPreDomainInfo(const DeleteReservedPreDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReservedPreDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReservedPreDomainInfoResponse rsp = DeleteReservedPreDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReservedPreDomainInfoOutcome(rsp);
        else
            return DeleteReservedPreDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteReservedPreDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteReservedPreDomainInfoAsync(const DeleteReservedPreDomainInfoRequest& request, const DeleteReservedPreDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteReservedPreDomainInfoRequest&;
    using Resp = DeleteReservedPreDomainInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteReservedPreDomainInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeleteReservedPreDomainInfoOutcomeCallable DomainClient::DeleteReservedPreDomainInfoCallable(const DeleteReservedPreDomainInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteReservedPreDomainInfoOutcome>>();
    DeleteReservedPreDomainInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const DeleteReservedPreDomainInfoRequest&,
        DeleteReservedPreDomainInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DeleteTemplateOutcome DomainClient::DeleteTemplate(const DeleteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTemplateResponse rsp = DeleteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTemplateOutcome(rsp);
        else
            return DeleteTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteTemplateRequest&;
    using Resp = DeleteTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DeleteTemplateOutcomeCallable DomainClient::DeleteTemplateCallable(const DeleteTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteTemplateOutcome>>();
    DeleteTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const DeleteTemplateRequest&,
        DeleteTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeAuctionListOutcome DomainClient::DescribeAuctionList(const DescribeAuctionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuctionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuctionListResponse rsp = DescribeAuctionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuctionListOutcome(rsp);
        else
            return DescribeAuctionListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuctionListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeAuctionListAsync(const DescribeAuctionListRequest& request, const DescribeAuctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuctionListRequest&;
    using Resp = DescribeAuctionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuctionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeAuctionListOutcomeCallable DomainClient::DescribeAuctionListCallable(const DescribeAuctionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuctionListOutcome>>();
    DescribeAuctionListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeAuctionListRequest&,
        DescribeAuctionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBatchOperationLogDetailsOutcome DomainClient::DescribeBatchOperationLogDetails(const DescribeBatchOperationLogDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOperationLogDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOperationLogDetailsResponse rsp = DescribeBatchOperationLogDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOperationLogDetailsOutcome(rsp);
        else
            return DescribeBatchOperationLogDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOperationLogDetailsOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBatchOperationLogDetailsAsync(const DescribeBatchOperationLogDetailsRequest& request, const DescribeBatchOperationLogDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOperationLogDetailsRequest&;
    using Resp = DescribeBatchOperationLogDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOperationLogDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBatchOperationLogDetailsOutcomeCallable DomainClient::DescribeBatchOperationLogDetailsCallable(const DescribeBatchOperationLogDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOperationLogDetailsOutcome>>();
    DescribeBatchOperationLogDetailsAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBatchOperationLogDetailsRequest&,
        DescribeBatchOperationLogDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBatchOperationLogsOutcome DomainClient::DescribeBatchOperationLogs(const DescribeBatchOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOperationLogsResponse rsp = DescribeBatchOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOperationLogsOutcome(rsp);
        else
            return DescribeBatchOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOperationLogsOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBatchOperationLogsAsync(const DescribeBatchOperationLogsRequest& request, const DescribeBatchOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBatchOperationLogsRequest&;
    using Resp = DescribeBatchOperationLogsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBatchOperationLogs", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBatchOperationLogsOutcomeCallable DomainClient::DescribeBatchOperationLogsCallable(const DescribeBatchOperationLogsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBatchOperationLogsOutcome>>();
    DescribeBatchOperationLogsAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBatchOperationLogsRequest&,
        DescribeBatchOperationLogsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBiddingAppointDetailOutcome DomainClient::DescribeBiddingAppointDetail(const DescribeBiddingAppointDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingAppointDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingAppointDetailResponse rsp = DescribeBiddingAppointDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingAppointDetailOutcome(rsp);
        else
            return DescribeBiddingAppointDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingAppointDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingAppointDetailAsync(const DescribeBiddingAppointDetailRequest& request, const DescribeBiddingAppointDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBiddingAppointDetailRequest&;
    using Resp = DescribeBiddingAppointDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBiddingAppointDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBiddingAppointDetailOutcomeCallable DomainClient::DescribeBiddingAppointDetailCallable(const DescribeBiddingAppointDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBiddingAppointDetailOutcome>>();
    DescribeBiddingAppointDetailAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBiddingAppointDetailRequest&,
        DescribeBiddingAppointDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBiddingAppointListOutcome DomainClient::DescribeBiddingAppointList(const DescribeBiddingAppointListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingAppointList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingAppointListResponse rsp = DescribeBiddingAppointListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingAppointListOutcome(rsp);
        else
            return DescribeBiddingAppointListOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingAppointListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingAppointListAsync(const DescribeBiddingAppointListRequest& request, const DescribeBiddingAppointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBiddingAppointListRequest&;
    using Resp = DescribeBiddingAppointListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBiddingAppointList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBiddingAppointListOutcomeCallable DomainClient::DescribeBiddingAppointListCallable(const DescribeBiddingAppointListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBiddingAppointListOutcome>>();
    DescribeBiddingAppointListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBiddingAppointListRequest&,
        DescribeBiddingAppointListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBiddingDetailOutcome DomainClient::DescribeBiddingDetail(const DescribeBiddingDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingDetailResponse rsp = DescribeBiddingDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingDetailOutcome(rsp);
        else
            return DescribeBiddingDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingDetailAsync(const DescribeBiddingDetailRequest& request, const DescribeBiddingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBiddingDetailRequest&;
    using Resp = DescribeBiddingDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBiddingDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBiddingDetailOutcomeCallable DomainClient::DescribeBiddingDetailCallable(const DescribeBiddingDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBiddingDetailOutcome>>();
    DescribeBiddingDetailAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBiddingDetailRequest&,
        DescribeBiddingDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBiddingListOutcome DomainClient::DescribeBiddingList(const DescribeBiddingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingListResponse rsp = DescribeBiddingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingListOutcome(rsp);
        else
            return DescribeBiddingListOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingListAsync(const DescribeBiddingListRequest& request, const DescribeBiddingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBiddingListRequest&;
    using Resp = DescribeBiddingListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBiddingList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBiddingListOutcomeCallable DomainClient::DescribeBiddingListCallable(const DescribeBiddingListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBiddingListOutcome>>();
    DescribeBiddingListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBiddingListRequest&,
        DescribeBiddingListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBiddingSuccessfulDetailOutcome DomainClient::DescribeBiddingSuccessfulDetail(const DescribeBiddingSuccessfulDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingSuccessfulDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingSuccessfulDetailResponse rsp = DescribeBiddingSuccessfulDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingSuccessfulDetailOutcome(rsp);
        else
            return DescribeBiddingSuccessfulDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingSuccessfulDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingSuccessfulDetailAsync(const DescribeBiddingSuccessfulDetailRequest& request, const DescribeBiddingSuccessfulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBiddingSuccessfulDetailRequest&;
    using Resp = DescribeBiddingSuccessfulDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBiddingSuccessfulDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBiddingSuccessfulDetailOutcomeCallable DomainClient::DescribeBiddingSuccessfulDetailCallable(const DescribeBiddingSuccessfulDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBiddingSuccessfulDetailOutcome>>();
    DescribeBiddingSuccessfulDetailAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBiddingSuccessfulDetailRequest&,
        DescribeBiddingSuccessfulDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeBiddingSuccessfulListOutcome DomainClient::DescribeBiddingSuccessfulList(const DescribeBiddingSuccessfulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingSuccessfulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingSuccessfulListResponse rsp = DescribeBiddingSuccessfulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingSuccessfulListOutcome(rsp);
        else
            return DescribeBiddingSuccessfulListOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingSuccessfulListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingSuccessfulListAsync(const DescribeBiddingSuccessfulListRequest& request, const DescribeBiddingSuccessfulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeBiddingSuccessfulListRequest&;
    using Resp = DescribeBiddingSuccessfulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeBiddingSuccessfulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeBiddingSuccessfulListOutcomeCallable DomainClient::DescribeBiddingSuccessfulListCallable(const DescribeBiddingSuccessfulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeBiddingSuccessfulListOutcome>>();
    DescribeBiddingSuccessfulListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeBiddingSuccessfulListRequest&,
        DescribeBiddingSuccessfulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeCustomDnsHostSetOutcome DomainClient::DescribeCustomDnsHostSet(const DescribeCustomDnsHostSetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomDnsHostSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomDnsHostSetResponse rsp = DescribeCustomDnsHostSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomDnsHostSetOutcome(rsp);
        else
            return DescribeCustomDnsHostSetOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomDnsHostSetOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeCustomDnsHostSetAsync(const DescribeCustomDnsHostSetRequest& request, const DescribeCustomDnsHostSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCustomDnsHostSetRequest&;
    using Resp = DescribeCustomDnsHostSetResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCustomDnsHostSet", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeCustomDnsHostSetOutcomeCallable DomainClient::DescribeCustomDnsHostSetCallable(const DescribeCustomDnsHostSetRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCustomDnsHostSetOutcome>>();
    DescribeCustomDnsHostSetAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeCustomDnsHostSetRequest&,
        DescribeCustomDnsHostSetOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeDomainBaseInfoOutcome DomainClient::DescribeDomainBaseInfo(const DescribeDomainBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainBaseInfoResponse rsp = DescribeDomainBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainBaseInfoOutcome(rsp);
        else
            return DescribeDomainBaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainBaseInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainBaseInfoAsync(const DescribeDomainBaseInfoRequest& request, const DescribeDomainBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainBaseInfoRequest&;
    using Resp = DescribeDomainBaseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainBaseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeDomainBaseInfoOutcomeCallable DomainClient::DescribeDomainBaseInfoCallable(const DescribeDomainBaseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainBaseInfoOutcome>>();
    DescribeDomainBaseInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeDomainBaseInfoRequest&,
        DescribeDomainBaseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeDomainNameListOutcome DomainClient::DescribeDomainNameList(const DescribeDomainNameListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainNameListResponse rsp = DescribeDomainNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainNameListOutcome(rsp);
        else
            return DescribeDomainNameListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainNameListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainNameListAsync(const DescribeDomainNameListRequest& request, const DescribeDomainNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainNameListRequest&;
    using Resp = DescribeDomainNameListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainNameList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeDomainNameListOutcomeCallable DomainClient::DescribeDomainNameListCallable(const DescribeDomainNameListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainNameListOutcome>>();
    DescribeDomainNameListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeDomainNameListRequest&,
        DescribeDomainNameListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeDomainPriceListOutcome DomainClient::DescribeDomainPriceList(const DescribeDomainPriceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPriceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPriceListResponse rsp = DescribeDomainPriceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPriceListOutcome(rsp);
        else
            return DescribeDomainPriceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPriceListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainPriceListAsync(const DescribeDomainPriceListRequest& request, const DescribeDomainPriceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainPriceListRequest&;
    using Resp = DescribeDomainPriceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainPriceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeDomainPriceListOutcomeCallable DomainClient::DescribeDomainPriceListCallable(const DescribeDomainPriceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainPriceListOutcome>>();
    DescribeDomainPriceListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeDomainPriceListRequest&,
        DescribeDomainPriceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeDomainSimpleInfoOutcome DomainClient::DescribeDomainSimpleInfo(const DescribeDomainSimpleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainSimpleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainSimpleInfoResponse rsp = DescribeDomainSimpleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainSimpleInfoOutcome(rsp);
        else
            return DescribeDomainSimpleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainSimpleInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainSimpleInfoAsync(const DescribeDomainSimpleInfoRequest& request, const DescribeDomainSimpleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainSimpleInfoRequest&;
    using Resp = DescribeDomainSimpleInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainSimpleInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeDomainSimpleInfoOutcomeCallable DomainClient::DescribeDomainSimpleInfoCallable(const DescribeDomainSimpleInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainSimpleInfoOutcome>>();
    DescribeDomainSimpleInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeDomainSimpleInfoRequest&,
        DescribeDomainSimpleInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribePayWaitDetailOutcome DomainClient::DescribePayWaitDetail(const DescribePayWaitDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePayWaitDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePayWaitDetailResponse rsp = DescribePayWaitDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePayWaitDetailOutcome(rsp);
        else
            return DescribePayWaitDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePayWaitDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePayWaitDetailAsync(const DescribePayWaitDetailRequest& request, const DescribePayWaitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePayWaitDetailRequest&;
    using Resp = DescribePayWaitDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePayWaitDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribePayWaitDetailOutcomeCallable DomainClient::DescribePayWaitDetailCallable(const DescribePayWaitDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePayWaitDetailOutcome>>();
    DescribePayWaitDetailAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribePayWaitDetailRequest&,
        DescribePayWaitDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribePhoneEmailListOutcome DomainClient::DescribePhoneEmailList(const DescribePhoneEmailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePhoneEmailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePhoneEmailListResponse rsp = DescribePhoneEmailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePhoneEmailListOutcome(rsp);
        else
            return DescribePhoneEmailListOutcome(o.GetError());
    }
    else
    {
        return DescribePhoneEmailListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePhoneEmailListAsync(const DescribePhoneEmailListRequest& request, const DescribePhoneEmailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePhoneEmailListRequest&;
    using Resp = DescribePhoneEmailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePhoneEmailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribePhoneEmailListOutcomeCallable DomainClient::DescribePhoneEmailListCallable(const DescribePhoneEmailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePhoneEmailListOutcome>>();
    DescribePhoneEmailListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribePhoneEmailListRequest&,
        DescribePhoneEmailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribePreAuctionListOutcome DomainClient::DescribePreAuctionList(const DescribePreAuctionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreAuctionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreAuctionListResponse rsp = DescribePreAuctionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreAuctionListOutcome(rsp);
        else
            return DescribePreAuctionListOutcome(o.GetError());
    }
    else
    {
        return DescribePreAuctionListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePreAuctionListAsync(const DescribePreAuctionListRequest& request, const DescribePreAuctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePreAuctionListRequest&;
    using Resp = DescribePreAuctionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePreAuctionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribePreAuctionListOutcomeCallable DomainClient::DescribePreAuctionListCallable(const DescribePreAuctionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePreAuctionListOutcome>>();
    DescribePreAuctionListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribePreAuctionListRequest&,
        DescribePreAuctionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribePreDomainListOutcome DomainClient::DescribePreDomainList(const DescribePreDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreDomainListResponse rsp = DescribePreDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreDomainListOutcome(rsp);
        else
            return DescribePreDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribePreDomainListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePreDomainListAsync(const DescribePreDomainListRequest& request, const DescribePreDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePreDomainListRequest&;
    using Resp = DescribePreDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePreDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribePreDomainListOutcomeCallable DomainClient::DescribePreDomainListCallable(const DescribePreDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePreDomainListOutcome>>();
    DescribePreDomainListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribePreDomainListRequest&,
        DescribePreDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribePreReleaseListOutcome DomainClient::DescribePreReleaseList(const DescribePreReleaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreReleaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreReleaseListResponse rsp = DescribePreReleaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreReleaseListOutcome(rsp);
        else
            return DescribePreReleaseListOutcome(o.GetError());
    }
    else
    {
        return DescribePreReleaseListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePreReleaseListAsync(const DescribePreReleaseListRequest& request, const DescribePreReleaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribePreReleaseListRequest&;
    using Resp = DescribePreReleaseListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribePreReleaseList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribePreReleaseListOutcomeCallable DomainClient::DescribePreReleaseListCallable(const DescribePreReleaseListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribePreReleaseListOutcome>>();
    DescribePreReleaseListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribePreReleaseListRequest&,
        DescribePreReleaseListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeReservedBidInfoOutcome DomainClient::DescribeReservedBidInfo(const DescribeReservedBidInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedBidInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedBidInfoResponse rsp = DescribeReservedBidInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedBidInfoOutcome(rsp);
        else
            return DescribeReservedBidInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedBidInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeReservedBidInfoAsync(const DescribeReservedBidInfoRequest& request, const DescribeReservedBidInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReservedBidInfoRequest&;
    using Resp = DescribeReservedBidInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReservedBidInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeReservedBidInfoOutcomeCallable DomainClient::DescribeReservedBidInfoCallable(const DescribeReservedBidInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReservedBidInfoOutcome>>();
    DescribeReservedBidInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeReservedBidInfoRequest&,
        DescribeReservedBidInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeReservedPreDomainInfoOutcome DomainClient::DescribeReservedPreDomainInfo(const DescribeReservedPreDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedPreDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedPreDomainInfoResponse rsp = DescribeReservedPreDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedPreDomainInfoOutcome(rsp);
        else
            return DescribeReservedPreDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedPreDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeReservedPreDomainInfoAsync(const DescribeReservedPreDomainInfoRequest& request, const DescribeReservedPreDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeReservedPreDomainInfoRequest&;
    using Resp = DescribeReservedPreDomainInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeReservedPreDomainInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeReservedPreDomainInfoOutcomeCallable DomainClient::DescribeReservedPreDomainInfoCallable(const DescribeReservedPreDomainInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeReservedPreDomainInfoOutcome>>();
    DescribeReservedPreDomainInfoAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeReservedPreDomainInfoRequest&,
        DescribeReservedPreDomainInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeTemplateOutcome DomainClient::DescribeTemplate(const DescribeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateResponse rsp = DescribeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateOutcome(rsp);
        else
            return DescribeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTemplateRequest&;
    using Resp = DescribeTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeTemplateOutcomeCallable DomainClient::DescribeTemplateCallable(const DescribeTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTemplateOutcome>>();
    DescribeTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeTemplateRequest&,
        DescribeTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeTemplateListOutcome DomainClient::DescribeTemplateList(const DescribeTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateListResponse rsp = DescribeTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateListOutcome(rsp);
        else
            return DescribeTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeTemplateListAsync(const DescribeTemplateListRequest& request, const DescribeTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTemplateListRequest&;
    using Resp = DescribeTemplateListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTemplateList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeTemplateListOutcomeCallable DomainClient::DescribeTemplateListCallable(const DescribeTemplateListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTemplateListOutcome>>();
    DescribeTemplateListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeTemplateListRequest&,
        DescribeTemplateListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeTldListOutcome DomainClient::DescribeTldList(const DescribeTldListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTldList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTldListResponse rsp = DescribeTldListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTldListOutcome(rsp);
        else
            return DescribeTldListOutcome(o.GetError());
    }
    else
    {
        return DescribeTldListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeTldListAsync(const DescribeTldListRequest& request, const DescribeTldListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTldListRequest&;
    using Resp = DescribeTldListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTldList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeTldListOutcomeCallable DomainClient::DescribeTldListCallable(const DescribeTldListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTldListOutcome>>();
    DescribeTldListAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeTldListRequest&,
        DescribeTldListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::DescribeUnPreDomainDetailOutcome DomainClient::DescribeUnPreDomainDetail(const DescribeUnPreDomainDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnPreDomainDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnPreDomainDetailResponse rsp = DescribeUnPreDomainDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnPreDomainDetailOutcome(rsp);
        else
            return DescribeUnPreDomainDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUnPreDomainDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeUnPreDomainDetailAsync(const DescribeUnPreDomainDetailRequest& request, const DescribeUnPreDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeUnPreDomainDetailRequest&;
    using Resp = DescribeUnPreDomainDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeUnPreDomainDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::DescribeUnPreDomainDetailOutcomeCallable DomainClient::DescribeUnPreDomainDetailCallable(const DescribeUnPreDomainDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeUnPreDomainDetailOutcome>>();
    DescribeUnPreDomainDetailAsync(
    request,
    [prom](
        const DomainClient*,
        const DescribeUnPreDomainDetailRequest&,
        DescribeUnPreDomainDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ModifyCustomDnsHostOutcome DomainClient::ModifyCustomDnsHost(const ModifyCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomDnsHostResponse rsp = ModifyCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomDnsHostOutcome(rsp);
        else
            return ModifyCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyCustomDnsHostAsync(const ModifyCustomDnsHostRequest& request, const ModifyCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyCustomDnsHostRequest&;
    using Resp = ModifyCustomDnsHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyCustomDnsHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ModifyCustomDnsHostOutcomeCallable DomainClient::ModifyCustomDnsHostCallable(const ModifyCustomDnsHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyCustomDnsHostOutcome>>();
    ModifyCustomDnsHostAsync(
    request,
    [prom](
        const DomainClient*,
        const ModifyCustomDnsHostRequest&,
        ModifyCustomDnsHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ModifyDomainDNSBatchOutcome DomainClient::ModifyDomainDNSBatch(const ModifyDomainDNSBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainDNSBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainDNSBatchResponse rsp = ModifyDomainDNSBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainDNSBatchOutcome(rsp);
        else
            return ModifyDomainDNSBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainDNSBatchOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyDomainDNSBatchAsync(const ModifyDomainDNSBatchRequest& request, const ModifyDomainDNSBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainDNSBatchRequest&;
    using Resp = ModifyDomainDNSBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainDNSBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ModifyDomainDNSBatchOutcomeCallable DomainClient::ModifyDomainDNSBatchCallable(const ModifyDomainDNSBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainDNSBatchOutcome>>();
    ModifyDomainDNSBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const ModifyDomainDNSBatchRequest&,
        ModifyDomainDNSBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ModifyDomainOwnerBatchOutcome DomainClient::ModifyDomainOwnerBatch(const ModifyDomainOwnerBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainOwnerBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainOwnerBatchResponse rsp = ModifyDomainOwnerBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOwnerBatchOutcome(rsp);
        else
            return ModifyDomainOwnerBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOwnerBatchOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyDomainOwnerBatchAsync(const ModifyDomainOwnerBatchRequest& request, const ModifyDomainOwnerBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyDomainOwnerBatchRequest&;
    using Resp = ModifyDomainOwnerBatchResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyDomainOwnerBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ModifyDomainOwnerBatchOutcomeCallable DomainClient::ModifyDomainOwnerBatchCallable(const ModifyDomainOwnerBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyDomainOwnerBatchOutcome>>();
    ModifyDomainOwnerBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const ModifyDomainOwnerBatchRequest&,
        ModifyDomainOwnerBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ModifyIntlCustomDnsHostOutcome DomainClient::ModifyIntlCustomDnsHost(const ModifyIntlCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntlCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntlCustomDnsHostResponse rsp = ModifyIntlCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntlCustomDnsHostOutcome(rsp);
        else
            return ModifyIntlCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return ModifyIntlCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyIntlCustomDnsHostAsync(const ModifyIntlCustomDnsHostRequest& request, const ModifyIntlCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyIntlCustomDnsHostRequest&;
    using Resp = ModifyIntlCustomDnsHostResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyIntlCustomDnsHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ModifyIntlCustomDnsHostOutcomeCallable DomainClient::ModifyIntlCustomDnsHostCallable(const ModifyIntlCustomDnsHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyIntlCustomDnsHostOutcome>>();
    ModifyIntlCustomDnsHostAsync(
    request,
    [prom](
        const DomainClient*,
        const ModifyIntlCustomDnsHostRequest&,
        ModifyIntlCustomDnsHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ModifyTemplateOutcome DomainClient::ModifyTemplate(const ModifyTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTemplateResponse rsp = ModifyTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTemplateOutcome(rsp);
        else
            return ModifyTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyTemplateAsync(const ModifyTemplateRequest& request, const ModifyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyTemplateRequest&;
    using Resp = ModifyTemplateResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyTemplate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ModifyTemplateOutcomeCallable DomainClient::ModifyTemplateCallable(const ModifyTemplateRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyTemplateOutcome>>();
    ModifyTemplateAsync(
    request,
    [prom](
        const DomainClient*,
        const ModifyTemplateRequest&,
        ModifyTemplateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::RenewDomainBatchOutcome DomainClient::RenewDomainBatch(const RenewDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDomainBatchResponse rsp = RenewDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDomainBatchOutcome(rsp);
        else
            return RenewDomainBatchOutcome(o.GetError());
    }
    else
    {
        return RenewDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::RenewDomainBatchAsync(const RenewDomainBatchRequest& request, const RenewDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RenewDomainBatchRequest&;
    using Resp = RenewDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "RenewDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::RenewDomainBatchOutcomeCallable DomainClient::RenewDomainBatchCallable(const RenewDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<RenewDomainBatchOutcome>>();
    RenewDomainBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const RenewDomainBatchRequest&,
        RenewDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::ReservedPreDomainsOutcome DomainClient::ReservedPreDomains(const ReservedPreDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ReservedPreDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReservedPreDomainsResponse rsp = ReservedPreDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReservedPreDomainsOutcome(rsp);
        else
            return ReservedPreDomainsOutcome(o.GetError());
    }
    else
    {
        return ReservedPreDomainsOutcome(outcome.GetError());
    }
}

void DomainClient::ReservedPreDomainsAsync(const ReservedPreDomainsRequest& request, const ReservedPreDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReservedPreDomainsRequest&;
    using Resp = ReservedPreDomainsResponse;

    DoRequestAsync<Req, Resp>(
        "ReservedPreDomains", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::ReservedPreDomainsOutcomeCallable DomainClient::ReservedPreDomainsCallable(const ReservedPreDomainsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReservedPreDomainsOutcome>>();
    ReservedPreDomainsAsync(
    request,
    [prom](
        const DomainClient*,
        const ReservedPreDomainsRequest&,
        ReservedPreDomainsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::SendPhoneEmailCodeOutcome DomainClient::SendPhoneEmailCode(const SendPhoneEmailCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendPhoneEmailCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendPhoneEmailCodeResponse rsp = SendPhoneEmailCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendPhoneEmailCodeOutcome(rsp);
        else
            return SendPhoneEmailCodeOutcome(o.GetError());
    }
    else
    {
        return SendPhoneEmailCodeOutcome(outcome.GetError());
    }
}

void DomainClient::SendPhoneEmailCodeAsync(const SendPhoneEmailCodeRequest& request, const SendPhoneEmailCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SendPhoneEmailCodeRequest&;
    using Resp = SendPhoneEmailCodeResponse;

    DoRequestAsync<Req, Resp>(
        "SendPhoneEmailCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::SendPhoneEmailCodeOutcomeCallable DomainClient::SendPhoneEmailCodeCallable(const SendPhoneEmailCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SendPhoneEmailCodeOutcome>>();
    SendPhoneEmailCodeAsync(
    request,
    [prom](
        const DomainClient*,
        const SendPhoneEmailCodeRequest&,
        SendPhoneEmailCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::SetDomainAutoRenewOutcome DomainClient::SetDomainAutoRenew(const SetDomainAutoRenewRequest &request)
{
    auto outcome = MakeRequest(request, "SetDomainAutoRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDomainAutoRenewResponse rsp = SetDomainAutoRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDomainAutoRenewOutcome(rsp);
        else
            return SetDomainAutoRenewOutcome(o.GetError());
    }
    else
    {
        return SetDomainAutoRenewOutcome(outcome.GetError());
    }
}

void DomainClient::SetDomainAutoRenewAsync(const SetDomainAutoRenewRequest& request, const SetDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SetDomainAutoRenewRequest&;
    using Resp = SetDomainAutoRenewResponse;

    DoRequestAsync<Req, Resp>(
        "SetDomainAutoRenew", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::SetDomainAutoRenewOutcomeCallable DomainClient::SetDomainAutoRenewCallable(const SetDomainAutoRenewRequest &request)
{
    const auto prom = std::make_shared<std::promise<SetDomainAutoRenewOutcome>>();
    SetDomainAutoRenewAsync(
    request,
    [prom](
        const DomainClient*,
        const SetDomainAutoRenewRequest&,
        SetDomainAutoRenewOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::SyncCustomDnsHostOutcome DomainClient::SyncCustomDnsHost(const SyncCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "SyncCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncCustomDnsHostResponse rsp = SyncCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncCustomDnsHostOutcome(rsp);
        else
            return SyncCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return SyncCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::SyncCustomDnsHostAsync(const SyncCustomDnsHostRequest& request, const SyncCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncCustomDnsHostRequest&;
    using Resp = SyncCustomDnsHostResponse;

    DoRequestAsync<Req, Resp>(
        "SyncCustomDnsHost", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::SyncCustomDnsHostOutcomeCallable DomainClient::SyncCustomDnsHostCallable(const SyncCustomDnsHostRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncCustomDnsHostOutcome>>();
    SyncCustomDnsHostAsync(
    request,
    [prom](
        const DomainClient*,
        const SyncCustomDnsHostRequest&,
        SyncCustomDnsHostOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::TransferInDomainBatchOutcome DomainClient::TransferInDomainBatch(const TransferInDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TransferInDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferInDomainBatchResponse rsp = TransferInDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferInDomainBatchOutcome(rsp);
        else
            return TransferInDomainBatchOutcome(o.GetError());
    }
    else
    {
        return TransferInDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::TransferInDomainBatchAsync(const TransferInDomainBatchRequest& request, const TransferInDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransferInDomainBatchRequest&;
    using Resp = TransferInDomainBatchResponse;

    DoRequestAsync<Req, Resp>(
        "TransferInDomainBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::TransferInDomainBatchOutcomeCallable DomainClient::TransferInDomainBatchCallable(const TransferInDomainBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferInDomainBatchOutcome>>();
    TransferInDomainBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const TransferInDomainBatchRequest&,
        TransferInDomainBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::TransferProhibitionBatchOutcome DomainClient::TransferProhibitionBatch(const TransferProhibitionBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TransferProhibitionBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferProhibitionBatchResponse rsp = TransferProhibitionBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferProhibitionBatchOutcome(rsp);
        else
            return TransferProhibitionBatchOutcome(o.GetError());
    }
    else
    {
        return TransferProhibitionBatchOutcome(outcome.GetError());
    }
}

void DomainClient::TransferProhibitionBatchAsync(const TransferProhibitionBatchRequest& request, const TransferProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransferProhibitionBatchRequest&;
    using Resp = TransferProhibitionBatchResponse;

    DoRequestAsync<Req, Resp>(
        "TransferProhibitionBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::TransferProhibitionBatchOutcomeCallable DomainClient::TransferProhibitionBatchCallable(const TransferProhibitionBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferProhibitionBatchOutcome>>();
    TransferProhibitionBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const TransferProhibitionBatchRequest&,
        TransferProhibitionBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::UpdateProhibitionBatchOutcome DomainClient::UpdateProhibitionBatch(const UpdateProhibitionBatchRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProhibitionBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProhibitionBatchResponse rsp = UpdateProhibitionBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProhibitionBatchOutcome(rsp);
        else
            return UpdateProhibitionBatchOutcome(o.GetError());
    }
    else
    {
        return UpdateProhibitionBatchOutcome(outcome.GetError());
    }
}

void DomainClient::UpdateProhibitionBatchAsync(const UpdateProhibitionBatchRequest& request, const UpdateProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateProhibitionBatchRequest&;
    using Resp = UpdateProhibitionBatchResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateProhibitionBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::UpdateProhibitionBatchOutcomeCallable DomainClient::UpdateProhibitionBatchCallable(const UpdateProhibitionBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateProhibitionBatchOutcome>>();
    UpdateProhibitionBatchAsync(
    request,
    [prom](
        const DomainClient*,
        const UpdateProhibitionBatchRequest&,
        UpdateProhibitionBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

DomainClient::UploadImageOutcome DomainClient::UploadImage(const UploadImageRequest &request)
{
    auto outcome = MakeRequest(request, "UploadImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadImageResponse rsp = UploadImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadImageOutcome(rsp);
        else
            return UploadImageOutcome(o.GetError());
    }
    else
    {
        return UploadImageOutcome(outcome.GetError());
    }
}

void DomainClient::UploadImageAsync(const UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadImageRequest&;
    using Resp = UploadImageResponse;

    DoRequestAsync<Req, Resp>(
        "UploadImage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

DomainClient::UploadImageOutcomeCallable DomainClient::UploadImageCallable(const UploadImageRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadImageOutcome>>();
    UploadImageAsync(
    request,
    [prom](
        const DomainClient*,
        const UploadImageRequest&,
        UploadImageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

