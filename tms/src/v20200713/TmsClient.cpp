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

#include <tencentcloud/tms/v20200713/TmsClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tms::V20200713;
using namespace TencentCloud::Tms::V20200713::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-07-13";
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


TmsClient::AccountTipoffAccessOutcome TmsClient::AccountTipoffAccess(const AccountTipoffAccessRequest &request)
{
    auto outcome = MakeRequest(request, "AccountTipoffAccess");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AccountTipoffAccessResponse rsp = AccountTipoffAccessResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AccountTipoffAccessOutcome(rsp);
        else
            return AccountTipoffAccessOutcome(o.GetError());
    }
    else
    {
        return AccountTipoffAccessOutcome(outcome.GetError());
    }
}

void TmsClient::AccountTipoffAccessAsync(const AccountTipoffAccessRequest& request, const AccountTipoffAccessAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AccountTipoffAccessRequest&;
    using Resp = AccountTipoffAccessResponse;

    DoRequestAsync<Req, Resp>(
        "AccountTipoffAccess", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmsClient::AccountTipoffAccessOutcomeCallable TmsClient::AccountTipoffAccessCallable(const AccountTipoffAccessRequest &request)
{
    const auto prom = std::make_shared<std::promise<AccountTipoffAccessOutcome>>();
    AccountTipoffAccessAsync(
    request,
    [prom](
        const TmsClient*,
        const AccountTipoffAccessRequest&,
        AccountTipoffAccessOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmsClient::DescribeTextLibOutcome TmsClient::DescribeTextLib(const DescribeTextLibRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTextLib");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTextLibResponse rsp = DescribeTextLibResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTextLibOutcome(rsp);
        else
            return DescribeTextLibOutcome(o.GetError());
    }
    else
    {
        return DescribeTextLibOutcome(outcome.GetError());
    }
}

void TmsClient::DescribeTextLibAsync(const DescribeTextLibRequest& request, const DescribeTextLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTextLibRequest&;
    using Resp = DescribeTextLibResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTextLib", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmsClient::DescribeTextLibOutcomeCallable TmsClient::DescribeTextLibCallable(const DescribeTextLibRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTextLibOutcome>>();
    DescribeTextLibAsync(
    request,
    [prom](
        const TmsClient*,
        const DescribeTextLibRequest&,
        DescribeTextLibOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TmsClient::DescribeTextStatOutcome TmsClient::DescribeTextStat(const DescribeTextStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTextStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTextStatResponse rsp = DescribeTextStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTextStatOutcome(rsp);
        else
            return DescribeTextStatOutcome(o.GetError());
    }
    else
    {
        return DescribeTextStatOutcome(outcome.GetError());
    }
}

void TmsClient::DescribeTextStatAsync(const DescribeTextStatRequest& request, const DescribeTextStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeTextStatRequest&;
    using Resp = DescribeTextStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeTextStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TmsClient::DescribeTextStatOutcomeCallable TmsClient::DescribeTextStatCallable(const DescribeTextStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeTextStatOutcome>>();
    DescribeTextStatAsync(
    request,
    [prom](
        const TmsClient*,
        const DescribeTextStatRequest&,
        DescribeTextStatOutcome resp,
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

