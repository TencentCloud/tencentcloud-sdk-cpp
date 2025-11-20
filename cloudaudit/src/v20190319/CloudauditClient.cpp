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

#include <tencentcloud/cloudaudit/v20190319/CloudauditClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudaudit::V20190319;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-19";
    const string ENDPOINT = "cloudaudit.tencentcloudapi.com";
}

CloudauditClient::CloudauditClient(const Credential &credential, const string &region) :
    CloudauditClient(credential, region, ClientProfile())
{
}

CloudauditClient::CloudauditClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudauditClient::CreateAuditTrackOutcome CloudauditClient::CreateAuditTrack(const CreateAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditTrackResponse rsp = CreateAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditTrackOutcome(rsp);
        else
            return CreateAuditTrackOutcome(o.GetError());
    }
    else
    {
        return CreateAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::CreateAuditTrackAsync(const CreateAuditTrackRequest& request, const CreateAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAuditTrackRequest&;
    using Resp = CreateAuditTrackResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAuditTrack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::CreateAuditTrackOutcomeCallable CloudauditClient::CreateAuditTrackCallable(const CreateAuditTrackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAuditTrackOutcome>>();
    CreateAuditTrackAsync(
    request,
    [prom](
        const CloudauditClient*,
        const CreateAuditTrackRequest&,
        CreateAuditTrackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::CreateEventsAuditTrackOutcome CloudauditClient::CreateEventsAuditTrack(const CreateEventsAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEventsAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEventsAuditTrackResponse rsp = CreateEventsAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEventsAuditTrackOutcome(rsp);
        else
            return CreateEventsAuditTrackOutcome(o.GetError());
    }
    else
    {
        return CreateEventsAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::CreateEventsAuditTrackAsync(const CreateEventsAuditTrackRequest& request, const CreateEventsAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateEventsAuditTrackRequest&;
    using Resp = CreateEventsAuditTrackResponse;

    DoRequestAsync<Req, Resp>(
        "CreateEventsAuditTrack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::CreateEventsAuditTrackOutcomeCallable CloudauditClient::CreateEventsAuditTrackCallable(const CreateEventsAuditTrackRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateEventsAuditTrackOutcome>>();
    CreateEventsAuditTrackAsync(
    request,
    [prom](
        const CloudauditClient*,
        const CreateEventsAuditTrackRequest&,
        CreateEventsAuditTrackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::DeleteAuditTrackOutcome CloudauditClient::DeleteAuditTrack(const DeleteAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditTrackResponse rsp = DeleteAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditTrackOutcome(rsp);
        else
            return DeleteAuditTrackOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::DeleteAuditTrackAsync(const DeleteAuditTrackRequest& request, const DeleteAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAuditTrackRequest&;
    using Resp = DeleteAuditTrackResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAuditTrack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::DeleteAuditTrackOutcomeCallable CloudauditClient::DeleteAuditTrackCallable(const DeleteAuditTrackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAuditTrackOutcome>>();
    DeleteAuditTrackAsync(
    request,
    [prom](
        const CloudauditClient*,
        const DeleteAuditTrackRequest&,
        DeleteAuditTrackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::DescribeAuditOutcome CloudauditClient::DescribeAudit(const DescribeAuditRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditResponse rsp = DescribeAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditOutcome(rsp);
        else
            return DescribeAuditOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditAsync(const DescribeAuditRequest& request, const DescribeAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditRequest&;
    using Resp = DescribeAuditResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAudit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::DescribeAuditOutcomeCallable CloudauditClient::DescribeAuditCallable(const DescribeAuditRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditOutcome>>();
    DescribeAuditAsync(
    request,
    [prom](
        const CloudauditClient*,
        const DescribeAuditRequest&,
        DescribeAuditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::DescribeAuditTrackOutcome CloudauditClient::DescribeAuditTrack(const DescribeAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditTrackResponse rsp = DescribeAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditTrackOutcome(rsp);
        else
            return DescribeAuditTrackOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditTrackAsync(const DescribeAuditTrackRequest& request, const DescribeAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditTrackRequest&;
    using Resp = DescribeAuditTrackResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditTrack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::DescribeAuditTrackOutcomeCallable CloudauditClient::DescribeAuditTrackCallable(const DescribeAuditTrackRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditTrackOutcome>>();
    DescribeAuditTrackAsync(
    request,
    [prom](
        const CloudauditClient*,
        const DescribeAuditTrackRequest&,
        DescribeAuditTrackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::DescribeAuditTracksOutcome CloudauditClient::DescribeAuditTracks(const DescribeAuditTracksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditTracks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditTracksResponse rsp = DescribeAuditTracksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditTracksOutcome(rsp);
        else
            return DescribeAuditTracksOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditTracksOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditTracksAsync(const DescribeAuditTracksRequest& request, const DescribeAuditTracksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAuditTracksRequest&;
    using Resp = DescribeAuditTracksResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAuditTracks", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::DescribeAuditTracksOutcomeCallable CloudauditClient::DescribeAuditTracksCallable(const DescribeAuditTracksRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAuditTracksOutcome>>();
    DescribeAuditTracksAsync(
    request,
    [prom](
        const CloudauditClient*,
        const DescribeAuditTracksRequest&,
        DescribeAuditTracksOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::DescribeEventsOutcome CloudauditClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventsRequest&;
    using Resp = DescribeEventsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::DescribeEventsOutcomeCallable CloudauditClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventsOutcome>>();
    DescribeEventsAsync(
    request,
    [prom](
        const CloudauditClient*,
        const DescribeEventsRequest&,
        DescribeEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::GetAttributeKeyOutcome CloudauditClient::GetAttributeKey(const GetAttributeKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttributeKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttributeKeyResponse rsp = GetAttributeKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttributeKeyOutcome(rsp);
        else
            return GetAttributeKeyOutcome(o.GetError());
    }
    else
    {
        return GetAttributeKeyOutcome(outcome.GetError());
    }
}

void CloudauditClient::GetAttributeKeyAsync(const GetAttributeKeyRequest& request, const GetAttributeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetAttributeKeyRequest&;
    using Resp = GetAttributeKeyResponse;

    DoRequestAsync<Req, Resp>(
        "GetAttributeKey", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::GetAttributeKeyOutcomeCallable CloudauditClient::GetAttributeKeyCallable(const GetAttributeKeyRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetAttributeKeyOutcome>>();
    GetAttributeKeyAsync(
    request,
    [prom](
        const CloudauditClient*,
        const GetAttributeKeyRequest&,
        GetAttributeKeyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::InquireAuditCreditOutcome CloudauditClient::InquireAuditCredit(const InquireAuditCreditRequest &request)
{
    auto outcome = MakeRequest(request, "InquireAuditCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquireAuditCreditResponse rsp = InquireAuditCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquireAuditCreditOutcome(rsp);
        else
            return InquireAuditCreditOutcome(o.GetError());
    }
    else
    {
        return InquireAuditCreditOutcome(outcome.GetError());
    }
}

void CloudauditClient::InquireAuditCreditAsync(const InquireAuditCreditRequest& request, const InquireAuditCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InquireAuditCreditRequest&;
    using Resp = InquireAuditCreditResponse;

    DoRequestAsync<Req, Resp>(
        "InquireAuditCredit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::InquireAuditCreditOutcomeCallable CloudauditClient::InquireAuditCreditCallable(const InquireAuditCreditRequest &request)
{
    const auto prom = std::make_shared<std::promise<InquireAuditCreditOutcome>>();
    InquireAuditCreditAsync(
    request,
    [prom](
        const CloudauditClient*,
        const InquireAuditCreditRequest&,
        InquireAuditCreditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::ListAuditsOutcome CloudauditClient::ListAudits(const ListAuditsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAudits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuditsResponse rsp = ListAuditsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuditsOutcome(rsp);
        else
            return ListAuditsOutcome(o.GetError());
    }
    else
    {
        return ListAuditsOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListAuditsAsync(const ListAuditsRequest& request, const ListAuditsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListAuditsRequest&;
    using Resp = ListAuditsResponse;

    DoRequestAsync<Req, Resp>(
        "ListAudits", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::ListAuditsOutcomeCallable CloudauditClient::ListAuditsCallable(const ListAuditsRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListAuditsOutcome>>();
    ListAuditsAsync(
    request,
    [prom](
        const CloudauditClient*,
        const ListAuditsRequest&,
        ListAuditsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::ListCmqEnableRegionOutcome CloudauditClient::ListCmqEnableRegion(const ListCmqEnableRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ListCmqEnableRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCmqEnableRegionResponse rsp = ListCmqEnableRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCmqEnableRegionOutcome(rsp);
        else
            return ListCmqEnableRegionOutcome(o.GetError());
    }
    else
    {
        return ListCmqEnableRegionOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListCmqEnableRegionAsync(const ListCmqEnableRegionRequest& request, const ListCmqEnableRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCmqEnableRegionRequest&;
    using Resp = ListCmqEnableRegionResponse;

    DoRequestAsync<Req, Resp>(
        "ListCmqEnableRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::ListCmqEnableRegionOutcomeCallable CloudauditClient::ListCmqEnableRegionCallable(const ListCmqEnableRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCmqEnableRegionOutcome>>();
    ListCmqEnableRegionAsync(
    request,
    [prom](
        const CloudauditClient*,
        const ListCmqEnableRegionRequest&,
        ListCmqEnableRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::ListCosEnableRegionOutcome CloudauditClient::ListCosEnableRegion(const ListCosEnableRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ListCosEnableRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCosEnableRegionResponse rsp = ListCosEnableRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCosEnableRegionOutcome(rsp);
        else
            return ListCosEnableRegionOutcome(o.GetError());
    }
    else
    {
        return ListCosEnableRegionOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListCosEnableRegionAsync(const ListCosEnableRegionRequest& request, const ListCosEnableRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListCosEnableRegionRequest&;
    using Resp = ListCosEnableRegionResponse;

    DoRequestAsync<Req, Resp>(
        "ListCosEnableRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::ListCosEnableRegionOutcomeCallable CloudauditClient::ListCosEnableRegionCallable(const ListCosEnableRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListCosEnableRegionOutcome>>();
    ListCosEnableRegionAsync(
    request,
    [prom](
        const CloudauditClient*,
        const ListCosEnableRegionRequest&,
        ListCosEnableRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::ListKeyAliasByRegionOutcome CloudauditClient::ListKeyAliasByRegion(const ListKeyAliasByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ListKeyAliasByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListKeyAliasByRegionResponse rsp = ListKeyAliasByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListKeyAliasByRegionOutcome(rsp);
        else
            return ListKeyAliasByRegionOutcome(o.GetError());
    }
    else
    {
        return ListKeyAliasByRegionOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListKeyAliasByRegionAsync(const ListKeyAliasByRegionRequest& request, const ListKeyAliasByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ListKeyAliasByRegionRequest&;
    using Resp = ListKeyAliasByRegionResponse;

    DoRequestAsync<Req, Resp>(
        "ListKeyAliasByRegion", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::ListKeyAliasByRegionOutcomeCallable CloudauditClient::ListKeyAliasByRegionCallable(const ListKeyAliasByRegionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ListKeyAliasByRegionOutcome>>();
    ListKeyAliasByRegionAsync(
    request,
    [prom](
        const CloudauditClient*,
        const ListKeyAliasByRegionRequest&,
        ListKeyAliasByRegionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::LookUpEventsOutcome CloudauditClient::LookUpEvents(const LookUpEventsRequest &request)
{
    auto outcome = MakeRequest(request, "LookUpEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LookUpEventsResponse rsp = LookUpEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LookUpEventsOutcome(rsp);
        else
            return LookUpEventsOutcome(o.GetError());
    }
    else
    {
        return LookUpEventsOutcome(outcome.GetError());
    }
}

void CloudauditClient::LookUpEventsAsync(const LookUpEventsRequest& request, const LookUpEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const LookUpEventsRequest&;
    using Resp = LookUpEventsResponse;

    DoRequestAsync<Req, Resp>(
        "LookUpEvents", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::LookUpEventsOutcomeCallable CloudauditClient::LookUpEventsCallable(const LookUpEventsRequest &request)
{
    const auto prom = std::make_shared<std::promise<LookUpEventsOutcome>>();
    LookUpEventsAsync(
    request,
    [prom](
        const CloudauditClient*,
        const LookUpEventsRequest&,
        LookUpEventsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::ModifyAuditTrackOutcome CloudauditClient::ModifyAuditTrack(const ModifyAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditTrackResponse rsp = ModifyAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditTrackOutcome(rsp);
        else
            return ModifyAuditTrackOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::ModifyAuditTrackAsync(const ModifyAuditTrackRequest& request, const ModifyAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAuditTrackRequest&;
    using Resp = ModifyAuditTrackResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAuditTrack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::ModifyAuditTrackOutcomeCallable CloudauditClient::ModifyAuditTrackCallable(const ModifyAuditTrackRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAuditTrackOutcome>>();
    ModifyAuditTrackAsync(
    request,
    [prom](
        const CloudauditClient*,
        const ModifyAuditTrackRequest&,
        ModifyAuditTrackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::ModifyEventsAuditTrackOutcome CloudauditClient::ModifyEventsAuditTrack(const ModifyEventsAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEventsAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEventsAuditTrackResponse rsp = ModifyEventsAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEventsAuditTrackOutcome(rsp);
        else
            return ModifyEventsAuditTrackOutcome(o.GetError());
    }
    else
    {
        return ModifyEventsAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::ModifyEventsAuditTrackAsync(const ModifyEventsAuditTrackRequest& request, const ModifyEventsAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyEventsAuditTrackRequest&;
    using Resp = ModifyEventsAuditTrackResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyEventsAuditTrack", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::ModifyEventsAuditTrackOutcomeCallable CloudauditClient::ModifyEventsAuditTrackCallable(const ModifyEventsAuditTrackRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyEventsAuditTrackOutcome>>();
    ModifyEventsAuditTrackAsync(
    request,
    [prom](
        const CloudauditClient*,
        const ModifyEventsAuditTrackRequest&,
        ModifyEventsAuditTrackOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::StartLoggingOutcome CloudauditClient::StartLogging(const StartLoggingRequest &request)
{
    auto outcome = MakeRequest(request, "StartLogging");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLoggingResponse rsp = StartLoggingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLoggingOutcome(rsp);
        else
            return StartLoggingOutcome(o.GetError());
    }
    else
    {
        return StartLoggingOutcome(outcome.GetError());
    }
}

void CloudauditClient::StartLoggingAsync(const StartLoggingRequest& request, const StartLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StartLoggingRequest&;
    using Resp = StartLoggingResponse;

    DoRequestAsync<Req, Resp>(
        "StartLogging", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::StartLoggingOutcomeCallable CloudauditClient::StartLoggingCallable(const StartLoggingRequest &request)
{
    const auto prom = std::make_shared<std::promise<StartLoggingOutcome>>();
    StartLoggingAsync(
    request,
    [prom](
        const CloudauditClient*,
        const StartLoggingRequest&,
        StartLoggingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::StopLoggingOutcome CloudauditClient::StopLogging(const StopLoggingRequest &request)
{
    auto outcome = MakeRequest(request, "StopLogging");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLoggingResponse rsp = StopLoggingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLoggingOutcome(rsp);
        else
            return StopLoggingOutcome(o.GetError());
    }
    else
    {
        return StopLoggingOutcome(outcome.GetError());
    }
}

void CloudauditClient::StopLoggingAsync(const StopLoggingRequest& request, const StopLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const StopLoggingRequest&;
    using Resp = StopLoggingResponse;

    DoRequestAsync<Req, Resp>(
        "StopLogging", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::StopLoggingOutcomeCallable CloudauditClient::StopLoggingCallable(const StopLoggingRequest &request)
{
    const auto prom = std::make_shared<std::promise<StopLoggingOutcome>>();
    StopLoggingAsync(
    request,
    [prom](
        const CloudauditClient*,
        const StopLoggingRequest&,
        StopLoggingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CloudauditClient::UpdateAuditOutcome CloudauditClient::UpdateAudit(const UpdateAuditRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAuditResponse rsp = UpdateAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAuditOutcome(rsp);
        else
            return UpdateAuditOutcome(o.GetError());
    }
    else
    {
        return UpdateAuditOutcome(outcome.GetError());
    }
}

void CloudauditClient::UpdateAuditAsync(const UpdateAuditRequest& request, const UpdateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UpdateAuditRequest&;
    using Resp = UpdateAuditResponse;

    DoRequestAsync<Req, Resp>(
        "UpdateAudit", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CloudauditClient::UpdateAuditOutcomeCallable CloudauditClient::UpdateAuditCallable(const UpdateAuditRequest &request)
{
    const auto prom = std::make_shared<std::promise<UpdateAuditOutcome>>();
    UpdateAuditAsync(
    request,
    [prom](
        const CloudauditClient*,
        const UpdateAuditRequest&,
        UpdateAuditOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

