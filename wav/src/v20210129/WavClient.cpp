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

#include <tencentcloud/wav/v20210129/WavClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Wav::V20210129;
using namespace TencentCloud::Wav::V20210129::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-01-29";
    const string ENDPOINT = "wav.tencentcloudapi.com";
}

WavClient::WavClient(const Credential &credential, const string &region) :
    WavClient(credential, region, ClientProfile())
{
}

WavClient::WavClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


WavClient::CreateChannelCodeOutcome WavClient::CreateChannelCode(const CreateChannelCodeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateChannelCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateChannelCodeResponse rsp = CreateChannelCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateChannelCodeOutcome(rsp);
        else
            return CreateChannelCodeOutcome(o.GetError());
    }
    else
    {
        return CreateChannelCodeOutcome(outcome.GetError());
    }
}

void WavClient::CreateChannelCodeAsync(const CreateChannelCodeRequest& request, const CreateChannelCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateChannelCodeRequest&;
    using Resp = CreateChannelCodeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateChannelCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::CreateChannelCodeOutcomeCallable WavClient::CreateChannelCodeCallable(const CreateChannelCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateChannelCodeOutcome>>();
    CreateChannelCodeAsync(
    request,
    [prom](
        const WavClient*,
        const CreateChannelCodeRequest&,
        CreateChannelCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::CreateCorpTagOutcome WavClient::CreateCorpTag(const CreateCorpTagRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCorpTag");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCorpTagResponse rsp = CreateCorpTagResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCorpTagOutcome(rsp);
        else
            return CreateCorpTagOutcome(o.GetError());
    }
    else
    {
        return CreateCorpTagOutcome(outcome.GetError());
    }
}

void WavClient::CreateCorpTagAsync(const CreateCorpTagRequest& request, const CreateCorpTagAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCorpTagRequest&;
    using Resp = CreateCorpTagResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCorpTag", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::CreateCorpTagOutcomeCallable WavClient::CreateCorpTagCallable(const CreateCorpTagRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCorpTagOutcome>>();
    CreateCorpTagAsync(
    request,
    [prom](
        const WavClient*,
        const CreateCorpTagRequest&,
        CreateCorpTagOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::CreateLeadOutcome WavClient::CreateLead(const CreateLeadRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLead");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLeadResponse rsp = CreateLeadResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLeadOutcome(rsp);
        else
            return CreateLeadOutcome(o.GetError());
    }
    else
    {
        return CreateLeadOutcome(outcome.GetError());
    }
}

void WavClient::CreateLeadAsync(const CreateLeadRequest& request, const CreateLeadAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateLeadRequest&;
    using Resp = CreateLeadResponse;

    DoRequestAsync<Req, Resp>(
        "CreateLead", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::CreateLeadOutcomeCallable WavClient::CreateLeadCallable(const CreateLeadRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateLeadOutcome>>();
    CreateLeadAsync(
    request,
    [prom](
        const WavClient*,
        const CreateLeadRequest&,
        CreateLeadOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryActivityJoinListOutcome WavClient::QueryActivityJoinList(const QueryActivityJoinListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityJoinList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityJoinListResponse rsp = QueryActivityJoinListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityJoinListOutcome(rsp);
        else
            return QueryActivityJoinListOutcome(o.GetError());
    }
    else
    {
        return QueryActivityJoinListOutcome(outcome.GetError());
    }
}

void WavClient::QueryActivityJoinListAsync(const QueryActivityJoinListRequest& request, const QueryActivityJoinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryActivityJoinListRequest&;
    using Resp = QueryActivityJoinListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryActivityJoinList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryActivityJoinListOutcomeCallable WavClient::QueryActivityJoinListCallable(const QueryActivityJoinListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryActivityJoinListOutcome>>();
    QueryActivityJoinListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryActivityJoinListRequest&,
        QueryActivityJoinListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryActivityListOutcome WavClient::QueryActivityList(const QueryActivityListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityListResponse rsp = QueryActivityListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityListOutcome(rsp);
        else
            return QueryActivityListOutcome(o.GetError());
    }
    else
    {
        return QueryActivityListOutcome(outcome.GetError());
    }
}

void WavClient::QueryActivityListAsync(const QueryActivityListRequest& request, const QueryActivityListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryActivityListRequest&;
    using Resp = QueryActivityListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryActivityList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryActivityListOutcomeCallable WavClient::QueryActivityListCallable(const QueryActivityListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryActivityListOutcome>>();
    QueryActivityListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryActivityListRequest&,
        QueryActivityListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryActivityLiveCodeListOutcome WavClient::QueryActivityLiveCodeList(const QueryActivityLiveCodeListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryActivityLiveCodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryActivityLiveCodeListResponse rsp = QueryActivityLiveCodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryActivityLiveCodeListOutcome(rsp);
        else
            return QueryActivityLiveCodeListOutcome(o.GetError());
    }
    else
    {
        return QueryActivityLiveCodeListOutcome(outcome.GetError());
    }
}

void WavClient::QueryActivityLiveCodeListAsync(const QueryActivityLiveCodeListRequest& request, const QueryActivityLiveCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryActivityLiveCodeListRequest&;
    using Resp = QueryActivityLiveCodeListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryActivityLiveCodeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryActivityLiveCodeListOutcomeCallable WavClient::QueryActivityLiveCodeListCallable(const QueryActivityLiveCodeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryActivityLiveCodeListOutcome>>();
    QueryActivityLiveCodeListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryActivityLiveCodeListRequest&,
        QueryActivityLiveCodeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryArrivalListOutcome WavClient::QueryArrivalList(const QueryArrivalListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryArrivalList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryArrivalListResponse rsp = QueryArrivalListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryArrivalListOutcome(rsp);
        else
            return QueryArrivalListOutcome(o.GetError());
    }
    else
    {
        return QueryArrivalListOutcome(outcome.GetError());
    }
}

void WavClient::QueryArrivalListAsync(const QueryArrivalListRequest& request, const QueryArrivalListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryArrivalListRequest&;
    using Resp = QueryArrivalListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryArrivalList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryArrivalListOutcomeCallable WavClient::QueryArrivalListCallable(const QueryArrivalListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryArrivalListOutcome>>();
    QueryArrivalListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryArrivalListRequest&,
        QueryArrivalListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryChannelCodeListOutcome WavClient::QueryChannelCodeList(const QueryChannelCodeListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChannelCodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChannelCodeListResponse rsp = QueryChannelCodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChannelCodeListOutcome(rsp);
        else
            return QueryChannelCodeListOutcome(o.GetError());
    }
    else
    {
        return QueryChannelCodeListOutcome(outcome.GetError());
    }
}

void WavClient::QueryChannelCodeListAsync(const QueryChannelCodeListRequest& request, const QueryChannelCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChannelCodeListRequest&;
    using Resp = QueryChannelCodeListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChannelCodeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryChannelCodeListOutcomeCallable WavClient::QueryChannelCodeListCallable(const QueryChannelCodeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChannelCodeListOutcome>>();
    QueryChannelCodeListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryChannelCodeListRequest&,
        QueryChannelCodeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryChatArchivingListOutcome WavClient::QueryChatArchivingList(const QueryChatArchivingListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChatArchivingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChatArchivingListResponse rsp = QueryChatArchivingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChatArchivingListOutcome(rsp);
        else
            return QueryChatArchivingListOutcome(o.GetError());
    }
    else
    {
        return QueryChatArchivingListOutcome(outcome.GetError());
    }
}

void WavClient::QueryChatArchivingListAsync(const QueryChatArchivingListRequest& request, const QueryChatArchivingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChatArchivingListRequest&;
    using Resp = QueryChatArchivingListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChatArchivingList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryChatArchivingListOutcomeCallable WavClient::QueryChatArchivingListCallable(const QueryChatArchivingListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChatArchivingListOutcome>>();
    QueryChatArchivingListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryChatArchivingListRequest&,
        QueryChatArchivingListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryClueInfoListOutcome WavClient::QueryClueInfoList(const QueryClueInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryClueInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryClueInfoListResponse rsp = QueryClueInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryClueInfoListOutcome(rsp);
        else
            return QueryClueInfoListOutcome(o.GetError());
    }
    else
    {
        return QueryClueInfoListOutcome(outcome.GetError());
    }
}

void WavClient::QueryClueInfoListAsync(const QueryClueInfoListRequest& request, const QueryClueInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryClueInfoListRequest&;
    using Resp = QueryClueInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryClueInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryClueInfoListOutcomeCallable WavClient::QueryClueInfoListCallable(const QueryClueInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryClueInfoListOutcome>>();
    QueryClueInfoListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryClueInfoListRequest&,
        QueryClueInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryCrmStatisticsOutcome WavClient::QueryCrmStatistics(const QueryCrmStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCrmStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCrmStatisticsResponse rsp = QueryCrmStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCrmStatisticsOutcome(rsp);
        else
            return QueryCrmStatisticsOutcome(o.GetError());
    }
    else
    {
        return QueryCrmStatisticsOutcome(outcome.GetError());
    }
}

void WavClient::QueryCrmStatisticsAsync(const QueryCrmStatisticsRequest& request, const QueryCrmStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCrmStatisticsRequest&;
    using Resp = QueryCrmStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCrmStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryCrmStatisticsOutcomeCallable WavClient::QueryCrmStatisticsCallable(const QueryCrmStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCrmStatisticsOutcome>>();
    QueryCrmStatisticsAsync(
    request,
    [prom](
        const WavClient*,
        const QueryCrmStatisticsRequest&,
        QueryCrmStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryCustomerEventDetailStatisticsOutcome WavClient::QueryCustomerEventDetailStatistics(const QueryCustomerEventDetailStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomerEventDetailStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomerEventDetailStatisticsResponse rsp = QueryCustomerEventDetailStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomerEventDetailStatisticsOutcome(rsp);
        else
            return QueryCustomerEventDetailStatisticsOutcome(o.GetError());
    }
    else
    {
        return QueryCustomerEventDetailStatisticsOutcome(outcome.GetError());
    }
}

void WavClient::QueryCustomerEventDetailStatisticsAsync(const QueryCustomerEventDetailStatisticsRequest& request, const QueryCustomerEventDetailStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCustomerEventDetailStatisticsRequest&;
    using Resp = QueryCustomerEventDetailStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCustomerEventDetailStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryCustomerEventDetailStatisticsOutcomeCallable WavClient::QueryCustomerEventDetailStatisticsCallable(const QueryCustomerEventDetailStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCustomerEventDetailStatisticsOutcome>>();
    QueryCustomerEventDetailStatisticsAsync(
    request,
    [prom](
        const WavClient*,
        const QueryCustomerEventDetailStatisticsRequest&,
        QueryCustomerEventDetailStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryCustomerProfileListOutcome WavClient::QueryCustomerProfileList(const QueryCustomerProfileListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomerProfileList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomerProfileListResponse rsp = QueryCustomerProfileListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomerProfileListOutcome(rsp);
        else
            return QueryCustomerProfileListOutcome(o.GetError());
    }
    else
    {
        return QueryCustomerProfileListOutcome(outcome.GetError());
    }
}

void WavClient::QueryCustomerProfileListAsync(const QueryCustomerProfileListRequest& request, const QueryCustomerProfileListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCustomerProfileListRequest&;
    using Resp = QueryCustomerProfileListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCustomerProfileList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryCustomerProfileListOutcomeCallable WavClient::QueryCustomerProfileListCallable(const QueryCustomerProfileListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCustomerProfileListOutcome>>();
    QueryCustomerProfileListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryCustomerProfileListRequest&,
        QueryCustomerProfileListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryDealerInfoListOutcome WavClient::QueryDealerInfoList(const QueryDealerInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDealerInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDealerInfoListResponse rsp = QueryDealerInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDealerInfoListOutcome(rsp);
        else
            return QueryDealerInfoListOutcome(o.GetError());
    }
    else
    {
        return QueryDealerInfoListOutcome(outcome.GetError());
    }
}

void WavClient::QueryDealerInfoListAsync(const QueryDealerInfoListRequest& request, const QueryDealerInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDealerInfoListRequest&;
    using Resp = QueryDealerInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDealerInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryDealerInfoListOutcomeCallable WavClient::QueryDealerInfoListCallable(const QueryDealerInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDealerInfoListOutcome>>();
    QueryDealerInfoListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryDealerInfoListRequest&,
        QueryDealerInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryExternalContactDetailOutcome WavClient::QueryExternalContactDetail(const QueryExternalContactDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalContactDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalContactDetailResponse rsp = QueryExternalContactDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalContactDetailOutcome(rsp);
        else
            return QueryExternalContactDetailOutcome(o.GetError());
    }
    else
    {
        return QueryExternalContactDetailOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalContactDetailAsync(const QueryExternalContactDetailRequest& request, const QueryExternalContactDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExternalContactDetailRequest&;
    using Resp = QueryExternalContactDetailResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExternalContactDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryExternalContactDetailOutcomeCallable WavClient::QueryExternalContactDetailCallable(const QueryExternalContactDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExternalContactDetailOutcome>>();
    QueryExternalContactDetailAsync(
    request,
    [prom](
        const WavClient*,
        const QueryExternalContactDetailRequest&,
        QueryExternalContactDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryExternalContactDetailByDateOutcome WavClient::QueryExternalContactDetailByDate(const QueryExternalContactDetailByDateRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalContactDetailByDate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalContactDetailByDateResponse rsp = QueryExternalContactDetailByDateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalContactDetailByDateOutcome(rsp);
        else
            return QueryExternalContactDetailByDateOutcome(o.GetError());
    }
    else
    {
        return QueryExternalContactDetailByDateOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalContactDetailByDateAsync(const QueryExternalContactDetailByDateRequest& request, const QueryExternalContactDetailByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExternalContactDetailByDateRequest&;
    using Resp = QueryExternalContactDetailByDateResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExternalContactDetailByDate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryExternalContactDetailByDateOutcomeCallable WavClient::QueryExternalContactDetailByDateCallable(const QueryExternalContactDetailByDateRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExternalContactDetailByDateOutcome>>();
    QueryExternalContactDetailByDateAsync(
    request,
    [prom](
        const WavClient*,
        const QueryExternalContactDetailByDateRequest&,
        QueryExternalContactDetailByDateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryExternalContactListOutcome WavClient::QueryExternalContactList(const QueryExternalContactListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalContactList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalContactListResponse rsp = QueryExternalContactListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalContactListOutcome(rsp);
        else
            return QueryExternalContactListOutcome(o.GetError());
    }
    else
    {
        return QueryExternalContactListOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalContactListAsync(const QueryExternalContactListRequest& request, const QueryExternalContactListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExternalContactListRequest&;
    using Resp = QueryExternalContactListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExternalContactList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryExternalContactListOutcomeCallable WavClient::QueryExternalContactListCallable(const QueryExternalContactListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExternalContactListOutcome>>();
    QueryExternalContactListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryExternalContactListRequest&,
        QueryExternalContactListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryExternalUserEventListOutcome WavClient::QueryExternalUserEventList(const QueryExternalUserEventListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalUserEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalUserEventListResponse rsp = QueryExternalUserEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalUserEventListOutcome(rsp);
        else
            return QueryExternalUserEventListOutcome(o.GetError());
    }
    else
    {
        return QueryExternalUserEventListOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalUserEventListAsync(const QueryExternalUserEventListRequest& request, const QueryExternalUserEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExternalUserEventListRequest&;
    using Resp = QueryExternalUserEventListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExternalUserEventList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryExternalUserEventListOutcomeCallable WavClient::QueryExternalUserEventListCallable(const QueryExternalUserEventListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExternalUserEventListOutcome>>();
    QueryExternalUserEventListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryExternalUserEventListRequest&,
        QueryExternalUserEventListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryExternalUserMappingInfoOutcome WavClient::QueryExternalUserMappingInfo(const QueryExternalUserMappingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExternalUserMappingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExternalUserMappingInfoResponse rsp = QueryExternalUserMappingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExternalUserMappingInfoOutcome(rsp);
        else
            return QueryExternalUserMappingInfoOutcome(o.GetError());
    }
    else
    {
        return QueryExternalUserMappingInfoOutcome(outcome.GetError());
    }
}

void WavClient::QueryExternalUserMappingInfoAsync(const QueryExternalUserMappingInfoRequest& request, const QueryExternalUserMappingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExternalUserMappingInfoRequest&;
    using Resp = QueryExternalUserMappingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExternalUserMappingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryExternalUserMappingInfoOutcomeCallable WavClient::QueryExternalUserMappingInfoCallable(const QueryExternalUserMappingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExternalUserMappingInfoOutcome>>();
    QueryExternalUserMappingInfoAsync(
    request,
    [prom](
        const WavClient*,
        const QueryExternalUserMappingInfoRequest&,
        QueryExternalUserMappingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryFollowListOutcome WavClient::QueryFollowList(const QueryFollowListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFollowList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFollowListResponse rsp = QueryFollowListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFollowListOutcome(rsp);
        else
            return QueryFollowListOutcome(o.GetError());
    }
    else
    {
        return QueryFollowListOutcome(outcome.GetError());
    }
}

void WavClient::QueryFollowListAsync(const QueryFollowListRequest& request, const QueryFollowListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFollowListRequest&;
    using Resp = QueryFollowListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFollowList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryFollowListOutcomeCallable WavClient::QueryFollowListCallable(const QueryFollowListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFollowListOutcome>>();
    QueryFollowListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryFollowListRequest&,
        QueryFollowListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryLicenseInfoOutcome WavClient::QueryLicenseInfo(const QueryLicenseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryLicenseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryLicenseInfoResponse rsp = QueryLicenseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryLicenseInfoOutcome(rsp);
        else
            return QueryLicenseInfoOutcome(o.GetError());
    }
    else
    {
        return QueryLicenseInfoOutcome(outcome.GetError());
    }
}

void WavClient::QueryLicenseInfoAsync(const QueryLicenseInfoRequest& request, const QueryLicenseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryLicenseInfoRequest&;
    using Resp = QueryLicenseInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryLicenseInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryLicenseInfoOutcomeCallable WavClient::QueryLicenseInfoCallable(const QueryLicenseInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryLicenseInfoOutcome>>();
    QueryLicenseInfoAsync(
    request,
    [prom](
        const WavClient*,
        const QueryLicenseInfoRequest&,
        QueryLicenseInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryMaterialListOutcome WavClient::QueryMaterialList(const QueryMaterialListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMaterialList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMaterialListResponse rsp = QueryMaterialListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMaterialListOutcome(rsp);
        else
            return QueryMaterialListOutcome(o.GetError());
    }
    else
    {
        return QueryMaterialListOutcome(outcome.GetError());
    }
}

void WavClient::QueryMaterialListAsync(const QueryMaterialListRequest& request, const QueryMaterialListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMaterialListRequest&;
    using Resp = QueryMaterialListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMaterialList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryMaterialListOutcomeCallable WavClient::QueryMaterialListCallable(const QueryMaterialListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMaterialListOutcome>>();
    QueryMaterialListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryMaterialListRequest&,
        QueryMaterialListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryMiniAppCodeListOutcome WavClient::QueryMiniAppCodeList(const QueryMiniAppCodeListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMiniAppCodeList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMiniAppCodeListResponse rsp = QueryMiniAppCodeListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMiniAppCodeListOutcome(rsp);
        else
            return QueryMiniAppCodeListOutcome(o.GetError());
    }
    else
    {
        return QueryMiniAppCodeListOutcome(outcome.GetError());
    }
}

void WavClient::QueryMiniAppCodeListAsync(const QueryMiniAppCodeListRequest& request, const QueryMiniAppCodeListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMiniAppCodeListRequest&;
    using Resp = QueryMiniAppCodeListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMiniAppCodeList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryMiniAppCodeListOutcomeCallable WavClient::QueryMiniAppCodeListCallable(const QueryMiniAppCodeListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMiniAppCodeListOutcome>>();
    QueryMiniAppCodeListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryMiniAppCodeListRequest&,
        QueryMiniAppCodeListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryStaffEventDetailStatisticsOutcome WavClient::QueryStaffEventDetailStatistics(const QueryStaffEventDetailStatisticsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryStaffEventDetailStatistics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryStaffEventDetailStatisticsResponse rsp = QueryStaffEventDetailStatisticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryStaffEventDetailStatisticsOutcome(rsp);
        else
            return QueryStaffEventDetailStatisticsOutcome(o.GetError());
    }
    else
    {
        return QueryStaffEventDetailStatisticsOutcome(outcome.GetError());
    }
}

void WavClient::QueryStaffEventDetailStatisticsAsync(const QueryStaffEventDetailStatisticsRequest& request, const QueryStaffEventDetailStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryStaffEventDetailStatisticsRequest&;
    using Resp = QueryStaffEventDetailStatisticsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryStaffEventDetailStatistics", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryStaffEventDetailStatisticsOutcomeCallable WavClient::QueryStaffEventDetailStatisticsCallable(const QueryStaffEventDetailStatisticsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryStaffEventDetailStatisticsOutcome>>();
    QueryStaffEventDetailStatisticsAsync(
    request,
    [prom](
        const WavClient*,
        const QueryStaffEventDetailStatisticsRequest&,
        QueryStaffEventDetailStatisticsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryUserInfoListOutcome WavClient::QueryUserInfoList(const QueryUserInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryUserInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryUserInfoListResponse rsp = QueryUserInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryUserInfoListOutcome(rsp);
        else
            return QueryUserInfoListOutcome(o.GetError());
    }
    else
    {
        return QueryUserInfoListOutcome(outcome.GetError());
    }
}

void WavClient::QueryUserInfoListAsync(const QueryUserInfoListRequest& request, const QueryUserInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryUserInfoListRequest&;
    using Resp = QueryUserInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryUserInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryUserInfoListOutcomeCallable WavClient::QueryUserInfoListCallable(const QueryUserInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryUserInfoListOutcome>>();
    QueryUserInfoListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryUserInfoListRequest&,
        QueryUserInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

WavClient::QueryVehicleInfoListOutcome WavClient::QueryVehicleInfoList(const QueryVehicleInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVehicleInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVehicleInfoListResponse rsp = QueryVehicleInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVehicleInfoListOutcome(rsp);
        else
            return QueryVehicleInfoListOutcome(o.GetError());
    }
    else
    {
        return QueryVehicleInfoListOutcome(outcome.GetError());
    }
}

void WavClient::QueryVehicleInfoListAsync(const QueryVehicleInfoListRequest& request, const QueryVehicleInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryVehicleInfoListRequest&;
    using Resp = QueryVehicleInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryVehicleInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

WavClient::QueryVehicleInfoListOutcomeCallable WavClient::QueryVehicleInfoListCallable(const QueryVehicleInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryVehicleInfoListOutcome>>();
    QueryVehicleInfoListAsync(
    request,
    [prom](
        const WavClient*,
        const QueryVehicleInfoListRequest&,
        QueryVehicleInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

