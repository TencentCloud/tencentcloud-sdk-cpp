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

#include <tencentcloud/bma/v20221115/BmaClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Bma::V20221115;
using namespace TencentCloud::Bma::V20221115::Model;
using namespace std;

namespace
{
    const string VERSION = "2022-11-15";
    const string ENDPOINT = "bma.tencentcloudapi.com";
}

BmaClient::BmaClient(const Credential &credential, const string &region) :
    BmaClient(credential, region, ClientProfile())
{
}

BmaClient::BmaClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


BmaClient::CreateBPBrandOutcome BmaClient::CreateBPBrand(const CreateBPBrandRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPBrand");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPBrandResponse rsp = CreateBPBrandResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPBrandOutcome(rsp);
        else
            return CreateBPBrandOutcome(o.GetError());
    }
    else
    {
        return CreateBPBrandOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPBrandAsync(const CreateBPBrandRequest& request, const CreateBPBrandAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPBrand(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPBrandOutcomeCallable BmaClient::CreateBPBrandCallable(const CreateBPBrandRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPBrandOutcome()>>(
        [this, request]()
        {
            return this->CreateBPBrand(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPFakeAPPOutcome BmaClient::CreateBPFakeAPP(const CreateBPFakeAPPRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeAPP");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeAPPResponse rsp = CreateBPFakeAPPResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeAPPOutcome(rsp);
        else
            return CreateBPFakeAPPOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeAPPOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeAPPAsync(const CreateBPFakeAPPRequest& request, const CreateBPFakeAPPAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPFakeAPP(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPFakeAPPOutcomeCallable BmaClient::CreateBPFakeAPPCallable(const CreateBPFakeAPPRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPFakeAPPOutcome()>>(
        [this, request]()
        {
            return this->CreateBPFakeAPP(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPFakeAPPListOutcome BmaClient::CreateBPFakeAPPList(const CreateBPFakeAPPListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeAPPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeAPPListResponse rsp = CreateBPFakeAPPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeAPPListOutcome(rsp);
        else
            return CreateBPFakeAPPListOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeAPPListOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeAPPListAsync(const CreateBPFakeAPPListRequest& request, const CreateBPFakeAPPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPFakeAPPList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPFakeAPPListOutcomeCallable BmaClient::CreateBPFakeAPPListCallable(const CreateBPFakeAPPListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPFakeAPPListOutcome()>>(
        [this, request]()
        {
            return this->CreateBPFakeAPPList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPFakeURLOutcome BmaClient::CreateBPFakeURL(const CreateBPFakeURLRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeURL");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeURLResponse rsp = CreateBPFakeURLResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeURLOutcome(rsp);
        else
            return CreateBPFakeURLOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeURLOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeURLAsync(const CreateBPFakeURLRequest& request, const CreateBPFakeURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPFakeURL(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPFakeURLOutcomeCallable BmaClient::CreateBPFakeURLCallable(const CreateBPFakeURLRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPFakeURLOutcome()>>(
        [this, request]()
        {
            return this->CreateBPFakeURL(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPFakeURLsOutcome BmaClient::CreateBPFakeURLs(const CreateBPFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPFakeURLsResponse rsp = CreateBPFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPFakeURLsOutcome(rsp);
        else
            return CreateBPFakeURLsOutcome(o.GetError());
    }
    else
    {
        return CreateBPFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPFakeURLsAsync(const CreateBPFakeURLsRequest& request, const CreateBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPFakeURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPFakeURLsOutcomeCallable BmaClient::CreateBPFakeURLsCallable(const CreateBPFakeURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPFakeURLsOutcome()>>(
        [this, request]()
        {
            return this->CreateBPFakeURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::CreateBPWhiteListOutcome BmaClient::CreateBPWhiteList(const CreateBPWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "CreateBPWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateBPWhiteListResponse rsp = CreateBPWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateBPWhiteListOutcome(rsp);
        else
            return CreateBPWhiteListOutcome(o.GetError());
    }
    else
    {
        return CreateBPWhiteListOutcome(outcome.GetError());
    }
}

void BmaClient::CreateBPWhiteListAsync(const CreateBPWhiteListRequest& request, const CreateBPWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateBPWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::CreateBPWhiteListOutcomeCallable BmaClient::CreateBPWhiteListCallable(const CreateBPWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateBPWhiteListOutcome()>>(
        [this, request]()
        {
            return this->CreateBPWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DeleteBPWhiteListOutcome BmaClient::DeleteBPWhiteList(const DeleteBPWhiteListRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteBPWhiteList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteBPWhiteListResponse rsp = DeleteBPWhiteListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteBPWhiteListOutcome(rsp);
        else
            return DeleteBPWhiteListOutcome(o.GetError());
    }
    else
    {
        return DeleteBPWhiteListOutcome(outcome.GetError());
    }
}

void BmaClient::DeleteBPWhiteListAsync(const DeleteBPWhiteListRequest& request, const DeleteBPWhiteListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteBPWhiteList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DeleteBPWhiteListOutcomeCallable BmaClient::DeleteBPWhiteListCallable(const DeleteBPWhiteListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteBPWhiteListOutcome()>>(
        [this, request]()
        {
            return this->DeleteBPWhiteList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPBrandsOutcome BmaClient::DescribeBPBrands(const DescribeBPBrandsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPBrands");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPBrandsResponse rsp = DescribeBPBrandsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPBrandsOutcome(rsp);
        else
            return DescribeBPBrandsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPBrandsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPBrandsAsync(const DescribeBPBrandsRequest& request, const DescribeBPBrandsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPBrands(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPBrandsOutcomeCallable BmaClient::DescribeBPBrandsCallable(const DescribeBPBrandsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPBrandsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPBrands(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPFakeAPPListOutcome BmaClient::DescribeBPFakeAPPList(const DescribeBPFakeAPPListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPFakeAPPList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPFakeAPPListResponse rsp = DescribeBPFakeAPPListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPFakeAPPListOutcome(rsp);
        else
            return DescribeBPFakeAPPListOutcome(o.GetError());
    }
    else
    {
        return DescribeBPFakeAPPListOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPFakeAPPListAsync(const DescribeBPFakeAPPListRequest& request, const DescribeBPFakeAPPListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPFakeAPPList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPFakeAPPListOutcomeCallable BmaClient::DescribeBPFakeAPPListCallable(const DescribeBPFakeAPPListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPFakeAPPListOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPFakeAPPList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPFakeURLsOutcome BmaClient::DescribeBPFakeURLs(const DescribeBPFakeURLsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPFakeURLs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPFakeURLsResponse rsp = DescribeBPFakeURLsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPFakeURLsOutcome(rsp);
        else
            return DescribeBPFakeURLsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPFakeURLsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPFakeURLsAsync(const DescribeBPFakeURLsRequest& request, const DescribeBPFakeURLsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPFakeURLs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPFakeURLsOutcomeCallable BmaClient::DescribeBPFakeURLsCallable(const DescribeBPFakeURLsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPFakeURLsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPFakeURLs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

BmaClient::DescribeBPWhiteListsOutcome BmaClient::DescribeBPWhiteLists(const DescribeBPWhiteListsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeBPWhiteLists");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeBPWhiteListsResponse rsp = DescribeBPWhiteListsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeBPWhiteListsOutcome(rsp);
        else
            return DescribeBPWhiteListsOutcome(o.GetError());
    }
    else
    {
        return DescribeBPWhiteListsOutcome(outcome.GetError());
    }
}

void BmaClient::DescribeBPWhiteListsAsync(const DescribeBPWhiteListsRequest& request, const DescribeBPWhiteListsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeBPWhiteLists(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

BmaClient::DescribeBPWhiteListsOutcomeCallable BmaClient::DescribeBPWhiteListsCallable(const DescribeBPWhiteListsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeBPWhiteListsOutcome()>>(
        [this, request]()
        {
            return this->DescribeBPWhiteLists(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

