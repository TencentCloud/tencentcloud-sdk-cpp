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

#include <tencentcloud/teo/v20220106/TeoClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Teo::V20220106;
using namespace TencentCloud::Teo::V20220106::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-01-06";
    const string ENDPOINT = "teo.tencentcloudapi.com";
}

TeoClient::TeoClient(const Credential &credential, const string &region) :
    TeoClient(credential, region, ClientProfile())
{
}

TeoClient::TeoClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TeoClient::CheckCertificateOutcome TeoClient::CheckCertificate(const CheckCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "CheckCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CheckCertificateResponse rsp = CheckCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CheckCertificateOutcome(rsp);
        else
            return CheckCertificateOutcome(o.GetError());
    }
    else
    {
        return CheckCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::CheckCertificateAsync(const CheckCertificateRequest& request, const CheckCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CheckCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CheckCertificateOutcomeCallable TeoClient::CheckCertificateCallable(const CheckCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CheckCertificateOutcome()>>(
        [this, request]()
        {
            return this->CheckCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateApplicationProxyOutcome TeoClient::CreateApplicationProxy(const CreateApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyResponse rsp = CreateApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyOutcome(rsp);
        else
            return CreateApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyAsync(const CreateApplicationProxyRequest& request, const CreateApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateApplicationProxyOutcomeCallable TeoClient::CreateApplicationProxyCallable(const CreateApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateApplicationProxyRuleOutcome TeoClient::CreateApplicationProxyRule(const CreateApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyRuleResponse rsp = CreateApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyRuleOutcome(rsp);
        else
            return CreateApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyRuleAsync(const CreateApplicationProxyRuleRequest& request, const CreateApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationProxyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateApplicationProxyRuleOutcomeCallable TeoClient::CreateApplicationProxyRuleCallable(const CreateApplicationProxyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationProxyRuleOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationProxyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateApplicationProxyRulesOutcome TeoClient::CreateApplicationProxyRules(const CreateApplicationProxyRulesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateApplicationProxyRules");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateApplicationProxyRulesResponse rsp = CreateApplicationProxyRulesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateApplicationProxyRulesOutcome(rsp);
        else
            return CreateApplicationProxyRulesOutcome(o.GetError());
    }
    else
    {
        return CreateApplicationProxyRulesOutcome(outcome.GetError());
    }
}

void TeoClient::CreateApplicationProxyRulesAsync(const CreateApplicationProxyRulesRequest& request, const CreateApplicationProxyRulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateApplicationProxyRules(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateApplicationProxyRulesOutcomeCallable TeoClient::CreateApplicationProxyRulesCallable(const CreateApplicationProxyRulesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateApplicationProxyRulesOutcome()>>(
        [this, request]()
        {
            return this->CreateApplicationProxyRules(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateDnsRecordOutcome TeoClient::CreateDnsRecord(const CreateDnsRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDnsRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDnsRecordResponse rsp = CreateDnsRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDnsRecordOutcome(rsp);
        else
            return CreateDnsRecordOutcome(o.GetError());
    }
    else
    {
        return CreateDnsRecordOutcome(outcome.GetError());
    }
}

void TeoClient::CreateDnsRecordAsync(const CreateDnsRecordRequest& request, const CreateDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDnsRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateDnsRecordOutcomeCallable TeoClient::CreateDnsRecordCallable(const CreateDnsRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDnsRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateDnsRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateLoadBalancingOutcome TeoClient::CreateLoadBalancing(const CreateLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "CreateLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateLoadBalancingResponse rsp = CreateLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateLoadBalancingOutcome(rsp);
        else
            return CreateLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return CreateLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::CreateLoadBalancingAsync(const CreateLoadBalancingRequest& request, const CreateLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateLoadBalancing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateLoadBalancingOutcomeCallable TeoClient::CreateLoadBalancingCallable(const CreateLoadBalancingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateLoadBalancingOutcome()>>(
        [this, request]()
        {
            return this->CreateLoadBalancing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreatePrefetchTaskOutcome TeoClient::CreatePrefetchTask(const CreatePrefetchTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePrefetchTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePrefetchTaskResponse rsp = CreatePrefetchTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePrefetchTaskOutcome(rsp);
        else
            return CreatePrefetchTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePrefetchTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePrefetchTaskAsync(const CreatePrefetchTaskRequest& request, const CreatePrefetchTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePrefetchTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePrefetchTaskOutcomeCallable TeoClient::CreatePrefetchTaskCallable(const CreatePrefetchTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePrefetchTaskOutcome()>>(
        [this, request]()
        {
            return this->CreatePrefetchTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreatePurgeTaskOutcome TeoClient::CreatePurgeTask(const CreatePurgeTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreatePurgeTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreatePurgeTaskResponse rsp = CreatePurgeTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreatePurgeTaskOutcome(rsp);
        else
            return CreatePurgeTaskOutcome(o.GetError());
    }
    else
    {
        return CreatePurgeTaskOutcome(outcome.GetError());
    }
}

void TeoClient::CreatePurgeTaskAsync(const CreatePurgeTaskRequest& request, const CreatePurgeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreatePurgeTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreatePurgeTaskOutcomeCallable TeoClient::CreatePurgeTaskCallable(const CreatePurgeTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreatePurgeTaskOutcome()>>(
        [this, request]()
        {
            return this->CreatePurgeTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::CreateZoneOutcome TeoClient::CreateZone(const CreateZoneRequest &request)
{
    auto outcome = MakeRequest(request, "CreateZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateZoneResponse rsp = CreateZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateZoneOutcome(rsp);
        else
            return CreateZoneOutcome(o.GetError());
    }
    else
    {
        return CreateZoneOutcome(outcome.GetError());
    }
}

void TeoClient::CreateZoneAsync(const CreateZoneRequest& request, const CreateZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::CreateZoneOutcomeCallable TeoClient::CreateZoneCallable(const CreateZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateZoneOutcome()>>(
        [this, request]()
        {
            return this->CreateZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteApplicationProxyOutcome TeoClient::DeleteApplicationProxy(const DeleteApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProxyResponse rsp = DeleteApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProxyOutcome(rsp);
        else
            return DeleteApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteApplicationProxyAsync(const DeleteApplicationProxyRequest& request, const DeleteApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteApplicationProxyOutcomeCallable TeoClient::DeleteApplicationProxyCallable(const DeleteApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteApplicationProxyRuleOutcome TeoClient::DeleteApplicationProxyRule(const DeleteApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteApplicationProxyRuleResponse rsp = DeleteApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteApplicationProxyRuleOutcome(rsp);
        else
            return DeleteApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return DeleteApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteApplicationProxyRuleAsync(const DeleteApplicationProxyRuleRequest& request, const DeleteApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteApplicationProxyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteApplicationProxyRuleOutcomeCallable TeoClient::DeleteApplicationProxyRuleCallable(const DeleteApplicationProxyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteApplicationProxyRuleOutcome()>>(
        [this, request]()
        {
            return this->DeleteApplicationProxyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteDnsRecordsOutcome TeoClient::DeleteDnsRecords(const DeleteDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteDnsRecordsResponse rsp = DeleteDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteDnsRecordsOutcome(rsp);
        else
            return DeleteDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return DeleteDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteDnsRecordsAsync(const DeleteDnsRecordsRequest& request, const DeleteDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteDnsRecordsOutcomeCallable TeoClient::DeleteDnsRecordsCallable(const DeleteDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->DeleteDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteLoadBalancingOutcome TeoClient::DeleteLoadBalancing(const DeleteLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteLoadBalancingResponse rsp = DeleteLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteLoadBalancingOutcome(rsp);
        else
            return DeleteLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return DeleteLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteLoadBalancingAsync(const DeleteLoadBalancingRequest& request, const DeleteLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteLoadBalancing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteLoadBalancingOutcomeCallable TeoClient::DeleteLoadBalancingCallable(const DeleteLoadBalancingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteLoadBalancingOutcome()>>(
        [this, request]()
        {
            return this->DeleteLoadBalancing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DeleteZoneOutcome TeoClient::DeleteZone(const DeleteZoneRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteZoneResponse rsp = DeleteZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteZoneOutcome(rsp);
        else
            return DeleteZoneOutcome(o.GetError());
    }
    else
    {
        return DeleteZoneOutcome(outcome.GetError());
    }
}

void TeoClient::DeleteZoneAsync(const DeleteZoneRequest& request, const DeleteZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DeleteZoneOutcomeCallable TeoClient::DeleteZoneCallable(const DeleteZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteZoneOutcome()>>(
        [this, request]()
        {
            return this->DeleteZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeApplicationProxyOutcome TeoClient::DescribeApplicationProxy(const DescribeApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProxyResponse rsp = DescribeApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProxyOutcome(rsp);
        else
            return DescribeApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeApplicationProxyAsync(const DescribeApplicationProxyRequest& request, const DescribeApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeApplicationProxyOutcomeCallable TeoClient::DescribeApplicationProxyCallable(const DescribeApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeApplicationProxyDetailOutcome TeoClient::DescribeApplicationProxyDetail(const DescribeApplicationProxyDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApplicationProxyDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeApplicationProxyDetailResponse rsp = DescribeApplicationProxyDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeApplicationProxyDetailOutcome(rsp);
        else
            return DescribeApplicationProxyDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeApplicationProxyDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeApplicationProxyDetailAsync(const DescribeApplicationProxyDetailRequest& request, const DescribeApplicationProxyDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApplicationProxyDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeApplicationProxyDetailOutcomeCallable TeoClient::DescribeApplicationProxyDetailCallable(const DescribeApplicationProxyDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeApplicationProxyDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeApplicationProxyDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeCnameStatusOutcome TeoClient::DescribeCnameStatus(const DescribeCnameStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCnameStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCnameStatusResponse rsp = DescribeCnameStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCnameStatusOutcome(rsp);
        else
            return DescribeCnameStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeCnameStatusOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeCnameStatusAsync(const DescribeCnameStatusRequest& request, const DescribeCnameStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCnameStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeCnameStatusOutcomeCallable TeoClient::DescribeCnameStatusCallable(const DescribeCnameStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCnameStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeCnameStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDefaultCertificatesOutcome TeoClient::DescribeDefaultCertificates(const DescribeDefaultCertificatesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDefaultCertificates");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDefaultCertificatesResponse rsp = DescribeDefaultCertificatesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDefaultCertificatesOutcome(rsp);
        else
            return DescribeDefaultCertificatesOutcome(o.GetError());
    }
    else
    {
        return DescribeDefaultCertificatesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDefaultCertificatesAsync(const DescribeDefaultCertificatesRequest& request, const DescribeDefaultCertificatesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDefaultCertificates(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDefaultCertificatesOutcomeCallable TeoClient::DescribeDefaultCertificatesCallable(const DescribeDefaultCertificatesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDefaultCertificatesOutcome()>>(
        [this, request]()
        {
            return this->DescribeDefaultCertificates(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDnsDataOutcome TeoClient::DescribeDnsData(const DescribeDnsDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsDataResponse rsp = DescribeDnsDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsDataOutcome(rsp);
        else
            return DescribeDnsDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsDataOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnsDataAsync(const DescribeDnsDataRequest& request, const DescribeDnsDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnsDataOutcomeCallable TeoClient::DescribeDnsDataCallable(const DescribeDnsDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDnsRecordsOutcome TeoClient::DescribeDnsRecords(const DescribeDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnsRecordsResponse rsp = DescribeDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnsRecordsOutcome(rsp);
        else
            return DescribeDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnsRecordsAsync(const DescribeDnsRecordsRequest& request, const DescribeDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnsRecordsOutcomeCallable TeoClient::DescribeDnsRecordsCallable(const DescribeDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeDnssecOutcome TeoClient::DescribeDnssec(const DescribeDnssecRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDnssec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDnssecResponse rsp = DescribeDnssecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDnssecOutcome(rsp);
        else
            return DescribeDnssecOutcome(o.GetError());
    }
    else
    {
        return DescribeDnssecOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeDnssecAsync(const DescribeDnssecRequest& request, const DescribeDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDnssec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeDnssecOutcomeCallable TeoClient::DescribeDnssecCallable(const DescribeDnssecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDnssecOutcome()>>(
        [this, request]()
        {
            return this->DescribeDnssec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeHostsCertificateOutcome TeoClient::DescribeHostsCertificate(const DescribeHostsCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostsCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsCertificateResponse rsp = DescribeHostsCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsCertificateOutcome(rsp);
        else
            return DescribeHostsCertificateOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeHostsCertificateAsync(const DescribeHostsCertificateRequest& request, const DescribeHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostsCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeHostsCertificateOutcomeCallable TeoClient::DescribeHostsCertificateCallable(const DescribeHostsCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsCertificateOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostsCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeHostsSettingOutcome TeoClient::DescribeHostsSetting(const DescribeHostsSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHostsSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHostsSettingResponse rsp = DescribeHostsSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHostsSettingOutcome(rsp);
        else
            return DescribeHostsSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeHostsSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeHostsSettingAsync(const DescribeHostsSettingRequest& request, const DescribeHostsSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHostsSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeHostsSettingOutcomeCallable TeoClient::DescribeHostsSettingCallable(const DescribeHostsSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHostsSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeHostsSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeIdentificationOutcome TeoClient::DescribeIdentification(const DescribeIdentificationRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIdentification");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIdentificationResponse rsp = DescribeIdentificationResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIdentificationOutcome(rsp);
        else
            return DescribeIdentificationOutcome(o.GetError());
    }
    else
    {
        return DescribeIdentificationOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeIdentificationAsync(const DescribeIdentificationRequest& request, const DescribeIdentificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIdentification(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeIdentificationOutcomeCallable TeoClient::DescribeIdentificationCallable(const DescribeIdentificationRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIdentificationOutcome()>>(
        [this, request]()
        {
            return this->DescribeIdentification(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLoadBalancingOutcome TeoClient::DescribeLoadBalancing(const DescribeLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancingResponse rsp = DescribeLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancingOutcome(rsp);
        else
            return DescribeLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLoadBalancingAsync(const DescribeLoadBalancingRequest& request, const DescribeLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLoadBalancingOutcomeCallable TeoClient::DescribeLoadBalancingCallable(const DescribeLoadBalancingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancingOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeLoadBalancingDetailOutcome TeoClient::DescribeLoadBalancingDetail(const DescribeLoadBalancingDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLoadBalancingDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLoadBalancingDetailResponse rsp = DescribeLoadBalancingDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLoadBalancingDetailOutcome(rsp);
        else
            return DescribeLoadBalancingDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeLoadBalancingDetailOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeLoadBalancingDetailAsync(const DescribeLoadBalancingDetailRequest& request, const DescribeLoadBalancingDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLoadBalancingDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeLoadBalancingDetailOutcomeCallable TeoClient::DescribeLoadBalancingDetailCallable(const DescribeLoadBalancingDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLoadBalancingDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeLoadBalancingDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribePrefetchTasksOutcome TeoClient::DescribePrefetchTasks(const DescribePrefetchTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePrefetchTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePrefetchTasksResponse rsp = DescribePrefetchTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePrefetchTasksOutcome(rsp);
        else
            return DescribePrefetchTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePrefetchTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePrefetchTasksAsync(const DescribePrefetchTasksRequest& request, const DescribePrefetchTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePrefetchTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePrefetchTasksOutcomeCallable TeoClient::DescribePrefetchTasksCallable(const DescribePrefetchTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePrefetchTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePrefetchTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribePurgeTasksOutcome TeoClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeTasksResponse rsp = DescribePurgeTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeTasksOutcome(rsp);
        else
            return DescribePurgeTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeTasksOutcome(outcome.GetError());
    }
}

void TeoClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribePurgeTasksOutcomeCallable TeoClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePurgeTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePurgeTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeZoneDetailsOutcome TeoClient::DescribeZoneDetails(const DescribeZoneDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneDetailsResponse rsp = DescribeZoneDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneDetailsOutcome(rsp);
        else
            return DescribeZoneDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneDetailsOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneDetailsAsync(const DescribeZoneDetailsRequest& request, const DescribeZoneDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZoneDetailsOutcomeCallable TeoClient::DescribeZoneDetailsCallable(const DescribeZoneDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeZoneSettingOutcome TeoClient::DescribeZoneSetting(const DescribeZoneSettingRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZoneSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZoneSettingResponse rsp = DescribeZoneSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZoneSettingOutcome(rsp);
        else
            return DescribeZoneSettingOutcome(o.GetError());
    }
    else
    {
        return DescribeZoneSettingOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZoneSettingAsync(const DescribeZoneSettingRequest& request, const DescribeZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZoneSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZoneSettingOutcomeCallable TeoClient::DescribeZoneSettingCallable(const DescribeZoneSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZoneSettingOutcome()>>(
        [this, request]()
        {
            return this->DescribeZoneSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DescribeZonesOutcome TeoClient::DescribeZones(const DescribeZonesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeZones");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeZonesResponse rsp = DescribeZonesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeZonesOutcome(rsp);
        else
            return DescribeZonesOutcome(o.GetError());
    }
    else
    {
        return DescribeZonesOutcome(outcome.GetError());
    }
}

void TeoClient::DescribeZonesAsync(const DescribeZonesRequest& request, const DescribeZonesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeZones(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DescribeZonesOutcomeCallable TeoClient::DescribeZonesCallable(const DescribeZonesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeZonesOutcome()>>(
        [this, request]()
        {
            return this->DescribeZones(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::DownloadL7LogsOutcome TeoClient::DownloadL7Logs(const DownloadL7LogsRequest &request)
{
    auto outcome = MakeRequest(request, "DownloadL7Logs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DownloadL7LogsResponse rsp = DownloadL7LogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DownloadL7LogsOutcome(rsp);
        else
            return DownloadL7LogsOutcome(o.GetError());
    }
    else
    {
        return DownloadL7LogsOutcome(outcome.GetError());
    }
}

void TeoClient::DownloadL7LogsAsync(const DownloadL7LogsRequest& request, const DownloadL7LogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DownloadL7Logs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::DownloadL7LogsOutcomeCallable TeoClient::DownloadL7LogsCallable(const DownloadL7LogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DownloadL7LogsOutcome()>>(
        [this, request]()
        {
            return this->DownloadL7Logs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::IdentifyZoneOutcome TeoClient::IdentifyZone(const IdentifyZoneRequest &request)
{
    auto outcome = MakeRequest(request, "IdentifyZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        IdentifyZoneResponse rsp = IdentifyZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return IdentifyZoneOutcome(rsp);
        else
            return IdentifyZoneOutcome(o.GetError());
    }
    else
    {
        return IdentifyZoneOutcome(outcome.GetError());
    }
}

void TeoClient::IdentifyZoneAsync(const IdentifyZoneRequest& request, const IdentifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->IdentifyZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::IdentifyZoneOutcomeCallable TeoClient::IdentifyZoneCallable(const IdentifyZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<IdentifyZoneOutcome()>>(
        [this, request]()
        {
            return this->IdentifyZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ImportDnsRecordsOutcome TeoClient::ImportDnsRecords(const ImportDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "ImportDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportDnsRecordsResponse rsp = ImportDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportDnsRecordsOutcome(rsp);
        else
            return ImportDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return ImportDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::ImportDnsRecordsAsync(const ImportDnsRecordsRequest& request, const ImportDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ImportDnsRecordsOutcomeCallable TeoClient::ImportDnsRecordsCallable(const ImportDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->ImportDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyOutcome TeoClient::ModifyApplicationProxy(const ModifyApplicationProxyRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyResponse rsp = ModifyApplicationProxyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyOutcome(rsp);
        else
            return ModifyApplicationProxyOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyAsync(const ModifyApplicationProxyRequest& request, const ModifyApplicationProxyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyOutcomeCallable TeoClient::ModifyApplicationProxyCallable(const ModifyApplicationProxyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyRuleOutcome TeoClient::ModifyApplicationProxyRule(const ModifyApplicationProxyRuleRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyRule");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyRuleResponse rsp = ModifyApplicationProxyRuleResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyRuleOutcome(rsp);
        else
            return ModifyApplicationProxyRuleOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyRuleOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyRuleAsync(const ModifyApplicationProxyRuleRequest& request, const ModifyApplicationProxyRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxyRule(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyRuleOutcomeCallable TeoClient::ModifyApplicationProxyRuleCallable(const ModifyApplicationProxyRuleRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyRuleOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxyRule(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyRuleStatusOutcome TeoClient::ModifyApplicationProxyRuleStatus(const ModifyApplicationProxyRuleStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyRuleStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyRuleStatusResponse rsp = ModifyApplicationProxyRuleStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyRuleStatusOutcome(rsp);
        else
            return ModifyApplicationProxyRuleStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyRuleStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyRuleStatusAsync(const ModifyApplicationProxyRuleStatusRequest& request, const ModifyApplicationProxyRuleStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxyRuleStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyRuleStatusOutcomeCallable TeoClient::ModifyApplicationProxyRuleStatusCallable(const ModifyApplicationProxyRuleStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyRuleStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxyRuleStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyApplicationProxyStatusOutcome TeoClient::ModifyApplicationProxyStatus(const ModifyApplicationProxyStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyApplicationProxyStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyApplicationProxyStatusResponse rsp = ModifyApplicationProxyStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyApplicationProxyStatusOutcome(rsp);
        else
            return ModifyApplicationProxyStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyApplicationProxyStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyApplicationProxyStatusAsync(const ModifyApplicationProxyStatusRequest& request, const ModifyApplicationProxyStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyApplicationProxyStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyApplicationProxyStatusOutcomeCallable TeoClient::ModifyApplicationProxyStatusCallable(const ModifyApplicationProxyStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyApplicationProxyStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyApplicationProxyStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDefaultCertificateOutcome TeoClient::ModifyDefaultCertificate(const ModifyDefaultCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDefaultCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDefaultCertificateResponse rsp = ModifyDefaultCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDefaultCertificateOutcome(rsp);
        else
            return ModifyDefaultCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyDefaultCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDefaultCertificateAsync(const ModifyDefaultCertificateRequest& request, const ModifyDefaultCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDefaultCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDefaultCertificateOutcomeCallable TeoClient::ModifyDefaultCertificateCallable(const ModifyDefaultCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDefaultCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyDefaultCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDnsRecordOutcome TeoClient::ModifyDnsRecord(const ModifyDnsRecordRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnsRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnsRecordResponse rsp = ModifyDnsRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnsRecordOutcome(rsp);
        else
            return ModifyDnsRecordOutcome(o.GetError());
    }
    else
    {
        return ModifyDnsRecordOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnsRecordAsync(const ModifyDnsRecordRequest& request, const ModifyDnsRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnsRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnsRecordOutcomeCallable TeoClient::ModifyDnsRecordCallable(const ModifyDnsRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnsRecordOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnsRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyDnssecOutcome TeoClient::ModifyDnssec(const ModifyDnssecRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDnssec");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDnssecResponse rsp = ModifyDnssecResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDnssecOutcome(rsp);
        else
            return ModifyDnssecOutcome(o.GetError());
    }
    else
    {
        return ModifyDnssecOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyDnssecAsync(const ModifyDnssecRequest& request, const ModifyDnssecAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDnssec(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyDnssecOutcomeCallable TeoClient::ModifyDnssecCallable(const ModifyDnssecRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDnssecOutcome()>>(
        [this, request]()
        {
            return this->ModifyDnssec(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyHostsCertificateOutcome TeoClient::ModifyHostsCertificate(const ModifyHostsCertificateRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyHostsCertificate");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyHostsCertificateResponse rsp = ModifyHostsCertificateResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyHostsCertificateOutcome(rsp);
        else
            return ModifyHostsCertificateOutcome(o.GetError());
    }
    else
    {
        return ModifyHostsCertificateOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyHostsCertificateAsync(const ModifyHostsCertificateRequest& request, const ModifyHostsCertificateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyHostsCertificate(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyHostsCertificateOutcomeCallable TeoClient::ModifyHostsCertificateCallable(const ModifyHostsCertificateRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyHostsCertificateOutcome()>>(
        [this, request]()
        {
            return this->ModifyHostsCertificate(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyLoadBalancingOutcome TeoClient::ModifyLoadBalancing(const ModifyLoadBalancingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancing");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancingResponse rsp = ModifyLoadBalancingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancingOutcome(rsp);
        else
            return ModifyLoadBalancingOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancingOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLoadBalancingAsync(const ModifyLoadBalancingRequest& request, const ModifyLoadBalancingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancing(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyLoadBalancingOutcomeCallable TeoClient::ModifyLoadBalancingCallable(const ModifyLoadBalancingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancingOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancing(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyLoadBalancingStatusOutcome TeoClient::ModifyLoadBalancingStatus(const ModifyLoadBalancingStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyLoadBalancingStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyLoadBalancingStatusResponse rsp = ModifyLoadBalancingStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyLoadBalancingStatusOutcome(rsp);
        else
            return ModifyLoadBalancingStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyLoadBalancingStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyLoadBalancingStatusAsync(const ModifyLoadBalancingStatusRequest& request, const ModifyLoadBalancingStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyLoadBalancingStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyLoadBalancingStatusOutcomeCallable TeoClient::ModifyLoadBalancingStatusCallable(const ModifyLoadBalancingStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyLoadBalancingStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyLoadBalancingStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneOutcome TeoClient::ModifyZone(const ModifyZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneResponse rsp = ModifyZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneOutcome(rsp);
        else
            return ModifyZoneOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneAsync(const ModifyZoneRequest& request, const ModifyZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneOutcomeCallable TeoClient::ModifyZoneCallable(const ModifyZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneOutcome()>>(
        [this, request]()
        {
            return this->ModifyZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneCnameSpeedUpOutcome TeoClient::ModifyZoneCnameSpeedUp(const ModifyZoneCnameSpeedUpRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneCnameSpeedUp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneCnameSpeedUpResponse rsp = ModifyZoneCnameSpeedUpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneCnameSpeedUpOutcome(rsp);
        else
            return ModifyZoneCnameSpeedUpOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneCnameSpeedUpOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneCnameSpeedUpAsync(const ModifyZoneCnameSpeedUpRequest& request, const ModifyZoneCnameSpeedUpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneCnameSpeedUp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneCnameSpeedUpOutcomeCallable TeoClient::ModifyZoneCnameSpeedUpCallable(const ModifyZoneCnameSpeedUpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneCnameSpeedUpOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneCnameSpeedUp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneSettingOutcome TeoClient::ModifyZoneSetting(const ModifyZoneSettingRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneSetting");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneSettingResponse rsp = ModifyZoneSettingResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneSettingOutcome(rsp);
        else
            return ModifyZoneSettingOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneSettingOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneSettingAsync(const ModifyZoneSettingRequest& request, const ModifyZoneSettingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneSetting(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneSettingOutcomeCallable TeoClient::ModifyZoneSettingCallable(const ModifyZoneSettingRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneSettingOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneSetting(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ModifyZoneStatusOutcome TeoClient::ModifyZoneStatus(const ModifyZoneStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyZoneStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyZoneStatusResponse rsp = ModifyZoneStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyZoneStatusOutcome(rsp);
        else
            return ModifyZoneStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyZoneStatusOutcome(outcome.GetError());
    }
}

void TeoClient::ModifyZoneStatusAsync(const ModifyZoneStatusRequest& request, const ModifyZoneStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyZoneStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ModifyZoneStatusOutcomeCallable TeoClient::ModifyZoneStatusCallable(const ModifyZoneStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyZoneStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyZoneStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ReclaimZoneOutcome TeoClient::ReclaimZone(const ReclaimZoneRequest &request)
{
    auto outcome = MakeRequest(request, "ReclaimZone");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ReclaimZoneResponse rsp = ReclaimZoneResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ReclaimZoneOutcome(rsp);
        else
            return ReclaimZoneOutcome(o.GetError());
    }
    else
    {
        return ReclaimZoneOutcome(outcome.GetError());
    }
}

void TeoClient::ReclaimZoneAsync(const ReclaimZoneRequest& request, const ReclaimZoneAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ReclaimZone(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ReclaimZoneOutcomeCallable TeoClient::ReclaimZoneCallable(const ReclaimZoneRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ReclaimZoneOutcome()>>(
        [this, request]()
        {
            return this->ReclaimZone(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TeoClient::ScanDnsRecordsOutcome TeoClient::ScanDnsRecords(const ScanDnsRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "ScanDnsRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ScanDnsRecordsResponse rsp = ScanDnsRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ScanDnsRecordsOutcome(rsp);
        else
            return ScanDnsRecordsOutcome(o.GetError());
    }
    else
    {
        return ScanDnsRecordsOutcome(outcome.GetError());
    }
}

void TeoClient::ScanDnsRecordsAsync(const ScanDnsRecordsRequest& request, const ScanDnsRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ScanDnsRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TeoClient::ScanDnsRecordsOutcomeCallable TeoClient::ScanDnsRecordsCallable(const ScanDnsRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ScanDnsRecordsOutcome()>>(
        [this, request]()
        {
            return this->ScanDnsRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

