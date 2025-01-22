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

#include <tencentcloud/tccatalog/v20241024/TccatalogClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Tccatalog::V20241024;
using namespace TencentCloud::Tccatalog::V20241024::Model;
using namespace std;

namespace
{
    const string VERSION = "2024-10-24";
    const string ENDPOINT = "tccatalog.tencentcloudapi.com";
}

TccatalogClient::TccatalogClient(const Credential &credential, const string &region) :
    TccatalogClient(credential, region, ClientProfile())
{
}

TccatalogClient::TccatalogClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TccatalogClient::AcceptTccVpcEndPointConnectOutcome TccatalogClient::AcceptTccVpcEndPointConnect(const AcceptTccVpcEndPointConnectRequest &request)
{
    auto outcome = MakeRequest(request, "AcceptTccVpcEndPointConnect");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        AcceptTccVpcEndPointConnectResponse rsp = AcceptTccVpcEndPointConnectResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return AcceptTccVpcEndPointConnectOutcome(rsp);
        else
            return AcceptTccVpcEndPointConnectOutcome(o.GetError());
    }
    else
    {
        return AcceptTccVpcEndPointConnectOutcome(outcome.GetError());
    }
}

void TccatalogClient::AcceptTccVpcEndPointConnectAsync(const AcceptTccVpcEndPointConnectRequest& request, const AcceptTccVpcEndPointConnectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->AcceptTccVpcEndPointConnect(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TccatalogClient::AcceptTccVpcEndPointConnectOutcomeCallable TccatalogClient::AcceptTccVpcEndPointConnectCallable(const AcceptTccVpcEndPointConnectRequest &request)
{
    auto task = std::make_shared<std::packaged_task<AcceptTccVpcEndPointConnectOutcome()>>(
        [this, request]()
        {
            return this->AcceptTccVpcEndPointConnect(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TccatalogClient::BindTccVpcEndPointServiceWhiteListOutcome TccatalogClient::BindTccVpcEndPointServiceWhiteList(const BindTccVpcEndPointServiceWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "BindTccVpcEndPointServiceWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        BindTccVpcEndPointServiceWhiteListResponse rsp = BindTccVpcEndPointServiceWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return BindTccVpcEndPointServiceWhiteListOutcome(rsp);
        else
            return BindTccVpcEndPointServiceWhiteListOutcome(o.GetError());
    }
    else
    {
        return BindTccVpcEndPointServiceWhiteListOutcome(outcome.GetError());
    }
}

void TccatalogClient::BindTccVpcEndPointServiceWhiteListAsync(const BindTccVpcEndPointServiceWhiteListRequest& request, const BindTccVpcEndPointServiceWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->BindTccVpcEndPointServiceWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TccatalogClient::BindTccVpcEndPointServiceWhiteListOutcomeCallable TccatalogClient::BindTccVpcEndPointServiceWhiteListCallable(const BindTccVpcEndPointServiceWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<BindTccVpcEndPointServiceWhiteListOutcome()>>(
        [this, request]()
        {
            return this->BindTccVpcEndPointServiceWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TccatalogClient::DescribeTccCatalogOutcome TccatalogClient::DescribeTccCatalog(const DescribeTccCatalogRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTccCatalog");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTccCatalogResponse rsp = DescribeTccCatalogResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTccCatalogOutcome(rsp);
        else
            return DescribeTccCatalogOutcome(o.GetError());
    }
    else
    {
        return DescribeTccCatalogOutcome(outcome.GetError());
    }
}

void TccatalogClient::DescribeTccCatalogAsync(const DescribeTccCatalogRequest& request, const DescribeTccCatalogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTccCatalog(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TccatalogClient::DescribeTccCatalogOutcomeCallable TccatalogClient::DescribeTccCatalogCallable(const DescribeTccCatalogRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTccCatalogOutcome()>>(
        [this, request]()
        {
            return this->DescribeTccCatalog(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TccatalogClient::DescribeTccCatalogsOutcome TccatalogClient::DescribeTccCatalogs(const DescribeTccCatalogsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTccCatalogs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTccCatalogsResponse rsp = DescribeTccCatalogsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTccCatalogsOutcome(rsp);
        else
            return DescribeTccCatalogsOutcome(o.GetError());
    }
    else
    {
        return DescribeTccCatalogsOutcome(outcome.GetError());
    }
}

void TccatalogClient::DescribeTccCatalogsAsync(const DescribeTccCatalogsRequest& request, const DescribeTccCatalogsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTccCatalogs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TccatalogClient::DescribeTccCatalogsOutcomeCallable TccatalogClient::DescribeTccCatalogsCallable(const DescribeTccCatalogsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTccCatalogsOutcome()>>(
        [this, request]()
        {
            return this->DescribeTccCatalogs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

