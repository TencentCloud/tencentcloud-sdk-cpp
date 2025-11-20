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

#include <tencentcloud/ssa/v20180608/SsaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ssa::V20180608;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-08";
    const string ENDPOINT = "ssa.tencentcloudapi.com";
}

SsaClient::SsaClient(const Credential &credential, const string &region) :
    SsaClient(credential, region, ClientProfile())
{
}

SsaClient::SsaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SsaClient::DescribeAlarmStatOutcome SsaClient::DescribeAlarmStat(const DescribeAlarmStatRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAlarmStat");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAlarmStatResponse rsp = DescribeAlarmStatResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAlarmStatOutcome(rsp);
        else
            return DescribeAlarmStatOutcome(o.GetError());
    }
    else
    {
        return DescribeAlarmStatOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAlarmStatAsync(const DescribeAlarmStatRequest& request, const DescribeAlarmStatAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAlarmStatRequest&;
    using Resp = DescribeAlarmStatResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAlarmStat", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeAlarmStatOutcomeCallable SsaClient::DescribeAlarmStatCallable(const DescribeAlarmStatRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAlarmStatOutcome>>();
    DescribeAlarmStatAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeAlarmStatRequest&,
        DescribeAlarmStatOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeAssetDetailOutcome SsaClient::DescribeAssetDetail(const DescribeAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDetailResponse rsp = DescribeAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDetailOutcome(rsp);
        else
            return DescribeAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAssetDetailAsync(const DescribeAssetDetailRequest& request, const DescribeAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDetailRequest&;
    using Resp = DescribeAssetDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeAssetDetailOutcomeCallable SsaClient::DescribeAssetDetailCallable(const DescribeAssetDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDetailOutcome>>();
    DescribeAssetDetailAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeAssetDetailRequest&,
        DescribeAssetDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeAssetDetailListOutcome SsaClient::DescribeAssetDetailList(const DescribeAssetDetailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDetailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDetailListResponse rsp = DescribeAssetDetailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDetailListOutcome(rsp);
        else
            return DescribeAssetDetailListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDetailListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAssetDetailListAsync(const DescribeAssetDetailListRequest& request, const DescribeAssetDetailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetDetailListRequest&;
    using Resp = DescribeAssetDetailListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetDetailList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeAssetDetailListOutcomeCallable SsaClient::DescribeAssetDetailListCallable(const DescribeAssetDetailListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetDetailListOutcome>>();
    DescribeAssetDetailListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeAssetDetailListRequest&,
        DescribeAssetDetailListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeAssetListOutcome SsaClient::DescribeAssetList(const DescribeAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetListResponse rsp = DescribeAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetListOutcome(rsp);
        else
            return DescribeAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAssetListAsync(const DescribeAssetListRequest& request, const DescribeAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeAssetListRequest&;
    using Resp = DescribeAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeAssetListOutcomeCallable SsaClient::DescribeAssetListCallable(const DescribeAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeAssetListOutcome>>();
    DescribeAssetListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeAssetListRequest&,
        DescribeAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeCheckConfigAssetListOutcome SsaClient::DescribeCheckConfigAssetList(const DescribeCheckConfigAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckConfigAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckConfigAssetListResponse rsp = DescribeCheckConfigAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckConfigAssetListOutcome(rsp);
        else
            return DescribeCheckConfigAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckConfigAssetListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeCheckConfigAssetListAsync(const DescribeCheckConfigAssetListRequest& request, const DescribeCheckConfigAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCheckConfigAssetListRequest&;
    using Resp = DescribeCheckConfigAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCheckConfigAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeCheckConfigAssetListOutcomeCallable SsaClient::DescribeCheckConfigAssetListCallable(const DescribeCheckConfigAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCheckConfigAssetListOutcome>>();
    DescribeCheckConfigAssetListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeCheckConfigAssetListRequest&,
        DescribeCheckConfigAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeCheckConfigDetailOutcome SsaClient::DescribeCheckConfigDetail(const DescribeCheckConfigDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckConfigDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckConfigDetailResponse rsp = DescribeCheckConfigDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckConfigDetailOutcome(rsp);
        else
            return DescribeCheckConfigDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckConfigDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeCheckConfigDetailAsync(const DescribeCheckConfigDetailRequest& request, const DescribeCheckConfigDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeCheckConfigDetailRequest&;
    using Resp = DescribeCheckConfigDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeCheckConfigDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeCheckConfigDetailOutcomeCallable SsaClient::DescribeCheckConfigDetailCallable(const DescribeCheckConfigDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeCheckConfigDetailOutcome>>();
    DescribeCheckConfigDetailAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeCheckConfigDetailRequest&,
        DescribeCheckConfigDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeComplianceAssetListOutcome SsaClient::DescribeComplianceAssetList(const DescribeComplianceAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceAssetListResponse rsp = DescribeComplianceAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceAssetListOutcome(rsp);
        else
            return DescribeComplianceAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceAssetListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeComplianceAssetListAsync(const DescribeComplianceAssetListRequest& request, const DescribeComplianceAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceAssetListRequest&;
    using Resp = DescribeComplianceAssetListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceAssetList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeComplianceAssetListOutcomeCallable SsaClient::DescribeComplianceAssetListCallable(const DescribeComplianceAssetListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceAssetListOutcome>>();
    DescribeComplianceAssetListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeComplianceAssetListRequest&,
        DescribeComplianceAssetListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeComplianceDetailOutcome SsaClient::DescribeComplianceDetail(const DescribeComplianceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceDetailResponse rsp = DescribeComplianceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceDetailOutcome(rsp);
        else
            return DescribeComplianceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeComplianceDetailAsync(const DescribeComplianceDetailRequest& request, const DescribeComplianceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceDetailRequest&;
    using Resp = DescribeComplianceDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeComplianceDetailOutcomeCallable SsaClient::DescribeComplianceDetailCallable(const DescribeComplianceDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceDetailOutcome>>();
    DescribeComplianceDetailAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeComplianceDetailRequest&,
        DescribeComplianceDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeComplianceListOutcome SsaClient::DescribeComplianceList(const DescribeComplianceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceListResponse rsp = DescribeComplianceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceListOutcome(rsp);
        else
            return DescribeComplianceListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeComplianceListAsync(const DescribeComplianceListRequest& request, const DescribeComplianceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeComplianceListRequest&;
    using Resp = DescribeComplianceListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeComplianceList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeComplianceListOutcomeCallable SsaClient::DescribeComplianceListCallable(const DescribeComplianceListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeComplianceListOutcome>>();
    DescribeComplianceListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeComplianceListRequest&,
        DescribeComplianceListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeConfigListOutcome SsaClient::DescribeConfigList(const DescribeConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigListResponse rsp = DescribeConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigListOutcome(rsp);
        else
            return DescribeConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeConfigListAsync(const DescribeConfigListRequest& request, const DescribeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeConfigListRequest&;
    using Resp = DescribeConfigListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeConfigList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeConfigListOutcomeCallable SsaClient::DescribeConfigListCallable(const DescribeConfigListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeConfigListOutcome>>();
    DescribeConfigListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeConfigListRequest&,
        DescribeConfigListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeDomainListOutcome SsaClient::DescribeDomainList(const DescribeDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainListResponse rsp = DescribeDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainListOutcome(rsp);
        else
            return DescribeDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeDomainListRequest&;
    using Resp = DescribeDomainListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeDomainList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeDomainListOutcomeCallable SsaClient::DescribeDomainListCallable(const DescribeDomainListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeDomainListOutcome>>();
    DescribeDomainListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeDomainListRequest&,
        DescribeDomainListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeEventDetailOutcome SsaClient::DescribeEventDetail(const DescribeEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventDetailResponse rsp = DescribeEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventDetailOutcome(rsp);
        else
            return DescribeEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeEventDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeEventDetailAsync(const DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeEventDetailRequest&;
    using Resp = DescribeEventDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeEventDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeEventDetailOutcomeCallable SsaClient::DescribeEventDetailCallable(const DescribeEventDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeEventDetailOutcome>>();
    DescribeEventDetailAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeEventDetailRequest&,
        DescribeEventDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeLeakDetectionListOutcome SsaClient::DescribeLeakDetectionList(const DescribeLeakDetectionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakDetectionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakDetectionListResponse rsp = DescribeLeakDetectionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakDetectionListOutcome(rsp);
        else
            return DescribeLeakDetectionListOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakDetectionListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeLeakDetectionListAsync(const DescribeLeakDetectionListRequest& request, const DescribeLeakDetectionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeLeakDetectionListRequest&;
    using Resp = DescribeLeakDetectionListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeLeakDetectionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeLeakDetectionListOutcomeCallable SsaClient::DescribeLeakDetectionListCallable(const DescribeLeakDetectionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeLeakDetectionListOutcome>>();
    DescribeLeakDetectionListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeLeakDetectionListRequest&,
        DescribeLeakDetectionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeMappingResultsOutcome SsaClient::DescribeMappingResults(const DescribeMappingResultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMappingResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMappingResultsResponse rsp = DescribeMappingResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMappingResultsOutcome(rsp);
        else
            return DescribeMappingResultsOutcome(o.GetError());
    }
    else
    {
        return DescribeMappingResultsOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeMappingResultsAsync(const DescribeMappingResultsRequest& request, const DescribeMappingResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeMappingResultsRequest&;
    using Resp = DescribeMappingResultsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeMappingResults", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeMappingResultsOutcomeCallable SsaClient::DescribeMappingResultsCallable(const DescribeMappingResultsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeMappingResultsOutcome>>();
    DescribeMappingResultsAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeMappingResultsRequest&,
        DescribeMappingResultsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeSocAlertDetailsOutcome SsaClient::DescribeSocAlertDetails(const DescribeSocAlertDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocAlertDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocAlertDetailsResponse rsp = DescribeSocAlertDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocAlertDetailsOutcome(rsp);
        else
            return DescribeSocAlertDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeSocAlertDetailsOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocAlertDetailsAsync(const DescribeSocAlertDetailsRequest& request, const DescribeSocAlertDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSocAlertDetailsRequest&;
    using Resp = DescribeSocAlertDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSocAlertDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeSocAlertDetailsOutcomeCallable SsaClient::DescribeSocAlertDetailsCallable(const DescribeSocAlertDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSocAlertDetailsOutcome>>();
    DescribeSocAlertDetailsAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeSocAlertDetailsRequest&,
        DescribeSocAlertDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeSocAlertListOutcome SsaClient::DescribeSocAlertList(const DescribeSocAlertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocAlertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocAlertListResponse rsp = DescribeSocAlertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocAlertListOutcome(rsp);
        else
            return DescribeSocAlertListOutcome(o.GetError());
    }
    else
    {
        return DescribeSocAlertListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocAlertListAsync(const DescribeSocAlertListRequest& request, const DescribeSocAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSocAlertListRequest&;
    using Resp = DescribeSocAlertListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSocAlertList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeSocAlertListOutcomeCallable SsaClient::DescribeSocAlertListCallable(const DescribeSocAlertListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSocAlertListOutcome>>();
    DescribeSocAlertListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeSocAlertListRequest&,
        DescribeSocAlertListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeSocCheckItemListOutcome SsaClient::DescribeSocCheckItemList(const DescribeSocCheckItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocCheckItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocCheckItemListResponse rsp = DescribeSocCheckItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocCheckItemListOutcome(rsp);
        else
            return DescribeSocCheckItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeSocCheckItemListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocCheckItemListAsync(const DescribeSocCheckItemListRequest& request, const DescribeSocCheckItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSocCheckItemListRequest&;
    using Resp = DescribeSocCheckItemListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSocCheckItemList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeSocCheckItemListOutcomeCallable SsaClient::DescribeSocCheckItemListCallable(const DescribeSocCheckItemListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSocCheckItemListOutcome>>();
    DescribeSocCheckItemListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeSocCheckItemListRequest&,
        DescribeSocCheckItemListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeSocCheckResultListOutcome SsaClient::DescribeSocCheckResultList(const DescribeSocCheckResultListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocCheckResultList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocCheckResultListResponse rsp = DescribeSocCheckResultListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocCheckResultListOutcome(rsp);
        else
            return DescribeSocCheckResultListOutcome(o.GetError());
    }
    else
    {
        return DescribeSocCheckResultListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocCheckResultListAsync(const DescribeSocCheckResultListRequest& request, const DescribeSocCheckResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSocCheckResultListRequest&;
    using Resp = DescribeSocCheckResultListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSocCheckResultList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeSocCheckResultListOutcomeCallable SsaClient::DescribeSocCheckResultListCallable(const DescribeSocCheckResultListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSocCheckResultListOutcome>>();
    DescribeSocCheckResultListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeSocCheckResultListRequest&,
        DescribeSocCheckResultListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeSocCspmComplianceOutcome SsaClient::DescribeSocCspmCompliance(const DescribeSocCspmComplianceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocCspmCompliance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocCspmComplianceResponse rsp = DescribeSocCspmComplianceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocCspmComplianceOutcome(rsp);
        else
            return DescribeSocCspmComplianceOutcome(o.GetError());
    }
    else
    {
        return DescribeSocCspmComplianceOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocCspmComplianceAsync(const DescribeSocCspmComplianceRequest& request, const DescribeSocCspmComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeSocCspmComplianceRequest&;
    using Resp = DescribeSocCspmComplianceResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeSocCspmCompliance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeSocCspmComplianceOutcomeCallable SsaClient::DescribeSocCspmComplianceCallable(const DescribeSocCspmComplianceRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeSocCspmComplianceOutcome>>();
    DescribeSocCspmComplianceAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeSocCspmComplianceRequest&,
        DescribeSocCspmComplianceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeVulDetailOutcome SsaClient::DescribeVulDetail(const DescribeVulDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDetailResponse rsp = DescribeVulDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDetailOutcome(rsp);
        else
            return DescribeVulDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeVulDetailAsync(const DescribeVulDetailRequest& request, const DescribeVulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulDetailRequest&;
    using Resp = DescribeVulDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeVulDetailOutcomeCallable SsaClient::DescribeVulDetailCallable(const DescribeVulDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulDetailOutcome>>();
    DescribeVulDetailAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeVulDetailRequest&,
        DescribeVulDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::DescribeVulListOutcome SsaClient::DescribeVulList(const DescribeVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulListResponse rsp = DescribeVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulListOutcome(rsp);
        else
            return DescribeVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeVulListRequest&;
    using Resp = DescribeVulListResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeVulList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::DescribeVulListOutcomeCallable SsaClient::DescribeVulListCallable(const DescribeVulListRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeVulListOutcome>>();
    DescribeVulListAsync(
    request,
    [prom](
        const SsaClient*,
        const DescribeVulListRequest&,
        DescribeVulListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::SaDivulgeScanRuleMutateOutcome SsaClient::SaDivulgeScanRuleMutate(const SaDivulgeScanRuleMutateRequest &request)
{
    auto outcome = MakeRequest(request, "SaDivulgeScanRuleMutate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaDivulgeScanRuleMutateResponse rsp = SaDivulgeScanRuleMutateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaDivulgeScanRuleMutateOutcome(rsp);
        else
            return SaDivulgeScanRuleMutateOutcome(o.GetError());
    }
    else
    {
        return SaDivulgeScanRuleMutateOutcome(outcome.GetError());
    }
}

void SsaClient::SaDivulgeScanRuleMutateAsync(const SaDivulgeScanRuleMutateRequest& request, const SaDivulgeScanRuleMutateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaDivulgeScanRuleMutateRequest&;
    using Resp = SaDivulgeScanRuleMutateResponse;

    DoRequestAsync<Req, Resp>(
        "SaDivulgeScanRuleMutate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::SaDivulgeScanRuleMutateOutcomeCallable SsaClient::SaDivulgeScanRuleMutateCallable(const SaDivulgeScanRuleMutateRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaDivulgeScanRuleMutateOutcome>>();
    SaDivulgeScanRuleMutateAsync(
    request,
    [prom](
        const SsaClient*,
        const SaDivulgeScanRuleMutateRequest&,
        SaDivulgeScanRuleMutateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

SsaClient::SaEventPubOutcome SsaClient::SaEventPub(const SaEventPubRequest &request)
{
    auto outcome = MakeRequest(request, "SaEventPub");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaEventPubResponse rsp = SaEventPubResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaEventPubOutcome(rsp);
        else
            return SaEventPubOutcome(o.GetError());
    }
    else
    {
        return SaEventPubOutcome(outcome.GetError());
    }
}

void SsaClient::SaEventPubAsync(const SaEventPubRequest& request, const SaEventPubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SaEventPubRequest&;
    using Resp = SaEventPubResponse;

    DoRequestAsync<Req, Resp>(
        "SaEventPub", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

SsaClient::SaEventPubOutcomeCallable SsaClient::SaEventPubCallable(const SaEventPubRequest &request)
{
    const auto prom = std::make_shared<std::promise<SaEventPubOutcome>>();
    SaEventPubAsync(
    request,
    [prom](
        const SsaClient*,
        const SaEventPubRequest&,
        SaEventPubOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

