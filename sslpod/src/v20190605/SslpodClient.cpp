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

#include <tencentcloud/sslpod/v20190605/SslpodClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Sslpod::V20190605;
using namespace TencentCloud::Sslpod::V20190605::Model;
using namespace std;

namespace
{
    const string VERSION = "2019-06-05";
    const string ENDPOINT = "sslpod.tencentcloudapi.com";
}

SslpodClient::SslpodClient(const Credential &credential, const string &region) :
    SslpodClient(credential, region, ClientProfile())
{
}

SslpodClient::SslpodClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SslpodClient::CreateDomainOutcome SslpodClient::CreateDomain(const CreateDomainRequest &request)
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

void SslpodClient::CreateDomainAsync(const CreateDomainRequest& request, const CreateDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::CreateDomainOutcomeCallable SslpodClient::CreateDomainCallable(const CreateDomainRequest &request)
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

SslpodClient::DeleteDomainOutcome SslpodClient::DeleteDomain(const DeleteDomainRequest &request)
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

void SslpodClient::DeleteDomainAsync(const DeleteDomainRequest& request, const DeleteDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::DeleteDomainOutcomeCallable SslpodClient::DeleteDomainCallable(const DeleteDomainRequest &request)
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

SslpodClient::DescribeDashboardOutcome SslpodClient::DescribeDashboard(const DescribeDashboardRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDashboard");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDashboardResponse rsp = DescribeDashboardResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDashboardOutcome(rsp);
        else
            return DescribeDashboardOutcome(o.GetError());
    }
    else
    {
        return DescribeDashboardOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDashboardAsync(const DescribeDashboardRequest& request, const DescribeDashboardAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDashboard(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::DescribeDashboardOutcomeCallable SslpodClient::DescribeDashboardCallable(const DescribeDashboardRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDashboardOutcome()>>(
        [this, request]()
        {
            return this->DescribeDashboard(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslpodClient::DescribeDomainCertsOutcome SslpodClient::DescribeDomainCerts(const DescribeDomainCertsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainCerts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainCertsResponse rsp = DescribeDomainCertsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainCertsOutcome(rsp);
        else
            return DescribeDomainCertsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainCertsOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDomainCertsAsync(const DescribeDomainCertsRequest& request, const DescribeDomainCertsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainCerts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::DescribeDomainCertsOutcomeCallable SslpodClient::DescribeDomainCertsCallable(const DescribeDomainCertsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainCertsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainCerts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslpodClient::DescribeDomainTagsOutcome SslpodClient::DescribeDomainTags(const DescribeDomainTagsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDomainTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDomainTagsResponse rsp = DescribeDomainTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDomainTagsOutcome(rsp);
        else
            return DescribeDomainTagsOutcome(o.GetError());
    }
    else
    {
        return DescribeDomainTagsOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeDomainTagsAsync(const DescribeDomainTagsRequest& request, const DescribeDomainTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomainTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::DescribeDomainTagsOutcomeCallable SslpodClient::DescribeDomainTagsCallable(const DescribeDomainTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDomainTagsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDomainTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslpodClient::DescribeDomainsOutcome SslpodClient::DescribeDomains(const DescribeDomainsRequest &request)
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

void SslpodClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::DescribeDomainsOutcomeCallable SslpodClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
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

SslpodClient::DescribeNoticeInfoOutcome SslpodClient::DescribeNoticeInfo(const DescribeNoticeInfoRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNoticeInfo");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNoticeInfoResponse rsp = DescribeNoticeInfoResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNoticeInfoOutcome(rsp);
        else
            return DescribeNoticeInfoOutcome(o.GetError());
    }
    else
    {
        return DescribeNoticeInfoOutcome(outcome.GetError());
    }
}

void SslpodClient::DescribeNoticeInfoAsync(const DescribeNoticeInfoRequest& request, const DescribeNoticeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNoticeInfo(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::DescribeNoticeInfoOutcomeCallable SslpodClient::DescribeNoticeInfoCallable(const DescribeNoticeInfoRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNoticeInfoOutcome()>>(
        [this, request]()
        {
            return this->DescribeNoticeInfo(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslpodClient::ModifyDomainTagsOutcome SslpodClient::ModifyDomainTags(const ModifyDomainTagsRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyDomainTags");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyDomainTagsResponse rsp = ModifyDomainTagsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyDomainTagsOutcome(rsp);
        else
            return ModifyDomainTagsOutcome(o.GetError());
    }
    else
    {
        return ModifyDomainTagsOutcome(outcome.GetError());
    }
}

void SslpodClient::ModifyDomainTagsAsync(const ModifyDomainTagsRequest& request, const ModifyDomainTagsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyDomainTags(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::ModifyDomainTagsOutcomeCallable SslpodClient::ModifyDomainTagsCallable(const ModifyDomainTagsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyDomainTagsOutcome()>>(
        [this, request]()
        {
            return this->ModifyDomainTags(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslpodClient::RefreshDomainOutcome SslpodClient::RefreshDomain(const RefreshDomainRequest &request)
{
    auto outcome = MakeRequest(request, "RefreshDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        RefreshDomainResponse rsp = RefreshDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return RefreshDomainOutcome(rsp);
        else
            return RefreshDomainOutcome(o.GetError());
    }
    else
    {
        return RefreshDomainOutcome(outcome.GetError());
    }
}

void SslpodClient::RefreshDomainAsync(const RefreshDomainRequest& request, const RefreshDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->RefreshDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::RefreshDomainOutcomeCallable SslpodClient::RefreshDomainCallable(const RefreshDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<RefreshDomainOutcome()>>(
        [this, request]()
        {
            return this->RefreshDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SslpodClient::ResolveDomainOutcome SslpodClient::ResolveDomain(const ResolveDomainRequest &request)
{
    auto outcome = MakeRequest(request, "ResolveDomain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ResolveDomainResponse rsp = ResolveDomainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ResolveDomainOutcome(rsp);
        else
            return ResolveDomainOutcome(o.GetError());
    }
    else
    {
        return ResolveDomainOutcome(outcome.GetError());
    }
}

void SslpodClient::ResolveDomainAsync(const ResolveDomainRequest& request, const ResolveDomainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ResolveDomain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SslpodClient::ResolveDomainOutcomeCallable SslpodClient::ResolveDomainCallable(const ResolveDomainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ResolveDomainOutcome()>>(
        [this, request]()
        {
            return this->ResolveDomain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

