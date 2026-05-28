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

#include <tencentcloud/ig/v20210518/IgClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ig::V20210518;
using namespace TencentCloud::Ig::V20210518::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-18";
    const string ENDPOINT = "ig.tencentcloudapi.com";
}

IgClient::IgClient(const Credential &credential, const string &region) :
    IgClient(credential, region, ClientProfile())
{
}

IgClient::IgClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IgClient::DescribeIgOrderListOutcome IgClient::DescribeIgOrderList(const DescribeIgOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIgOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIgOrderListResponse rsp = DescribeIgOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIgOrderListOutcome(rsp);
        else
            return DescribeIgOrderListOutcome(o.GetError());
    }
    else
    {
        return DescribeIgOrderListOutcome(outcome.GetError());
    }
}

void IgClient::DescribeIgOrderListAsync(const DescribeIgOrderListRequest& request, const DescribeIgOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeIgOrderListRequest&;
    using Resp = DescribeIgOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeIgOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::DescribeIgOrderListOutcomeCallable IgClient::DescribeIgOrderListCallable(const DescribeIgOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeIgOrderListOutcome>>();
    DescribeIgOrderListAsync(
    request,
    [prom](
        const IgClient*,
        const DescribeIgOrderListRequest&,
        DescribeIgOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgClient::GetLLMDiagnosisDrugOutcome IgClient::GetLLMDiagnosisDrug(const GetLLMDiagnosisDrugRequest &request)
{
    auto outcome = MakeRequest(request, "GetLLMDiagnosisDrug");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLLMDiagnosisDrugResponse rsp = GetLLMDiagnosisDrugResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLLMDiagnosisDrugOutcome(rsp);
        else
            return GetLLMDiagnosisDrugOutcome(o.GetError());
    }
    else
    {
        return GetLLMDiagnosisDrugOutcome(outcome.GetError());
    }
}

void IgClient::GetLLMDiagnosisDrugAsync(const GetLLMDiagnosisDrugRequest& request, const GetLLMDiagnosisDrugAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLLMDiagnosisDrugRequest&;
    using Resp = GetLLMDiagnosisDrugResponse;

    DoRequestAsync<Req, Resp>(
        "GetLLMDiagnosisDrug", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::GetLLMDiagnosisDrugOutcomeCallable IgClient::GetLLMDiagnosisDrugCallable(const GetLLMDiagnosisDrugRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLLMDiagnosisDrugOutcome>>();
    GetLLMDiagnosisDrugAsync(
    request,
    [prom](
        const IgClient*,
        const GetLLMDiagnosisDrugRequest&,
        GetLLMDiagnosisDrugOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgClient::GetLLMDiagnosisDrugChatOutcome IgClient::GetLLMDiagnosisDrugChat(const GetLLMDiagnosisDrugChatRequest &request)
{
    auto outcome = MakeRequest(request, "GetLLMDiagnosisDrugChat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLLMDiagnosisDrugChatResponse rsp = GetLLMDiagnosisDrugChatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLLMDiagnosisDrugChatOutcome(rsp);
        else
            return GetLLMDiagnosisDrugChatOutcome(o.GetError());
    }
    else
    {
        return GetLLMDiagnosisDrugChatOutcome(outcome.GetError());
    }
}

void IgClient::GetLLMDiagnosisDrugChatAsync(const GetLLMDiagnosisDrugChatRequest& request, const GetLLMDiagnosisDrugChatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLLMDiagnosisDrugChatRequest&;
    using Resp = GetLLMDiagnosisDrugChatResponse;

    DoRequestAsync<Req, Resp>(
        "GetLLMDiagnosisDrugChat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::GetLLMDiagnosisDrugChatOutcomeCallable IgClient::GetLLMDiagnosisDrugChatCallable(const GetLLMDiagnosisDrugChatRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLLMDiagnosisDrugChatOutcome>>();
    GetLLMDiagnosisDrugChatAsync(
    request,
    [prom](
        const IgClient*,
        const GetLLMDiagnosisDrugChatRequest&,
        GetLLMDiagnosisDrugChatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgClient::GetLLMDiagnosisHealthOutcome IgClient::GetLLMDiagnosisHealth(const GetLLMDiagnosisHealthRequest &request)
{
    auto outcome = MakeRequest(request, "GetLLMDiagnosisHealth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLLMDiagnosisHealthResponse rsp = GetLLMDiagnosisHealthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLLMDiagnosisHealthOutcome(rsp);
        else
            return GetLLMDiagnosisHealthOutcome(o.GetError());
    }
    else
    {
        return GetLLMDiagnosisHealthOutcome(outcome.GetError());
    }
}

void IgClient::GetLLMDiagnosisHealthAsync(const GetLLMDiagnosisHealthRequest& request, const GetLLMDiagnosisHealthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLLMDiagnosisHealthRequest&;
    using Resp = GetLLMDiagnosisHealthResponse;

    DoRequestAsync<Req, Resp>(
        "GetLLMDiagnosisHealth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::GetLLMDiagnosisHealthOutcomeCallable IgClient::GetLLMDiagnosisHealthCallable(const GetLLMDiagnosisHealthRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLLMDiagnosisHealthOutcome>>();
    GetLLMDiagnosisHealthAsync(
    request,
    [prom](
        const IgClient*,
        const GetLLMDiagnosisHealthRequest&,
        GetLLMDiagnosisHealthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgClient::GetLLMReportInterpretationOutcome IgClient::GetLLMReportInterpretation(const GetLLMReportInterpretationRequest &request)
{
    auto outcome = MakeRequest(request, "GetLLMReportInterpretation");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLLMReportInterpretationResponse rsp = GetLLMReportInterpretationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLLMReportInterpretationOutcome(rsp);
        else
            return GetLLMReportInterpretationOutcome(o.GetError());
    }
    else
    {
        return GetLLMReportInterpretationOutcome(outcome.GetError());
    }
}

void IgClient::GetLLMReportInterpretationAsync(const GetLLMReportInterpretationRequest& request, const GetLLMReportInterpretationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLLMReportInterpretationRequest&;
    using Resp = GetLLMReportInterpretationResponse;

    DoRequestAsync<Req, Resp>(
        "GetLLMReportInterpretation", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::GetLLMReportInterpretationOutcomeCallable IgClient::GetLLMReportInterpretationCallable(const GetLLMReportInterpretationRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLLMReportInterpretationOutcome>>();
    GetLLMReportInterpretationAsync(
    request,
    [prom](
        const IgClient*,
        const GetLLMReportInterpretationRequest&,
        GetLLMReportInterpretationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

IgClient::QueryDrugInstructionsOutcome IgClient::QueryDrugInstructions(const QueryDrugInstructionsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDrugInstructions");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDrugInstructionsResponse rsp = QueryDrugInstructionsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDrugInstructionsOutcome(rsp);
        else
            return QueryDrugInstructionsOutcome(o.GetError());
    }
    else
    {
        return QueryDrugInstructionsOutcome(outcome.GetError());
    }
}

void IgClient::QueryDrugInstructionsAsync(const QueryDrugInstructionsRequest& request, const QueryDrugInstructionsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDrugInstructionsRequest&;
    using Resp = QueryDrugInstructionsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDrugInstructions", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

IgClient::QueryDrugInstructionsOutcomeCallable IgClient::QueryDrugInstructionsCallable(const QueryDrugInstructionsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDrugInstructionsOutcome>>();
    QueryDrugInstructionsAsync(
    request,
    [prom](
        const IgClient*,
        const QueryDrugInstructionsRequest&,
        QueryDrugInstructionsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

