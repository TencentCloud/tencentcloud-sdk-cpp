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

#include <tencentcloud/domain/v20180808/DomainClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Domain::V20180808;
using namespace TencentCloud::Domain::V20180808::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-08-08";
    const string ENDPOINT = "domain.tencentcloudapi.com";
}

DomainClient::DomainClient(const Credential &credential, const string &region) :
    DomainClient(credential, region, ClientProfile())
{
}

DomainClient::DomainClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DomainClient::BatchModifyDomainInfoOutcome DomainClient::BatchModifyDomainInfo(const BatchModifyDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "BatchModifyDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BatchModifyDomainInfoResponse rsp = BatchModifyDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BatchModifyDomainInfoOutcome(rsp);
        else
            return BatchModifyDomainInfoOutcome(o.GetError());
    }
    else
    {
        return BatchModifyDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::BatchModifyDomainInfoAsync(const BatchModifyDomainInfoRequest& request, const BatchModifyDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BatchModifyDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::BatchModifyDomainInfoOutcomeCallable DomainClient::BatchModifyDomainInfoCallable(const BatchModifyDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BatchModifyDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->BatchModifyDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::BidDetailPageOutcome DomainClient::BidDetailPage(const BidDetailPageRequest &request)
{
    auto outcome = MakeRequest(request, "BidDetailPage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BidDetailPageResponse rsp = BidDetailPageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BidDetailPageOutcome(rsp);
        else
            return BidDetailPageOutcome(o.GetError());
    }
    else
    {
        return BidDetailPageOutcome(outcome.GetError());
    }
}

void DomainClient::BidDetailPageAsync(const BidDetailPageRequest& request, const BidDetailPageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BidDetailPage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::BidDetailPageOutcomeCallable DomainClient::BidDetailPageCallable(const BidDetailPageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BidDetailPageOutcome()>>(
        [this, request]()
        {
            return this->BidDetailPage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::BidPreDomainsOutcome DomainClient::BidPreDomains(const BidPreDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "BidPreDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BidPreDomainsResponse rsp = BidPreDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BidPreDomainsOutcome(rsp);
        else
            return BidPreDomainsOutcome(o.GetError());
    }
    else
    {
        return BidPreDomainsOutcome(outcome.GetError());
    }
}

void DomainClient::BidPreDomainsAsync(const BidPreDomainsRequest& request, const BidPreDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BidPreDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::BidPreDomainsOutcomeCallable DomainClient::BidPreDomainsCallable(const BidPreDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BidPreDomainsOutcome()>>(
        [this, request]()
        {
            return this->BidPreDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::BiddingPreReleaseOutcome DomainClient::BiddingPreRelease(const BiddingPreReleaseRequest &request)
{
    auto outcome = MakeRequest(request, "BiddingPreRelease");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BiddingPreReleaseResponse rsp = BiddingPreReleaseResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BiddingPreReleaseOutcome(rsp);
        else
            return BiddingPreReleaseOutcome(o.GetError());
    }
    else
    {
        return BiddingPreReleaseOutcome(outcome.GetError());
    }
}

void DomainClient::BiddingPreReleaseAsync(const BiddingPreReleaseRequest& request, const BiddingPreReleaseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BiddingPreRelease(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::BiddingPreReleaseOutcomeCallable DomainClient::BiddingPreReleaseCallable(const BiddingPreReleaseRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BiddingPreReleaseOutcome()>>(
        [this, request]()
        {
            return this->BiddingPreRelease(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CheckBatchStatusOutcome DomainClient::CheckBatchStatus(const CheckBatchStatusRequest &request)
{
    auto outcome = MakeRequest(request, "CheckBatchStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckBatchStatusResponse rsp = CheckBatchStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckBatchStatusOutcome(rsp);
        else
            return CheckBatchStatusOutcome(o.GetError());
    }
    else
    {
        return CheckBatchStatusOutcome(outcome.GetError());
    }
}

void DomainClient::CheckBatchStatusAsync(const CheckBatchStatusRequest& request, const CheckBatchStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckBatchStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CheckBatchStatusOutcomeCallable DomainClient::CheckBatchStatusCallable(const CheckBatchStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckBatchStatusOutcome()>>(
        [this, request]()
        {
            return this->CheckBatchStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CheckDomainOutcome DomainClient::CheckDomain(const CheckDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CheckDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckDomainResponse rsp = CheckDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckDomainOutcome(rsp);
        else
            return CheckDomainOutcome(o.GetError());
    }
    else
    {
        return CheckDomainOutcome(outcome.GetError());
    }
}

void DomainClient::CheckDomainAsync(const CheckDomainRequest& request, const CheckDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CheckDomainOutcomeCallable DomainClient::CheckDomainCallable(const CheckDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckDomainOutcome()>>(
        [this, request]()
        {
            return this->CheckDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CreateCustomDnsHostOutcome DomainClient::CreateCustomDnsHost(const CreateCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomDnsHostResponse rsp = CreateCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomDnsHostOutcome(rsp);
        else
            return CreateCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return CreateCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::CreateCustomDnsHostAsync(const CreateCustomDnsHostRequest& request, const CreateCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomDnsHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CreateCustomDnsHostOutcomeCallable DomainClient::CreateCustomDnsHostCallable(const CreateCustomDnsHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomDnsHostOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomDnsHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CreateDomainBatchOutcome DomainClient::CreateDomainBatch(const CreateDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainBatchResponse rsp = CreateDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainBatchOutcome(rsp);
        else
            return CreateDomainBatchOutcome(o.GetError());
    }
    else
    {
        return CreateDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::CreateDomainBatchAsync(const CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CreateDomainBatchOutcomeCallable DomainClient::CreateDomainBatchCallable(const CreateDomainBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CreateDomainRedemptionOutcome DomainClient::CreateDomainRedemption(const CreateDomainRedemptionRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainRedemption");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainRedemptionResponse rsp = CreateDomainRedemptionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainRedemptionOutcome(rsp);
        else
            return CreateDomainRedemptionOutcome(o.GetError());
    }
    else
    {
        return CreateDomainRedemptionOutcome(outcome.GetError());
    }
}

void DomainClient::CreateDomainRedemptionAsync(const CreateDomainRedemptionRequest& request, const CreateDomainRedemptionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainRedemption(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CreateDomainRedemptionOutcomeCallable DomainClient::CreateDomainRedemptionCallable(const CreateDomainRedemptionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainRedemptionOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainRedemption(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CreatePhoneEmailOutcome DomainClient::CreatePhoneEmail(const CreatePhoneEmailRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePhoneEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePhoneEmailResponse rsp = CreatePhoneEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePhoneEmailOutcome(rsp);
        else
            return CreatePhoneEmailOutcome(o.GetError());
    }
    else
    {
        return CreatePhoneEmailOutcome(outcome.GetError());
    }
}

void DomainClient::CreatePhoneEmailAsync(const CreatePhoneEmailRequest& request, const CreatePhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePhoneEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CreatePhoneEmailOutcomeCallable DomainClient::CreatePhoneEmailCallable(const CreatePhoneEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePhoneEmailOutcome()>>(
        [this, request]()
        {
            return this->CreatePhoneEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::CreateTemplateOutcome DomainClient::CreateTemplate(const CreateTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTemplateResponse rsp = CreateTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTemplateOutcome(rsp);
        else
            return CreateTemplateOutcome(o.GetError());
    }
    else
    {
        return CreateTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::CreateTemplateAsync(const CreateTemplateRequest& request, const CreateTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::CreateTemplateOutcomeCallable DomainClient::CreateTemplateCallable(const CreateTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTemplateOutcome()>>(
        [this, request]()
        {
            return this->CreateTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DeleteBiddingOutcome DomainClient::DeleteBidding(const DeleteBiddingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBidding");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBiddingResponse rsp = DeleteBiddingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBiddingOutcome(rsp);
        else
            return DeleteBiddingOutcome(o.GetError());
    }
    else
    {
        return DeleteBiddingOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteBiddingAsync(const DeleteBiddingRequest& request, const DeleteBiddingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBidding(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DeleteBiddingOutcomeCallable DomainClient::DeleteBiddingCallable(const DeleteBiddingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBiddingOutcome()>>(
        [this, request]()
        {
            return this->DeleteBidding(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DeleteCustomDnsHostOutcome DomainClient::DeleteCustomDnsHost(const DeleteCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCustomDnsHostResponse rsp = DeleteCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCustomDnsHostOutcome(rsp);
        else
            return DeleteCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return DeleteCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteCustomDnsHostAsync(const DeleteCustomDnsHostRequest& request, const DeleteCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCustomDnsHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DeleteCustomDnsHostOutcomeCallable DomainClient::DeleteCustomDnsHostCallable(const DeleteCustomDnsHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCustomDnsHostOutcome()>>(
        [this, request]()
        {
            return this->DeleteCustomDnsHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DeletePhoneEmailOutcome DomainClient::DeletePhoneEmail(const DeletePhoneEmailRequest &request)
{
    auto outcome = MakeRequest(request, "DeletePhoneEmail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeletePhoneEmailResponse rsp = DeletePhoneEmailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeletePhoneEmailOutcome(rsp);
        else
            return DeletePhoneEmailOutcome(o.GetError());
    }
    else
    {
        return DeletePhoneEmailOutcome(outcome.GetError());
    }
}

void DomainClient::DeletePhoneEmailAsync(const DeletePhoneEmailRequest& request, const DeletePhoneEmailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeletePhoneEmail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DeletePhoneEmailOutcomeCallable DomainClient::DeletePhoneEmailCallable(const DeletePhoneEmailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeletePhoneEmailOutcome()>>(
        [this, request]()
        {
            return this->DeletePhoneEmail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DeleteReservedPreDomainInfoOutcome DomainClient::DeleteReservedPreDomainInfo(const DeleteReservedPreDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteReservedPreDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteReservedPreDomainInfoResponse rsp = DeleteReservedPreDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteReservedPreDomainInfoOutcome(rsp);
        else
            return DeleteReservedPreDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DeleteReservedPreDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteReservedPreDomainInfoAsync(const DeleteReservedPreDomainInfoRequest& request, const DeleteReservedPreDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteReservedPreDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DeleteReservedPreDomainInfoOutcomeCallable DomainClient::DeleteReservedPreDomainInfoCallable(const DeleteReservedPreDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteReservedPreDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->DeleteReservedPreDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DeleteTemplateOutcome DomainClient::DeleteTemplate(const DeleteTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTemplateResponse rsp = DeleteTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTemplateOutcome(rsp);
        else
            return DeleteTemplateOutcome(o.GetError());
    }
    else
    {
        return DeleteTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::DeleteTemplateAsync(const DeleteTemplateRequest& request, const DeleteTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DeleteTemplateOutcomeCallable DomainClient::DeleteTemplateCallable(const DeleteTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTemplateOutcome()>>(
        [this, request]()
        {
            return this->DeleteTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeAuctionListOutcome DomainClient::DescribeAuctionList(const DescribeAuctionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuctionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuctionListResponse rsp = DescribeAuctionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuctionListOutcome(rsp);
        else
            return DescribeAuctionListOutcome(o.GetError());
    }
    else
    {
        return DescribeAuctionListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeAuctionListAsync(const DescribeAuctionListRequest& request, const DescribeAuctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuctionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeAuctionListOutcomeCallable DomainClient::DescribeAuctionListCallable(const DescribeAuctionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuctionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuctionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBatchOperationLogDetailsOutcome DomainClient::DescribeBatchOperationLogDetails(const DescribeBatchOperationLogDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOperationLogDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOperationLogDetailsResponse rsp = DescribeBatchOperationLogDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOperationLogDetailsOutcome(rsp);
        else
            return DescribeBatchOperationLogDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOperationLogDetailsOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBatchOperationLogDetailsAsync(const DescribeBatchOperationLogDetailsRequest& request, const DescribeBatchOperationLogDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOperationLogDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBatchOperationLogDetailsOutcomeCallable DomainClient::DescribeBatchOperationLogDetailsCallable(const DescribeBatchOperationLogDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOperationLogDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOperationLogDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBatchOperationLogsOutcome DomainClient::DescribeBatchOperationLogs(const DescribeBatchOperationLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchOperationLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchOperationLogsResponse rsp = DescribeBatchOperationLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchOperationLogsOutcome(rsp);
        else
            return DescribeBatchOperationLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchOperationLogsOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBatchOperationLogsAsync(const DescribeBatchOperationLogsRequest& request, const DescribeBatchOperationLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchOperationLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBatchOperationLogsOutcomeCallable DomainClient::DescribeBatchOperationLogsCallable(const DescribeBatchOperationLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchOperationLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchOperationLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBiddingAppointDetailOutcome DomainClient::DescribeBiddingAppointDetail(const DescribeBiddingAppointDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingAppointDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingAppointDetailResponse rsp = DescribeBiddingAppointDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingAppointDetailOutcome(rsp);
        else
            return DescribeBiddingAppointDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingAppointDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingAppointDetailAsync(const DescribeBiddingAppointDetailRequest& request, const DescribeBiddingAppointDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBiddingAppointDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBiddingAppointDetailOutcomeCallable DomainClient::DescribeBiddingAppointDetailCallable(const DescribeBiddingAppointDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBiddingAppointDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBiddingAppointDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBiddingAppointListOutcome DomainClient::DescribeBiddingAppointList(const DescribeBiddingAppointListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingAppointList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingAppointListResponse rsp = DescribeBiddingAppointListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingAppointListOutcome(rsp);
        else
            return DescribeBiddingAppointListOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingAppointListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingAppointListAsync(const DescribeBiddingAppointListRequest& request, const DescribeBiddingAppointListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBiddingAppointList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBiddingAppointListOutcomeCallable DomainClient::DescribeBiddingAppointListCallable(const DescribeBiddingAppointListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBiddingAppointListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBiddingAppointList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBiddingDetailOutcome DomainClient::DescribeBiddingDetail(const DescribeBiddingDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingDetailResponse rsp = DescribeBiddingDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingDetailOutcome(rsp);
        else
            return DescribeBiddingDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingDetailAsync(const DescribeBiddingDetailRequest& request, const DescribeBiddingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBiddingDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBiddingDetailOutcomeCallable DomainClient::DescribeBiddingDetailCallable(const DescribeBiddingDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBiddingDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBiddingDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBiddingListOutcome DomainClient::DescribeBiddingList(const DescribeBiddingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingListResponse rsp = DescribeBiddingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingListOutcome(rsp);
        else
            return DescribeBiddingListOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingListAsync(const DescribeBiddingListRequest& request, const DescribeBiddingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBiddingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBiddingListOutcomeCallable DomainClient::DescribeBiddingListCallable(const DescribeBiddingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBiddingListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBiddingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBiddingSuccessfulDetailOutcome DomainClient::DescribeBiddingSuccessfulDetail(const DescribeBiddingSuccessfulDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingSuccessfulDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingSuccessfulDetailResponse rsp = DescribeBiddingSuccessfulDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingSuccessfulDetailOutcome(rsp);
        else
            return DescribeBiddingSuccessfulDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingSuccessfulDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingSuccessfulDetailAsync(const DescribeBiddingSuccessfulDetailRequest& request, const DescribeBiddingSuccessfulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBiddingSuccessfulDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBiddingSuccessfulDetailOutcomeCallable DomainClient::DescribeBiddingSuccessfulDetailCallable(const DescribeBiddingSuccessfulDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBiddingSuccessfulDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeBiddingSuccessfulDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeBiddingSuccessfulListOutcome DomainClient::DescribeBiddingSuccessfulList(const DescribeBiddingSuccessfulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBiddingSuccessfulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBiddingSuccessfulListResponse rsp = DescribeBiddingSuccessfulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBiddingSuccessfulListOutcome(rsp);
        else
            return DescribeBiddingSuccessfulListOutcome(o.GetError());
    }
    else
    {
        return DescribeBiddingSuccessfulListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeBiddingSuccessfulListAsync(const DescribeBiddingSuccessfulListRequest& request, const DescribeBiddingSuccessfulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBiddingSuccessfulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeBiddingSuccessfulListOutcomeCallable DomainClient::DescribeBiddingSuccessfulListCallable(const DescribeBiddingSuccessfulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBiddingSuccessfulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBiddingSuccessfulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeCustomDnsHostSetOutcome DomainClient::DescribeCustomDnsHostSet(const DescribeCustomDnsHostSetRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomDnsHostSet");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomDnsHostSetResponse rsp = DescribeCustomDnsHostSetResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomDnsHostSetOutcome(rsp);
        else
            return DescribeCustomDnsHostSetOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomDnsHostSetOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeCustomDnsHostSetAsync(const DescribeCustomDnsHostSetRequest& request, const DescribeCustomDnsHostSetAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomDnsHostSet(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeCustomDnsHostSetOutcomeCallable DomainClient::DescribeCustomDnsHostSetCallable(const DescribeCustomDnsHostSetRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomDnsHostSetOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomDnsHostSet(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeDomainBaseInfoOutcome DomainClient::DescribeDomainBaseInfo(const DescribeDomainBaseInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainBaseInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainBaseInfoResponse rsp = DescribeDomainBaseInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainBaseInfoOutcome(rsp);
        else
            return DescribeDomainBaseInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainBaseInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainBaseInfoAsync(const DescribeDomainBaseInfoRequest& request, const DescribeDomainBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainBaseInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeDomainBaseInfoOutcomeCallable DomainClient::DescribeDomainBaseInfoCallable(const DescribeDomainBaseInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainBaseInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainBaseInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeDomainNameListOutcome DomainClient::DescribeDomainNameList(const DescribeDomainNameListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainNameListResponse rsp = DescribeDomainNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainNameListOutcome(rsp);
        else
            return DescribeDomainNameListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainNameListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainNameListAsync(const DescribeDomainNameListRequest& request, const DescribeDomainNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainNameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeDomainNameListOutcomeCallable DomainClient::DescribeDomainNameListCallable(const DescribeDomainNameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainNameListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainNameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeDomainPriceListOutcome DomainClient::DescribeDomainPriceList(const DescribeDomainPriceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPriceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPriceListResponse rsp = DescribeDomainPriceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPriceListOutcome(rsp);
        else
            return DescribeDomainPriceListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPriceListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainPriceListAsync(const DescribeDomainPriceListRequest& request, const DescribeDomainPriceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainPriceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeDomainPriceListOutcomeCallable DomainClient::DescribeDomainPriceListCallable(const DescribeDomainPriceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainPriceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainPriceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeDomainSimpleInfoOutcome DomainClient::DescribeDomainSimpleInfo(const DescribeDomainSimpleInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainSimpleInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainSimpleInfoResponse rsp = DescribeDomainSimpleInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainSimpleInfoOutcome(rsp);
        else
            return DescribeDomainSimpleInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainSimpleInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeDomainSimpleInfoAsync(const DescribeDomainSimpleInfoRequest& request, const DescribeDomainSimpleInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainSimpleInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeDomainSimpleInfoOutcomeCallable DomainClient::DescribeDomainSimpleInfoCallable(const DescribeDomainSimpleInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainSimpleInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainSimpleInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribePayWaitDetailOutcome DomainClient::DescribePayWaitDetail(const DescribePayWaitDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePayWaitDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePayWaitDetailResponse rsp = DescribePayWaitDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePayWaitDetailOutcome(rsp);
        else
            return DescribePayWaitDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePayWaitDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePayWaitDetailAsync(const DescribePayWaitDetailRequest& request, const DescribePayWaitDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePayWaitDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribePayWaitDetailOutcomeCallable DomainClient::DescribePayWaitDetailCallable(const DescribePayWaitDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePayWaitDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePayWaitDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribePhoneEmailListOutcome DomainClient::DescribePhoneEmailList(const DescribePhoneEmailListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePhoneEmailList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePhoneEmailListResponse rsp = DescribePhoneEmailListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePhoneEmailListOutcome(rsp);
        else
            return DescribePhoneEmailListOutcome(o.GetError());
    }
    else
    {
        return DescribePhoneEmailListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePhoneEmailListAsync(const DescribePhoneEmailListRequest& request, const DescribePhoneEmailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePhoneEmailList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribePhoneEmailListOutcomeCallable DomainClient::DescribePhoneEmailListCallable(const DescribePhoneEmailListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePhoneEmailListOutcome()>>(
        [this, request]()
        {
            return this->DescribePhoneEmailList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribePreAuctionListOutcome DomainClient::DescribePreAuctionList(const DescribePreAuctionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreAuctionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreAuctionListResponse rsp = DescribePreAuctionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreAuctionListOutcome(rsp);
        else
            return DescribePreAuctionListOutcome(o.GetError());
    }
    else
    {
        return DescribePreAuctionListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePreAuctionListAsync(const DescribePreAuctionListRequest& request, const DescribePreAuctionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePreAuctionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribePreAuctionListOutcomeCallable DomainClient::DescribePreAuctionListCallable(const DescribePreAuctionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePreAuctionListOutcome()>>(
        [this, request]()
        {
            return this->DescribePreAuctionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribePreDomainListOutcome DomainClient::DescribePreDomainList(const DescribePreDomainListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreDomainList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreDomainListResponse rsp = DescribePreDomainListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreDomainListOutcome(rsp);
        else
            return DescribePreDomainListOutcome(o.GetError());
    }
    else
    {
        return DescribePreDomainListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePreDomainListAsync(const DescribePreDomainListRequest& request, const DescribePreDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePreDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribePreDomainListOutcomeCallable DomainClient::DescribePreDomainListCallable(const DescribePreDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePreDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribePreDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribePreReleaseListOutcome DomainClient::DescribePreReleaseList(const DescribePreReleaseListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePreReleaseList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePreReleaseListResponse rsp = DescribePreReleaseListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePreReleaseListOutcome(rsp);
        else
            return DescribePreReleaseListOutcome(o.GetError());
    }
    else
    {
        return DescribePreReleaseListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribePreReleaseListAsync(const DescribePreReleaseListRequest& request, const DescribePreReleaseListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePreReleaseList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribePreReleaseListOutcomeCallable DomainClient::DescribePreReleaseListCallable(const DescribePreReleaseListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePreReleaseListOutcome()>>(
        [this, request]()
        {
            return this->DescribePreReleaseList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeReservedBidInfoOutcome DomainClient::DescribeReservedBidInfo(const DescribeReservedBidInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedBidInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedBidInfoResponse rsp = DescribeReservedBidInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedBidInfoOutcome(rsp);
        else
            return DescribeReservedBidInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedBidInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeReservedBidInfoAsync(const DescribeReservedBidInfoRequest& request, const DescribeReservedBidInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReservedBidInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeReservedBidInfoOutcomeCallable DomainClient::DescribeReservedBidInfoCallable(const DescribeReservedBidInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReservedBidInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeReservedBidInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeReservedPreDomainInfoOutcome DomainClient::DescribeReservedPreDomainInfo(const DescribeReservedPreDomainInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReservedPreDomainInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReservedPreDomainInfoResponse rsp = DescribeReservedPreDomainInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReservedPreDomainInfoOutcome(rsp);
        else
            return DescribeReservedPreDomainInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeReservedPreDomainInfoOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeReservedPreDomainInfoAsync(const DescribeReservedPreDomainInfoRequest& request, const DescribeReservedPreDomainInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReservedPreDomainInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeReservedPreDomainInfoOutcomeCallable DomainClient::DescribeReservedPreDomainInfoCallable(const DescribeReservedPreDomainInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReservedPreDomainInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeReservedPreDomainInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeTemplateOutcome DomainClient::DescribeTemplate(const DescribeTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateResponse rsp = DescribeTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateOutcome(rsp);
        else
            return DescribeTemplateOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeTemplateAsync(const DescribeTemplateRequest& request, const DescribeTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeTemplateOutcomeCallable DomainClient::DescribeTemplateCallable(const DescribeTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeTemplateListOutcome DomainClient::DescribeTemplateList(const DescribeTemplateListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTemplateList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTemplateListResponse rsp = DescribeTemplateListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTemplateListOutcome(rsp);
        else
            return DescribeTemplateListOutcome(o.GetError());
    }
    else
    {
        return DescribeTemplateListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeTemplateListAsync(const DescribeTemplateListRequest& request, const DescribeTemplateListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTemplateList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeTemplateListOutcomeCallable DomainClient::DescribeTemplateListCallable(const DescribeTemplateListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTemplateListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTemplateList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeTldListOutcome DomainClient::DescribeTldList(const DescribeTldListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTldList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTldListResponse rsp = DescribeTldListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTldListOutcome(rsp);
        else
            return DescribeTldListOutcome(o.GetError());
    }
    else
    {
        return DescribeTldListOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeTldListAsync(const DescribeTldListRequest& request, const DescribeTldListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTldList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeTldListOutcomeCallable DomainClient::DescribeTldListCallable(const DescribeTldListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTldListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTldList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::DescribeUnPreDomainDetailOutcome DomainClient::DescribeUnPreDomainDetail(const DescribeUnPreDomainDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUnPreDomainDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUnPreDomainDetailResponse rsp = DescribeUnPreDomainDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUnPreDomainDetailOutcome(rsp);
        else
            return DescribeUnPreDomainDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUnPreDomainDetailOutcome(outcome.GetError());
    }
}

void DomainClient::DescribeUnPreDomainDetailAsync(const DescribeUnPreDomainDetailRequest& request, const DescribeUnPreDomainDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUnPreDomainDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::DescribeUnPreDomainDetailOutcomeCallable DomainClient::DescribeUnPreDomainDetailCallable(const DescribeUnPreDomainDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUnPreDomainDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeUnPreDomainDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::ModifyCustomDnsHostOutcome DomainClient::ModifyCustomDnsHost(const ModifyCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomDnsHostResponse rsp = ModifyCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomDnsHostOutcome(rsp);
        else
            return ModifyCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyCustomDnsHostAsync(const ModifyCustomDnsHostRequest& request, const ModifyCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomDnsHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::ModifyCustomDnsHostOutcomeCallable DomainClient::ModifyCustomDnsHostCallable(const ModifyCustomDnsHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomDnsHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomDnsHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::ModifyDomainDNSBatchOutcome DomainClient::ModifyDomainDNSBatch(const ModifyDomainDNSBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainDNSBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainDNSBatchResponse rsp = ModifyDomainDNSBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainDNSBatchOutcome(rsp);
        else
            return ModifyDomainDNSBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainDNSBatchOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyDomainDNSBatchAsync(const ModifyDomainDNSBatchRequest& request, const ModifyDomainDNSBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainDNSBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::ModifyDomainDNSBatchOutcomeCallable DomainClient::ModifyDomainDNSBatchCallable(const ModifyDomainDNSBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainDNSBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainDNSBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::ModifyDomainOwnerBatchOutcome DomainClient::ModifyDomainOwnerBatch(const ModifyDomainOwnerBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainOwnerBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainOwnerBatchResponse rsp = ModifyDomainOwnerBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOwnerBatchOutcome(rsp);
        else
            return ModifyDomainOwnerBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOwnerBatchOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyDomainOwnerBatchAsync(const ModifyDomainOwnerBatchRequest& request, const ModifyDomainOwnerBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainOwnerBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::ModifyDomainOwnerBatchOutcomeCallable DomainClient::ModifyDomainOwnerBatchCallable(const ModifyDomainOwnerBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainOwnerBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainOwnerBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::ModifyIntlCustomDnsHostOutcome DomainClient::ModifyIntlCustomDnsHost(const ModifyIntlCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyIntlCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyIntlCustomDnsHostResponse rsp = ModifyIntlCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyIntlCustomDnsHostOutcome(rsp);
        else
            return ModifyIntlCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return ModifyIntlCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyIntlCustomDnsHostAsync(const ModifyIntlCustomDnsHostRequest& request, const ModifyIntlCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyIntlCustomDnsHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::ModifyIntlCustomDnsHostOutcomeCallable DomainClient::ModifyIntlCustomDnsHostCallable(const ModifyIntlCustomDnsHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyIntlCustomDnsHostOutcome()>>(
        [this, request]()
        {
            return this->ModifyIntlCustomDnsHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::ModifyTemplateOutcome DomainClient::ModifyTemplate(const ModifyTemplateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTemplate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTemplateResponse rsp = ModifyTemplateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTemplateOutcome(rsp);
        else
            return ModifyTemplateOutcome(o.GetError());
    }
    else
    {
        return ModifyTemplateOutcome(outcome.GetError());
    }
}

void DomainClient::ModifyTemplateAsync(const ModifyTemplateRequest& request, const ModifyTemplateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTemplate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::ModifyTemplateOutcomeCallable DomainClient::ModifyTemplateCallable(const ModifyTemplateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTemplateOutcome()>>(
        [this, request]()
        {
            return this->ModifyTemplate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::RenewDomainBatchOutcome DomainClient::RenewDomainBatch(const RenewDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "RenewDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RenewDomainBatchResponse rsp = RenewDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RenewDomainBatchOutcome(rsp);
        else
            return RenewDomainBatchOutcome(o.GetError());
    }
    else
    {
        return RenewDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::RenewDomainBatchAsync(const RenewDomainBatchRequest& request, const RenewDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RenewDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::RenewDomainBatchOutcomeCallable DomainClient::RenewDomainBatchCallable(const RenewDomainBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RenewDomainBatchOutcome()>>(
        [this, request]()
        {
            return this->RenewDomainBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::ReservedPreDomainsOutcome DomainClient::ReservedPreDomains(const ReservedPreDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ReservedPreDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReservedPreDomainsResponse rsp = ReservedPreDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReservedPreDomainsOutcome(rsp);
        else
            return ReservedPreDomainsOutcome(o.GetError());
    }
    else
    {
        return ReservedPreDomainsOutcome(outcome.GetError());
    }
}

void DomainClient::ReservedPreDomainsAsync(const ReservedPreDomainsRequest& request, const ReservedPreDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReservedPreDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::ReservedPreDomainsOutcomeCallable DomainClient::ReservedPreDomainsCallable(const ReservedPreDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReservedPreDomainsOutcome()>>(
        [this, request]()
        {
            return this->ReservedPreDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::SendPhoneEmailCodeOutcome DomainClient::SendPhoneEmailCode(const SendPhoneEmailCodeRequest &request)
{
    auto outcome = MakeRequest(request, "SendPhoneEmailCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SendPhoneEmailCodeResponse rsp = SendPhoneEmailCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SendPhoneEmailCodeOutcome(rsp);
        else
            return SendPhoneEmailCodeOutcome(o.GetError());
    }
    else
    {
        return SendPhoneEmailCodeOutcome(outcome.GetError());
    }
}

void DomainClient::SendPhoneEmailCodeAsync(const SendPhoneEmailCodeRequest& request, const SendPhoneEmailCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SendPhoneEmailCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::SendPhoneEmailCodeOutcomeCallable DomainClient::SendPhoneEmailCodeCallable(const SendPhoneEmailCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SendPhoneEmailCodeOutcome()>>(
        [this, request]()
        {
            return this->SendPhoneEmailCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::SetDomainAutoRenewOutcome DomainClient::SetDomainAutoRenew(const SetDomainAutoRenewRequest &request)
{
    auto outcome = MakeRequest(request, "SetDomainAutoRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SetDomainAutoRenewResponse rsp = SetDomainAutoRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SetDomainAutoRenewOutcome(rsp);
        else
            return SetDomainAutoRenewOutcome(o.GetError());
    }
    else
    {
        return SetDomainAutoRenewOutcome(outcome.GetError());
    }
}

void DomainClient::SetDomainAutoRenewAsync(const SetDomainAutoRenewRequest& request, const SetDomainAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SetDomainAutoRenew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::SetDomainAutoRenewOutcomeCallable DomainClient::SetDomainAutoRenewCallable(const SetDomainAutoRenewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SetDomainAutoRenewOutcome()>>(
        [this, request]()
        {
            return this->SetDomainAutoRenew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::SyncCustomDnsHostOutcome DomainClient::SyncCustomDnsHost(const SyncCustomDnsHostRequest &request)
{
    auto outcome = MakeRequest(request, "SyncCustomDnsHost");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SyncCustomDnsHostResponse rsp = SyncCustomDnsHostResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SyncCustomDnsHostOutcome(rsp);
        else
            return SyncCustomDnsHostOutcome(o.GetError());
    }
    else
    {
        return SyncCustomDnsHostOutcome(outcome.GetError());
    }
}

void DomainClient::SyncCustomDnsHostAsync(const SyncCustomDnsHostRequest& request, const SyncCustomDnsHostAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SyncCustomDnsHost(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::SyncCustomDnsHostOutcomeCallable DomainClient::SyncCustomDnsHostCallable(const SyncCustomDnsHostRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SyncCustomDnsHostOutcome()>>(
        [this, request]()
        {
            return this->SyncCustomDnsHost(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::TransferInDomainBatchOutcome DomainClient::TransferInDomainBatch(const TransferInDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TransferInDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferInDomainBatchResponse rsp = TransferInDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferInDomainBatchOutcome(rsp);
        else
            return TransferInDomainBatchOutcome(o.GetError());
    }
    else
    {
        return TransferInDomainBatchOutcome(outcome.GetError());
    }
}

void DomainClient::TransferInDomainBatchAsync(const TransferInDomainBatchRequest& request, const TransferInDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransferInDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::TransferInDomainBatchOutcomeCallable DomainClient::TransferInDomainBatchCallable(const TransferInDomainBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransferInDomainBatchOutcome()>>(
        [this, request]()
        {
            return this->TransferInDomainBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::TransferProhibitionBatchOutcome DomainClient::TransferProhibitionBatch(const TransferProhibitionBatchRequest &request)
{
    auto outcome = MakeRequest(request, "TransferProhibitionBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        TransferProhibitionBatchResponse rsp = TransferProhibitionBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return TransferProhibitionBatchOutcome(rsp);
        else
            return TransferProhibitionBatchOutcome(o.GetError());
    }
    else
    {
        return TransferProhibitionBatchOutcome(outcome.GetError());
    }
}

void DomainClient::TransferProhibitionBatchAsync(const TransferProhibitionBatchRequest& request, const TransferProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->TransferProhibitionBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::TransferProhibitionBatchOutcomeCallable DomainClient::TransferProhibitionBatchCallable(const TransferProhibitionBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<TransferProhibitionBatchOutcome()>>(
        [this, request]()
        {
            return this->TransferProhibitionBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::UpdateProhibitionBatchOutcome DomainClient::UpdateProhibitionBatch(const UpdateProhibitionBatchRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateProhibitionBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateProhibitionBatchResponse rsp = UpdateProhibitionBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateProhibitionBatchOutcome(rsp);
        else
            return UpdateProhibitionBatchOutcome(o.GetError());
    }
    else
    {
        return UpdateProhibitionBatchOutcome(outcome.GetError());
    }
}

void DomainClient::UpdateProhibitionBatchAsync(const UpdateProhibitionBatchRequest& request, const UpdateProhibitionBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateProhibitionBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::UpdateProhibitionBatchOutcomeCallable DomainClient::UpdateProhibitionBatchCallable(const UpdateProhibitionBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateProhibitionBatchOutcome()>>(
        [this, request]()
        {
            return this->UpdateProhibitionBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DomainClient::UploadImageOutcome DomainClient::UploadImage(const UploadImageRequest &request)
{
    auto outcome = MakeRequest(request, "UploadImage");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UploadImageResponse rsp = UploadImageResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UploadImageOutcome(rsp);
        else
            return UploadImageOutcome(o.GetError());
    }
    else
    {
        return UploadImageOutcome(outcome.GetError());
    }
}

void DomainClient::UploadImageAsync(const UploadImageRequest& request, const UploadImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UploadImage(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DomainClient::UploadImageOutcomeCallable DomainClient::UploadImageCallable(const UploadImageRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UploadImageOutcome()>>(
        [this, request]()
        {
            return this->UploadImage(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

