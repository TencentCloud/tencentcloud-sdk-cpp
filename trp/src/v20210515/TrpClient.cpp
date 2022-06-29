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

#include <tencentcloud/trp/v20210515/TrpClient.h>
#include <tencentcloud/core/Executor.h>
#include <tencentcloud/core/Runnable.h>

using namespace TencentCloud;
using namespace TencentCloud::Trp::V20210515;
using namespace TencentCloud::Trp::V20210515::Model;
using namespace std;

namespace
{
    const string VERSION = "2021-05-15";
    const string ENDPOINT = "trp.tencentcloudapi.com";
}

TrpClient::TrpClient(const Credential &credential, const string &region) :
    TrpClient(credential, region, ClientProfile())
{
}

TrpClient::TrpClient(const Credential &credential, const string &region, const ClientProfile &profile) :
    AbstractClient(ENDPOINT, VERSION, credential, region, profile)
{
}


TrpClient::CreateCodeBatchOutcome TrpClient::CreateCodeBatch(const CreateCodeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodeBatchResponse rsp = CreateCodeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodeBatchOutcome(rsp);
        else
            return CreateCodeBatchOutcome(o.GetError());
    }
    else
    {
        return CreateCodeBatchOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCodeBatchAsync(const CreateCodeBatchRequest& request, const CreateCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodeBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateCodeBatchOutcomeCallable TrpClient::CreateCodeBatchCallable(const CreateCodeBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodeBatchOutcome()>>(
        [this, request]()
        {
            return this->CreateCodeBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::CreateCodePackOutcome TrpClient::CreateCodePack(const CreateCodePackRequest &request)
{
    auto outcome = MakeRequest(request, "CreateCodePack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateCodePackResponse rsp = CreateCodePackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateCodePackOutcome(rsp);
        else
            return CreateCodePackOutcome(o.GetError());
    }
    else
    {
        return CreateCodePackOutcome(outcome.GetError());
    }
}

void TrpClient::CreateCodePackAsync(const CreateCodePackRequest& request, const CreateCodePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateCodePack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateCodePackOutcomeCallable TrpClient::CreateCodePackCallable(const CreateCodePackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateCodePackOutcome()>>(
        [this, request]()
        {
            return this->CreateCodePack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::CreateMerchantOutcome TrpClient::CreateMerchant(const CreateMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "CreateMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateMerchantResponse rsp = CreateMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateMerchantOutcome(rsp);
        else
            return CreateMerchantOutcome(o.GetError());
    }
    else
    {
        return CreateMerchantOutcome(outcome.GetError());
    }
}

void TrpClient::CreateMerchantAsync(const CreateMerchantRequest& request, const CreateMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateMerchantOutcomeCallable TrpClient::CreateMerchantCallable(const CreateMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateMerchantOutcome()>>(
        [this, request]()
        {
            return this->CreateMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::CreateProductOutcome TrpClient::CreateProduct(const CreateProductRequest &request)
{
    auto outcome = MakeRequest(request, "CreateProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateProductResponse rsp = CreateProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateProductOutcome(rsp);
        else
            return CreateProductOutcome(o.GetError());
    }
    else
    {
        return CreateProductOutcome(outcome.GetError());
    }
}

void TrpClient::CreateProductAsync(const CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateProductOutcomeCallable TrpClient::CreateProductCallable(const CreateProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateProductOutcome()>>(
        [this, request]()
        {
            return this->CreateProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::CreateTraceChainOutcome TrpClient::CreateTraceChain(const CreateTraceChainRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceChain");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceChainResponse rsp = CreateTraceChainResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceChainOutcome(rsp);
        else
            return CreateTraceChainOutcome(o.GetError());
    }
    else
    {
        return CreateTraceChainOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceChainAsync(const CreateTraceChainRequest& request, const CreateTraceChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTraceChain(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateTraceChainOutcomeCallable TrpClient::CreateTraceChainCallable(const CreateTraceChainRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTraceChainOutcome()>>(
        [this, request]()
        {
            return this->CreateTraceChain(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::CreateTraceCodesOutcome TrpClient::CreateTraceCodes(const CreateTraceCodesRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceCodesResponse rsp = CreateTraceCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceCodesOutcome(rsp);
        else
            return CreateTraceCodesOutcome(o.GetError());
    }
    else
    {
        return CreateTraceCodesOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceCodesAsync(const CreateTraceCodesRequest& request, const CreateTraceCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTraceCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateTraceCodesOutcomeCallable TrpClient::CreateTraceCodesCallable(const CreateTraceCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTraceCodesOutcome()>>(
        [this, request]()
        {
            return this->CreateTraceCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::CreateTraceDataOutcome TrpClient::CreateTraceData(const CreateTraceDataRequest &request)
{
    auto outcome = MakeRequest(request, "CreateTraceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        CreateTraceDataResponse rsp = CreateTraceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return CreateTraceDataOutcome(rsp);
        else
            return CreateTraceDataOutcome(o.GetError());
    }
    else
    {
        return CreateTraceDataOutcome(outcome.GetError());
    }
}

void TrpClient::CreateTraceDataAsync(const CreateTraceDataRequest& request, const CreateTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->CreateTraceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::CreateTraceDataOutcomeCallable TrpClient::CreateTraceDataCallable(const CreateTraceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<CreateTraceDataOutcome()>>(
        [this, request]()
        {
            return this->CreateTraceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DeleteCodeBatchOutcome TrpClient::DeleteCodeBatch(const DeleteCodeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteCodeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteCodeBatchResponse rsp = DeleteCodeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteCodeBatchOutcome(rsp);
        else
            return DeleteCodeBatchOutcome(o.GetError());
    }
    else
    {
        return DeleteCodeBatchOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteCodeBatchAsync(const DeleteCodeBatchRequest& request, const DeleteCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteCodeBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DeleteCodeBatchOutcomeCallable TrpClient::DeleteCodeBatchCallable(const DeleteCodeBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteCodeBatchOutcome()>>(
        [this, request]()
        {
            return this->DeleteCodeBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DeleteMerchantOutcome TrpClient::DeleteMerchant(const DeleteMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteMerchantResponse rsp = DeleteMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteMerchantOutcome(rsp);
        else
            return DeleteMerchantOutcome(o.GetError());
    }
    else
    {
        return DeleteMerchantOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteMerchantAsync(const DeleteMerchantRequest& request, const DeleteMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DeleteMerchantOutcomeCallable TrpClient::DeleteMerchantCallable(const DeleteMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteMerchantOutcome()>>(
        [this, request]()
        {
            return this->DeleteMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DeleteProductOutcome TrpClient::DeleteProduct(const DeleteProductRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteProductResponse rsp = DeleteProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteProductOutcome(rsp);
        else
            return DeleteProductOutcome(o.GetError());
    }
    else
    {
        return DeleteProductOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteProductAsync(const DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DeleteProductOutcomeCallable TrpClient::DeleteProductCallable(const DeleteProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteProductOutcome()>>(
        [this, request]()
        {
            return this->DeleteProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DeleteTraceDataOutcome TrpClient::DeleteTraceData(const DeleteTraceDataRequest &request)
{
    auto outcome = MakeRequest(request, "DeleteTraceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DeleteTraceDataResponse rsp = DeleteTraceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DeleteTraceDataOutcome(rsp);
        else
            return DeleteTraceDataOutcome(o.GetError());
    }
    else
    {
        return DeleteTraceDataOutcome(outcome.GetError());
    }
}

void TrpClient::DeleteTraceDataAsync(const DeleteTraceDataRequest& request, const DeleteTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DeleteTraceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DeleteTraceDataOutcomeCallable TrpClient::DeleteTraceDataCallable(const DeleteTraceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DeleteTraceDataOutcome()>>(
        [this, request]()
        {
            return this->DeleteTraceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeCodeBatchByIdOutcome TrpClient::DescribeCodeBatchById(const DescribeCodeBatchByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeBatchById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeBatchByIdResponse rsp = DescribeCodeBatchByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeBatchByIdOutcome(rsp);
        else
            return DescribeCodeBatchByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeBatchByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodeBatchByIdAsync(const DescribeCodeBatchByIdRequest& request, const DescribeCodeBatchByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeBatchById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeCodeBatchByIdOutcomeCallable TrpClient::DescribeCodeBatchByIdCallable(const DescribeCodeBatchByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeBatchByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeBatchById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeCodeBatchsOutcome TrpClient::DescribeCodeBatchs(const DescribeCodeBatchsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodeBatchs");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodeBatchsResponse rsp = DescribeCodeBatchsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodeBatchsOutcome(rsp);
        else
            return DescribeCodeBatchsOutcome(o.GetError());
    }
    else
    {
        return DescribeCodeBatchsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodeBatchsAsync(const DescribeCodeBatchsRequest& request, const DescribeCodeBatchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodeBatchs(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeCodeBatchsOutcomeCallable TrpClient::DescribeCodeBatchsCallable(const DescribeCodeBatchsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodeBatchsOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodeBatchs(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeCodePacksOutcome TrpClient::DescribeCodePacks(const DescribeCodePacksRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodePacks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodePacksResponse rsp = DescribeCodePacksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodePacksOutcome(rsp);
        else
            return DescribeCodePacksOutcome(o.GetError());
    }
    else
    {
        return DescribeCodePacksOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodePacksAsync(const DescribeCodePacksRequest& request, const DescribeCodePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodePacks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeCodePacksOutcomeCallable TrpClient::DescribeCodePacksCallable(const DescribeCodePacksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodePacksOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodePacks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeCodesByPackOutcome TrpClient::DescribeCodesByPack(const DescribeCodesByPackRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeCodesByPack");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeCodesByPackResponse rsp = DescribeCodesByPackResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeCodesByPackOutcome(rsp);
        else
            return DescribeCodesByPackOutcome(o.GetError());
    }
    else
    {
        return DescribeCodesByPackOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeCodesByPackAsync(const DescribeCodesByPackRequest& request, const DescribeCodesByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeCodesByPack(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeCodesByPackOutcomeCallable TrpClient::DescribeCodesByPackCallable(const DescribeCodesByPackRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeCodesByPackOutcome()>>(
        [this, request]()
        {
            return this->DescribeCodesByPack(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeMerchantByIdOutcome TrpClient::DescribeMerchantById(const DescribeMerchantByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMerchantById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMerchantByIdResponse rsp = DescribeMerchantByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMerchantByIdOutcome(rsp);
        else
            return DescribeMerchantByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeMerchantByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeMerchantByIdAsync(const DescribeMerchantByIdRequest& request, const DescribeMerchantByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMerchantById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeMerchantByIdOutcomeCallable TrpClient::DescribeMerchantByIdCallable(const DescribeMerchantByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMerchantByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeMerchantById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeMerchantsOutcome TrpClient::DescribeMerchants(const DescribeMerchantsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeMerchants");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeMerchantsResponse rsp = DescribeMerchantsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeMerchantsOutcome(rsp);
        else
            return DescribeMerchantsOutcome(o.GetError());
    }
    else
    {
        return DescribeMerchantsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeMerchantsAsync(const DescribeMerchantsRequest& request, const DescribeMerchantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeMerchants(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeMerchantsOutcomeCallable TrpClient::DescribeMerchantsCallable(const DescribeMerchantsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeMerchantsOutcome()>>(
        [this, request]()
        {
            return this->DescribeMerchants(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeProductByIdOutcome TrpClient::DescribeProductById(const DescribeProductByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProductById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductByIdResponse rsp = DescribeProductByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductByIdOutcome(rsp);
        else
            return DescribeProductByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeProductByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeProductByIdAsync(const DescribeProductByIdRequest& request, const DescribeProductByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProductById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeProductByIdOutcomeCallable TrpClient::DescribeProductByIdCallable(const DescribeProductByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeProductById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeProductsOutcome TrpClient::DescribeProducts(const DescribeProductsRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeProducts");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeProductsResponse rsp = DescribeProductsResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeProductsOutcome(rsp);
        else
            return DescribeProductsOutcome(o.GetError());
    }
    else
    {
        return DescribeProductsOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeProductsAsync(const DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeProducts(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeProductsOutcomeCallable TrpClient::DescribeProductsCallable(const DescribeProductsRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeProductsOutcome()>>(
        [this, request]()
        {
            return this->DescribeProducts(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeTraceCodeByIdOutcome TrpClient::DescribeTraceCodeById(const DescribeTraceCodeByIdRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceCodeById");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceCodeByIdResponse rsp = DescribeTraceCodeByIdResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceCodeByIdOutcome(rsp);
        else
            return DescribeTraceCodeByIdOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceCodeByIdOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceCodeByIdAsync(const DescribeTraceCodeByIdRequest& request, const DescribeTraceCodeByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTraceCodeById(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeTraceCodeByIdOutcomeCallable TrpClient::DescribeTraceCodeByIdCallable(const DescribeTraceCodeByIdRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTraceCodeByIdOutcome()>>(
        [this, request]()
        {
            return this->DescribeTraceCodeById(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeTraceCodesOutcome TrpClient::DescribeTraceCodes(const DescribeTraceCodesRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceCodes");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceCodesResponse rsp = DescribeTraceCodesResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceCodesOutcome(rsp);
        else
            return DescribeTraceCodesOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceCodesOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceCodesAsync(const DescribeTraceCodesRequest& request, const DescribeTraceCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTraceCodes(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeTraceCodesOutcomeCallable TrpClient::DescribeTraceCodesCallable(const DescribeTraceCodesRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTraceCodesOutcome()>>(
        [this, request]()
        {
            return this->DescribeTraceCodes(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::DescribeTraceDataListOutcome TrpClient::DescribeTraceDataList(const DescribeTraceDataListRequest &request)
{
    auto outcome = MakeRequest(request, "DescribeTraceDataList");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        DescribeTraceDataListResponse rsp = DescribeTraceDataListResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return DescribeTraceDataListOutcome(rsp);
        else
            return DescribeTraceDataListOutcome(o.GetError());
    }
    else
    {
        return DescribeTraceDataListOutcome(outcome.GetError());
    }
}

void TrpClient::DescribeTraceDataListAsync(const DescribeTraceDataListRequest& request, const DescribeTraceDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->DescribeTraceDataList(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::DescribeTraceDataListOutcomeCallable TrpClient::DescribeTraceDataListCallable(const DescribeTraceDataListRequest &request)
{
    auto task = std::make_shared<std::packaged_task<DescribeTraceDataListOutcome()>>(
        [this, request]()
        {
            return this->DescribeTraceDataList(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::ModifyCodeBatchOutcome TrpClient::ModifyCodeBatch(const ModifyCodeBatchRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyCodeBatch");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyCodeBatchResponse rsp = ModifyCodeBatchResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyCodeBatchOutcome(rsp);
        else
            return ModifyCodeBatchOutcome(o.GetError());
    }
    else
    {
        return ModifyCodeBatchOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyCodeBatchAsync(const ModifyCodeBatchRequest& request, const ModifyCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyCodeBatch(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::ModifyCodeBatchOutcomeCallable TrpClient::ModifyCodeBatchCallable(const ModifyCodeBatchRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyCodeBatchOutcome()>>(
        [this, request]()
        {
            return this->ModifyCodeBatch(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::ModifyMerchantOutcome TrpClient::ModifyMerchant(const ModifyMerchantRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyMerchant");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyMerchantResponse rsp = ModifyMerchantResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyMerchantOutcome(rsp);
        else
            return ModifyMerchantOutcome(o.GetError());
    }
    else
    {
        return ModifyMerchantOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyMerchantAsync(const ModifyMerchantRequest& request, const ModifyMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyMerchant(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::ModifyMerchantOutcomeCallable TrpClient::ModifyMerchantCallable(const ModifyMerchantRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyMerchantOutcome()>>(
        [this, request]()
        {
            return this->ModifyMerchant(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::ModifyProductOutcome TrpClient::ModifyProduct(const ModifyProductRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyProduct");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyProductResponse rsp = ModifyProductResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyProductOutcome(rsp);
        else
            return ModifyProductOutcome(o.GetError());
    }
    else
    {
        return ModifyProductOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyProductAsync(const ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyProduct(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::ModifyProductOutcomeCallable TrpClient::ModifyProductCallable(const ModifyProductRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyProductOutcome()>>(
        [this, request]()
        {
            return this->ModifyProduct(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::ModifyTraceCodeOutcome TrpClient::ModifyTraceCode(const ModifyTraceCodeRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceCode");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceCodeResponse rsp = ModifyTraceCodeResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceCodeOutcome(rsp);
        else
            return ModifyTraceCodeOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceCodeOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceCodeAsync(const ModifyTraceCodeRequest& request, const ModifyTraceCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTraceCode(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::ModifyTraceCodeOutcomeCallable TrpClient::ModifyTraceCodeCallable(const ModifyTraceCodeRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTraceCodeOutcome()>>(
        [this, request]()
        {
            return this->ModifyTraceCode(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::ModifyTraceDataOutcome TrpClient::ModifyTraceData(const ModifyTraceDataRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceData");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceDataResponse rsp = ModifyTraceDataResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceDataOutcome(rsp);
        else
            return ModifyTraceDataOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceDataOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceDataAsync(const ModifyTraceDataRequest& request, const ModifyTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTraceData(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::ModifyTraceDataOutcomeCallable TrpClient::ModifyTraceDataCallable(const ModifyTraceDataRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTraceDataOutcome()>>(
        [this, request]()
        {
            return this->ModifyTraceData(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

TrpClient::ModifyTraceDataRanksOutcome TrpClient::ModifyTraceDataRanks(const ModifyTraceDataRanksRequest &request)
{
    auto outcome = MakeRequest(request, "ModifyTraceDataRanks");
    if (outcome.IsSuccess())
    {
        auto r = outcome.GetResult();
        string payload = string(r.Body(), r.BodySize());
        ModifyTraceDataRanksResponse rsp = ModifyTraceDataRanksResponse();
        auto o = rsp.Deserialize(payload);
        if (o.IsSuccess())
            return ModifyTraceDataRanksOutcome(rsp);
        else
            return ModifyTraceDataRanksOutcome(o.GetError());
    }
    else
    {
        return ModifyTraceDataRanksOutcome(outcome.GetError());
    }
}

void TrpClient::ModifyTraceDataRanksAsync(const ModifyTraceDataRanksRequest& request, const ModifyTraceDataRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context)
{
    auto fn = [this, request, handler, context]()
    {
        handler(this, request, this->ModifyTraceDataRanks(request), context);
    };

    Executor::GetInstance()->Submit(new Runnable(fn));
}

TrpClient::ModifyTraceDataRanksOutcomeCallable TrpClient::ModifyTraceDataRanksCallable(const ModifyTraceDataRanksRequest &request)
{
    auto task = std::make_shared<std::packaged_task<ModifyTraceDataRanksOutcome()>>(
        [this, request]()
        {
            return this->ModifyTraceDataRanks(request);
        }
    );

    Executor::GetInstance()->Submit(new Runnable([task]() { (*task)(); }));
    return task->get_future();
}

