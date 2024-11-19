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

#include <tencentcloud/rce/v20201103/RceClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Rce::V20201103;
using namespace TencentCloud::Rce::V20201103::Model;
using namespace std;

namespace
{
    const string VERSION = "2020-11-03";
    const string ENDPOINT = "rce.tencentcloudapi.com";
}

RceClient::RceClient(const Credential &credential, const string &region) :
    RceClient(credential, region, ClientProfile())
{
}

RceClient::RceClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


RceClient::CreateNameListOutcome RceClient::CreateNameList(const CreateNameListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateNameListResponse rsp = CreateNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateNameListOutcome(rsp);
        else
            return CreateNameListOutcome(o.GetError());
    }
    else
    {
        return CreateNameListOutcome(outcome.GetError());
    }
}

void RceClient::CreateNameListAsync(const CreateNameListRequest& request, const CreateNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateNameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::CreateNameListOutcomeCallable RceClient::CreateNameListCallable(const CreateNameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateNameListOutcome()>>(
        [this, request]()
        {
            return this->CreateNameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::DeleteNameListOutcome RceClient::DeleteNameList(const DeleteNameListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNameListResponse rsp = DeleteNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNameListOutcome(rsp);
        else
            return DeleteNameListOutcome(o.GetError());
    }
    else
    {
        return DeleteNameListOutcome(outcome.GetError());
    }
}

void RceClient::DeleteNameListAsync(const DeleteNameListRequest& request, const DeleteNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DeleteNameListOutcomeCallable RceClient::DeleteNameListCallable(const DeleteNameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNameListOutcome()>>(
        [this, request]()
        {
            return this->DeleteNameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::DeleteNameListDataOutcome RceClient::DeleteNameListData(const DeleteNameListDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteNameListData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteNameListDataResponse rsp = DeleteNameListDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteNameListDataOutcome(rsp);
        else
            return DeleteNameListDataOutcome(o.GetError());
    }
    else
    {
        return DeleteNameListDataOutcome(outcome.GetError());
    }
}

void RceClient::DeleteNameListDataAsync(const DeleteNameListDataRequest& request, const DeleteNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteNameListData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DeleteNameListDataOutcomeCallable RceClient::DeleteNameListDataCallable(const DeleteNameListDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteNameListDataOutcome()>>(
        [this, request]()
        {
            return this->DeleteNameListData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::DescribeNameListOutcome RceClient::DescribeNameList(const DescribeNameListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNameListResponse rsp = DescribeNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNameListOutcome(rsp);
        else
            return DescribeNameListOutcome(o.GetError());
    }
    else
    {
        return DescribeNameListOutcome(outcome.GetError());
    }
}

void RceClient::DescribeNameListAsync(const DescribeNameListRequest& request, const DescribeNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DescribeNameListOutcomeCallable RceClient::DescribeNameListCallable(const DescribeNameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNameListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::DescribeNameListDataListOutcome RceClient::DescribeNameListDataList(const DescribeNameListDataListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNameListDataList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNameListDataListResponse rsp = DescribeNameListDataListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNameListDataListOutcome(rsp);
        else
            return DescribeNameListDataListOutcome(o.GetError());
    }
    else
    {
        return DescribeNameListDataListOutcome(outcome.GetError());
    }
}

void RceClient::DescribeNameListDataListAsync(const DescribeNameListDataListRequest& request, const DescribeNameListDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNameListDataList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DescribeNameListDataListOutcomeCallable RceClient::DescribeNameListDataListCallable(const DescribeNameListDataListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNameListDataListOutcome()>>(
        [this, request]()
        {
            return this->DescribeNameListDataList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::DescribeNameListDetailOutcome RceClient::DescribeNameListDetail(const DescribeNameListDetailRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeNameListDetail");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeNameListDetailResponse rsp = DescribeNameListDetailResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeNameListDetailOutcome(rsp);
        else
            return DescribeNameListDetailOutcome(o.GetError());
    }
    else
    {
        return DescribeNameListDetailOutcome(outcome.GetError());
    }
}

void RceClient::DescribeNameListDetailAsync(const DescribeNameListDetailRequest& request, const DescribeNameListDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeNameListDetail(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DescribeNameListDetailOutcomeCallable RceClient::DescribeNameListDetailCallable(const DescribeNameListDetailRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeNameListDetailOutcome()>>(
        [this, request]()
        {
            return this->DescribeNameListDetail(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::DescribeUserUsageCntOutcome RceClient::DescribeUserUsageCnt(const DescribeUserUsageCntRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeUserUsageCnt");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeUserUsageCntResponse rsp = DescribeUserUsageCntResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeUserUsageCntOutcome(rsp);
        else
            return DescribeUserUsageCntOutcome(o.GetError());
    }
    else
    {
        return DescribeUserUsageCntOutcome(outcome.GetError());
    }
}

void RceClient::DescribeUserUsageCntAsync(const DescribeUserUsageCntRequest& request, const DescribeUserUsageCntAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeUserUsageCnt(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::DescribeUserUsageCntOutcomeCallable RceClient::DescribeUserUsageCntCallable(const DescribeUserUsageCntRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeUserUsageCntOutcome()>>(
        [this, request]()
        {
            return this->DescribeUserUsageCnt(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::ImportNameListDataOutcome RceClient::ImportNameListData(const ImportNameListDataRequest &request)
{
    auto outcome = MakeRequest(request, "ImportNameListData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ImportNameListDataResponse rsp = ImportNameListDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ImportNameListDataOutcome(rsp);
        else
            return ImportNameListDataOutcome(o.GetError());
    }
    else
    {
        return ImportNameListDataOutcome(outcome.GetError());
    }
}

void RceClient::ImportNameListDataAsync(const ImportNameListDataRequest& request, const ImportNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ImportNameListData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::ImportNameListDataOutcomeCallable RceClient::ImportNameListDataCallable(const ImportNameListDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ImportNameListDataOutcome()>>(
        [this, request]()
        {
            return this->ImportNameListData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::ManageMarketingRiskOutcome RceClient::ManageMarketingRisk(const ManageMarketingRiskRequest &request)
{
    auto outcome = MakeRequest(request, "ManageMarketingRisk");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ManageMarketingRiskResponse rsp = ManageMarketingRiskResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ManageMarketingRiskOutcome(rsp);
        else
            return ManageMarketingRiskOutcome(o.GetError());
    }
    else
    {
        return ManageMarketingRiskOutcome(outcome.GetError());
    }
}

void RceClient::ManageMarketingRiskAsync(const ManageMarketingRiskRequest& request, const ManageMarketingRiskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ManageMarketingRisk(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::ManageMarketingRiskOutcomeCallable RceClient::ManageMarketingRiskCallable(const ManageMarketingRiskRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ManageMarketingRiskOutcome()>>(
        [this, request]()
        {
            return this->ManageMarketingRisk(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::ModifyNameListOutcome RceClient::ModifyNameList(const ModifyNameListRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNameList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNameListResponse rsp = ModifyNameListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNameListOutcome(rsp);
        else
            return ModifyNameListOutcome(o.GetError());
    }
    else
    {
        return ModifyNameListOutcome(outcome.GetError());
    }
}

void RceClient::ModifyNameListAsync(const ModifyNameListRequest& request, const ModifyNameListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNameList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::ModifyNameListOutcomeCallable RceClient::ModifyNameListCallable(const ModifyNameListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNameListOutcome()>>(
        [this, request]()
        {
            return this->ModifyNameList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

RceClient::ModifyNameListDataOutcome RceClient::ModifyNameListData(const ModifyNameListDataRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyNameListData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyNameListDataResponse rsp = ModifyNameListDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyNameListDataOutcome(rsp);
        else
            return ModifyNameListDataOutcome(o.GetError());
    }
    else
    {
        return ModifyNameListDataOutcome(outcome.GetError());
    }
}

void RceClient::ModifyNameListDataAsync(const ModifyNameListDataRequest& request, const ModifyNameListDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyNameListData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

RceClient::ModifyNameListDataOutcomeCallable RceClient::ModifyNameListDataCallable(const ModifyNameListDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyNameListDataOutcome()>>(
        [this, request]()
        {
            return this->ModifyNameListData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

