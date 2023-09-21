/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::AddContractOutcomeCallable CpdpClient::AddContractCallable(const AddContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddContractOutcome()>>(
        [this, request]()
        {
            return this->AddContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddFlexFundingAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::AddFlexFundingAccountOutcomeCallable CpdpClient::AddFlexFundingAccountCallable(const AddFlexFundingAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddFlexFundingAccountOutcome()>>(
        [this, request]()
        {
            return this->AddFlexFundingAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddFlexIdInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::AddFlexIdInfoOutcomeCallable CpdpClient::AddFlexIdInfoCallable(const AddFlexIdInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddFlexIdInfoOutcome()>>(
        [this, request]()
        {
            return this->AddFlexIdInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddFlexPhoneNo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::AddFlexPhoneNoOutcomeCallable CpdpClient::AddFlexPhoneNoCallable(const AddFlexPhoneNoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddFlexPhoneNoOutcome()>>(
        [this, request]()
        {
            return this->AddFlexPhoneNo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::AddMerchantOutcomeCallable CpdpClient::AddMerchantCallable(const AddMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddMerchantOutcome()>>(
        [this, request]()
        {
            return this->AddMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddShop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::AddShopOutcomeCallable CpdpClient::AddShopCallable(const AddShopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddShopOutcome()>>(
        [this, request]()
        {
            return this->AddShop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyApplicationMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyApplicationMaterialOutcomeCallable CpdpClient::ApplyApplicationMaterialCallable(const ApplyApplicationMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyApplicationMaterialOutcome()>>(
        [this, request]()
        {
            return this->ApplyApplicationMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyFlexPayment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyFlexPaymentOutcomeCallable CpdpClient::ApplyFlexPaymentCallable(const ApplyFlexPaymentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyFlexPaymentOutcome()>>(
        [this, request]()
        {
            return this->ApplyFlexPayment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyFlexSettlement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyFlexSettlementOutcomeCallable CpdpClient::ApplyFlexSettlementCallable(const ApplyFlexSettlementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyFlexSettlementOutcome()>>(
        [this, request]()
        {
            return this->ApplyFlexSettlement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyFlexWechatPreAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyFlexWechatPreAuthOutcomeCallable CpdpClient::ApplyFlexWechatPreAuthCallable(const ApplyFlexWechatPreAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyFlexWechatPreAuthOutcome()>>(
        [this, request]()
        {
            return this->ApplyFlexWechatPreAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyOpenBankOrderDetailReceipt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyOpenBankOrderDetailReceiptOutcomeCallable CpdpClient::ApplyOpenBankOrderDetailReceiptCallable(const ApplyOpenBankOrderDetailReceiptRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyOpenBankOrderDetailReceiptOutcome()>>(
        [this, request]()
        {
            return this->ApplyOpenBankOrderDetailReceipt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyOpenBankSettleOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyOpenBankSettleOrderOutcomeCallable CpdpClient::ApplyOpenBankSettleOrderCallable(const ApplyOpenBankSettleOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyOpenBankSettleOrderOutcome()>>(
        [this, request]()
        {
            return this->ApplyOpenBankSettleOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyOpenBankSubMerchantSignOnline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyOpenBankSubMerchantSignOnlineOutcomeCallable CpdpClient::ApplyOpenBankSubMerchantSignOnlineCallable(const ApplyOpenBankSubMerchantSignOnlineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyOpenBankSubMerchantSignOnlineOutcome()>>(
        [this, request]()
        {
            return this->ApplyOpenBankSubMerchantSignOnline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyOutwardOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyOutwardOrderOutcomeCallable CpdpClient::ApplyOutwardOrderCallable(const ApplyOutwardOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyOutwardOrderOutcome()>>(
        [this, request]()
        {
            return this->ApplyOutwardOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyPayerInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyPayerInfoOutcomeCallable CpdpClient::ApplyPayerInfoCallable(const ApplyPayerInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyPayerInfoOutcome()>>(
        [this, request]()
        {
            return this->ApplyPayerInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyReWithdrawal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyReWithdrawalOutcomeCallable CpdpClient::ApplyReWithdrawalCallable(const ApplyReWithdrawalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyReWithdrawalOutcome()>>(
        [this, request]()
        {
            return this->ApplyReWithdrawal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyReconciliationFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyReconciliationFileOutcomeCallable CpdpClient::ApplyReconciliationFileCallable(const ApplyReconciliationFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyReconciliationFileOutcome()>>(
        [this, request]()
        {
            return this->ApplyReconciliationFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyTrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyTradeOutcomeCallable CpdpClient::ApplyTradeCallable(const ApplyTradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyTradeOutcome()>>(
        [this, request]()
        {
            return this->ApplyTrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ApplyWithdrawal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ApplyWithdrawalOutcomeCallable CpdpClient::ApplyWithdrawalCallable(const ApplyWithdrawalRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ApplyWithdrawalOutcome()>>(
        [this, request]()
        {
            return this->ApplyWithdrawal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindAccountOutcomeCallable CpdpClient::BindAccountCallable(const BindAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAccountOutcome()>>(
        [this, request]()
        {
            return this->BindAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindAcct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindAcctOutcomeCallable CpdpClient::BindAcctCallable(const BindAcctRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindAcctOutcome()>>(
        [this, request]()
        {
            return this->BindAcct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindOpenBankExternalSubMerchantBankAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindOpenBankExternalSubMerchantBankAccountOutcomeCallable CpdpClient::BindOpenBankExternalSubMerchantBankAccountCallable(const BindOpenBankExternalSubMerchantBankAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindOpenBankExternalSubMerchantBankAccountOutcome()>>(
        [this, request]()
        {
            return this->BindOpenBankExternalSubMerchantBankAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindOpenBankProfitSharePayee(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindOpenBankProfitSharePayeeOutcomeCallable CpdpClient::BindOpenBankProfitSharePayeeCallable(const BindOpenBankProfitSharePayeeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindOpenBankProfitSharePayeeOutcome()>>(
        [this, request]()
        {
            return this->BindOpenBankProfitSharePayee(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindRelateAccReUnionPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindRelateAccReUnionPayOutcomeCallable CpdpClient::BindRelateAccReUnionPayCallable(const BindRelateAccReUnionPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindRelateAccReUnionPayOutcome()>>(
        [this, request]()
        {
            return this->BindRelateAccReUnionPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindRelateAcctSmallAmount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindRelateAcctSmallAmountOutcomeCallable CpdpClient::BindRelateAcctSmallAmountCallable(const BindRelateAcctSmallAmountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindRelateAcctSmallAmountOutcome()>>(
        [this, request]()
        {
            return this->BindRelateAcctSmallAmount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindRelateAcctUnionPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::BindRelateAcctUnionPayOutcomeCallable CpdpClient::BindRelateAcctUnionPayCallable(const BindRelateAcctUnionPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindRelateAcctUnionPayOutcome()>>(
        [this, request]()
        {
            return this->BindRelateAcctUnionPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAcct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CheckAcctOutcomeCallable CpdpClient::CheckAcctCallable(const CheckAcctRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAcctOutcome()>>(
        [this, request]()
        {
            return this->CheckAcct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckAmount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CheckAmountOutcomeCallable CpdpClient::CheckAmountCallable(const CheckAmountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckAmountOutcome()>>(
        [this, request]()
        {
            return this->CheckAmount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseCloudOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CloseCloudOrderOutcomeCallable CpdpClient::CloseCloudOrderCallable(const CloseCloudOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseCloudOrderOutcome()>>(
        [this, request]()
        {
            return this->CloseCloudOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseOpenBankPaymentOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CloseOpenBankPaymentOrderOutcomeCallable CpdpClient::CloseOpenBankPaymentOrderCallable(const CloseOpenBankPaymentOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseOpenBankPaymentOrderOutcome()>>(
        [this, request]()
        {
            return this->CloseOpenBankPaymentOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CloseOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CloseOrderOutcomeCallable CpdpClient::CloseOrderCallable(const CloseOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CloseOrderOutcome()>>(
        [this, request]()
        {
            return this->CloseOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ConfirmOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ConfirmOrderOutcomeCallable CpdpClient::ConfirmOrderCallable(const ConfirmOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ConfirmOrderOutcome()>>(
        [this, request]()
        {
            return this->ConfirmOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ContractOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ContractOrderOutcomeCallable CpdpClient::ContractOrderCallable(const ContractOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ContractOrderOutcome()>>(
        [this, request]()
        {
            return this->ContractOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAcct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateAcctOutcomeCallable CpdpClient::CreateAcctCallable(const CreateAcctRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAcctOutcome()>>(
        [this, request]()
        {
            return this->CreateAcct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAgentTaxPaymentInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateAgentTaxPaymentInfosOutcomeCallable CpdpClient::CreateAgentTaxPaymentInfosCallable(const CreateAgentTaxPaymentInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAgentTaxPaymentInfosOutcome()>>(
        [this, request]()
        {
            return this->CreateAgentTaxPaymentInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAnchor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateAnchorOutcomeCallable CpdpClient::CreateAnchorCallable(const CreateAnchorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAnchorOutcome()>>(
        [this, request]()
        {
            return this->CreateAnchor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBatchPayment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateBatchPaymentOutcomeCallable CpdpClient::CreateBatchPaymentCallable(const CreateBatchPaymentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBatchPaymentOutcome()>>(
        [this, request]()
        {
            return this->CreateBatchPayment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCloudSubMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateCloudSubMerchantOutcomeCallable CpdpClient::CreateCloudSubMerchantCallable(const CreateCloudSubMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCloudSubMerchantOutcome()>>(
        [this, request]()
        {
            return this->CreateCloudSubMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustAcctId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateCustAcctIdOutcomeCallable CpdpClient::CreateCustAcctIdCallable(const CreateCustAcctIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustAcctIdOutcome()>>(
        [this, request]()
        {
            return this->CreateCustAcctId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateExternalAnchor(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateExternalAnchorOutcomeCallable CpdpClient::CreateExternalAnchorCallable(const CreateExternalAnchorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateExternalAnchorOutcome()>>(
        [this, request]()
        {
            return this->CreateExternalAnchor(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateFlexPayee(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateFlexPayeeOutcomeCallable CpdpClient::CreateFlexPayeeCallable(const CreateFlexPayeeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateFlexPayeeOutcome()>>(
        [this, request]()
        {
            return this->CreateFlexPayee(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInvoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateInvoiceOutcomeCallable CpdpClient::CreateInvoiceCallable(const CreateInvoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInvoiceOutcome()>>(
        [this, request]()
        {
            return this->CreateInvoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateInvoiceV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateInvoiceV2OutcomeCallable CpdpClient::CreateInvoiceV2Callable(const CreateInvoiceV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<CreateInvoiceV2Outcome()>>(
        [this, request]()
        {
            return this->CreateInvoiceV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateMerchantOutcomeCallable CpdpClient::CreateMerchantCallable(const CreateMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMerchantOutcome()>>(
        [this, request]()
        {
            return this->CreateMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankAggregatedSubMerchantRegistration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankAggregatedSubMerchantRegistrationOutcomeCallable CpdpClient::CreateOpenBankAggregatedSubMerchantRegistrationCallable(const CreateOpenBankAggregatedSubMerchantRegistrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankAggregatedSubMerchantRegistrationOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankAggregatedSubMerchantRegistration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankExternalSubMerchantAccountBook(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankExternalSubMerchantAccountBookOutcomeCallable CpdpClient::CreateOpenBankExternalSubMerchantAccountBookCallable(const CreateOpenBankExternalSubMerchantAccountBookRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankExternalSubMerchantAccountBookOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankExternalSubMerchantAccountBook(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankExternalSubMerchantRegistration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankExternalSubMerchantRegistrationOutcomeCallable CpdpClient::CreateOpenBankExternalSubMerchantRegistrationCallable(const CreateOpenBankExternalSubMerchantRegistrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankExternalSubMerchantRegistrationOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankExternalSubMerchantRegistration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankGlobalPaymentOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankGlobalPaymentOrderOutcomeCallable CpdpClient::CreateOpenBankGlobalPaymentOrderCallable(const CreateOpenBankGlobalPaymentOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankGlobalPaymentOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankGlobalPaymentOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankMerchantOutcomeCallable CpdpClient::CreateOpenBankMerchantCallable(const CreateOpenBankMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankMerchantOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankPaymentOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankPaymentOrderOutcomeCallable CpdpClient::CreateOpenBankPaymentOrderCallable(const CreateOpenBankPaymentOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankPaymentOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankPaymentOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankRechargeOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankRechargeOrderOutcomeCallable CpdpClient::CreateOpenBankRechargeOrderCallable(const CreateOpenBankRechargeOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankRechargeOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankRechargeOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankSubMerchantRateConfigure(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankSubMerchantRateConfigureOutcomeCallable CpdpClient::CreateOpenBankSubMerchantRateConfigureCallable(const CreateOpenBankSubMerchantRateConfigureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankSubMerchantRateConfigureOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankSubMerchantRateConfigure(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankUnifiedOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankUnifiedOrderOutcomeCallable CpdpClient::CreateOpenBankUnifiedOrderCallable(const CreateOpenBankUnifiedOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankUnifiedOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankUnifiedOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOpenBankVerificationOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOpenBankVerificationOrderOutcomeCallable CpdpClient::CreateOpenBankVerificationOrderCallable(const CreateOpenBankVerificationOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOpenBankVerificationOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateOpenBankVerificationOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateOrderOutcomeCallable CpdpClient::CreateOrderCallable(const CreateOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateOrderOutcome()>>(
        [this, request]()
        {
            return this->CreateOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePayMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreatePayMerchantOutcomeCallable CpdpClient::CreatePayMerchantCallable(const CreatePayMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePayMerchantOutcome()>>(
        [this, request]()
        {
            return this->CreatePayMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePayRollPreOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreatePayRollPreOrderOutcomeCallable CpdpClient::CreatePayRollPreOrderCallable(const CreatePayRollPreOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePayRollPreOrderOutcome()>>(
        [this, request]()
        {
            return this->CreatePayRollPreOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePayRollPreOrderWithAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreatePayRollPreOrderWithAuthOutcomeCallable CpdpClient::CreatePayRollPreOrderWithAuthCallable(const CreatePayRollPreOrderWithAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePayRollPreOrderWithAuthOutcome()>>(
        [this, request]()
        {
            return this->CreatePayRollPreOrderWithAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePayRollToken(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreatePayRollTokenOutcomeCallable CpdpClient::CreatePayRollTokenCallable(const CreatePayRollTokenRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePayRollTokenOutcome()>>(
        [this, request]()
        {
            return this->CreatePayRollToken(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRedInvoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateRedInvoiceOutcomeCallable CpdpClient::CreateRedInvoiceCallable(const CreateRedInvoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRedInvoiceOutcome()>>(
        [this, request]()
        {
            return this->CreateRedInvoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRedInvoiceV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateRedInvoiceV2OutcomeCallable CpdpClient::CreateRedInvoiceV2Callable(const CreateRedInvoiceV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRedInvoiceV2Outcome()>>(
        [this, request]()
        {
            return this->CreateRedInvoiceV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSinglePayment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateSinglePaymentOutcomeCallable CpdpClient::CreateSinglePaymentCallable(const CreateSinglePaymentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSinglePaymentOutcome()>>(
        [this, request]()
        {
            return this->CreateSinglePayment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTransferBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::CreateTransferBatchOutcomeCallable CpdpClient::CreateTransferBatchCallable(const CreateTransferBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTransferBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateTransferBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeduceQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DeduceQuotaOutcomeCallable CpdpClient::DeduceQuotaCallable(const DeduceQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeduceQuotaOutcome()>>(
        [this, request]()
        {
            return this->DeduceQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAgentTaxPaymentInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DeleteAgentTaxPaymentInfoOutcomeCallable CpdpClient::DeleteAgentTaxPaymentInfoCallable(const DeleteAgentTaxPaymentInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAgentTaxPaymentInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteAgentTaxPaymentInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAgentTaxPaymentInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DeleteAgentTaxPaymentInfosOutcomeCallable CpdpClient::DeleteAgentTaxPaymentInfosCallable(const DeleteAgentTaxPaymentInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAgentTaxPaymentInfosOutcome()>>(
        [this, request]()
        {
            return this->DeleteAgentTaxPaymentInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeChargeDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DescribeChargeDetailOutcomeCallable CpdpClient::DescribeChargeDetailCallable(const DescribeChargeDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeChargeDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeChargeDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOrderStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DescribeOrderStatusOutcomeCallable CpdpClient::DescribeOrderStatusCallable(const DescribeOrderStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOrderStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeOrderStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeAccreditQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeAccreditQueryOutcomeCallable CpdpClient::DistributeAccreditQueryCallable(const DistributeAccreditQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeAccreditQueryOutcome()>>(
        [this, request]()
        {
            return this->DistributeAccreditQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeAccreditTlinx(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeAccreditTlinxOutcomeCallable CpdpClient::DistributeAccreditTlinxCallable(const DistributeAccreditTlinxRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeAccreditTlinxOutcome()>>(
        [this, request]()
        {
            return this->DistributeAccreditTlinx(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeAddReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeAddReceiverOutcomeCallable CpdpClient::DistributeAddReceiverCallable(const DistributeAddReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeAddReceiverOutcome()>>(
        [this, request]()
        {
            return this->DistributeAddReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeApply(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeApplyOutcomeCallable CpdpClient::DistributeApplyCallable(const DistributeApplyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeApplyOutcome()>>(
        [this, request]()
        {
            return this->DistributeApply(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeCancel(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeCancelOutcomeCallable CpdpClient::DistributeCancelCallable(const DistributeCancelRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeCancelOutcome()>>(
        [this, request]()
        {
            return this->DistributeCancel(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeQueryOutcomeCallable CpdpClient::DistributeQueryCallable(const DistributeQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeQueryOutcome()>>(
        [this, request]()
        {
            return this->DistributeQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeQueryReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeQueryReceiverOutcomeCallable CpdpClient::DistributeQueryReceiverCallable(const DistributeQueryReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeQueryReceiverOutcome()>>(
        [this, request]()
        {
            return this->DistributeQueryReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DistributeRemoveReceiver(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DistributeRemoveReceiverOutcomeCallable CpdpClient::DistributeRemoveReceiverCallable(const DistributeRemoveReceiverRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DistributeRemoveReceiverOutcome()>>(
        [this, request]()
        {
            return this->DistributeRemoveReceiver(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadBill(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DownloadBillOutcomeCallable CpdpClient::DownloadBillCallable(const DownloadBillRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadBillOutcome()>>(
        [this, request]()
        {
            return this->DownloadBill(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadOrgFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DownloadOrgFileOutcomeCallable CpdpClient::DownloadOrgFileCallable(const DownloadOrgFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadOrgFileOutcome()>>(
        [this, request]()
        {
            return this->DownloadOrgFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadReconciliationUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::DownloadReconciliationUrlOutcomeCallable CpdpClient::DownloadReconciliationUrlCallable(const DownloadReconciliationUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadReconciliationUrlOutcome()>>(
        [this, request]()
        {
            return this->DownloadReconciliationUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ExecuteMemberTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ExecuteMemberTransactionOutcomeCallable CpdpClient::ExecuteMemberTransactionCallable(const ExecuteMemberTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ExecuteMemberTransactionOutcome()>>(
        [this, request]()
        {
            return this->ExecuteMemberTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->FreezeFlexBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::FreezeFlexBalanceOutcomeCallable CpdpClient::FreezeFlexBalanceCallable(const FreezeFlexBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<FreezeFlexBalanceOutcome()>>(
        [this, request]()
        {
            return this->FreezeFlexBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetBillDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::GetBillDownloadUrlOutcomeCallable CpdpClient::GetBillDownloadUrlCallable(const GetBillDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetBillDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->GetBillDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDistributeBillDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::GetDistributeBillDownloadUrlOutcomeCallable CpdpClient::GetDistributeBillDownloadUrlCallable(const GetDistributeBillDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDistributeBillDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->GetDistributeBillDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPayRollAuth(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::GetPayRollAuthOutcomeCallable CpdpClient::GetPayRollAuthCallable(const GetPayRollAuthRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPayRollAuthOutcome()>>(
        [this, request]()
        {
            return this->GetPayRollAuth(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPayRollAuthList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::GetPayRollAuthListOutcomeCallable CpdpClient::GetPayRollAuthListCallable(const GetPayRollAuthListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPayRollAuthListOutcome()>>(
        [this, request]()
        {
            return this->GetPayRollAuthList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetPayRollAuthResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::GetPayRollAuthResultOutcomeCallable CpdpClient::GetPayRollAuthResultCallable(const GetPayRollAuthResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetPayRollAuthResultOutcome()>>(
        [this, request]()
        {
            return this->GetPayRollAuthResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigrateOrderRefund(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::MigrateOrderRefundOutcomeCallable CpdpClient::MigrateOrderRefundCallable(const MigrateOrderRefundRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigrateOrderRefundOutcome()>>(
        [this, request]()
        {
            return this->MigrateOrderRefund(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->MigrateOrderRefundQuery(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::MigrateOrderRefundQueryOutcomeCallable CpdpClient::MigrateOrderRefundQueryCallable(const MigrateOrderRefundQueryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<MigrateOrderRefundQueryOutcome()>>(
        [this, request]()
        {
            return this->MigrateOrderRefundQuery(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAgentTaxPaymentInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ModifyAgentTaxPaymentInfoOutcomeCallable CpdpClient::ModifyAgentTaxPaymentInfoCallable(const ModifyAgentTaxPaymentInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAgentTaxPaymentInfoOutcome()>>(
        [this, request]()
        {
            return this->ModifyAgentTaxPaymentInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyBindedAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ModifyBindedAccountOutcomeCallable CpdpClient::ModifyBindedAccountCallable(const ModifyBindedAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyBindedAccountOutcome()>>(
        [this, request]()
        {
            return this->ModifyBindedAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFlexFundingAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ModifyFlexFundingAccountOutcomeCallable CpdpClient::ModifyFlexFundingAccountCallable(const ModifyFlexFundingAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFlexFundingAccountOutcome()>>(
        [this, request]()
        {
            return this->ModifyFlexFundingAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyFlexPayeeAccountRightStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ModifyFlexPayeeAccountRightStatusOutcomeCallable CpdpClient::ModifyFlexPayeeAccountRightStatusCallable(const ModifyFlexPayeeAccountRightStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyFlexPayeeAccountRightStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyFlexPayeeAccountRightStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ModifyMerchantOutcomeCallable CpdpClient::ModifyMerchantCallable(const ModifyMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMerchantOutcome()>>(
        [this, request]()
        {
            return this->ModifyMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMntMbrBindRelateAcctBankCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ModifyMntMbrBindRelateAcctBankCodeOutcomeCallable CpdpClient::ModifyMntMbrBindRelateAcctBankCodeCallable(const ModifyMntMbrBindRelateAcctBankCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMntMbrBindRelateAcctBankCodeOutcome()>>(
        [this, request]()
        {
            return this->ModifyMntMbrBindRelateAcctBankCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAcctBinding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAcctBindingOutcomeCallable CpdpClient::QueryAcctBindingCallable(const QueryAcctBindingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAcctBindingOutcome()>>(
        [this, request]()
        {
            return this->QueryAcctBinding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAcctInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAcctInfoOutcomeCallable CpdpClient::QueryAcctInfoCallable(const QueryAcctInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAcctInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryAcctInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAcctInfoList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAcctInfoListOutcomeCallable CpdpClient::QueryAcctInfoListCallable(const QueryAcctInfoListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAcctInfoListOutcome()>>(
        [this, request]()
        {
            return this->QueryAcctInfoList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAgentStatements(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAgentStatementsOutcomeCallable CpdpClient::QueryAgentStatementsCallable(const QueryAgentStatementsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAgentStatementsOutcome()>>(
        [this, request]()
        {
            return this->QueryAgentStatements(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAgentTaxPaymentBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAgentTaxPaymentBatchOutcomeCallable CpdpClient::QueryAgentTaxPaymentBatchCallable(const QueryAgentTaxPaymentBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAgentTaxPaymentBatchOutcome()>>(
        [this, request]()
        {
            return this->QueryAgentTaxPaymentBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAnchorContractInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAnchorContractInfoOutcomeCallable CpdpClient::QueryAnchorContractInfoCallable(const QueryAnchorContractInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAnchorContractInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryAnchorContractInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryApplicationMaterial(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryApplicationMaterialOutcomeCallable CpdpClient::QueryApplicationMaterialCallable(const QueryApplicationMaterialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryApplicationMaterialOutcome()>>(
        [this, request]()
        {
            return this->QueryApplicationMaterial(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryAssignment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryAssignmentOutcomeCallable CpdpClient::QueryAssignmentCallable(const QueryAssignmentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryAssignmentOutcome()>>(
        [this, request]()
        {
            return this->QueryAssignment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryBalanceOutcomeCallable CpdpClient::QueryBalanceCallable(const QueryBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBankClear(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryBankClearOutcomeCallable CpdpClient::QueryBankClearCallable(const QueryBankClearRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBankClearOutcome()>>(
        [this, request]()
        {
            return this->QueryBankClear(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBankTransactionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryBankTransactionDetailsOutcomeCallable CpdpClient::QueryBankTransactionDetailsCallable(const QueryBankTransactionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBankTransactionDetailsOutcome()>>(
        [this, request]()
        {
            return this->QueryBankTransactionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBankWithdrawCashDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryBankWithdrawCashDetailsOutcomeCallable CpdpClient::QueryBankWithdrawCashDetailsCallable(const QueryBankWithdrawCashDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBankWithdrawCashDetailsOutcome()>>(
        [this, request]()
        {
            return this->QueryBankWithdrawCashDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBatchPaymentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryBatchPaymentResultOutcomeCallable CpdpClient::QueryBatchPaymentResultCallable(const QueryBatchPaymentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBatchPaymentResultOutcome()>>(
        [this, request]()
        {
            return this->QueryBatchPaymentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryBillDownloadURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryBillDownloadURLOutcomeCallable CpdpClient::QueryBillDownloadURLCallable(const QueryBillDownloadURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryBillDownloadURLOutcome()>>(
        [this, request]()
        {
            return this->QueryBillDownloadURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCityCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCityCodeOutcomeCallable CpdpClient::QueryCityCodeCallable(const QueryCityCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCityCodeOutcome()>>(
        [this, request]()
        {
            return this->QueryCityCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCloudChannelData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCloudChannelDataOutcomeCallable CpdpClient::QueryCloudChannelDataCallable(const QueryCloudChannelDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCloudChannelDataOutcome()>>(
        [this, request]()
        {
            return this->QueryCloudChannelData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCloudOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCloudOrderOutcomeCallable CpdpClient::QueryCloudOrderCallable(const QueryCloudOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCloudOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryCloudOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCloudRefundOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCloudRefundOrderOutcomeCallable CpdpClient::QueryCloudRefundOrderCallable(const QueryCloudRefundOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCloudRefundOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryCloudRefundOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCommonTransferRecharge(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCommonTransferRechargeOutcomeCallable CpdpClient::QueryCommonTransferRechargeCallable(const QueryCommonTransferRechargeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCommonTransferRechargeOutcome()>>(
        [this, request]()
        {
            return this->QueryCommonTransferRecharge(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCompanyTitle(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCompanyTitleOutcomeCallable CpdpClient::QueryCompanyTitleCallable(const QueryCompanyTitleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCompanyTitleOutcome()>>(
        [this, request]()
        {
            return this->QueryCompanyTitle(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryContractOutcomeCallable CpdpClient::QueryContractCallable(const QueryContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryContractOutcome()>>(
        [this, request]()
        {
            return this->QueryContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryContractPayFee(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryContractPayFeeOutcomeCallable CpdpClient::QueryContractPayFeeCallable(const QueryContractPayFeeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryContractPayFeeOutcome()>>(
        [this, request]()
        {
            return this->QueryContractPayFee(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryContractPayWayList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryContractPayWayListOutcomeCallable CpdpClient::QueryContractPayWayListCallable(const QueryContractPayWayListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryContractPayWayListOutcome()>>(
        [this, request]()
        {
            return this->QueryContractPayWayList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryContractRelateShop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryContractRelateShopOutcomeCallable CpdpClient::QueryContractRelateShopCallable(const QueryContractRelateShopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryContractRelateShopOutcome()>>(
        [this, request]()
        {
            return this->QueryContractRelateShop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCustAcctIdBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryCustAcctIdBalanceOutcomeCallable CpdpClient::QueryCustAcctIdBalanceCallable(const QueryCustAcctIdBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCustAcctIdBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryCustAcctIdBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDownloadBillURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryDownloadBillURLOutcomeCallable CpdpClient::QueryDownloadBillURLCallable(const QueryDownloadBillURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDownloadBillURLOutcome()>>(
        [this, request]()
        {
            return this->QueryDownloadBillURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryExceedingInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryExceedingInfoOutcomeCallable CpdpClient::QueryExceedingInfoCallable(const QueryExceedingInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryExceedingInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryExceedingInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryExchangeRate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryExchangeRateOutcomeCallable CpdpClient::QueryExchangeRateCallable(const QueryExchangeRateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryExchangeRateOutcome()>>(
        [this, request]()
        {
            return this->QueryExchangeRate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFinancialDataUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFinancialDataUrlOutcomeCallable CpdpClient::QueryFinancialDataUrlCallable(const QueryFinancialDataUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFinancialDataUrlOutcome()>>(
        [this, request]()
        {
            return this->QueryFinancialDataUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexAmountBeforeTax(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexAmountBeforeTaxOutcomeCallable CpdpClient::QueryFlexAmountBeforeTaxCallable(const QueryFlexAmountBeforeTaxRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexAmountBeforeTaxOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexAmountBeforeTax(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexBillDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexBillDownloadUrlOutcomeCallable CpdpClient::QueryFlexBillDownloadUrlCallable(const QueryFlexBillDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexBillDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexBillDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexFreezeOrderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexFreezeOrderListOutcomeCallable CpdpClient::QueryFlexFreezeOrderListCallable(const QueryFlexFreezeOrderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexFreezeOrderListOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexFreezeOrderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexOrderSummaryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexOrderSummaryListOutcomeCallable CpdpClient::QueryFlexOrderSummaryListCallable(const QueryFlexOrderSummaryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexOrderSummaryListOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexOrderSummaryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPayeeAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPayeeAccountBalanceOutcomeCallable CpdpClient::QueryFlexPayeeAccountBalanceCallable(const QueryFlexPayeeAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPayeeAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPayeeAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPayeeAccountInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPayeeAccountInfoOutcomeCallable CpdpClient::QueryFlexPayeeAccountInfoCallable(const QueryFlexPayeeAccountInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPayeeAccountInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPayeeAccountInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPayeeAccountList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPayeeAccountListOutcomeCallable CpdpClient::QueryFlexPayeeAccountListCallable(const QueryFlexPayeeAccountListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPayeeAccountListOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPayeeAccountList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPayeeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPayeeInfoOutcomeCallable CpdpClient::QueryFlexPayeeInfoCallable(const QueryFlexPayeeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPayeeInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPayeeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPaymentOrderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPaymentOrderListOutcomeCallable CpdpClient::QueryFlexPaymentOrderListCallable(const QueryFlexPaymentOrderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPaymentOrderListOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPaymentOrderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPaymentOrderStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPaymentOrderStatusOutcomeCallable CpdpClient::QueryFlexPaymentOrderStatusCallable(const QueryFlexPaymentOrderStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPaymentOrderStatusOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPaymentOrderStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexPlatformAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexPlatformAccountBalanceOutcomeCallable CpdpClient::QueryFlexPlatformAccountBalanceCallable(const QueryFlexPlatformAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexPlatformAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexPlatformAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexServiceProviderAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexServiceProviderAccountBalanceOutcomeCallable CpdpClient::QueryFlexServiceProviderAccountBalanceCallable(const QueryFlexServiceProviderAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexServiceProviderAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexServiceProviderAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexSettlementOrderList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexSettlementOrderListOutcomeCallable CpdpClient::QueryFlexSettlementOrderListCallable(const QueryFlexSettlementOrderListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexSettlementOrderListOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexSettlementOrderList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFlexWechatAuthResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFlexWechatAuthResultOutcomeCallable CpdpClient::QueryFlexWechatAuthResultCallable(const QueryFlexWechatAuthResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFlexWechatAuthResultOutcome()>>(
        [this, request]()
        {
            return this->QueryFlexWechatAuthResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryFundsTransactionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryFundsTransactionDetailsOutcomeCallable CpdpClient::QueryFundsTransactionDetailsCallable(const QueryFundsTransactionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryFundsTransactionDetailsOutcome()>>(
        [this, request]()
        {
            return this->QueryFundsTransactionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryInvoice(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryInvoiceOutcomeCallable CpdpClient::QueryInvoiceCallable(const QueryInvoiceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryInvoiceOutcome()>>(
        [this, request]()
        {
            return this->QueryInvoice(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryInvoiceV2(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryInvoiceV2OutcomeCallable CpdpClient::QueryInvoiceV2Callable(const QueryInvoiceV2Request &request)
{
    auto task = std::make_shared<std::packaged_task<QueryInvoiceV2Outcome()>>(
        [this, request]()
        {
            return this->QueryInvoiceV2(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMaliciousRegistration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMaliciousRegistrationOutcomeCallable CpdpClient::QueryMaliciousRegistrationCallable(const QueryMaliciousRegistrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMaliciousRegistrationOutcome()>>(
        [this, request]()
        {
            return this->QueryMaliciousRegistration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMemberBind(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMemberBindOutcomeCallable CpdpClient::QueryMemberBindCallable(const QueryMemberBindRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMemberBindOutcome()>>(
        [this, request]()
        {
            return this->QueryMemberBind(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMemberTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMemberTransactionOutcomeCallable CpdpClient::QueryMemberTransactionCallable(const QueryMemberTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMemberTransactionOutcome()>>(
        [this, request]()
        {
            return this->QueryMemberTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMemberTransactionDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMemberTransactionDetailsOutcomeCallable CpdpClient::QueryMemberTransactionDetailsCallable(const QueryMemberTransactionDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMemberTransactionDetailsOutcome()>>(
        [this, request]()
        {
            return this->QueryMemberTransactionDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMerchantOutcomeCallable CpdpClient::QueryMerchantCallable(const QueryMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMerchantOutcome()>>(
        [this, request]()
        {
            return this->QueryMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMerchantBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMerchantBalanceOutcomeCallable CpdpClient::QueryMerchantBalanceCallable(const QueryMerchantBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMerchantBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryMerchantBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMerchantClassification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMerchantClassificationOutcomeCallable CpdpClient::QueryMerchantClassificationCallable(const QueryMerchantClassificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMerchantClassificationOutcome()>>(
        [this, request]()
        {
            return this->QueryMerchantClassification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMerchantInfoForManagement(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMerchantInfoForManagementOutcomeCallable CpdpClient::QueryMerchantInfoForManagementCallable(const QueryMerchantInfoForManagementRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMerchantInfoForManagementOutcome()>>(
        [this, request]()
        {
            return this->QueryMerchantInfoForManagement(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMerchantOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMerchantOrderOutcomeCallable CpdpClient::QueryMerchantOrderCallable(const QueryMerchantOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMerchantOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryMerchantOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryMerchantPayWayList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryMerchantPayWayListOutcomeCallable CpdpClient::QueryMerchantPayWayListCallable(const QueryMerchantPayWayListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryMerchantPayWayListOutcome()>>(
        [this, request]()
        {
            return this->QueryMerchantPayWayList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankBankAccountBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankBankAccountBalanceOutcomeCallable CpdpClient::QueryOpenBankBankAccountBalanceCallable(const QueryOpenBankBankAccountBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankBankAccountBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankBankAccountBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankBankBranchList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankBankBranchListOutcomeCallable CpdpClient::QueryOpenBankBankBranchListCallable(const QueryOpenBankBankBranchListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankBankBranchListOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankBankBranchList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankBillDataPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankBillDataPageOutcomeCallable CpdpClient::QueryOpenBankBillDataPageCallable(const QueryOpenBankBillDataPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankBillDataPageOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankBillDataPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankBindExternalSubMerchantBankAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccountOutcomeCallable CpdpClient::QueryOpenBankBindExternalSubMerchantBankAccountCallable(const QueryOpenBankBindExternalSubMerchantBankAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankBindExternalSubMerchantBankAccountOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankBindExternalSubMerchantBankAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankDailyReceiptDownloadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankDailyReceiptDownloadUrlOutcomeCallable CpdpClient::QueryOpenBankDailyReceiptDownloadUrlCallable(const QueryOpenBankDailyReceiptDownloadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankDailyReceiptDownloadUrlOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankDailyReceiptDownloadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankDownLoadUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankDownLoadUrlOutcomeCallable CpdpClient::QueryOpenBankDownLoadUrlCallable(const QueryOpenBankDownLoadUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankDownLoadUrlOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankDownLoadUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankExternalSubAccountBookBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankExternalSubAccountBookBalanceOutcomeCallable CpdpClient::QueryOpenBankExternalSubAccountBookBalanceCallable(const QueryOpenBankExternalSubAccountBookBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankExternalSubAccountBookBalanceOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankExternalSubAccountBookBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankExternalSubMerchantBankAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankExternalSubMerchantBankAccountOutcomeCallable CpdpClient::QueryOpenBankExternalSubMerchantBankAccountCallable(const QueryOpenBankExternalSubMerchantBankAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankExternalSubMerchantBankAccountOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankExternalSubMerchantBankAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankExternalSubMerchantRegistration(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankExternalSubMerchantRegistrationOutcomeCallable CpdpClient::QueryOpenBankExternalSubMerchantRegistrationCallable(const QueryOpenBankExternalSubMerchantRegistrationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankExternalSubMerchantRegistrationOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankExternalSubMerchantRegistration(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankOrderDetailReceiptInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankOrderDetailReceiptInfoOutcomeCallable CpdpClient::QueryOpenBankOrderDetailReceiptInfoCallable(const QueryOpenBankOrderDetailReceiptInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankOrderDetailReceiptInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankOrderDetailReceiptInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankPaymentOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankPaymentOrderOutcomeCallable CpdpClient::QueryOpenBankPaymentOrderCallable(const QueryOpenBankPaymentOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankPaymentOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankPaymentOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankProfitSharePayee(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankProfitSharePayeeOutcomeCallable CpdpClient::QueryOpenBankProfitSharePayeeCallable(const QueryOpenBankProfitSharePayeeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankProfitSharePayeeOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankProfitSharePayee(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankRefundOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankRefundOrderOutcomeCallable CpdpClient::QueryOpenBankRefundOrderCallable(const QueryOpenBankRefundOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankRefundOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankRefundOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankSettleOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankSettleOrderOutcomeCallable CpdpClient::QueryOpenBankSettleOrderCallable(const QueryOpenBankSettleOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankSettleOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankSettleOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankSubMerchantCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankSubMerchantCredentialOutcomeCallable CpdpClient::QueryOpenBankSubMerchantCredentialCallable(const QueryOpenBankSubMerchantCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankSubMerchantCredentialOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankSubMerchantCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankSubMerchantRateConfigure(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankSubMerchantRateConfigureOutcomeCallable CpdpClient::QueryOpenBankSubMerchantRateConfigureCallable(const QueryOpenBankSubMerchantRateConfigureRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankSubMerchantRateConfigureOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankSubMerchantRateConfigure(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankSubMerchantSignOnline(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankSubMerchantSignOnlineOutcomeCallable CpdpClient::QueryOpenBankSubMerchantSignOnlineCallable(const QueryOpenBankSubMerchantSignOnlineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankSubMerchantSignOnlineOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankSubMerchantSignOnline(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankSupportBankList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankSupportBankListOutcomeCallable CpdpClient::QueryOpenBankSupportBankListCallable(const QueryOpenBankSupportBankListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankSupportBankListOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankSupportBankList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankUnbindExternalSubMerchantBankAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccountOutcomeCallable CpdpClient::QueryOpenBankUnbindExternalSubMerchantBankAccountCallable(const QueryOpenBankUnbindExternalSubMerchantBankAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankUnbindExternalSubMerchantBankAccountOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankUnbindExternalSubMerchantBankAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOpenBankVerificationOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOpenBankVerificationOrderOutcomeCallable CpdpClient::QueryOpenBankVerificationOrderCallable(const QueryOpenBankVerificationOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOpenBankVerificationOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryOpenBankVerificationOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOrderOutcomeCallable CpdpClient::QueryOrderCallable(const QueryOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOrderStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOrderStatusOutcomeCallable CpdpClient::QueryOrderStatusCallable(const QueryOrderStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOrderStatusOutcome()>>(
        [this, request]()
        {
            return this->QueryOrderStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryOutwardOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryOutwardOrderOutcomeCallable CpdpClient::QueryOutwardOrderCallable(const QueryOutwardOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryOutwardOrderOutcome()>>(
        [this, request]()
        {
            return this->QueryOutwardOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPayerInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryPayerInfoOutcomeCallable CpdpClient::QueryPayerInfoCallable(const QueryPayerInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPayerInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryPayerInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryReconciliationDocument(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryReconciliationDocumentOutcomeCallable CpdpClient::QueryReconciliationDocumentCallable(const QueryReconciliationDocumentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryReconciliationDocumentOutcome()>>(
        [this, request]()
        {
            return this->QueryReconciliationDocument(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryReconciliationFileApplyInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryReconciliationFileApplyInfoOutcomeCallable CpdpClient::QueryReconciliationFileApplyInfoCallable(const QueryReconciliationFileApplyInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryReconciliationFileApplyInfoOutcome()>>(
        [this, request]()
        {
            return this->QueryReconciliationFileApplyInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryRefund(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryRefundOutcomeCallable CpdpClient::QueryRefundCallable(const QueryRefundRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryRefundOutcome()>>(
        [this, request]()
        {
            return this->QueryRefund(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryShopOpenId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryShopOpenIdOutcomeCallable CpdpClient::QueryShopOpenIdCallable(const QueryShopOpenIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryShopOpenIdOutcome()>>(
        [this, request]()
        {
            return this->QueryShopOpenId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuerySinglePaymentResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QuerySinglePaymentResultOutcomeCallable CpdpClient::QuerySinglePaymentResultCallable(const QuerySinglePaymentResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QuerySinglePaymentResultOutcome()>>(
        [this, request]()
        {
            return this->QuerySinglePaymentResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuerySingleTransactionStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QuerySingleTransactionStatusOutcomeCallable CpdpClient::QuerySingleTransactionStatusCallable(const QuerySingleTransactionStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QuerySingleTransactionStatusOutcome()>>(
        [this, request]()
        {
            return this->QuerySingleTransactionStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QuerySmallAmountTransfer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QuerySmallAmountTransferOutcomeCallable CpdpClient::QuerySmallAmountTransferCallable(const QuerySmallAmountTransferRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QuerySmallAmountTransferOutcome()>>(
        [this, request]()
        {
            return this->QuerySmallAmountTransfer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTrade(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryTradeOutcomeCallable CpdpClient::QueryTradeCallable(const QueryTradeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTradeOutcome()>>(
        [this, request]()
        {
            return this->QueryTrade(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTransferBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryTransferBatchOutcomeCallable CpdpClient::QueryTransferBatchCallable(const QueryTransferBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTransferBatchOutcome()>>(
        [this, request]()
        {
            return this->QueryTransferBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTransferDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryTransferDetailOutcomeCallable CpdpClient::QueryTransferDetailCallable(const QueryTransferDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTransferDetailOutcome()>>(
        [this, request]()
        {
            return this->QueryTransferDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryTransferResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::QueryTransferResultOutcomeCallable CpdpClient::QueryTransferResultCallable(const QueryTransferResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryTransferResultOutcome()>>(
        [this, request]()
        {
            return this->QueryTransferResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RechargeByThirdPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RechargeByThirdPayOutcomeCallable CpdpClient::RechargeByThirdPayCallable(const RechargeByThirdPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RechargeByThirdPayOutcome()>>(
        [this, request]()
        {
            return this->RechargeByThirdPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RechargeMemberThirdPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RechargeMemberThirdPayOutcomeCallable CpdpClient::RechargeMemberThirdPayCallable(const RechargeMemberThirdPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RechargeMemberThirdPayOutcome()>>(
        [this, request]()
        {
            return this->RechargeMemberThirdPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->Refund(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RefundOutcomeCallable CpdpClient::RefundCallable(const RefundRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundOutcome()>>(
        [this, request]()
        {
            return this->Refund(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundCloudOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RefundCloudOrderOutcomeCallable CpdpClient::RefundCloudOrderCallable(const RefundCloudOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundCloudOrderOutcome()>>(
        [this, request]()
        {
            return this->RefundCloudOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundMemberTransaction(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RefundMemberTransactionOutcomeCallable CpdpClient::RefundMemberTransactionCallable(const RefundMemberTransactionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundMemberTransactionOutcome()>>(
        [this, request]()
        {
            return this->RefundMemberTransaction(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundOpenBankOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RefundOpenBankOrderOutcomeCallable CpdpClient::RefundOpenBankOrderCallable(const RefundOpenBankOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundOpenBankOrderOutcome()>>(
        [this, request]()
        {
            return this->RefundOpenBankOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RefundOrderOutcomeCallable CpdpClient::RefundOrderCallable(const RefundOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundOrderOutcome()>>(
        [this, request]()
        {
            return this->RefundOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefundTlinxOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RefundTlinxOrderOutcomeCallable CpdpClient::RefundTlinxOrderCallable(const RefundTlinxOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefundTlinxOrderOutcome()>>(
        [this, request]()
        {
            return this->RefundTlinxOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterBehavior(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RegisterBehaviorOutcomeCallable CpdpClient::RegisterBehaviorCallable(const RegisterBehaviorRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterBehaviorOutcome()>>(
        [this, request]()
        {
            return this->RegisterBehavior(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterBill(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RegisterBillOutcomeCallable CpdpClient::RegisterBillCallable(const RegisterBillRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterBillOutcome()>>(
        [this, request]()
        {
            return this->RegisterBill(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RegisterBillSupportWithdraw(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RegisterBillSupportWithdrawOutcomeCallable CpdpClient::RegisterBillSupportWithdrawCallable(const RegisterBillSupportWithdrawRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RegisterBillSupportWithdrawOutcome()>>(
        [this, request]()
        {
            return this->RegisterBillSupportWithdraw(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReviseMbrProperty(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ReviseMbrPropertyOutcomeCallable CpdpClient::ReviseMbrPropertyCallable(const ReviseMbrPropertyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReviseMbrPropertyOutcome()>>(
        [this, request]()
        {
            return this->ReviseMbrProperty(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeMemberRechargeThirdPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RevokeMemberRechargeThirdPayOutcomeCallable CpdpClient::RevokeMemberRechargeThirdPayCallable(const RevokeMemberRechargeThirdPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeMemberRechargeThirdPayOutcome()>>(
        [this, request]()
        {
            return this->RevokeMemberRechargeThirdPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevokeRechargeByThirdPay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RevokeRechargeByThirdPayOutcomeCallable CpdpClient::RevokeRechargeByThirdPayCallable(const RevokeRechargeByThirdPayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevokeRechargeByThirdPayOutcome()>>(
        [this, request]()
        {
            return this->RevokeRechargeByThirdPay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncContractData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::SyncContractDataOutcomeCallable CpdpClient::SyncContractDataCallable(const SyncContractDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncContractDataOutcome()>>(
        [this, request]()
        {
            return this->SyncContractData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TerminateContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::TerminateContractOutcomeCallable CpdpClient::TerminateContractCallable(const TerminateContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TerminateContractOutcome()>>(
        [this, request]()
        {
            return this->TerminateContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransferSinglePay(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::TransferSinglePayOutcomeCallable CpdpClient::TransferSinglePayCallable(const TransferSinglePayRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransferSinglePayOutcome()>>(
        [this, request]()
        {
            return this->TransferSinglePay(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnBindAcct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UnBindAcctOutcomeCallable CpdpClient::UnBindAcctCallable(const UnBindAcctRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnBindAcctOutcome()>>(
        [this, request]()
        {
            return this->UnBindAcct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindOpenBankExternalSubMerchantBankAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UnbindOpenBankExternalSubMerchantBankAccountOutcomeCallable CpdpClient::UnbindOpenBankExternalSubMerchantBankAccountCallable(const UnbindOpenBankExternalSubMerchantBankAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindOpenBankExternalSubMerchantBankAccountOutcome()>>(
        [this, request]()
        {
            return this->UnbindOpenBankExternalSubMerchantBankAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnbindRelateAcct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UnbindRelateAcctOutcomeCallable CpdpClient::UnbindRelateAcctCallable(const UnbindRelateAcctRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnbindRelateAcctOutcome()>>(
        [this, request]()
        {
            return this->UnbindRelateAcct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnifiedCloudOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UnifiedCloudOrderOutcomeCallable CpdpClient::UnifiedCloudOrderCallable(const UnifiedCloudOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnifiedCloudOrderOutcome()>>(
        [this, request]()
        {
            return this->UnifiedCloudOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnifiedOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UnifiedOrderOutcomeCallable CpdpClient::UnifiedOrderCallable(const UnifiedOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnifiedOrderOutcome()>>(
        [this, request]()
        {
            return this->UnifiedOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UnifiedTlinxOrder(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UnifiedTlinxOrderOutcomeCallable CpdpClient::UnifiedTlinxOrderCallable(const UnifiedTlinxOrderRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UnifiedTlinxOrderOutcome()>>(
        [this, request]()
        {
            return this->UnifiedTlinxOrder(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadExternalAnchorInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UploadExternalAnchorInfoOutcomeCallable CpdpClient::UploadExternalAnchorInfoCallable(const UploadExternalAnchorInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadExternalAnchorInfoOutcome()>>(
        [this, request]()
        {
            return this->UploadExternalAnchorInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UploadFileOutcomeCallable CpdpClient::UploadFileCallable(const UploadFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadFileOutcome()>>(
        [this, request]()
        {
            return this->UploadFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadOpenBankSubMerchantCredential(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UploadOpenBankSubMerchantCredentialOutcomeCallable CpdpClient::UploadOpenBankSubMerchantCredentialCallable(const UploadOpenBankSubMerchantCredentialRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadOpenBankSubMerchantCredentialOutcome()>>(
        [this, request]()
        {
            return this->UploadOpenBankSubMerchantCredential(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadOrgFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UploadOrgFileOutcomeCallable CpdpClient::UploadOrgFileCallable(const UploadOrgFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadOrgFileOutcome()>>(
        [this, request]()
        {
            return this->UploadOrgFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadTaxList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UploadTaxListOutcomeCallable CpdpClient::UploadTaxListCallable(const UploadTaxListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadTaxListOutcome()>>(
        [this, request]()
        {
            return this->UploadTaxList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadTaxPayment(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::UploadTaxPaymentOutcomeCallable CpdpClient::UploadTaxPaymentCallable(const UploadTaxPaymentRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadTaxPaymentOutcome()>>(
        [this, request]()
        {
            return this->UploadTaxPayment(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyOpenBankAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::VerifyOpenBankAccountOutcomeCallable CpdpClient::VerifyOpenBankAccountCallable(const VerifyOpenBankAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyOpenBankAccountOutcome()>>(
        [this, request]()
        {
            return this->VerifyOpenBankAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ViewContract(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ViewContractOutcomeCallable CpdpClient::ViewContractCallable(const ViewContractRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ViewContractOutcome()>>(
        [this, request]()
        {
            return this->ViewContract(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ViewMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ViewMerchantOutcomeCallable CpdpClient::ViewMerchantCallable(const ViewMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ViewMerchantOutcome()>>(
        [this, request]()
        {
            return this->ViewMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ViewShop(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::ViewShopOutcomeCallable CpdpClient::ViewShopCallable(const ViewShopRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ViewShopOutcome()>>(
        [this, request]()
        {
            return this->ViewShop(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
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
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->WithdrawCashMembership(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::WithdrawCashMembershipOutcomeCallable CpdpClient::WithdrawCashMembershipCallable(const WithdrawCashMembershipRequest &request)
{
    auto task = std::make_shared<std::packaged_task<WithdrawCashMembershipOutcome()>>(
        [this, request]()
        {
            return this->WithdrawCashMembership(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

