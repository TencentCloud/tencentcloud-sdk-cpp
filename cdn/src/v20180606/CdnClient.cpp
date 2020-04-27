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

