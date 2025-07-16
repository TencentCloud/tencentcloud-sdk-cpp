/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#include <tencentcloud/ctem/v20231128/CtemClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ctem::V20231128;
using namespace TencentCloud::Ctem::V20231128::Model;
using namespace std;

namespace
{
    const string VERSION = "2023-11-28";
    const string ENDPOINT = "ctem.tencentcloudapi.com";
}

CtemClient::CtemClient(const Credential &credential, const string &region) :
    CtemClient(credential, region, ClientProfile())
{
}

CtemClient::CtemClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


CtemClient::CreateCustomerOutcome CtemClient::CreateCustomer(const CreateCustomerRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCustomer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCustomerResponse rsp = CreateCustomerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCustomerOutcome(rsp);
        else
            return CreateCustomerOutcome(o.GetError());
    }
    else
    {
        return CreateCustomerOutcome(outcome.GetError());
    }
}

void CtemClient::CreateCustomerAsync(const CreateCustomerRequest& request, const CreateCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCustomer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::CreateCustomerOutcomeCallable CtemClient::CreateCustomerCallable(const CreateCustomerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCustomerOutcome()>>(
        [this, request]()
        {
            return this->CreateCustomer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::CreateJobRecordOutcome CtemClient::CreateJobRecord(const CreateJobRecordRequest &request)
{
    auto outcome = MakeRequest(request, "CreateJobRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateJobRecordResponse rsp = CreateJobRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateJobRecordOutcome(rsp);
        else
            return CreateJobRecordOutcome(o.GetError());
    }
    else
    {
        return CreateJobRecordOutcome(outcome.GetError());
    }
}

void CtemClient::CreateJobRecordAsync(const CreateJobRecordRequest& request, const CreateJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateJobRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::CreateJobRecordOutcomeCallable CtemClient::CreateJobRecordCallable(const CreateJobRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateJobRecordOutcome()>>(
        [this, request]()
        {
            return this->CreateJobRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeAppsOutcome CtemClient::DescribeApps(const DescribeAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAppsResponse rsp = DescribeAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAppsOutcome(rsp);
        else
            return DescribeAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeAppsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeAppsAsync(const DescribeAppsRequest& request, const DescribeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeApps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeAppsOutcomeCallable CtemClient::DescribeAppsCallable(const DescribeAppsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAppsOutcome()>>(
        [this, request]()
        {
            return this->DescribeApps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeAssetsOutcome CtemClient::DescribeAssets(const DescribeAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetsResponse rsp = DescribeAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetsOutcome(rsp);
        else
            return DescribeAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeAssetsAsync(const DescribeAssetsRequest& request, const DescribeAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeAssetsOutcomeCallable CtemClient::DescribeAssetsCallable(const DescribeAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeConfigsOutcome CtemClient::DescribeConfigs(const DescribeConfigsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigsResponse rsp = DescribeConfigsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigsOutcome(rsp);
        else
            return DescribeConfigsOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeConfigsAsync(const DescribeConfigsRequest& request, const DescribeConfigsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeConfigsOutcomeCallable CtemClient::DescribeConfigsCallable(const DescribeConfigsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigsOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeCustomersOutcome CtemClient::DescribeCustomers(const DescribeCustomersRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCustomers");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCustomersResponse rsp = DescribeCustomersResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCustomersOutcome(rsp);
        else
            return DescribeCustomersOutcome(o.GetError());
    }
    else
    {
        return DescribeCustomersOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeCustomersAsync(const DescribeCustomersRequest& request, const DescribeCustomersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCustomers(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeCustomersOutcomeCallable CtemClient::DescribeCustomersCallable(const DescribeCustomersRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCustomersOutcome()>>(
        [this, request]()
        {
            return this->DescribeCustomers(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeDarkWebsOutcome CtemClient::DescribeDarkWebs(const DescribeDarkWebsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeDarkWebs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeDarkWebsResponse rsp = DescribeDarkWebsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeDarkWebsOutcome(rsp);
        else
            return DescribeDarkWebsOutcome(o.GetError());
    }
    else
    {
        return DescribeDarkWebsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeDarkWebsAsync(const DescribeDarkWebsRequest& request, const DescribeDarkWebsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDarkWebs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeDarkWebsOutcomeCallable CtemClient::DescribeDarkWebsCallable(const DescribeDarkWebsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeDarkWebsOutcome()>>(
        [this, request]()
        {
            return this->DescribeDarkWebs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeDomainsOutcome CtemClient::DescribeDomains(const DescribeDomainsRequest &request)
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

void CtemClient::DescribeDomainsAsync(const DescribeDomainsRequest& request, const DescribeDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeDomainsOutcomeCallable CtemClient::DescribeDomainsCallable(const DescribeDomainsRequest &request)
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

CtemClient::DescribeEnterprisesOutcome CtemClient::DescribeEnterprises(const DescribeEnterprisesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEnterprises");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEnterprisesResponse rsp = DescribeEnterprisesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEnterprisesOutcome(rsp);
        else
            return DescribeEnterprisesOutcome(o.GetError());
    }
    else
    {
        return DescribeEnterprisesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeEnterprisesAsync(const DescribeEnterprisesRequest& request, const DescribeEnterprisesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEnterprises(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeEnterprisesOutcomeCallable CtemClient::DescribeEnterprisesCallable(const DescribeEnterprisesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEnterprisesOutcome()>>(
        [this, request]()
        {
            return this->DescribeEnterprises(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeFakeAppsOutcome CtemClient::DescribeFakeApps(const DescribeFakeAppsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeApps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeAppsResponse rsp = DescribeFakeAppsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeAppsOutcome(rsp);
        else
            return DescribeFakeAppsOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeAppsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeAppsAsync(const DescribeFakeAppsRequest& request, const DescribeFakeAppsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFakeApps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeFakeAppsOutcomeCallable CtemClient::DescribeFakeAppsCallable(const DescribeFakeAppsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFakeAppsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFakeApps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeFakeMiniProgramsOutcome CtemClient::DescribeFakeMiniPrograms(const DescribeFakeMiniProgramsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeMiniPrograms");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeMiniProgramsResponse rsp = DescribeFakeMiniProgramsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeMiniProgramsOutcome(rsp);
        else
            return DescribeFakeMiniProgramsOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeMiniProgramsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeMiniProgramsAsync(const DescribeFakeMiniProgramsRequest& request, const DescribeFakeMiniProgramsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFakeMiniPrograms(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeFakeMiniProgramsOutcomeCallable CtemClient::DescribeFakeMiniProgramsCallable(const DescribeFakeMiniProgramsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFakeMiniProgramsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFakeMiniPrograms(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeFakeWebsitesOutcome CtemClient::DescribeFakeWebsites(const DescribeFakeWebsitesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeWebsites");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeWebsitesResponse rsp = DescribeFakeWebsitesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeWebsitesOutcome(rsp);
        else
            return DescribeFakeWebsitesOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeWebsitesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeWebsitesAsync(const DescribeFakeWebsitesRequest& request, const DescribeFakeWebsitesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFakeWebsites(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeFakeWebsitesOutcomeCallable CtemClient::DescribeFakeWebsitesCallable(const DescribeFakeWebsitesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFakeWebsitesOutcome()>>(
        [this, request]()
        {
            return this->DescribeFakeWebsites(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeFakeWechatOfficialsOutcome CtemClient::DescribeFakeWechatOfficials(const DescribeFakeWechatOfficialsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeFakeWechatOfficials");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeFakeWechatOfficialsResponse rsp = DescribeFakeWechatOfficialsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeFakeWechatOfficialsOutcome(rsp);
        else
            return DescribeFakeWechatOfficialsOutcome(o.GetError());
    }
    else
    {
        return DescribeFakeWechatOfficialsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeFakeWechatOfficialsAsync(const DescribeFakeWechatOfficialsRequest& request, const DescribeFakeWechatOfficialsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeFakeWechatOfficials(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeFakeWechatOfficialsOutcomeCallable CtemClient::DescribeFakeWechatOfficialsCallable(const DescribeFakeWechatOfficialsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeFakeWechatOfficialsOutcome()>>(
        [this, request]()
        {
            return this->DescribeFakeWechatOfficials(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeGithubsOutcome CtemClient::DescribeGithubs(const DescribeGithubsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeGithubs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeGithubsResponse rsp = DescribeGithubsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeGithubsOutcome(rsp);
        else
            return DescribeGithubsOutcome(o.GetError());
    }
    else
    {
        return DescribeGithubsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeGithubsAsync(const DescribeGithubsRequest& request, const DescribeGithubsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeGithubs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeGithubsOutcomeCallable CtemClient::DescribeGithubsCallable(const DescribeGithubsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeGithubsOutcome()>>(
        [this, request]()
        {
            return this->DescribeGithubs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeHttpsOutcome CtemClient::DescribeHttps(const DescribeHttpsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeHttps");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeHttpsResponse rsp = DescribeHttpsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeHttpsOutcome(rsp);
        else
            return DescribeHttpsOutcome(o.GetError());
    }
    else
    {
        return DescribeHttpsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeHttpsAsync(const DescribeHttpsRequest& request, const DescribeHttpsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeHttps(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeHttpsOutcomeCallable CtemClient::DescribeHttpsCallable(const DescribeHttpsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeHttpsOutcome()>>(
        [this, request]()
        {
            return this->DescribeHttps(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeJobRecordDetailsOutcome CtemClient::DescribeJobRecordDetails(const DescribeJobRecordDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobRecordDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobRecordDetailsResponse rsp = DescribeJobRecordDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobRecordDetailsOutcome(rsp);
        else
            return DescribeJobRecordDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobRecordDetailsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeJobRecordDetailsAsync(const DescribeJobRecordDetailsRequest& request, const DescribeJobRecordDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobRecordDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeJobRecordDetailsOutcomeCallable CtemClient::DescribeJobRecordDetailsCallable(const DescribeJobRecordDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobRecordDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobRecordDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeJobRecordsOutcome CtemClient::DescribeJobRecords(const DescribeJobRecordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeJobRecords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeJobRecordsResponse rsp = DescribeJobRecordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeJobRecordsOutcome(rsp);
        else
            return DescribeJobRecordsOutcome(o.GetError());
    }
    else
    {
        return DescribeJobRecordsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeJobRecordsAsync(const DescribeJobRecordsRequest& request, const DescribeJobRecordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeJobRecords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeJobRecordsOutcomeCallable CtemClient::DescribeJobRecordsCallable(const DescribeJobRecordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeJobRecordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeJobRecords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeLeakageCodesOutcome CtemClient::DescribeLeakageCodes(const DescribeLeakageCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakageCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakageCodesResponse rsp = DescribeLeakageCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakageCodesOutcome(rsp);
        else
            return DescribeLeakageCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakageCodesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeLeakageCodesAsync(const DescribeLeakageCodesRequest& request, const DescribeLeakageCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLeakageCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeLeakageCodesOutcomeCallable CtemClient::DescribeLeakageCodesCallable(const DescribeLeakageCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLeakageCodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeLeakageCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeLeakageDatasOutcome CtemClient::DescribeLeakageDatas(const DescribeLeakageDatasRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakageDatas");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakageDatasResponse rsp = DescribeLeakageDatasResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakageDatasOutcome(rsp);
        else
            return DescribeLeakageDatasOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakageDatasOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeLeakageDatasAsync(const DescribeLeakageDatasRequest& request, const DescribeLeakageDatasAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLeakageDatas(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeLeakageDatasOutcomeCallable CtemClient::DescribeLeakageDatasCallable(const DescribeLeakageDatasRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLeakageDatasOutcome()>>(
        [this, request]()
        {
            return this->DescribeLeakageDatas(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeLeakageEmailsOutcome CtemClient::DescribeLeakageEmails(const DescribeLeakageEmailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakageEmails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakageEmailsResponse rsp = DescribeLeakageEmailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakageEmailsOutcome(rsp);
        else
            return DescribeLeakageEmailsOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakageEmailsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeLeakageEmailsAsync(const DescribeLeakageEmailsRequest& request, const DescribeLeakageEmailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLeakageEmails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeLeakageEmailsOutcomeCallable CtemClient::DescribeLeakageEmailsCallable(const DescribeLeakageEmailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLeakageEmailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeLeakageEmails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeManagesOutcome CtemClient::DescribeManages(const DescribeManagesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeManages");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeManagesResponse rsp = DescribeManagesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeManagesOutcome(rsp);
        else
            return DescribeManagesOutcome(o.GetError());
    }
    else
    {
        return DescribeManagesOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeManagesAsync(const DescribeManagesRequest& request, const DescribeManagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeManages(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeManagesOutcomeCallable CtemClient::DescribeManagesCallable(const DescribeManagesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeManagesOutcome()>>(
        [this, request]()
        {
            return this->DescribeManages(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeNetDisksOutcome CtemClient::DescribeNetDisks(const DescribeNetDisksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNetDisks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNetDisksResponse rsp = DescribeNetDisksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNetDisksOutcome(rsp);
        else
            return DescribeNetDisksOutcome(o.GetError());
    }
    else
    {
        return DescribeNetDisksOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeNetDisksAsync(const DescribeNetDisksRequest& request, const DescribeNetDisksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNetDisks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeNetDisksOutcomeCallable CtemClient::DescribeNetDisksCallable(const DescribeNetDisksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNetDisksOutcome()>>(
        [this, request]()
        {
            return this->DescribeNetDisks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribePortsOutcome CtemClient::DescribePorts(const DescribePortsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribePorts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribePortsResponse rsp = DescribePortsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribePortsOutcome(rsp);
        else
            return DescribePortsOutcome(o.GetError());
    }
    else
    {
        return DescribePortsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribePortsAsync(const DescribePortsRequest& request, const DescribePortsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribePorts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribePortsOutcomeCallable CtemClient::DescribePortsCallable(const DescribePortsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribePortsOutcome()>>(
        [this, request]()
        {
            return this->DescribePorts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeSensitiveInfosOutcome CtemClient::DescribeSensitiveInfos(const DescribeSensitiveInfosRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSensitiveInfos");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSensitiveInfosResponse rsp = DescribeSensitiveInfosResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSensitiveInfosOutcome(rsp);
        else
            return DescribeSensitiveInfosOutcome(o.GetError());
    }
    else
    {
        return DescribeSensitiveInfosOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSensitiveInfosAsync(const DescribeSensitiveInfosRequest& request, const DescribeSensitiveInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSensitiveInfos(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeSensitiveInfosOutcomeCallable CtemClient::DescribeSensitiveInfosCallable(const DescribeSensitiveInfosRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSensitiveInfosOutcome()>>(
        [this, request]()
        {
            return this->DescribeSensitiveInfos(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeSubDomainsOutcome CtemClient::DescribeSubDomains(const DescribeSubDomainsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSubDomains");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSubDomainsResponse rsp = DescribeSubDomainsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSubDomainsOutcome(rsp);
        else
            return DescribeSubDomainsOutcome(o.GetError());
    }
    else
    {
        return DescribeSubDomainsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSubDomainsAsync(const DescribeSubDomainsRequest& request, const DescribeSubDomainsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSubDomains(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeSubDomainsOutcomeCallable CtemClient::DescribeSubDomainsCallable(const DescribeSubDomainsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSubDomainsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSubDomains(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeSuspiciousAssetsOutcome CtemClient::DescribeSuspiciousAssets(const DescribeSuspiciousAssetsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSuspiciousAssets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSuspiciousAssetsResponse rsp = DescribeSuspiciousAssetsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSuspiciousAssetsOutcome(rsp);
        else
            return DescribeSuspiciousAssetsOutcome(o.GetError());
    }
    else
    {
        return DescribeSuspiciousAssetsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeSuspiciousAssetsAsync(const DescribeSuspiciousAssetsRequest& request, const DescribeSuspiciousAssetsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSuspiciousAssets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeSuspiciousAssetsOutcomeCallable CtemClient::DescribeSuspiciousAssetsCallable(const DescribeSuspiciousAssetsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSuspiciousAssetsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSuspiciousAssets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeVulsOutcome CtemClient::DescribeVuls(const DescribeVulsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVuls");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulsResponse rsp = DescribeVulsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulsOutcome(rsp);
        else
            return DescribeVulsOutcome(o.GetError());
    }
    else
    {
        return DescribeVulsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeVulsAsync(const DescribeVulsRequest& request, const DescribeVulsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVuls(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeVulsOutcomeCallable CtemClient::DescribeVulsCallable(const DescribeVulsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulsOutcome()>>(
        [this, request]()
        {
            return this->DescribeVuls(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeWeakPasswordsOutcome CtemClient::DescribeWeakPasswords(const DescribeWeakPasswordsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWeakPasswords");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWeakPasswordsResponse rsp = DescribeWeakPasswordsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWeakPasswordsOutcome(rsp);
        else
            return DescribeWeakPasswordsOutcome(o.GetError());
    }
    else
    {
        return DescribeWeakPasswordsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeWeakPasswordsAsync(const DescribeWeakPasswordsRequest& request, const DescribeWeakPasswordsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWeakPasswords(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeWeakPasswordsOutcomeCallable CtemClient::DescribeWeakPasswordsCallable(const DescribeWeakPasswordsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWeakPasswordsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWeakPasswords(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeWechatAppletsOutcome CtemClient::DescribeWechatApplets(const DescribeWechatAppletsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWechatApplets");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWechatAppletsResponse rsp = DescribeWechatAppletsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWechatAppletsOutcome(rsp);
        else
            return DescribeWechatAppletsOutcome(o.GetError());
    }
    else
    {
        return DescribeWechatAppletsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeWechatAppletsAsync(const DescribeWechatAppletsRequest& request, const DescribeWechatAppletsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWechatApplets(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeWechatAppletsOutcomeCallable CtemClient::DescribeWechatAppletsCallable(const DescribeWechatAppletsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWechatAppletsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWechatApplets(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::DescribeWechatOfficialAccountsOutcome CtemClient::DescribeWechatOfficialAccounts(const DescribeWechatOfficialAccountsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeWechatOfficialAccounts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeWechatOfficialAccountsResponse rsp = DescribeWechatOfficialAccountsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeWechatOfficialAccountsOutcome(rsp);
        else
            return DescribeWechatOfficialAccountsOutcome(o.GetError());
    }
    else
    {
        return DescribeWechatOfficialAccountsOutcome(outcome.GetError());
    }
}

void CtemClient::DescribeWechatOfficialAccountsAsync(const DescribeWechatOfficialAccountsRequest& request, const DescribeWechatOfficialAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeWechatOfficialAccounts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::DescribeWechatOfficialAccountsOutcomeCallable CtemClient::DescribeWechatOfficialAccountsCallable(const DescribeWechatOfficialAccountsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeWechatOfficialAccountsOutcome()>>(
        [this, request]()
        {
            return this->DescribeWechatOfficialAccounts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::ModifyCustomerOutcome CtemClient::ModifyCustomer(const ModifyCustomerRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCustomer");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCustomerResponse rsp = ModifyCustomerResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCustomerOutcome(rsp);
        else
            return ModifyCustomerOutcome(o.GetError());
    }
    else
    {
        return ModifyCustomerOutcome(outcome.GetError());
    }
}

void CtemClient::ModifyCustomerAsync(const ModifyCustomerRequest& request, const ModifyCustomerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCustomer(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::ModifyCustomerOutcomeCallable CtemClient::ModifyCustomerCallable(const ModifyCustomerRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCustomerOutcome()>>(
        [this, request]()
        {
            return this->ModifyCustomer(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

CtemClient::StopJobRecordOutcome CtemClient::StopJobRecord(const StopJobRecordRequest &request)
{
    auto outcome = MakeRequest(request, "StopJobRecord");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        StopJobRecordResponse rsp = StopJobRecordResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return StopJobRecordOutcome(rsp);
        else
            return StopJobRecordOutcome(o.GetError());
    }
    else
    {
        return StopJobRecordOutcome(outcome.GetError());
    }
}

void CtemClient::StopJobRecordAsync(const StopJobRecordRequest& request, const StopJobRecordAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->StopJobRecord(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

CtemClient::StopJobRecordOutcomeCallable CtemClient::StopJobRecordCallable(const StopJobRecordRequest &request)
{
    auto task = std::make_shared<std::packaged_task<StopJobRecordOutcome()>>(
        [this, request]()
        {
            return this->StopJobRecord(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

