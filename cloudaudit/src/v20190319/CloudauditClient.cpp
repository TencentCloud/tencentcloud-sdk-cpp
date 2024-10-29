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

#include <tencentcloud/cloudaudit/v20190319/CloudauditClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cloudaudit::V20190319;
using namespace TencentCloud::Cloudaudit::V20190319::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-03-19";
    const string ENDPOINT = "cloudaudit.tencentcloudapi.com";
}

CloudauditClient::CloudauditClient(const Credential &credential, const string &region) :
    CloudauditClient(credential, region, ClientProfile())
{
}

CloudauditClient::CloudauditClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CloudauditClient::CreateAuditTrackOutcome CloudauditClient::CreateAuditTrack(const CreateAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditTrackResponse rsp = CreateAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditTrackOutcome(rsp);
        else
            return CreateAuditTrackOutcome(o.GetError());
    }
    else
    {
        return CreateAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::CreateAuditTrackAsync(const CreateAuditTrackRequest& request, const CreateAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAuditTrack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::CreateAuditTrackOutcomeCallable CloudauditClient::CreateAuditTrackCallable(const CreateAuditTrackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditTrackOutcome()>>(
        [this, request]()
        {
            return this->CreateAuditTrack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::CreateEventsAuditTrackOutcome CloudauditClient::CreateEventsAuditTrack(const CreateEventsAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEventsAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEventsAuditTrackResponse rsp = CreateEventsAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEventsAuditTrackOutcome(rsp);
        else
            return CreateEventsAuditTrackOutcome(o.GetError());
    }
    else
    {
        return CreateEventsAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::CreateEventsAuditTrackAsync(const CreateEventsAuditTrackRequest& request, const CreateEventsAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEventsAuditTrack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::CreateEventsAuditTrackOutcomeCallable CloudauditClient::CreateEventsAuditTrackCallable(const CreateEventsAuditTrackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEventsAuditTrackOutcome()>>(
        [this, request]()
        {
            return this->CreateEventsAuditTrack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DeleteAuditTrackOutcome CloudauditClient::DeleteAuditTrack(const DeleteAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditTrackResponse rsp = DeleteAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditTrackOutcome(rsp);
        else
            return DeleteAuditTrackOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::DeleteAuditTrackAsync(const DeleteAuditTrackRequest& request, const DeleteAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAuditTrack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DeleteAuditTrackOutcomeCallable CloudauditClient::DeleteAuditTrackCallable(const DeleteAuditTrackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditTrackOutcome()>>(
        [this, request]()
        {
            return this->DeleteAuditTrack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DescribeAuditOutcome CloudauditClient::DescribeAudit(const DescribeAuditRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditResponse rsp = DescribeAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditOutcome(rsp);
        else
            return DescribeAuditOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditAsync(const DescribeAuditRequest& request, const DescribeAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DescribeAuditOutcomeCallable CloudauditClient::DescribeAuditCallable(const DescribeAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditOutcome()>>(
        [this, request]()
        {
            return this->DescribeAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DescribeAuditTrackOutcome CloudauditClient::DescribeAuditTrack(const DescribeAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditTrackResponse rsp = DescribeAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditTrackOutcome(rsp);
        else
            return DescribeAuditTrackOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditTrackAsync(const DescribeAuditTrackRequest& request, const DescribeAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditTrack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DescribeAuditTrackOutcomeCallable CloudauditClient::DescribeAuditTrackCallable(const DescribeAuditTrackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditTrackOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditTrack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DescribeAuditTracksOutcome CloudauditClient::DescribeAuditTracks(const DescribeAuditTracksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAuditTracks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAuditTracksResponse rsp = DescribeAuditTracksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAuditTracksOutcome(rsp);
        else
            return DescribeAuditTracksOutcome(o.GetError());
    }
    else
    {
        return DescribeAuditTracksOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeAuditTracksAsync(const DescribeAuditTracksRequest& request, const DescribeAuditTracksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAuditTracks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DescribeAuditTracksOutcomeCallable CloudauditClient::DescribeAuditTracksCallable(const DescribeAuditTracksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAuditTracksOutcome()>>(
        [this, request]()
        {
            return this->DescribeAuditTracks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DescribeEventsOutcome CloudauditClient::DescribeEvents(const DescribeEventsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventsResponse rsp = DescribeEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventsOutcome(rsp);
        else
            return DescribeEventsOutcome(o.GetError());
    }
    else
    {
        return DescribeEventsOutcome(outcome.GetError());
    }
}

void CloudauditClient::DescribeEventsAsync(const DescribeEventsRequest& request, const DescribeEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DescribeEventsOutcomeCallable CloudauditClient::DescribeEventsCallable(const DescribeEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventsOutcome()>>(
        [this, request]()
        {
            return this->DescribeEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::GetAttributeKeyOutcome CloudauditClient::GetAttributeKey(const GetAttributeKeyRequest &request)
{
    auto outcome = MakeRequest(request, "GetAttributeKey");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetAttributeKeyResponse rsp = GetAttributeKeyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetAttributeKeyOutcome(rsp);
        else
            return GetAttributeKeyOutcome(o.GetError());
    }
    else
    {
        return GetAttributeKeyOutcome(outcome.GetError());
    }
}

void CloudauditClient::GetAttributeKeyAsync(const GetAttributeKeyRequest& request, const GetAttributeKeyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetAttributeKey(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::GetAttributeKeyOutcomeCallable CloudauditClient::GetAttributeKeyCallable(const GetAttributeKeyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetAttributeKeyOutcome()>>(
        [this, request]()
        {
            return this->GetAttributeKey(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::InquireAuditCreditOutcome CloudauditClient::InquireAuditCredit(const InquireAuditCreditRequest &request)
{
    auto outcome = MakeRequest(request, "InquireAuditCredit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        InquireAuditCreditResponse rsp = InquireAuditCreditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return InquireAuditCreditOutcome(rsp);
        else
            return InquireAuditCreditOutcome(o.GetError());
    }
    else
    {
        return InquireAuditCreditOutcome(outcome.GetError());
    }
}

void CloudauditClient::InquireAuditCreditAsync(const InquireAuditCreditRequest& request, const InquireAuditCreditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->InquireAuditCredit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::InquireAuditCreditOutcomeCallable CloudauditClient::InquireAuditCreditCallable(const InquireAuditCreditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<InquireAuditCreditOutcome()>>(
        [this, request]()
        {
            return this->InquireAuditCredit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::ListAuditsOutcome CloudauditClient::ListAudits(const ListAuditsRequest &request)
{
    auto outcome = MakeRequest(request, "ListAudits");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListAuditsResponse rsp = ListAuditsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListAuditsOutcome(rsp);
        else
            return ListAuditsOutcome(o.GetError());
    }
    else
    {
        return ListAuditsOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListAuditsAsync(const ListAuditsRequest& request, const ListAuditsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListAudits(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::ListAuditsOutcomeCallable CloudauditClient::ListAuditsCallable(const ListAuditsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListAuditsOutcome()>>(
        [this, request]()
        {
            return this->ListAudits(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::ListCmqEnableRegionOutcome CloudauditClient::ListCmqEnableRegion(const ListCmqEnableRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ListCmqEnableRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCmqEnableRegionResponse rsp = ListCmqEnableRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCmqEnableRegionOutcome(rsp);
        else
            return ListCmqEnableRegionOutcome(o.GetError());
    }
    else
    {
        return ListCmqEnableRegionOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListCmqEnableRegionAsync(const ListCmqEnableRegionRequest& request, const ListCmqEnableRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListCmqEnableRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::ListCmqEnableRegionOutcomeCallable CloudauditClient::ListCmqEnableRegionCallable(const ListCmqEnableRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListCmqEnableRegionOutcome()>>(
        [this, request]()
        {
            return this->ListCmqEnableRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::ListCosEnableRegionOutcome CloudauditClient::ListCosEnableRegion(const ListCosEnableRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ListCosEnableRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListCosEnableRegionResponse rsp = ListCosEnableRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListCosEnableRegionOutcome(rsp);
        else
            return ListCosEnableRegionOutcome(o.GetError());
    }
    else
    {
        return ListCosEnableRegionOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListCosEnableRegionAsync(const ListCosEnableRegionRequest& request, const ListCosEnableRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListCosEnableRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::ListCosEnableRegionOutcomeCallable CloudauditClient::ListCosEnableRegionCallable(const ListCosEnableRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListCosEnableRegionOutcome()>>(
        [this, request]()
        {
            return this->ListCosEnableRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::ListKeyAliasByRegionOutcome CloudauditClient::ListKeyAliasByRegion(const ListKeyAliasByRegionRequest &request)
{
    auto outcome = MakeRequest(request, "ListKeyAliasByRegion");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListKeyAliasByRegionResponse rsp = ListKeyAliasByRegionResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListKeyAliasByRegionOutcome(rsp);
        else
            return ListKeyAliasByRegionOutcome(o.GetError());
    }
    else
    {
        return ListKeyAliasByRegionOutcome(outcome.GetError());
    }
}

void CloudauditClient::ListKeyAliasByRegionAsync(const ListKeyAliasByRegionRequest& request, const ListKeyAliasByRegionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListKeyAliasByRegion(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::ListKeyAliasByRegionOutcomeCallable CloudauditClient::ListKeyAliasByRegionCallable(const ListKeyAliasByRegionRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListKeyAliasByRegionOutcome()>>(
        [this, request]()
        {
            return this->ListKeyAliasByRegion(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::LookUpEventsOutcome CloudauditClient::LookUpEvents(const LookUpEventsRequest &request)
{
    auto outcome = MakeRequest(request, "LookUpEvents");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        LookUpEventsResponse rsp = LookUpEventsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return LookUpEventsOutcome(rsp);
        else
            return LookUpEventsOutcome(o.GetError());
    }
    else
    {
        return LookUpEventsOutcome(outcome.GetError());
    }
}

void CloudauditClient::LookUpEventsAsync(const LookUpEventsRequest& request, const LookUpEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->LookUpEvents(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::LookUpEventsOutcomeCallable CloudauditClient::LookUpEventsCallable(const LookUpEventsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<LookUpEventsOutcome()>>(
        [this, request]()
        {
            return this->LookUpEvents(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::ModifyAuditTrackOutcome CloudauditClient::ModifyAuditTrack(const ModifyAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyAuditTrackResponse rsp = ModifyAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyAuditTrackOutcome(rsp);
        else
            return ModifyAuditTrackOutcome(o.GetError());
    }
    else
    {
        return ModifyAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::ModifyAuditTrackAsync(const ModifyAuditTrackRequest& request, const ModifyAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyAuditTrack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::ModifyAuditTrackOutcomeCallable CloudauditClient::ModifyAuditTrackCallable(const ModifyAuditTrackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyAuditTrackOutcome()>>(
        [this, request]()
        {
            return this->ModifyAuditTrack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::ModifyEventsAuditTrackOutcome CloudauditClient::ModifyEventsAuditTrack(const ModifyEventsAuditTrackRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyEventsAuditTrack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyEventsAuditTrackResponse rsp = ModifyEventsAuditTrackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyEventsAuditTrackOutcome(rsp);
        else
            return ModifyEventsAuditTrackOutcome(o.GetError());
    }
    else
    {
        return ModifyEventsAuditTrackOutcome(outcome.GetError());
    }
}

void CloudauditClient::ModifyEventsAuditTrackAsync(const ModifyEventsAuditTrackRequest& request, const ModifyEventsAuditTrackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyEventsAuditTrack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::ModifyEventsAuditTrackOutcomeCallable CloudauditClient::ModifyEventsAuditTrackCallable(const ModifyEventsAuditTrackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyEventsAuditTrackOutcome()>>(
        [this, request]()
        {
            return this->ModifyEventsAuditTrack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::StartLoggingOutcome CloudauditClient::StartLogging(const StartLoggingRequest &request)
{
    auto outcome = MakeRequest(request, "StartLogging");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartLoggingResponse rsp = StartLoggingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartLoggingOutcome(rsp);
        else
            return StartLoggingOutcome(o.GetError());
    }
    else
    {
        return StartLoggingOutcome(outcome.GetError());
    }
}

void CloudauditClient::StartLoggingAsync(const StartLoggingRequest& request, const StartLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartLogging(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::StartLoggingOutcomeCallable CloudauditClient::StartLoggingCallable(const StartLoggingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartLoggingOutcome()>>(
        [this, request]()
        {
            return this->StartLogging(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::StopLoggingOutcome CloudauditClient::StopLogging(const StopLoggingRequest &request)
{
    auto outcome = MakeRequest(request, "StopLogging");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopLoggingResponse rsp = StopLoggingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopLoggingOutcome(rsp);
        else
            return StopLoggingOutcome(o.GetError());
    }
    else
    {
        return StopLoggingOutcome(outcome.GetError());
    }
}

void CloudauditClient::StopLoggingAsync(const StopLoggingRequest& request, const StopLoggingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopLogging(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::StopLoggingOutcomeCallable CloudauditClient::StopLoggingCallable(const StopLoggingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopLoggingOutcome()>>(
        [this, request]()
        {
            return this->StopLogging(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::UpdateAuditOutcome CloudauditClient::UpdateAudit(const UpdateAuditRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateAuditResponse rsp = UpdateAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateAuditOutcome(rsp);
        else
            return UpdateAuditOutcome(o.GetError());
    }
    else
    {
        return UpdateAuditOutcome(outcome.GetError());
    }
}

void CloudauditClient::UpdateAuditAsync(const UpdateAuditRequest& request, const UpdateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::UpdateAuditOutcomeCallable CloudauditClient::UpdateAuditCallable(const UpdateAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateAuditOutcome()>>(
        [this, request]()
        {
            return this->UpdateAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

