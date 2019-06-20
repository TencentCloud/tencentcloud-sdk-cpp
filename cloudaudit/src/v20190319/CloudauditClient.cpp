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


CloudauditClient::CreateAuditOutcome CloudauditClient::CreateAudit(const CreateAuditRequest &request)
{
    auto outcome = MakeRequest(request, "CreateAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateAuditResponse rsp = CreateAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateAuditOutcome(rsp);
        else
            return CreateAuditOutcome(o.GetError());
    }
    else
    {
        return CreateAuditOutcome(outcome.GetError());
    }
}

void CloudauditClient::CreateAuditAsync(const CreateAuditRequest& request, const CreateAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::CreateAuditOutcomeCallable CloudauditClient::CreateAuditCallable(const CreateAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateAuditOutcome()>>(
        [this, request]()
        {
            return this->CreateAudit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CloudauditClient::DeleteAuditOutcome CloudauditClient::DeleteAudit(const DeleteAuditRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteAudit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteAuditResponse rsp = DeleteAuditResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteAuditOutcome(rsp);
        else
            return DeleteAuditOutcome(o.GetError());
    }
    else
    {
        return DeleteAuditOutcome(outcome.GetError());
    }
}

void CloudauditClient::DeleteAuditAsync(const DeleteAuditRequest& request, const DeleteAuditAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteAudit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CloudauditClient::DeleteAuditOutcomeCallable CloudauditClient::DeleteAuditCallable(const DeleteAuditRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteAuditOutcome()>>(
        [this, request]()
        {
            return this->DeleteAudit(request);
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

