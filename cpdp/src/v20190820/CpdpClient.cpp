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

#include <tencentcloud/cpdp/v20190820/CpdpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cpdp::V20190820;
using namespace TencentCloud::Cpdp::V20190820::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-08-20";
    const string ENDPOINT = "cpdp.tencentcloudapi.com";
}

CpdpClient::CpdpClient(const Credential &credential, const string &region) :
    CpdpClient(credential, region, ClientProfile())
{
}

CpdpClient::CpdpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CpdpClient::AddContractOutcome CpdpClient::AddContract(const AddContractRequest &request)
{
    auto outcome = MakeRequest(request, "AddContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddContractResponse rsp = AddContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddContractOutcome(rsp);
        else
            return AddContractOutcome(o.GetError());
    }
    else
    {
        return AddContractOutcome(outcome.GetError());
    }
}

void CpdpClient::AddContractAsync(const AddContractRequest& request, const AddContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddContractRequest&;
    using Resp = AddContractResponse;

    DoRequestAsync<Req, Resp>(
        "AddContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::AddContractOutcomeCallable CpdpClient::AddContractCallable(const AddContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddContractOutcome>>();
    AddContractAsync(
    request,
    [prom](
        const CpdpClient*,
        const AddContractRequest&,
        AddContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::AddFlexFundingAccountOutcome CpdpClient::AddFlexFundingAccount(const AddFlexFundingAccountRequest &request)
{
    auto outcome = MakeRequest(request, "AddFlexFundingAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddFlexFundingAccountResponse rsp = AddFlexFundingAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddFlexFundingAccountOutcome(rsp);
        else
            return AddFlexFundingAccountOutcome(o.GetError());
    }
    else
    {
        return AddFlexFundingAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::AddFlexFundingAccountAsync(const AddFlexFundingAccountRequest& request, const AddFlexFundingAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddFlexFundingAccountRequest&;
    using Resp = AddFlexFundingAccountResponse;

    DoRequestAsync<Req, Resp>(
        "AddFlexFundingAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::AddFlexFundingAccountOutcomeCallable CpdpClient::AddFlexFundingAccountCallable(const AddFlexFundingAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddFlexFundingAccountOutcome>>();
    AddFlexFundingAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const AddFlexFundingAccountRequest&,
        AddFlexFundingAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::AddFlexIdInfoOutcome CpdpClient::AddFlexIdInfo(const AddFlexIdInfoRequest &request)
{
    auto outcome = MakeRequest(request, "AddFlexIdInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddFlexIdInfoResponse rsp = AddFlexIdInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddFlexIdInfoOutcome(rsp);
        else
            return AddFlexIdInfoOutcome(o.GetError());
    }
    else
    {
        return AddFlexIdInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::AddFlexIdInfoAsync(const AddFlexIdInfoRequest& request, const AddFlexIdInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddFlexIdInfoRequest&;
    using Resp = AddFlexIdInfoResponse;

    DoRequestAsync<Req, Resp>(
        "AddFlexIdInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::AddFlexIdInfoOutcomeCallable CpdpClient::AddFlexIdInfoCallable(const AddFlexIdInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddFlexIdInfoOutcome>>();
    AddFlexIdInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const AddFlexIdInfoRequest&,
        AddFlexIdInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::AddFlexPhoneNoOutcome CpdpClient::AddFlexPhoneNo(const AddFlexPhoneNoRequest &request)
{
    auto outcome = MakeRequest(request, "AddFlexPhoneNo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddFlexPhoneNoResponse rsp = AddFlexPhoneNoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddFlexPhoneNoOutcome(rsp);
        else
            return AddFlexPhoneNoOutcome(o.GetError());
    }
    else
    {
        return AddFlexPhoneNoOutcome(outcome.GetError());
    }
}

void CpdpClient::AddFlexPhoneNoAsync(const AddFlexPhoneNoRequest& request, const AddFlexPhoneNoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddFlexPhoneNoRequest&;
    using Resp = AddFlexPhoneNoResponse;

    DoRequestAsync<Req, Resp>(
        "AddFlexPhoneNo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::AddFlexPhoneNoOutcomeCallable CpdpClient::AddFlexPhoneNoCallable(const AddFlexPhoneNoRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddFlexPhoneNoOutcome>>();
    AddFlexPhoneNoAsync(
    request,
    [prom](
        const CpdpClient*,
        const AddFlexPhoneNoRequest&,
        AddFlexPhoneNoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::AddMerchantOutcome CpdpClient::AddMerchant(const AddMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "AddMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddMerchantResponse rsp = AddMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddMerchantOutcome(rsp);
        else
            return AddMerchantOutcome(o.GetError());
    }
    else
    {
        return AddMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::AddMerchantAsync(const AddMerchantRequest& request, const AddMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddMerchantRequest&;
    using Resp = AddMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "AddMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::AddMerchantOutcomeCallable CpdpClient::AddMerchantCallable(const AddMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddMerchantOutcome>>();
    AddMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const AddMerchantRequest&,
        AddMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::AddShopOutcome CpdpClient::AddShop(const AddShopRequest &request)
{
    auto outcome = MakeRequest(request, "AddShop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddShopResponse rsp = AddShopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddShopOutcome(rsp);
        else
            return AddShopOutcome(o.GetError());
    }
    else
    {
        return AddShopOutcome(outcome.GetError());
    }
}

void CpdpClient::AddShopAsync(const AddShopRequest& request, const AddShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const AddShopRequest&;
    using Resp = AddShopResponse;

    DoRequestAsync<Req, Resp>(
        "AddShop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::AddShopOutcomeCallable CpdpClient::AddShopCallable(const AddShopRequest &request)
{
    const auto prom = std::make_shared<std::promise<AddShopOutcome>>();
    AddShopAsync(
    request,
    [prom](
        const CpdpClient*,
        const AddShopRequest&,
        AddShopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyApplicationMaterialOutcome CpdpClient::ApplyApplicationMaterial(const ApplyApplicationMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyApplicationMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyApplicationMaterialResponse rsp = ApplyApplicationMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyApplicationMaterialOutcome(rsp);
        else
            return ApplyApplicationMaterialOutcome(o.GetError());
    }
    else
    {
        return ApplyApplicationMaterialOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyApplicationMaterialAsync(const ApplyApplicationMaterialRequest& request, const ApplyApplicationMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyApplicationMaterialRequest&;
    using Resp = ApplyApplicationMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyApplicationMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyApplicationMaterialOutcomeCallable CpdpClient::ApplyApplicationMaterialCallable(const ApplyApplicationMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyApplicationMaterialOutcome>>();
    ApplyApplicationMaterialAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyApplicationMaterialRequest&,
        ApplyApplicationMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyFlexPaymentOutcome CpdpClient::ApplyFlexPayment(const ApplyFlexPaymentRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyFlexPayment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyFlexPaymentResponse rsp = ApplyFlexPaymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyFlexPaymentOutcome(rsp);
        else
            return ApplyFlexPaymentOutcome(o.GetError());
    }
    else
    {
        return ApplyFlexPaymentOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyFlexPaymentAsync(const ApplyFlexPaymentRequest& request, const ApplyFlexPaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyFlexPaymentRequest&;
    using Resp = ApplyFlexPaymentResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyFlexPayment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyFlexPaymentOutcomeCallable CpdpClient::ApplyFlexPaymentCallable(const ApplyFlexPaymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyFlexPaymentOutcome>>();
    ApplyFlexPaymentAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyFlexPaymentRequest&,
        ApplyFlexPaymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyFlexSettlementOutcome CpdpClient::ApplyFlexSettlement(const ApplyFlexSettlementRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyFlexSettlement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyFlexSettlementResponse rsp = ApplyFlexSettlementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyFlexSettlementOutcome(rsp);
        else
            return ApplyFlexSettlementOutcome(o.GetError());
    }
    else
    {
        return ApplyFlexSettlementOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyFlexSettlementAsync(const ApplyFlexSettlementRequest& request, const ApplyFlexSettlementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyFlexSettlementRequest&;
    using Resp = ApplyFlexSettlementResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyFlexSettlement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyFlexSettlementOutcomeCallable CpdpClient::ApplyFlexSettlementCallable(const ApplyFlexSettlementRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyFlexSettlementOutcome>>();
    ApplyFlexSettlementAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyFlexSettlementRequest&,
        ApplyFlexSettlementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyFlexWechatPreAuthOutcome CpdpClient::ApplyFlexWechatPreAuth(const ApplyFlexWechatPreAuthRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyFlexWechatPreAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyFlexWechatPreAuthResponse rsp = ApplyFlexWechatPreAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyFlexWechatPreAuthOutcome(rsp);
        else
            return ApplyFlexWechatPreAuthOutcome(o.GetError());
    }
    else
    {
        return ApplyFlexWechatPreAuthOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyFlexWechatPreAuthAsync(const ApplyFlexWechatPreAuthRequest& request, const ApplyFlexWechatPreAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyFlexWechatPreAuthRequest&;
    using Resp = ApplyFlexWechatPreAuthResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyFlexWechatPreAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyFlexWechatPreAuthOutcomeCallable CpdpClient::ApplyFlexWechatPreAuthCallable(const ApplyFlexWechatPreAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyFlexWechatPreAuthOutcome>>();
    ApplyFlexWechatPreAuthAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyFlexWechatPreAuthRequest&,
        ApplyFlexWechatPreAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyOpenBankOrderDetailReceiptOutcome CpdpClient::ApplyOpenBankOrderDetailReceipt(const ApplyOpenBankOrderDetailReceiptRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyOpenBankOrderDetailReceipt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyOpenBankOrderDetailReceiptResponse rsp = ApplyOpenBankOrderDetailReceiptResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyOpenBankOrderDetailReceiptOutcome(rsp);
        else
            return ApplyOpenBankOrderDetailReceiptOutcome(o.GetError());
    }
    else
    {
        return ApplyOpenBankOrderDetailReceiptOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyOpenBankOrderDetailReceiptAsync(const ApplyOpenBankOrderDetailReceiptRequest& request, const ApplyOpenBankOrderDetailReceiptAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyOpenBankOrderDetailReceiptRequest&;
    using Resp = ApplyOpenBankOrderDetailReceiptResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyOpenBankOrderDetailReceipt", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyOpenBankOrderDetailReceiptOutcomeCallable CpdpClient::ApplyOpenBankOrderDetailReceiptCallable(const ApplyOpenBankOrderDetailReceiptRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyOpenBankOrderDetailReceiptOutcome>>();
    ApplyOpenBankOrderDetailReceiptAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyOpenBankOrderDetailReceiptRequest&,
        ApplyOpenBankOrderDetailReceiptOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyOpenBankSettleOrderOutcome CpdpClient::ApplyOpenBankSettleOrder(const ApplyOpenBankSettleOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyOpenBankSettleOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyOpenBankSettleOrderResponse rsp = ApplyOpenBankSettleOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyOpenBankSettleOrderOutcome(rsp);
        else
            return ApplyOpenBankSettleOrderOutcome(o.GetError());
    }
    else
    {
        return ApplyOpenBankSettleOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyOpenBankSettleOrderAsync(const ApplyOpenBankSettleOrderRequest& request, const ApplyOpenBankSettleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyOpenBankSettleOrderRequest&;
    using Resp = ApplyOpenBankSettleOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyOpenBankSettleOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyOpenBankSettleOrderOutcomeCallable CpdpClient::ApplyOpenBankSettleOrderCallable(const ApplyOpenBankSettleOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyOpenBankSettleOrderOutcome>>();
    ApplyOpenBankSettleOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyOpenBankSettleOrderRequest&,
        ApplyOpenBankSettleOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyOpenBankSubMerchantSignOnlineOutcome CpdpClient::ApplyOpenBankSubMerchantSignOnline(const ApplyOpenBankSubMerchantSignOnlineRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyOpenBankSubMerchantSignOnline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyOpenBankSubMerchantSignOnlineResponse rsp = ApplyOpenBankSubMerchantSignOnlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyOpenBankSubMerchantSignOnlineOutcome(rsp);
        else
            return ApplyOpenBankSubMerchantSignOnlineOutcome(o.GetError());
    }
    else
    {
        return ApplyOpenBankSubMerchantSignOnlineOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyOpenBankSubMerchantSignOnlineAsync(const ApplyOpenBankSubMerchantSignOnlineRequest& request, const ApplyOpenBankSubMerchantSignOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyOpenBankSubMerchantSignOnlineRequest&;
    using Resp = ApplyOpenBankSubMerchantSignOnlineResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyOpenBankSubMerchantSignOnline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyOpenBankSubMerchantSignOnlineOutcomeCallable CpdpClient::ApplyOpenBankSubMerchantSignOnlineCallable(const ApplyOpenBankSubMerchantSignOnlineRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyOpenBankSubMerchantSignOnlineOutcome>>();
    ApplyOpenBankSubMerchantSignOnlineAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyOpenBankSubMerchantSignOnlineRequest&,
        ApplyOpenBankSubMerchantSignOnlineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyOutwardOrderOutcome CpdpClient::ApplyOutwardOrder(const ApplyOutwardOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyOutwardOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyOutwardOrderResponse rsp = ApplyOutwardOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyOutwardOrderOutcome(rsp);
        else
            return ApplyOutwardOrderOutcome(o.GetError());
    }
    else
    {
        return ApplyOutwardOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyOutwardOrderAsync(const ApplyOutwardOrderRequest& request, const ApplyOutwardOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyOutwardOrderRequest&;
    using Resp = ApplyOutwardOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyOutwardOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyOutwardOrderOutcomeCallable CpdpClient::ApplyOutwardOrderCallable(const ApplyOutwardOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyOutwardOrderOutcome>>();
    ApplyOutwardOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyOutwardOrderRequest&,
        ApplyOutwardOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyPayerInfoOutcome CpdpClient::ApplyPayerInfo(const ApplyPayerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyPayerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyPayerInfoResponse rsp = ApplyPayerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyPayerInfoOutcome(rsp);
        else
            return ApplyPayerInfoOutcome(o.GetError());
    }
    else
    {
        return ApplyPayerInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyPayerInfoAsync(const ApplyPayerInfoRequest& request, const ApplyPayerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyPayerInfoRequest&;
    using Resp = ApplyPayerInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyPayerInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyPayerInfoOutcomeCallable CpdpClient::ApplyPayerInfoCallable(const ApplyPayerInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyPayerInfoOutcome>>();
    ApplyPayerInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyPayerInfoRequest&,
        ApplyPayerInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyReWithdrawalOutcome CpdpClient::ApplyReWithdrawal(const ApplyReWithdrawalRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyReWithdrawal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyReWithdrawalResponse rsp = ApplyReWithdrawalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyReWithdrawalOutcome(rsp);
        else
            return ApplyReWithdrawalOutcome(o.GetError());
    }
    else
    {
        return ApplyReWithdrawalOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyReWithdrawalAsync(const ApplyReWithdrawalRequest& request, const ApplyReWithdrawalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyReWithdrawalRequest&;
    using Resp = ApplyReWithdrawalResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyReWithdrawal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyReWithdrawalOutcomeCallable CpdpClient::ApplyReWithdrawalCallable(const ApplyReWithdrawalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyReWithdrawalOutcome>>();
    ApplyReWithdrawalAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyReWithdrawalRequest&,
        ApplyReWithdrawalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyReconciliationFileOutcome CpdpClient::ApplyReconciliationFile(const ApplyReconciliationFileRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyReconciliationFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyReconciliationFileResponse rsp = ApplyReconciliationFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyReconciliationFileOutcome(rsp);
        else
            return ApplyReconciliationFileOutcome(o.GetError());
    }
    else
    {
        return ApplyReconciliationFileOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyReconciliationFileAsync(const ApplyReconciliationFileRequest& request, const ApplyReconciliationFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyReconciliationFileRequest&;
    using Resp = ApplyReconciliationFileResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyReconciliationFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyReconciliationFileOutcomeCallable CpdpClient::ApplyReconciliationFileCallable(const ApplyReconciliationFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyReconciliationFileOutcome>>();
    ApplyReconciliationFileAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyReconciliationFileRequest&,
        ApplyReconciliationFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyTradeOutcome CpdpClient::ApplyTrade(const ApplyTradeRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyTrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyTradeResponse rsp = ApplyTradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyTradeOutcome(rsp);
        else
            return ApplyTradeOutcome(o.GetError());
    }
    else
    {
        return ApplyTradeOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyTradeAsync(const ApplyTradeRequest& request, const ApplyTradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyTradeRequest&;
    using Resp = ApplyTradeResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyTrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyTradeOutcomeCallable CpdpClient::ApplyTradeCallable(const ApplyTradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyTradeOutcome>>();
    ApplyTradeAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyTradeRequest&,
        ApplyTradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ApplyWithdrawalOutcome CpdpClient::ApplyWithdrawal(const ApplyWithdrawalRequest &request)
{
    auto outcome = MakeRequest(request, "ApplyWithdrawal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ApplyWithdrawalResponse rsp = ApplyWithdrawalResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ApplyWithdrawalOutcome(rsp);
        else
            return ApplyWithdrawalOutcome(o.GetError());
    }
    else
    {
        return ApplyWithdrawalOutcome(outcome.GetError());
    }
}

void CpdpClient::ApplyWithdrawalAsync(const ApplyWithdrawalRequest& request, const ApplyWithdrawalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ApplyWithdrawalRequest&;
    using Resp = ApplyWithdrawalResponse;

    DoRequestAsync<Req, Resp>(
        "ApplyWithdrawal", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ApplyWithdrawalOutcomeCallable CpdpClient::ApplyWithdrawalCallable(const ApplyWithdrawalRequest &request)
{
    const auto prom = std::make_shared<std::promise<ApplyWithdrawalOutcome>>();
    ApplyWithdrawalAsync(
    request,
    [prom](
        const CpdpClient*,
        const ApplyWithdrawalRequest&,
        ApplyWithdrawalOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindAccountOutcome CpdpClient::BindAccount(const BindAccountRequest &request)
{
    auto outcome = MakeRequest(request, "BindAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAccountResponse rsp = BindAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAccountOutcome(rsp);
        else
            return BindAccountOutcome(o.GetError());
    }
    else
    {
        return BindAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::BindAccountAsync(const BindAccountRequest& request, const BindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAccountRequest&;
    using Resp = BindAccountResponse;

    DoRequestAsync<Req, Resp>(
        "BindAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindAccountOutcomeCallable CpdpClient::BindAccountCallable(const BindAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAccountOutcome>>();
    BindAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindAccountRequest&,
        BindAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindAcctOutcome CpdpClient::BindAcct(const BindAcctRequest &request)
{
    auto outcome = MakeRequest(request, "BindAcct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindAcctResponse rsp = BindAcctResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindAcctOutcome(rsp);
        else
            return BindAcctOutcome(o.GetError());
    }
    else
    {
        return BindAcctOutcome(outcome.GetError());
    }
}

void CpdpClient::BindAcctAsync(const BindAcctRequest& request, const BindAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindAcctRequest&;
    using Resp = BindAcctResponse;

    DoRequestAsync<Req, Resp>(
        "BindAcct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindAcctOutcomeCallable CpdpClient::BindAcctCallable(const BindAcctRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindAcctOutcome>>();
    BindAcctAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindAcctRequest&,
        BindAcctOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindOpenBankExternalSubMerchantBankAccountOutcome CpdpClient::BindOpenBankExternalSubMerchantBankAccount(const BindOpenBankExternalSubMerchantBankAccountRequest &request)
{
    auto outcome = MakeRequest(request, "BindOpenBankExternalSubMerchantBankAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindOpenBankExternalSubMerchantBankAccountResponse rsp = BindOpenBankExternalSubMerchantBankAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindOpenBankExternalSubMerchantBankAccountOutcome(rsp);
        else
            return BindOpenBankExternalSubMerchantBankAccountOutcome(o.GetError());
    }
    else
    {
        return BindOpenBankExternalSubMerchantBankAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::BindOpenBankExternalSubMerchantBankAccountAsync(const BindOpenBankExternalSubMerchantBankAccountRequest& request, const BindOpenBankExternalSubMerchantBankAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindOpenBankExternalSubMerchantBankAccountRequest&;
    using Resp = BindOpenBankExternalSubMerchantBankAccountResponse;

    DoRequestAsync<Req, Resp>(
        "BindOpenBankExternalSubMerchantBankAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindOpenBankExternalSubMerchantBankAccountOutcomeCallable CpdpClient::BindOpenBankExternalSubMerchantBankAccountCallable(const BindOpenBankExternalSubMerchantBankAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindOpenBankExternalSubMerchantBankAccountOutcome>>();
    BindOpenBankExternalSubMerchantBankAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindOpenBankExternalSubMerchantBankAccountRequest&,
        BindOpenBankExternalSubMerchantBankAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindOpenBankProfitSharePayeeOutcome CpdpClient::BindOpenBankProfitSharePayee(const BindOpenBankProfitSharePayeeRequest &request)
{
    auto outcome = MakeRequest(request, "BindOpenBankProfitSharePayee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindOpenBankProfitSharePayeeResponse rsp = BindOpenBankProfitSharePayeeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindOpenBankProfitSharePayeeOutcome(rsp);
        else
            return BindOpenBankProfitSharePayeeOutcome(o.GetError());
    }
    else
    {
        return BindOpenBankProfitSharePayeeOutcome(outcome.GetError());
    }
}

void CpdpClient::BindOpenBankProfitSharePayeeAsync(const BindOpenBankProfitSharePayeeRequest& request, const BindOpenBankProfitSharePayeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindOpenBankProfitSharePayeeRequest&;
    using Resp = BindOpenBankProfitSharePayeeResponse;

    DoRequestAsync<Req, Resp>(
        "BindOpenBankProfitSharePayee", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindOpenBankProfitSharePayeeOutcomeCallable CpdpClient::BindOpenBankProfitSharePayeeCallable(const BindOpenBankProfitSharePayeeRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindOpenBankProfitSharePayeeOutcome>>();
    BindOpenBankProfitSharePayeeAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindOpenBankProfitSharePayeeRequest&,
        BindOpenBankProfitSharePayeeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindRelateAccReUnionPayOutcome CpdpClient::BindRelateAccReUnionPay(const BindRelateAccReUnionPayRequest &request)
{
    auto outcome = MakeRequest(request, "BindRelateAccReUnionPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindRelateAccReUnionPayResponse rsp = BindRelateAccReUnionPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindRelateAccReUnionPayOutcome(rsp);
        else
            return BindRelateAccReUnionPayOutcome(o.GetError());
    }
    else
    {
        return BindRelateAccReUnionPayOutcome(outcome.GetError());
    }
}

void CpdpClient::BindRelateAccReUnionPayAsync(const BindRelateAccReUnionPayRequest& request, const BindRelateAccReUnionPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindRelateAccReUnionPayRequest&;
    using Resp = BindRelateAccReUnionPayResponse;

    DoRequestAsync<Req, Resp>(
        "BindRelateAccReUnionPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindRelateAccReUnionPayOutcomeCallable CpdpClient::BindRelateAccReUnionPayCallable(const BindRelateAccReUnionPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindRelateAccReUnionPayOutcome>>();
    BindRelateAccReUnionPayAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindRelateAccReUnionPayRequest&,
        BindRelateAccReUnionPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindRelateAcctSmallAmountOutcome CpdpClient::BindRelateAcctSmallAmount(const BindRelateAcctSmallAmountRequest &request)
{
    auto outcome = MakeRequest(request, "BindRelateAcctSmallAmount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindRelateAcctSmallAmountResponse rsp = BindRelateAcctSmallAmountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindRelateAcctSmallAmountOutcome(rsp);
        else
            return BindRelateAcctSmallAmountOutcome(o.GetError());
    }
    else
    {
        return BindRelateAcctSmallAmountOutcome(outcome.GetError());
    }
}

void CpdpClient::BindRelateAcctSmallAmountAsync(const BindRelateAcctSmallAmountRequest& request, const BindRelateAcctSmallAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindRelateAcctSmallAmountRequest&;
    using Resp = BindRelateAcctSmallAmountResponse;

    DoRequestAsync<Req, Resp>(
        "BindRelateAcctSmallAmount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindRelateAcctSmallAmountOutcomeCallable CpdpClient::BindRelateAcctSmallAmountCallable(const BindRelateAcctSmallAmountRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindRelateAcctSmallAmountOutcome>>();
    BindRelateAcctSmallAmountAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindRelateAcctSmallAmountRequest&,
        BindRelateAcctSmallAmountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::BindRelateAcctUnionPayOutcome CpdpClient::BindRelateAcctUnionPay(const BindRelateAcctUnionPayRequest &request)
{
    auto outcome = MakeRequest(request, "BindRelateAcctUnionPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindRelateAcctUnionPayResponse rsp = BindRelateAcctUnionPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindRelateAcctUnionPayOutcome(rsp);
        else
            return BindRelateAcctUnionPayOutcome(o.GetError());
    }
    else
    {
        return BindRelateAcctUnionPayOutcome(outcome.GetError());
    }
}

void CpdpClient::BindRelateAcctUnionPayAsync(const BindRelateAcctUnionPayRequest& request, const BindRelateAcctUnionPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const BindRelateAcctUnionPayRequest&;
    using Resp = BindRelateAcctUnionPayResponse;

    DoRequestAsync<Req, Resp>(
        "BindRelateAcctUnionPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::BindRelateAcctUnionPayOutcomeCallable CpdpClient::BindRelateAcctUnionPayCallable(const BindRelateAcctUnionPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<BindRelateAcctUnionPayOutcome>>();
    BindRelateAcctUnionPayAsync(
    request,
    [prom](
        const CpdpClient*,
        const BindRelateAcctUnionPayRequest&,
        BindRelateAcctUnionPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CheckAcctOutcome CpdpClient::CheckAcct(const CheckAcctRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAcct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAcctResponse rsp = CheckAcctResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAcctOutcome(rsp);
        else
            return CheckAcctOutcome(o.GetError());
    }
    else
    {
        return CheckAcctOutcome(outcome.GetError());
    }
}

void CpdpClient::CheckAcctAsync(const CheckAcctRequest& request, const CheckAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAcctRequest&;
    using Resp = CheckAcctResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAcct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CheckAcctOutcomeCallable CpdpClient::CheckAcctCallable(const CheckAcctRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAcctOutcome>>();
    CheckAcctAsync(
    request,
    [prom](
        const CpdpClient*,
        const CheckAcctRequest&,
        CheckAcctOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CheckAmountOutcome CpdpClient::CheckAmount(const CheckAmountRequest &request)
{
    auto outcome = MakeRequest(request, "CheckAmount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckAmountResponse rsp = CheckAmountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckAmountOutcome(rsp);
        else
            return CheckAmountOutcome(o.GetError());
    }
    else
    {
        return CheckAmountOutcome(outcome.GetError());
    }
}

void CpdpClient::CheckAmountAsync(const CheckAmountRequest& request, const CheckAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CheckAmountRequest&;
    using Resp = CheckAmountResponse;

    DoRequestAsync<Req, Resp>(
        "CheckAmount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CheckAmountOutcomeCallable CpdpClient::CheckAmountCallable(const CheckAmountRequest &request)
{
    const auto prom = std::make_shared<std::promise<CheckAmountOutcome>>();
    CheckAmountAsync(
    request,
    [prom](
        const CpdpClient*,
        const CheckAmountRequest&,
        CheckAmountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CloseCloudOrderOutcome CpdpClient::CloseCloudOrder(const CloseCloudOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CloseCloudOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseCloudOrderResponse rsp = CloseCloudOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseCloudOrderOutcome(rsp);
        else
            return CloseCloudOrderOutcome(o.GetError());
    }
    else
    {
        return CloseCloudOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CloseCloudOrderAsync(const CloseCloudOrderRequest& request, const CloseCloudOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseCloudOrderRequest&;
    using Resp = CloseCloudOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CloseCloudOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CloseCloudOrderOutcomeCallable CpdpClient::CloseCloudOrderCallable(const CloseCloudOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseCloudOrderOutcome>>();
    CloseCloudOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CloseCloudOrderRequest&,
        CloseCloudOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CloseOpenBankPaymentOrderOutcome CpdpClient::CloseOpenBankPaymentOrder(const CloseOpenBankPaymentOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CloseOpenBankPaymentOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseOpenBankPaymentOrderResponse rsp = CloseOpenBankPaymentOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseOpenBankPaymentOrderOutcome(rsp);
        else
            return CloseOpenBankPaymentOrderOutcome(o.GetError());
    }
    else
    {
        return CloseOpenBankPaymentOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CloseOpenBankPaymentOrderAsync(const CloseOpenBankPaymentOrderRequest& request, const CloseOpenBankPaymentOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseOpenBankPaymentOrderRequest&;
    using Resp = CloseOpenBankPaymentOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CloseOpenBankPaymentOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CloseOpenBankPaymentOrderOutcomeCallable CpdpClient::CloseOpenBankPaymentOrderCallable(const CloseOpenBankPaymentOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseOpenBankPaymentOrderOutcome>>();
    CloseOpenBankPaymentOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CloseOpenBankPaymentOrderRequest&,
        CloseOpenBankPaymentOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CloseOrderOutcome CpdpClient::CloseOrder(const CloseOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CloseOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CloseOrderResponse rsp = CloseOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CloseOrderOutcome(rsp);
        else
            return CloseOrderOutcome(o.GetError());
    }
    else
    {
        return CloseOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CloseOrderAsync(const CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CloseOrderRequest&;
    using Resp = CloseOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CloseOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CloseOrderOutcomeCallable CpdpClient::CloseOrderCallable(const CloseOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CloseOrderOutcome>>();
    CloseOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CloseOrderRequest&,
        CloseOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ConfirmOrderOutcome CpdpClient::ConfirmOrder(const ConfirmOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ConfirmOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ConfirmOrderResponse rsp = ConfirmOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ConfirmOrderOutcome(rsp);
        else
            return ConfirmOrderOutcome(o.GetError());
    }
    else
    {
        return ConfirmOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::ConfirmOrderAsync(const ConfirmOrderRequest& request, const ConfirmOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ConfirmOrderRequest&;
    using Resp = ConfirmOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ConfirmOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ConfirmOrderOutcomeCallable CpdpClient::ConfirmOrderCallable(const ConfirmOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ConfirmOrderOutcome>>();
    ConfirmOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const ConfirmOrderRequest&,
        ConfirmOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ContractOrderOutcome CpdpClient::ContractOrder(const ContractOrderRequest &request)
{
    auto outcome = MakeRequest(request, "ContractOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ContractOrderResponse rsp = ContractOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ContractOrderOutcome(rsp);
        else
            return ContractOrderOutcome(o.GetError());
    }
    else
    {
        return ContractOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::ContractOrderAsync(const ContractOrderRequest& request, const ContractOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ContractOrderRequest&;
    using Resp = ContractOrderResponse;

    DoRequestAsync<Req, Resp>(
        "ContractOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ContractOrderOutcomeCallable CpdpClient::ContractOrderCallable(const ContractOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<ContractOrderOutcome>>();
    ContractOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const ContractOrderRequest&,
        ContractOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateAcctOutcome CpdpClient::CreateAcct(const CreateAcctRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAcct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAcctResponse rsp = CreateAcctResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAcctOutcome(rsp);
        else
            return CreateAcctOutcome(o.GetError());
    }
    else
    {
        return CreateAcctOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateAcctAsync(const CreateAcctRequest& request, const CreateAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAcctRequest&;
    using Resp = CreateAcctResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAcct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateAcctOutcomeCallable CpdpClient::CreateAcctCallable(const CreateAcctRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAcctOutcome>>();
    CreateAcctAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateAcctRequest&,
        CreateAcctOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateAgentTaxPaymentInfosOutcome CpdpClient::CreateAgentTaxPaymentInfos(const CreateAgentTaxPaymentInfosRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAgentTaxPaymentInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAgentTaxPaymentInfosResponse rsp = CreateAgentTaxPaymentInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAgentTaxPaymentInfosOutcome(rsp);
        else
            return CreateAgentTaxPaymentInfosOutcome(o.GetError());
    }
    else
    {
        return CreateAgentTaxPaymentInfosOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateAgentTaxPaymentInfosAsync(const CreateAgentTaxPaymentInfosRequest& request, const CreateAgentTaxPaymentInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAgentTaxPaymentInfosRequest&;
    using Resp = CreateAgentTaxPaymentInfosResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAgentTaxPaymentInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateAgentTaxPaymentInfosOutcomeCallable CpdpClient::CreateAgentTaxPaymentInfosCallable(const CreateAgentTaxPaymentInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAgentTaxPaymentInfosOutcome>>();
    CreateAgentTaxPaymentInfosAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateAgentTaxPaymentInfosRequest&,
        CreateAgentTaxPaymentInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateAnchorOutcome CpdpClient::CreateAnchor(const CreateAnchorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAnchor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAnchorResponse rsp = CreateAnchorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAnchorOutcome(rsp);
        else
            return CreateAnchorOutcome(o.GetError());
    }
    else
    {
        return CreateAnchorOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateAnchorAsync(const CreateAnchorRequest& request, const CreateAnchorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateAnchorRequest&;
    using Resp = CreateAnchorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateAnchor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateAnchorOutcomeCallable CpdpClient::CreateAnchorCallable(const CreateAnchorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateAnchorOutcome>>();
    CreateAnchorAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateAnchorRequest&,
        CreateAnchorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateBatchPaymentOutcome CpdpClient::CreateBatchPayment(const CreateBatchPaymentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBatchPayment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBatchPaymentResponse rsp = CreateBatchPaymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBatchPaymentOutcome(rsp);
        else
            return CreateBatchPaymentOutcome(o.GetError());
    }
    else
    {
        return CreateBatchPaymentOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateBatchPaymentAsync(const CreateBatchPaymentRequest& request, const CreateBatchPaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateBatchPaymentRequest&;
    using Resp = CreateBatchPaymentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateBatchPayment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateBatchPaymentOutcomeCallable CpdpClient::CreateBatchPaymentCallable(const CreateBatchPaymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateBatchPaymentOutcome>>();
    CreateBatchPaymentAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateBatchPaymentRequest&,
        CreateBatchPaymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateCloudSubMerchantOutcome CpdpClient::CreateCloudSubMerchant(const CreateCloudSubMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCloudSubMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCloudSubMerchantResponse rsp = CreateCloudSubMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCloudSubMerchantOutcome(rsp);
        else
            return CreateCloudSubMerchantOutcome(o.GetError());
    }
    else
    {
        return CreateCloudSubMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateCloudSubMerchantAsync(const CreateCloudSubMerchantRequest& request, const CreateCloudSubMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCloudSubMerchantRequest&;
    using Resp = CreateCloudSubMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCloudSubMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateCloudSubMerchantOutcomeCallable CpdpClient::CreateCloudSubMerchantCallable(const CreateCloudSubMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCloudSubMerchantOutcome>>();
    CreateCloudSubMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateCloudSubMerchantRequest&,
        CreateCloudSubMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateCustAcctIdOutcome CpdpClient::CreateCustAcctId(const CreateCustAcctIdRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustAcctId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustAcctIdResponse rsp = CreateCustAcctIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustAcctIdOutcome(rsp);
        else
            return CreateCustAcctIdOutcome(o.GetError());
    }
    else
    {
        return CreateCustAcctIdOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateCustAcctIdAsync(const CreateCustAcctIdRequest& request, const CreateCustAcctIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateCustAcctIdRequest&;
    using Resp = CreateCustAcctIdResponse;

    DoRequestAsync<Req, Resp>(
        "CreateCustAcctId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateCustAcctIdOutcomeCallable CpdpClient::CreateCustAcctIdCallable(const CreateCustAcctIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateCustAcctIdOutcome>>();
    CreateCustAcctIdAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateCustAcctIdRequest&,
        CreateCustAcctIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateExternalAnchorOutcome CpdpClient::CreateExternalAnchor(const CreateExternalAnchorRequest &request)
{
    auto outcome = MakeRequest(request, "CreateExternalAnchor");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateExternalAnchorResponse rsp = CreateExternalAnchorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateExternalAnchorOutcome(rsp);
        else
            return CreateExternalAnchorOutcome(o.GetError());
    }
    else
    {
        return CreateExternalAnchorOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateExternalAnchorAsync(const CreateExternalAnchorRequest& request, const CreateExternalAnchorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateExternalAnchorRequest&;
    using Resp = CreateExternalAnchorResponse;

    DoRequestAsync<Req, Resp>(
        "CreateExternalAnchor", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateExternalAnchorOutcomeCallable CpdpClient::CreateExternalAnchorCallable(const CreateExternalAnchorRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateExternalAnchorOutcome>>();
    CreateExternalAnchorAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateExternalAnchorRequest&,
        CreateExternalAnchorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateFlexPayeeOutcome CpdpClient::CreateFlexPayee(const CreateFlexPayeeRequest &request)
{
    auto outcome = MakeRequest(request, "CreateFlexPayee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateFlexPayeeResponse rsp = CreateFlexPayeeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateFlexPayeeOutcome(rsp);
        else
            return CreateFlexPayeeOutcome(o.GetError());
    }
    else
    {
        return CreateFlexPayeeOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateFlexPayeeAsync(const CreateFlexPayeeRequest& request, const CreateFlexPayeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateFlexPayeeRequest&;
    using Resp = CreateFlexPayeeResponse;

    DoRequestAsync<Req, Resp>(
        "CreateFlexPayee", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateFlexPayeeOutcomeCallable CpdpClient::CreateFlexPayeeCallable(const CreateFlexPayeeRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateFlexPayeeOutcome>>();
    CreateFlexPayeeAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateFlexPayeeRequest&,
        CreateFlexPayeeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateInvoiceOutcome CpdpClient::CreateInvoice(const CreateInvoiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateInvoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInvoiceResponse rsp = CreateInvoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInvoiceOutcome(rsp);
        else
            return CreateInvoiceOutcome(o.GetError());
    }
    else
    {
        return CreateInvoiceOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateInvoiceAsync(const CreateInvoiceRequest& request, const CreateInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInvoiceRequest&;
    using Resp = CreateInvoiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateInvoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateInvoiceOutcomeCallable CpdpClient::CreateInvoiceCallable(const CreateInvoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateInvoiceOutcome>>();
    CreateInvoiceAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateInvoiceRequest&,
        CreateInvoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateInvoiceV2Outcome CpdpClient::CreateInvoiceV2(const CreateInvoiceV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateInvoiceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateInvoiceV2Response rsp = CreateInvoiceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateInvoiceV2Outcome(rsp);
        else
            return CreateInvoiceV2Outcome(o.GetError());
    }
    else
    {
        return CreateInvoiceV2Outcome(outcome.GetError());
    }
}

void CpdpClient::CreateInvoiceV2Async(const CreateInvoiceV2Request& request, const CreateInvoiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateInvoiceV2Request&;
    using Resp = CreateInvoiceV2Response;

    DoRequestAsync<Req, Resp>(
        "CreateInvoiceV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateInvoiceV2OutcomeCallable CpdpClient::CreateInvoiceV2Callable(const CreateInvoiceV2Request &request)
{
    const auto prom = std::make_shared<std::promise<CreateInvoiceV2Outcome>>();
    CreateInvoiceV2Async(
    request,
    [prom](
        const CpdpClient*,
        const CreateInvoiceV2Request&,
        CreateInvoiceV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateMerchantOutcome CpdpClient::CreateMerchant(const CreateMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMerchantResponse rsp = CreateMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMerchantOutcome(rsp);
        else
            return CreateMerchantOutcome(o.GetError());
    }
    else
    {
        return CreateMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateMerchantAsync(const CreateMerchantRequest& request, const CreateMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateMerchantRequest&;
    using Resp = CreateMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "CreateMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateMerchantOutcomeCallable CpdpClient::CreateMerchantCallable(const CreateMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateMerchantOutcome>>();
    CreateMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateMerchantRequest&,
        CreateMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankAggregatedSubMerchantRegistrationOutcome CpdpClient::CreateOpenBankAggregatedSubMerchantRegistration(const CreateOpenBankAggregatedSubMerchantRegistrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankAggregatedSubMerchantRegistration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankAggregatedSubMerchantRegistrationResponse rsp = CreateOpenBankAggregatedSubMerchantRegistrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankAggregatedSubMerchantRegistrationOutcome(rsp);
        else
            return CreateOpenBankAggregatedSubMerchantRegistrationOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankAggregatedSubMerchantRegistrationOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankAggregatedSubMerchantRegistrationAsync(const CreateOpenBankAggregatedSubMerchantRegistrationRequest& request, const CreateOpenBankAggregatedSubMerchantRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankAggregatedSubMerchantRegistrationRequest&;
    using Resp = CreateOpenBankAggregatedSubMerchantRegistrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankAggregatedSubMerchantRegistration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankAggregatedSubMerchantRegistrationOutcomeCallable CpdpClient::CreateOpenBankAggregatedSubMerchantRegistrationCallable(const CreateOpenBankAggregatedSubMerchantRegistrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankAggregatedSubMerchantRegistrationOutcome>>();
    CreateOpenBankAggregatedSubMerchantRegistrationAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankAggregatedSubMerchantRegistrationRequest&,
        CreateOpenBankAggregatedSubMerchantRegistrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankExternalSubMerchantAccountBookOutcome CpdpClient::CreateOpenBankExternalSubMerchantAccountBook(const CreateOpenBankExternalSubMerchantAccountBookRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankExternalSubMerchantAccountBook");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankExternalSubMerchantAccountBookResponse rsp = CreateOpenBankExternalSubMerchantAccountBookResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankExternalSubMerchantAccountBookOutcome(rsp);
        else
            return CreateOpenBankExternalSubMerchantAccountBookOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankExternalSubMerchantAccountBookOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankExternalSubMerchantAccountBookAsync(const CreateOpenBankExternalSubMerchantAccountBookRequest& request, const CreateOpenBankExternalSubMerchantAccountBookAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankExternalSubMerchantAccountBookRequest&;
    using Resp = CreateOpenBankExternalSubMerchantAccountBookResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankExternalSubMerchantAccountBook", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankExternalSubMerchantAccountBookOutcomeCallable CpdpClient::CreateOpenBankExternalSubMerchantAccountBookCallable(const CreateOpenBankExternalSubMerchantAccountBookRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankExternalSubMerchantAccountBookOutcome>>();
    CreateOpenBankExternalSubMerchantAccountBookAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankExternalSubMerchantAccountBookRequest&,
        CreateOpenBankExternalSubMerchantAccountBookOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankExternalSubMerchantRegistrationOutcome CpdpClient::CreateOpenBankExternalSubMerchantRegistration(const CreateOpenBankExternalSubMerchantRegistrationRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankExternalSubMerchantRegistration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankExternalSubMerchantRegistrationResponse rsp = CreateOpenBankExternalSubMerchantRegistrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankExternalSubMerchantRegistrationOutcome(rsp);
        else
            return CreateOpenBankExternalSubMerchantRegistrationOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankExternalSubMerchantRegistrationOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankExternalSubMerchantRegistrationAsync(const CreateOpenBankExternalSubMerchantRegistrationRequest& request, const CreateOpenBankExternalSubMerchantRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankExternalSubMerchantRegistrationRequest&;
    using Resp = CreateOpenBankExternalSubMerchantRegistrationResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankExternalSubMerchantRegistration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankExternalSubMerchantRegistrationOutcomeCallable CpdpClient::CreateOpenBankExternalSubMerchantRegistrationCallable(const CreateOpenBankExternalSubMerchantRegistrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankExternalSubMerchantRegistrationOutcome>>();
    CreateOpenBankExternalSubMerchantRegistrationAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankExternalSubMerchantRegistrationRequest&,
        CreateOpenBankExternalSubMerchantRegistrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankGlobalPaymentOrderOutcome CpdpClient::CreateOpenBankGlobalPaymentOrder(const CreateOpenBankGlobalPaymentOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankGlobalPaymentOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankGlobalPaymentOrderResponse rsp = CreateOpenBankGlobalPaymentOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankGlobalPaymentOrderOutcome(rsp);
        else
            return CreateOpenBankGlobalPaymentOrderOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankGlobalPaymentOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankGlobalPaymentOrderAsync(const CreateOpenBankGlobalPaymentOrderRequest& request, const CreateOpenBankGlobalPaymentOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankGlobalPaymentOrderRequest&;
    using Resp = CreateOpenBankGlobalPaymentOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankGlobalPaymentOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankGlobalPaymentOrderOutcomeCallable CpdpClient::CreateOpenBankGlobalPaymentOrderCallable(const CreateOpenBankGlobalPaymentOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankGlobalPaymentOrderOutcome>>();
    CreateOpenBankGlobalPaymentOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankGlobalPaymentOrderRequest&,
        CreateOpenBankGlobalPaymentOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankMerchantOutcome CpdpClient::CreateOpenBankMerchant(const CreateOpenBankMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankMerchantResponse rsp = CreateOpenBankMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankMerchantOutcome(rsp);
        else
            return CreateOpenBankMerchantOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankMerchantAsync(const CreateOpenBankMerchantRequest& request, const CreateOpenBankMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankMerchantRequest&;
    using Resp = CreateOpenBankMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankMerchantOutcomeCallable CpdpClient::CreateOpenBankMerchantCallable(const CreateOpenBankMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankMerchantOutcome>>();
    CreateOpenBankMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankMerchantRequest&,
        CreateOpenBankMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankPaymentOrderOutcome CpdpClient::CreateOpenBankPaymentOrder(const CreateOpenBankPaymentOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankPaymentOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankPaymentOrderResponse rsp = CreateOpenBankPaymentOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankPaymentOrderOutcome(rsp);
        else
            return CreateOpenBankPaymentOrderOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankPaymentOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankPaymentOrderAsync(const CreateOpenBankPaymentOrderRequest& request, const CreateOpenBankPaymentOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankPaymentOrderRequest&;
    using Resp = CreateOpenBankPaymentOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankPaymentOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankPaymentOrderOutcomeCallable CpdpClient::CreateOpenBankPaymentOrderCallable(const CreateOpenBankPaymentOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankPaymentOrderOutcome>>();
    CreateOpenBankPaymentOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankPaymentOrderRequest&,
        CreateOpenBankPaymentOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankRechargeOrderOutcome CpdpClient::CreateOpenBankRechargeOrder(const CreateOpenBankRechargeOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankRechargeOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankRechargeOrderResponse rsp = CreateOpenBankRechargeOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankRechargeOrderOutcome(rsp);
        else
            return CreateOpenBankRechargeOrderOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankRechargeOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankRechargeOrderAsync(const CreateOpenBankRechargeOrderRequest& request, const CreateOpenBankRechargeOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankRechargeOrderRequest&;
    using Resp = CreateOpenBankRechargeOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankRechargeOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankRechargeOrderOutcomeCallable CpdpClient::CreateOpenBankRechargeOrderCallable(const CreateOpenBankRechargeOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankRechargeOrderOutcome>>();
    CreateOpenBankRechargeOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankRechargeOrderRequest&,
        CreateOpenBankRechargeOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankSubMerchantRateConfigureOutcome CpdpClient::CreateOpenBankSubMerchantRateConfigure(const CreateOpenBankSubMerchantRateConfigureRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankSubMerchantRateConfigure");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankSubMerchantRateConfigureResponse rsp = CreateOpenBankSubMerchantRateConfigureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankSubMerchantRateConfigureOutcome(rsp);
        else
            return CreateOpenBankSubMerchantRateConfigureOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankSubMerchantRateConfigureOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankSubMerchantRateConfigureAsync(const CreateOpenBankSubMerchantRateConfigureRequest& request, const CreateOpenBankSubMerchantRateConfigureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankSubMerchantRateConfigureRequest&;
    using Resp = CreateOpenBankSubMerchantRateConfigureResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankSubMerchantRateConfigure", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankSubMerchantRateConfigureOutcomeCallable CpdpClient::CreateOpenBankSubMerchantRateConfigureCallable(const CreateOpenBankSubMerchantRateConfigureRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankSubMerchantRateConfigureOutcome>>();
    CreateOpenBankSubMerchantRateConfigureAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankSubMerchantRateConfigureRequest&,
        CreateOpenBankSubMerchantRateConfigureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankUnifiedOrderOutcome CpdpClient::CreateOpenBankUnifiedOrder(const CreateOpenBankUnifiedOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankUnifiedOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankUnifiedOrderResponse rsp = CreateOpenBankUnifiedOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankUnifiedOrderOutcome(rsp);
        else
            return CreateOpenBankUnifiedOrderOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankUnifiedOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankUnifiedOrderAsync(const CreateOpenBankUnifiedOrderRequest& request, const CreateOpenBankUnifiedOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankUnifiedOrderRequest&;
    using Resp = CreateOpenBankUnifiedOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankUnifiedOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankUnifiedOrderOutcomeCallable CpdpClient::CreateOpenBankUnifiedOrderCallable(const CreateOpenBankUnifiedOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankUnifiedOrderOutcome>>();
    CreateOpenBankUnifiedOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankUnifiedOrderRequest&,
        CreateOpenBankUnifiedOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOpenBankVerificationOrderOutcome CpdpClient::CreateOpenBankVerificationOrder(const CreateOpenBankVerificationOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOpenBankVerificationOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOpenBankVerificationOrderResponse rsp = CreateOpenBankVerificationOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOpenBankVerificationOrderOutcome(rsp);
        else
            return CreateOpenBankVerificationOrderOutcome(o.GetError());
    }
    else
    {
        return CreateOpenBankVerificationOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOpenBankVerificationOrderAsync(const CreateOpenBankVerificationOrderRequest& request, const CreateOpenBankVerificationOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOpenBankVerificationOrderRequest&;
    using Resp = CreateOpenBankVerificationOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOpenBankVerificationOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOpenBankVerificationOrderOutcomeCallable CpdpClient::CreateOpenBankVerificationOrderCallable(const CreateOpenBankVerificationOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOpenBankVerificationOrderOutcome>>();
    CreateOpenBankVerificationOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOpenBankVerificationOrderRequest&,
        CreateOpenBankVerificationOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateOrderOutcome CpdpClient::CreateOrder(const CreateOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreateOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateOrderResponse rsp = CreateOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateOrderOutcome(rsp);
        else
            return CreateOrderOutcome(o.GetError());
    }
    else
    {
        return CreateOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateOrderAsync(const CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateOrderRequest&;
    using Resp = CreateOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreateOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateOrderOutcomeCallable CpdpClient::CreateOrderCallable(const CreateOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateOrderOutcome>>();
    CreateOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateOrderRequest&,
        CreateOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreatePayMerchantOutcome CpdpClient::CreatePayMerchant(const CreatePayMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePayMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePayMerchantResponse rsp = CreatePayMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePayMerchantOutcome(rsp);
        else
            return CreatePayMerchantOutcome(o.GetError());
    }
    else
    {
        return CreatePayMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::CreatePayMerchantAsync(const CreatePayMerchantRequest& request, const CreatePayMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePayMerchantRequest&;
    using Resp = CreatePayMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePayMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreatePayMerchantOutcomeCallable CpdpClient::CreatePayMerchantCallable(const CreatePayMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePayMerchantOutcome>>();
    CreatePayMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreatePayMerchantRequest&,
        CreatePayMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreatePayRollPreOrderOutcome CpdpClient::CreatePayRollPreOrder(const CreatePayRollPreOrderRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePayRollPreOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePayRollPreOrderResponse rsp = CreatePayRollPreOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePayRollPreOrderOutcome(rsp);
        else
            return CreatePayRollPreOrderOutcome(o.GetError());
    }
    else
    {
        return CreatePayRollPreOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::CreatePayRollPreOrderAsync(const CreatePayRollPreOrderRequest& request, const CreatePayRollPreOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePayRollPreOrderRequest&;
    using Resp = CreatePayRollPreOrderResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePayRollPreOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreatePayRollPreOrderOutcomeCallable CpdpClient::CreatePayRollPreOrderCallable(const CreatePayRollPreOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePayRollPreOrderOutcome>>();
    CreatePayRollPreOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreatePayRollPreOrderRequest&,
        CreatePayRollPreOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreatePayRollPreOrderWithAuthOutcome CpdpClient::CreatePayRollPreOrderWithAuth(const CreatePayRollPreOrderWithAuthRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePayRollPreOrderWithAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePayRollPreOrderWithAuthResponse rsp = CreatePayRollPreOrderWithAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePayRollPreOrderWithAuthOutcome(rsp);
        else
            return CreatePayRollPreOrderWithAuthOutcome(o.GetError());
    }
    else
    {
        return CreatePayRollPreOrderWithAuthOutcome(outcome.GetError());
    }
}

void CpdpClient::CreatePayRollPreOrderWithAuthAsync(const CreatePayRollPreOrderWithAuthRequest& request, const CreatePayRollPreOrderWithAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePayRollPreOrderWithAuthRequest&;
    using Resp = CreatePayRollPreOrderWithAuthResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePayRollPreOrderWithAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreatePayRollPreOrderWithAuthOutcomeCallable CpdpClient::CreatePayRollPreOrderWithAuthCallable(const CreatePayRollPreOrderWithAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePayRollPreOrderWithAuthOutcome>>();
    CreatePayRollPreOrderWithAuthAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreatePayRollPreOrderWithAuthRequest&,
        CreatePayRollPreOrderWithAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreatePayRollTokenOutcome CpdpClient::CreatePayRollToken(const CreatePayRollTokenRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePayRollToken");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePayRollTokenResponse rsp = CreatePayRollTokenResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePayRollTokenOutcome(rsp);
        else
            return CreatePayRollTokenOutcome(o.GetError());
    }
    else
    {
        return CreatePayRollTokenOutcome(outcome.GetError());
    }
}

void CpdpClient::CreatePayRollTokenAsync(const CreatePayRollTokenRequest& request, const CreatePayRollTokenAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreatePayRollTokenRequest&;
    using Resp = CreatePayRollTokenResponse;

    DoRequestAsync<Req, Resp>(
        "CreatePayRollToken", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreatePayRollTokenOutcomeCallable CpdpClient::CreatePayRollTokenCallable(const CreatePayRollTokenRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreatePayRollTokenOutcome>>();
    CreatePayRollTokenAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreatePayRollTokenRequest&,
        CreatePayRollTokenOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateRedInvoiceOutcome CpdpClient::CreateRedInvoice(const CreateRedInvoiceRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRedInvoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRedInvoiceResponse rsp = CreateRedInvoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRedInvoiceOutcome(rsp);
        else
            return CreateRedInvoiceOutcome(o.GetError());
    }
    else
    {
        return CreateRedInvoiceOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateRedInvoiceAsync(const CreateRedInvoiceRequest& request, const CreateRedInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRedInvoiceRequest&;
    using Resp = CreateRedInvoiceResponse;

    DoRequestAsync<Req, Resp>(
        "CreateRedInvoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateRedInvoiceOutcomeCallable CpdpClient::CreateRedInvoiceCallable(const CreateRedInvoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateRedInvoiceOutcome>>();
    CreateRedInvoiceAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateRedInvoiceRequest&,
        CreateRedInvoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateRedInvoiceV2Outcome CpdpClient::CreateRedInvoiceV2(const CreateRedInvoiceV2Request &request)
{
    auto outcome = MakeRequest(request, "CreateRedInvoiceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRedInvoiceV2Response rsp = CreateRedInvoiceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRedInvoiceV2Outcome(rsp);
        else
            return CreateRedInvoiceV2Outcome(o.GetError());
    }
    else
    {
        return CreateRedInvoiceV2Outcome(outcome.GetError());
    }
}

void CpdpClient::CreateRedInvoiceV2Async(const CreateRedInvoiceV2Request& request, const CreateRedInvoiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateRedInvoiceV2Request&;
    using Resp = CreateRedInvoiceV2Response;

    DoRequestAsync<Req, Resp>(
        "CreateRedInvoiceV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateRedInvoiceV2OutcomeCallable CpdpClient::CreateRedInvoiceV2Callable(const CreateRedInvoiceV2Request &request)
{
    const auto prom = std::make_shared<std::promise<CreateRedInvoiceV2Outcome>>();
    CreateRedInvoiceV2Async(
    request,
    [prom](
        const CpdpClient*,
        const CreateRedInvoiceV2Request&,
        CreateRedInvoiceV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateSinglePaymentOutcome CpdpClient::CreateSinglePayment(const CreateSinglePaymentRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSinglePayment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSinglePaymentResponse rsp = CreateSinglePaymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSinglePaymentOutcome(rsp);
        else
            return CreateSinglePaymentOutcome(o.GetError());
    }
    else
    {
        return CreateSinglePaymentOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateSinglePaymentAsync(const CreateSinglePaymentRequest& request, const CreateSinglePaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateSinglePaymentRequest&;
    using Resp = CreateSinglePaymentResponse;

    DoRequestAsync<Req, Resp>(
        "CreateSinglePayment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateSinglePaymentOutcomeCallable CpdpClient::CreateSinglePaymentCallable(const CreateSinglePaymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateSinglePaymentOutcome>>();
    CreateSinglePaymentAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateSinglePaymentRequest&,
        CreateSinglePaymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::CreateTransferBatchOutcome CpdpClient::CreateTransferBatch(const CreateTransferBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTransferBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTransferBatchResponse rsp = CreateTransferBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTransferBatchOutcome(rsp);
        else
            return CreateTransferBatchOutcome(o.GetError());
    }
    else
    {
        return CreateTransferBatchOutcome(outcome.GetError());
    }
}

void CpdpClient::CreateTransferBatchAsync(const CreateTransferBatchRequest& request, const CreateTransferBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const CreateTransferBatchRequest&;
    using Resp = CreateTransferBatchResponse;

    DoRequestAsync<Req, Resp>(
        "CreateTransferBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::CreateTransferBatchOutcomeCallable CpdpClient::CreateTransferBatchCallable(const CreateTransferBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<CreateTransferBatchOutcome>>();
    CreateTransferBatchAsync(
    request,
    [prom](
        const CpdpClient*,
        const CreateTransferBatchRequest&,
        CreateTransferBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DeduceQuotaOutcome CpdpClient::DeduceQuota(const DeduceQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DeduceQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeduceQuotaResponse rsp = DeduceQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeduceQuotaOutcome(rsp);
        else
            return DeduceQuotaOutcome(o.GetError());
    }
    else
    {
        return DeduceQuotaOutcome(outcome.GetError());
    }
}

void CpdpClient::DeduceQuotaAsync(const DeduceQuotaRequest& request, const DeduceQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeduceQuotaRequest&;
    using Resp = DeduceQuotaResponse;

    DoRequestAsync<Req, Resp>(
        "DeduceQuota", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DeduceQuotaOutcomeCallable CpdpClient::DeduceQuotaCallable(const DeduceQuotaRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeduceQuotaOutcome>>();
    DeduceQuotaAsync(
    request,
    [prom](
        const CpdpClient*,
        const DeduceQuotaRequest&,
        DeduceQuotaOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DeleteAgentTaxPaymentInfoOutcome CpdpClient::DeleteAgentTaxPaymentInfo(const DeleteAgentTaxPaymentInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentTaxPaymentInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentTaxPaymentInfoResponse rsp = DeleteAgentTaxPaymentInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentTaxPaymentInfoOutcome(rsp);
        else
            return DeleteAgentTaxPaymentInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentTaxPaymentInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::DeleteAgentTaxPaymentInfoAsync(const DeleteAgentTaxPaymentInfoRequest& request, const DeleteAgentTaxPaymentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentTaxPaymentInfoRequest&;
    using Resp = DeleteAgentTaxPaymentInfoResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgentTaxPaymentInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DeleteAgentTaxPaymentInfoOutcomeCallable CpdpClient::DeleteAgentTaxPaymentInfoCallable(const DeleteAgentTaxPaymentInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentTaxPaymentInfoOutcome>>();
    DeleteAgentTaxPaymentInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const DeleteAgentTaxPaymentInfoRequest&,
        DeleteAgentTaxPaymentInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DeleteAgentTaxPaymentInfosOutcome CpdpClient::DeleteAgentTaxPaymentInfos(const DeleteAgentTaxPaymentInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAgentTaxPaymentInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAgentTaxPaymentInfosResponse rsp = DeleteAgentTaxPaymentInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAgentTaxPaymentInfosOutcome(rsp);
        else
            return DeleteAgentTaxPaymentInfosOutcome(o.GetError());
    }
    else
    {
        return DeleteAgentTaxPaymentInfosOutcome(outcome.GetError());
    }
}

void CpdpClient::DeleteAgentTaxPaymentInfosAsync(const DeleteAgentTaxPaymentInfosRequest& request, const DeleteAgentTaxPaymentInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DeleteAgentTaxPaymentInfosRequest&;
    using Resp = DeleteAgentTaxPaymentInfosResponse;

    DoRequestAsync<Req, Resp>(
        "DeleteAgentTaxPaymentInfos", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DeleteAgentTaxPaymentInfosOutcomeCallable CpdpClient::DeleteAgentTaxPaymentInfosCallable(const DeleteAgentTaxPaymentInfosRequest &request)
{
    const auto prom = std::make_shared<std::promise<DeleteAgentTaxPaymentInfosOutcome>>();
    DeleteAgentTaxPaymentInfosAsync(
    request,
    [prom](
        const CpdpClient*,
        const DeleteAgentTaxPaymentInfosRequest&,
        DeleteAgentTaxPaymentInfosOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DescribeChargeDetailOutcome CpdpClient::DescribeChargeDetail(const DescribeChargeDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeChargeDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeChargeDetailResponse rsp = DescribeChargeDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeChargeDetailOutcome(rsp);
        else
            return DescribeChargeDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeChargeDetailOutcome(outcome.GetError());
    }
}

void CpdpClient::DescribeChargeDetailAsync(const DescribeChargeDetailRequest& request, const DescribeChargeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeChargeDetailRequest&;
    using Resp = DescribeChargeDetailResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeChargeDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DescribeChargeDetailOutcomeCallable CpdpClient::DescribeChargeDetailCallable(const DescribeChargeDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeChargeDetailOutcome>>();
    DescribeChargeDetailAsync(
    request,
    [prom](
        const CpdpClient*,
        const DescribeChargeDetailRequest&,
        DescribeChargeDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DescribeOrderStatusOutcome CpdpClient::DescribeOrderStatus(const DescribeOrderStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOrderStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOrderStatusResponse rsp = DescribeOrderStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOrderStatusOutcome(rsp);
        else
            return DescribeOrderStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeOrderStatusOutcome(outcome.GetError());
    }
}

void CpdpClient::DescribeOrderStatusAsync(const DescribeOrderStatusRequest& request, const DescribeOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DescribeOrderStatusRequest&;
    using Resp = DescribeOrderStatusResponse;

    DoRequestAsync<Req, Resp>(
        "DescribeOrderStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DescribeOrderStatusOutcomeCallable CpdpClient::DescribeOrderStatusCallable(const DescribeOrderStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<DescribeOrderStatusOutcome>>();
    DescribeOrderStatusAsync(
    request,
    [prom](
        const CpdpClient*,
        const DescribeOrderStatusRequest&,
        DescribeOrderStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeAccreditQueryOutcome CpdpClient::DistributeAccreditQuery(const DistributeAccreditQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeAccreditQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeAccreditQueryResponse rsp = DistributeAccreditQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeAccreditQueryOutcome(rsp);
        else
            return DistributeAccreditQueryOutcome(o.GetError());
    }
    else
    {
        return DistributeAccreditQueryOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeAccreditQueryAsync(const DistributeAccreditQueryRequest& request, const DistributeAccreditQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeAccreditQueryRequest&;
    using Resp = DistributeAccreditQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeAccreditQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeAccreditQueryOutcomeCallable CpdpClient::DistributeAccreditQueryCallable(const DistributeAccreditQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeAccreditQueryOutcome>>();
    DistributeAccreditQueryAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeAccreditQueryRequest&,
        DistributeAccreditQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeAccreditTlinxOutcome CpdpClient::DistributeAccreditTlinx(const DistributeAccreditTlinxRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeAccreditTlinx");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeAccreditTlinxResponse rsp = DistributeAccreditTlinxResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeAccreditTlinxOutcome(rsp);
        else
            return DistributeAccreditTlinxOutcome(o.GetError());
    }
    else
    {
        return DistributeAccreditTlinxOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeAccreditTlinxAsync(const DistributeAccreditTlinxRequest& request, const DistributeAccreditTlinxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeAccreditTlinxRequest&;
    using Resp = DistributeAccreditTlinxResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeAccreditTlinx", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeAccreditTlinxOutcomeCallable CpdpClient::DistributeAccreditTlinxCallable(const DistributeAccreditTlinxRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeAccreditTlinxOutcome>>();
    DistributeAccreditTlinxAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeAccreditTlinxRequest&,
        DistributeAccreditTlinxOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeAddReceiverOutcome CpdpClient::DistributeAddReceiver(const DistributeAddReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeAddReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeAddReceiverResponse rsp = DistributeAddReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeAddReceiverOutcome(rsp);
        else
            return DistributeAddReceiverOutcome(o.GetError());
    }
    else
    {
        return DistributeAddReceiverOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeAddReceiverAsync(const DistributeAddReceiverRequest& request, const DistributeAddReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeAddReceiverRequest&;
    using Resp = DistributeAddReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeAddReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeAddReceiverOutcomeCallable CpdpClient::DistributeAddReceiverCallable(const DistributeAddReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeAddReceiverOutcome>>();
    DistributeAddReceiverAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeAddReceiverRequest&,
        DistributeAddReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeApplyOutcome CpdpClient::DistributeApply(const DistributeApplyRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeApply");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeApplyResponse rsp = DistributeApplyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeApplyOutcome(rsp);
        else
            return DistributeApplyOutcome(o.GetError());
    }
    else
    {
        return DistributeApplyOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeApplyAsync(const DistributeApplyRequest& request, const DistributeApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeApplyRequest&;
    using Resp = DistributeApplyResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeApply", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeApplyOutcomeCallable CpdpClient::DistributeApplyCallable(const DistributeApplyRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeApplyOutcome>>();
    DistributeApplyAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeApplyRequest&,
        DistributeApplyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeCancelOutcome CpdpClient::DistributeCancel(const DistributeCancelRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeCancel");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeCancelResponse rsp = DistributeCancelResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeCancelOutcome(rsp);
        else
            return DistributeCancelOutcome(o.GetError());
    }
    else
    {
        return DistributeCancelOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeCancelAsync(const DistributeCancelRequest& request, const DistributeCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeCancelRequest&;
    using Resp = DistributeCancelResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeCancel", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeCancelOutcomeCallable CpdpClient::DistributeCancelCallable(const DistributeCancelRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeCancelOutcome>>();
    DistributeCancelAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeCancelRequest&,
        DistributeCancelOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeQueryOutcome CpdpClient::DistributeQuery(const DistributeQueryRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeQueryResponse rsp = DistributeQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeQueryOutcome(rsp);
        else
            return DistributeQueryOutcome(o.GetError());
    }
    else
    {
        return DistributeQueryOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeQueryAsync(const DistributeQueryRequest& request, const DistributeQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeQueryRequest&;
    using Resp = DistributeQueryResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeQueryOutcomeCallable CpdpClient::DistributeQueryCallable(const DistributeQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeQueryOutcome>>();
    DistributeQueryAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeQueryRequest&,
        DistributeQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeQueryReceiverOutcome CpdpClient::DistributeQueryReceiver(const DistributeQueryReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeQueryReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeQueryReceiverResponse rsp = DistributeQueryReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeQueryReceiverOutcome(rsp);
        else
            return DistributeQueryReceiverOutcome(o.GetError());
    }
    else
    {
        return DistributeQueryReceiverOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeQueryReceiverAsync(const DistributeQueryReceiverRequest& request, const DistributeQueryReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeQueryReceiverRequest&;
    using Resp = DistributeQueryReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeQueryReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeQueryReceiverOutcomeCallable CpdpClient::DistributeQueryReceiverCallable(const DistributeQueryReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeQueryReceiverOutcome>>();
    DistributeQueryReceiverAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeQueryReceiverRequest&,
        DistributeQueryReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DistributeRemoveReceiverOutcome CpdpClient::DistributeRemoveReceiver(const DistributeRemoveReceiverRequest &request)
{
    auto outcome = MakeRequest(request, "DistributeRemoveReceiver");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DistributeRemoveReceiverResponse rsp = DistributeRemoveReceiverResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DistributeRemoveReceiverOutcome(rsp);
        else
            return DistributeRemoveReceiverOutcome(o.GetError());
    }
    else
    {
        return DistributeRemoveReceiverOutcome(outcome.GetError());
    }
}

void CpdpClient::DistributeRemoveReceiverAsync(const DistributeRemoveReceiverRequest& request, const DistributeRemoveReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DistributeRemoveReceiverRequest&;
    using Resp = DistributeRemoveReceiverResponse;

    DoRequestAsync<Req, Resp>(
        "DistributeRemoveReceiver", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DistributeRemoveReceiverOutcomeCallable CpdpClient::DistributeRemoveReceiverCallable(const DistributeRemoveReceiverRequest &request)
{
    const auto prom = std::make_shared<std::promise<DistributeRemoveReceiverOutcome>>();
    DistributeRemoveReceiverAsync(
    request,
    [prom](
        const CpdpClient*,
        const DistributeRemoveReceiverRequest&,
        DistributeRemoveReceiverOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DownloadBillOutcome CpdpClient::DownloadBill(const DownloadBillRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadBill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadBillResponse rsp = DownloadBillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadBillOutcome(rsp);
        else
            return DownloadBillOutcome(o.GetError());
    }
    else
    {
        return DownloadBillOutcome(outcome.GetError());
    }
}

void CpdpClient::DownloadBillAsync(const DownloadBillRequest& request, const DownloadBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadBillRequest&;
    using Resp = DownloadBillResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadBill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DownloadBillOutcomeCallable CpdpClient::DownloadBillCallable(const DownloadBillRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadBillOutcome>>();
    DownloadBillAsync(
    request,
    [prom](
        const CpdpClient*,
        const DownloadBillRequest&,
        DownloadBillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DownloadOrgFileOutcome CpdpClient::DownloadOrgFile(const DownloadOrgFileRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadOrgFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadOrgFileResponse rsp = DownloadOrgFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadOrgFileOutcome(rsp);
        else
            return DownloadOrgFileOutcome(o.GetError());
    }
    else
    {
        return DownloadOrgFileOutcome(outcome.GetError());
    }
}

void CpdpClient::DownloadOrgFileAsync(const DownloadOrgFileRequest& request, const DownloadOrgFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadOrgFileRequest&;
    using Resp = DownloadOrgFileResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadOrgFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DownloadOrgFileOutcomeCallable CpdpClient::DownloadOrgFileCallable(const DownloadOrgFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadOrgFileOutcome>>();
    DownloadOrgFileAsync(
    request,
    [prom](
        const CpdpClient*,
        const DownloadOrgFileRequest&,
        DownloadOrgFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::DownloadReconciliationUrlOutcome CpdpClient::DownloadReconciliationUrl(const DownloadReconciliationUrlRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadReconciliationUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadReconciliationUrlResponse rsp = DownloadReconciliationUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadReconciliationUrlOutcome(rsp);
        else
            return DownloadReconciliationUrlOutcome(o.GetError());
    }
    else
    {
        return DownloadReconciliationUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::DownloadReconciliationUrlAsync(const DownloadReconciliationUrlRequest& request, const DownloadReconciliationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const DownloadReconciliationUrlRequest&;
    using Resp = DownloadReconciliationUrlResponse;

    DoRequestAsync<Req, Resp>(
        "DownloadReconciliationUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::DownloadReconciliationUrlOutcomeCallable CpdpClient::DownloadReconciliationUrlCallable(const DownloadReconciliationUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<DownloadReconciliationUrlOutcome>>();
    DownloadReconciliationUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const DownloadReconciliationUrlRequest&,
        DownloadReconciliationUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ExecuteMemberTransactionOutcome CpdpClient::ExecuteMemberTransaction(const ExecuteMemberTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "ExecuteMemberTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ExecuteMemberTransactionResponse rsp = ExecuteMemberTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ExecuteMemberTransactionOutcome(rsp);
        else
            return ExecuteMemberTransactionOutcome(o.GetError());
    }
    else
    {
        return ExecuteMemberTransactionOutcome(outcome.GetError());
    }
}

void CpdpClient::ExecuteMemberTransactionAsync(const ExecuteMemberTransactionRequest& request, const ExecuteMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ExecuteMemberTransactionRequest&;
    using Resp = ExecuteMemberTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "ExecuteMemberTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ExecuteMemberTransactionOutcomeCallable CpdpClient::ExecuteMemberTransactionCallable(const ExecuteMemberTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<ExecuteMemberTransactionOutcome>>();
    ExecuteMemberTransactionAsync(
    request,
    [prom](
        const CpdpClient*,
        const ExecuteMemberTransactionRequest&,
        ExecuteMemberTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::FreezeFlexBalanceOutcome CpdpClient::FreezeFlexBalance(const FreezeFlexBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "FreezeFlexBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        FreezeFlexBalanceResponse rsp = FreezeFlexBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return FreezeFlexBalanceOutcome(rsp);
        else
            return FreezeFlexBalanceOutcome(o.GetError());
    }
    else
    {
        return FreezeFlexBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::FreezeFlexBalanceAsync(const FreezeFlexBalanceRequest& request, const FreezeFlexBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const FreezeFlexBalanceRequest&;
    using Resp = FreezeFlexBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "FreezeFlexBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::FreezeFlexBalanceOutcomeCallable CpdpClient::FreezeFlexBalanceCallable(const FreezeFlexBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<FreezeFlexBalanceOutcome>>();
    FreezeFlexBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const FreezeFlexBalanceRequest&,
        FreezeFlexBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::GetBillDownloadUrlOutcome CpdpClient::GetBillDownloadUrl(const GetBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetBillDownloadUrlResponse rsp = GetBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetBillDownloadUrlOutcome(rsp);
        else
            return GetBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return GetBillDownloadUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::GetBillDownloadUrlAsync(const GetBillDownloadUrlRequest& request, const GetBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetBillDownloadUrlRequest&;
    using Resp = GetBillDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "GetBillDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::GetBillDownloadUrlOutcomeCallable CpdpClient::GetBillDownloadUrlCallable(const GetBillDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetBillDownloadUrlOutcome>>();
    GetBillDownloadUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const GetBillDownloadUrlRequest&,
        GetBillDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::GetDistributeBillDownloadUrlOutcome CpdpClient::GetDistributeBillDownloadUrl(const GetDistributeBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "GetDistributeBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDistributeBillDownloadUrlResponse rsp = GetDistributeBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDistributeBillDownloadUrlOutcome(rsp);
        else
            return GetDistributeBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return GetDistributeBillDownloadUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::GetDistributeBillDownloadUrlAsync(const GetDistributeBillDownloadUrlRequest& request, const GetDistributeBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetDistributeBillDownloadUrlRequest&;
    using Resp = GetDistributeBillDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "GetDistributeBillDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::GetDistributeBillDownloadUrlOutcomeCallable CpdpClient::GetDistributeBillDownloadUrlCallable(const GetDistributeBillDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetDistributeBillDownloadUrlOutcome>>();
    GetDistributeBillDownloadUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const GetDistributeBillDownloadUrlRequest&,
        GetDistributeBillDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::GetPayRollAuthOutcome CpdpClient::GetPayRollAuth(const GetPayRollAuthRequest &request)
{
    auto outcome = MakeRequest(request, "GetPayRollAuth");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPayRollAuthResponse rsp = GetPayRollAuthResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPayRollAuthOutcome(rsp);
        else
            return GetPayRollAuthOutcome(o.GetError());
    }
    else
    {
        return GetPayRollAuthOutcome(outcome.GetError());
    }
}

void CpdpClient::GetPayRollAuthAsync(const GetPayRollAuthRequest& request, const GetPayRollAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPayRollAuthRequest&;
    using Resp = GetPayRollAuthResponse;

    DoRequestAsync<Req, Resp>(
        "GetPayRollAuth", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::GetPayRollAuthOutcomeCallable CpdpClient::GetPayRollAuthCallable(const GetPayRollAuthRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPayRollAuthOutcome>>();
    GetPayRollAuthAsync(
    request,
    [prom](
        const CpdpClient*,
        const GetPayRollAuthRequest&,
        GetPayRollAuthOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::GetPayRollAuthListOutcome CpdpClient::GetPayRollAuthList(const GetPayRollAuthListRequest &request)
{
    auto outcome = MakeRequest(request, "GetPayRollAuthList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPayRollAuthListResponse rsp = GetPayRollAuthListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPayRollAuthListOutcome(rsp);
        else
            return GetPayRollAuthListOutcome(o.GetError());
    }
    else
    {
        return GetPayRollAuthListOutcome(outcome.GetError());
    }
}

void CpdpClient::GetPayRollAuthListAsync(const GetPayRollAuthListRequest& request, const GetPayRollAuthListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPayRollAuthListRequest&;
    using Resp = GetPayRollAuthListResponse;

    DoRequestAsync<Req, Resp>(
        "GetPayRollAuthList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::GetPayRollAuthListOutcomeCallable CpdpClient::GetPayRollAuthListCallable(const GetPayRollAuthListRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPayRollAuthListOutcome>>();
    GetPayRollAuthListAsync(
    request,
    [prom](
        const CpdpClient*,
        const GetPayRollAuthListRequest&,
        GetPayRollAuthListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::GetPayRollAuthResultOutcome CpdpClient::GetPayRollAuthResult(const GetPayRollAuthResultRequest &request)
{
    auto outcome = MakeRequest(request, "GetPayRollAuthResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetPayRollAuthResultResponse rsp = GetPayRollAuthResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetPayRollAuthResultOutcome(rsp);
        else
            return GetPayRollAuthResultOutcome(o.GetError());
    }
    else
    {
        return GetPayRollAuthResultOutcome(outcome.GetError());
    }
}

void CpdpClient::GetPayRollAuthResultAsync(const GetPayRollAuthResultRequest& request, const GetPayRollAuthResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const GetPayRollAuthResultRequest&;
    using Resp = GetPayRollAuthResultResponse;

    DoRequestAsync<Req, Resp>(
        "GetPayRollAuthResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::GetPayRollAuthResultOutcomeCallable CpdpClient::GetPayRollAuthResultCallable(const GetPayRollAuthResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<GetPayRollAuthResultOutcome>>();
    GetPayRollAuthResultAsync(
    request,
    [prom](
        const CpdpClient*,
        const GetPayRollAuthResultRequest&,
        GetPayRollAuthResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::MigrateOrderRefundOutcome CpdpClient::MigrateOrderRefund(const MigrateOrderRefundRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateOrderRefund");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateOrderRefundResponse rsp = MigrateOrderRefundResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateOrderRefundOutcome(rsp);
        else
            return MigrateOrderRefundOutcome(o.GetError());
    }
    else
    {
        return MigrateOrderRefundOutcome(outcome.GetError());
    }
}

void CpdpClient::MigrateOrderRefundAsync(const MigrateOrderRefundRequest& request, const MigrateOrderRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigrateOrderRefundRequest&;
    using Resp = MigrateOrderRefundResponse;

    DoRequestAsync<Req, Resp>(
        "MigrateOrderRefund", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::MigrateOrderRefundOutcomeCallable CpdpClient::MigrateOrderRefundCallable(const MigrateOrderRefundRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigrateOrderRefundOutcome>>();
    MigrateOrderRefundAsync(
    request,
    [prom](
        const CpdpClient*,
        const MigrateOrderRefundRequest&,
        MigrateOrderRefundOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::MigrateOrderRefundQueryOutcome CpdpClient::MigrateOrderRefundQuery(const MigrateOrderRefundQueryRequest &request)
{
    auto outcome = MakeRequest(request, "MigrateOrderRefundQuery");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        MigrateOrderRefundQueryResponse rsp = MigrateOrderRefundQueryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return MigrateOrderRefundQueryOutcome(rsp);
        else
            return MigrateOrderRefundQueryOutcome(o.GetError());
    }
    else
    {
        return MigrateOrderRefundQueryOutcome(outcome.GetError());
    }
}

void CpdpClient::MigrateOrderRefundQueryAsync(const MigrateOrderRefundQueryRequest& request, const MigrateOrderRefundQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const MigrateOrderRefundQueryRequest&;
    using Resp = MigrateOrderRefundQueryResponse;

    DoRequestAsync<Req, Resp>(
        "MigrateOrderRefundQuery", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::MigrateOrderRefundQueryOutcomeCallable CpdpClient::MigrateOrderRefundQueryCallable(const MigrateOrderRefundQueryRequest &request)
{
    const auto prom = std::make_shared<std::promise<MigrateOrderRefundQueryOutcome>>();
    MigrateOrderRefundQueryAsync(
    request,
    [prom](
        const CpdpClient*,
        const MigrateOrderRefundQueryRequest&,
        MigrateOrderRefundQueryOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ModifyAgentTaxPaymentInfoOutcome CpdpClient::ModifyAgentTaxPaymentInfo(const ModifyAgentTaxPaymentInfoRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAgentTaxPaymentInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAgentTaxPaymentInfoResponse rsp = ModifyAgentTaxPaymentInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAgentTaxPaymentInfoOutcome(rsp);
        else
            return ModifyAgentTaxPaymentInfoOutcome(o.GetError());
    }
    else
    {
        return ModifyAgentTaxPaymentInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::ModifyAgentTaxPaymentInfoAsync(const ModifyAgentTaxPaymentInfoRequest& request, const ModifyAgentTaxPaymentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyAgentTaxPaymentInfoRequest&;
    using Resp = ModifyAgentTaxPaymentInfoResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyAgentTaxPaymentInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ModifyAgentTaxPaymentInfoOutcomeCallable CpdpClient::ModifyAgentTaxPaymentInfoCallable(const ModifyAgentTaxPaymentInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyAgentTaxPaymentInfoOutcome>>();
    ModifyAgentTaxPaymentInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const ModifyAgentTaxPaymentInfoRequest&,
        ModifyAgentTaxPaymentInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ModifyBindedAccountOutcome CpdpClient::ModifyBindedAccount(const ModifyBindedAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyBindedAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyBindedAccountResponse rsp = ModifyBindedAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyBindedAccountOutcome(rsp);
        else
            return ModifyBindedAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyBindedAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::ModifyBindedAccountAsync(const ModifyBindedAccountRequest& request, const ModifyBindedAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyBindedAccountRequest&;
    using Resp = ModifyBindedAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyBindedAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ModifyBindedAccountOutcomeCallable CpdpClient::ModifyBindedAccountCallable(const ModifyBindedAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyBindedAccountOutcome>>();
    ModifyBindedAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const ModifyBindedAccountRequest&,
        ModifyBindedAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ModifyFlexFundingAccountOutcome CpdpClient::ModifyFlexFundingAccount(const ModifyFlexFundingAccountRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlexFundingAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlexFundingAccountResponse rsp = ModifyFlexFundingAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlexFundingAccountOutcome(rsp);
        else
            return ModifyFlexFundingAccountOutcome(o.GetError());
    }
    else
    {
        return ModifyFlexFundingAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::ModifyFlexFundingAccountAsync(const ModifyFlexFundingAccountRequest& request, const ModifyFlexFundingAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFlexFundingAccountRequest&;
    using Resp = ModifyFlexFundingAccountResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFlexFundingAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ModifyFlexFundingAccountOutcomeCallable CpdpClient::ModifyFlexFundingAccountCallable(const ModifyFlexFundingAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFlexFundingAccountOutcome>>();
    ModifyFlexFundingAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const ModifyFlexFundingAccountRequest&,
        ModifyFlexFundingAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ModifyFlexPayeeAccountRightStatusOutcome CpdpClient::ModifyFlexPayeeAccountRightStatus(const ModifyFlexPayeeAccountRightStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyFlexPayeeAccountRightStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyFlexPayeeAccountRightStatusResponse rsp = ModifyFlexPayeeAccountRightStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyFlexPayeeAccountRightStatusOutcome(rsp);
        else
            return ModifyFlexPayeeAccountRightStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyFlexPayeeAccountRightStatusOutcome(outcome.GetError());
    }
}

void CpdpClient::ModifyFlexPayeeAccountRightStatusAsync(const ModifyFlexPayeeAccountRightStatusRequest& request, const ModifyFlexPayeeAccountRightStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyFlexPayeeAccountRightStatusRequest&;
    using Resp = ModifyFlexPayeeAccountRightStatusResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyFlexPayeeAccountRightStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ModifyFlexPayeeAccountRightStatusOutcomeCallable CpdpClient::ModifyFlexPayeeAccountRightStatusCallable(const ModifyFlexPayeeAccountRightStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyFlexPayeeAccountRightStatusOutcome>>();
    ModifyFlexPayeeAccountRightStatusAsync(
    request,
    [prom](
        const CpdpClient*,
        const ModifyFlexPayeeAccountRightStatusRequest&,
        ModifyFlexPayeeAccountRightStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ModifyMerchantOutcome CpdpClient::ModifyMerchant(const ModifyMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMerchantResponse rsp = ModifyMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMerchantOutcome(rsp);
        else
            return ModifyMerchantOutcome(o.GetError());
    }
    else
    {
        return ModifyMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::ModifyMerchantAsync(const ModifyMerchantRequest& request, const ModifyMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMerchantRequest&;
    using Resp = ModifyMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ModifyMerchantOutcomeCallable CpdpClient::ModifyMerchantCallable(const ModifyMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMerchantOutcome>>();
    ModifyMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const ModifyMerchantRequest&,
        ModifyMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ModifyMntMbrBindRelateAcctBankCodeOutcome CpdpClient::ModifyMntMbrBindRelateAcctBankCode(const ModifyMntMbrBindRelateAcctBankCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMntMbrBindRelateAcctBankCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMntMbrBindRelateAcctBankCodeResponse rsp = ModifyMntMbrBindRelateAcctBankCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMntMbrBindRelateAcctBankCodeOutcome(rsp);
        else
            return ModifyMntMbrBindRelateAcctBankCodeOutcome(o.GetError());
    }
    else
    {
        return ModifyMntMbrBindRelateAcctBankCodeOutcome(outcome.GetError());
    }
}

void CpdpClient::ModifyMntMbrBindRelateAcctBankCodeAsync(const ModifyMntMbrBindRelateAcctBankCodeRequest& request, const ModifyMntMbrBindRelateAcctBankCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ModifyMntMbrBindRelateAcctBankCodeRequest&;
    using Resp = ModifyMntMbrBindRelateAcctBankCodeResponse;

    DoRequestAsync<Req, Resp>(
        "ModifyMntMbrBindRelateAcctBankCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ModifyMntMbrBindRelateAcctBankCodeOutcomeCallable CpdpClient::ModifyMntMbrBindRelateAcctBankCodeCallable(const ModifyMntMbrBindRelateAcctBankCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<ModifyMntMbrBindRelateAcctBankCodeOutcome>>();
    ModifyMntMbrBindRelateAcctBankCodeAsync(
    request,
    [prom](
        const CpdpClient*,
        const ModifyMntMbrBindRelateAcctBankCodeRequest&,
        ModifyMntMbrBindRelateAcctBankCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAcctBindingOutcome CpdpClient::QueryAcctBinding(const QueryAcctBindingRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAcctBinding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAcctBindingResponse rsp = QueryAcctBindingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAcctBindingOutcome(rsp);
        else
            return QueryAcctBindingOutcome(o.GetError());
    }
    else
    {
        return QueryAcctBindingOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAcctBindingAsync(const QueryAcctBindingRequest& request, const QueryAcctBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAcctBindingRequest&;
    using Resp = QueryAcctBindingResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAcctBinding", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAcctBindingOutcomeCallable CpdpClient::QueryAcctBindingCallable(const QueryAcctBindingRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAcctBindingOutcome>>();
    QueryAcctBindingAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAcctBindingRequest&,
        QueryAcctBindingOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAcctInfoOutcome CpdpClient::QueryAcctInfo(const QueryAcctInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAcctInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAcctInfoResponse rsp = QueryAcctInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAcctInfoOutcome(rsp);
        else
            return QueryAcctInfoOutcome(o.GetError());
    }
    else
    {
        return QueryAcctInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAcctInfoAsync(const QueryAcctInfoRequest& request, const QueryAcctInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAcctInfoRequest&;
    using Resp = QueryAcctInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAcctInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAcctInfoOutcomeCallable CpdpClient::QueryAcctInfoCallable(const QueryAcctInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAcctInfoOutcome>>();
    QueryAcctInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAcctInfoRequest&,
        QueryAcctInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAcctInfoListOutcome CpdpClient::QueryAcctInfoList(const QueryAcctInfoListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAcctInfoList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAcctInfoListResponse rsp = QueryAcctInfoListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAcctInfoListOutcome(rsp);
        else
            return QueryAcctInfoListOutcome(o.GetError());
    }
    else
    {
        return QueryAcctInfoListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAcctInfoListAsync(const QueryAcctInfoListRequest& request, const QueryAcctInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAcctInfoListRequest&;
    using Resp = QueryAcctInfoListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAcctInfoList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAcctInfoListOutcomeCallable CpdpClient::QueryAcctInfoListCallable(const QueryAcctInfoListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAcctInfoListOutcome>>();
    QueryAcctInfoListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAcctInfoListRequest&,
        QueryAcctInfoListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAgentStatementsOutcome CpdpClient::QueryAgentStatements(const QueryAgentStatementsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAgentStatements");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAgentStatementsResponse rsp = QueryAgentStatementsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAgentStatementsOutcome(rsp);
        else
            return QueryAgentStatementsOutcome(o.GetError());
    }
    else
    {
        return QueryAgentStatementsOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAgentStatementsAsync(const QueryAgentStatementsRequest& request, const QueryAgentStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAgentStatementsRequest&;
    using Resp = QueryAgentStatementsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAgentStatements", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAgentStatementsOutcomeCallable CpdpClient::QueryAgentStatementsCallable(const QueryAgentStatementsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAgentStatementsOutcome>>();
    QueryAgentStatementsAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAgentStatementsRequest&,
        QueryAgentStatementsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAgentTaxPaymentBatchOutcome CpdpClient::QueryAgentTaxPaymentBatch(const QueryAgentTaxPaymentBatchRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAgentTaxPaymentBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAgentTaxPaymentBatchResponse rsp = QueryAgentTaxPaymentBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAgentTaxPaymentBatchOutcome(rsp);
        else
            return QueryAgentTaxPaymentBatchOutcome(o.GetError());
    }
    else
    {
        return QueryAgentTaxPaymentBatchOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAgentTaxPaymentBatchAsync(const QueryAgentTaxPaymentBatchRequest& request, const QueryAgentTaxPaymentBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAgentTaxPaymentBatchRequest&;
    using Resp = QueryAgentTaxPaymentBatchResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAgentTaxPaymentBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAgentTaxPaymentBatchOutcomeCallable CpdpClient::QueryAgentTaxPaymentBatchCallable(const QueryAgentTaxPaymentBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAgentTaxPaymentBatchOutcome>>();
    QueryAgentTaxPaymentBatchAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAgentTaxPaymentBatchRequest&,
        QueryAgentTaxPaymentBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAnchorContractInfoOutcome CpdpClient::QueryAnchorContractInfo(const QueryAnchorContractInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAnchorContractInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAnchorContractInfoResponse rsp = QueryAnchorContractInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAnchorContractInfoOutcome(rsp);
        else
            return QueryAnchorContractInfoOutcome(o.GetError());
    }
    else
    {
        return QueryAnchorContractInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAnchorContractInfoAsync(const QueryAnchorContractInfoRequest& request, const QueryAnchorContractInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAnchorContractInfoRequest&;
    using Resp = QueryAnchorContractInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAnchorContractInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAnchorContractInfoOutcomeCallable CpdpClient::QueryAnchorContractInfoCallable(const QueryAnchorContractInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAnchorContractInfoOutcome>>();
    QueryAnchorContractInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAnchorContractInfoRequest&,
        QueryAnchorContractInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryApplicationMaterialOutcome CpdpClient::QueryApplicationMaterial(const QueryApplicationMaterialRequest &request)
{
    auto outcome = MakeRequest(request, "QueryApplicationMaterial");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryApplicationMaterialResponse rsp = QueryApplicationMaterialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryApplicationMaterialOutcome(rsp);
        else
            return QueryApplicationMaterialOutcome(o.GetError());
    }
    else
    {
        return QueryApplicationMaterialOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryApplicationMaterialAsync(const QueryApplicationMaterialRequest& request, const QueryApplicationMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryApplicationMaterialRequest&;
    using Resp = QueryApplicationMaterialResponse;

    DoRequestAsync<Req, Resp>(
        "QueryApplicationMaterial", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryApplicationMaterialOutcomeCallable CpdpClient::QueryApplicationMaterialCallable(const QueryApplicationMaterialRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryApplicationMaterialOutcome>>();
    QueryApplicationMaterialAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryApplicationMaterialRequest&,
        QueryApplicationMaterialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryAssignmentOutcome CpdpClient::QueryAssignment(const QueryAssignmentRequest &request)
{
    auto outcome = MakeRequest(request, "QueryAssignment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryAssignmentResponse rsp = QueryAssignmentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryAssignmentOutcome(rsp);
        else
            return QueryAssignmentOutcome(o.GetError());
    }
    else
    {
        return QueryAssignmentOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryAssignmentAsync(const QueryAssignmentRequest& request, const QueryAssignmentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryAssignmentRequest&;
    using Resp = QueryAssignmentResponse;

    DoRequestAsync<Req, Resp>(
        "QueryAssignment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryAssignmentOutcomeCallable CpdpClient::QueryAssignmentCallable(const QueryAssignmentRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryAssignmentOutcome>>();
    QueryAssignmentAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryAssignmentRequest&,
        QueryAssignmentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryBalanceOutcome CpdpClient::QueryBalance(const QueryBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBalanceResponse rsp = QueryBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBalanceOutcome(rsp);
        else
            return QueryBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryBalanceAsync(const QueryBalanceRequest& request, const QueryBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryBalanceRequest&;
    using Resp = QueryBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryBalanceOutcomeCallable CpdpClient::QueryBalanceCallable(const QueryBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryBalanceOutcome>>();
    QueryBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryBalanceRequest&,
        QueryBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryBankClearOutcome CpdpClient::QueryBankClear(const QueryBankClearRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBankClear");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBankClearResponse rsp = QueryBankClearResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBankClearOutcome(rsp);
        else
            return QueryBankClearOutcome(o.GetError());
    }
    else
    {
        return QueryBankClearOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryBankClearAsync(const QueryBankClearRequest& request, const QueryBankClearAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryBankClearRequest&;
    using Resp = QueryBankClearResponse;

    DoRequestAsync<Req, Resp>(
        "QueryBankClear", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryBankClearOutcomeCallable CpdpClient::QueryBankClearCallable(const QueryBankClearRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryBankClearOutcome>>();
    QueryBankClearAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryBankClearRequest&,
        QueryBankClearOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryBankTransactionDetailsOutcome CpdpClient::QueryBankTransactionDetails(const QueryBankTransactionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBankTransactionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBankTransactionDetailsResponse rsp = QueryBankTransactionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBankTransactionDetailsOutcome(rsp);
        else
            return QueryBankTransactionDetailsOutcome(o.GetError());
    }
    else
    {
        return QueryBankTransactionDetailsOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryBankTransactionDetailsAsync(const QueryBankTransactionDetailsRequest& request, const QueryBankTransactionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryBankTransactionDetailsRequest&;
    using Resp = QueryBankTransactionDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryBankTransactionDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryBankTransactionDetailsOutcomeCallable CpdpClient::QueryBankTransactionDetailsCallable(const QueryBankTransactionDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryBankTransactionDetailsOutcome>>();
    QueryBankTransactionDetailsAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryBankTransactionDetailsRequest&,
        QueryBankTransactionDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryBankWithdrawCashDetailsOutcome CpdpClient::QueryBankWithdrawCashDetails(const QueryBankWithdrawCashDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBankWithdrawCashDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBankWithdrawCashDetailsResponse rsp = QueryBankWithdrawCashDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBankWithdrawCashDetailsOutcome(rsp);
        else
            return QueryBankWithdrawCashDetailsOutcome(o.GetError());
    }
    else
    {
        return QueryBankWithdrawCashDetailsOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryBankWithdrawCashDetailsAsync(const QueryBankWithdrawCashDetailsRequest& request, const QueryBankWithdrawCashDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryBankWithdrawCashDetailsRequest&;
    using Resp = QueryBankWithdrawCashDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryBankWithdrawCashDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryBankWithdrawCashDetailsOutcomeCallable CpdpClient::QueryBankWithdrawCashDetailsCallable(const QueryBankWithdrawCashDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryBankWithdrawCashDetailsOutcome>>();
    QueryBankWithdrawCashDetailsAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryBankWithdrawCashDetailsRequest&,
        QueryBankWithdrawCashDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryBatchPaymentResultOutcome CpdpClient::QueryBatchPaymentResult(const QueryBatchPaymentResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBatchPaymentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBatchPaymentResultResponse rsp = QueryBatchPaymentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBatchPaymentResultOutcome(rsp);
        else
            return QueryBatchPaymentResultOutcome(o.GetError());
    }
    else
    {
        return QueryBatchPaymentResultOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryBatchPaymentResultAsync(const QueryBatchPaymentResultRequest& request, const QueryBatchPaymentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryBatchPaymentResultRequest&;
    using Resp = QueryBatchPaymentResultResponse;

    DoRequestAsync<Req, Resp>(
        "QueryBatchPaymentResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryBatchPaymentResultOutcomeCallable CpdpClient::QueryBatchPaymentResultCallable(const QueryBatchPaymentResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryBatchPaymentResultOutcome>>();
    QueryBatchPaymentResultAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryBatchPaymentResultRequest&,
        QueryBatchPaymentResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryBillDownloadURLOutcome CpdpClient::QueryBillDownloadURL(const QueryBillDownloadURLRequest &request)
{
    auto outcome = MakeRequest(request, "QueryBillDownloadURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryBillDownloadURLResponse rsp = QueryBillDownloadURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryBillDownloadURLOutcome(rsp);
        else
            return QueryBillDownloadURLOutcome(o.GetError());
    }
    else
    {
        return QueryBillDownloadURLOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryBillDownloadURLAsync(const QueryBillDownloadURLRequest& request, const QueryBillDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryBillDownloadURLRequest&;
    using Resp = QueryBillDownloadURLResponse;

    DoRequestAsync<Req, Resp>(
        "QueryBillDownloadURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryBillDownloadURLOutcomeCallable CpdpClient::QueryBillDownloadURLCallable(const QueryBillDownloadURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryBillDownloadURLOutcome>>();
    QueryBillDownloadURLAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryBillDownloadURLRequest&,
        QueryBillDownloadURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCityCodeOutcome CpdpClient::QueryCityCode(const QueryCityCodeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCityCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCityCodeResponse rsp = QueryCityCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCityCodeOutcome(rsp);
        else
            return QueryCityCodeOutcome(o.GetError());
    }
    else
    {
        return QueryCityCodeOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCityCodeAsync(const QueryCityCodeRequest& request, const QueryCityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCityCodeRequest&;
    using Resp = QueryCityCodeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCityCode", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCityCodeOutcomeCallable CpdpClient::QueryCityCodeCallable(const QueryCityCodeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCityCodeOutcome>>();
    QueryCityCodeAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCityCodeRequest&,
        QueryCityCodeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCloudChannelDataOutcome CpdpClient::QueryCloudChannelData(const QueryCloudChannelDataRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCloudChannelData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCloudChannelDataResponse rsp = QueryCloudChannelDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCloudChannelDataOutcome(rsp);
        else
            return QueryCloudChannelDataOutcome(o.GetError());
    }
    else
    {
        return QueryCloudChannelDataOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCloudChannelDataAsync(const QueryCloudChannelDataRequest& request, const QueryCloudChannelDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCloudChannelDataRequest&;
    using Resp = QueryCloudChannelDataResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCloudChannelData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCloudChannelDataOutcomeCallable CpdpClient::QueryCloudChannelDataCallable(const QueryCloudChannelDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCloudChannelDataOutcome>>();
    QueryCloudChannelDataAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCloudChannelDataRequest&,
        QueryCloudChannelDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCloudOrderOutcome CpdpClient::QueryCloudOrder(const QueryCloudOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCloudOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCloudOrderResponse rsp = QueryCloudOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCloudOrderOutcome(rsp);
        else
            return QueryCloudOrderOutcome(o.GetError());
    }
    else
    {
        return QueryCloudOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCloudOrderAsync(const QueryCloudOrderRequest& request, const QueryCloudOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCloudOrderRequest&;
    using Resp = QueryCloudOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCloudOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCloudOrderOutcomeCallable CpdpClient::QueryCloudOrderCallable(const QueryCloudOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCloudOrderOutcome>>();
    QueryCloudOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCloudOrderRequest&,
        QueryCloudOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCloudRefundOrderOutcome CpdpClient::QueryCloudRefundOrder(const QueryCloudRefundOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCloudRefundOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCloudRefundOrderResponse rsp = QueryCloudRefundOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCloudRefundOrderOutcome(rsp);
        else
            return QueryCloudRefundOrderOutcome(o.GetError());
    }
    else
    {
        return QueryCloudRefundOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCloudRefundOrderAsync(const QueryCloudRefundOrderRequest& request, const QueryCloudRefundOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCloudRefundOrderRequest&;
    using Resp = QueryCloudRefundOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCloudRefundOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCloudRefundOrderOutcomeCallable CpdpClient::QueryCloudRefundOrderCallable(const QueryCloudRefundOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCloudRefundOrderOutcome>>();
    QueryCloudRefundOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCloudRefundOrderRequest&,
        QueryCloudRefundOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCommonTransferRechargeOutcome CpdpClient::QueryCommonTransferRecharge(const QueryCommonTransferRechargeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCommonTransferRecharge");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCommonTransferRechargeResponse rsp = QueryCommonTransferRechargeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCommonTransferRechargeOutcome(rsp);
        else
            return QueryCommonTransferRechargeOutcome(o.GetError());
    }
    else
    {
        return QueryCommonTransferRechargeOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCommonTransferRechargeAsync(const QueryCommonTransferRechargeRequest& request, const QueryCommonTransferRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCommonTransferRechargeRequest&;
    using Resp = QueryCommonTransferRechargeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCommonTransferRecharge", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCommonTransferRechargeOutcomeCallable CpdpClient::QueryCommonTransferRechargeCallable(const QueryCommonTransferRechargeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCommonTransferRechargeOutcome>>();
    QueryCommonTransferRechargeAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCommonTransferRechargeRequest&,
        QueryCommonTransferRechargeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCompanyTitleOutcome CpdpClient::QueryCompanyTitle(const QueryCompanyTitleRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCompanyTitle");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCompanyTitleResponse rsp = QueryCompanyTitleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCompanyTitleOutcome(rsp);
        else
            return QueryCompanyTitleOutcome(o.GetError());
    }
    else
    {
        return QueryCompanyTitleOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCompanyTitleAsync(const QueryCompanyTitleRequest& request, const QueryCompanyTitleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCompanyTitleRequest&;
    using Resp = QueryCompanyTitleResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCompanyTitle", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCompanyTitleOutcomeCallable CpdpClient::QueryCompanyTitleCallable(const QueryCompanyTitleRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCompanyTitleOutcome>>();
    QueryCompanyTitleAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCompanyTitleRequest&,
        QueryCompanyTitleOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryContractOutcome CpdpClient::QueryContract(const QueryContractRequest &request)
{
    auto outcome = MakeRequest(request, "QueryContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryContractResponse rsp = QueryContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryContractOutcome(rsp);
        else
            return QueryContractOutcome(o.GetError());
    }
    else
    {
        return QueryContractOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryContractAsync(const QueryContractRequest& request, const QueryContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryContractRequest&;
    using Resp = QueryContractResponse;

    DoRequestAsync<Req, Resp>(
        "QueryContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryContractOutcomeCallable CpdpClient::QueryContractCallable(const QueryContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryContractOutcome>>();
    QueryContractAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryContractRequest&,
        QueryContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryContractPayFeeOutcome CpdpClient::QueryContractPayFee(const QueryContractPayFeeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryContractPayFee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryContractPayFeeResponse rsp = QueryContractPayFeeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryContractPayFeeOutcome(rsp);
        else
            return QueryContractPayFeeOutcome(o.GetError());
    }
    else
    {
        return QueryContractPayFeeOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryContractPayFeeAsync(const QueryContractPayFeeRequest& request, const QueryContractPayFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryContractPayFeeRequest&;
    using Resp = QueryContractPayFeeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryContractPayFee", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryContractPayFeeOutcomeCallable CpdpClient::QueryContractPayFeeCallable(const QueryContractPayFeeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryContractPayFeeOutcome>>();
    QueryContractPayFeeAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryContractPayFeeRequest&,
        QueryContractPayFeeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryContractPayWayListOutcome CpdpClient::QueryContractPayWayList(const QueryContractPayWayListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryContractPayWayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryContractPayWayListResponse rsp = QueryContractPayWayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryContractPayWayListOutcome(rsp);
        else
            return QueryContractPayWayListOutcome(o.GetError());
    }
    else
    {
        return QueryContractPayWayListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryContractPayWayListAsync(const QueryContractPayWayListRequest& request, const QueryContractPayWayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryContractPayWayListRequest&;
    using Resp = QueryContractPayWayListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryContractPayWayList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryContractPayWayListOutcomeCallable CpdpClient::QueryContractPayWayListCallable(const QueryContractPayWayListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryContractPayWayListOutcome>>();
    QueryContractPayWayListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryContractPayWayListRequest&,
        QueryContractPayWayListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryContractRelateShopOutcome CpdpClient::QueryContractRelateShop(const QueryContractRelateShopRequest &request)
{
    auto outcome = MakeRequest(request, "QueryContractRelateShop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryContractRelateShopResponse rsp = QueryContractRelateShopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryContractRelateShopOutcome(rsp);
        else
            return QueryContractRelateShopOutcome(o.GetError());
    }
    else
    {
        return QueryContractRelateShopOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryContractRelateShopAsync(const QueryContractRelateShopRequest& request, const QueryContractRelateShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryContractRelateShopRequest&;
    using Resp = QueryContractRelateShopResponse;

    DoRequestAsync<Req, Resp>(
        "QueryContractRelateShop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryContractRelateShopOutcomeCallable CpdpClient::QueryContractRelateShopCallable(const QueryContractRelateShopRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryContractRelateShopOutcome>>();
    QueryContractRelateShopAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryContractRelateShopRequest&,
        QueryContractRelateShopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryCustAcctIdBalanceOutcome CpdpClient::QueryCustAcctIdBalance(const QueryCustAcctIdBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustAcctIdBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustAcctIdBalanceResponse rsp = QueryCustAcctIdBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustAcctIdBalanceOutcome(rsp);
        else
            return QueryCustAcctIdBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryCustAcctIdBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryCustAcctIdBalanceAsync(const QueryCustAcctIdBalanceRequest& request, const QueryCustAcctIdBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryCustAcctIdBalanceRequest&;
    using Resp = QueryCustAcctIdBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryCustAcctIdBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryCustAcctIdBalanceOutcomeCallable CpdpClient::QueryCustAcctIdBalanceCallable(const QueryCustAcctIdBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryCustAcctIdBalanceOutcome>>();
    QueryCustAcctIdBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryCustAcctIdBalanceRequest&,
        QueryCustAcctIdBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryDownloadBillURLOutcome CpdpClient::QueryDownloadBillURL(const QueryDownloadBillURLRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDownloadBillURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDownloadBillURLResponse rsp = QueryDownloadBillURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDownloadBillURLOutcome(rsp);
        else
            return QueryDownloadBillURLOutcome(o.GetError());
    }
    else
    {
        return QueryDownloadBillURLOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryDownloadBillURLAsync(const QueryDownloadBillURLRequest& request, const QueryDownloadBillURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryDownloadBillURLRequest&;
    using Resp = QueryDownloadBillURLResponse;

    DoRequestAsync<Req, Resp>(
        "QueryDownloadBillURL", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryDownloadBillURLOutcomeCallable CpdpClient::QueryDownloadBillURLCallable(const QueryDownloadBillURLRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryDownloadBillURLOutcome>>();
    QueryDownloadBillURLAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryDownloadBillURLRequest&,
        QueryDownloadBillURLOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryExceedingInfoOutcome CpdpClient::QueryExceedingInfo(const QueryExceedingInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExceedingInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExceedingInfoResponse rsp = QueryExceedingInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExceedingInfoOutcome(rsp);
        else
            return QueryExceedingInfoOutcome(o.GetError());
    }
    else
    {
        return QueryExceedingInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryExceedingInfoAsync(const QueryExceedingInfoRequest& request, const QueryExceedingInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExceedingInfoRequest&;
    using Resp = QueryExceedingInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExceedingInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryExceedingInfoOutcomeCallable CpdpClient::QueryExceedingInfoCallable(const QueryExceedingInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExceedingInfoOutcome>>();
    QueryExceedingInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryExceedingInfoRequest&,
        QueryExceedingInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryExchangeRateOutcome CpdpClient::QueryExchangeRate(const QueryExchangeRateRequest &request)
{
    auto outcome = MakeRequest(request, "QueryExchangeRate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryExchangeRateResponse rsp = QueryExchangeRateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryExchangeRateOutcome(rsp);
        else
            return QueryExchangeRateOutcome(o.GetError());
    }
    else
    {
        return QueryExchangeRateOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryExchangeRateAsync(const QueryExchangeRateRequest& request, const QueryExchangeRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryExchangeRateRequest&;
    using Resp = QueryExchangeRateResponse;

    DoRequestAsync<Req, Resp>(
        "QueryExchangeRate", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryExchangeRateOutcomeCallable CpdpClient::QueryExchangeRateCallable(const QueryExchangeRateRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryExchangeRateOutcome>>();
    QueryExchangeRateAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryExchangeRateRequest&,
        QueryExchangeRateOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFinancialDataUrlOutcome CpdpClient::QueryFinancialDataUrl(const QueryFinancialDataUrlRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFinancialDataUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFinancialDataUrlResponse rsp = QueryFinancialDataUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFinancialDataUrlOutcome(rsp);
        else
            return QueryFinancialDataUrlOutcome(o.GetError());
    }
    else
    {
        return QueryFinancialDataUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFinancialDataUrlAsync(const QueryFinancialDataUrlRequest& request, const QueryFinancialDataUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFinancialDataUrlRequest&;
    using Resp = QueryFinancialDataUrlResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFinancialDataUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFinancialDataUrlOutcomeCallable CpdpClient::QueryFinancialDataUrlCallable(const QueryFinancialDataUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFinancialDataUrlOutcome>>();
    QueryFinancialDataUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFinancialDataUrlRequest&,
        QueryFinancialDataUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexAmountBeforeTaxOutcome CpdpClient::QueryFlexAmountBeforeTax(const QueryFlexAmountBeforeTaxRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexAmountBeforeTax");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexAmountBeforeTaxResponse rsp = QueryFlexAmountBeforeTaxResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexAmountBeforeTaxOutcome(rsp);
        else
            return QueryFlexAmountBeforeTaxOutcome(o.GetError());
    }
    else
    {
        return QueryFlexAmountBeforeTaxOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexAmountBeforeTaxAsync(const QueryFlexAmountBeforeTaxRequest& request, const QueryFlexAmountBeforeTaxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexAmountBeforeTaxRequest&;
    using Resp = QueryFlexAmountBeforeTaxResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexAmountBeforeTax", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexAmountBeforeTaxOutcomeCallable CpdpClient::QueryFlexAmountBeforeTaxCallable(const QueryFlexAmountBeforeTaxRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexAmountBeforeTaxOutcome>>();
    QueryFlexAmountBeforeTaxAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexAmountBeforeTaxRequest&,
        QueryFlexAmountBeforeTaxOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexBillDownloadUrlOutcome CpdpClient::QueryFlexBillDownloadUrl(const QueryFlexBillDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexBillDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexBillDownloadUrlResponse rsp = QueryFlexBillDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexBillDownloadUrlOutcome(rsp);
        else
            return QueryFlexBillDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return QueryFlexBillDownloadUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexBillDownloadUrlAsync(const QueryFlexBillDownloadUrlRequest& request, const QueryFlexBillDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexBillDownloadUrlRequest&;
    using Resp = QueryFlexBillDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexBillDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexBillDownloadUrlOutcomeCallable CpdpClient::QueryFlexBillDownloadUrlCallable(const QueryFlexBillDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexBillDownloadUrlOutcome>>();
    QueryFlexBillDownloadUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexBillDownloadUrlRequest&,
        QueryFlexBillDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexFreezeOrderListOutcome CpdpClient::QueryFlexFreezeOrderList(const QueryFlexFreezeOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexFreezeOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexFreezeOrderListResponse rsp = QueryFlexFreezeOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexFreezeOrderListOutcome(rsp);
        else
            return QueryFlexFreezeOrderListOutcome(o.GetError());
    }
    else
    {
        return QueryFlexFreezeOrderListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexFreezeOrderListAsync(const QueryFlexFreezeOrderListRequest& request, const QueryFlexFreezeOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexFreezeOrderListRequest&;
    using Resp = QueryFlexFreezeOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexFreezeOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexFreezeOrderListOutcomeCallable CpdpClient::QueryFlexFreezeOrderListCallable(const QueryFlexFreezeOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexFreezeOrderListOutcome>>();
    QueryFlexFreezeOrderListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexFreezeOrderListRequest&,
        QueryFlexFreezeOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexOrderSummaryListOutcome CpdpClient::QueryFlexOrderSummaryList(const QueryFlexOrderSummaryListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexOrderSummaryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexOrderSummaryListResponse rsp = QueryFlexOrderSummaryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexOrderSummaryListOutcome(rsp);
        else
            return QueryFlexOrderSummaryListOutcome(o.GetError());
    }
    else
    {
        return QueryFlexOrderSummaryListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexOrderSummaryListAsync(const QueryFlexOrderSummaryListRequest& request, const QueryFlexOrderSummaryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexOrderSummaryListRequest&;
    using Resp = QueryFlexOrderSummaryListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexOrderSummaryList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexOrderSummaryListOutcomeCallable CpdpClient::QueryFlexOrderSummaryListCallable(const QueryFlexOrderSummaryListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexOrderSummaryListOutcome>>();
    QueryFlexOrderSummaryListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexOrderSummaryListRequest&,
        QueryFlexOrderSummaryListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPayeeAccountBalanceOutcome CpdpClient::QueryFlexPayeeAccountBalance(const QueryFlexPayeeAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPayeeAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPayeeAccountBalanceResponse rsp = QueryFlexPayeeAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPayeeAccountBalanceOutcome(rsp);
        else
            return QueryFlexPayeeAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPayeeAccountBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPayeeAccountBalanceAsync(const QueryFlexPayeeAccountBalanceRequest& request, const QueryFlexPayeeAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPayeeAccountBalanceRequest&;
    using Resp = QueryFlexPayeeAccountBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPayeeAccountBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPayeeAccountBalanceOutcomeCallable CpdpClient::QueryFlexPayeeAccountBalanceCallable(const QueryFlexPayeeAccountBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPayeeAccountBalanceOutcome>>();
    QueryFlexPayeeAccountBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPayeeAccountBalanceRequest&,
        QueryFlexPayeeAccountBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPayeeAccountInfoOutcome CpdpClient::QueryFlexPayeeAccountInfo(const QueryFlexPayeeAccountInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPayeeAccountInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPayeeAccountInfoResponse rsp = QueryFlexPayeeAccountInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPayeeAccountInfoOutcome(rsp);
        else
            return QueryFlexPayeeAccountInfoOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPayeeAccountInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPayeeAccountInfoAsync(const QueryFlexPayeeAccountInfoRequest& request, const QueryFlexPayeeAccountInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPayeeAccountInfoRequest&;
    using Resp = QueryFlexPayeeAccountInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPayeeAccountInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPayeeAccountInfoOutcomeCallable CpdpClient::QueryFlexPayeeAccountInfoCallable(const QueryFlexPayeeAccountInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPayeeAccountInfoOutcome>>();
    QueryFlexPayeeAccountInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPayeeAccountInfoRequest&,
        QueryFlexPayeeAccountInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPayeeAccountListOutcome CpdpClient::QueryFlexPayeeAccountList(const QueryFlexPayeeAccountListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPayeeAccountList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPayeeAccountListResponse rsp = QueryFlexPayeeAccountListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPayeeAccountListOutcome(rsp);
        else
            return QueryFlexPayeeAccountListOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPayeeAccountListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPayeeAccountListAsync(const QueryFlexPayeeAccountListRequest& request, const QueryFlexPayeeAccountListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPayeeAccountListRequest&;
    using Resp = QueryFlexPayeeAccountListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPayeeAccountList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPayeeAccountListOutcomeCallable CpdpClient::QueryFlexPayeeAccountListCallable(const QueryFlexPayeeAccountListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPayeeAccountListOutcome>>();
    QueryFlexPayeeAccountListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPayeeAccountListRequest&,
        QueryFlexPayeeAccountListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPayeeInfoOutcome CpdpClient::QueryFlexPayeeInfo(const QueryFlexPayeeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPayeeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPayeeInfoResponse rsp = QueryFlexPayeeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPayeeInfoOutcome(rsp);
        else
            return QueryFlexPayeeInfoOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPayeeInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPayeeInfoAsync(const QueryFlexPayeeInfoRequest& request, const QueryFlexPayeeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPayeeInfoRequest&;
    using Resp = QueryFlexPayeeInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPayeeInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPayeeInfoOutcomeCallable CpdpClient::QueryFlexPayeeInfoCallable(const QueryFlexPayeeInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPayeeInfoOutcome>>();
    QueryFlexPayeeInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPayeeInfoRequest&,
        QueryFlexPayeeInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPaymentOrderListOutcome CpdpClient::QueryFlexPaymentOrderList(const QueryFlexPaymentOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPaymentOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPaymentOrderListResponse rsp = QueryFlexPaymentOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPaymentOrderListOutcome(rsp);
        else
            return QueryFlexPaymentOrderListOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPaymentOrderListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPaymentOrderListAsync(const QueryFlexPaymentOrderListRequest& request, const QueryFlexPaymentOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPaymentOrderListRequest&;
    using Resp = QueryFlexPaymentOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPaymentOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPaymentOrderListOutcomeCallable CpdpClient::QueryFlexPaymentOrderListCallable(const QueryFlexPaymentOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPaymentOrderListOutcome>>();
    QueryFlexPaymentOrderListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPaymentOrderListRequest&,
        QueryFlexPaymentOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPaymentOrderStatusOutcome CpdpClient::QueryFlexPaymentOrderStatus(const QueryFlexPaymentOrderStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPaymentOrderStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPaymentOrderStatusResponse rsp = QueryFlexPaymentOrderStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPaymentOrderStatusOutcome(rsp);
        else
            return QueryFlexPaymentOrderStatusOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPaymentOrderStatusOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPaymentOrderStatusAsync(const QueryFlexPaymentOrderStatusRequest& request, const QueryFlexPaymentOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPaymentOrderStatusRequest&;
    using Resp = QueryFlexPaymentOrderStatusResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPaymentOrderStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPaymentOrderStatusOutcomeCallable CpdpClient::QueryFlexPaymentOrderStatusCallable(const QueryFlexPaymentOrderStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPaymentOrderStatusOutcome>>();
    QueryFlexPaymentOrderStatusAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPaymentOrderStatusRequest&,
        QueryFlexPaymentOrderStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexPlatformAccountBalanceOutcome CpdpClient::QueryFlexPlatformAccountBalance(const QueryFlexPlatformAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexPlatformAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexPlatformAccountBalanceResponse rsp = QueryFlexPlatformAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexPlatformAccountBalanceOutcome(rsp);
        else
            return QueryFlexPlatformAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryFlexPlatformAccountBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexPlatformAccountBalanceAsync(const QueryFlexPlatformAccountBalanceRequest& request, const QueryFlexPlatformAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexPlatformAccountBalanceRequest&;
    using Resp = QueryFlexPlatformAccountBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexPlatformAccountBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexPlatformAccountBalanceOutcomeCallable CpdpClient::QueryFlexPlatformAccountBalanceCallable(const QueryFlexPlatformAccountBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexPlatformAccountBalanceOutcome>>();
    QueryFlexPlatformAccountBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexPlatformAccountBalanceRequest&,
        QueryFlexPlatformAccountBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexServiceProviderAccountBalanceOutcome CpdpClient::QueryFlexServiceProviderAccountBalance(const QueryFlexServiceProviderAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexServiceProviderAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexServiceProviderAccountBalanceResponse rsp = QueryFlexServiceProviderAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexServiceProviderAccountBalanceOutcome(rsp);
        else
            return QueryFlexServiceProviderAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryFlexServiceProviderAccountBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexServiceProviderAccountBalanceAsync(const QueryFlexServiceProviderAccountBalanceRequest& request, const QueryFlexServiceProviderAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexServiceProviderAccountBalanceRequest&;
    using Resp = QueryFlexServiceProviderAccountBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexServiceProviderAccountBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexServiceProviderAccountBalanceOutcomeCallable CpdpClient::QueryFlexServiceProviderAccountBalanceCallable(const QueryFlexServiceProviderAccountBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexServiceProviderAccountBalanceOutcome>>();
    QueryFlexServiceProviderAccountBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexServiceProviderAccountBalanceRequest&,
        QueryFlexServiceProviderAccountBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexSettlementOrderListOutcome CpdpClient::QueryFlexSettlementOrderList(const QueryFlexSettlementOrderListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexSettlementOrderList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexSettlementOrderListResponse rsp = QueryFlexSettlementOrderListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexSettlementOrderListOutcome(rsp);
        else
            return QueryFlexSettlementOrderListOutcome(o.GetError());
    }
    else
    {
        return QueryFlexSettlementOrderListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexSettlementOrderListAsync(const QueryFlexSettlementOrderListRequest& request, const QueryFlexSettlementOrderListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexSettlementOrderListRequest&;
    using Resp = QueryFlexSettlementOrderListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexSettlementOrderList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexSettlementOrderListOutcomeCallable CpdpClient::QueryFlexSettlementOrderListCallable(const QueryFlexSettlementOrderListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexSettlementOrderListOutcome>>();
    QueryFlexSettlementOrderListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexSettlementOrderListRequest&,
        QueryFlexSettlementOrderListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFlexWechatAuthResultOutcome CpdpClient::QueryFlexWechatAuthResult(const QueryFlexWechatAuthResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFlexWechatAuthResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFlexWechatAuthResultResponse rsp = QueryFlexWechatAuthResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFlexWechatAuthResultOutcome(rsp);
        else
            return QueryFlexWechatAuthResultOutcome(o.GetError());
    }
    else
    {
        return QueryFlexWechatAuthResultOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFlexWechatAuthResultAsync(const QueryFlexWechatAuthResultRequest& request, const QueryFlexWechatAuthResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFlexWechatAuthResultRequest&;
    using Resp = QueryFlexWechatAuthResultResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFlexWechatAuthResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFlexWechatAuthResultOutcomeCallable CpdpClient::QueryFlexWechatAuthResultCallable(const QueryFlexWechatAuthResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFlexWechatAuthResultOutcome>>();
    QueryFlexWechatAuthResultAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFlexWechatAuthResultRequest&,
        QueryFlexWechatAuthResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryFundsTransactionDetailsOutcome CpdpClient::QueryFundsTransactionDetails(const QueryFundsTransactionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryFundsTransactionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryFundsTransactionDetailsResponse rsp = QueryFundsTransactionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryFundsTransactionDetailsOutcome(rsp);
        else
            return QueryFundsTransactionDetailsOutcome(o.GetError());
    }
    else
    {
        return QueryFundsTransactionDetailsOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryFundsTransactionDetailsAsync(const QueryFundsTransactionDetailsRequest& request, const QueryFundsTransactionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryFundsTransactionDetailsRequest&;
    using Resp = QueryFundsTransactionDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryFundsTransactionDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryFundsTransactionDetailsOutcomeCallable CpdpClient::QueryFundsTransactionDetailsCallable(const QueryFundsTransactionDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryFundsTransactionDetailsOutcome>>();
    QueryFundsTransactionDetailsAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryFundsTransactionDetailsRequest&,
        QueryFundsTransactionDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryInvoiceOutcome CpdpClient::QueryInvoice(const QueryInvoiceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryInvoice");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInvoiceResponse rsp = QueryInvoiceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInvoiceOutcome(rsp);
        else
            return QueryInvoiceOutcome(o.GetError());
    }
    else
    {
        return QueryInvoiceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryInvoiceAsync(const QueryInvoiceRequest& request, const QueryInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryInvoiceRequest&;
    using Resp = QueryInvoiceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryInvoice", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryInvoiceOutcomeCallable CpdpClient::QueryInvoiceCallable(const QueryInvoiceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryInvoiceOutcome>>();
    QueryInvoiceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryInvoiceRequest&,
        QueryInvoiceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryInvoiceV2Outcome CpdpClient::QueryInvoiceV2(const QueryInvoiceV2Request &request)
{
    auto outcome = MakeRequest(request, "QueryInvoiceV2");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryInvoiceV2Response rsp = QueryInvoiceV2Response();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryInvoiceV2Outcome(rsp);
        else
            return QueryInvoiceV2Outcome(o.GetError());
    }
    else
    {
        return QueryInvoiceV2Outcome(outcome.GetError());
    }
}

void CpdpClient::QueryInvoiceV2Async(const QueryInvoiceV2Request& request, const QueryInvoiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryInvoiceV2Request&;
    using Resp = QueryInvoiceV2Response;

    DoRequestAsync<Req, Resp>(
        "QueryInvoiceV2", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryInvoiceV2OutcomeCallable CpdpClient::QueryInvoiceV2Callable(const QueryInvoiceV2Request &request)
{
    const auto prom = std::make_shared<std::promise<QueryInvoiceV2Outcome>>();
    QueryInvoiceV2Async(
    request,
    [prom](
        const CpdpClient*,
        const QueryInvoiceV2Request&,
        QueryInvoiceV2Outcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMaliciousRegistrationOutcome CpdpClient::QueryMaliciousRegistration(const QueryMaliciousRegistrationRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMaliciousRegistration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMaliciousRegistrationResponse rsp = QueryMaliciousRegistrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMaliciousRegistrationOutcome(rsp);
        else
            return QueryMaliciousRegistrationOutcome(o.GetError());
    }
    else
    {
        return QueryMaliciousRegistrationOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMaliciousRegistrationAsync(const QueryMaliciousRegistrationRequest& request, const QueryMaliciousRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMaliciousRegistrationRequest&;
    using Resp = QueryMaliciousRegistrationResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMaliciousRegistration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMaliciousRegistrationOutcomeCallable CpdpClient::QueryMaliciousRegistrationCallable(const QueryMaliciousRegistrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMaliciousRegistrationOutcome>>();
    QueryMaliciousRegistrationAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMaliciousRegistrationRequest&,
        QueryMaliciousRegistrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMemberBindOutcome CpdpClient::QueryMemberBind(const QueryMemberBindRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMemberBind");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMemberBindResponse rsp = QueryMemberBindResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMemberBindOutcome(rsp);
        else
            return QueryMemberBindOutcome(o.GetError());
    }
    else
    {
        return QueryMemberBindOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMemberBindAsync(const QueryMemberBindRequest& request, const QueryMemberBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMemberBindRequest&;
    using Resp = QueryMemberBindResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMemberBind", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMemberBindOutcomeCallable CpdpClient::QueryMemberBindCallable(const QueryMemberBindRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMemberBindOutcome>>();
    QueryMemberBindAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMemberBindRequest&,
        QueryMemberBindOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMemberTransactionOutcome CpdpClient::QueryMemberTransaction(const QueryMemberTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMemberTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMemberTransactionResponse rsp = QueryMemberTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMemberTransactionOutcome(rsp);
        else
            return QueryMemberTransactionOutcome(o.GetError());
    }
    else
    {
        return QueryMemberTransactionOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMemberTransactionAsync(const QueryMemberTransactionRequest& request, const QueryMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMemberTransactionRequest&;
    using Resp = QueryMemberTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMemberTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMemberTransactionOutcomeCallable CpdpClient::QueryMemberTransactionCallable(const QueryMemberTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMemberTransactionOutcome>>();
    QueryMemberTransactionAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMemberTransactionRequest&,
        QueryMemberTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMemberTransactionDetailsOutcome CpdpClient::QueryMemberTransactionDetails(const QueryMemberTransactionDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMemberTransactionDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMemberTransactionDetailsResponse rsp = QueryMemberTransactionDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMemberTransactionDetailsOutcome(rsp);
        else
            return QueryMemberTransactionDetailsOutcome(o.GetError());
    }
    else
    {
        return QueryMemberTransactionDetailsOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMemberTransactionDetailsAsync(const QueryMemberTransactionDetailsRequest& request, const QueryMemberTransactionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMemberTransactionDetailsRequest&;
    using Resp = QueryMemberTransactionDetailsResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMemberTransactionDetails", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMemberTransactionDetailsOutcomeCallable CpdpClient::QueryMemberTransactionDetailsCallable(const QueryMemberTransactionDetailsRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMemberTransactionDetailsOutcome>>();
    QueryMemberTransactionDetailsAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMemberTransactionDetailsRequest&,
        QueryMemberTransactionDetailsOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMerchantOutcome CpdpClient::QueryMerchant(const QueryMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMerchantResponse rsp = QueryMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMerchantOutcome(rsp);
        else
            return QueryMerchantOutcome(o.GetError());
    }
    else
    {
        return QueryMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMerchantAsync(const QueryMerchantRequest& request, const QueryMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMerchantRequest&;
    using Resp = QueryMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMerchantOutcomeCallable CpdpClient::QueryMerchantCallable(const QueryMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMerchantOutcome>>();
    QueryMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMerchantRequest&,
        QueryMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMerchantBalanceOutcome CpdpClient::QueryMerchantBalance(const QueryMerchantBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMerchantBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMerchantBalanceResponse rsp = QueryMerchantBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMerchantBalanceOutcome(rsp);
        else
            return QueryMerchantBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryMerchantBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMerchantBalanceAsync(const QueryMerchantBalanceRequest& request, const QueryMerchantBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMerchantBalanceRequest&;
    using Resp = QueryMerchantBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMerchantBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMerchantBalanceOutcomeCallable CpdpClient::QueryMerchantBalanceCallable(const QueryMerchantBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMerchantBalanceOutcome>>();
    QueryMerchantBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMerchantBalanceRequest&,
        QueryMerchantBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMerchantClassificationOutcome CpdpClient::QueryMerchantClassification(const QueryMerchantClassificationRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMerchantClassification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMerchantClassificationResponse rsp = QueryMerchantClassificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMerchantClassificationOutcome(rsp);
        else
            return QueryMerchantClassificationOutcome(o.GetError());
    }
    else
    {
        return QueryMerchantClassificationOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMerchantClassificationAsync(const QueryMerchantClassificationRequest& request, const QueryMerchantClassificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMerchantClassificationRequest&;
    using Resp = QueryMerchantClassificationResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMerchantClassification", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMerchantClassificationOutcomeCallable CpdpClient::QueryMerchantClassificationCallable(const QueryMerchantClassificationRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMerchantClassificationOutcome>>();
    QueryMerchantClassificationAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMerchantClassificationRequest&,
        QueryMerchantClassificationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMerchantInfoForManagementOutcome CpdpClient::QueryMerchantInfoForManagement(const QueryMerchantInfoForManagementRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMerchantInfoForManagement");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMerchantInfoForManagementResponse rsp = QueryMerchantInfoForManagementResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMerchantInfoForManagementOutcome(rsp);
        else
            return QueryMerchantInfoForManagementOutcome(o.GetError());
    }
    else
    {
        return QueryMerchantInfoForManagementOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMerchantInfoForManagementAsync(const QueryMerchantInfoForManagementRequest& request, const QueryMerchantInfoForManagementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMerchantInfoForManagementRequest&;
    using Resp = QueryMerchantInfoForManagementResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMerchantInfoForManagement", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMerchantInfoForManagementOutcomeCallable CpdpClient::QueryMerchantInfoForManagementCallable(const QueryMerchantInfoForManagementRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMerchantInfoForManagementOutcome>>();
    QueryMerchantInfoForManagementAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMerchantInfoForManagementRequest&,
        QueryMerchantInfoForManagementOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMerchantOrderOutcome CpdpClient::QueryMerchantOrder(const QueryMerchantOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMerchantOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMerchantOrderResponse rsp = QueryMerchantOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMerchantOrderOutcome(rsp);
        else
            return QueryMerchantOrderOutcome(o.GetError());
    }
    else
    {
        return QueryMerchantOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMerchantOrderAsync(const QueryMerchantOrderRequest& request, const QueryMerchantOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMerchantOrderRequest&;
    using Resp = QueryMerchantOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMerchantOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMerchantOrderOutcomeCallable CpdpClient::QueryMerchantOrderCallable(const QueryMerchantOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMerchantOrderOutcome>>();
    QueryMerchantOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMerchantOrderRequest&,
        QueryMerchantOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryMerchantPayWayListOutcome CpdpClient::QueryMerchantPayWayList(const QueryMerchantPayWayListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryMerchantPayWayList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryMerchantPayWayListResponse rsp = QueryMerchantPayWayListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryMerchantPayWayListOutcome(rsp);
        else
            return QueryMerchantPayWayListOutcome(o.GetError());
    }
    else
    {
        return QueryMerchantPayWayListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryMerchantPayWayListAsync(const QueryMerchantPayWayListRequest& request, const QueryMerchantPayWayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryMerchantPayWayListRequest&;
    using Resp = QueryMerchantPayWayListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryMerchantPayWayList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryMerchantPayWayListOutcomeCallable CpdpClient::QueryMerchantPayWayListCallable(const QueryMerchantPayWayListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryMerchantPayWayListOutcome>>();
    QueryMerchantPayWayListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryMerchantPayWayListRequest&,
        QueryMerchantPayWayListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankBankAccountBalanceOutcome CpdpClient::QueryOpenBankBankAccountBalance(const QueryOpenBankBankAccountBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankBankAccountBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankBankAccountBalanceResponse rsp = QueryOpenBankBankAccountBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankBankAccountBalanceOutcome(rsp);
        else
            return QueryOpenBankBankAccountBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankBankAccountBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankBankAccountBalanceAsync(const QueryOpenBankBankAccountBalanceRequest& request, const QueryOpenBankBankAccountBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankBankAccountBalanceRequest&;
    using Resp = QueryOpenBankBankAccountBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankBankAccountBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankBankAccountBalanceOutcomeCallable CpdpClient::QueryOpenBankBankAccountBalanceCallable(const QueryOpenBankBankAccountBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankBankAccountBalanceOutcome>>();
    QueryOpenBankBankAccountBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankBankAccountBalanceRequest&,
        QueryOpenBankBankAccountBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankBankBranchListOutcome CpdpClient::QueryOpenBankBankBranchList(const QueryOpenBankBankBranchListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankBankBranchList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankBankBranchListResponse rsp = QueryOpenBankBankBranchListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankBankBranchListOutcome(rsp);
        else
            return QueryOpenBankBankBranchListOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankBankBranchListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankBankBranchListAsync(const QueryOpenBankBankBranchListRequest& request, const QueryOpenBankBankBranchListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankBankBranchListRequest&;
    using Resp = QueryOpenBankBankBranchListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankBankBranchList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankBankBranchListOutcomeCallable CpdpClient::QueryOpenBankBankBranchListCallable(const QueryOpenBankBankBranchListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankBankBranchListOutcome>>();
    QueryOpenBankBankBranchListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankBankBranchListRequest&,
        QueryOpenBankBankBranchListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankBillDataPageOutcome CpdpClient::QueryOpenBankBillDataPage(const QueryOpenBankBillDataPageRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankBillDataPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankBillDataPageResponse rsp = QueryOpenBankBillDataPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankBillDataPageOutcome(rsp);
        else
            return QueryOpenBankBillDataPageOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankBillDataPageOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankBillDataPageAsync(const QueryOpenBankBillDataPageRequest& request, const QueryOpenBankBillDataPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankBillDataPageRequest&;
    using Resp = QueryOpenBankBillDataPageResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankBillDataPage", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankBillDataPageOutcomeCallable CpdpClient::QueryOpenBankBillDataPageCallable(const QueryOpenBankBillDataPageRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankBillDataPageOutcome>>();
    QueryOpenBankBillDataPageAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankBillDataPageRequest&,
        QueryOpenBankBillDataPageOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccountOutcome CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccount(const QueryOpenBankBindExternalSubMerchantBankAccountRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankBindExternalSubMerchantBankAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankBindExternalSubMerchantBankAccountResponse rsp = QueryOpenBankBindExternalSubMerchantBankAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankBindExternalSubMerchantBankAccountOutcome(rsp);
        else
            return QueryOpenBankBindExternalSubMerchantBankAccountOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankBindExternalSubMerchantBankAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccountAsync(const QueryOpenBankBindExternalSubMerchantBankAccountRequest& request, const QueryOpenBankBindExternalSubMerchantBankAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankBindExternalSubMerchantBankAccountRequest&;
    using Resp = QueryOpenBankBindExternalSubMerchantBankAccountResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankBindExternalSubMerchantBankAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccountOutcomeCallable CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccountCallable(const QueryOpenBankBindExternalSubMerchantBankAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankBindExternalSubMerchantBankAccountOutcome>>();
    QueryOpenBankBindExternalSubMerchantBankAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankBindExternalSubMerchantBankAccountRequest&,
        QueryOpenBankBindExternalSubMerchantBankAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankDailyReceiptDownloadUrlOutcome CpdpClient::QueryOpenBankDailyReceiptDownloadUrl(const QueryOpenBankDailyReceiptDownloadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankDailyReceiptDownloadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankDailyReceiptDownloadUrlResponse rsp = QueryOpenBankDailyReceiptDownloadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankDailyReceiptDownloadUrlOutcome(rsp);
        else
            return QueryOpenBankDailyReceiptDownloadUrlOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankDailyReceiptDownloadUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankDailyReceiptDownloadUrlAsync(const QueryOpenBankDailyReceiptDownloadUrlRequest& request, const QueryOpenBankDailyReceiptDownloadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankDailyReceiptDownloadUrlRequest&;
    using Resp = QueryOpenBankDailyReceiptDownloadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankDailyReceiptDownloadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankDailyReceiptDownloadUrlOutcomeCallable CpdpClient::QueryOpenBankDailyReceiptDownloadUrlCallable(const QueryOpenBankDailyReceiptDownloadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankDailyReceiptDownloadUrlOutcome>>();
    QueryOpenBankDailyReceiptDownloadUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankDailyReceiptDownloadUrlRequest&,
        QueryOpenBankDailyReceiptDownloadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankDownLoadUrlOutcome CpdpClient::QueryOpenBankDownLoadUrl(const QueryOpenBankDownLoadUrlRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankDownLoadUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankDownLoadUrlResponse rsp = QueryOpenBankDownLoadUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankDownLoadUrlOutcome(rsp);
        else
            return QueryOpenBankDownLoadUrlOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankDownLoadUrlOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankDownLoadUrlAsync(const QueryOpenBankDownLoadUrlRequest& request, const QueryOpenBankDownLoadUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankDownLoadUrlRequest&;
    using Resp = QueryOpenBankDownLoadUrlResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankDownLoadUrl", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankDownLoadUrlOutcomeCallable CpdpClient::QueryOpenBankDownLoadUrlCallable(const QueryOpenBankDownLoadUrlRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankDownLoadUrlOutcome>>();
    QueryOpenBankDownLoadUrlAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankDownLoadUrlRequest&,
        QueryOpenBankDownLoadUrlOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankExternalSubAccountBookBalanceOutcome CpdpClient::QueryOpenBankExternalSubAccountBookBalance(const QueryOpenBankExternalSubAccountBookBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankExternalSubAccountBookBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankExternalSubAccountBookBalanceResponse rsp = QueryOpenBankExternalSubAccountBookBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankExternalSubAccountBookBalanceOutcome(rsp);
        else
            return QueryOpenBankExternalSubAccountBookBalanceOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankExternalSubAccountBookBalanceOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankExternalSubAccountBookBalanceAsync(const QueryOpenBankExternalSubAccountBookBalanceRequest& request, const QueryOpenBankExternalSubAccountBookBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankExternalSubAccountBookBalanceRequest&;
    using Resp = QueryOpenBankExternalSubAccountBookBalanceResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankExternalSubAccountBookBalance", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankExternalSubAccountBookBalanceOutcomeCallable CpdpClient::QueryOpenBankExternalSubAccountBookBalanceCallable(const QueryOpenBankExternalSubAccountBookBalanceRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankExternalSubAccountBookBalanceOutcome>>();
    QueryOpenBankExternalSubAccountBookBalanceAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankExternalSubAccountBookBalanceRequest&,
        QueryOpenBankExternalSubAccountBookBalanceOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankExternalSubMerchantBankAccountOutcome CpdpClient::QueryOpenBankExternalSubMerchantBankAccount(const QueryOpenBankExternalSubMerchantBankAccountRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankExternalSubMerchantBankAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankExternalSubMerchantBankAccountResponse rsp = QueryOpenBankExternalSubMerchantBankAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankExternalSubMerchantBankAccountOutcome(rsp);
        else
            return QueryOpenBankExternalSubMerchantBankAccountOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankExternalSubMerchantBankAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankExternalSubMerchantBankAccountAsync(const QueryOpenBankExternalSubMerchantBankAccountRequest& request, const QueryOpenBankExternalSubMerchantBankAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankExternalSubMerchantBankAccountRequest&;
    using Resp = QueryOpenBankExternalSubMerchantBankAccountResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankExternalSubMerchantBankAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankExternalSubMerchantBankAccountOutcomeCallable CpdpClient::QueryOpenBankExternalSubMerchantBankAccountCallable(const QueryOpenBankExternalSubMerchantBankAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankExternalSubMerchantBankAccountOutcome>>();
    QueryOpenBankExternalSubMerchantBankAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankExternalSubMerchantBankAccountRequest&,
        QueryOpenBankExternalSubMerchantBankAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankExternalSubMerchantRegistrationOutcome CpdpClient::QueryOpenBankExternalSubMerchantRegistration(const QueryOpenBankExternalSubMerchantRegistrationRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankExternalSubMerchantRegistration");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankExternalSubMerchantRegistrationResponse rsp = QueryOpenBankExternalSubMerchantRegistrationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankExternalSubMerchantRegistrationOutcome(rsp);
        else
            return QueryOpenBankExternalSubMerchantRegistrationOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankExternalSubMerchantRegistrationOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankExternalSubMerchantRegistrationAsync(const QueryOpenBankExternalSubMerchantRegistrationRequest& request, const QueryOpenBankExternalSubMerchantRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankExternalSubMerchantRegistrationRequest&;
    using Resp = QueryOpenBankExternalSubMerchantRegistrationResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankExternalSubMerchantRegistration", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankExternalSubMerchantRegistrationOutcomeCallable CpdpClient::QueryOpenBankExternalSubMerchantRegistrationCallable(const QueryOpenBankExternalSubMerchantRegistrationRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankExternalSubMerchantRegistrationOutcome>>();
    QueryOpenBankExternalSubMerchantRegistrationAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankExternalSubMerchantRegistrationRequest&,
        QueryOpenBankExternalSubMerchantRegistrationOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankOrderDetailReceiptInfoOutcome CpdpClient::QueryOpenBankOrderDetailReceiptInfo(const QueryOpenBankOrderDetailReceiptInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankOrderDetailReceiptInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankOrderDetailReceiptInfoResponse rsp = QueryOpenBankOrderDetailReceiptInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankOrderDetailReceiptInfoOutcome(rsp);
        else
            return QueryOpenBankOrderDetailReceiptInfoOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankOrderDetailReceiptInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankOrderDetailReceiptInfoAsync(const QueryOpenBankOrderDetailReceiptInfoRequest& request, const QueryOpenBankOrderDetailReceiptInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankOrderDetailReceiptInfoRequest&;
    using Resp = QueryOpenBankOrderDetailReceiptInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankOrderDetailReceiptInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankOrderDetailReceiptInfoOutcomeCallable CpdpClient::QueryOpenBankOrderDetailReceiptInfoCallable(const QueryOpenBankOrderDetailReceiptInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankOrderDetailReceiptInfoOutcome>>();
    QueryOpenBankOrderDetailReceiptInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankOrderDetailReceiptInfoRequest&,
        QueryOpenBankOrderDetailReceiptInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankPaymentOrderOutcome CpdpClient::QueryOpenBankPaymentOrder(const QueryOpenBankPaymentOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankPaymentOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankPaymentOrderResponse rsp = QueryOpenBankPaymentOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankPaymentOrderOutcome(rsp);
        else
            return QueryOpenBankPaymentOrderOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankPaymentOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankPaymentOrderAsync(const QueryOpenBankPaymentOrderRequest& request, const QueryOpenBankPaymentOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankPaymentOrderRequest&;
    using Resp = QueryOpenBankPaymentOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankPaymentOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankPaymentOrderOutcomeCallable CpdpClient::QueryOpenBankPaymentOrderCallable(const QueryOpenBankPaymentOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankPaymentOrderOutcome>>();
    QueryOpenBankPaymentOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankPaymentOrderRequest&,
        QueryOpenBankPaymentOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankProfitSharePayeeOutcome CpdpClient::QueryOpenBankProfitSharePayee(const QueryOpenBankProfitSharePayeeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankProfitSharePayee");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankProfitSharePayeeResponse rsp = QueryOpenBankProfitSharePayeeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankProfitSharePayeeOutcome(rsp);
        else
            return QueryOpenBankProfitSharePayeeOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankProfitSharePayeeOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankProfitSharePayeeAsync(const QueryOpenBankProfitSharePayeeRequest& request, const QueryOpenBankProfitSharePayeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankProfitSharePayeeRequest&;
    using Resp = QueryOpenBankProfitSharePayeeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankProfitSharePayee", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankProfitSharePayeeOutcomeCallable CpdpClient::QueryOpenBankProfitSharePayeeCallable(const QueryOpenBankProfitSharePayeeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankProfitSharePayeeOutcome>>();
    QueryOpenBankProfitSharePayeeAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankProfitSharePayeeRequest&,
        QueryOpenBankProfitSharePayeeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankRefundOrderOutcome CpdpClient::QueryOpenBankRefundOrder(const QueryOpenBankRefundOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankRefundOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankRefundOrderResponse rsp = QueryOpenBankRefundOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankRefundOrderOutcome(rsp);
        else
            return QueryOpenBankRefundOrderOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankRefundOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankRefundOrderAsync(const QueryOpenBankRefundOrderRequest& request, const QueryOpenBankRefundOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankRefundOrderRequest&;
    using Resp = QueryOpenBankRefundOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankRefundOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankRefundOrderOutcomeCallable CpdpClient::QueryOpenBankRefundOrderCallable(const QueryOpenBankRefundOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankRefundOrderOutcome>>();
    QueryOpenBankRefundOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankRefundOrderRequest&,
        QueryOpenBankRefundOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankSettleOrderOutcome CpdpClient::QueryOpenBankSettleOrder(const QueryOpenBankSettleOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankSettleOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankSettleOrderResponse rsp = QueryOpenBankSettleOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankSettleOrderOutcome(rsp);
        else
            return QueryOpenBankSettleOrderOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankSettleOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankSettleOrderAsync(const QueryOpenBankSettleOrderRequest& request, const QueryOpenBankSettleOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankSettleOrderRequest&;
    using Resp = QueryOpenBankSettleOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankSettleOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankSettleOrderOutcomeCallable CpdpClient::QueryOpenBankSettleOrderCallable(const QueryOpenBankSettleOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankSettleOrderOutcome>>();
    QueryOpenBankSettleOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankSettleOrderRequest&,
        QueryOpenBankSettleOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankSubMerchantCredentialOutcome CpdpClient::QueryOpenBankSubMerchantCredential(const QueryOpenBankSubMerchantCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankSubMerchantCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankSubMerchantCredentialResponse rsp = QueryOpenBankSubMerchantCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankSubMerchantCredentialOutcome(rsp);
        else
            return QueryOpenBankSubMerchantCredentialOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankSubMerchantCredentialOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankSubMerchantCredentialAsync(const QueryOpenBankSubMerchantCredentialRequest& request, const QueryOpenBankSubMerchantCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankSubMerchantCredentialRequest&;
    using Resp = QueryOpenBankSubMerchantCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankSubMerchantCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankSubMerchantCredentialOutcomeCallable CpdpClient::QueryOpenBankSubMerchantCredentialCallable(const QueryOpenBankSubMerchantCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankSubMerchantCredentialOutcome>>();
    QueryOpenBankSubMerchantCredentialAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankSubMerchantCredentialRequest&,
        QueryOpenBankSubMerchantCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankSubMerchantRateConfigureOutcome CpdpClient::QueryOpenBankSubMerchantRateConfigure(const QueryOpenBankSubMerchantRateConfigureRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankSubMerchantRateConfigure");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankSubMerchantRateConfigureResponse rsp = QueryOpenBankSubMerchantRateConfigureResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankSubMerchantRateConfigureOutcome(rsp);
        else
            return QueryOpenBankSubMerchantRateConfigureOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankSubMerchantRateConfigureOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankSubMerchantRateConfigureAsync(const QueryOpenBankSubMerchantRateConfigureRequest& request, const QueryOpenBankSubMerchantRateConfigureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankSubMerchantRateConfigureRequest&;
    using Resp = QueryOpenBankSubMerchantRateConfigureResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankSubMerchantRateConfigure", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankSubMerchantRateConfigureOutcomeCallable CpdpClient::QueryOpenBankSubMerchantRateConfigureCallable(const QueryOpenBankSubMerchantRateConfigureRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankSubMerchantRateConfigureOutcome>>();
    QueryOpenBankSubMerchantRateConfigureAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankSubMerchantRateConfigureRequest&,
        QueryOpenBankSubMerchantRateConfigureOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankSubMerchantSignOnlineOutcome CpdpClient::QueryOpenBankSubMerchantSignOnline(const QueryOpenBankSubMerchantSignOnlineRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankSubMerchantSignOnline");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankSubMerchantSignOnlineResponse rsp = QueryOpenBankSubMerchantSignOnlineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankSubMerchantSignOnlineOutcome(rsp);
        else
            return QueryOpenBankSubMerchantSignOnlineOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankSubMerchantSignOnlineOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankSubMerchantSignOnlineAsync(const QueryOpenBankSubMerchantSignOnlineRequest& request, const QueryOpenBankSubMerchantSignOnlineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankSubMerchantSignOnlineRequest&;
    using Resp = QueryOpenBankSubMerchantSignOnlineResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankSubMerchantSignOnline", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankSubMerchantSignOnlineOutcomeCallable CpdpClient::QueryOpenBankSubMerchantSignOnlineCallable(const QueryOpenBankSubMerchantSignOnlineRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankSubMerchantSignOnlineOutcome>>();
    QueryOpenBankSubMerchantSignOnlineAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankSubMerchantSignOnlineRequest&,
        QueryOpenBankSubMerchantSignOnlineOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankSupportBankListOutcome CpdpClient::QueryOpenBankSupportBankList(const QueryOpenBankSupportBankListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankSupportBankList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankSupportBankListResponse rsp = QueryOpenBankSupportBankListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankSupportBankListOutcome(rsp);
        else
            return QueryOpenBankSupportBankListOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankSupportBankListOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankSupportBankListAsync(const QueryOpenBankSupportBankListRequest& request, const QueryOpenBankSupportBankListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankSupportBankListRequest&;
    using Resp = QueryOpenBankSupportBankListResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankSupportBankList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankSupportBankListOutcomeCallable CpdpClient::QueryOpenBankSupportBankListCallable(const QueryOpenBankSupportBankListRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankSupportBankListOutcome>>();
    QueryOpenBankSupportBankListAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankSupportBankListRequest&,
        QueryOpenBankSupportBankListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccount(const QueryOpenBankUnbindExternalSubMerchantBankAccountRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankUnbindExternalSubMerchantBankAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankUnbindExternalSubMerchantBankAccountResponse rsp = QueryOpenBankUnbindExternalSubMerchantBankAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome(rsp);
        else
            return QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccountAsync(const QueryOpenBankUnbindExternalSubMerchantBankAccountRequest& request, const QueryOpenBankUnbindExternalSubMerchantBankAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankUnbindExternalSubMerchantBankAccountRequest&;
    using Resp = QueryOpenBankUnbindExternalSubMerchantBankAccountResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankUnbindExternalSubMerchantBankAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccountOutcomeCallable CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccountCallable(const QueryOpenBankUnbindExternalSubMerchantBankAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome>>();
    QueryOpenBankUnbindExternalSubMerchantBankAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankUnbindExternalSubMerchantBankAccountRequest&,
        QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOpenBankVerificationOrderOutcome CpdpClient::QueryOpenBankVerificationOrder(const QueryOpenBankVerificationOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOpenBankVerificationOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOpenBankVerificationOrderResponse rsp = QueryOpenBankVerificationOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOpenBankVerificationOrderOutcome(rsp);
        else
            return QueryOpenBankVerificationOrderOutcome(o.GetError());
    }
    else
    {
        return QueryOpenBankVerificationOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOpenBankVerificationOrderAsync(const QueryOpenBankVerificationOrderRequest& request, const QueryOpenBankVerificationOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOpenBankVerificationOrderRequest&;
    using Resp = QueryOpenBankVerificationOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOpenBankVerificationOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOpenBankVerificationOrderOutcomeCallable CpdpClient::QueryOpenBankVerificationOrderCallable(const QueryOpenBankVerificationOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOpenBankVerificationOrderOutcome>>();
    QueryOpenBankVerificationOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOpenBankVerificationOrderRequest&,
        QueryOpenBankVerificationOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOrderOutcome CpdpClient::QueryOrder(const QueryOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOrderResponse rsp = QueryOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOrderOutcome(rsp);
        else
            return QueryOrderOutcome(o.GetError());
    }
    else
    {
        return QueryOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOrderAsync(const QueryOrderRequest& request, const QueryOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOrderRequest&;
    using Resp = QueryOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOrderOutcomeCallable CpdpClient::QueryOrderCallable(const QueryOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOrderOutcome>>();
    QueryOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOrderRequest&,
        QueryOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOrderStatusOutcome CpdpClient::QueryOrderStatus(const QueryOrderStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOrderStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOrderStatusResponse rsp = QueryOrderStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOrderStatusOutcome(rsp);
        else
            return QueryOrderStatusOutcome(o.GetError());
    }
    else
    {
        return QueryOrderStatusOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOrderStatusAsync(const QueryOrderStatusRequest& request, const QueryOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOrderStatusRequest&;
    using Resp = QueryOrderStatusResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOrderStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOrderStatusOutcomeCallable CpdpClient::QueryOrderStatusCallable(const QueryOrderStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOrderStatusOutcome>>();
    QueryOrderStatusAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOrderStatusRequest&,
        QueryOrderStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryOutwardOrderOutcome CpdpClient::QueryOutwardOrder(const QueryOutwardOrderRequest &request)
{
    auto outcome = MakeRequest(request, "QueryOutwardOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryOutwardOrderResponse rsp = QueryOutwardOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryOutwardOrderOutcome(rsp);
        else
            return QueryOutwardOrderOutcome(o.GetError());
    }
    else
    {
        return QueryOutwardOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryOutwardOrderAsync(const QueryOutwardOrderRequest& request, const QueryOutwardOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryOutwardOrderRequest&;
    using Resp = QueryOutwardOrderResponse;

    DoRequestAsync<Req, Resp>(
        "QueryOutwardOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryOutwardOrderOutcomeCallable CpdpClient::QueryOutwardOrderCallable(const QueryOutwardOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryOutwardOrderOutcome>>();
    QueryOutwardOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryOutwardOrderRequest&,
        QueryOutwardOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryPayerInfoOutcome CpdpClient::QueryPayerInfo(const QueryPayerInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPayerInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPayerInfoResponse rsp = QueryPayerInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPayerInfoOutcome(rsp);
        else
            return QueryPayerInfoOutcome(o.GetError());
    }
    else
    {
        return QueryPayerInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryPayerInfoAsync(const QueryPayerInfoRequest& request, const QueryPayerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryPayerInfoRequest&;
    using Resp = QueryPayerInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryPayerInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryPayerInfoOutcomeCallable CpdpClient::QueryPayerInfoCallable(const QueryPayerInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryPayerInfoOutcome>>();
    QueryPayerInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryPayerInfoRequest&,
        QueryPayerInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryReconciliationDocumentOutcome CpdpClient::QueryReconciliationDocument(const QueryReconciliationDocumentRequest &request)
{
    auto outcome = MakeRequest(request, "QueryReconciliationDocument");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryReconciliationDocumentResponse rsp = QueryReconciliationDocumentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryReconciliationDocumentOutcome(rsp);
        else
            return QueryReconciliationDocumentOutcome(o.GetError());
    }
    else
    {
        return QueryReconciliationDocumentOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryReconciliationDocumentAsync(const QueryReconciliationDocumentRequest& request, const QueryReconciliationDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryReconciliationDocumentRequest&;
    using Resp = QueryReconciliationDocumentResponse;

    DoRequestAsync<Req, Resp>(
        "QueryReconciliationDocument", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryReconciliationDocumentOutcomeCallable CpdpClient::QueryReconciliationDocumentCallable(const QueryReconciliationDocumentRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryReconciliationDocumentOutcome>>();
    QueryReconciliationDocumentAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryReconciliationDocumentRequest&,
        QueryReconciliationDocumentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryReconciliationFileApplyInfoOutcome CpdpClient::QueryReconciliationFileApplyInfo(const QueryReconciliationFileApplyInfoRequest &request)
{
    auto outcome = MakeRequest(request, "QueryReconciliationFileApplyInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryReconciliationFileApplyInfoResponse rsp = QueryReconciliationFileApplyInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryReconciliationFileApplyInfoOutcome(rsp);
        else
            return QueryReconciliationFileApplyInfoOutcome(o.GetError());
    }
    else
    {
        return QueryReconciliationFileApplyInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryReconciliationFileApplyInfoAsync(const QueryReconciliationFileApplyInfoRequest& request, const QueryReconciliationFileApplyInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryReconciliationFileApplyInfoRequest&;
    using Resp = QueryReconciliationFileApplyInfoResponse;

    DoRequestAsync<Req, Resp>(
        "QueryReconciliationFileApplyInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryReconciliationFileApplyInfoOutcomeCallable CpdpClient::QueryReconciliationFileApplyInfoCallable(const QueryReconciliationFileApplyInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryReconciliationFileApplyInfoOutcome>>();
    QueryReconciliationFileApplyInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryReconciliationFileApplyInfoRequest&,
        QueryReconciliationFileApplyInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryRefundOutcome CpdpClient::QueryRefund(const QueryRefundRequest &request)
{
    auto outcome = MakeRequest(request, "QueryRefund");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryRefundResponse rsp = QueryRefundResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryRefundOutcome(rsp);
        else
            return QueryRefundOutcome(o.GetError());
    }
    else
    {
        return QueryRefundOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryRefundAsync(const QueryRefundRequest& request, const QueryRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryRefundRequest&;
    using Resp = QueryRefundResponse;

    DoRequestAsync<Req, Resp>(
        "QueryRefund", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryRefundOutcomeCallable CpdpClient::QueryRefundCallable(const QueryRefundRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryRefundOutcome>>();
    QueryRefundAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryRefundRequest&,
        QueryRefundOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryShopOpenIdOutcome CpdpClient::QueryShopOpenId(const QueryShopOpenIdRequest &request)
{
    auto outcome = MakeRequest(request, "QueryShopOpenId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryShopOpenIdResponse rsp = QueryShopOpenIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryShopOpenIdOutcome(rsp);
        else
            return QueryShopOpenIdOutcome(o.GetError());
    }
    else
    {
        return QueryShopOpenIdOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryShopOpenIdAsync(const QueryShopOpenIdRequest& request, const QueryShopOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryShopOpenIdRequest&;
    using Resp = QueryShopOpenIdResponse;

    DoRequestAsync<Req, Resp>(
        "QueryShopOpenId", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryShopOpenIdOutcomeCallable CpdpClient::QueryShopOpenIdCallable(const QueryShopOpenIdRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryShopOpenIdOutcome>>();
    QueryShopOpenIdAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryShopOpenIdRequest&,
        QueryShopOpenIdOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QuerySinglePaymentResultOutcome CpdpClient::QuerySinglePaymentResult(const QuerySinglePaymentResultRequest &request)
{
    auto outcome = MakeRequest(request, "QuerySinglePaymentResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuerySinglePaymentResultResponse rsp = QuerySinglePaymentResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuerySinglePaymentResultOutcome(rsp);
        else
            return QuerySinglePaymentResultOutcome(o.GetError());
    }
    else
    {
        return QuerySinglePaymentResultOutcome(outcome.GetError());
    }
}

void CpdpClient::QuerySinglePaymentResultAsync(const QuerySinglePaymentResultRequest& request, const QuerySinglePaymentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuerySinglePaymentResultRequest&;
    using Resp = QuerySinglePaymentResultResponse;

    DoRequestAsync<Req, Resp>(
        "QuerySinglePaymentResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QuerySinglePaymentResultOutcomeCallable CpdpClient::QuerySinglePaymentResultCallable(const QuerySinglePaymentResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuerySinglePaymentResultOutcome>>();
    QuerySinglePaymentResultAsync(
    request,
    [prom](
        const CpdpClient*,
        const QuerySinglePaymentResultRequest&,
        QuerySinglePaymentResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QuerySingleTransactionStatusOutcome CpdpClient::QuerySingleTransactionStatus(const QuerySingleTransactionStatusRequest &request)
{
    auto outcome = MakeRequest(request, "QuerySingleTransactionStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuerySingleTransactionStatusResponse rsp = QuerySingleTransactionStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuerySingleTransactionStatusOutcome(rsp);
        else
            return QuerySingleTransactionStatusOutcome(o.GetError());
    }
    else
    {
        return QuerySingleTransactionStatusOutcome(outcome.GetError());
    }
}

void CpdpClient::QuerySingleTransactionStatusAsync(const QuerySingleTransactionStatusRequest& request, const QuerySingleTransactionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuerySingleTransactionStatusRequest&;
    using Resp = QuerySingleTransactionStatusResponse;

    DoRequestAsync<Req, Resp>(
        "QuerySingleTransactionStatus", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QuerySingleTransactionStatusOutcomeCallable CpdpClient::QuerySingleTransactionStatusCallable(const QuerySingleTransactionStatusRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuerySingleTransactionStatusOutcome>>();
    QuerySingleTransactionStatusAsync(
    request,
    [prom](
        const CpdpClient*,
        const QuerySingleTransactionStatusRequest&,
        QuerySingleTransactionStatusOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QuerySmallAmountTransferOutcome CpdpClient::QuerySmallAmountTransfer(const QuerySmallAmountTransferRequest &request)
{
    auto outcome = MakeRequest(request, "QuerySmallAmountTransfer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QuerySmallAmountTransferResponse rsp = QuerySmallAmountTransferResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QuerySmallAmountTransferOutcome(rsp);
        else
            return QuerySmallAmountTransferOutcome(o.GetError());
    }
    else
    {
        return QuerySmallAmountTransferOutcome(outcome.GetError());
    }
}

void CpdpClient::QuerySmallAmountTransferAsync(const QuerySmallAmountTransferRequest& request, const QuerySmallAmountTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QuerySmallAmountTransferRequest&;
    using Resp = QuerySmallAmountTransferResponse;

    DoRequestAsync<Req, Resp>(
        "QuerySmallAmountTransfer", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QuerySmallAmountTransferOutcomeCallable CpdpClient::QuerySmallAmountTransferCallable(const QuerySmallAmountTransferRequest &request)
{
    const auto prom = std::make_shared<std::promise<QuerySmallAmountTransferOutcome>>();
    QuerySmallAmountTransferAsync(
    request,
    [prom](
        const CpdpClient*,
        const QuerySmallAmountTransferRequest&,
        QuerySmallAmountTransferOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryTradeOutcome CpdpClient::QueryTrade(const QueryTradeRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTrade");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTradeResponse rsp = QueryTradeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTradeOutcome(rsp);
        else
            return QueryTradeOutcome(o.GetError());
    }
    else
    {
        return QueryTradeOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryTradeAsync(const QueryTradeRequest& request, const QueryTradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryTradeRequest&;
    using Resp = QueryTradeResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTrade", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryTradeOutcomeCallable CpdpClient::QueryTradeCallable(const QueryTradeRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTradeOutcome>>();
    QueryTradeAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryTradeRequest&,
        QueryTradeOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryTransferBatchOutcome CpdpClient::QueryTransferBatch(const QueryTransferBatchRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTransferBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTransferBatchResponse rsp = QueryTransferBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTransferBatchOutcome(rsp);
        else
            return QueryTransferBatchOutcome(o.GetError());
    }
    else
    {
        return QueryTransferBatchOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryTransferBatchAsync(const QueryTransferBatchRequest& request, const QueryTransferBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryTransferBatchRequest&;
    using Resp = QueryTransferBatchResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTransferBatch", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryTransferBatchOutcomeCallable CpdpClient::QueryTransferBatchCallable(const QueryTransferBatchRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTransferBatchOutcome>>();
    QueryTransferBatchAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryTransferBatchRequest&,
        QueryTransferBatchOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryTransferDetailOutcome CpdpClient::QueryTransferDetail(const QueryTransferDetailRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTransferDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTransferDetailResponse rsp = QueryTransferDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTransferDetailOutcome(rsp);
        else
            return QueryTransferDetailOutcome(o.GetError());
    }
    else
    {
        return QueryTransferDetailOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryTransferDetailAsync(const QueryTransferDetailRequest& request, const QueryTransferDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryTransferDetailRequest&;
    using Resp = QueryTransferDetailResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTransferDetail", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryTransferDetailOutcomeCallable CpdpClient::QueryTransferDetailCallable(const QueryTransferDetailRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTransferDetailOutcome>>();
    QueryTransferDetailAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryTransferDetailRequest&,
        QueryTransferDetailOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::QueryTransferResultOutcome CpdpClient::QueryTransferResult(const QueryTransferResultRequest &request)
{
    auto outcome = MakeRequest(request, "QueryTransferResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryTransferResultResponse rsp = QueryTransferResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryTransferResultOutcome(rsp);
        else
            return QueryTransferResultOutcome(o.GetError());
    }
    else
    {
        return QueryTransferResultOutcome(outcome.GetError());
    }
}

void CpdpClient::QueryTransferResultAsync(const QueryTransferResultRequest& request, const QueryTransferResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const QueryTransferResultRequest&;
    using Resp = QueryTransferResultResponse;

    DoRequestAsync<Req, Resp>(
        "QueryTransferResult", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::QueryTransferResultOutcomeCallable CpdpClient::QueryTransferResultCallable(const QueryTransferResultRequest &request)
{
    const auto prom = std::make_shared<std::promise<QueryTransferResultOutcome>>();
    QueryTransferResultAsync(
    request,
    [prom](
        const CpdpClient*,
        const QueryTransferResultRequest&,
        QueryTransferResultOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RechargeByThirdPayOutcome CpdpClient::RechargeByThirdPay(const RechargeByThirdPayRequest &request)
{
    auto outcome = MakeRequest(request, "RechargeByThirdPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RechargeByThirdPayResponse rsp = RechargeByThirdPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RechargeByThirdPayOutcome(rsp);
        else
            return RechargeByThirdPayOutcome(o.GetError());
    }
    else
    {
        return RechargeByThirdPayOutcome(outcome.GetError());
    }
}

void CpdpClient::RechargeByThirdPayAsync(const RechargeByThirdPayRequest& request, const RechargeByThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RechargeByThirdPayRequest&;
    using Resp = RechargeByThirdPayResponse;

    DoRequestAsync<Req, Resp>(
        "RechargeByThirdPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RechargeByThirdPayOutcomeCallable CpdpClient::RechargeByThirdPayCallable(const RechargeByThirdPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<RechargeByThirdPayOutcome>>();
    RechargeByThirdPayAsync(
    request,
    [prom](
        const CpdpClient*,
        const RechargeByThirdPayRequest&,
        RechargeByThirdPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RechargeMemberThirdPayOutcome CpdpClient::RechargeMemberThirdPay(const RechargeMemberThirdPayRequest &request)
{
    auto outcome = MakeRequest(request, "RechargeMemberThirdPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RechargeMemberThirdPayResponse rsp = RechargeMemberThirdPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RechargeMemberThirdPayOutcome(rsp);
        else
            return RechargeMemberThirdPayOutcome(o.GetError());
    }
    else
    {
        return RechargeMemberThirdPayOutcome(outcome.GetError());
    }
}

void CpdpClient::RechargeMemberThirdPayAsync(const RechargeMemberThirdPayRequest& request, const RechargeMemberThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RechargeMemberThirdPayRequest&;
    using Resp = RechargeMemberThirdPayResponse;

    DoRequestAsync<Req, Resp>(
        "RechargeMemberThirdPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RechargeMemberThirdPayOutcomeCallable CpdpClient::RechargeMemberThirdPayCallable(const RechargeMemberThirdPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<RechargeMemberThirdPayOutcome>>();
    RechargeMemberThirdPayAsync(
    request,
    [prom](
        const CpdpClient*,
        const RechargeMemberThirdPayRequest&,
        RechargeMemberThirdPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RefundOutcome CpdpClient::Refund(const RefundRequest &request)
{
    auto outcome = MakeRequest(request, "Refund");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundResponse rsp = RefundResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundOutcome(rsp);
        else
            return RefundOutcome(o.GetError());
    }
    else
    {
        return RefundOutcome(outcome.GetError());
    }
}

void CpdpClient::RefundAsync(const RefundRequest& request, const RefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundRequest&;
    using Resp = RefundResponse;

    DoRequestAsync<Req, Resp>(
        "Refund", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RefundOutcomeCallable CpdpClient::RefundCallable(const RefundRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundOutcome>>();
    RefundAsync(
    request,
    [prom](
        const CpdpClient*,
        const RefundRequest&,
        RefundOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RefundCloudOrderOutcome CpdpClient::RefundCloudOrder(const RefundCloudOrderRequest &request)
{
    auto outcome = MakeRequest(request, "RefundCloudOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundCloudOrderResponse rsp = RefundCloudOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundCloudOrderOutcome(rsp);
        else
            return RefundCloudOrderOutcome(o.GetError());
    }
    else
    {
        return RefundCloudOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::RefundCloudOrderAsync(const RefundCloudOrderRequest& request, const RefundCloudOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundCloudOrderRequest&;
    using Resp = RefundCloudOrderResponse;

    DoRequestAsync<Req, Resp>(
        "RefundCloudOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RefundCloudOrderOutcomeCallable CpdpClient::RefundCloudOrderCallable(const RefundCloudOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundCloudOrderOutcome>>();
    RefundCloudOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const RefundCloudOrderRequest&,
        RefundCloudOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RefundMemberTransactionOutcome CpdpClient::RefundMemberTransaction(const RefundMemberTransactionRequest &request)
{
    auto outcome = MakeRequest(request, "RefundMemberTransaction");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundMemberTransactionResponse rsp = RefundMemberTransactionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundMemberTransactionOutcome(rsp);
        else
            return RefundMemberTransactionOutcome(o.GetError());
    }
    else
    {
        return RefundMemberTransactionOutcome(outcome.GetError());
    }
}

void CpdpClient::RefundMemberTransactionAsync(const RefundMemberTransactionRequest& request, const RefundMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundMemberTransactionRequest&;
    using Resp = RefundMemberTransactionResponse;

    DoRequestAsync<Req, Resp>(
        "RefundMemberTransaction", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RefundMemberTransactionOutcomeCallable CpdpClient::RefundMemberTransactionCallable(const RefundMemberTransactionRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundMemberTransactionOutcome>>();
    RefundMemberTransactionAsync(
    request,
    [prom](
        const CpdpClient*,
        const RefundMemberTransactionRequest&,
        RefundMemberTransactionOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RefundOpenBankOrderOutcome CpdpClient::RefundOpenBankOrder(const RefundOpenBankOrderRequest &request)
{
    auto outcome = MakeRequest(request, "RefundOpenBankOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundOpenBankOrderResponse rsp = RefundOpenBankOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundOpenBankOrderOutcome(rsp);
        else
            return RefundOpenBankOrderOutcome(o.GetError());
    }
    else
    {
        return RefundOpenBankOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::RefundOpenBankOrderAsync(const RefundOpenBankOrderRequest& request, const RefundOpenBankOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundOpenBankOrderRequest&;
    using Resp = RefundOpenBankOrderResponse;

    DoRequestAsync<Req, Resp>(
        "RefundOpenBankOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RefundOpenBankOrderOutcomeCallable CpdpClient::RefundOpenBankOrderCallable(const RefundOpenBankOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundOpenBankOrderOutcome>>();
    RefundOpenBankOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const RefundOpenBankOrderRequest&,
        RefundOpenBankOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RefundOrderOutcome CpdpClient::RefundOrder(const RefundOrderRequest &request)
{
    auto outcome = MakeRequest(request, "RefundOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundOrderResponse rsp = RefundOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundOrderOutcome(rsp);
        else
            return RefundOrderOutcome(o.GetError());
    }
    else
    {
        return RefundOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::RefundOrderAsync(const RefundOrderRequest& request, const RefundOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundOrderRequest&;
    using Resp = RefundOrderResponse;

    DoRequestAsync<Req, Resp>(
        "RefundOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RefundOrderOutcomeCallable CpdpClient::RefundOrderCallable(const RefundOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundOrderOutcome>>();
    RefundOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const RefundOrderRequest&,
        RefundOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RefundTlinxOrderOutcome CpdpClient::RefundTlinxOrder(const RefundTlinxOrderRequest &request)
{
    auto outcome = MakeRequest(request, "RefundTlinxOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefundTlinxOrderResponse rsp = RefundTlinxOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefundTlinxOrderOutcome(rsp);
        else
            return RefundTlinxOrderOutcome(o.GetError());
    }
    else
    {
        return RefundTlinxOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::RefundTlinxOrderAsync(const RefundTlinxOrderRequest& request, const RefundTlinxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RefundTlinxOrderRequest&;
    using Resp = RefundTlinxOrderResponse;

    DoRequestAsync<Req, Resp>(
        "RefundTlinxOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RefundTlinxOrderOutcomeCallable CpdpClient::RefundTlinxOrderCallable(const RefundTlinxOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<RefundTlinxOrderOutcome>>();
    RefundTlinxOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const RefundTlinxOrderRequest&,
        RefundTlinxOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RegisterBehaviorOutcome CpdpClient::RegisterBehavior(const RegisterBehaviorRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterBehavior");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterBehaviorResponse rsp = RegisterBehaviorResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterBehaviorOutcome(rsp);
        else
            return RegisterBehaviorOutcome(o.GetError());
    }
    else
    {
        return RegisterBehaviorOutcome(outcome.GetError());
    }
}

void CpdpClient::RegisterBehaviorAsync(const RegisterBehaviorRequest& request, const RegisterBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterBehaviorRequest&;
    using Resp = RegisterBehaviorResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterBehavior", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RegisterBehaviorOutcomeCallable CpdpClient::RegisterBehaviorCallable(const RegisterBehaviorRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterBehaviorOutcome>>();
    RegisterBehaviorAsync(
    request,
    [prom](
        const CpdpClient*,
        const RegisterBehaviorRequest&,
        RegisterBehaviorOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RegisterBillOutcome CpdpClient::RegisterBill(const RegisterBillRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterBill");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterBillResponse rsp = RegisterBillResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterBillOutcome(rsp);
        else
            return RegisterBillOutcome(o.GetError());
    }
    else
    {
        return RegisterBillOutcome(outcome.GetError());
    }
}

void CpdpClient::RegisterBillAsync(const RegisterBillRequest& request, const RegisterBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterBillRequest&;
    using Resp = RegisterBillResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterBill", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RegisterBillOutcomeCallable CpdpClient::RegisterBillCallable(const RegisterBillRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterBillOutcome>>();
    RegisterBillAsync(
    request,
    [prom](
        const CpdpClient*,
        const RegisterBillRequest&,
        RegisterBillOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RegisterBillSupportWithdrawOutcome CpdpClient::RegisterBillSupportWithdraw(const RegisterBillSupportWithdrawRequest &request)
{
    auto outcome = MakeRequest(request, "RegisterBillSupportWithdraw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RegisterBillSupportWithdrawResponse rsp = RegisterBillSupportWithdrawResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RegisterBillSupportWithdrawOutcome(rsp);
        else
            return RegisterBillSupportWithdrawOutcome(o.GetError());
    }
    else
    {
        return RegisterBillSupportWithdrawOutcome(outcome.GetError());
    }
}

void CpdpClient::RegisterBillSupportWithdrawAsync(const RegisterBillSupportWithdrawRequest& request, const RegisterBillSupportWithdrawAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RegisterBillSupportWithdrawRequest&;
    using Resp = RegisterBillSupportWithdrawResponse;

    DoRequestAsync<Req, Resp>(
        "RegisterBillSupportWithdraw", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RegisterBillSupportWithdrawOutcomeCallable CpdpClient::RegisterBillSupportWithdrawCallable(const RegisterBillSupportWithdrawRequest &request)
{
    const auto prom = std::make_shared<std::promise<RegisterBillSupportWithdrawOutcome>>();
    RegisterBillSupportWithdrawAsync(
    request,
    [prom](
        const CpdpClient*,
        const RegisterBillSupportWithdrawRequest&,
        RegisterBillSupportWithdrawOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ReviseMbrPropertyOutcome CpdpClient::ReviseMbrProperty(const ReviseMbrPropertyRequest &request)
{
    auto outcome = MakeRequest(request, "ReviseMbrProperty");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReviseMbrPropertyResponse rsp = ReviseMbrPropertyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReviseMbrPropertyOutcome(rsp);
        else
            return ReviseMbrPropertyOutcome(o.GetError());
    }
    else
    {
        return ReviseMbrPropertyOutcome(outcome.GetError());
    }
}

void CpdpClient::ReviseMbrPropertyAsync(const ReviseMbrPropertyRequest& request, const ReviseMbrPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ReviseMbrPropertyRequest&;
    using Resp = ReviseMbrPropertyResponse;

    DoRequestAsync<Req, Resp>(
        "ReviseMbrProperty", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ReviseMbrPropertyOutcomeCallable CpdpClient::ReviseMbrPropertyCallable(const ReviseMbrPropertyRequest &request)
{
    const auto prom = std::make_shared<std::promise<ReviseMbrPropertyOutcome>>();
    ReviseMbrPropertyAsync(
    request,
    [prom](
        const CpdpClient*,
        const ReviseMbrPropertyRequest&,
        ReviseMbrPropertyOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RevokeMemberRechargeThirdPayOutcome CpdpClient::RevokeMemberRechargeThirdPay(const RevokeMemberRechargeThirdPayRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeMemberRechargeThirdPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeMemberRechargeThirdPayResponse rsp = RevokeMemberRechargeThirdPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeMemberRechargeThirdPayOutcome(rsp);
        else
            return RevokeMemberRechargeThirdPayOutcome(o.GetError());
    }
    else
    {
        return RevokeMemberRechargeThirdPayOutcome(outcome.GetError());
    }
}

void CpdpClient::RevokeMemberRechargeThirdPayAsync(const RevokeMemberRechargeThirdPayRequest& request, const RevokeMemberRechargeThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeMemberRechargeThirdPayRequest&;
    using Resp = RevokeMemberRechargeThirdPayResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeMemberRechargeThirdPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RevokeMemberRechargeThirdPayOutcomeCallable CpdpClient::RevokeMemberRechargeThirdPayCallable(const RevokeMemberRechargeThirdPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeMemberRechargeThirdPayOutcome>>();
    RevokeMemberRechargeThirdPayAsync(
    request,
    [prom](
        const CpdpClient*,
        const RevokeMemberRechargeThirdPayRequest&,
        RevokeMemberRechargeThirdPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::RevokeRechargeByThirdPayOutcome CpdpClient::RevokeRechargeByThirdPay(const RevokeRechargeByThirdPayRequest &request)
{
    auto outcome = MakeRequest(request, "RevokeRechargeByThirdPay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevokeRechargeByThirdPayResponse rsp = RevokeRechargeByThirdPayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevokeRechargeByThirdPayOutcome(rsp);
        else
            return RevokeRechargeByThirdPayOutcome(o.GetError());
    }
    else
    {
        return RevokeRechargeByThirdPayOutcome(outcome.GetError());
    }
}

void CpdpClient::RevokeRechargeByThirdPayAsync(const RevokeRechargeByThirdPayRequest& request, const RevokeRechargeByThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const RevokeRechargeByThirdPayRequest&;
    using Resp = RevokeRechargeByThirdPayResponse;

    DoRequestAsync<Req, Resp>(
        "RevokeRechargeByThirdPay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::RevokeRechargeByThirdPayOutcomeCallable CpdpClient::RevokeRechargeByThirdPayCallable(const RevokeRechargeByThirdPayRequest &request)
{
    const auto prom = std::make_shared<std::promise<RevokeRechargeByThirdPayOutcome>>();
    RevokeRechargeByThirdPayAsync(
    request,
    [prom](
        const CpdpClient*,
        const RevokeRechargeByThirdPayRequest&,
        RevokeRechargeByThirdPayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::SyncContractDataOutcome CpdpClient::SyncContractData(const SyncContractDataRequest &request)
{
    auto outcome = MakeRequest(request, "SyncContractData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncContractDataResponse rsp = SyncContractDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncContractDataOutcome(rsp);
        else
            return SyncContractDataOutcome(o.GetError());
    }
    else
    {
        return SyncContractDataOutcome(outcome.GetError());
    }
}

void CpdpClient::SyncContractDataAsync(const SyncContractDataRequest& request, const SyncContractDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const SyncContractDataRequest&;
    using Resp = SyncContractDataResponse;

    DoRequestAsync<Req, Resp>(
        "SyncContractData", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::SyncContractDataOutcomeCallable CpdpClient::SyncContractDataCallable(const SyncContractDataRequest &request)
{
    const auto prom = std::make_shared<std::promise<SyncContractDataOutcome>>();
    SyncContractDataAsync(
    request,
    [prom](
        const CpdpClient*,
        const SyncContractDataRequest&,
        SyncContractDataOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::TerminateContractOutcome CpdpClient::TerminateContract(const TerminateContractRequest &request)
{
    auto outcome = MakeRequest(request, "TerminateContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TerminateContractResponse rsp = TerminateContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TerminateContractOutcome(rsp);
        else
            return TerminateContractOutcome(o.GetError());
    }
    else
    {
        return TerminateContractOutcome(outcome.GetError());
    }
}

void CpdpClient::TerminateContractAsync(const TerminateContractRequest& request, const TerminateContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TerminateContractRequest&;
    using Resp = TerminateContractResponse;

    DoRequestAsync<Req, Resp>(
        "TerminateContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::TerminateContractOutcomeCallable CpdpClient::TerminateContractCallable(const TerminateContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<TerminateContractOutcome>>();
    TerminateContractAsync(
    request,
    [prom](
        const CpdpClient*,
        const TerminateContractRequest&,
        TerminateContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::TransferSinglePayOutcome CpdpClient::TransferSinglePay(const TransferSinglePayRequest &request)
{
    auto outcome = MakeRequest(request, "TransferSinglePay");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferSinglePayResponse rsp = TransferSinglePayResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferSinglePayOutcome(rsp);
        else
            return TransferSinglePayOutcome(o.GetError());
    }
    else
    {
        return TransferSinglePayOutcome(outcome.GetError());
    }
}

void CpdpClient::TransferSinglePayAsync(const TransferSinglePayRequest& request, const TransferSinglePayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const TransferSinglePayRequest&;
    using Resp = TransferSinglePayResponse;

    DoRequestAsync<Req, Resp>(
        "TransferSinglePay", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::TransferSinglePayOutcomeCallable CpdpClient::TransferSinglePayCallable(const TransferSinglePayRequest &request)
{
    const auto prom = std::make_shared<std::promise<TransferSinglePayOutcome>>();
    TransferSinglePayAsync(
    request,
    [prom](
        const CpdpClient*,
        const TransferSinglePayRequest&,
        TransferSinglePayOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UnBindAcctOutcome CpdpClient::UnBindAcct(const UnBindAcctRequest &request)
{
    auto outcome = MakeRequest(request, "UnBindAcct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnBindAcctResponse rsp = UnBindAcctResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnBindAcctOutcome(rsp);
        else
            return UnBindAcctOutcome(o.GetError());
    }
    else
    {
        return UnBindAcctOutcome(outcome.GetError());
    }
}

void CpdpClient::UnBindAcctAsync(const UnBindAcctRequest& request, const UnBindAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnBindAcctRequest&;
    using Resp = UnBindAcctResponse;

    DoRequestAsync<Req, Resp>(
        "UnBindAcct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UnBindAcctOutcomeCallable CpdpClient::UnBindAcctCallable(const UnBindAcctRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnBindAcctOutcome>>();
    UnBindAcctAsync(
    request,
    [prom](
        const CpdpClient*,
        const UnBindAcctRequest&,
        UnBindAcctOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UnbindOpenBankExternalSubMerchantBankAccountOutcome CpdpClient::UnbindOpenBankExternalSubMerchantBankAccount(const UnbindOpenBankExternalSubMerchantBankAccountRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindOpenBankExternalSubMerchantBankAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindOpenBankExternalSubMerchantBankAccountResponse rsp = UnbindOpenBankExternalSubMerchantBankAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindOpenBankExternalSubMerchantBankAccountOutcome(rsp);
        else
            return UnbindOpenBankExternalSubMerchantBankAccountOutcome(o.GetError());
    }
    else
    {
        return UnbindOpenBankExternalSubMerchantBankAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::UnbindOpenBankExternalSubMerchantBankAccountAsync(const UnbindOpenBankExternalSubMerchantBankAccountRequest& request, const UnbindOpenBankExternalSubMerchantBankAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindOpenBankExternalSubMerchantBankAccountRequest&;
    using Resp = UnbindOpenBankExternalSubMerchantBankAccountResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindOpenBankExternalSubMerchantBankAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UnbindOpenBankExternalSubMerchantBankAccountOutcomeCallable CpdpClient::UnbindOpenBankExternalSubMerchantBankAccountCallable(const UnbindOpenBankExternalSubMerchantBankAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindOpenBankExternalSubMerchantBankAccountOutcome>>();
    UnbindOpenBankExternalSubMerchantBankAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const UnbindOpenBankExternalSubMerchantBankAccountRequest&,
        UnbindOpenBankExternalSubMerchantBankAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UnbindRelateAcctOutcome CpdpClient::UnbindRelateAcct(const UnbindRelateAcctRequest &request)
{
    auto outcome = MakeRequest(request, "UnbindRelateAcct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnbindRelateAcctResponse rsp = UnbindRelateAcctResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnbindRelateAcctOutcome(rsp);
        else
            return UnbindRelateAcctOutcome(o.GetError());
    }
    else
    {
        return UnbindRelateAcctOutcome(outcome.GetError());
    }
}

void CpdpClient::UnbindRelateAcctAsync(const UnbindRelateAcctRequest& request, const UnbindRelateAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnbindRelateAcctRequest&;
    using Resp = UnbindRelateAcctResponse;

    DoRequestAsync<Req, Resp>(
        "UnbindRelateAcct", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UnbindRelateAcctOutcomeCallable CpdpClient::UnbindRelateAcctCallable(const UnbindRelateAcctRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnbindRelateAcctOutcome>>();
    UnbindRelateAcctAsync(
    request,
    [prom](
        const CpdpClient*,
        const UnbindRelateAcctRequest&,
        UnbindRelateAcctOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UnifiedCloudOrderOutcome CpdpClient::UnifiedCloudOrder(const UnifiedCloudOrderRequest &request)
{
    auto outcome = MakeRequest(request, "UnifiedCloudOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnifiedCloudOrderResponse rsp = UnifiedCloudOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnifiedCloudOrderOutcome(rsp);
        else
            return UnifiedCloudOrderOutcome(o.GetError());
    }
    else
    {
        return UnifiedCloudOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::UnifiedCloudOrderAsync(const UnifiedCloudOrderRequest& request, const UnifiedCloudOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnifiedCloudOrderRequest&;
    using Resp = UnifiedCloudOrderResponse;

    DoRequestAsync<Req, Resp>(
        "UnifiedCloudOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UnifiedCloudOrderOutcomeCallable CpdpClient::UnifiedCloudOrderCallable(const UnifiedCloudOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnifiedCloudOrderOutcome>>();
    UnifiedCloudOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const UnifiedCloudOrderRequest&,
        UnifiedCloudOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UnifiedOrderOutcome CpdpClient::UnifiedOrder(const UnifiedOrderRequest &request)
{
    auto outcome = MakeRequest(request, "UnifiedOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnifiedOrderResponse rsp = UnifiedOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnifiedOrderOutcome(rsp);
        else
            return UnifiedOrderOutcome(o.GetError());
    }
    else
    {
        return UnifiedOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::UnifiedOrderAsync(const UnifiedOrderRequest& request, const UnifiedOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnifiedOrderRequest&;
    using Resp = UnifiedOrderResponse;

    DoRequestAsync<Req, Resp>(
        "UnifiedOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UnifiedOrderOutcomeCallable CpdpClient::UnifiedOrderCallable(const UnifiedOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnifiedOrderOutcome>>();
    UnifiedOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const UnifiedOrderRequest&,
        UnifiedOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UnifiedTlinxOrderOutcome CpdpClient::UnifiedTlinxOrder(const UnifiedTlinxOrderRequest &request)
{
    auto outcome = MakeRequest(request, "UnifiedTlinxOrder");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UnifiedTlinxOrderResponse rsp = UnifiedTlinxOrderResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UnifiedTlinxOrderOutcome(rsp);
        else
            return UnifiedTlinxOrderOutcome(o.GetError());
    }
    else
    {
        return UnifiedTlinxOrderOutcome(outcome.GetError());
    }
}

void CpdpClient::UnifiedTlinxOrderAsync(const UnifiedTlinxOrderRequest& request, const UnifiedTlinxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UnifiedTlinxOrderRequest&;
    using Resp = UnifiedTlinxOrderResponse;

    DoRequestAsync<Req, Resp>(
        "UnifiedTlinxOrder", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UnifiedTlinxOrderOutcomeCallable CpdpClient::UnifiedTlinxOrderCallable(const UnifiedTlinxOrderRequest &request)
{
    const auto prom = std::make_shared<std::promise<UnifiedTlinxOrderOutcome>>();
    UnifiedTlinxOrderAsync(
    request,
    [prom](
        const CpdpClient*,
        const UnifiedTlinxOrderRequest&,
        UnifiedTlinxOrderOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UploadExternalAnchorInfoOutcome CpdpClient::UploadExternalAnchorInfo(const UploadExternalAnchorInfoRequest &request)
{
    auto outcome = MakeRequest(request, "UploadExternalAnchorInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadExternalAnchorInfoResponse rsp = UploadExternalAnchorInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadExternalAnchorInfoOutcome(rsp);
        else
            return UploadExternalAnchorInfoOutcome(o.GetError());
    }
    else
    {
        return UploadExternalAnchorInfoOutcome(outcome.GetError());
    }
}

void CpdpClient::UploadExternalAnchorInfoAsync(const UploadExternalAnchorInfoRequest& request, const UploadExternalAnchorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadExternalAnchorInfoRequest&;
    using Resp = UploadExternalAnchorInfoResponse;

    DoRequestAsync<Req, Resp>(
        "UploadExternalAnchorInfo", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UploadExternalAnchorInfoOutcomeCallable CpdpClient::UploadExternalAnchorInfoCallable(const UploadExternalAnchorInfoRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadExternalAnchorInfoOutcome>>();
    UploadExternalAnchorInfoAsync(
    request,
    [prom](
        const CpdpClient*,
        const UploadExternalAnchorInfoRequest&,
        UploadExternalAnchorInfoOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UploadFileOutcome CpdpClient::UploadFile(const UploadFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadFileResponse rsp = UploadFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadFileOutcome(rsp);
        else
            return UploadFileOutcome(o.GetError());
    }
    else
    {
        return UploadFileOutcome(outcome.GetError());
    }
}

void CpdpClient::UploadFileAsync(const UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadFileRequest&;
    using Resp = UploadFileResponse;

    DoRequestAsync<Req, Resp>(
        "UploadFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UploadFileOutcomeCallable CpdpClient::UploadFileCallable(const UploadFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadFileOutcome>>();
    UploadFileAsync(
    request,
    [prom](
        const CpdpClient*,
        const UploadFileRequest&,
        UploadFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UploadOpenBankSubMerchantCredentialOutcome CpdpClient::UploadOpenBankSubMerchantCredential(const UploadOpenBankSubMerchantCredentialRequest &request)
{
    auto outcome = MakeRequest(request, "UploadOpenBankSubMerchantCredential");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadOpenBankSubMerchantCredentialResponse rsp = UploadOpenBankSubMerchantCredentialResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadOpenBankSubMerchantCredentialOutcome(rsp);
        else
            return UploadOpenBankSubMerchantCredentialOutcome(o.GetError());
    }
    else
    {
        return UploadOpenBankSubMerchantCredentialOutcome(outcome.GetError());
    }
}

void CpdpClient::UploadOpenBankSubMerchantCredentialAsync(const UploadOpenBankSubMerchantCredentialRequest& request, const UploadOpenBankSubMerchantCredentialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadOpenBankSubMerchantCredentialRequest&;
    using Resp = UploadOpenBankSubMerchantCredentialResponse;

    DoRequestAsync<Req, Resp>(
        "UploadOpenBankSubMerchantCredential", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UploadOpenBankSubMerchantCredentialOutcomeCallable CpdpClient::UploadOpenBankSubMerchantCredentialCallable(const UploadOpenBankSubMerchantCredentialRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadOpenBankSubMerchantCredentialOutcome>>();
    UploadOpenBankSubMerchantCredentialAsync(
    request,
    [prom](
        const CpdpClient*,
        const UploadOpenBankSubMerchantCredentialRequest&,
        UploadOpenBankSubMerchantCredentialOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UploadOrgFileOutcome CpdpClient::UploadOrgFile(const UploadOrgFileRequest &request)
{
    auto outcome = MakeRequest(request, "UploadOrgFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadOrgFileResponse rsp = UploadOrgFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadOrgFileOutcome(rsp);
        else
            return UploadOrgFileOutcome(o.GetError());
    }
    else
    {
        return UploadOrgFileOutcome(outcome.GetError());
    }
}

void CpdpClient::UploadOrgFileAsync(const UploadOrgFileRequest& request, const UploadOrgFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadOrgFileRequest&;
    using Resp = UploadOrgFileResponse;

    DoRequestAsync<Req, Resp>(
        "UploadOrgFile", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UploadOrgFileOutcomeCallable CpdpClient::UploadOrgFileCallable(const UploadOrgFileRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadOrgFileOutcome>>();
    UploadOrgFileAsync(
    request,
    [prom](
        const CpdpClient*,
        const UploadOrgFileRequest&,
        UploadOrgFileOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UploadTaxListOutcome CpdpClient::UploadTaxList(const UploadTaxListRequest &request)
{
    auto outcome = MakeRequest(request, "UploadTaxList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadTaxListResponse rsp = UploadTaxListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadTaxListOutcome(rsp);
        else
            return UploadTaxListOutcome(o.GetError());
    }
    else
    {
        return UploadTaxListOutcome(outcome.GetError());
    }
}

void CpdpClient::UploadTaxListAsync(const UploadTaxListRequest& request, const UploadTaxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadTaxListRequest&;
    using Resp = UploadTaxListResponse;

    DoRequestAsync<Req, Resp>(
        "UploadTaxList", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UploadTaxListOutcomeCallable CpdpClient::UploadTaxListCallable(const UploadTaxListRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadTaxListOutcome>>();
    UploadTaxListAsync(
    request,
    [prom](
        const CpdpClient*,
        const UploadTaxListRequest&,
        UploadTaxListOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::UploadTaxPaymentOutcome CpdpClient::UploadTaxPayment(const UploadTaxPaymentRequest &request)
{
    auto outcome = MakeRequest(request, "UploadTaxPayment");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadTaxPaymentResponse rsp = UploadTaxPaymentResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadTaxPaymentOutcome(rsp);
        else
            return UploadTaxPaymentOutcome(o.GetError());
    }
    else
    {
        return UploadTaxPaymentOutcome(outcome.GetError());
    }
}

void CpdpClient::UploadTaxPaymentAsync(const UploadTaxPaymentRequest& request, const UploadTaxPaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const UploadTaxPaymentRequest&;
    using Resp = UploadTaxPaymentResponse;

    DoRequestAsync<Req, Resp>(
        "UploadTaxPayment", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::UploadTaxPaymentOutcomeCallable CpdpClient::UploadTaxPaymentCallable(const UploadTaxPaymentRequest &request)
{
    const auto prom = std::make_shared<std::promise<UploadTaxPaymentOutcome>>();
    UploadTaxPaymentAsync(
    request,
    [prom](
        const CpdpClient*,
        const UploadTaxPaymentRequest&,
        UploadTaxPaymentOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::VerifyOpenBankAccountOutcome CpdpClient::VerifyOpenBankAccount(const VerifyOpenBankAccountRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyOpenBankAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyOpenBankAccountResponse rsp = VerifyOpenBankAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyOpenBankAccountOutcome(rsp);
        else
            return VerifyOpenBankAccountOutcome(o.GetError());
    }
    else
    {
        return VerifyOpenBankAccountOutcome(outcome.GetError());
    }
}

void CpdpClient::VerifyOpenBankAccountAsync(const VerifyOpenBankAccountRequest& request, const VerifyOpenBankAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const VerifyOpenBankAccountRequest&;
    using Resp = VerifyOpenBankAccountResponse;

    DoRequestAsync<Req, Resp>(
        "VerifyOpenBankAccount", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::VerifyOpenBankAccountOutcomeCallable CpdpClient::VerifyOpenBankAccountCallable(const VerifyOpenBankAccountRequest &request)
{
    const auto prom = std::make_shared<std::promise<VerifyOpenBankAccountOutcome>>();
    VerifyOpenBankAccountAsync(
    request,
    [prom](
        const CpdpClient*,
        const VerifyOpenBankAccountRequest&,
        VerifyOpenBankAccountOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ViewContractOutcome CpdpClient::ViewContract(const ViewContractRequest &request)
{
    auto outcome = MakeRequest(request, "ViewContract");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ViewContractResponse rsp = ViewContractResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ViewContractOutcome(rsp);
        else
            return ViewContractOutcome(o.GetError());
    }
    else
    {
        return ViewContractOutcome(outcome.GetError());
    }
}

void CpdpClient::ViewContractAsync(const ViewContractRequest& request, const ViewContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ViewContractRequest&;
    using Resp = ViewContractResponse;

    DoRequestAsync<Req, Resp>(
        "ViewContract", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ViewContractOutcomeCallable CpdpClient::ViewContractCallable(const ViewContractRequest &request)
{
    const auto prom = std::make_shared<std::promise<ViewContractOutcome>>();
    ViewContractAsync(
    request,
    [prom](
        const CpdpClient*,
        const ViewContractRequest&,
        ViewContractOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ViewMerchantOutcome CpdpClient::ViewMerchant(const ViewMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "ViewMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ViewMerchantResponse rsp = ViewMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ViewMerchantOutcome(rsp);
        else
            return ViewMerchantOutcome(o.GetError());
    }
    else
    {
        return ViewMerchantOutcome(outcome.GetError());
    }
}

void CpdpClient::ViewMerchantAsync(const ViewMerchantRequest& request, const ViewMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ViewMerchantRequest&;
    using Resp = ViewMerchantResponse;

    DoRequestAsync<Req, Resp>(
        "ViewMerchant", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ViewMerchantOutcomeCallable CpdpClient::ViewMerchantCallable(const ViewMerchantRequest &request)
{
    const auto prom = std::make_shared<std::promise<ViewMerchantOutcome>>();
    ViewMerchantAsync(
    request,
    [prom](
        const CpdpClient*,
        const ViewMerchantRequest&,
        ViewMerchantOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::ViewShopOutcome CpdpClient::ViewShop(const ViewShopRequest &request)
{
    auto outcome = MakeRequest(request, "ViewShop");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ViewShopResponse rsp = ViewShopResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ViewShopOutcome(rsp);
        else
            return ViewShopOutcome(o.GetError());
    }
    else
    {
        return ViewShopOutcome(outcome.GetError());
    }
}

void CpdpClient::ViewShopAsync(const ViewShopRequest& request, const ViewShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const ViewShopRequest&;
    using Resp = ViewShopResponse;

    DoRequestAsync<Req, Resp>(
        "ViewShop", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::ViewShopOutcomeCallable CpdpClient::ViewShopCallable(const ViewShopRequest &request)
{
    const auto prom = std::make_shared<std::promise<ViewShopOutcome>>();
    ViewShopAsync(
    request,
    [prom](
        const CpdpClient*,
        const ViewShopRequest&,
        ViewShopOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

CpdpClient::WithdrawCashMembershipOutcome CpdpClient::WithdrawCashMembership(const WithdrawCashMembershipRequest &request)
{
    auto outcome = MakeRequest(request, "WithdrawCashMembership");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        WithdrawCashMembershipResponse rsp = WithdrawCashMembershipResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return WithdrawCashMembershipOutcome(rsp);
        else
            return WithdrawCashMembershipOutcome(o.GetError());
    }
    else
    {
        return WithdrawCashMembershipOutcome(outcome.GetError());
    }
}

void CpdpClient::WithdrawCashMembershipAsync(const WithdrawCashMembershipRequest& request, const WithdrawCashMembershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    using Req = const WithdrawCashMembershipRequest&;
    using Resp = WithdrawCashMembershipResponse;

    DoRequestAsync<Req, Resp>(
        "WithdrawCashMembership", request, {{{"Content-Type", "application/json"}}},
        [this, context, handler](Req req, Outcome<Core::Error, Resp> resp)
        {
            handler(this, req, std::move(resp), context);
        });
}

CpdpClient::WithdrawCashMembershipOutcomeCallable CpdpClient::WithdrawCashMembershipCallable(const WithdrawCashMembershipRequest &request)
{
    const auto prom = std::make_shared<std::promise<WithdrawCashMembershipOutcome>>();
    WithdrawCashMembershipAsync(
    request,
    [prom](
        const CpdpClient*,
        const WithdrawCashMembershipRequest&,
        WithdrawCashMembershipOutcome resp,
        const std::shared_ptr<const AsyncCallerContext>&
    )
    {
        prom->set_value(resp);
    });
    return prom->get_future();
}

