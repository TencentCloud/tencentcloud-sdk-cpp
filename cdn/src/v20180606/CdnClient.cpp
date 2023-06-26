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

#include <tencentcloud/cdn/v20180606/CdnClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Cdn::V20180606;
using namespace TencentCloud::Cdn::V20180606::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-06";
    const string ENDPOINT = "cdn.tencentcloudapi.com";
}

CdnClient::CdnClient(const Credential &credential, const string &region) :
    CdnClient(credential, region, ClientProfile())
{
}

CdnClient::CdnClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CdnClient::AddCLSTopicDomainsOutcome CdnClient::AddCLSTopicDomains(const AddCLSTopicDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "AddCLSTopicDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCLSTopicDomainsResponse rsp = AddCLSTopicDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCLSTopicDomainsOutcome(rsp);
        else
            return AddCLSTopicDomainsOutcome(o.GetError());
    }
    else
    {
        return AddCLSTopicDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::AddCLSTopicDomainsAsync(const AddCLSTopicDomainsRequest& request, const AddCLSTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCLSTopicDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::AddCLSTopicDomainsOutcomeCallable CdnClient::AddCLSTopicDomainsCallable(const AddCLSTopicDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCLSTopicDomainsOutcome()>>(
        [this, request]()
        {
            return this->AddCLSTopicDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::AddCdnDomainOutcome CdnClient::AddCdnDomain(const AddCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "AddCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AddCdnDomainResponse rsp = AddCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AddCdnDomainOutcome(rsp);
        else
            return AddCdnDomainOutcome(o.GetError());
    }
    else
    {
        return AddCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::AddCdnDomainAsync(const AddCdnDomainRequest& request, const AddCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AddCdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::AddCdnDomainOutcomeCallable CdnClient::AddCdnDomainCallable(const AddCdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AddCdnDomainOutcome()>>(
        [this, request]()
        {
            return this->AddCdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateClsLogTopicOutcome CdnClient::CreateClsLogTopic(const CreateClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "CreateClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateClsLogTopicResponse rsp = CreateClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateClsLogTopicOutcome(rsp);
        else
            return CreateClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return CreateClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::CreateClsLogTopicAsync(const CreateClsLogTopicRequest& request, const CreateClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateClsLogTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateClsLogTopicOutcomeCallable CdnClient::CreateClsLogTopicCallable(const CreateClsLogTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateClsLogTopicOutcome()>>(
        [this, request]()
        {
            return this->CreateClsLogTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateDiagnoseUrlOutcome CdnClient::CreateDiagnoseUrl(const CreateDiagnoseUrlRequest &request)
{
    auto outcome = MakeRequest(request, "CreateDiagnoseUrl");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateDiagnoseUrlResponse rsp = CreateDiagnoseUrlResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateDiagnoseUrlOutcome(rsp);
        else
            return CreateDiagnoseUrlOutcome(o.GetError());
    }
    else
    {
        return CreateDiagnoseUrlOutcome(outcome.GetError());
    }
}

void CdnClient::CreateDiagnoseUrlAsync(const CreateDiagnoseUrlRequest& request, const CreateDiagnoseUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDiagnoseUrl(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateDiagnoseUrlOutcomeCallable CdnClient::CreateDiagnoseUrlCallable(const CreateDiagnoseUrlRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateDiagnoseUrlOutcome()>>(
        [this, request]()
        {
            return this->CreateDiagnoseUrl(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateEdgePackTaskOutcome CdnClient::CreateEdgePackTask(const CreateEdgePackTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateEdgePackTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateEdgePackTaskResponse rsp = CreateEdgePackTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateEdgePackTaskOutcome(rsp);
        else
            return CreateEdgePackTaskOutcome(o.GetError());
    }
    else
    {
        return CreateEdgePackTaskOutcome(outcome.GetError());
    }
}

void CdnClient::CreateEdgePackTaskAsync(const CreateEdgePackTaskRequest& request, const CreateEdgePackTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateEdgePackTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateEdgePackTaskOutcomeCallable CdnClient::CreateEdgePackTaskCallable(const CreateEdgePackTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateEdgePackTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateEdgePackTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateScdnDomainOutcome CdnClient::CreateScdnDomain(const CreateScdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScdnDomainResponse rsp = CreateScdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScdnDomainOutcome(rsp);
        else
            return CreateScdnDomainOutcome(o.GetError());
    }
    else
    {
        return CreateScdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::CreateScdnDomainAsync(const CreateScdnDomainRequest& request, const CreateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateScdnDomainOutcomeCallable CdnClient::CreateScdnDomainCallable(const CreateScdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScdnDomainOutcome()>>(
        [this, request]()
        {
            return this->CreateScdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateScdnFailedLogTaskOutcome CdnClient::CreateScdnFailedLogTask(const CreateScdnFailedLogTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScdnFailedLogTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScdnFailedLogTaskResponse rsp = CreateScdnFailedLogTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScdnFailedLogTaskOutcome(rsp);
        else
            return CreateScdnFailedLogTaskOutcome(o.GetError());
    }
    else
    {
        return CreateScdnFailedLogTaskOutcome(outcome.GetError());
    }
}

void CdnClient::CreateScdnFailedLogTaskAsync(const CreateScdnFailedLogTaskRequest& request, const CreateScdnFailedLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScdnFailedLogTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateScdnFailedLogTaskOutcomeCallable CdnClient::CreateScdnFailedLogTaskCallable(const CreateScdnFailedLogTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScdnFailedLogTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateScdnFailedLogTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateScdnLogTaskOutcome CdnClient::CreateScdnLogTask(const CreateScdnLogTaskRequest &request)
{
    auto outcome = MakeRequest(request, "CreateScdnLogTask");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateScdnLogTaskResponse rsp = CreateScdnLogTaskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateScdnLogTaskOutcome(rsp);
        else
            return CreateScdnLogTaskOutcome(o.GetError());
    }
    else
    {
        return CreateScdnLogTaskOutcome(outcome.GetError());
    }
}

void CdnClient::CreateScdnLogTaskAsync(const CreateScdnLogTaskRequest& request, const CreateScdnLogTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateScdnLogTask(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateScdnLogTaskOutcomeCallable CdnClient::CreateScdnLogTaskCallable(const CreateScdnLogTaskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateScdnLogTaskOutcome()>>(
        [this, request]()
        {
            return this->CreateScdnLogTask(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::CreateVerifyRecordOutcome CdnClient::CreateVerifyRecord(const CreateVerifyRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateVerifyRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateVerifyRecordResponse rsp = CreateVerifyRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateVerifyRecordOutcome(rsp);
        else
            return CreateVerifyRecordOutcome(o.GetError());
    }
    else
    {
        return CreateVerifyRecordOutcome(outcome.GetError());
    }
}

void CdnClient::CreateVerifyRecordAsync(const CreateVerifyRecordRequest& request, const CreateVerifyRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateVerifyRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::CreateVerifyRecordOutcomeCallable CdnClient::CreateVerifyRecordCallable(const CreateVerifyRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateVerifyRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateVerifyRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DeleteCdnDomainOutcome CdnClient::DeleteCdnDomain(const DeleteCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCdnDomainResponse rsp = DeleteCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCdnDomainOutcome(rsp);
        else
            return DeleteCdnDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::DeleteCdnDomainAsync(const DeleteCdnDomainRequest& request, const DeleteCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DeleteCdnDomainOutcomeCallable CdnClient::DeleteCdnDomainCallable(const DeleteCdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCdnDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteCdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DeleteClsLogTopicOutcome CdnClient::DeleteClsLogTopic(const DeleteClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteClsLogTopicResponse rsp = DeleteClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteClsLogTopicOutcome(rsp);
        else
            return DeleteClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return DeleteClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::DeleteClsLogTopicAsync(const DeleteClsLogTopicRequest& request, const DeleteClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteClsLogTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DeleteClsLogTopicOutcomeCallable CdnClient::DeleteClsLogTopicCallable(const DeleteClsLogTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteClsLogTopicOutcome()>>(
        [this, request]()
        {
            return this->DeleteClsLogTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DeleteScdnDomainOutcome CdnClient::DeleteScdnDomain(const DeleteScdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteScdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteScdnDomainResponse rsp = DeleteScdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteScdnDomainOutcome(rsp);
        else
            return DeleteScdnDomainOutcome(o.GetError());
    }
    else
    {
        return DeleteScdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::DeleteScdnDomainAsync(const DeleteScdnDomainRequest& request, const DeleteScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteScdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DeleteScdnDomainOutcomeCallable CdnClient::DeleteScdnDomainCallable(const DeleteScdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteScdnDomainOutcome()>>(
        [this, request]()
        {
            return this->DeleteScdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeBillingDataOutcome CdnClient::DescribeBillingData(const DescribeBillingDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBillingData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBillingDataResponse rsp = DescribeBillingDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBillingDataOutcome(rsp);
        else
            return DescribeBillingDataOutcome(o.GetError());
    }
    else
    {
        return DescribeBillingDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeBillingDataAsync(const DescribeBillingDataRequest& request, const DescribeBillingDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBillingData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeBillingDataOutcomeCallable CdnClient::DescribeBillingDataCallable(const DescribeBillingDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBillingDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeBillingData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCcDataOutcome CdnClient::DescribeCcData(const DescribeCcDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCcData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCcDataResponse rsp = DescribeCcDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCcDataOutcome(rsp);
        else
            return DescribeCcDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCcDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCcDataAsync(const DescribeCcDataRequest& request, const DescribeCcDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCcData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCcDataOutcomeCallable CdnClient::DescribeCcDataCallable(const DescribeCcDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCcDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCcData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCdnDataOutcome CdnClient::DescribeCdnData(const DescribeCdnDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnDataResponse rsp = DescribeCdnDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnDataOutcome(rsp);
        else
            return DescribeCdnDataOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnDataAsync(const DescribeCdnDataRequest& request, const DescribeCdnDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCdnDataOutcomeCallable CdnClient::DescribeCdnDataCallable(const DescribeCdnDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCdnDomainLogsOutcome CdnClient::DescribeCdnDomainLogs(const DescribeCdnDomainLogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnDomainLogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnDomainLogsResponse rsp = DescribeCdnDomainLogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnDomainLogsOutcome(rsp);
        else
            return DescribeCdnDomainLogsOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnDomainLogsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnDomainLogsAsync(const DescribeCdnDomainLogsRequest& request, const DescribeCdnDomainLogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnDomainLogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCdnDomainLogsOutcomeCallable CdnClient::DescribeCdnDomainLogsCallable(const DescribeCdnDomainLogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnDomainLogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnDomainLogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCdnIpOutcome CdnClient::DescribeCdnIp(const DescribeCdnIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnIpResponse rsp = DescribeCdnIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnIpOutcome(rsp);
        else
            return DescribeCdnIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnIpOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnIpAsync(const DescribeCdnIpRequest& request, const DescribeCdnIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCdnIpOutcomeCallable CdnClient::DescribeCdnIpCallable(const DescribeCdnIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnIpOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCdnOriginIpOutcome CdnClient::DescribeCdnOriginIp(const DescribeCdnOriginIpRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCdnOriginIp");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCdnOriginIpResponse rsp = DescribeCdnOriginIpResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCdnOriginIpOutcome(rsp);
        else
            return DescribeCdnOriginIpOutcome(o.GetError());
    }
    else
    {
        return DescribeCdnOriginIpOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCdnOriginIpAsync(const DescribeCdnOriginIpRequest& request, const DescribeCdnOriginIpAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCdnOriginIp(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCdnOriginIpOutcomeCallable CdnClient::DescribeCdnOriginIpCallable(const DescribeCdnOriginIpRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCdnOriginIpOutcome()>>(
        [this, request]()
        {
            return this->DescribeCdnOriginIp(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeCertDomainsOutcome CdnClient::DescribeCertDomains(const DescribeCertDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCertDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCertDomainsResponse rsp = DescribeCertDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCertDomainsOutcome(rsp);
        else
            return DescribeCertDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeCertDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeCertDomainsAsync(const DescribeCertDomainsRequest& request, const DescribeCertDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCertDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeCertDomainsOutcomeCallable CdnClient::DescribeCertDomainsCallable(const DescribeCertDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCertDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCertDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeDDoSDataOutcome CdnClient::DescribeDDoSData(const DescribeDDoSDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDDoSData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDDoSDataResponse rsp = DescribeDDoSDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDDoSDataOutcome(rsp);
        else
            return DescribeDDoSDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDDoSDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeDDoSDataAsync(const DescribeDDoSDataRequest& request, const DescribeDDoSDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDDoSData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeDDoSDataOutcomeCallable CdnClient::DescribeDDoSDataCallable(const DescribeDDoSDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDDoSDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDDoSData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeDiagnoseReportOutcome CdnClient::DescribeDiagnoseReport(const DescribeDiagnoseReportRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDiagnoseReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDiagnoseReportResponse rsp = DescribeDiagnoseReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDiagnoseReportOutcome(rsp);
        else
            return DescribeDiagnoseReportOutcome(o.GetError());
    }
    else
    {
        return DescribeDiagnoseReportOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeDiagnoseReportAsync(const DescribeDiagnoseReportRequest& request, const DescribeDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDiagnoseReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeDiagnoseReportOutcomeCallable CdnClient::DescribeDiagnoseReportCallable(const DescribeDiagnoseReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDiagnoseReportOutcome()>>(
        [this, request]()
        {
            return this->DescribeDiagnoseReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeDistrictIspDataOutcome CdnClient::DescribeDistrictIspData(const DescribeDistrictIspDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDistrictIspData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDistrictIspDataResponse rsp = DescribeDistrictIspDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDistrictIspDataOutcome(rsp);
        else
            return DescribeDistrictIspDataOutcome(o.GetError());
    }
    else
    {
        return DescribeDistrictIspDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeDistrictIspDataAsync(const DescribeDistrictIspDataRequest& request, const DescribeDistrictIspDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDistrictIspData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeDistrictIspDataOutcomeCallable CdnClient::DescribeDistrictIspDataCallable(const DescribeDistrictIspDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDistrictIspDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeDistrictIspData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeDomainsOutcome CdnClient::DescribeDomains(const DescribeDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsResponse rsp = DescribeDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsOutcome(rsp);
        else
            return DescribeDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeDomainsOutcomeCallable CdnClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeDomainsConfigOutcome CdnClient::DescribeDomainsConfig(const DescribeDomainsConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainsConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainsConfigResponse rsp = DescribeDomainsConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainsConfigOutcome(rsp);
        else
            return DescribeDomainsConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainsConfigOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeDomainsConfigAsync(const DescribeDomainsConfigRequest& request, const DescribeDomainsConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainsConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeDomainsConfigOutcomeCallable CdnClient::DescribeDomainsConfigCallable(const DescribeDomainsConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainsConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainsConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeEdgePackTaskStatusOutcome CdnClient::DescribeEdgePackTaskStatus(const DescribeEdgePackTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEdgePackTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEdgePackTaskStatusResponse rsp = DescribeEdgePackTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEdgePackTaskStatusOutcome(rsp);
        else
            return DescribeEdgePackTaskStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeEdgePackTaskStatusOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeEdgePackTaskStatusAsync(const DescribeEdgePackTaskStatusRequest& request, const DescribeEdgePackTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEdgePackTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeEdgePackTaskStatusOutcomeCallable CdnClient::DescribeEdgePackTaskStatusCallable(const DescribeEdgePackTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEdgePackTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeEdgePackTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeEventLogDataOutcome CdnClient::DescribeEventLogData(const DescribeEventLogDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventLogData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventLogDataResponse rsp = DescribeEventLogDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventLogDataOutcome(rsp);
        else
            return DescribeEventLogDataOutcome(o.GetError());
    }
    else
    {
        return DescribeEventLogDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeEventLogDataAsync(const DescribeEventLogDataRequest& request, const DescribeEventLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventLogData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeEventLogDataOutcomeCallable CdnClient::DescribeEventLogDataCallable(const DescribeEventLogDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventLogDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventLogData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeHttpsPackagesOutcome CdnClient::DescribeHttpsPackages(const DescribeHttpsPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHttpsPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHttpsPackagesResponse rsp = DescribeHttpsPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHttpsPackagesOutcome(rsp);
        else
            return DescribeHttpsPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeHttpsPackagesOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeHttpsPackagesAsync(const DescribeHttpsPackagesRequest& request, const DescribeHttpsPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHttpsPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeHttpsPackagesOutcomeCallable CdnClient::DescribeHttpsPackagesCallable(const DescribeHttpsPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHttpsPackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeHttpsPackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeImageConfigOutcome CdnClient::DescribeImageConfig(const DescribeImageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeImageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeImageConfigResponse rsp = DescribeImageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeImageConfigOutcome(rsp);
        else
            return DescribeImageConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeImageConfigOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeImageConfigAsync(const DescribeImageConfigRequest& request, const DescribeImageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeImageConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeImageConfigOutcomeCallable CdnClient::DescribeImageConfigCallable(const DescribeImageConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeImageConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeImageConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeIpStatusOutcome CdnClient::DescribeIpStatus(const DescribeIpStatusRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpStatusResponse rsp = DescribeIpStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpStatusOutcome(rsp);
        else
            return DescribeIpStatusOutcome(o.GetError());
    }
    else
    {
        return DescribeIpStatusOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeIpStatusAsync(const DescribeIpStatusRequest& request, const DescribeIpStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeIpStatusOutcomeCallable CdnClient::DescribeIpStatusCallable(const DescribeIpStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpStatusOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeIpVisitOutcome CdnClient::DescribeIpVisit(const DescribeIpVisitRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeIpVisit");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeIpVisitResponse rsp = DescribeIpVisitResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeIpVisitOutcome(rsp);
        else
            return DescribeIpVisitOutcome(o.GetError());
    }
    else
    {
        return DescribeIpVisitOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeIpVisitAsync(const DescribeIpVisitRequest& request, const DescribeIpVisitAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeIpVisit(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeIpVisitOutcomeCallable CdnClient::DescribeIpVisitCallable(const DescribeIpVisitRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeIpVisitOutcome()>>(
        [this, request]()
        {
            return this->DescribeIpVisit(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeMapInfoOutcome CdnClient::DescribeMapInfo(const DescribeMapInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMapInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMapInfoResponse rsp = DescribeMapInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMapInfoOutcome(rsp);
        else
            return DescribeMapInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeMapInfoOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeMapInfoAsync(const DescribeMapInfoRequest& request, const DescribeMapInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMapInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeMapInfoOutcomeCallable CdnClient::DescribeMapInfoCallable(const DescribeMapInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMapInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeMapInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeOriginDataOutcome CdnClient::DescribeOriginData(const DescribeOriginDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeOriginData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeOriginDataResponse rsp = DescribeOriginDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeOriginDataOutcome(rsp);
        else
            return DescribeOriginDataOutcome(o.GetError());
    }
    else
    {
        return DescribeOriginDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeOriginDataAsync(const DescribeOriginDataRequest& request, const DescribeOriginDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeOriginData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeOriginDataOutcomeCallable CdnClient::DescribeOriginDataCallable(const DescribeOriginDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeOriginDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeOriginData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePayTypeOutcome CdnClient::DescribePayType(const DescribePayTypeRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePayType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePayTypeResponse rsp = DescribePayTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePayTypeOutcome(rsp);
        else
            return DescribePayTypeOutcome(o.GetError());
    }
    else
    {
        return DescribePayTypeOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePayTypeAsync(const DescribePayTypeRequest& request, const DescribePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePayType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePayTypeOutcomeCallable CdnClient::DescribePayTypeCallable(const DescribePayTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePayTypeOutcome()>>(
        [this, request]()
        {
            return this->DescribePayType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePurgeQuotaOutcome CdnClient::DescribePurgeQuota(const DescribePurgeQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePurgeQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePurgeQuotaResponse rsp = DescribePurgeQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePurgeQuotaOutcome(rsp);
        else
            return DescribePurgeQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribePurgeQuotaOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePurgeQuotaAsync(const DescribePurgeQuotaRequest& request, const DescribePurgeQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePurgeQuotaOutcomeCallable CdnClient::DescribePurgeQuotaCallable(const DescribePurgeQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePurgeQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribePurgeQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePurgeTasksOutcome CdnClient::DescribePurgeTasks(const DescribePurgeTasksRequest &request)
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

void CdnClient::DescribePurgeTasksAsync(const DescribePurgeTasksRequest& request, const DescribePurgeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePurgeTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePurgeTasksOutcomeCallable CdnClient::DescribePurgeTasksCallable(const DescribePurgeTasksRequest &request)
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

CdnClient::DescribePushQuotaOutcome CdnClient::DescribePushQuota(const DescribePushQuotaRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushQuota");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushQuotaResponse rsp = DescribePushQuotaResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushQuotaOutcome(rsp);
        else
            return DescribePushQuotaOutcome(o.GetError());
    }
    else
    {
        return DescribePushQuotaOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePushQuotaAsync(const DescribePushQuotaRequest& request, const DescribePushQuotaAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePushQuota(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePushQuotaOutcomeCallable CdnClient::DescribePushQuotaCallable(const DescribePushQuotaRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePushQuotaOutcome()>>(
        [this, request]()
        {
            return this->DescribePushQuota(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribePushTasksOutcome CdnClient::DescribePushTasks(const DescribePushTasksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePushTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePushTasksResponse rsp = DescribePushTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePushTasksOutcome(rsp);
        else
            return DescribePushTasksOutcome(o.GetError());
    }
    else
    {
        return DescribePushTasksOutcome(outcome.GetError());
    }
}

void CdnClient::DescribePushTasksAsync(const DescribePushTasksRequest& request, const DescribePushTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePushTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribePushTasksOutcomeCallable CdnClient::DescribePushTasksCallable(const DescribePushTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePushTasksOutcome()>>(
        [this, request]()
        {
            return this->DescribePushTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeReportDataOutcome CdnClient::DescribeReportData(const DescribeReportDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeReportData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeReportDataResponse rsp = DescribeReportDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeReportDataOutcome(rsp);
        else
            return DescribeReportDataOutcome(o.GetError());
    }
    else
    {
        return DescribeReportDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeReportDataAsync(const DescribeReportDataRequest& request, const DescribeReportDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeReportData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeReportDataOutcomeCallable CdnClient::DescribeReportDataCallable(const DescribeReportDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeReportDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeReportData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeScdnBotDataOutcome CdnClient::DescribeScdnBotData(const DescribeScdnBotDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScdnBotData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScdnBotDataResponse rsp = DescribeScdnBotDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScdnBotDataOutcome(rsp);
        else
            return DescribeScdnBotDataOutcome(o.GetError());
    }
    else
    {
        return DescribeScdnBotDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeScdnBotDataAsync(const DescribeScdnBotDataRequest& request, const DescribeScdnBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScdnBotData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeScdnBotDataOutcomeCallable CdnClient::DescribeScdnBotDataCallable(const DescribeScdnBotDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScdnBotDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeScdnBotData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeScdnBotRecordsOutcome CdnClient::DescribeScdnBotRecords(const DescribeScdnBotRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScdnBotRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScdnBotRecordsResponse rsp = DescribeScdnBotRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScdnBotRecordsOutcome(rsp);
        else
            return DescribeScdnBotRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeScdnBotRecordsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeScdnBotRecordsAsync(const DescribeScdnBotRecordsRequest& request, const DescribeScdnBotRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScdnBotRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeScdnBotRecordsOutcomeCallable CdnClient::DescribeScdnBotRecordsCallable(const DescribeScdnBotRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScdnBotRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeScdnBotRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeScdnConfigOutcome CdnClient::DescribeScdnConfig(const DescribeScdnConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScdnConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScdnConfigResponse rsp = DescribeScdnConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScdnConfigOutcome(rsp);
        else
            return DescribeScdnConfigOutcome(o.GetError());
    }
    else
    {
        return DescribeScdnConfigOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeScdnConfigAsync(const DescribeScdnConfigRequest& request, const DescribeScdnConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScdnConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeScdnConfigOutcomeCallable CdnClient::DescribeScdnConfigCallable(const DescribeScdnConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScdnConfigOutcome()>>(
        [this, request]()
        {
            return this->DescribeScdnConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeScdnIpStrategyOutcome CdnClient::DescribeScdnIpStrategy(const DescribeScdnIpStrategyRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScdnIpStrategy");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScdnIpStrategyResponse rsp = DescribeScdnIpStrategyResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScdnIpStrategyOutcome(rsp);
        else
            return DescribeScdnIpStrategyOutcome(o.GetError());
    }
    else
    {
        return DescribeScdnIpStrategyOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeScdnIpStrategyAsync(const DescribeScdnIpStrategyRequest& request, const DescribeScdnIpStrategyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScdnIpStrategy(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeScdnIpStrategyOutcomeCallable CdnClient::DescribeScdnIpStrategyCallable(const DescribeScdnIpStrategyRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScdnIpStrategyOutcome()>>(
        [this, request]()
        {
            return this->DescribeScdnIpStrategy(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeScdnTopDataOutcome CdnClient::DescribeScdnTopData(const DescribeScdnTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeScdnTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeScdnTopDataResponse rsp = DescribeScdnTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeScdnTopDataOutcome(rsp);
        else
            return DescribeScdnTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeScdnTopDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeScdnTopDataAsync(const DescribeScdnTopDataRequest& request, const DescribeScdnTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeScdnTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeScdnTopDataOutcomeCallable CdnClient::DescribeScdnTopDataCallable(const DescribeScdnTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeScdnTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeScdnTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeTopDataOutcome CdnClient::DescribeTopData(const DescribeTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTopDataResponse rsp = DescribeTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTopDataOutcome(rsp);
        else
            return DescribeTopDataOutcome(o.GetError());
    }
    else
    {
        return DescribeTopDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeTopDataAsync(const DescribeTopDataRequest& request, const DescribeTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeTopDataOutcomeCallable CdnClient::DescribeTopDataCallable(const DescribeTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTopDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeTrafficPackagesOutcome CdnClient::DescribeTrafficPackages(const DescribeTrafficPackagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTrafficPackages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTrafficPackagesResponse rsp = DescribeTrafficPackagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTrafficPackagesOutcome(rsp);
        else
            return DescribeTrafficPackagesOutcome(o.GetError());
    }
    else
    {
        return DescribeTrafficPackagesOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeTrafficPackagesAsync(const DescribeTrafficPackagesRequest& request, const DescribeTrafficPackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTrafficPackages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeTrafficPackagesOutcomeCallable CdnClient::DescribeTrafficPackagesCallable(const DescribeTrafficPackagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTrafficPackagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTrafficPackages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeUrlViolationsOutcome CdnClient::DescribeUrlViolations(const DescribeUrlViolationsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUrlViolations");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUrlViolationsResponse rsp = DescribeUrlViolationsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUrlViolationsOutcome(rsp);
        else
            return DescribeUrlViolationsOutcome(o.GetError());
    }
    else
    {
        return DescribeUrlViolationsOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeUrlViolationsAsync(const DescribeUrlViolationsRequest& request, const DescribeUrlViolationsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUrlViolations(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeUrlViolationsOutcomeCallable CdnClient::DescribeUrlViolationsCallable(const DescribeUrlViolationsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUrlViolationsOutcome()>>(
        [this, request]()
        {
            return this->DescribeUrlViolations(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DescribeWafDataOutcome CdnClient::DescribeWafData(const DescribeWafDataRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWafData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWafDataResponse rsp = DescribeWafDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWafDataOutcome(rsp);
        else
            return DescribeWafDataOutcome(o.GetError());
    }
    else
    {
        return DescribeWafDataOutcome(outcome.GetError());
    }
}

void CdnClient::DescribeWafDataAsync(const DescribeWafDataRequest& request, const DescribeWafDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWafData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DescribeWafDataOutcomeCallable CdnClient::DescribeWafDataCallable(const DescribeWafDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWafDataOutcome()>>(
        [this, request]()
        {
            return this->DescribeWafData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DisableCachesOutcome CdnClient::DisableCaches(const DisableCachesRequest &request)
{
    auto outcome = MakeRequest(request, "DisableCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableCachesResponse rsp = DisableCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableCachesOutcome(rsp);
        else
            return DisableCachesOutcome(o.GetError());
    }
    else
    {
        return DisableCachesOutcome(outcome.GetError());
    }
}

void CdnClient::DisableCachesAsync(const DisableCachesRequest& request, const DisableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableCaches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DisableCachesOutcomeCallable CdnClient::DisableCachesCallable(const DisableCachesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableCachesOutcome()>>(
        [this, request]()
        {
            return this->DisableCaches(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DisableClsLogTopicOutcome CdnClient::DisableClsLogTopic(const DisableClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "DisableClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DisableClsLogTopicResponse rsp = DisableClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DisableClsLogTopicOutcome(rsp);
        else
            return DisableClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return DisableClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::DisableClsLogTopicAsync(const DisableClsLogTopicRequest& request, const DisableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DisableClsLogTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DisableClsLogTopicOutcomeCallable CdnClient::DisableClsLogTopicCallable(const DisableClsLogTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DisableClsLogTopicOutcome()>>(
        [this, request]()
        {
            return this->DisableClsLogTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::DuplicateDomainConfigOutcome CdnClient::DuplicateDomainConfig(const DuplicateDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "DuplicateDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DuplicateDomainConfigResponse rsp = DuplicateDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DuplicateDomainConfigOutcome(rsp);
        else
            return DuplicateDomainConfigOutcome(o.GetError());
    }
    else
    {
        return DuplicateDomainConfigOutcome(outcome.GetError());
    }
}

void CdnClient::DuplicateDomainConfigAsync(const DuplicateDomainConfigRequest& request, const DuplicateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DuplicateDomainConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::DuplicateDomainConfigOutcomeCallable CdnClient::DuplicateDomainConfigCallable(const DuplicateDomainConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DuplicateDomainConfigOutcome()>>(
        [this, request]()
        {
            return this->DuplicateDomainConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::EnableCachesOutcome CdnClient::EnableCaches(const EnableCachesRequest &request)
{
    auto outcome = MakeRequest(request, "EnableCaches");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableCachesResponse rsp = EnableCachesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableCachesOutcome(rsp);
        else
            return EnableCachesOutcome(o.GetError());
    }
    else
    {
        return EnableCachesOutcome(outcome.GetError());
    }
}

void CdnClient::EnableCachesAsync(const EnableCachesRequest& request, const EnableCachesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableCaches(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::EnableCachesOutcomeCallable CdnClient::EnableCachesCallable(const EnableCachesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableCachesOutcome()>>(
        [this, request]()
        {
            return this->EnableCaches(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::EnableClsLogTopicOutcome CdnClient::EnableClsLogTopic(const EnableClsLogTopicRequest &request)
{
    auto outcome = MakeRequest(request, "EnableClsLogTopic");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        EnableClsLogTopicResponse rsp = EnableClsLogTopicResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return EnableClsLogTopicOutcome(rsp);
        else
            return EnableClsLogTopicOutcome(o.GetError());
    }
    else
    {
        return EnableClsLogTopicOutcome(outcome.GetError());
    }
}

void CdnClient::EnableClsLogTopicAsync(const EnableClsLogTopicRequest& request, const EnableClsLogTopicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->EnableClsLogTopic(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::EnableClsLogTopicOutcomeCallable CdnClient::EnableClsLogTopicCallable(const EnableClsLogTopicRequest &request)
{
    auto task = std::make_shared<std::packaged_task<EnableClsLogTopicOutcome()>>(
        [this, request]()
        {
            return this->EnableClsLogTopic(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::GetDisableRecordsOutcome CdnClient::GetDisableRecords(const GetDisableRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "GetDisableRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        GetDisableRecordsResponse rsp = GetDisableRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return GetDisableRecordsOutcome(rsp);
        else
            return GetDisableRecordsOutcome(o.GetError());
    }
    else
    {
        return GetDisableRecordsOutcome(outcome.GetError());
    }
}

void CdnClient::GetDisableRecordsAsync(const GetDisableRecordsRequest& request, const GetDisableRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->GetDisableRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::GetDisableRecordsOutcomeCallable CdnClient::GetDisableRecordsCallable(const GetDisableRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<GetDisableRecordsOutcome()>>(
        [this, request]()
        {
            return this->GetDisableRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListClsLogTopicsOutcome CdnClient::ListClsLogTopics(const ListClsLogTopicsRequest &request)
{
    auto outcome = MakeRequest(request, "ListClsLogTopics");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListClsLogTopicsResponse rsp = ListClsLogTopicsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListClsLogTopicsOutcome(rsp);
        else
            return ListClsLogTopicsOutcome(o.GetError());
    }
    else
    {
        return ListClsLogTopicsOutcome(outcome.GetError());
    }
}

void CdnClient::ListClsLogTopicsAsync(const ListClsLogTopicsRequest& request, const ListClsLogTopicsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListClsLogTopics(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListClsLogTopicsOutcomeCallable CdnClient::ListClsLogTopicsCallable(const ListClsLogTopicsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListClsLogTopicsOutcome()>>(
        [this, request]()
        {
            return this->ListClsLogTopics(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListClsTopicDomainsOutcome CdnClient::ListClsTopicDomains(const ListClsTopicDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ListClsTopicDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListClsTopicDomainsResponse rsp = ListClsTopicDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListClsTopicDomainsOutcome(rsp);
        else
            return ListClsTopicDomainsOutcome(o.GetError());
    }
    else
    {
        return ListClsTopicDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::ListClsTopicDomainsAsync(const ListClsTopicDomainsRequest& request, const ListClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListClsTopicDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListClsTopicDomainsOutcomeCallable CdnClient::ListClsTopicDomainsCallable(const ListClsTopicDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListClsTopicDomainsOutcome()>>(
        [this, request]()
        {
            return this->ListClsTopicDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListDiagnoseReportOutcome CdnClient::ListDiagnoseReport(const ListDiagnoseReportRequest &request)
{
    auto outcome = MakeRequest(request, "ListDiagnoseReport");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListDiagnoseReportResponse rsp = ListDiagnoseReportResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListDiagnoseReportOutcome(rsp);
        else
            return ListDiagnoseReportOutcome(o.GetError());
    }
    else
    {
        return ListDiagnoseReportOutcome(outcome.GetError());
    }
}

void CdnClient::ListDiagnoseReportAsync(const ListDiagnoseReportRequest& request, const ListDiagnoseReportAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListDiagnoseReport(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListDiagnoseReportOutcomeCallable CdnClient::ListDiagnoseReportCallable(const ListDiagnoseReportRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListDiagnoseReportOutcome()>>(
        [this, request]()
        {
            return this->ListDiagnoseReport(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListScdnDomainsOutcome CdnClient::ListScdnDomains(const ListScdnDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ListScdnDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListScdnDomainsResponse rsp = ListScdnDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListScdnDomainsOutcome(rsp);
        else
            return ListScdnDomainsOutcome(o.GetError());
    }
    else
    {
        return ListScdnDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::ListScdnDomainsAsync(const ListScdnDomainsRequest& request, const ListScdnDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListScdnDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListScdnDomainsOutcomeCallable CdnClient::ListScdnDomainsCallable(const ListScdnDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListScdnDomainsOutcome()>>(
        [this, request]()
        {
            return this->ListScdnDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListScdnLogTasksOutcome CdnClient::ListScdnLogTasks(const ListScdnLogTasksRequest &request)
{
    auto outcome = MakeRequest(request, "ListScdnLogTasks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListScdnLogTasksResponse rsp = ListScdnLogTasksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListScdnLogTasksOutcome(rsp);
        else
            return ListScdnLogTasksOutcome(o.GetError());
    }
    else
    {
        return ListScdnLogTasksOutcome(outcome.GetError());
    }
}

void CdnClient::ListScdnLogTasksAsync(const ListScdnLogTasksRequest& request, const ListScdnLogTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListScdnLogTasks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListScdnLogTasksOutcomeCallable CdnClient::ListScdnLogTasksCallable(const ListScdnLogTasksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListScdnLogTasksOutcome()>>(
        [this, request]()
        {
            return this->ListScdnLogTasks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListScdnTopBotDataOutcome CdnClient::ListScdnTopBotData(const ListScdnTopBotDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListScdnTopBotData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListScdnTopBotDataResponse rsp = ListScdnTopBotDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListScdnTopBotDataOutcome(rsp);
        else
            return ListScdnTopBotDataOutcome(o.GetError());
    }
    else
    {
        return ListScdnTopBotDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListScdnTopBotDataAsync(const ListScdnTopBotDataRequest& request, const ListScdnTopBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListScdnTopBotData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListScdnTopBotDataOutcomeCallable CdnClient::ListScdnTopBotDataCallable(const ListScdnTopBotDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListScdnTopBotDataOutcome()>>(
        [this, request]()
        {
            return this->ListScdnTopBotData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopBotDataOutcome CdnClient::ListTopBotData(const ListTopBotDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopBotData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopBotDataResponse rsp = ListTopBotDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopBotDataOutcome(rsp);
        else
            return ListTopBotDataOutcome(o.GetError());
    }
    else
    {
        return ListTopBotDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopBotDataAsync(const ListTopBotDataRequest& request, const ListTopBotDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopBotData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopBotDataOutcomeCallable CdnClient::ListTopBotDataCallable(const ListTopBotDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopBotDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopBotData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopCcDataOutcome CdnClient::ListTopCcData(const ListTopCcDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopCcData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopCcDataResponse rsp = ListTopCcDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopCcDataOutcome(rsp);
        else
            return ListTopCcDataOutcome(o.GetError());
    }
    else
    {
        return ListTopCcDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopCcDataAsync(const ListTopCcDataRequest& request, const ListTopCcDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopCcData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopCcDataOutcomeCallable CdnClient::ListTopCcDataCallable(const ListTopCcDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopCcDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopCcData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopClsLogDataOutcome CdnClient::ListTopClsLogData(const ListTopClsLogDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopClsLogData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopClsLogDataResponse rsp = ListTopClsLogDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopClsLogDataOutcome(rsp);
        else
            return ListTopClsLogDataOutcome(o.GetError());
    }
    else
    {
        return ListTopClsLogDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopClsLogDataAsync(const ListTopClsLogDataRequest& request, const ListTopClsLogDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopClsLogData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopClsLogDataOutcomeCallable CdnClient::ListTopClsLogDataCallable(const ListTopClsLogDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopClsLogDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopClsLogData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopDDoSDataOutcome CdnClient::ListTopDDoSData(const ListTopDDoSDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopDDoSData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopDDoSDataResponse rsp = ListTopDDoSDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopDDoSDataOutcome(rsp);
        else
            return ListTopDDoSDataOutcome(o.GetError());
    }
    else
    {
        return ListTopDDoSDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopDDoSDataAsync(const ListTopDDoSDataRequest& request, const ListTopDDoSDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopDDoSData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopDDoSDataOutcomeCallable CdnClient::ListTopDDoSDataCallable(const ListTopDDoSDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopDDoSDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopDDoSData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopDataOutcome CdnClient::ListTopData(const ListTopDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopDataResponse rsp = ListTopDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopDataOutcome(rsp);
        else
            return ListTopDataOutcome(o.GetError());
    }
    else
    {
        return ListTopDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopDataAsync(const ListTopDataRequest& request, const ListTopDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopDataOutcomeCallable CdnClient::ListTopDataCallable(const ListTopDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ListTopWafDataOutcome CdnClient::ListTopWafData(const ListTopWafDataRequest &request)
{
    auto outcome = MakeRequest(request, "ListTopWafData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ListTopWafDataResponse rsp = ListTopWafDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ListTopWafDataOutcome(rsp);
        else
            return ListTopWafDataOutcome(o.GetError());
    }
    else
    {
        return ListTopWafDataOutcome(outcome.GetError());
    }
}

void CdnClient::ListTopWafDataAsync(const ListTopWafDataRequest& request, const ListTopWafDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ListTopWafData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ListTopWafDataOutcomeCallable CdnClient::ListTopWafDataCallable(const ListTopWafDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ListTopWafDataOutcome()>>(
        [this, request]()
        {
            return this->ListTopWafData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ManageClsTopicDomainsOutcome CdnClient::ManageClsTopicDomains(const ManageClsTopicDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "ManageClsTopicDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageClsTopicDomainsResponse rsp = ManageClsTopicDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageClsTopicDomainsOutcome(rsp);
        else
            return ManageClsTopicDomainsOutcome(o.GetError());
    }
    else
    {
        return ManageClsTopicDomainsOutcome(outcome.GetError());
    }
}

void CdnClient::ManageClsTopicDomainsAsync(const ManageClsTopicDomainsRequest& request, const ManageClsTopicDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageClsTopicDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ManageClsTopicDomainsOutcomeCallable CdnClient::ManageClsTopicDomainsCallable(const ManageClsTopicDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageClsTopicDomainsOutcome()>>(
        [this, request]()
        {
            return this->ManageClsTopicDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ModifyDomainConfigOutcome CdnClient::ModifyDomainConfig(const ModifyDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainConfigResponse rsp = ModifyDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainConfigOutcome(rsp);
        else
            return ModifyDomainConfigOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainConfigOutcome(outcome.GetError());
    }
}

void CdnClient::ModifyDomainConfigAsync(const ModifyDomainConfigRequest& request, const ModifyDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ModifyDomainConfigOutcomeCallable CdnClient::ModifyDomainConfigCallable(const ModifyDomainConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainConfigOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::ModifyPurgeFetchTaskStatusOutcome CdnClient::ModifyPurgeFetchTaskStatus(const ModifyPurgeFetchTaskStatusRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyPurgeFetchTaskStatus");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyPurgeFetchTaskStatusResponse rsp = ModifyPurgeFetchTaskStatusResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyPurgeFetchTaskStatusOutcome(rsp);
        else
            return ModifyPurgeFetchTaskStatusOutcome(o.GetError());
    }
    else
    {
        return ModifyPurgeFetchTaskStatusOutcome(outcome.GetError());
    }
}

void CdnClient::ModifyPurgeFetchTaskStatusAsync(const ModifyPurgeFetchTaskStatusRequest& request, const ModifyPurgeFetchTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyPurgeFetchTaskStatus(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::ModifyPurgeFetchTaskStatusOutcomeCallable CdnClient::ModifyPurgeFetchTaskStatusCallable(const ModifyPurgeFetchTaskStatusRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyPurgeFetchTaskStatusOutcome()>>(
        [this, request]()
        {
            return this->ModifyPurgeFetchTaskStatus(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::PurgePathCacheOutcome CdnClient::PurgePathCache(const PurgePathCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PurgePathCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurgePathCacheResponse rsp = PurgePathCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurgePathCacheOutcome(rsp);
        else
            return PurgePathCacheOutcome(o.GetError());
    }
    else
    {
        return PurgePathCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PurgePathCacheAsync(const PurgePathCacheRequest& request, const PurgePathCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PurgePathCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::PurgePathCacheOutcomeCallable CdnClient::PurgePathCacheCallable(const PurgePathCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PurgePathCacheOutcome()>>(
        [this, request]()
        {
            return this->PurgePathCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::PurgeUrlsCacheOutcome CdnClient::PurgeUrlsCache(const PurgeUrlsCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PurgeUrlsCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PurgeUrlsCacheResponse rsp = PurgeUrlsCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PurgeUrlsCacheOutcome(rsp);
        else
            return PurgeUrlsCacheOutcome(o.GetError());
    }
    else
    {
        return PurgeUrlsCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PurgeUrlsCacheAsync(const PurgeUrlsCacheRequest& request, const PurgeUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PurgeUrlsCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::PurgeUrlsCacheOutcomeCallable CdnClient::PurgeUrlsCacheCallable(const PurgeUrlsCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PurgeUrlsCacheOutcome()>>(
        [this, request]()
        {
            return this->PurgeUrlsCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::PushUrlsCacheOutcome CdnClient::PushUrlsCache(const PushUrlsCacheRequest &request)
{
    auto outcome = MakeRequest(request, "PushUrlsCache");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        PushUrlsCacheResponse rsp = PushUrlsCacheResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return PushUrlsCacheOutcome(rsp);
        else
            return PushUrlsCacheOutcome(o.GetError());
    }
    else
    {
        return PushUrlsCacheOutcome(outcome.GetError());
    }
}

void CdnClient::PushUrlsCacheAsync(const PushUrlsCacheRequest& request, const PushUrlsCacheAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->PushUrlsCache(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::PushUrlsCacheOutcomeCallable CdnClient::PushUrlsCacheCallable(const PushUrlsCacheRequest &request)
{
    auto task = std::make_shared<std::packaged_task<PushUrlsCacheOutcome()>>(
        [this, request]()
        {
            return this->PushUrlsCache(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::SearchClsLogOutcome CdnClient::SearchClsLog(const SearchClsLogRequest &request)
{
    auto outcome = MakeRequest(request, "SearchClsLog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SearchClsLogResponse rsp = SearchClsLogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SearchClsLogOutcome(rsp);
        else
            return SearchClsLogOutcome(o.GetError());
    }
    else
    {
        return SearchClsLogOutcome(outcome.GetError());
    }
}

void CdnClient::SearchClsLogAsync(const SearchClsLogRequest& request, const SearchClsLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SearchClsLog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::SearchClsLogOutcomeCallable CdnClient::SearchClsLogCallable(const SearchClsLogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SearchClsLogOutcome()>>(
        [this, request]()
        {
            return this->SearchClsLog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::StartCdnDomainOutcome CdnClient::StartCdnDomain(const StartCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StartCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartCdnDomainResponse rsp = StartCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartCdnDomainOutcome(rsp);
        else
            return StartCdnDomainOutcome(o.GetError());
    }
    else
    {
        return StartCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::StartCdnDomainAsync(const StartCdnDomainRequest& request, const StartCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartCdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::StartCdnDomainOutcomeCallable CdnClient::StartCdnDomainCallable(const StartCdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartCdnDomainOutcome()>>(
        [this, request]()
        {
            return this->StartCdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::StartScdnDomainOutcome CdnClient::StartScdnDomain(const StartScdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StartScdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StartScdnDomainResponse rsp = StartScdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StartScdnDomainOutcome(rsp);
        else
            return StartScdnDomainOutcome(o.GetError());
    }
    else
    {
        return StartScdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::StartScdnDomainAsync(const StartScdnDomainRequest& request, const StartScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StartScdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::StartScdnDomainOutcomeCallable CdnClient::StartScdnDomainCallable(const StartScdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StartScdnDomainOutcome()>>(
        [this, request]()
        {
            return this->StartScdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::StopCdnDomainOutcome CdnClient::StopCdnDomain(const StopCdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StopCdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopCdnDomainResponse rsp = StopCdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopCdnDomainOutcome(rsp);
        else
            return StopCdnDomainOutcome(o.GetError());
    }
    else
    {
        return StopCdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::StopCdnDomainAsync(const StopCdnDomainRequest& request, const StopCdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopCdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::StopCdnDomainOutcomeCallable CdnClient::StopCdnDomainCallable(const StopCdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopCdnDomainOutcome()>>(
        [this, request]()
        {
            return this->StopCdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::StopScdnDomainOutcome CdnClient::StopScdnDomain(const StopScdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "StopScdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopScdnDomainResponse rsp = StopScdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopScdnDomainOutcome(rsp);
        else
            return StopScdnDomainOutcome(o.GetError());
    }
    else
    {
        return StopScdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::StopScdnDomainAsync(const StopScdnDomainRequest& request, const StopScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopScdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::StopScdnDomainOutcomeCallable CdnClient::StopScdnDomainCallable(const StopScdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopScdnDomainOutcome()>>(
        [this, request]()
        {
            return this->StopScdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::UpdateDomainConfigOutcome CdnClient::UpdateDomainConfig(const UpdateDomainConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateDomainConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateDomainConfigResponse rsp = UpdateDomainConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateDomainConfigOutcome(rsp);
        else
            return UpdateDomainConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateDomainConfigOutcome(outcome.GetError());
    }
}

void CdnClient::UpdateDomainConfigAsync(const UpdateDomainConfigRequest& request, const UpdateDomainConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateDomainConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::UpdateDomainConfigOutcomeCallable CdnClient::UpdateDomainConfigCallable(const UpdateDomainConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateDomainConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateDomainConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::UpdateImageConfigOutcome CdnClient::UpdateImageConfig(const UpdateImageConfigRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateImageConfig");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateImageConfigResponse rsp = UpdateImageConfigResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateImageConfigOutcome(rsp);
        else
            return UpdateImageConfigOutcome(o.GetError());
    }
    else
    {
        return UpdateImageConfigOutcome(outcome.GetError());
    }
}

void CdnClient::UpdateImageConfigAsync(const UpdateImageConfigRequest& request, const UpdateImageConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateImageConfig(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::UpdateImageConfigOutcomeCallable CdnClient::UpdateImageConfigCallable(const UpdateImageConfigRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateImageConfigOutcome()>>(
        [this, request]()
        {
            return this->UpdateImageConfig(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::UpdatePayTypeOutcome CdnClient::UpdatePayType(const UpdatePayTypeRequest &request)
{
    auto outcome = MakeRequest(request, "UpdatePayType");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdatePayTypeResponse rsp = UpdatePayTypeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdatePayTypeOutcome(rsp);
        else
            return UpdatePayTypeOutcome(o.GetError());
    }
    else
    {
        return UpdatePayTypeOutcome(outcome.GetError());
    }
}

void CdnClient::UpdatePayTypeAsync(const UpdatePayTypeRequest& request, const UpdatePayTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdatePayType(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::UpdatePayTypeOutcomeCallable CdnClient::UpdatePayTypeCallable(const UpdatePayTypeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdatePayTypeOutcome()>>(
        [this, request]()
        {
            return this->UpdatePayType(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::UpdateScdnDomainOutcome CdnClient::UpdateScdnDomain(const UpdateScdnDomainRequest &request)
{
    auto outcome = MakeRequest(request, "UpdateScdnDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        UpdateScdnDomainResponse rsp = UpdateScdnDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return UpdateScdnDomainOutcome(rsp);
        else
            return UpdateScdnDomainOutcome(o.GetError());
    }
    else
    {
        return UpdateScdnDomainOutcome(outcome.GetError());
    }
}

void CdnClient::UpdateScdnDomainAsync(const UpdateScdnDomainRequest& request, const UpdateScdnDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->UpdateScdnDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::UpdateScdnDomainOutcomeCallable CdnClient::UpdateScdnDomainCallable(const UpdateScdnDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<UpdateScdnDomainOutcome()>>(
        [this, request]()
        {
            return this->UpdateScdnDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CdnClient::VerifyDomainRecordOutcome CdnClient::VerifyDomainRecord(const VerifyDomainRecordRequest &request)
{
    auto outcome = MakeRequest(request, "VerifyDomainRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        VerifyDomainRecordResponse rsp = VerifyDomainRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return VerifyDomainRecordOutcome(rsp);
        else
            return VerifyDomainRecordOutcome(o.GetError());
    }
    else
    {
        return VerifyDomainRecordOutcome(outcome.GetError());
    }
}

void CdnClient::VerifyDomainRecordAsync(const VerifyDomainRecordRequest& request, const VerifyDomainRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->VerifyDomainRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CdnClient::VerifyDomainRecordOutcomeCallable CdnClient::VerifyDomainRecordCallable(const VerifyDomainRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<VerifyDomainRecordOutcome()>>(
        [this, request]()
        {
            return this->VerifyDomainRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

