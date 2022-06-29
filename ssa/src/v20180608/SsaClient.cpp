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

#include <tencentcloud/ssa/v20180608/SsaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Ssa::V20180608;
using namespace TencentCloud::Ssa::V20180608::Model;
using namespace std;

namespace
{
    const string VERSION = "2018-06-08";
    const string ENDPOINT = "ssa.tencentcloudapi.com";
}

SsaClient::SsaClient(const Credential &credential, const string &region) :
    SsaClient(credential, region, ClientProfile())
{
}

SsaClient::SsaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


SsaClient::DescribeAssetDetailOutcome SsaClient::DescribeAssetDetail(const DescribeAssetDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetDetailResponse rsp = DescribeAssetDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetDetailOutcome(rsp);
        else
            return DescribeAssetDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAssetDetailAsync(const DescribeAssetDetailRequest& request, const DescribeAssetDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeAssetDetailOutcomeCallable SsaClient::DescribeAssetDetailCallable(const DescribeAssetDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeAssetListOutcome SsaClient::DescribeAssetList(const DescribeAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetListResponse rsp = DescribeAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetListOutcome(rsp);
        else
            return DescribeAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAssetListAsync(const DescribeAssetListRequest& request, const DescribeAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeAssetListOutcomeCallable SsaClient::DescribeAssetListCallable(const DescribeAssetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeAssetsMappingListOutcome SsaClient::DescribeAssetsMappingList(const DescribeAssetsMappingListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeAssetsMappingList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeAssetsMappingListResponse rsp = DescribeAssetsMappingListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeAssetsMappingListOutcome(rsp);
        else
            return DescribeAssetsMappingListOutcome(o.GetError());
    }
    else
    {
        return DescribeAssetsMappingListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeAssetsMappingListAsync(const DescribeAssetsMappingListRequest& request, const DescribeAssetsMappingListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeAssetsMappingList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeAssetsMappingListOutcomeCallable SsaClient::DescribeAssetsMappingListCallable(const DescribeAssetsMappingListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeAssetsMappingListOutcome()>>(
        [this, request]()
        {
            return this->DescribeAssetsMappingList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeCheckConfigAssetListOutcome SsaClient::DescribeCheckConfigAssetList(const DescribeCheckConfigAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckConfigAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckConfigAssetListResponse rsp = DescribeCheckConfigAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckConfigAssetListOutcome(rsp);
        else
            return DescribeCheckConfigAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckConfigAssetListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeCheckConfigAssetListAsync(const DescribeCheckConfigAssetListRequest& request, const DescribeCheckConfigAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCheckConfigAssetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeCheckConfigAssetListOutcomeCallable SsaClient::DescribeCheckConfigAssetListCallable(const DescribeCheckConfigAssetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCheckConfigAssetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeCheckConfigAssetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeCheckConfigDetailOutcome SsaClient::DescribeCheckConfigDetail(const DescribeCheckConfigDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCheckConfigDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCheckConfigDetailResponse rsp = DescribeCheckConfigDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCheckConfigDetailOutcome(rsp);
        else
            return DescribeCheckConfigDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeCheckConfigDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeCheckConfigDetailAsync(const DescribeCheckConfigDetailRequest& request, const DescribeCheckConfigDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCheckConfigDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeCheckConfigDetailOutcomeCallable SsaClient::DescribeCheckConfigDetailCallable(const DescribeCheckConfigDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCheckConfigDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeCheckConfigDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeComplianceAssetListOutcome SsaClient::DescribeComplianceAssetList(const DescribeComplianceAssetListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceAssetList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceAssetListResponse rsp = DescribeComplianceAssetListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceAssetListOutcome(rsp);
        else
            return DescribeComplianceAssetListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceAssetListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeComplianceAssetListAsync(const DescribeComplianceAssetListRequest& request, const DescribeComplianceAssetListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceAssetList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeComplianceAssetListOutcomeCallable SsaClient::DescribeComplianceAssetListCallable(const DescribeComplianceAssetListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceAssetListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceAssetList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeComplianceDetailOutcome SsaClient::DescribeComplianceDetail(const DescribeComplianceDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceDetailResponse rsp = DescribeComplianceDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceDetailOutcome(rsp);
        else
            return DescribeComplianceDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeComplianceDetailAsync(const DescribeComplianceDetailRequest& request, const DescribeComplianceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeComplianceDetailOutcomeCallable SsaClient::DescribeComplianceDetailCallable(const DescribeComplianceDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeComplianceListOutcome SsaClient::DescribeComplianceList(const DescribeComplianceListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeComplianceList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeComplianceListResponse rsp = DescribeComplianceListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeComplianceListOutcome(rsp);
        else
            return DescribeComplianceListOutcome(o.GetError());
    }
    else
    {
        return DescribeComplianceListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeComplianceListAsync(const DescribeComplianceListRequest& request, const DescribeComplianceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeComplianceList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeComplianceListOutcomeCallable SsaClient::DescribeComplianceListCallable(const DescribeComplianceListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeComplianceListOutcome()>>(
        [this, request]()
        {
            return this->DescribeComplianceList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeConfigListOutcome SsaClient::DescribeConfigList(const DescribeConfigListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeConfigList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeConfigListResponse rsp = DescribeConfigListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeConfigListOutcome(rsp);
        else
            return DescribeConfigListOutcome(o.GetError());
    }
    else
    {
        return DescribeConfigListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeConfigListAsync(const DescribeConfigListRequest& request, const DescribeConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeConfigList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeConfigListOutcomeCallable SsaClient::DescribeConfigListCallable(const DescribeConfigListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeConfigListOutcome()>>(
        [this, request]()
        {
            return this->DescribeConfigList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeEventDetailOutcome SsaClient::DescribeEventDetail(const DescribeEventDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeEventDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeEventDetailResponse rsp = DescribeEventDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeEventDetailOutcome(rsp);
        else
            return DescribeEventDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeEventDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeEventDetailAsync(const DescribeEventDetailRequest& request, const DescribeEventDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeEventDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeEventDetailOutcomeCallable SsaClient::DescribeEventDetailCallable(const DescribeEventDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeEventDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeEventDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeLeakDetectionListOutcome SsaClient::DescribeLeakDetectionList(const DescribeLeakDetectionListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeLeakDetectionList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeLeakDetectionListResponse rsp = DescribeLeakDetectionListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeLeakDetectionListOutcome(rsp);
        else
            return DescribeLeakDetectionListOutcome(o.GetError());
    }
    else
    {
        return DescribeLeakDetectionListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeLeakDetectionListAsync(const DescribeLeakDetectionListRequest& request, const DescribeLeakDetectionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeLeakDetectionList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeLeakDetectionListOutcomeCallable SsaClient::DescribeLeakDetectionListCallable(const DescribeLeakDetectionListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeLeakDetectionListOutcome()>>(
        [this, request]()
        {
            return this->DescribeLeakDetectionList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeMappingResultsOutcome SsaClient::DescribeMappingResults(const DescribeMappingResultsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMappingResults");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMappingResultsResponse rsp = DescribeMappingResultsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMappingResultsOutcome(rsp);
        else
            return DescribeMappingResultsOutcome(o.GetError());
    }
    else
    {
        return DescribeMappingResultsOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeMappingResultsAsync(const DescribeMappingResultsRequest& request, const DescribeMappingResultsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMappingResults(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeMappingResultsOutcomeCallable SsaClient::DescribeMappingResultsCallable(const DescribeMappingResultsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMappingResultsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMappingResults(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeSafetyEventListOutcome SsaClient::DescribeSafetyEventList(const DescribeSafetyEventListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSafetyEventList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSafetyEventListResponse rsp = DescribeSafetyEventListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSafetyEventListOutcome(rsp);
        else
            return DescribeSafetyEventListOutcome(o.GetError());
    }
    else
    {
        return DescribeSafetyEventListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSafetyEventListAsync(const DescribeSafetyEventListRequest& request, const DescribeSafetyEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSafetyEventList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeSafetyEventListOutcomeCallable SsaClient::DescribeSafetyEventListCallable(const DescribeSafetyEventListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSafetyEventListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSafetyEventList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeSocAlertDetailsOutcome SsaClient::DescribeSocAlertDetails(const DescribeSocAlertDetailsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocAlertDetails");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocAlertDetailsResponse rsp = DescribeSocAlertDetailsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocAlertDetailsOutcome(rsp);
        else
            return DescribeSocAlertDetailsOutcome(o.GetError());
    }
    else
    {
        return DescribeSocAlertDetailsOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocAlertDetailsAsync(const DescribeSocAlertDetailsRequest& request, const DescribeSocAlertDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSocAlertDetails(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeSocAlertDetailsOutcomeCallable SsaClient::DescribeSocAlertDetailsCallable(const DescribeSocAlertDetailsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSocAlertDetailsOutcome()>>(
        [this, request]()
        {
            return this->DescribeSocAlertDetails(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeSocAlertListOutcome SsaClient::DescribeSocAlertList(const DescribeSocAlertListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocAlertList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocAlertListResponse rsp = DescribeSocAlertListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocAlertListOutcome(rsp);
        else
            return DescribeSocAlertListOutcome(o.GetError());
    }
    else
    {
        return DescribeSocAlertListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocAlertListAsync(const DescribeSocAlertListRequest& request, const DescribeSocAlertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSocAlertList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeSocAlertListOutcomeCallable SsaClient::DescribeSocAlertListCallable(const DescribeSocAlertListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSocAlertListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSocAlertList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeSocCheckItemListOutcome SsaClient::DescribeSocCheckItemList(const DescribeSocCheckItemListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocCheckItemList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocCheckItemListResponse rsp = DescribeSocCheckItemListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocCheckItemListOutcome(rsp);
        else
            return DescribeSocCheckItemListOutcome(o.GetError());
    }
    else
    {
        return DescribeSocCheckItemListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocCheckItemListAsync(const DescribeSocCheckItemListRequest& request, const DescribeSocCheckItemListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSocCheckItemList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeSocCheckItemListOutcomeCallable SsaClient::DescribeSocCheckItemListCallable(const DescribeSocCheckItemListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSocCheckItemListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSocCheckItemList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeSocCheckResultListOutcome SsaClient::DescribeSocCheckResultList(const DescribeSocCheckResultListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocCheckResultList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocCheckResultListResponse rsp = DescribeSocCheckResultListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocCheckResultListOutcome(rsp);
        else
            return DescribeSocCheckResultListOutcome(o.GetError());
    }
    else
    {
        return DescribeSocCheckResultListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocCheckResultListAsync(const DescribeSocCheckResultListRequest& request, const DescribeSocCheckResultListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSocCheckResultList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeSocCheckResultListOutcomeCallable SsaClient::DescribeSocCheckResultListCallable(const DescribeSocCheckResultListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSocCheckResultListOutcome()>>(
        [this, request]()
        {
            return this->DescribeSocCheckResultList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeSocCspmComplianceOutcome SsaClient::DescribeSocCspmCompliance(const DescribeSocCspmComplianceRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeSocCspmCompliance");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeSocCspmComplianceResponse rsp = DescribeSocCspmComplianceResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeSocCspmComplianceOutcome(rsp);
        else
            return DescribeSocCspmComplianceOutcome(o.GetError());
    }
    else
    {
        return DescribeSocCspmComplianceOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeSocCspmComplianceAsync(const DescribeSocCspmComplianceRequest& request, const DescribeSocCspmComplianceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeSocCspmCompliance(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeSocCspmComplianceOutcomeCallable SsaClient::DescribeSocCspmComplianceCallable(const DescribeSocCspmComplianceRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeSocCspmComplianceOutcome()>>(
        [this, request]()
        {
            return this->DescribeSocCspmCompliance(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeVulDetailOutcome SsaClient::DescribeVulDetail(const DescribeVulDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulDetailResponse rsp = DescribeVulDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulDetailOutcome(rsp);
        else
            return DescribeVulDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeVulDetailOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeVulDetailAsync(const DescribeVulDetailRequest& request, const DescribeVulDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeVulDetailOutcomeCallable SsaClient::DescribeVulDetailCallable(const DescribeVulDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::DescribeVulListOutcome SsaClient::DescribeVulList(const DescribeVulListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeVulList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeVulListResponse rsp = DescribeVulListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeVulListOutcome(rsp);
        else
            return DescribeVulListOutcome(o.GetError());
    }
    else
    {
        return DescribeVulListOutcome(outcome.GetError());
    }
}

void SsaClient::DescribeVulListAsync(const DescribeVulListRequest& request, const DescribeVulListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeVulList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::DescribeVulListOutcomeCallable SsaClient::DescribeVulListCallable(const DescribeVulListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeVulListOutcome()>>(
        [this, request]()
        {
            return this->DescribeVulList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

SsaClient::SaDivulgeDataQueryPubOutcome SsaClient::SaDivulgeDataQueryPub(const SaDivulgeDataQueryPubRequest &request)
{
    auto outcome = MakeRequest(request, "SaDivulgeDataQueryPub");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        SaDivulgeDataQueryPubResponse rsp = SaDivulgeDataQueryPubResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return SaDivulgeDataQueryPubOutcome(rsp);
        else
            return SaDivulgeDataQueryPubOutcome(o.GetError());
    }
    else
    {
        return SaDivulgeDataQueryPubOutcome(outcome.GetError());
    }
}

void SsaClient::SaDivulgeDataQueryPubAsync(const SaDivulgeDataQueryPubRequest& request, const SaDivulgeDataQueryPubAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->SaDivulgeDataQueryPub(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

SsaClient::SaDivulgeDataQueryPubOutcomeCallable SsaClient::SaDivulgeDataQueryPubCallable(const SaDivulgeDataQueryPubRequest &request)
{
    auto task = std::make_shared<std::packaged_task<SaDivulgeDataQueryPubOutcome()>>(
        [this, request]()
        {
            return this->SaDivulgeDataQueryPub(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

