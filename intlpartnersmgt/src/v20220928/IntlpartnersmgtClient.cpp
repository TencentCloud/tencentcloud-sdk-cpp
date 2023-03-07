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

#include <tencentcloud/intlpartnersmgt/v20220928/IntlpartnersmgtClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Intlpartnersmgt::V20220928;
using namespace TencentCloud::Intlpartnersmgt::V20220928::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-09-28";
    const string ENDPOINT = "intlpartnersmgt.tencentcloudapi.com";
}

IntlpartnersmgtClient::IntlpartnersmgtClient(const Credential &credential, const string &region) :
    IntlpartnersmgtClient(credential, region, ClientProfile())
{
}

IntlpartnersmgtClient::IntlpartnersmgtClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


IntlpartnersmgtClient::AllocateCustomerCreditOutcome IntlpartnersmgtClient::AllocateCustomerCredit(const AllocateCustomerCreditRequest &request)
{
    auto outcome = MakeRequest(request, "AllocateCustomerCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AllocateCustomerCreditResponse rsp = AllocateCustomerCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AllocateCustomerCreditOutcome(rsp);
        else
            return AllocateCustomerCreditOutcome(o.GetError());
    }
    else
    {
        return AllocateCustomerCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::AllocateCustomerCreditAsync(const AllocateCustomerCreditRequest& request, const AllocateCustomerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AllocateCustomerCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::AllocateCustomerCreditOutcomeCallable IntlpartnersmgtClient::AllocateCustomerCreditCallable(const AllocateCustomerCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AllocateCustomerCreditOutcome()>>(
        [this, request]()
        {
            return this->AllocateCustomerCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::CreateAccountOutcome IntlpartnersmgtClient::CreateAccount(const CreateAccountRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAccount");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAccountResponse rsp = CreateAccountResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAccountOutcome(rsp);
        else
            return CreateAccountOutcome(o.GetError());
    }
    else
    {
        return CreateAccountOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::CreateAccountAsync(const CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAccount(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::CreateAccountOutcomeCallable IntlpartnersmgtClient::CreateAccountCallable(const CreateAccountRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAccountOutcome()>>(
        [this, request]()
        {
            return this->CreateAccount(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::GetCountryCodesOutcome IntlpartnersmgtClient::GetCountryCodes(const GetCountryCodesRequest &request)
{
    auto outcome = MakeRequest(request, "GetCountryCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetCountryCodesResponse rsp = GetCountryCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetCountryCodesOutcome(rsp);
        else
            return GetCountryCodesOutcome(o.GetError());
    }
    else
    {
        return GetCountryCodesOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::GetCountryCodesAsync(const GetCountryCodesRequest& request, const GetCountryCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetCountryCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::GetCountryCodesOutcomeCallable IntlpartnersmgtClient::GetCountryCodesCallable(const GetCountryCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetCountryCodesOutcome()>>(
        [this, request]()
        {
            return this->GetCountryCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCreditAllocationHistoryOutcome IntlpartnersmgtClient::QueryCreditAllocationHistory(const QueryCreditAllocationHistoryRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditAllocationHistory");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditAllocationHistoryResponse rsp = QueryCreditAllocationHistoryResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditAllocationHistoryOutcome(rsp);
        else
            return QueryCreditAllocationHistoryOutcome(o.GetError());
    }
    else
    {
        return QueryCreditAllocationHistoryOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditAllocationHistoryAsync(const QueryCreditAllocationHistoryRequest& request, const QueryCreditAllocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCreditAllocationHistory(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCreditAllocationHistoryOutcomeCallable IntlpartnersmgtClient::QueryCreditAllocationHistoryCallable(const QueryCreditAllocationHistoryRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCreditAllocationHistoryOutcome()>>(
        [this, request]()
        {
            return this->QueryCreditAllocationHistory(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCreditByUinListOutcome IntlpartnersmgtClient::QueryCreditByUinList(const QueryCreditByUinListRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCreditByUinList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCreditByUinListResponse rsp = QueryCreditByUinListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCreditByUinListOutcome(rsp);
        else
            return QueryCreditByUinListOutcome(o.GetError());
    }
    else
    {
        return QueryCreditByUinListOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCreditByUinListAsync(const QueryCreditByUinListRequest& request, const QueryCreditByUinListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCreditByUinList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCreditByUinListOutcomeCallable IntlpartnersmgtClient::QueryCreditByUinListCallable(const QueryCreditByUinListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCreditByUinListOutcome()>>(
        [this, request]()
        {
            return this->QueryCreditByUinList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryCustomersCreditOutcome IntlpartnersmgtClient::QueryCustomersCredit(const QueryCustomersCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryCustomersCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryCustomersCreditResponse rsp = QueryCustomersCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryCustomersCreditOutcome(rsp);
        else
            return QueryCustomersCreditOutcome(o.GetError());
    }
    else
    {
        return QueryCustomersCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryCustomersCreditAsync(const QueryCustomersCreditRequest& request, const QueryCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryCustomersCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryCustomersCreditOutcomeCallable IntlpartnersmgtClient::QueryCustomersCreditCallable(const QueryCustomersCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryCustomersCreditOutcome()>>(
        [this, request]()
        {
            return this->QueryCustomersCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryDirectCustomersCreditOutcome IntlpartnersmgtClient::QueryDirectCustomersCredit(const QueryDirectCustomersCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryDirectCustomersCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryDirectCustomersCreditResponse rsp = QueryDirectCustomersCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryDirectCustomersCreditOutcome(rsp);
        else
            return QueryDirectCustomersCreditOutcome(o.GetError());
    }
    else
    {
        return QueryDirectCustomersCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryDirectCustomersCreditAsync(const QueryDirectCustomersCreditRequest& request, const QueryDirectCustomersCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryDirectCustomersCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryDirectCustomersCreditOutcomeCallable IntlpartnersmgtClient::QueryDirectCustomersCreditCallable(const QueryDirectCustomersCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryDirectCustomersCreditOutcome()>>(
        [this, request]()
        {
            return this->QueryDirectCustomersCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryPartnerCreditOutcome IntlpartnersmgtClient::QueryPartnerCredit(const QueryPartnerCreditRequest &request)
{
    auto outcome = MakeRequest(request, "QueryPartnerCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryPartnerCreditResponse rsp = QueryPartnerCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryPartnerCreditOutcome(rsp);
        else
            return QueryPartnerCreditOutcome(o.GetError());
    }
    else
    {
        return QueryPartnerCreditOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryPartnerCreditAsync(const QueryPartnerCreditRequest& request, const QueryPartnerCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryPartnerCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryPartnerCreditOutcomeCallable IntlpartnersmgtClient::QueryPartnerCreditCallable(const QueryPartnerCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryPartnerCreditOutcome()>>(
        [this, request]()
        {
            return this->QueryPartnerCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryVoucherAmountByUinOutcome IntlpartnersmgtClient::QueryVoucherAmountByUin(const QueryVoucherAmountByUinRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherAmountByUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherAmountByUinResponse rsp = QueryVoucherAmountByUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherAmountByUinOutcome(rsp);
        else
            return QueryVoucherAmountByUinOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherAmountByUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherAmountByUinAsync(const QueryVoucherAmountByUinRequest& request, const QueryVoucherAmountByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVoucherAmountByUin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryVoucherAmountByUinOutcomeCallable IntlpartnersmgtClient::QueryVoucherAmountByUinCallable(const QueryVoucherAmountByUinRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVoucherAmountByUinOutcome()>>(
        [this, request]()
        {
            return this->QueryVoucherAmountByUin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryVoucherListByUinOutcome IntlpartnersmgtClient::QueryVoucherListByUin(const QueryVoucherListByUinRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherListByUin");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherListByUinResponse rsp = QueryVoucherListByUinResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherListByUinOutcome(rsp);
        else
            return QueryVoucherListByUinOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherListByUinOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherListByUinAsync(const QueryVoucherListByUinRequest& request, const QueryVoucherListByUinAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVoucherListByUin(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryVoucherListByUinOutcomeCallable IntlpartnersmgtClient::QueryVoucherListByUinCallable(const QueryVoucherListByUinRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVoucherListByUinOutcome()>>(
        [this, request]()
        {
            return this->QueryVoucherListByUin(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

IntlpartnersmgtClient::QueryVoucherPoolOutcome IntlpartnersmgtClient::QueryVoucherPool(const QueryVoucherPoolRequest &request)
{
    auto outcome = MakeRequest(request, "QueryVoucherPool");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        QueryVoucherPoolResponse rsp = QueryVoucherPoolResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return QueryVoucherPoolOutcome(rsp);
        else
            return QueryVoucherPoolOutcome(o.GetError());
    }
    else
    {
        return QueryVoucherPoolOutcome(outcome.GetError());
    }
}

void IntlpartnersmgtClient::QueryVoucherPoolAsync(const QueryVoucherPoolRequest& request, const QueryVoucherPoolAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->QueryVoucherPool(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

IntlpartnersmgtClient::QueryVoucherPoolOutcomeCallable IntlpartnersmgtClient::QueryVoucherPoolCallable(const QueryVoucherPoolRequest &request)
{
    auto task = std::make_shared<std::packaged_task<QueryVoucherPoolOutcome()>>(
        [this, request]()
        {
            return this->QueryVoucherPool(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

