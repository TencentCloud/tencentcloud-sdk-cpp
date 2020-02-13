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

CpdpClient::RevRegisterBillSupportWithdrawOutcome CpdpClient::RevRegisterBillSupportWithdraw(const RevRegisterBillSupportWithdrawRequest &request)
{
    auto outcome = MakeRequest(request, "RevRegisterBillSupportWithdraw");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RevRegisterBillSupportWithdrawResponse rsp = RevRegisterBillSupportWithdrawResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RevRegisterBillSupportWithdrawOutcome(rsp);
        else
            return RevRegisterBillSupportWithdrawOutcome(o.GetError());
    }
    else
    {
        return RevRegisterBillSupportWithdrawOutcome(outcome.GetError());
    }
}

void CpdpClient::RevRegisterBillSupportWithdrawAsync(const RevRegisterBillSupportWithdrawRequest& request, const RevRegisterBillSupportWithdrawAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RevRegisterBillSupportWithdraw(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CpdpClient::RevRegisterBillSupportWithdrawOutcomeCallable CpdpClient::RevRegisterBillSupportWithdrawCallable(const RevRegisterBillSupportWithdrawRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RevRegisterBillSupportWithdrawOutcome()>>(
        [this, request]()
        {
            return this->RevRegisterBillSupportWithdraw(request);
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

