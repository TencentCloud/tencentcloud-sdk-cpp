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

#include <tencentcloud/tbaas/v20180416/TbaasClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tbaas::V20180416;
using namespace TencentCloud::Tbaas::V20180416::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-04-16";
    const string ENDPOINT = "tbaas.tencentcloudapi.com";
}

TbaasClient::TbaasClient(const Credential &credential, const string &region) :
    TbaasClient(credential, region, ClientProfile())
{
}

TbaasClient::TbaasClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TbaasClient::ApplyChainMakerBatchUserCertOutcome TbaasClient::ApplyChainMakerBatchUserCert(const ApplyChainMakerBatchUserCertRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyChainMakerBatchUserCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyChainMakerBatchUserCertResponse rsp = ApplyChainMakerBatchUserCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyChainMakerBatchUserCertOutcome(rsp);
        else
            return ApplyChainMakerBatchUserCertOutcome(o.GetError());
    }
    else
    {
        return ApplyChainMakerBatchUserCertOutcome(outcome.GetError());
    }
}

void TbaasClient::ApplyChainMakerBatchUserCertAsync(const ApplyChainMakerBatchUserCertRequest& request, const ApplyChainMakerBatchUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyChainMakerBatchUserCertRequest&;
    using Resp = ApplyChainMakerBatchUserCertResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyChainMakerBatchUserCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::ApplyChainMakerBatchUserCertOutcomeCallable TbaasClient::ApplyChainMakerBatchUserCertCallable(const ApplyChainMakerBatchUserCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyChainMakerBatchUserCertOutcome>>();
    ApplyChainMakerBatchUserCertAsync(
    request,
    [prom](
        const TbaasClient*,
        const ApplyChainMakerBatchUserCertRequest&,
        ApplyChainMakerBatchUserCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::ApplyUserCertOutcome TbaasClient::ApplyUserCert(const ApplyUserCertRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyUserCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyUserCertResponse rsp = ApplyUserCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyUserCertOutcome(rsp);
        else
            return ApplyUserCertOutcome(o.GetError());
    }
    else
    {
        return ApplyUserCertOutcome(outcome.GetError());
    }
}

void TbaasClient::ApplyUserCertAsync(const ApplyUserCertRequest& request, const ApplyUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyUserCertRequest&;
    using Resp = ApplyUserCertResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyUserCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::ApplyUserCertOutcomeCallable TbaasClient::ApplyUserCertCallable(const ApplyUserCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyUserCertOutcome>>();
    ApplyUserCertAsync(
    request,
    [prom](
        const TbaasClient*,
        const ApplyUserCertRequest&,
        ApplyUserCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::DescribeFabricBlockOutcome TbaasClient::DescribeFabricBlock(const DescribeFabricBlockRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFabricBlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFabricBlockResponse rsp = DescribeFabricBlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFabricBlockOutcome(rsp);
        else
            return DescribeFabricBlockOutcome(o.GetError());
    }
    else
    {
        return DescribeFabricBlockOutcome(outcome.GetError());
    }
}

void TbaasClient::DescribeFabricBlockAsync(const DescribeFabricBlockRequest& request, const DescribeFabricBlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFabricBlockRequest&;
    using Resp = DescribeFabricBlockResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFabricBlock", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::DescribeFabricBlockOutcomeCallable TbaasClient::DescribeFabricBlockCallable(const DescribeFabricBlockRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFabricBlockOutcome>>();
    DescribeFabricBlockAsync(
    request,
    [prom](
        const TbaasClient*,
        const DescribeFabricBlockRequest&,
        DescribeFabricBlockOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::DescribeFabricTransactionOutcome TbaasClient::DescribeFabricTransaction(const DescribeFabricTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFabricTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFabricTransactionResponse rsp = DescribeFabricTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFabricTransactionOutcome(rsp);
        else
            return DescribeFabricTransactionOutcome(o.GetError());
    }
    else
    {
        return DescribeFabricTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::DescribeFabricTransactionAsync(const DescribeFabricTransactionRequest& request, const DescribeFabricTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeFabricTransactionRequest&;
    using Resp = DescribeFabricTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeFabricTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::DescribeFabricTransactionOutcomeCallable TbaasClient::DescribeFabricTransactionCallable(const DescribeFabricTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeFabricTransactionOutcome>>();
    DescribeFabricTransactionAsync(
    request,
    [prom](
        const TbaasClient*,
        const DescribeFabricTransactionRequest&,
        DescribeFabricTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::DownloadUserCertOutcome TbaasClient::DownloadUserCert(const DownloadUserCertRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadUserCert");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadUserCertResponse rsp = DownloadUserCertResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadUserCertOutcome(rsp);
        else
            return DownloadUserCertOutcome(o.GetError());
    }
    else
    {
        return DownloadUserCertOutcome(outcome.GetError());
    }
}

void TbaasClient::DownloadUserCertAsync(const DownloadUserCertRequest& request, const DownloadUserCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadUserCertRequest&;
    using Resp = DownloadUserCertResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadUserCert", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::DownloadUserCertOutcomeCallable TbaasClient::DownloadUserCertCallable(const DownloadUserCertRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadUserCertOutcome>>();
    DownloadUserCertAsync(
    request,
    [prom](
        const TbaasClient*,
        const DownloadUserCertRequest&,
        DownloadUserCertOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::GetBlockListOutcome TbaasClient::GetBlockList(const GetBlockListRequest &request)
{
    auto outcome = MakeRequest(request, "GetBlockList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBlockListResponse rsp = GetBlockListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBlockListOutcome(rsp);
        else
            return GetBlockListOutcome(o.GetError());
    }
    else
    {
        return GetBlockListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBlockListAsync(const GetBlockListRequest& request, const GetBlockListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetBlockListRequest&;
    using Resp = GetBlockListResponse;

    DoRequestAsync<Req, Resp>(
        "GetBlockList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::GetBlockListOutcomeCallable TbaasClient::GetBlockListCallable(const GetBlockListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetBlockListOutcome>>();
    GetBlockListAsync(
    request,
    [prom](
        const TbaasClient*,
        const GetBlockListRequest&,
        GetBlockListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::GetBlockTransactionListForUserOutcome TbaasClient::GetBlockTransactionListForUser(const GetBlockTransactionListForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetBlockTransactionListForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBlockTransactionListForUserResponse rsp = GetBlockTransactionListForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBlockTransactionListForUserOutcome(rsp);
        else
            return GetBlockTransactionListForUserOutcome(o.GetError());
    }
    else
    {
        return GetBlockTransactionListForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetBlockTransactionListForUserAsync(const GetBlockTransactionListForUserRequest& request, const GetBlockTransactionListForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetBlockTransactionListForUserRequest&;
    using Resp = GetBlockTransactionListForUserResponse;

    DoRequestAsync<Req, Resp>(
        "GetBlockTransactionListForUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::GetBlockTransactionListForUserOutcomeCallable TbaasClient::GetBlockTransactionListForUserCallable(const GetBlockTransactionListForUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetBlockTransactionListForUserOutcome>>();
    GetBlockTransactionListForUserAsync(
    request,
    [prom](
        const TbaasClient*,
        const GetBlockTransactionListForUserRequest&,
        GetBlockTransactionListForUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::GetClusterSummaryOutcome TbaasClient::GetClusterSummary(const GetClusterSummaryRequest &request)
{
    auto outcome = MakeRequest(request, "GetClusterSummary");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetClusterSummaryResponse rsp = GetClusterSummaryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetClusterSummaryOutcome(rsp);
        else
            return GetClusterSummaryOutcome(o.GetError());
    }
    else
    {
        return GetClusterSummaryOutcome(outcome.GetError());
    }
}

void TbaasClient::GetClusterSummaryAsync(const GetClusterSummaryRequest& request, const GetClusterSummaryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetClusterSummaryRequest&;
    using Resp = GetClusterSummaryResponse;

    DoRequestAsync<Req, Resp>(
        "GetClusterSummary", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::GetClusterSummaryOutcomeCallable TbaasClient::GetClusterSummaryCallable(const GetClusterSummaryRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetClusterSummaryOutcome>>();
    GetClusterSummaryAsync(
    request,
    [prom](
        const TbaasClient*,
        const GetClusterSummaryRequest&,
        GetClusterSummaryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::GetInvokeTxOutcome TbaasClient::GetInvokeTx(const GetInvokeTxRequest &request)
{
    auto outcome = MakeRequest(request, "GetInvokeTx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetInvokeTxResponse rsp = GetInvokeTxResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetInvokeTxOutcome(rsp);
        else
            return GetInvokeTxOutcome(o.GetError());
    }
    else
    {
        return GetInvokeTxOutcome(outcome.GetError());
    }
}

void TbaasClient::GetInvokeTxAsync(const GetInvokeTxRequest& request, const GetInvokeTxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetInvokeTxRequest&;
    using Resp = GetInvokeTxResponse;

    DoRequestAsync<Req, Resp>(
        "GetInvokeTx", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::GetInvokeTxOutcomeCallable TbaasClient::GetInvokeTxCallable(const GetInvokeTxRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetInvokeTxOutcome>>();
    GetInvokeTxAsync(
    request,
    [prom](
        const TbaasClient*,
        const GetInvokeTxRequest&,
        GetInvokeTxOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::GetLatestTransactionListOutcome TbaasClient::GetLatestTransactionList(const GetLatestTransactionListRequest &request)
{
    auto outcome = MakeRequest(request, "GetLatestTransactionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetLatestTransactionListResponse rsp = GetLatestTransactionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetLatestTransactionListOutcome(rsp);
        else
            return GetLatestTransactionListOutcome(o.GetError());
    }
    else
    {
        return GetLatestTransactionListOutcome(outcome.GetError());
    }
}

void TbaasClient::GetLatestTransactionListAsync(const GetLatestTransactionListRequest& request, const GetLatestTransactionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetLatestTransactionListRequest&;
    using Resp = GetLatestTransactionListResponse;

    DoRequestAsync<Req, Resp>(
        "GetLatestTransactionList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::GetLatestTransactionListOutcomeCallable TbaasClient::GetLatestTransactionListCallable(const GetLatestTransactionListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetLatestTransactionListOutcome>>();
    GetLatestTransactionListAsync(
    request,
    [prom](
        const TbaasClient*,
        const GetLatestTransactionListRequest&,
        GetLatestTransactionListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::GetTransactionDetailForUserOutcome TbaasClient::GetTransactionDetailForUser(const GetTransactionDetailForUserRequest &request)
{
    auto outcome = MakeRequest(request, "GetTransactionDetailForUser");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetTransactionDetailForUserResponse rsp = GetTransactionDetailForUserResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetTransactionDetailForUserOutcome(rsp);
        else
            return GetTransactionDetailForUserOutcome(o.GetError());
    }
    else
    {
        return GetTransactionDetailForUserOutcome(outcome.GetError());
    }
}

void TbaasClient::GetTransactionDetailForUserAsync(const GetTransactionDetailForUserRequest& request, const GetTransactionDetailForUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetTransactionDetailForUserRequest&;
    using Resp = GetTransactionDetailForUserResponse;

    DoRequestAsync<Req, Resp>(
        "GetTransactionDetailForUser", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::GetTransactionDetailForUserOutcomeCallable TbaasClient::GetTransactionDetailForUserCallable(const GetTransactionDetailForUserRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetTransactionDetailForUserOutcome>>();
    GetTransactionDetailForUserAsync(
    request,
    [prom](
        const TbaasClient*,
        const GetTransactionDetailForUserRequest&,
        GetTransactionDetailForUserOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::InvokeOutcome TbaasClient::Invoke(const InvokeRequest &request)
{
    auto outcome = MakeRequest(request, "Invoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeResponse rsp = InvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeOutcome(rsp);
        else
            return InvokeOutcome(o.GetError());
    }
    else
    {
        return InvokeOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeAsync(const InvokeRequest& request, const InvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeRequest&;
    using Resp = InvokeResponse;

    DoRequestAsync<Req, Resp>(
        "Invoke", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::InvokeOutcomeCallable TbaasClient::InvokeCallable(const InvokeRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeOutcome>>();
    InvokeAsync(
    request,
    [prom](
        const TbaasClient*,
        const InvokeRequest&,
        InvokeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::InvokeChainMakerContractOutcome TbaasClient::InvokeChainMakerContract(const InvokeChainMakerContractRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeChainMakerContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeChainMakerContractResponse rsp = InvokeChainMakerContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeChainMakerContractOutcome(rsp);
        else
            return InvokeChainMakerContractOutcome(o.GetError());
    }
    else
    {
        return InvokeChainMakerContractOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeChainMakerContractAsync(const InvokeChainMakerContractRequest& request, const InvokeChainMakerContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeChainMakerContractRequest&;
    using Resp = InvokeChainMakerContractResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeChainMakerContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::InvokeChainMakerContractOutcomeCallable TbaasClient::InvokeChainMakerContractCallable(const InvokeChainMakerContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeChainMakerContractOutcome>>();
    InvokeChainMakerContractAsync(
    request,
    [prom](
        const TbaasClient*,
        const InvokeChainMakerContractRequest&,
        InvokeChainMakerContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::InvokeChainMakerDemoContractOutcome TbaasClient::InvokeChainMakerDemoContract(const InvokeChainMakerDemoContractRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeChainMakerDemoContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeChainMakerDemoContractResponse rsp = InvokeChainMakerDemoContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeChainMakerDemoContractOutcome(rsp);
        else
            return InvokeChainMakerDemoContractOutcome(o.GetError());
    }
    else
    {
        return InvokeChainMakerDemoContractOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeChainMakerDemoContractAsync(const InvokeChainMakerDemoContractRequest& request, const InvokeChainMakerDemoContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeChainMakerDemoContractRequest&;
    using Resp = InvokeChainMakerDemoContractResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeChainMakerDemoContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::InvokeChainMakerDemoContractOutcomeCallable TbaasClient::InvokeChainMakerDemoContractCallable(const InvokeChainMakerDemoContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeChainMakerDemoContractOutcome>>();
    InvokeChainMakerDemoContractAsync(
    request,
    [prom](
        const TbaasClient*,
        const InvokeChainMakerDemoContractRequest&,
        InvokeChainMakerDemoContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::InvokeFabricChaincodeOutcome TbaasClient::InvokeFabricChaincode(const InvokeFabricChaincodeRequest &request)
{
    auto outcome = MakeRequest(request, "InvokeFabricChaincode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InvokeFabricChaincodeResponse rsp = InvokeFabricChaincodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InvokeFabricChaincodeOutcome(rsp);
        else
            return InvokeFabricChaincodeOutcome(o.GetError());
    }
    else
    {
        return InvokeFabricChaincodeOutcome(outcome.GetError());
    }
}

void TbaasClient::InvokeFabricChaincodeAsync(const InvokeFabricChaincodeRequest& request, const InvokeFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const InvokeFabricChaincodeRequest&;
    using Resp = InvokeFabricChaincodeResponse;

    DoRequestAsync<Req, Resp>(
        "InvokeFabricChaincode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::InvokeFabricChaincodeOutcomeCallable TbaasClient::InvokeFabricChaincodeCallable(const InvokeFabricChaincodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<InvokeFabricChaincodeOutcome>>();
    InvokeFabricChaincodeAsync(
    request,
    [prom](
        const TbaasClient*,
        const InvokeFabricChaincodeRequest&,
        InvokeFabricChaincodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryOutcome TbaasClient::Query(const QueryRequest &request)
{
    auto outcome = MakeRequest(request, "Query");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryResponse rsp = QueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOutcome(rsp);
        else
            return QueryOutcome(o.GetError());
    }
    else
    {
        return QueryOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryAsync(const QueryRequest& request, const QueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryRequest&;
    using Resp = QueryResponse;

    DoRequestAsync<Req, Resp>(
        "Query", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryOutcomeCallable TbaasClient::QueryCallable(const QueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOutcome>>();
    QueryAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryRequest&,
        QueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryChainMakerBlockTransactionOutcome TbaasClient::QueryChainMakerBlockTransaction(const QueryChainMakerBlockTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerBlockTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerBlockTransactionResponse rsp = QueryChainMakerBlockTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerBlockTransactionOutcome(rsp);
        else
            return QueryChainMakerBlockTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerBlockTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerBlockTransactionAsync(const QueryChainMakerBlockTransactionRequest& request, const QueryChainMakerBlockTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChainMakerBlockTransactionRequest&;
    using Resp = QueryChainMakerBlockTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChainMakerBlockTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryChainMakerBlockTransactionOutcomeCallable TbaasClient::QueryChainMakerBlockTransactionCallable(const QueryChainMakerBlockTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChainMakerBlockTransactionOutcome>>();
    QueryChainMakerBlockTransactionAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryChainMakerBlockTransactionRequest&,
        QueryChainMakerBlockTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryChainMakerContractOutcome TbaasClient::QueryChainMakerContract(const QueryChainMakerContractRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerContractResponse rsp = QueryChainMakerContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerContractOutcome(rsp);
        else
            return QueryChainMakerContractOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerContractOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerContractAsync(const QueryChainMakerContractRequest& request, const QueryChainMakerContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChainMakerContractRequest&;
    using Resp = QueryChainMakerContractResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChainMakerContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryChainMakerContractOutcomeCallable TbaasClient::QueryChainMakerContractCallable(const QueryChainMakerContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChainMakerContractOutcome>>();
    QueryChainMakerContractAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryChainMakerContractRequest&,
        QueryChainMakerContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryChainMakerDemoBlockTransactionOutcome TbaasClient::QueryChainMakerDemoBlockTransaction(const QueryChainMakerDemoBlockTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerDemoBlockTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerDemoBlockTransactionResponse rsp = QueryChainMakerDemoBlockTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerDemoBlockTransactionOutcome(rsp);
        else
            return QueryChainMakerDemoBlockTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerDemoBlockTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerDemoBlockTransactionAsync(const QueryChainMakerDemoBlockTransactionRequest& request, const QueryChainMakerDemoBlockTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChainMakerDemoBlockTransactionRequest&;
    using Resp = QueryChainMakerDemoBlockTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChainMakerDemoBlockTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryChainMakerDemoBlockTransactionOutcomeCallable TbaasClient::QueryChainMakerDemoBlockTransactionCallable(const QueryChainMakerDemoBlockTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChainMakerDemoBlockTransactionOutcome>>();
    QueryChainMakerDemoBlockTransactionAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryChainMakerDemoBlockTransactionRequest&,
        QueryChainMakerDemoBlockTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryChainMakerDemoContractOutcome TbaasClient::QueryChainMakerDemoContract(const QueryChainMakerDemoContractRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerDemoContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerDemoContractResponse rsp = QueryChainMakerDemoContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerDemoContractOutcome(rsp);
        else
            return QueryChainMakerDemoContractOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerDemoContractOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerDemoContractAsync(const QueryChainMakerDemoContractRequest& request, const QueryChainMakerDemoContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChainMakerDemoContractRequest&;
    using Resp = QueryChainMakerDemoContractResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChainMakerDemoContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryChainMakerDemoContractOutcomeCallable TbaasClient::QueryChainMakerDemoContractCallable(const QueryChainMakerDemoContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChainMakerDemoContractOutcome>>();
    QueryChainMakerDemoContractAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryChainMakerDemoContractRequest&,
        QueryChainMakerDemoContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryChainMakerDemoTransactionOutcome TbaasClient::QueryChainMakerDemoTransaction(const QueryChainMakerDemoTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerDemoTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerDemoTransactionResponse rsp = QueryChainMakerDemoTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerDemoTransactionOutcome(rsp);
        else
            return QueryChainMakerDemoTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerDemoTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerDemoTransactionAsync(const QueryChainMakerDemoTransactionRequest& request, const QueryChainMakerDemoTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChainMakerDemoTransactionRequest&;
    using Resp = QueryChainMakerDemoTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChainMakerDemoTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryChainMakerDemoTransactionOutcomeCallable TbaasClient::QueryChainMakerDemoTransactionCallable(const QueryChainMakerDemoTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChainMakerDemoTransactionOutcome>>();
    QueryChainMakerDemoTransactionAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryChainMakerDemoTransactionRequest&,
        QueryChainMakerDemoTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryChainMakerTransactionOutcome TbaasClient::QueryChainMakerTransaction(const QueryChainMakerTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryChainMakerTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryChainMakerTransactionResponse rsp = QueryChainMakerTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryChainMakerTransactionOutcome(rsp);
        else
            return QueryChainMakerTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryChainMakerTransactionOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryChainMakerTransactionAsync(const QueryChainMakerTransactionRequest& request, const QueryChainMakerTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryChainMakerTransactionRequest&;
    using Resp = QueryChainMakerTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "QueryChainMakerTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryChainMakerTransactionOutcomeCallable TbaasClient::QueryChainMakerTransactionCallable(const QueryChainMakerTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryChainMakerTransactionOutcome>>();
    QueryChainMakerTransactionAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryChainMakerTransactionRequest&,
        QueryChainMakerTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::QueryFabricChaincodeOutcome TbaasClient::QueryFabricChaincode(const QueryFabricChaincodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFabricChaincode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFabricChaincodeResponse rsp = QueryFabricChaincodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFabricChaincodeOutcome(rsp);
        else
            return QueryFabricChaincodeOutcome(o.GetError());
    }
    else
    {
        return QueryFabricChaincodeOutcome(outcome.GetError());
    }
}

void TbaasClient::QueryFabricChaincodeAsync(const QueryFabricChaincodeRequest& request, const QueryFabricChaincodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFabricChaincodeRequest&;
    using Resp = QueryFabricChaincodeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFabricChaincode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::QueryFabricChaincodeOutcomeCallable TbaasClient::QueryFabricChaincodeCallable(const QueryFabricChaincodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFabricChaincodeOutcome>>();
    QueryFabricChaincodeAsync(
    request,
    [prom](
        const TbaasClient*,
        const QueryFabricChaincodeRequest&,
        QueryFabricChaincodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

TbaasClient::SrvInvokeOutcome TbaasClient::SrvInvoke(const SrvInvokeRequest &request)
{
    auto outcome = MakeRequest(request, "SrvInvoke");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SrvInvokeResponse rsp = SrvInvokeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SrvInvokeOutcome(rsp);
        else
            return SrvInvokeOutcome(o.GetError());
    }
    else
    {
        return SrvInvokeOutcome(outcome.GetError());
    }
}

void TbaasClient::SrvInvokeAsync(const SrvInvokeRequest& request, const SrvInvokeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SrvInvokeRequest&;
    using Resp = SrvInvokeResponse;

    DoRequestAsync<Req, Resp>(
        "SrvInvoke", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

TbaasClient::SrvInvokeOutcomeCallable TbaasClient::SrvInvokeCallable(const SrvInvokeRequest &request)
{
    const auto prom = std::make_shared<std::promise<SrvInvokeOutcome>>();
    SrvInvokeAsync(
    request,
    [prom](
        const TbaasClient*,
        const SrvInvokeRequest&,
        SrvInvokeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

