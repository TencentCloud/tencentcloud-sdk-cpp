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

#include <tencentcloud/dnspod/v20210323/DnspodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Dnspod::V20210323;
using namespace TencentCloud::Dnspod::V20210323::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-03-23";
    const string ENDPOINT = "dnspod.tencentcloudapi.com";
}

DnspodClient::DnspodClient(const Credential &credential, const string &region) :
    DnspodClient(credential, region, ClientProfile())
{
}

DnspodClient::DnspodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


DnspodClient::CheckRecordSnapshotRollbackOutcome DnspodClient::CheckRecordSnapshotRollback(const CheckRecordSnapshotRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckRecordSnapshotRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckRecordSnapshotRollbackResponse rsp = CheckRecordSnapshotRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckRecordSnapshotRollbackOutcome(rsp);
        else
            return CheckRecordSnapshotRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckRecordSnapshotRollbackOutcome(outcome.GetError());
    }
}

void DnspodClient::CheckRecordSnapshotRollbackAsync(const CheckRecordSnapshotRollbackRequest& request, const CheckRecordSnapshotRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckRecordSnapshotRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CheckRecordSnapshotRollbackOutcomeCallable DnspodClient::CheckRecordSnapshotRollbackCallable(const CheckRecordSnapshotRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckRecordSnapshotRollbackOutcome()>>(
        [this, request]()
        {
            return this->CheckRecordSnapshotRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CheckSnapshotRollbackOutcome DnspodClient::CheckSnapshotRollback(const CheckSnapshotRollbackRequest &request)
{
    auto outcome = MakeRequest(request, "CheckSnapshotRollback");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckSnapshotRollbackResponse rsp = CheckSnapshotRollbackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckSnapshotRollbackOutcome(rsp);
        else
            return CheckSnapshotRollbackOutcome(o.GetError());
    }
    else
    {
        return CheckSnapshotRollbackOutcome(outcome.GetError());
    }
}

void DnspodClient::CheckSnapshotRollbackAsync(const CheckSnapshotRollbackRequest& request, const CheckSnapshotRollbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckSnapshotRollback(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CheckSnapshotRollbackOutcomeCallable DnspodClient::CheckSnapshotRollbackCallable(const CheckSnapshotRollbackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckSnapshotRollbackOutcome()>>(
        [this, request]()
        {
            return this->CheckSnapshotRollback(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDealOutcome DnspodClient::CreateDeal(const CreateDealRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDeal");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDealResponse rsp = CreateDealResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDealOutcome(rsp);
        else
            return CreateDealOutcome(o.GetError());
    }
    else
    {
        return CreateDealOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDealAsync(const CreateDealRequest& request, const CreateDealAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDeal(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDealOutcomeCallable DnspodClient::CreateDealCallable(const CreateDealRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDealOutcome()>>(
        [this, request]()
        {
            return this->CreateDeal(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainOutcome DnspodClient::CreateDomain(const CreateDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainResponse rsp = CreateDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainOutcome(rsp);
        else
            return CreateDomainOutcome(o.GetError());
    }
    else
    {
        return CreateDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainOutcomeCallable DnspodClient::CreateDomainCallable(const CreateDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainAliasOutcome DnspodClient::CreateDomainAlias(const CreateDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainAliasResponse rsp = CreateDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainAliasOutcome(rsp);
        else
            return CreateDomainAliasOutcome(o.GetError());
    }
    else
    {
        return CreateDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainAliasAsync(const CreateDomainAliasRequest& request, const CreateDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainAliasOutcomeCallable DnspodClient::CreateDomainAliasCallable(const CreateDomainAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainAliasOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainBatchOutcome DnspodClient::CreateDomainBatch(const CreateDomainBatchRequest &request)
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

void DnspodClient::CreateDomainBatchAsync(const CreateDomainBatchRequest& request, const CreateDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainBatchOutcomeCallable DnspodClient::CreateDomainBatchCallable(const CreateDomainBatchRequest &request)
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

DnspodClient::CreateDomainCustomLineOutcome DnspodClient::CreateDomainCustomLine(const CreateDomainCustomLineRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainCustomLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainCustomLineResponse rsp = CreateDomainCustomLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainCustomLineOutcome(rsp);
        else
            return CreateDomainCustomLineOutcome(o.GetError());
    }
    else
    {
        return CreateDomainCustomLineOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainCustomLineAsync(const CreateDomainCustomLineRequest& request, const CreateDomainCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainCustomLine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainCustomLineOutcomeCallable DnspodClient::CreateDomainCustomLineCallable(const CreateDomainCustomLineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainCustomLineOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainCustomLine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainGroupOutcome DnspodClient::CreateDomainGroup(const CreateDomainGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainGroupResponse rsp = CreateDomainGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainGroupOutcome(rsp);
        else
            return CreateDomainGroupOutcome(o.GetError());
    }
    else
    {
        return CreateDomainGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainGroupAsync(const CreateDomainGroupRequest& request, const CreateDomainGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainGroupOutcomeCallable DnspodClient::CreateDomainGroupCallable(const CreateDomainGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateDomainsAnalyticsFileOutcome DnspodClient::CreateDomainsAnalyticsFile(const CreateDomainsAnalyticsFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDomainsAnalyticsFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDomainsAnalyticsFileResponse rsp = CreateDomainsAnalyticsFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDomainsAnalyticsFileOutcome(rsp);
        else
            return CreateDomainsAnalyticsFileOutcome(o.GetError());
    }
    else
    {
        return CreateDomainsAnalyticsFileOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateDomainsAnalyticsFileAsync(const CreateDomainsAnalyticsFileRequest& request, const CreateDomainsAnalyticsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomainsAnalyticsFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateDomainsAnalyticsFileOutcomeCallable DnspodClient::CreateDomainsAnalyticsFileCallable(const CreateDomainsAnalyticsFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDomainsAnalyticsFileOutcome()>>(
        [this, request]()
        {
            return this->CreateDomainsAnalyticsFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateLineGroupOutcome DnspodClient::CreateLineGroup(const CreateLineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLineGroupResponse rsp = CreateLineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLineGroupOutcome(rsp);
        else
            return CreateLineGroupOutcome(o.GetError());
    }
    else
    {
        return CreateLineGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateLineGroupAsync(const CreateLineGroupRequest& request, const CreateLineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateLineGroupOutcomeCallable DnspodClient::CreateLineGroupCallable(const CreateLineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLineGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateLineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateLineGroupCopyOutcome DnspodClient::CreateLineGroupCopy(const CreateLineGroupCopyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLineGroupCopy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLineGroupCopyResponse rsp = CreateLineGroupCopyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLineGroupCopyOutcome(rsp);
        else
            return CreateLineGroupCopyOutcome(o.GetError());
    }
    else
    {
        return CreateLineGroupCopyOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateLineGroupCopyAsync(const CreateLineGroupCopyRequest& request, const CreateLineGroupCopyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLineGroupCopy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateLineGroupCopyOutcomeCallable DnspodClient::CreateLineGroupCopyCallable(const CreateLineGroupCopyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLineGroupCopyOutcome()>>(
        [this, request]()
        {
            return this->CreateLineGroupCopy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateRecordOutcome DnspodClient::CreateRecord(const CreateRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordResponse rsp = CreateRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordOutcome(rsp);
        else
            return CreateRecordOutcome(o.GetError());
    }
    else
    {
        return CreateRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordAsync(const CreateRecordRequest& request, const CreateRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateRecordOutcomeCallable DnspodClient::CreateRecordCallable(const CreateRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateRecordBatchOutcome DnspodClient::CreateRecordBatch(const CreateRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordBatchResponse rsp = CreateRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordBatchOutcome(rsp);
        else
            return CreateRecordBatchOutcome(o.GetError());
    }
    else
    {
        return CreateRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordBatchAsync(const CreateRecordBatchRequest& request, const CreateRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateRecordBatchOutcomeCallable DnspodClient::CreateRecordBatchCallable(const CreateRecordBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateRecordGroupOutcome DnspodClient::CreateRecordGroup(const CreateRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "CreateRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateRecordGroupResponse rsp = CreateRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateRecordGroupOutcome(rsp);
        else
            return CreateRecordGroupOutcome(o.GetError());
    }
    else
    {
        return CreateRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateRecordGroupAsync(const CreateRecordGroupRequest& request, const CreateRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateRecordGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateRecordGroupOutcomeCallable DnspodClient::CreateRecordGroupCallable(const CreateRecordGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateRecordGroupOutcome()>>(
        [this, request]()
        {
            return this->CreateRecordGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateSnapshotOutcome DnspodClient::CreateSnapshot(const CreateSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSnapshotResponse rsp = CreateSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSnapshotOutcome(rsp);
        else
            return CreateSnapshotOutcome(o.GetError());
    }
    else
    {
        return CreateSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateSnapshotAsync(const CreateSnapshotRequest& request, const CreateSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateSnapshotOutcomeCallable DnspodClient::CreateSnapshotCallable(const CreateSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSnapshotOutcome()>>(
        [this, request]()
        {
            return this->CreateSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateSubDomainsAnalyticsFileOutcome DnspodClient::CreateSubDomainsAnalyticsFile(const CreateSubDomainsAnalyticsFileRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubDomainsAnalyticsFile");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubDomainsAnalyticsFileResponse rsp = CreateSubDomainsAnalyticsFileResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubDomainsAnalyticsFileOutcome(rsp);
        else
            return CreateSubDomainsAnalyticsFileOutcome(o.GetError());
    }
    else
    {
        return CreateSubDomainsAnalyticsFileOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateSubDomainsAnalyticsFileAsync(const CreateSubDomainsAnalyticsFileRequest& request, const CreateSubDomainsAnalyticsFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubDomainsAnalyticsFile(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateSubDomainsAnalyticsFileOutcomeCallable DnspodClient::CreateSubDomainsAnalyticsFileCallable(const CreateSubDomainsAnalyticsFileRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubDomainsAnalyticsFileOutcome()>>(
        [this, request]()
        {
            return this->CreateSubDomainsAnalyticsFile(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateSubdomainValidateTXTValueOutcome DnspodClient::CreateSubdomainValidateTXTValue(const CreateSubdomainValidateTXTValueRequest &request)
{
    auto outcome = MakeRequest(request, "CreateSubdomainValidateTXTValue");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateSubdomainValidateTXTValueResponse rsp = CreateSubdomainValidateTXTValueResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateSubdomainValidateTXTValueOutcome(rsp);
        else
            return CreateSubdomainValidateTXTValueOutcome(o.GetError());
    }
    else
    {
        return CreateSubdomainValidateTXTValueOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateSubdomainValidateTXTValueAsync(const CreateSubdomainValidateTXTValueRequest& request, const CreateSubdomainValidateTXTValueAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateSubdomainValidateTXTValue(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateSubdomainValidateTXTValueOutcomeCallable DnspodClient::CreateSubdomainValidateTXTValueCallable(const CreateSubdomainValidateTXTValueRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateSubdomainValidateTXTValueOutcome()>>(
        [this, request]()
        {
            return this->CreateSubdomainValidateTXTValue(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::CreateTXTRecordOutcome DnspodClient::CreateTXTRecord(const CreateTXTRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTXTRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTXTRecordResponse rsp = CreateTXTRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTXTRecordOutcome(rsp);
        else
            return CreateTXTRecordOutcome(o.GetError());
    }
    else
    {
        return CreateTXTRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::CreateTXTRecordAsync(const CreateTXTRecordRequest& request, const CreateTXTRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTXTRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::CreateTXTRecordOutcomeCallable DnspodClient::CreateTXTRecordCallable(const CreateTXTRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTXTRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateTXTRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainOutcome DnspodClient::DeleteDomain(const DeleteDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainResponse rsp = DeleteDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainOutcome(rsp);
        else
            return DeleteDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainOutcomeCallable DnspodClient::DeleteDomainCallable(const DeleteDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainAliasOutcome DnspodClient::DeleteDomainAlias(const DeleteDomainAliasRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainAlias");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainAliasResponse rsp = DeleteDomainAliasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainAliasOutcome(rsp);
        else
            return DeleteDomainAliasOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainAliasOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainAliasAsync(const DeleteDomainAliasRequest& request, const DeleteDomainAliasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainAlias(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainAliasOutcomeCallable DnspodClient::DeleteDomainAliasCallable(const DeleteDomainAliasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainAliasOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainAlias(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainBatchOutcome DnspodClient::DeleteDomainBatch(const DeleteDomainBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainBatchResponse rsp = DeleteDomainBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainBatchOutcome(rsp);
        else
            return DeleteDomainBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainBatchAsync(const DeleteDomainBatchRequest& request, const DeleteDomainBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainBatchOutcomeCallable DnspodClient::DeleteDomainBatchCallable(const DeleteDomainBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainBatchOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteDomainCustomLineOutcome DnspodClient::DeleteDomainCustomLine(const DeleteDomainCustomLineRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDomainCustomLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDomainCustomLineResponse rsp = DeleteDomainCustomLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDomainCustomLineOutcome(rsp);
        else
            return DeleteDomainCustomLineOutcome(o.GetError());
    }
    else
    {
        return DeleteDomainCustomLineOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteDomainCustomLineAsync(const DeleteDomainCustomLineRequest& request, const DeleteDomainCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomainCustomLine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteDomainCustomLineOutcomeCallable DnspodClient::DeleteDomainCustomLineCallable(const DeleteDomainCustomLineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDomainCustomLineOutcome()>>(
        [this, request]()
        {
            return this->DeleteDomainCustomLine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteLineGroupOutcome DnspodClient::DeleteLineGroup(const DeleteLineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLineGroupResponse rsp = DeleteLineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLineGroupOutcome(rsp);
        else
            return DeleteLineGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteLineGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteLineGroupAsync(const DeleteLineGroupRequest& request, const DeleteLineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteLineGroupOutcomeCallable DnspodClient::DeleteLineGroupCallable(const DeleteLineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLineGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteLineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteRecordOutcome DnspodClient::DeleteRecord(const DeleteRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordResponse rsp = DeleteRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordOutcome(rsp);
        else
            return DeleteRecordOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordAsync(const DeleteRecordRequest& request, const DeleteRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteRecordOutcomeCallable DnspodClient::DeleteRecordCallable(const DeleteRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteRecordBatchOutcome DnspodClient::DeleteRecordBatch(const DeleteRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordBatchResponse rsp = DeleteRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordBatchOutcome(rsp);
        else
            return DeleteRecordBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordBatchAsync(const DeleteRecordBatchRequest& request, const DeleteRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteRecordBatchOutcomeCallable DnspodClient::DeleteRecordBatchCallable(const DeleteRecordBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordBatchOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteRecordGroupOutcome DnspodClient::DeleteRecordGroup(const DeleteRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteRecordGroupResponse rsp = DeleteRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteRecordGroupOutcome(rsp);
        else
            return DeleteRecordGroupOutcome(o.GetError());
    }
    else
    {
        return DeleteRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteRecordGroupAsync(const DeleteRecordGroupRequest& request, const DeleteRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteRecordGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteRecordGroupOutcomeCallable DnspodClient::DeleteRecordGroupCallable(const DeleteRecordGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteRecordGroupOutcome()>>(
        [this, request]()
        {
            return this->DeleteRecordGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteShareDomainOutcome DnspodClient::DeleteShareDomain(const DeleteShareDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteShareDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteShareDomainResponse rsp = DeleteShareDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteShareDomainOutcome(rsp);
        else
            return DeleteShareDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteShareDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteShareDomainAsync(const DeleteShareDomainRequest& request, const DeleteShareDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteShareDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteShareDomainOutcomeCallable DnspodClient::DeleteShareDomainCallable(const DeleteShareDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteShareDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteShareDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DeleteSnapshotOutcome DnspodClient::DeleteSnapshot(const DeleteSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteSnapshotResponse rsp = DeleteSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteSnapshotOutcome(rsp);
        else
            return DeleteSnapshotOutcome(o.GetError());
    }
    else
    {
        return DeleteSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::DeleteSnapshotAsync(const DeleteSnapshotRequest& request, const DeleteSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DeleteSnapshotOutcomeCallable DnspodClient::DeleteSnapshotCallable(const DeleteSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DeleteSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeBatchTaskOutcome DnspodClient::DescribeBatchTask(const DescribeBatchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBatchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBatchTaskResponse rsp = DescribeBatchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBatchTaskOutcome(rsp);
        else
            return DescribeBatchTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeBatchTaskOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeBatchTaskAsync(const DescribeBatchTaskRequest& request, const DescribeBatchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBatchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeBatchTaskOutcomeCallable DnspodClient::DescribeBatchTaskCallable(const DescribeBatchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBatchTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeBatchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainOutcome DnspodClient::DescribeDomain(const DescribeDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainResponse rsp = DescribeDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainOutcome(rsp);
        else
            return DescribeDomainOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAsync(const DescribeDomainRequest& request, const DescribeDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainOutcomeCallable DnspodClient::DescribeDomainCallable(const DescribeDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainAliasListOutcome DnspodClient::DescribeDomainAliasList(const DescribeDomainAliasListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAliasList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAliasListResponse rsp = DescribeDomainAliasListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAliasListOutcome(rsp);
        else
            return DescribeDomainAliasListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAliasListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAliasListAsync(const DescribeDomainAliasListRequest& request, const DescribeDomainAliasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAliasList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainAliasListOutcomeCallable DnspodClient::DescribeDomainAliasListCallable(const DescribeDomainAliasListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAliasListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAliasList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainAnalyticsOutcome DnspodClient::DescribeDomainAnalytics(const DescribeDomainAnalyticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAnalytics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAnalyticsResponse rsp = DescribeDomainAnalyticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAnalyticsOutcome(rsp);
        else
            return DescribeDomainAnalyticsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAnalyticsOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAnalyticsAsync(const DescribeDomainAnalyticsRequest& request, const DescribeDomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAnalytics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainAnalyticsOutcomeCallable DnspodClient::DescribeDomainAnalyticsCallable(const DescribeDomainAnalyticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAnalyticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAnalytics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainAndRecordListOutcome DnspodClient::DescribeDomainAndRecordList(const DescribeDomainAndRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainAndRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainAndRecordListResponse rsp = DescribeDomainAndRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainAndRecordListOutcome(rsp);
        else
            return DescribeDomainAndRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainAndRecordListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainAndRecordListAsync(const DescribeDomainAndRecordListRequest& request, const DescribeDomainAndRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainAndRecordList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainAndRecordListOutcomeCallable DnspodClient::DescribeDomainAndRecordListCallable(const DescribeDomainAndRecordListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainAndRecordListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainAndRecordList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainCustomLineListOutcome DnspodClient::DescribeDomainCustomLineList(const DescribeDomainCustomLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainCustomLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainCustomLineListResponse rsp = DescribeDomainCustomLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainCustomLineListOutcome(rsp);
        else
            return DescribeDomainCustomLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainCustomLineListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainCustomLineListAsync(const DescribeDomainCustomLineListRequest& request, const DescribeDomainCustomLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainCustomLineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainCustomLineListOutcomeCallable DnspodClient::DescribeDomainCustomLineListCallable(const DescribeDomainCustomLineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainCustomLineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainCustomLineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainFilterListOutcome DnspodClient::DescribeDomainFilterList(const DescribeDomainFilterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainFilterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainFilterListResponse rsp = DescribeDomainFilterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainFilterListOutcome(rsp);
        else
            return DescribeDomainFilterListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainFilterListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainFilterListAsync(const DescribeDomainFilterListRequest& request, const DescribeDomainFilterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainFilterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainFilterListOutcomeCallable DnspodClient::DescribeDomainFilterListCallable(const DescribeDomainFilterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainFilterListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainFilterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainGroupListOutcome DnspodClient::DescribeDomainGroupList(const DescribeDomainGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainGroupListResponse rsp = DescribeDomainGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainGroupListOutcome(rsp);
        else
            return DescribeDomainGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainGroupListAsync(const DescribeDomainGroupListRequest& request, const DescribeDomainGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainGroupListOutcomeCallable DnspodClient::DescribeDomainGroupListCallable(const DescribeDomainGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainListOutcome DnspodClient::DescribeDomainList(const DescribeDomainListRequest &request)
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

void DnspodClient::DescribeDomainListAsync(const DescribeDomainListRequest& request, const DescribeDomainListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainListOutcomeCallable DnspodClient::DescribeDomainListCallable(const DescribeDomainListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainLogListOutcome DnspodClient::DescribeDomainLogList(const DescribeDomainLogListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainLogList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainLogListResponse rsp = DescribeDomainLogListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainLogListOutcome(rsp);
        else
            return DescribeDomainLogListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainLogListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainLogListAsync(const DescribeDomainLogListRequest& request, const DescribeDomainLogListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainLogList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainLogListOutcomeCallable DnspodClient::DescribeDomainLogListCallable(const DescribeDomainLogListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainLogListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainLogList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainPreviewOutcome DnspodClient::DescribeDomainPreview(const DescribeDomainPreviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPreview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPreviewResponse rsp = DescribeDomainPreviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPreviewOutcome(rsp);
        else
            return DescribeDomainPreviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPreviewOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainPreviewAsync(const DescribeDomainPreviewRequest& request, const DescribeDomainPreviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainPreview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainPreviewOutcomeCallable DnspodClient::DescribeDomainPreviewCallable(const DescribeDomainPreviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainPreviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainPreview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainPurviewOutcome DnspodClient::DescribeDomainPurview(const DescribeDomainPurviewRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainPurview");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainPurviewResponse rsp = DescribeDomainPurviewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainPurviewOutcome(rsp);
        else
            return DescribeDomainPurviewOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainPurviewOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainPurviewAsync(const DescribeDomainPurviewRequest& request, const DescribeDomainPurviewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainPurview(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainPurviewOutcomeCallable DnspodClient::DescribeDomainPurviewCallable(const DescribeDomainPurviewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainPurviewOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainPurview(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainShareInfoOutcome DnspodClient::DescribeDomainShareInfo(const DescribeDomainShareInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainShareInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainShareInfoResponse rsp = DescribeDomainShareInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainShareInfoOutcome(rsp);
        else
            return DescribeDomainShareInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainShareInfoOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainShareInfoAsync(const DescribeDomainShareInfoRequest& request, const DescribeDomainShareInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainShareInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainShareInfoOutcomeCallable DnspodClient::DescribeDomainShareInfoCallable(const DescribeDomainShareInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainShareInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainShareInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainShareUserListOutcome DnspodClient::DescribeDomainShareUserList(const DescribeDomainShareUserListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainShareUserList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainShareUserListResponse rsp = DescribeDomainShareUserListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainShareUserListOutcome(rsp);
        else
            return DescribeDomainShareUserListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainShareUserListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainShareUserListAsync(const DescribeDomainShareUserListRequest& request, const DescribeDomainShareUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainShareUserList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainShareUserListOutcomeCallable DnspodClient::DescribeDomainShareUserListCallable(const DescribeDomainShareUserListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainShareUserListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainShareUserList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainVipListOutcome DnspodClient::DescribeDomainVipList(const DescribeDomainVipListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainVipList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainVipListResponse rsp = DescribeDomainVipListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainVipListOutcome(rsp);
        else
            return DescribeDomainVipListOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainVipListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainVipListAsync(const DescribeDomainVipListRequest& request, const DescribeDomainVipListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainVipList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainVipListOutcomeCallable DnspodClient::DescribeDomainVipListCallable(const DescribeDomainVipListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainVipListOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainVipList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeDomainWhoisOutcome DnspodClient::DescribeDomainWhois(const DescribeDomainWhoisRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainWhois");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainWhoisResponse rsp = DescribeDomainWhoisResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainWhoisOutcome(rsp);
        else
            return DescribeDomainWhoisOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainWhoisOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeDomainWhoisAsync(const DescribeDomainWhoisRequest& request, const DescribeDomainWhoisAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainWhois(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeDomainWhoisOutcomeCallable DnspodClient::DescribeDomainWhoisCallable(const DescribeDomainWhoisRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainWhoisOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainWhois(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeFileInfoByJobIdOutcome DnspodClient::DescribeFileInfoByJobId(const DescribeFileInfoByJobIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFileInfoByJobId");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFileInfoByJobIdResponse rsp = DescribeFileInfoByJobIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFileInfoByJobIdOutcome(rsp);
        else
            return DescribeFileInfoByJobIdOutcome(o.GetError());
    }
    else
    {
        return DescribeFileInfoByJobIdOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeFileInfoByJobIdAsync(const DescribeFileInfoByJobIdRequest& request, const DescribeFileInfoByJobIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFileInfoByJobId(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeFileInfoByJobIdOutcomeCallable DnspodClient::DescribeFileInfoByJobIdCallable(const DescribeFileInfoByJobIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFileInfoByJobIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeFileInfoByJobId(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeLineGroupListOutcome DnspodClient::DescribeLineGroupList(const DescribeLineGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLineGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLineGroupListResponse rsp = DescribeLineGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLineGroupListOutcome(rsp);
        else
            return DescribeLineGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeLineGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeLineGroupListAsync(const DescribeLineGroupListRequest& request, const DescribeLineGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLineGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeLineGroupListOutcomeCallable DnspodClient::DescribeLineGroupListCallable(const DescribeLineGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLineGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLineGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribePackageDetailOutcome DnspodClient::DescribePackageDetail(const DescribePackageDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePackageDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePackageDetailResponse rsp = DescribePackageDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePackageDetailOutcome(rsp);
        else
            return DescribePackageDetailOutcome(o.GetError());
    }
    else
    {
        return DescribePackageDetailOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribePackageDetailAsync(const DescribePackageDetailRequest& request, const DescribePackageDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePackageDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribePackageDetailOutcomeCallable DnspodClient::DescribePackageDetailCallable(const DescribePackageDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePackageDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribePackageDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordOutcome DnspodClient::DescribeRecord(const DescribeRecordRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordResponse rsp = DescribeRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordOutcome(rsp);
        else
            return DescribeRecordOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordAsync(const DescribeRecordRequest& request, const DescribeRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordOutcomeCallable DnspodClient::DescribeRecordCallable(const DescribeRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordExistExceptDefaultNSOutcome DnspodClient::DescribeRecordExistExceptDefaultNS(const DescribeRecordExistExceptDefaultNSRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordExistExceptDefaultNS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordExistExceptDefaultNSResponse rsp = DescribeRecordExistExceptDefaultNSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordExistExceptDefaultNSOutcome(rsp);
        else
            return DescribeRecordExistExceptDefaultNSOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordExistExceptDefaultNSOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordExistExceptDefaultNSAsync(const DescribeRecordExistExceptDefaultNSRequest& request, const DescribeRecordExistExceptDefaultNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordExistExceptDefaultNS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordExistExceptDefaultNSOutcomeCallable DnspodClient::DescribeRecordExistExceptDefaultNSCallable(const DescribeRecordExistExceptDefaultNSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordExistExceptDefaultNSOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordExistExceptDefaultNS(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordFilterListOutcome DnspodClient::DescribeRecordFilterList(const DescribeRecordFilterListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordFilterList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordFilterListResponse rsp = DescribeRecordFilterListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordFilterListOutcome(rsp);
        else
            return DescribeRecordFilterListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordFilterListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordFilterListAsync(const DescribeRecordFilterListRequest& request, const DescribeRecordFilterListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordFilterList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordFilterListOutcomeCallable DnspodClient::DescribeRecordFilterListCallable(const DescribeRecordFilterListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordFilterListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordFilterList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordGroupListOutcome DnspodClient::DescribeRecordGroupList(const DescribeRecordGroupListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordGroupList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordGroupListResponse rsp = DescribeRecordGroupListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordGroupListOutcome(rsp);
        else
            return DescribeRecordGroupListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordGroupListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordGroupListAsync(const DescribeRecordGroupListRequest& request, const DescribeRecordGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordGroupList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordGroupListOutcomeCallable DnspodClient::DescribeRecordGroupListCallable(const DescribeRecordGroupListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordGroupListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordGroupList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordLineCategoryListOutcome DnspodClient::DescribeRecordLineCategoryList(const DescribeRecordLineCategoryListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineCategoryList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineCategoryListResponse rsp = DescribeRecordLineCategoryListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineCategoryListOutcome(rsp);
        else
            return DescribeRecordLineCategoryListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineCategoryListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineCategoryListAsync(const DescribeRecordLineCategoryListRequest& request, const DescribeRecordLineCategoryListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordLineCategoryList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordLineCategoryListOutcomeCallable DnspodClient::DescribeRecordLineCategoryListCallable(const DescribeRecordLineCategoryListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordLineCategoryListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordLineCategoryList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordLineListOutcome DnspodClient::DescribeRecordLineList(const DescribeRecordLineListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordLineList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordLineListResponse rsp = DescribeRecordLineListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordLineListOutcome(rsp);
        else
            return DescribeRecordLineListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordLineListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordLineListAsync(const DescribeRecordLineListRequest& request, const DescribeRecordLineListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordLineList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordLineListOutcomeCallable DnspodClient::DescribeRecordLineListCallable(const DescribeRecordLineListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordLineListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordLineList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordListOutcome DnspodClient::DescribeRecordList(const DescribeRecordListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordListResponse rsp = DescribeRecordListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordListOutcome(rsp);
        else
            return DescribeRecordListOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordListAsync(const DescribeRecordListRequest& request, const DescribeRecordListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordListOutcomeCallable DnspodClient::DescribeRecordListCallable(const DescribeRecordListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordListOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordSnapshotRollbackResultOutcome DnspodClient::DescribeRecordSnapshotRollbackResult(const DescribeRecordSnapshotRollbackResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordSnapshotRollbackResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordSnapshotRollbackResultResponse rsp = DescribeRecordSnapshotRollbackResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordSnapshotRollbackResultOutcome(rsp);
        else
            return DescribeRecordSnapshotRollbackResultOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordSnapshotRollbackResultOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordSnapshotRollbackResultAsync(const DescribeRecordSnapshotRollbackResultRequest& request, const DescribeRecordSnapshotRollbackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordSnapshotRollbackResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordSnapshotRollbackResultOutcomeCallable DnspodClient::DescribeRecordSnapshotRollbackResultCallable(const DescribeRecordSnapshotRollbackResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordSnapshotRollbackResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordSnapshotRollbackResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeRecordTypeOutcome DnspodClient::DescribeRecordType(const DescribeRecordTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeRecordType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeRecordTypeResponse rsp = DescribeRecordTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeRecordTypeOutcome(rsp);
        else
            return DescribeRecordTypeOutcome(o.GetError());
    }
    else
    {
        return DescribeRecordTypeOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeRecordTypeAsync(const DescribeRecordTypeRequest& request, const DescribeRecordTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeRecordType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeRecordTypeOutcomeCallable DnspodClient::DescribeRecordTypeCallable(const DescribeRecordTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeRecordTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribeRecordType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSnapshotConfigOutcome DnspodClient::DescribeSnapshotConfig(const DescribeSnapshotConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotConfigResponse rsp = DescribeSnapshotConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotConfigOutcome(rsp);
        else
            return DescribeSnapshotConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotConfigOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotConfigAsync(const DescribeSnapshotConfigRequest& request, const DescribeSnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSnapshotConfigOutcomeCallable DnspodClient::DescribeSnapshotConfigCallable(const DescribeSnapshotConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSnapshotListOutcome DnspodClient::DescribeSnapshotList(const DescribeSnapshotListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotListResponse rsp = DescribeSnapshotListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotListOutcome(rsp);
        else
            return DescribeSnapshotListOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotListAsync(const DescribeSnapshotListRequest& request, const DescribeSnapshotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSnapshotListOutcomeCallable DnspodClient::DescribeSnapshotListCallable(const DescribeSnapshotListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSnapshotRollbackResultOutcome DnspodClient::DescribeSnapshotRollbackResult(const DescribeSnapshotRollbackResultRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotRollbackResult");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotRollbackResultResponse rsp = DescribeSnapshotRollbackResultResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotRollbackResultOutcome(rsp);
        else
            return DescribeSnapshotRollbackResultOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotRollbackResultOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotRollbackResultAsync(const DescribeSnapshotRollbackResultRequest& request, const DescribeSnapshotRollbackResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotRollbackResult(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSnapshotRollbackResultOutcomeCallable DnspodClient::DescribeSnapshotRollbackResultCallable(const DescribeSnapshotRollbackResultRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotRollbackResultOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotRollbackResult(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSnapshotRollbackTaskOutcome DnspodClient::DescribeSnapshotRollbackTask(const DescribeSnapshotRollbackTaskRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSnapshotRollbackTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSnapshotRollbackTaskResponse rsp = DescribeSnapshotRollbackTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSnapshotRollbackTaskOutcome(rsp);
        else
            return DescribeSnapshotRollbackTaskOutcome(o.GetError());
    }
    else
    {
        return DescribeSnapshotRollbackTaskOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSnapshotRollbackTaskAsync(const DescribeSnapshotRollbackTaskRequest& request, const DescribeSnapshotRollbackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSnapshotRollbackTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSnapshotRollbackTaskOutcomeCallable DnspodClient::DescribeSnapshotRollbackTaskCallable(const DescribeSnapshotRollbackTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSnapshotRollbackTaskOutcome()>>(
        [this, request]()
        {
            return this->DescribeSnapshotRollbackTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSubdomainAnalyticsOutcome DnspodClient::DescribeSubdomainAnalytics(const DescribeSubdomainAnalyticsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubdomainAnalytics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubdomainAnalyticsResponse rsp = DescribeSubdomainAnalyticsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubdomainAnalyticsOutcome(rsp);
        else
            return DescribeSubdomainAnalyticsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubdomainAnalyticsOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSubdomainAnalyticsAsync(const DescribeSubdomainAnalyticsRequest& request, const DescribeSubdomainAnalyticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubdomainAnalytics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSubdomainAnalyticsOutcomeCallable DnspodClient::DescribeSubdomainAnalyticsCallable(const DescribeSubdomainAnalyticsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubdomainAnalyticsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubdomainAnalytics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeSubdomainValidateStatusOutcome DnspodClient::DescribeSubdomainValidateStatus(const DescribeSubdomainValidateStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubdomainValidateStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubdomainValidateStatusResponse rsp = DescribeSubdomainValidateStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubdomainValidateStatusOutcome(rsp);
        else
            return DescribeSubdomainValidateStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeSubdomainValidateStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeSubdomainValidateStatusAsync(const DescribeSubdomainValidateStatusRequest& request, const DescribeSubdomainValidateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubdomainValidateStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeSubdomainValidateStatusOutcomeCallable DnspodClient::DescribeSubdomainValidateStatusCallable(const DescribeSubdomainValidateStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubdomainValidateStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubdomainValidateStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeUserDetailOutcome DnspodClient::DescribeUserDetail(const DescribeUserDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserDetailResponse rsp = DescribeUserDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserDetailOutcome(rsp);
        else
            return DescribeUserDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeUserDetailOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeUserDetailAsync(const DescribeUserDetailRequest& request, const DescribeUserDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeUserDetailOutcomeCallable DnspodClient::DescribeUserDetailCallable(const DescribeUserDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeVASStatisticOutcome DnspodClient::DescribeVASStatistic(const DescribeVASStatisticRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVASStatistic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVASStatisticResponse rsp = DescribeVASStatisticResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVASStatisticOutcome(rsp);
        else
            return DescribeVASStatisticOutcome(o.GetError());
    }
    else
    {
        return DescribeVASStatisticOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeVASStatisticAsync(const DescribeVASStatisticRequest& request, const DescribeVASStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVASStatistic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeVASStatisticOutcomeCallable DnspodClient::DescribeVASStatisticCallable(const DescribeVASStatisticRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVASStatisticOutcome()>>(
        [this, request]()
        {
            return this->DescribeVASStatistic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DescribeVasListOutcome DnspodClient::DescribeVasList(const DescribeVasListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVasList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVasListResponse rsp = DescribeVasListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVasListOutcome(rsp);
        else
            return DescribeVasListOutcome(o.GetError());
    }
    else
    {
        return DescribeVasListOutcome(outcome.GetError());
    }
}

void DnspodClient::DescribeVasListAsync(const DescribeVasListRequest& request, const DescribeVasListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVasList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DescribeVasListOutcomeCallable DnspodClient::DescribeVasListCallable(const DescribeVasListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVasListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVasList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::DownloadSnapshotOutcome DnspodClient::DownloadSnapshot(const DownloadSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadSnapshotResponse rsp = DownloadSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadSnapshotOutcome(rsp);
        else
            return DownloadSnapshotOutcome(o.GetError());
    }
    else
    {
        return DownloadSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::DownloadSnapshotAsync(const DownloadSnapshotRequest& request, const DownloadSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::DownloadSnapshotOutcomeCallable DnspodClient::DownloadSnapshotCallable(const DownloadSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadSnapshotOutcome()>>(
        [this, request]()
        {
            return this->DownloadSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainCustomLineOutcome DnspodClient::ModifyDomainCustomLine(const ModifyDomainCustomLineRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainCustomLine");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainCustomLineResponse rsp = ModifyDomainCustomLineResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainCustomLineOutcome(rsp);
        else
            return ModifyDomainCustomLineOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainCustomLineOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainCustomLineAsync(const ModifyDomainCustomLineRequest& request, const ModifyDomainCustomLineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainCustomLine(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainCustomLineOutcomeCallable DnspodClient::ModifyDomainCustomLineCallable(const ModifyDomainCustomLineRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainCustomLineOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainCustomLine(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainLockOutcome DnspodClient::ModifyDomainLock(const ModifyDomainLockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainLock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainLockResponse rsp = ModifyDomainLockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainLockOutcome(rsp);
        else
            return ModifyDomainLockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainLockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainLockAsync(const ModifyDomainLockRequest& request, const ModifyDomainLockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainLock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainLockOutcomeCallable DnspodClient::ModifyDomainLockCallable(const ModifyDomainLockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainLockOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainLock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainOwnerOutcome DnspodClient::ModifyDomainOwner(const ModifyDomainOwnerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainOwner");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainOwnerResponse rsp = ModifyDomainOwnerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainOwnerOutcome(rsp);
        else
            return ModifyDomainOwnerOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainOwnerOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainOwnerAsync(const ModifyDomainOwnerRequest& request, const ModifyDomainOwnerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainOwner(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainOwnerOutcomeCallable DnspodClient::ModifyDomainOwnerCallable(const ModifyDomainOwnerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainOwnerOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainOwner(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainRemarkOutcome DnspodClient::ModifyDomainRemark(const ModifyDomainRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainRemarkResponse rsp = ModifyDomainRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainRemarkOutcome(rsp);
        else
            return ModifyDomainRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainRemarkAsync(const ModifyDomainRemarkRequest& request, const ModifyDomainRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainRemarkOutcomeCallable DnspodClient::ModifyDomainRemarkCallable(const ModifyDomainRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainStatusOutcome DnspodClient::ModifyDomainStatus(const ModifyDomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainStatusResponse rsp = ModifyDomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainStatusOutcome(rsp);
        else
            return ModifyDomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainStatusAsync(const ModifyDomainStatusRequest& request, const ModifyDomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainStatusOutcomeCallable DnspodClient::ModifyDomainStatusCallable(const ModifyDomainStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainToGroupOutcome DnspodClient::ModifyDomainToGroup(const ModifyDomainToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainToGroupResponse rsp = ModifyDomainToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainToGroupOutcome(rsp);
        else
            return ModifyDomainToGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainToGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainToGroupAsync(const ModifyDomainToGroupRequest& request, const ModifyDomainToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainToGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainToGroupOutcomeCallable DnspodClient::ModifyDomainToGroupCallable(const ModifyDomainToGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainToGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainToGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDomainUnlockOutcome DnspodClient::ModifyDomainUnlock(const ModifyDomainUnlockRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainUnlock");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainUnlockResponse rsp = ModifyDomainUnlockResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainUnlockOutcome(rsp);
        else
            return ModifyDomainUnlockOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainUnlockOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDomainUnlockAsync(const ModifyDomainUnlockRequest& request, const ModifyDomainUnlockAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainUnlock(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDomainUnlockOutcomeCallable DnspodClient::ModifyDomainUnlockCallable(const ModifyDomainUnlockRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainUnlockOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainUnlock(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyDynamicDNSOutcome DnspodClient::ModifyDynamicDNS(const ModifyDynamicDNSRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDynamicDNS");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDynamicDNSResponse rsp = ModifyDynamicDNSResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDynamicDNSOutcome(rsp);
        else
            return ModifyDynamicDNSOutcome(o.GetError());
    }
    else
    {
        return ModifyDynamicDNSOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyDynamicDNSAsync(const ModifyDynamicDNSRequest& request, const ModifyDynamicDNSAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDynamicDNS(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyDynamicDNSOutcomeCallable DnspodClient::ModifyDynamicDNSCallable(const ModifyDynamicDNSRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDynamicDNSOutcome()>>(
        [this, request]()
        {
            return this->ModifyDynamicDNS(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyLineGroupOutcome DnspodClient::ModifyLineGroup(const ModifyLineGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLineGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLineGroupResponse rsp = ModifyLineGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLineGroupOutcome(rsp);
        else
            return ModifyLineGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyLineGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyLineGroupAsync(const ModifyLineGroupRequest& request, const ModifyLineGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLineGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyLineGroupOutcomeCallable DnspodClient::ModifyLineGroupCallable(const ModifyLineGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLineGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyLineGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyPackageAutoRenewOutcome DnspodClient::ModifyPackageAutoRenew(const ModifyPackageAutoRenewRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPackageAutoRenew");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPackageAutoRenewResponse rsp = ModifyPackageAutoRenewResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPackageAutoRenewOutcome(rsp);
        else
            return ModifyPackageAutoRenewOutcome(o.GetError());
    }
    else
    {
        return ModifyPackageAutoRenewOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyPackageAutoRenewAsync(const ModifyPackageAutoRenewRequest& request, const ModifyPackageAutoRenewAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPackageAutoRenew(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyPackageAutoRenewOutcomeCallable DnspodClient::ModifyPackageAutoRenewCallable(const ModifyPackageAutoRenewRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPackageAutoRenewOutcome()>>(
        [this, request]()
        {
            return this->ModifyPackageAutoRenew(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordOutcome DnspodClient::ModifyRecord(const ModifyRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordResponse rsp = ModifyRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordOutcome(rsp);
        else
            return ModifyRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordAsync(const ModifyRecordRequest& request, const ModifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordOutcomeCallable DnspodClient::ModifyRecordCallable(const ModifyRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordBatchOutcome DnspodClient::ModifyRecordBatch(const ModifyRecordBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordBatchResponse rsp = ModifyRecordBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordBatchOutcome(rsp);
        else
            return ModifyRecordBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordBatchOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordBatchAsync(const ModifyRecordBatchRequest& request, const ModifyRecordBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordBatchOutcomeCallable DnspodClient::ModifyRecordBatchCallable(const ModifyRecordBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordFieldsOutcome DnspodClient::ModifyRecordFields(const ModifyRecordFieldsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordFields");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordFieldsResponse rsp = ModifyRecordFieldsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordFieldsOutcome(rsp);
        else
            return ModifyRecordFieldsOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordFieldsOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordFieldsAsync(const ModifyRecordFieldsRequest& request, const ModifyRecordFieldsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordFields(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordFieldsOutcomeCallable DnspodClient::ModifyRecordFieldsCallable(const ModifyRecordFieldsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordFieldsOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordFields(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordGroupOutcome DnspodClient::ModifyRecordGroup(const ModifyRecordGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordGroupResponse rsp = ModifyRecordGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordGroupOutcome(rsp);
        else
            return ModifyRecordGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordGroupAsync(const ModifyRecordGroupRequest& request, const ModifyRecordGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordGroupOutcomeCallable DnspodClient::ModifyRecordGroupCallable(const ModifyRecordGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordRemarkOutcome DnspodClient::ModifyRecordRemark(const ModifyRecordRemarkRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordRemark");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordRemarkResponse rsp = ModifyRecordRemarkResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordRemarkOutcome(rsp);
        else
            return ModifyRecordRemarkOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordRemarkOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordRemarkAsync(const ModifyRecordRemarkRequest& request, const ModifyRecordRemarkAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordRemark(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordRemarkOutcomeCallable DnspodClient::ModifyRecordRemarkCallable(const ModifyRecordRemarkRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordRemarkOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordRemark(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordStatusOutcome DnspodClient::ModifyRecordStatus(const ModifyRecordStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordStatusResponse rsp = ModifyRecordStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordStatusOutcome(rsp);
        else
            return ModifyRecordStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordStatusAsync(const ModifyRecordStatusRequest& request, const ModifyRecordStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordStatusOutcomeCallable DnspodClient::ModifyRecordStatusCallable(const ModifyRecordStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyRecordToGroupOutcome DnspodClient::ModifyRecordToGroup(const ModifyRecordToGroupRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyRecordToGroup");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyRecordToGroupResponse rsp = ModifyRecordToGroupResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyRecordToGroupOutcome(rsp);
        else
            return ModifyRecordToGroupOutcome(o.GetError());
    }
    else
    {
        return ModifyRecordToGroupOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyRecordToGroupAsync(const ModifyRecordToGroupRequest& request, const ModifyRecordToGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyRecordToGroup(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyRecordToGroupOutcomeCallable DnspodClient::ModifyRecordToGroupCallable(const ModifyRecordToGroupRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyRecordToGroupOutcome()>>(
        [this, request]()
        {
            return this->ModifyRecordToGroup(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifySnapshotConfigOutcome DnspodClient::ModifySnapshotConfig(const ModifySnapshotConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySnapshotConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySnapshotConfigResponse rsp = ModifySnapshotConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySnapshotConfigOutcome(rsp);
        else
            return ModifySnapshotConfigOutcome(o.GetError());
    }
    else
    {
        return ModifySnapshotConfigOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifySnapshotConfigAsync(const ModifySnapshotConfigRequest& request, const ModifySnapshotConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySnapshotConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifySnapshotConfigOutcomeCallable DnspodClient::ModifySnapshotConfigCallable(const ModifySnapshotConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySnapshotConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifySnapshotConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifySubdomainStatusOutcome DnspodClient::ModifySubdomainStatus(const ModifySubdomainStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifySubdomainStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifySubdomainStatusResponse rsp = ModifySubdomainStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifySubdomainStatusOutcome(rsp);
        else
            return ModifySubdomainStatusOutcome(o.GetError());
    }
    else
    {
        return ModifySubdomainStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifySubdomainStatusAsync(const ModifySubdomainStatusRequest& request, const ModifySubdomainStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifySubdomainStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifySubdomainStatusOutcomeCallable DnspodClient::ModifySubdomainStatusCallable(const ModifySubdomainStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifySubdomainStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifySubdomainStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyTXTRecordOutcome DnspodClient::ModifyTXTRecord(const ModifyTXTRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTXTRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTXTRecordResponse rsp = ModifyTXTRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTXTRecordOutcome(rsp);
        else
            return ModifyTXTRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyTXTRecordOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyTXTRecordAsync(const ModifyTXTRecordRequest& request, const ModifyTXTRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTXTRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyTXTRecordOutcomeCallable DnspodClient::ModifyTXTRecordCallable(const ModifyTXTRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTXTRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyTXTRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::ModifyVasAutoRenewStatusOutcome DnspodClient::ModifyVasAutoRenewStatus(const ModifyVasAutoRenewStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyVasAutoRenewStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyVasAutoRenewStatusResponse rsp = ModifyVasAutoRenewStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyVasAutoRenewStatusOutcome(rsp);
        else
            return ModifyVasAutoRenewStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyVasAutoRenewStatusOutcome(outcome.GetError());
    }
}

void DnspodClient::ModifyVasAutoRenewStatusAsync(const ModifyVasAutoRenewStatusRequest& request, const ModifyVasAutoRenewStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyVasAutoRenewStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::ModifyVasAutoRenewStatusOutcomeCallable DnspodClient::ModifyVasAutoRenewStatusCallable(const ModifyVasAutoRenewStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyVasAutoRenewStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyVasAutoRenewStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::PayOrderWithBalanceOutcome DnspodClient::PayOrderWithBalance(const PayOrderWithBalanceRequest &request)
{
    auto outcome = MakeRequest(request, "PayOrderWithBalance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PayOrderWithBalanceResponse rsp = PayOrderWithBalanceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PayOrderWithBalanceOutcome(rsp);
        else
            return PayOrderWithBalanceOutcome(o.GetError());
    }
    else
    {
        return PayOrderWithBalanceOutcome(outcome.GetError());
    }
}

void DnspodClient::PayOrderWithBalanceAsync(const PayOrderWithBalanceRequest& request, const PayOrderWithBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PayOrderWithBalance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::PayOrderWithBalanceOutcomeCallable DnspodClient::PayOrderWithBalanceCallable(const PayOrderWithBalanceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PayOrderWithBalanceOutcome()>>(
        [this, request]()
        {
            return this->PayOrderWithBalance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::RollbackRecordSnapshotOutcome DnspodClient::RollbackRecordSnapshot(const RollbackRecordSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackRecordSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackRecordSnapshotResponse rsp = RollbackRecordSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackRecordSnapshotOutcome(rsp);
        else
            return RollbackRecordSnapshotOutcome(o.GetError());
    }
    else
    {
        return RollbackRecordSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::RollbackRecordSnapshotAsync(const RollbackRecordSnapshotRequest& request, const RollbackRecordSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackRecordSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::RollbackRecordSnapshotOutcomeCallable DnspodClient::RollbackRecordSnapshotCallable(const RollbackRecordSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackRecordSnapshotOutcome()>>(
        [this, request]()
        {
            return this->RollbackRecordSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

DnspodClient::RollbackSnapshotOutcome DnspodClient::RollbackSnapshot(const RollbackSnapshotRequest &request)
{
    auto outcome = MakeRequest(request, "RollbackSnapshot");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RollbackSnapshotResponse rsp = RollbackSnapshotResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RollbackSnapshotOutcome(rsp);
        else
            return RollbackSnapshotOutcome(o.GetError());
    }
    else
    {
        return RollbackSnapshotOutcome(outcome.GetError());
    }
}

void DnspodClient::RollbackSnapshotAsync(const RollbackSnapshotRequest& request, const RollbackSnapshotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RollbackSnapshot(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

DnspodClient::RollbackSnapshotOutcomeCallable DnspodClient::RollbackSnapshotCallable(const RollbackSnapshotRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RollbackSnapshotOutcome()>>(
        [this, request]()
        {
            return this->RollbackSnapshot(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

