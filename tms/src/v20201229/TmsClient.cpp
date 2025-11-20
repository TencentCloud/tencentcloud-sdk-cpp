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

#include <tencentcloud/tms/v20201229/TmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tms::V20201229;
using namespace TencentCloud::Tms::V20201229::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-12-29";
    const string ENDPOINT = "tms.tencentcloudapi.com";
}

TmsClient::TmsClient(const Credential &credential, const string &region) :
    TmsClient(credential, region, ClientProfile())
{
}

TmsClient::TmsClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TmsClient::CreateFinancialLLMTaskOutcome TmsClient::CreateFinancialLLMTask(const CreateFinancialLLMTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFinancialLLMTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFinancialLLMTaskResponse rsp = CreateFinancialLLMTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFinancialLLMTaskOutcome(rsp);
        else
            return CreateFinancialLLMTaskOutcome(o.GetError());
    }
    else
    {
        return CreateFinancialLLMTaskOutcome(outcome.GetError());
    }
}

void TmsClient::CreateFinancialLLMTaskAsync(const CreateFinancialLLMTaskRequest& request, const CreateFinancialLLMTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFinancialLLMTaskRequest&;
    using Resp = CreateFinancialLLMTaskResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFinancialLLMTask", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmsClient::CreateFinancialLLMTaskOutcomeCallable TmsClient::CreateFinancialLLMTaskCallable(const CreateFinancialLLMTaskRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFinancialLLMTaskOutcome>>();
    CreateFinancialLLMTaskAsync(
    request,
    [prom](
        const TmsClient*,
        const CreateFinancialLLMTaskRequest&,
        CreateFinancialLLMTaskOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmsClient::GetFinancialLLMTaskResultOutcome TmsClient::GetFinancialLLMTaskResult(const GetFinancialLLMTaskResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetFinancialLLMTaskResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetFinancialLLMTaskResultResponse rsp = GetFinancialLLMTaskResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetFinancialLLMTaskResultOutcome(rsp);
        else
            return GetFinancialLLMTaskResultOutcome(o.GetError());
    }
    else
    {
        return GetFinancialLLMTaskResultOutcome(outcome.GetError());
    }
}

void TmsClient::GetFinancialLLMTaskResultAsync(const GetFinancialLLMTaskResultRequest& request, const GetFinancialLLMTaskResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetFinancialLLMTaskResultRequest&;
    using Resp = GetFinancialLLMTaskResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetFinancialLLMTaskResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmsClient::GetFinancialLLMTaskResultOutcomeCallable TmsClient::GetFinancialLLMTaskResultCallable(const GetFinancialLLMTaskResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetFinancialLLMTaskResultOutcome>>();
    GetFinancialLLMTaskResultAsync(
    request,
    [prom](
        const TmsClient*,
        const GetFinancialLLMTaskResultRequest&,
        GetFinancialLLMTaskResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmsClient::TextModerationOutcome TmsClient::TextModeration(const TextModerationRequest &request)
{
    auto outcome = MakeRequest(request, "TextModeration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TextModerationResponse rsp = TextModerationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TextModerationOutcome(rsp);
        else
            return TextModerationOutcome(o.GetError());
    }
    else
    {
        return TextModerationOutcome(outcome.GetError());
    }
}

void TmsClient::TextModerationAsync(const TextModerationRequest& request, const TextModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TextModerationRequest&;
    using Resp = TextModerationResponse;

    DoRequestAsync<Req, Resp>(
        "TextModeration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmsClient::TextModerationOutcomeCallable TmsClient::TextModerationCallable(const TextModerationRequest &request)
{
    const auto prom = std::make_shared<std::promise<TextModerationOutcome>>();
    TextModerationAsync(
    request,
    [prom](
        const TmsClient*,
        const TextModerationRequest&,
        TextModerationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

